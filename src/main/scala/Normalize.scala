import Chisel.{fromIntToWidth, fromtIntToLiteral}
import chisel3.{Bundle, Input, Module, Output, RegNext, UInt, when}

class Normalize extends Module{
  val io = IO(new Bundle {
    val in = Input(UInt(32.W))
    val out = Output(UInt(32.W))
  })

  // Normalization
  val norm_exp = RegNext(io.in(7,1));
  val norm_mant = RegNext(io.in(31,8));


  when (!norm_mant(0)){
    norm_mant := RegNext(norm_mant << 1.U);
    norm_exp := RegNext(norm_exp - 1.U);
  }.otherwise{
    io.out(31,8) := RegNext(norm_mant);
    io.out(7,1) := RegNext(norm_exp);
  }

}
