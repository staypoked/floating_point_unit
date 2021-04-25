import Chisel.{PriorityEncoder, fromBooleanToLiteral, fromIntToWidth, fromtIntToLiteral}
import chisel3.util.{Cat, Reverse}
import chisel3.{Bool, Bundle, Input, Module, Output, RegNext, UInt, WireDefault, when}

/**
 * This module detects the sign as well as special operation.
 * Furthermore the exponent is calculated
 */
class Stage1Div extends Module{
  val io = IO(new Bundle {
    // Inputs
    val s1_a_in = Input(UInt(32.W))
    val s1_b_in = Input(UInt(32.W))
    val s1_en_in = Input(Bool())

    // Outputs
    val s1_a_mant_out = Output(UInt(24.W)) // with implicit bit
    val s1_b_mant_out = Output(UInt(24.W)) // with implicit bit
    val s1_special_out = Output(UInt(3.W))
    val s1_c_sign_out = Output(UInt(1.W))
    val s1_c_exp_out = Output(UInt(8.W))
    val s1_shift_value_out = Output(UInt(8.W))
    val s1_en_out = Output(Bool())
  })

  /*
   * Latch Inputs
   */
  val s1_a_sign = RegNext(io.s1_a_in(31), 0.U)
  val s1_a_exp = RegNext(Cat(0.U(1.W), io.s1_a_in(30,23)), 0.U)
  val s1_a_mant = RegNext(io.s1_a_in(22,0), 0.U)

  val s1_b_sign = RegNext(io.s1_b_in(31), 0.U)
  val s1_b_exp = RegNext(Cat(0.U(1.W), io.s1_b_in(30,23)), 0.U)
  val s1_b_mant = RegNext(io.s1_b_in(22,0), 0.U)

  val s1_enable = RegNext(io.s1_en_in, false.B)

  /*
   * Initialize temporal values
   */
  val s1_special = WireDefault(0.U(3.W))
  val temp_c_exp = WireDefault(0.U(9.W))
  val s1_shift_value = WireDefault(0.U(8.W))

  /*
   * Sign detection
   */
  val temp_c_sign = s1_a_sign ^ s1_b_sign

  /*
   * Calculate Exponent
   */
  temp_c_exp := (s1_a_exp - s1_b_exp) + 127.U
  s1_shift_value := s1_a_exp - s1_b_exp
  //detect exponent overflow
  when(temp_c_exp(8)){
    s1_special := 2.U
  }

  /*
   * Detect special operations
   */
  /*
  finite / Inf = 0 => 4.U
  non-zero / 0 = Inf => 1.U
  0 / 0 = NaN => 3.U
  Inf / Inf = NaN => 3.U
  one of them NaN = NaN => 3.U
   */
  // b = 0
  when(s1_b_exp === 0.U && s1_b_mant === 0.U){
    // a = 0
    when(s1_a_exp === 0.U && s1_a_mant === 0.U){
      s1_special := 3.U
    }.otherwise{
      s1_special := 1.U
    }
  }
  // b = Inf
  when(s1_b_exp === 255.U && s1_b_mant === 0.U){
    // a = Inf
    when(s1_a_exp === 255.U && s1_a_mant === 0.U){
      s1_special := 3.U
    }.otherwise{
      s1_special := 4.U
    }
  }
  // one of them NaN
  when((s1_a_exp === 255.U && s1_a_mant =/= 0.U) || (s1_b_exp === 255.U && s1_b_mant =/= 0.U)) {
    s1_special := 3.U
  }

  /*
   * Write Outputs
   */
  // extend mantissas by implicit bit
  io.s1_a_mant_out := Cat(1.U(1.W), s1_a_mant)
  io.s1_b_mant_out := Cat(1.U(1.W), s1_b_mant)
  io.s1_c_sign_out := temp_c_sign
  io.s1_c_exp_out := temp_c_exp(7,0)
  io.s1_shift_value_out := s1_shift_value
  io.s1_special_out := s1_special
  io.s1_en_out := s1_enable
}

/**
 * This module shifts the divisor mantissa by the difference of the exponent
 */
