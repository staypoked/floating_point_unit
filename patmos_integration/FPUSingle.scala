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

	//	Register Command
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
	val operationReg = RegInit(0.U(3.W))
	val operandA = RegInit(0.U(32.W)) 
	val operandB = RegInit(0.U(32.W))
	
	// outgoing data
	val resultReg = RegInit(0.U(32.W))
	val statusReg = RegInit(2.U(6.W))

	// process write commands
	when(masterReg.Cmd === OcpCmd.WR){
		// write a DVA, according to the protocol
		respReg := OcpResp.DVA
		/* 
		 check the register address of the masterReg 
		 and store the value according to it in correct registers
		 */
		 switch(masterReg.Addr(5, 0)){
		 	// address of register operation
		 	is(0x00.U){
		 		// store the Data of the masterReg in the operation register
		 		operationReg := masterReg.Data(2, 0)
		 	}
		 	// address of register operandA
		 	is(0x04.U){
		 		// store the Data of the masterReg in the operandA register
		 		operandA := masterReg.Data
		 	}
		 	// address of register operandB
		 	is(0x08.U){
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
		 // address to read result register
		 	is(0x0c.U){
		 		// copy the result of the operation in the data register
		 		dataReg := resultReg
		 	}
		 	// address of status register
		 	is(0x10.U){
		 		// copy the status of the operation in the data register
		 		dataReg := Cat(0.U(26.W), statusReg)
		 	}
		 }
	}
	
	statusReg := operandB(5,0)
	
	
  var adder = Module(new Adder())

	switch(operationReg){
		is(1.U){
			adder.io.a := operandA
			adder.io.b := operandB
			resultReg := adder.io.c
			statusReg := adder.io.c(31, 26)
		}
		
	}

  //adder.io.a := operandA
  //adder.io.b := operandB
	//statusReg := 1.U//operandB(5,0)
	/*
	//_root_.Chisel.printf("OP: %b\n", operationReg)
  //_root_.Chisel.printf("A: %b\n", operandA)
  //_root_.Chisel.printf("B: %b\n", operandB)
  //_root_.Chisel.printf("Res: %b\n", resultReg)
  //_root_.Chisel.printf("Stat: %b\n", statusReg)
  */
  // Connections to the master
  io.ocp.S.Resp := respReg
  io.ocp.S.Data := dataReg
  
}
