import Chisel.{fromIntToWidth, fromtIntToLiteral}
import chisel3.util.{Cat, PriorityEncoder, Reverse}
import chisel3.{Bool, Bundle, Input, Module, Output, Reg, RegNext, UInt, WireDefault, fromBooleanToLiteral, when}

class Round extends Module{
  val io = IO(new Bundle {
    // Inputs
    val sign_in = Input(UInt(1.W))
    val exp_in = Input(UInt(8.W))
    val mant_in = Input(UInt(23.W)) // normalized Mantissa .XXX

    val of_in = Input(Bool())
    val uf_in = Input(Bool())
    val zero_in = Input(Bool())
    val special_in = Input(UInt(2.W))
    val en_in = Input(Bool())

    // Outputs
    val sign_out = Output(UInt(1.W))
    val exp_out = Output(UInt(8.W))
    val mant_out = Output(UInt(24.W)) // Not normalized Mantissa 1.XXX

    val of_out = Output(Bool())
    val uf_out = Output(Bool())
    val zero_out = Output(Bool())
    //val rounded_out = Output(Bool())
    val special_out = Output(UInt(2.W))
    val en_out = Output(Bool())
  })

  // Latch inputs
  val sign = RegNext(io.sign_in, 0.U)
  val exp = RegNext(io.exp_in, 0.U)
  val mant = RegNext(io.mant_in, 0.U)

  val of = RegNext(io.of_in, false.B)
  val uf = RegNext(io.uf_in, false.B)
  val zero = RegNext(io.zero_in, false.B)
  val special = RegNext(io.special_in, 0.U)

  // Initialize temporal values
  val temp_sign = WireDefault(0.U(1.W))
  val temp_exp = WireDefault(0.U(8.W))
  val temp_mant = WireDefault(0.U(24.W))
  val temp_sum_mant = WireDefault(0.U(24.W))

  io.en_out := io.en_in

  //val rounded = WireDefault(Bool(), false.B)

  // check overflow if do nothing
  when(of || uf || zero){
    temp_sign := sign
    temp_exp := exp
    temp_mant := mant
  }.elsewhen(special =/= 0.U){
    temp_sign := sign
    temp_exp := exp
    temp_mant := mant
  }.otherwise {
    // if LSB = 1 -> Round to nearest, ties to even
    temp_mant := Cat(1.U(1.W),(mant + mant(0)))
    temp_sign := sign
    temp_exp := exp
  }
  //_root_.Chisel.printf("Output Round: temp_sign[1]: %b, temp_exp[8]: %b, temp_mant[24]: %b\n\n", temp_sign, temp_exp, temp_mant)
  // Write Outputs
  io.sign_out := temp_sign
  io.exp_out := temp_exp
  // Add implizit bit for normalization
  io.mant_out := temp_mant
  io.of_out := of
  io.uf_out := uf
  io.zero_out := zero
  io.special_out := special
}
/*
class RoundMul extends Module{
  val io = IO(new Bundle{
    // Inputs
    val sign_in = Input(UInt(1.W))
    val exp_in = Input(UInt(8.W))
    val mant_in = Input(UInt(23.W)) // Not normalized Mantissa 1.XXX

    val exeption_in = Input(Bool())
    val norm_in = Input(Bool())

    val round_in = Input(UInt(1.W))
    val sticki_in = Input(UInt(1.W))

    // Outputs
    val sign_out = Output(UInt(1.W))
    val exp_out = Output(UInt(8.W))
    val mant_out = Output(UInt(23.W))
    //val round_out = Output(UInt(1.W))
    //val sticki_out = Output(UInt(1.W))
    val exeption_out = Output(Bool())
    val rounded_out = Output(Bool())
  })

  // Latch inputs
  val sign = RegNext(io.sign_in, 0.U)
  val exp = RegNext(io.exp_in, 0.U)
  val mant = RegNext(Cat(Cat(io.mant_in,io.round_in),io.sticki_in), 0.U) // Append round and sticki bit

  val exception = RegNext(io.exeption_in, false.B)

  // Initialize temporal values
  val temp_sign = WireDefault(0.U(1.W))
  val temp_exp = WireDefault(0.U(8.W))
  val temp_mant = WireDefault(0.U(23.W)) // normalized Mantissa .XXX
  var shift_value = Reg(UInt(5.W))

  val temp_round = WireDefault(0.U(1.W))
  val temp_sticki = WireDefault(0.U(1.W))

  val rounded = WireDefault(Bool(), false.B)

  when(!exception){

    rounded := true.B
  }.otherwise{
    temp_sign := sign
    temp_exp := exp
    temp_mant := mant
    temp_round := temp_mant
    temp_sticki := temp_mant
    rounded := false.B
  }

  // Write Outputs
  io.sign_out := temp_sign
  io.exp_out := temp_exp
  io.mant_out := temp_mant
  io.exeption_out := exception
  io.rounded_out := rounded
  //io.round_out := temp_round
  //io.sticki_out := temp_sticki

}*/
