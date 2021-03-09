import Chisel.{fromIntToWidth, fromtIntToLiteral, is, switch, when}
import chisel3.{Bundle, Input, Module, Output, UInt}

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
  val AdderResult = FPUAdder.io.c

  var FPUMultiplierDivisionUnit = Module(new Multiplier())
  FPUMultiplierDivisionUnit.io.a := io.a
  FPUMultiplierDivisionUnit.io.b := io.b
  FPUMultiplierDivisionUnit.io.sel := io.sel(0)
  val MultiplierDivisionUnitResult = FPUMultiplierDivisionUnit.io.c

  switch (io.sel) {
    is(0.U) { // add
      io.c := AdderResult
    }
    is(1.U) { // sub
      io.c := AdderResult
    }
    is(2.U) { // multiply
      io.c := MultiplierDivisionUnitResult
    }
    is(3.U) { // divide
      io.c := MultiplierDivisionUnitResult
    }
  }


}
