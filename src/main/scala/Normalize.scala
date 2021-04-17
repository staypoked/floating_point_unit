import Chisel.{fromIntToWidth, fromtIntToLiteral}
import chisel3.util.{Cat, PriorityEncoder, Reverse}
import chisel3.{Bool, Bundle, Input, Module, Output, Reg, RegNext, UInt, WireDefault, fromBooleanToLiteral, when}

/**
 * This module normalizes the floationg point value
 */
class Normalize extends Module {
  val io = IO(new Bundle {
    // Inputs
    val sign_in = Input(UInt(1.W))
    val exp_in = Input(UInt(8.W))
    val mant_in = Input(UInt(24.W)) // Not normalized Mantissa 1.XXX

    val of_in = Input(Bool())
    val uf_in = Input(Bool())
    val zero_in = Input(Bool())
    val special_in = Input(UInt(2.W))
    val en_in = Input(Bool())

    // Outputs
    val sign_out = Output(UInt(1.W))
    val exp_out = Output(UInt(8.W))
    val mant_out = Output(UInt(23.W))

    val of_out = Output(Bool())
    val uf_out = Output(Bool())
    val zero_out = Output(Bool())
    val special_out = Output(UInt(2.W))
    val en_out = Output(Bool())
  })

  /*
   * Latch Inputs
   */
  val sign = RegNext(io.sign_in, 0.U)
  val exp = RegNext(io.exp_in, 0.U)
  val mant = RegNext(io.mant_in, 0.U)

  val of = RegNext(io.of_in, false.B)
  val uf = RegNext(io.uf_in, false.B)
  val zero = RegNext(io.zero_in, false.B)
  val special = RegNext(io.special_in, 0.U)

  val norm_enable = RegNext(io.en_in, false.B)

  /*
   * Initialize temporal values
   */
  val temp_sign = WireDefault(0.U(1.W))
  val temp_exp = WireDefault(0.U(8.W))
  val temp_mant = WireDefault(0.U(23.W)) // normalized Mantissa .XXX
  var shift_value = Reg(UInt(5.W))

  shift_value := PriorityEncoder(Reverse(io.mant_in))
  when(special =/= 0.U){
    temp_sign := sign
    temp_exp := exp
    temp_mant := mant(22, 0)
  }.elsewhen(!mant(23)) {
    when(of || uf || zero) {
      temp_sign := sign
      temp_exp := exp
      temp_mant := mant(22, 0)
    }.otherwise {
      temp_sign := sign
      temp_exp := exp - shift_value
      temp_mant := (mant << shift_value)(22, 0)
      //_root_.Chisel.printf("Output Normalize: shifting\n")
    }
  }.otherwise{
    temp_sign := sign
    temp_exp := exp
    temp_mant := mant(22, 0)
   // _root_.Chisel.printf("Output Normalize: not shifting\n")
  }


  //_root_.Chisel.printf("Output Normalize: temp_sign[1]: %b, temp_exp[8]: %b, temp_mant[23]: %b\n\n", temp_sign, temp_exp, temp_mant)
  /*
   * Write Outputs
   */
  io.sign_out := RegNext(io.sign_in, 0.U)
  io.exp_out := temp_exp
  io.mant_out := temp_mant
  io.of_out := of
  io.uf_out := uf
  io.zero_out := zero
  io.special_out := special
  io.en_out := norm_enable
}