class Stage2Div extends Module {
  val io = IO(new Bundle {
    // Inputs
    val s2_a_mant_in = Input(UInt(32.W))
    val s2_b_mant_in = Input(UInt(32.W))
    val s2_shift_value_in = Input(UInt(8.W))
    val s2_c_sign_in = Input(UInt(1.W))
    val s2_c_exp_in = Input(UInt(8.W))
    val s2_special_in = Input(UInt(3.W))
    val s2_en_in = Input(Bool())

    // Outputs
    val s2_a_mant_out = Output(UInt(32.W))
    val s2_b_mant_out = Output(UInt(32.W))
    val s2_c_sign_out = Output(UInt(1.W))
    val s2_c_exp_out = Output(UInt(8.W))
    val s2_special_out = Output(UInt(3.W))
    val s2_en_out = Output(Bool())
  })


  /*
  * Latch Inputs
  */
  val s2_a_mant = RegNext(io.s2_a_mant_in, 0.U)
  val s2_b_mant = RegNext(io.s2_b_mant_in, 0.U)
  val s2_c_sign = RegNext(io.s2_c_sign_in, 0.U)
  val s2_c_exp = RegNext(io.s2_c_exp_in, 0.U)
  val s2_special = RegNext(io.s2_special_in, 0.U)
  val s2_enable = RegNext(io.s2_en_in, false.B)

  val s2_shift_value = RegNext(io.s2_shift_value_in, 0.U)

  /*
   * Initialize temporal values
   */
  val temp_b_mant = WireDefault(0.U(23.W))

  /*
   * Shift divisor mantissa
   */
  temp_b_mant := s2_b_mant >> s2_shift_value

  io.s2_a_mant_out := s2_a_mant
  io.s2_b_mant_out := temp_b_mant
  io.s2_c_sign_out := s2_c_sign
  io.s2_c_exp_out := s2_c_exp(7,0)
  io.s2_special_out := s2_special
  io.s2_en_out := s2_enable
}

/**
 * This module divides the mantissas
 */
class Stage3Div extends Module {
  val io = IO(new Bundle {
    // Inputs
    val s3_a_mant_in = Input(UInt(32.W))
    val s3_b_mant_in = Input(UInt(32.W))
    val s3_c_sign_in = Input(UInt(1.W))
    val s3_c_exp_in = Input(UInt(8.W))
    val s3_special_in = Input(UInt(3.W))
    val s3_en_in = Input(Bool())

    // Outputs
    val s3_c_sign_out = Output(UInt(1.W))
    val s3_c_exp_out = Output(UInt(8.W))
    val s3_quo_out = Output(UInt(24.W))
    val s3_rem_out = Output(UInt(24.W))
    val s3_special_out = Output(UInt(3.W))
    val s3_exception_out = Output(Bool())
    val s3_en_out = Output(Bool())
  })

  /*
  * Latch Inputs
  */
  val s3_a_mant = RegNext(io.s3_a_mant_in, 0.U)
  val s3_b_mant = RegNext(io.s3_b_mant_in, 0.U)
  val s3_c_sign = RegNext(io.s3_c_sign_in, 0.U)
  val s3_c_exp = RegNext(io.s3_c_exp_in, 0.U)
  val s3_special = RegNext(io.s3_special_in, 0.U)
  val s3_enable = RegNext(io.s3_en_in, false.B)


  /*
   * Initialize temporal values
   */
  val s3_c_mant = WireDefault(0.U(24.W))
  val s3_quotient = WireDefault(0.U(24.W))
  val s3_remainder = WireDefault(0.U(24.W))
  val temp_quotient = WireDefault(0.U(24.W))
  val temp_remainder = WireDefault(0.U(24.W))

  /*
   * calculate quotient and remainder
   */
  val simpleDivider = Module( new LongDivision(24))

  simpleDivider.io.numerator := s3_a_mant
  simpleDivider.io.denominator := s3_b_mant
  simpleDivider.io.enable := s3_enable

  s3_quotient := simpleDivider.io.quotient
  s3_remainder := simpleDivider.io.remainder

  /*
   * write Outputs
   */
  io.s3_c_sign_out := s3_c_sign
  io.s3_c_exp_out := s3_c_exp
  io.s3_quo_out := s3_quotient
  io.s3_rem_out := s3_remainder
  io.s3_special_out := s3_special
  io.s3_en_out := simpleDivider.io.ready
  io.s3_exception_out := false.B
}

class Stage4Div extends Module {
  val io = IO(new Bundle {
    // Inputs
    val s4_c_sign_in = Input(UInt(1.W))
    val s4_c_exp_in = Input(UInt(8.W))
    val s4_quo_in = Input(UInt(24.W))
    val s4_rem_in = Input(UInt(24.W))
    val s4_special_in = Input(UInt(3.W))
    val s4_exception_in = Input(Bool())
    val s4_en_in = Input(Bool())

    // Outputs
    val s4_c_sign_out = Output(UInt(1.W))
    val s4_c_exp_out = Output(UInt(8.W))
    val s4_c_mant_out = Output(UInt(24.W))
    val s4_special_out = Output(UInt(3.W))
    val s4_exception_out = Output(Bool())
    val s4_en_out = Output(Bool())
  })


