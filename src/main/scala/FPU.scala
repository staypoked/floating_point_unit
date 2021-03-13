import Chisel.{fromIntToWidth, fromtIntToLiteral, is, switch, when}
import chisel3.{Bundle, Input, Module, Output, RegInit, UInt}

class FPU extends Module{
  val io = IO(new Bundle {
    val a = Input(UInt(32.W))
    val b = Input(UInt(32.W))
    val sel = Input(UInt(2.W))
    val c = Output(UInt(32.W))
  })


  // instantiate Adder and Multiplier
  var FPUAdder = Module(new Adder())
  FPUAdder.io.a := io.a
  FPUAdder.io.b := io.b
  var AdderResult = FPUAdder.io.c
  var AdderOverflow = FPUAdder.io.of
  var AdderUnderflow = FPUAdder.io.uf

  var FPUMultiplierDivisionUnit = Module(new Multiplier())
  FPUMultiplierDivisionUnit.io.a := io.a
  FPUMultiplierDivisionUnit.io.b := io.b
  FPUMultiplierDivisionUnit.io.sel := io.sel(0)
  var MultiplierDivisionUnitResult = FPUMultiplierDivisionUnit.io.c

  var tmp_c = RegInit(0.U(32.W))

  switch (io.sel) {
    is(0.U) { // add
      tmp_c := AdderResult
    }
    is(1.U) { // sub
      tmp_c := AdderResult
    }
    is(2.U) { // multiply
      tmp_c := MultiplierDivisionUnitResult
    }
    is(3.U) { // divide
      tmp_c := MultiplierDivisionUnitResult
    }
  }

  io.c := tmp_c

}



// generate Verilog
object FPU extends App {
  (new chisel3.stage.ChiselStage).emitVerilog(new FPU())
}

