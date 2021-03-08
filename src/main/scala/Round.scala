import Chisel.{RegNext, fromIntToWidth, fromtIntToLiteral}
import chisel3.{Bundle, Input, Module, Output, UInt}

class Round extends Module{
  val io = IO(new Bundle {
    val in = Input(UInt(32.W))
    val out = Output(UInt(32.W))
  })


  // Round/Truncate
  io.out := RegNext(io.in >> 3.U);


}