  /*
   * Latch Inputs
   */
  val s4_c_sign = RegNext(io.s4_c_sign_in, 0.U)
  val s4_c_exp = RegNext(io.s4_c_exp_in, 0.U)
  val s4_quo = RegNext(io.s4_quo_in, 0.U)
  val s4_rem = RegNext(io.s4_rem_in, 0.U)

  val s4_exception = RegNext(io.s4_exception_in, 0.U)
  val s4_special = RegNext(io.s4_special_in, 0.U)
  val s4_enable = RegNext(io.s4_en_in, false.B)

  /*
   * Initialize temporal values
   */
  val s4_temp_quo = WireDefault(0.U(24.W))
  val s4_temp_quo2 = WireDefault(0.U(24.W))
  val s4_temp_rem =  WireDefault(0.U(24.W))
  val s4_temp_rem2 =  WireDefault(0.U(24.W))
  val s4_temp_mant = WireDefault(0.U(24.W))

  /*
   * perform shifting
   */
  s4_temp_quo := s4_quo
  s4_temp_rem := s4_rem
  s4_temp_quo2 := s4_temp_quo << PriorityEncoder(Reverse(s4_temp_quo))
  s4_temp_rem2 := Reverse(s4_temp_rem) >> PriorityEncoder(Reverse(s4_temp_quo))
  s4_temp_mant := s4_temp_quo2 | s4_temp_rem

  io.s4_c_sign_out := s4_c_sign
  io.s4_c_exp_out := s4_c_exp
  io.s4_c_mant_out := s4_temp_mant
  io.s4_special_out := s4_special
  io.s4_exception_out := s4_exception
  io.s4_en_out := s4_enable
}

/**
 * This module write the output according to the result or the special operation detection.
 */
class Stage5Div extends Module{
  val io = IO(new Bundle{
    // Inputs
    val s5_c_sign_in = Input(UInt(1.W))
    val s5_c_exp_in = Input(UInt(8.W))
    val s5_c_mant_in = Input(UInt(23.W))
    val s5_special_in = Input(UInt(3.W))
    val s5_exception_in = Input(Bool())
    val s5_en_in = Input(Bool())

    // Outputs
    val s5_c_out = Output(UInt(32.W))
    val s5_exception_out = Output(Bool())
    val s5_en_out = Output(Bool())
  })


  /*
   * Latch Inputs
   */
  val s5_c_sign = RegNext(io.s5_c_sign_in, 0.U)
  val s5_c_exp = RegNext(io.s5_c_exp_in, 0.U)
  val s5_c_mant = RegNext(io.s5_c_mant_in, 0.U)

  val s5_exception = RegNext(io.s5_exception_in, 0.U)
  val s5_special = RegNext(io.s5_special_in, 0.U)
  val s5_enable = RegNext(io.s5_en_in, false.B)

  /*
   * Initialize temporal values
   */
  val temp_c_sign = WireDefault(0.U(1.W))
  val temp_c_exp = WireDefault(0.U(8.W))
  val temp_c_mant = WireDefault(0.U(23.W))
  val temp_exception = WireDefault(0.U(1.W))


  // check the special flags
  // Inf
  when(s5_special === 1.U) {
    temp_c_sign := s5_c_sign
    temp_c_exp := 255.U
    temp_c_mant := 0.U
    temp_exception := 1.U
    // Overflow due to exponent addition or division by zero
  }.elsewhen(s5_special === 2.U){
    temp_c_sign := s5_c_sign
    temp_c_exp := 255.U
    temp_c_mant := 0.U
    temp_exception := 1.U
    // NaN
  }.elsewhen(s5_special === 3.U) {
    temp_c_sign := s5_c_sign
    temp_c_exp := 255.U
    temp_c_mant := 1.U
    temp_exception := 0.U
    // 0
  }.elsewhen(s5_special === 4.U) {
    temp_c_sign := s5_c_sign
    temp_c_exp := 0.U
    temp_c_mant := 0.U
    temp_exception := 0.U
  }.otherwise {
    temp_c_sign := s5_c_sign
    temp_c_exp := s5_c_exp
    temp_c_mant := s5_c_mant
    temp_exception := s5_exception
  }

