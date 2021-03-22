import Chisel.{fromIntToWidth, fromtIntToLiteral}
import chisel3.util.{PriorityEncoder, Reverse}
import chisel3.{Bool, Bundle, Input, Module, Output, Reg, RegNext, UInt, WireDefault, fromBooleanToLiteral, when}

class RoundAdd extends Module{
  val io = IO(new Bundle {
    // Inputs
    val sign_in = Input(UInt(1.W))
    val exp_in = Input(UInt(8.W))
    val mant_in = Input(UInt(23.W)) // normalized Mantissa .XXX

    val of_in = Input(Bool())
    val uf_in = Input(Bool())

    // Outputs
    val sign_out = Output(UInt(1.W))
    val exp_out = Output(UInt(8.W))
    val mant_out = Output(UInt(24.W)) // Not normalized Mantissa 1.XXX

    val of_out = Output(Bool())
    val uf_out = Output(Bool())
    val rounded_out = Output(Bool())
  })

  // Latch inputs
  val sign = RegNext(io.sign_in, 0.U)
  val exp = RegNext(io.exp_in, 0.U)
  val mant = RegNext(io.mant_in, 0.U)

  val of = RegNext(io.of_in, false.B)
  val uf = RegNext(io.uf_in, false.B)

  // Initialize temporal values
  val temp_sign = WireDefault(0.U(1.W))
  val temp_exp = WireDefault(0.U(8.W))
  val temp_mant = WireDefault(0.U(24.W))
  val temp_sum_mant = WireDefault(0.U(24.W))

  val roudned = WireDefault(Bool(), false.B)

  // check overflow if do nothing
  when(of || uf){
    temp_sign := sign
    temp_exp := exp
    temp_mant := mant
  }.otherwise {
    // if LSB = 1 -> Round to nearest, ties to even
    when(mant(0)){
      temp_mant := mant + 1.U
      temp_sign := sign
      temp_exp := exp
      roudned := true.B

    // if LSB = 0 do nothing
    }.otherwise{
      temp_sign := sign
      temp_exp := exp
      temp_mant := mant
    }
  }

  io.sign_out := temp_sign
  io.exp_out := temp_exp
  io.mant_out := temp_mant
  io.of_out := of
  io.uf_out := uf
  io.rounded_out := roudned

}
