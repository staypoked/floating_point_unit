import Chisel.fromIntToWidth
import chisel3.{Bundle, Input, Module, Output, RegNext, UInt, when}

class Normalize extends Module{
  val io = IO(new Bundle {
    val a = Input(UInt(32.W))
    val b = Input(UInt(32.W))
    val c = Output(UInt(32.W))
  })




  // Normalization
  val norm_mant = RegNext(tmp_mant);
  val norm_exp = RegNext(tmp_exp);

  when (!norm_mant(0)){
    norm_mant := RegNext(norm_mant << 1.U);
    norm_exp := RegNext(norm_exp - 1.U);
  }.otherwise{
    tmp_mant := RegNext(tmp_mant);
    tmp_exp := RegNext(tmp_exp);
  }


  // Round/Truncate

}