  io.s5_c_out := Cat(Cat(temp_c_sign,temp_c_exp),temp_c_mant)
  io.s5_exception_out := temp_exception
  io.s5_en_out := s5_enable
}

/**
 * Divider Module
 */
class Divider extends Module{
  val io = IO(new Bundle {
    // Inputs
    val a = Input(UInt(32.W))
    val b = Input(UInt(32.W))
    val en_in = Input(Bool())

    // Outputs
    val c = Output(UInt(32.W))
    val exception = Output(Bool())
    val en_out = Output(Bool())
  })

  val stage1 = Module(new Stage1Div())

  stage1.io.s1_a_in := io.a
  stage1.io.s1_b_in := io.b
  stage1.io.s1_en_in := io.en_in

  val stage2 = Module(new Stage2Div())

  stage2.io.s2_a_mant_in := stage1.io.s1_a_mant_out
  stage2.io.s2_b_mant_in := stage1.io.s1_b_mant_out
  stage2.io.s2_c_sign_in := stage1.io.s1_c_sign_out
  stage2.io.s2_c_exp_in := stage1.io.s1_c_exp_out
  stage2.io.s2_shift_value_in := stage1.io.s1_shift_value_out
  stage2.io.s2_special_in := stage1.io.s1_special_out
  stage2.io.s2_en_in := stage1.io.s1_en_out

  val stage3 = Module(new Stage3Div())

  stage3.io.s3_a_mant_in := stage2.io.s2_a_mant_out
  stage3.io.s3_b_mant_in := stage2.io.s2_b_mant_out
  stage3.io.s3_c_sign_in := stage2.io.s2_c_sign_out
  stage3.io.s3_c_exp_in := stage2.io.s2_c_exp_out
  stage3.io.s3_special_in := stage2.io.s2_special_out
  stage3.io.s3_en_in := stage2.io.s2_en_out

  val stage4 = Module(new Stage4Div())

  stage4.io.s4_c_sign_in := stage3.io.s3_c_sign_out
  stage4.io.s4_c_exp_in := stage3.io.s3_c_exp_out
  stage4.io.s4_quo_in := stage3.io.s3_quo_out
  stage4.io.s4_rem_in := stage3.io.s3_rem_out
  stage4.io.s4_special_in := stage3.io.s3_special_out
  stage4.io.s4_exception_in := stage3.io.s3_exception_out
  stage4.io.s4_en_in := stage3.io.s3_en_out

  val norm1  = Module(new Normalize())

  norm1.io.sign_in := stage4.io.s4_c_sign_out
  norm1.io.exp_in := stage4.io.s4_c_exp_out
  norm1.io.mant_in := stage4.io.s4_c_mant_out

  norm1.io.of_in := stage4.io.s4_exception_out
  norm1.io.uf_in := false.B
  norm1.io.zero_in := false.B
  norm1.io.special_in := stage4.io.s4_special_out
  norm1.io.en_in := stage4.io.s4_en_out

  val round = Module(new Round())

  round.io.sign_in := norm1.io.sign_out
  round.io.exp_in := norm1.io.exp_out
  round.io.mant_in := norm1.io.mant_out
  round.io.of_in := norm1.io.of_out
  round.io.uf_in := false.B
  round.io.zero_in := false.B
  round.io.special_in := norm1.io.special_out
  round.io.en_in := norm1.io.en_out

  val norm2 = Module(new Normalize())

  norm2.io.sign_in := round.io.sign_out
  norm2.io.exp_in := round.io.exp_out
  norm2.io.mant_in := round.io.mant_out
  norm2.io.of_in := round.io.of_out
  norm2.io.uf_in := false.B
  norm2.io.zero_in := false.B
  norm2.io.special_in := round.io.special_out
  norm2.io.en_in := round.io.en_out

  val stage5 = Module(new Stage5Div())
  stage5.io.s5_c_sign_in := norm2.io.sign_out
  stage5.io.s5_c_exp_in := norm2.io.exp_out
  stage5.io.s5_c_mant_in := norm2.io.mant_out
  stage5.io.s5_exception_in := norm2.io.of_out
  stage5.io.s5_special_in := norm2.io.special_out
  stage5.io.s5_en_in := norm2.io.en_out

  io.c := stage5.io.s5_c_out
  io.exception := stage5.io.s5_exception_out
  io.en_out := stage5.io.s5_en_out
}

// generate Verilog
object Divider extends App {
  (new chisel3.stage.ChiselStage).emitVerilog(new Divider())
}
