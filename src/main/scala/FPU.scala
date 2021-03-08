import Chisel.fromIntToWidth
import chisel3.{Bundle, Input, Module, Output, UInt}

class FPU extends Module{
  val io = IO(new Bundle {
    val a = Input(UInt(32.W))
    val b = Input(UInt(32.W))
    val c = Output(UInt(32.W))
  })




}
