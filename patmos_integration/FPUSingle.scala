/*
 * FPU for singel point floating point arithmetic
 *
 * Authors: Daniel [Harringer, Scheuchenstuhl], Stefan Ulmer
 *
 */

package io

import Chisel._

import patmos.Constants._

import ocp._

object FPUSingle extends DeviceObject {

  def init(params: Map[String, String]) = {}

  def create(params: Map[String, String]): FPUSingle = Module(new FPUSingle())
}

class FPUSingle() extends CoreDevice() {

	// Register Command
	val masterReg = RegNext(io.ocp.M)

	/* 
	The response register (respReg) and the data register (dataReg) 
	are temparal storages for the connections to the OCPMaster
	*/
	// default response
	val respReg = RegInit(OcpResp.NULL)
	respReg := OcpResp.NULL
	
	// data register
	val dataReg = RegInit(0.U(32.W))

	/*
	 These registers are used for the data coming form the master 
	some of them are used to provide data for the master
	*/
	// incoming data
	val enableReg = RegInit(0.U(1.W))
	/*
		0x01 = add
		0x02 = sub
		0x04 = mul
		0x08 = div
	*/
	val operationReg = RegInit(0.U(4.W)) 
	val operandA = RegInit(0.U(32.W)) 
	val operandB = RegInit(0.U(32.W))
	
	// outgoing data
	val resultReg = RegInit(0.U(32.W))
	/*
		0x0C = Zero (5)
		0x20 = Underflow (6)
		0x40 = Overflow (7)
		0x80 = Exception (8)
	*/
	val statusReg = RegInit(0.U(8.W))

	// process write commands
	when(masterReg.Cmd === OcpCmd.WR){
		// write a DVA, according to the protocol
		respReg := OcpResp.DVA
		/* 
		 check the register address of the masterReg 
		 and store the value according to it in correct registers
		 */
		 switch(masterReg.Addr(5, 0)){
		 	// address of register enable
			is(0x00.U){
				// enable Calculation
				enableReg := masterReg.Data(0)
			}
			// address of register operation
			is(0x04.U){
		 		// store the Data of the masterReg in the operation register
		 		operationReg := masterReg.Data(3, 0)
		 	}
		 	// address of register operandA
		 	is(0x08.U){
		 		// store the Data of the masterReg in the operandA register
		 		operandA := masterReg.Data
		 	}
		 	// address of register operandB
		 	is(0x0c.U){
		 		// store the Data of the masterReg in the operandB register
		 		operandB := masterReg.Data
		 	}
		 	
		 }
	}


	// process read commands
	when(masterReg.Cmd === OcpCmd.RD){
		// write a DVA, according to the protocol
		respReg := OcpResp.DVA
		/* 
		 check the register address of the masterReg 
		 and write the value according to it in data register
		 so the master can read it
		 */
		 switch(masterReg.Addr(5, 0)){
		 	// address of register enable
			is(0x00.U){
				// copy the contant of enableReg in the data register
				dataReg := Cat(0.U(31.W), enableReg)
			}
			// address of register operation
			is(0x04.U){
		 		// copy the contant of operationReg in the data register
		 		dataReg := Cat(0.U(28.W), operationReg)
		 	}
		 	// address of register operandA
		 	is(0x08.U){
		 		// copy the contant of operandA in the data register
		 		dataReg := operandA
		 	}
		 	// address of register operandB
		 	is(0x0c.U){
		 		// copy the contant of OperandB in the data register
		 		dataReg := operandB
		 	}
			// address to read result register
		 	is(0x10.U){
		 		// copy the result of the operation in the data register
		 		dataReg := resultReg
		 	}
		 	// address of status register
		 	is(0x14.U){
		 		// copy the status of the operation in the data register
		 		dataReg := Cat(0.U(24.W), statusReg)
		 	}
		 }
	}
	
	/* 
	* Instance Adder, Multiplier and Divider
	*/
  	var adder = Module(new Adder())
	var multiplier = Module(new Multiplier())
	var divider = Module(new Divider())

	// write the result according to the operation into the result register
	switch(operationReg){
		// add
		is(1.U){
			// Input
			adder.io.a := operandA
			adder.io.b := operandB
			adder.io.en_in := enableReg

			// Ouput
			resultReg := adder.io.c
			statusReg := Cat(0.U(1.W), adder.io.of, adder.io.uf, adder.io.zero, 0.U(4.W))
			enableReg := !(adder.io.en_out & enableReg)
		}
		// sub
		is(2.U){
			// Inputs
			adder.io.a := operandA
			adder.io.b := Cat(1.U(1.W), operandB(30, 0))
			adder.io.en_in := enableReg
			
			// Outputs
			resultReg := adder.io.c
			statusReg := Cat(0.U(1.W), adder.io.of, adder.io.uf, adder.io.zero, 0.U(4.W))
			enableReg := !(adder.io.en_out & enableReg)
		}
		// mul
		is(4.U){
			// Inputs
			multiplier.io.a := operandA
			multiplier.io.b := operandB
			multiplier.io.en_in := enableReg
			
			// Outputs
			resultReg := multiplier.io.c
			statusReg := Cat(multiplier.io.exception, 0.U(7.W))
			enableReg := !(multiplier.io.en_out & enableReg)
		}
		// div
		is(8.U){
			// Inputs
			divider.io.a := operandA
			divider.io.b := operandB
			divider.io.en_in := enableReg
			
			// Outputs
			resultReg := divider.io.c
			statusReg := Cat(divider.io.exception, 0.U(7.W))
			enableReg := !(divider.io.en_out & enableReg)
		}
	}

 
  // Connections to the master
  io.ocp.S.Resp := respReg
  io.ocp.S.Data := dataReg
  
}
