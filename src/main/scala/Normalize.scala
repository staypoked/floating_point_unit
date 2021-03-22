import Chisel.{fromIntToWidth, fromtIntToLiteral}
import chisel3.util.{PriorityEncoder, Reverse}
import chisel3.{Bool, Bundle, Input, Module, Output, Reg, RegNext, UInt, WireDefault, fromBooleanToLiteral, when}

class NormalizeAdd extends Module {
  val io = IO(new Bundle {
    // Inputs
    val sign_in = Input(UInt(1.W))
    val exp_in = Input(UInt(8.W))
    val mant_in = Input(UInt(24.W)) // Not normalized Mantissa 1.XXX

    val of_in = Input(Bool())
    val uf_in = Input(Bool())
    val norm_in = Input(Bool())

    // Outputs
    val sign_out = Output(UInt(1.W))
    val exp_out = Output(UInt(8.W))
    val mant_out = Output(UInt(23.W))
    //
    val of_out = Output(Bool())
    val uf_out = Output(Bool())
  })

  // Latch inputs
  val sign = RegNext(io.sign_in, 0.U)
  val exp = RegNext(io.exp_in, 0.U)
  val mant = RegNext(io.mant_in, 0.U)

  val of = RegNext(io.of_in, false.B)
  val uf = RegNext(io.uf_in, false.B)

  val norm = RegNext(io.uf_in, true.B)

  // Initialize temporal values
  val temp_sign = WireDefault(0.U(1.W))
  val temp_exp = WireDefault(0.U(8.W))
  val temp_mant = WireDefault(0.U(23.W)) // normalized Mantissa .XXX
  var shift_value = Reg(UInt(5.W))



  shift_value := PriorityEncoder(Reverse(io.mant_in))
  when(norm) {
    when(of || uf) {
      temp_sign := sign
      temp_exp := exp
      temp_mant := mant(22, 0)
    }.otherwise {
      temp_sign := sign
      temp_exp := exp - shift_value
      temp_mant := (mant << shift_value) (22, 0)
    }
  }.otherwise{
    temp_sign := sign
    temp_exp := exp
    temp_mant := mant(22, 0)
  }

  //_root_.Chisel.printf("Output Stage4: s4_in: %b, rev: %b, shift_value: %b\n", io.s4_c_mant_in, shift_value)
  //_root_.Chisel.printf("Output Stage4: temp_c_sign[1]: %b, temp_c_exp[8]: %b, temp_c_mant[23]: %b\n", temp_c_sign, temp_c_exp, temp_c_mant)

  // Write Outputs
  io.sign_out := temp_sign
  io.exp_out := temp_exp
  io.mant_out := temp_mant
  io.of_out := of
  io.uf_out := uf

}
