import chisel3._
import chisel3.util._

/**
 * This modules detects the operation and the according sign and also the special operations
 * Furthermore the exponents are aligned and the shifting value calculated
 */
class Stage1Add extends Module {
  val io = IO(new Bundle{
    // Inputs
    val s1_a_in = Input(UInt(32.W))
    val s1_b_in = Input(UInt(32.W))
    val s1_en_in = Input(Bool())

    // Outputs
    val s1_a_mant_out = Output(UInt(24.W))
    val s1_b_mant_out = Output(UInt(24.W))
    val s1_shmt_amout_out = Output(UInt(8.W))
    val s1_a_larger_out = Output(Bool())
    val s1_add_out = Output(Bool())
    val s1_c_sign_out = Output(UInt(1.W))
    val s1_c_exp_out = Output(UInt(8.W))
    val s1_special_out = Output(UInt(2.W))
    val s1_en_out = Output(Bool())
  })

  /*
  * Latch Inputs
  */
  val s1_a_sign = RegNext(io.s1_a_in(31), 0.U)
  val s1_a_exp = RegNext(io.s1_a_in(30,23), 0.U)
  val s1_a_mant = RegNext(io.s1_a_in(22,0), 0.U)

  val s1_b_sign = RegNext(io.s1_b_in(31), 0.U)
  val s1_b_exp = RegNext(io.s1_b_in(30,23), 0.U)
  val s1_b_mant = RegNext(io.s1_b_in(22,0), 0.U)
  val s1_enable = RegNext(io.s1_en_in, false.B)

  /*
  * Initialize temporal values
  */
  val temp_c_sign = WireDefault(0.U(1.W))
  val temp_c_exp = WireDefault(0.U(8.W))
  val shift_value = WireDefault(0.U(8.W))
  val special = WireDefault(0.U(2.W))

  val temp_a_larger = WireDefault(Bool(), false.B)


  /*
  * Detect operation
  */
  val s1_add = !(s1_a_sign ^ s1_b_sign)

    when(s1_a_exp > s1_b_exp) {
      //shift lower exponent for difference
      shift_value := s1_a_exp - s1_b_exp
      temp_c_sign := s1_a_sign
      temp_c_exp := s1_a_exp

      temp_a_larger := true.B
    }.elsewhen(s1_a_exp < s1_b_exp) {
      shift_value := s1_b_exp - s1_a_exp
      temp_c_sign := s1_b_sign
      temp_c_exp := s1_b_exp

      temp_a_larger := false.B
    }.otherwise {
      // a_exp == b_exp
      temp_c_sign := s1_a_sign
      temp_c_exp := s1_a_exp

      shift_value := 0.U
      temp_a_larger := true.B
    }

  /*
  * Detect special operations
  */
  // Inf +- Inf = Inf => 1.U
  // Inf +- finite = Inf
  // Inf +- NaN = NaN => 3.U
  // NaN +- finite = NaN
  // check Inf
  when((s1_a_exp === 255.U && s1_a_mant === 0.U) || (s1_b_exp === 255.U && s1_b_mant === 0.U)){
    special := 1.U
  }
  // Check NaN
  when((s1_a_exp === 255.U && s1_a_mant === 0.U) && (s1_b_exp === 255.U && s1_b_mant === 0.U) && (s1_a_sign =/= s1_b_sign)){
    special := 3.U
  }

  when(( s1_a_exp === 255.U && s1_a_mant =/= 0.U) || (s1_b_exp === 255.U  && s1_b_mant =/= 0.U)){
    special := 3.U
  }


  /*
  * Write Outputs
  */
  // extend mantissas by implicit leading bit
  io.s1_a_mant_out := Cat(1.U(1.W), s1_a_mant);
  io.s1_b_mant_out := Cat(1.U(1.W), s1_b_mant);;
  io.s1_shmt_amout_out := shift_value
  io.s1_a_larger_out := temp_a_larger
  io.s1_add_out := s1_add
  io.s1_c_sign_out := temp_c_sign
  io.s1_c_exp_out := temp_c_exp
  io.s1_special_out := special
  io.s1_en_out := s1_enable

  }

/**
 * This module shifts the mantissas according to the shift value of Stage 1
 */
class Stage2Add extends Module {
  val io = IO(new Bundle{
    // Inputs
    val s2_a_mant_in = Input(UInt(24.W))
    val s2_b_mant_in = Input(UInt(24.W))
    val s2_shmt_amout_in = Input(UInt(8.W))
    val s2_a_larger_in = Input(Bool())
    val s2_add_in = Input(Bool())
    val s2_special_in = Input(UInt(2.W))

    val s2_c_sign_in = Input(UInt(1.W))
    val s2_c_exp_in = Input(UInt(8.W))
    val s2_en_in = Input(Bool())

    // Outputs
    val s2_a_mant_out = Output(UInt(24.W))
    val s2_b_mant_out = Output(UInt(24.W))
    val s2_add_out = Output(Bool())
    val s2_c_sign_out = Output(UInt(1.W))
    val s2_c_exp_out = Output(UInt(8.W))
    val s2_shmt_amout_out = Output(UInt(8.W))
    val s2_special_out = Output(UInt(2.W))
    val s2_en_out = Output(Bool())
  })

  /*
  * Initialize temporal values
  */
  val s2_a_mant = RegNext(io.s2_a_mant_in, 0.U)
  val s2_b_mant = RegNext(io.s2_b_mant_in, 0.U)

  val shift_value = RegNext(io.s2_shmt_amout_in, 0.U)
  val s2_a_larger = RegNext(io.s2_a_larger_in, true.B)

  val s2_enable = RegNext(io.s2_en_in, false.B)

  /*
  * Initialize temporal values
  */
  val temp_a_mant = WireDefault(0.U(24.W))
  val temp_b_mant = WireDefault(0.U(24.W))

  /*
  * shift smaller mantissa and shift if necessary
  */
  when(s2_a_larger){
    temp_a_mant := s2_a_mant
    temp_b_mant := (s2_b_mant >> shift_value)//.asUInt() // exponent increase for b

  }.otherwise{
    temp_a_mant := s2_b_mant
    temp_b_mant := (s2_a_mant >> shift_value)//.asUInt() // exponent increase for a
  }

  /*
   * Write Outputs
   */
  io.s2_a_mant_out := temp_a_mant
  io.s2_b_mant_out := temp_b_mant
  io.s2_shmt_amout_out := shift_value
  io.s2_en_out := s2_enable
  io.s2_add_out := RegNext(io.s2_add_in, false.B)
  io.s2_c_sign_out := RegNext(io.s2_c_sign_in, 0.U)
  io.s2_c_exp_out := RegNext(io.s2_c_exp_in, 0.U)
  io.s2_special_out := RegNext(io.s2_special_in, 0.U)
}


/**
 * This module performs addition/substraction and checks the result for under and overflows
 */
class Stage3Add extends Module {
  val io = IO(new Bundle {
    // Inputs
    val s3_a_mant_in = Input(UInt(24.W))
    val s3_b_mant_in = Input(UInt(24.W))
    val s3_add_in = Input(Bool())
    val s3_c_sign_in = Input(UInt(1.W))
    val s3_c_exp_in = Input(UInt(8.W))
    val s3_shmt_amout_in = Input(UInt(8.W))
    val s3_special_in = Input(UInt(2.W))
    val s3_en_in = Input(Bool())

    // Outputs
    val s3_c_sign_out = Output(UInt(1.W))
    val s3_c_exp_out = Output(UInt(8.W))
    val s3_c_mant_out = Output(UInt(24.W))
    val s3_of_out = Output(Bool())
    val s3_uf_out = Output(Bool())
    val s3_zero_out = Output(Bool())
    val s3_special_out = Output(UInt(2.W))
    val s3_en_out = Output(Bool())
  })

  /*
  * Latch Inputs
  */
  // extend mantissa to detect overflow
  val s3_a_mant = RegNext(Cat(0.U(1.W),io.s3_a_mant_in, 0.U))
  val s3_b_mant = RegNext(Cat(0.U(1.W),io.s3_b_mant_in, 0.U))

  val s3_add = RegNext(io.s3_add_in, false.B)
  val s3_c_sign = RegNext(io.s3_c_sign_in, 0.U)
  val s3_c_exp = RegNext(io.s3_c_exp_in, 0.U)
  val s3_special = RegNext(io.s3_special_in, 0.U)

  val shift_value = RegNext(io.s3_shmt_amout_in, 0.U)
  val s3_enable = RegNext(io.s3_en_in, false.B)

  /*
  * Initialize temporal values
  */
  val temp_sum_mant = WireDefault(0.U(25.W))
  val temp_c_mant = WireDefault(0.U(24.W))
  val temp_c_sign = WireDefault(0.U(1.W))
  val temp_c_exp = WireDefault(0.U(8.W))
  val check_overflow = WireDefault(Bool(), false.B)
  val check_underflow = WireDefault(Bool(), false.B)
  val zero = WireDefault(Bool(), false.B)

  /*
  * add or subb
  */
  when(s3_add){
    temp_sum_mant := (s3_a_mant + s3_b_mant)(25,1) // no clue why this has to be so, but it catches the carry bit
  }.otherwise {
    temp_sum_mant := (s3_a_mant - s3_b_mant)(25,1)
  }

  /*
  * Check for over and underflows
  */
  when (temp_sum_mant(24)){
    // if addition
    when(s3_add) {
      // overflow can't be handled anymore since the exponent is out of range
      when (s3_c_exp === 254.U){
        check_overflow := true.B
        // Inf
        temp_c_sign := 0.U
        temp_c_exp := 255.U
        temp_c_mant := 0.U

      // overflow can be handled
      }.otherwise {
        temp_c_sign := s3_c_sign
        temp_c_exp := s3_c_exp + 1.U
        temp_c_mant := temp_sum_mant(24,1)

      }

    // substraction
    }.otherwise{
      // underflow can't be handled anymore since the exponent can't be represented
      when(s3_c_exp === 1.U){
        check_underflow := true.B
        // Inf
        temp_c_sign := 1.U
        temp_c_exp := 255.U
        temp_c_mant := 0.U
      }.otherwise {
        // Underflow can be handled

        // flip bit
        temp_c_sign := !s3_c_sign
        temp_c_exp := s3_c_exp
        // invert bitwise
        temp_c_mant := -temp_sum_mant(23, 0)
      }
    }

  }.otherwise {
    temp_c_sign := s3_c_sign
    temp_c_exp := s3_c_exp
    temp_c_mant := temp_sum_mant(23,0)
  }

  /*
   * detects equal exponents
   */
  when(shift_value ===0.U && temp_sum_mant === 0.U && !s3_add && s3_special === 0.U){
    temp_c_sign := 0.U
    temp_c_exp := 0.U
    zero := true.B
  }

  /*
  * Check special operations
  */
  // Inf
  when(s3_special === 1.U){
    temp_c_exp := 255.U
    temp_c_mant := 0.U

    // NaN
  }.elsewhen(s3_special === 3.U) {
    temp_c_sign := s3_c_sign
    temp_c_exp := 255.U
    temp_c_mant := 1.U
  }


  /*
  * Write Outputs
  */
  io.s3_c_sign_out := temp_c_sign
  io.s3_c_exp_out :=temp_c_exp
  io.s3_c_mant_out := temp_c_mant
  io.s3_of_out := check_overflow
  io.s3_uf_out := check_underflow
  io.s3_zero_out := zero
  io.s3_special_out := s3_special
  io.s3_en_out := s3_enable
}

/**
 * Adder Module
 */
class Adder extends Module {
  val io = IO(new Bundle {
    // Input
    val a = Input(UInt(32.W))
    val b = Input(UInt(32.W))
    val en_in = Input(Bool())

    // Output
    val c = Output(UInt(32.W))
    val of = Output(UInt(1.W))
    val uf = Output(UInt(1.W))
    val zero = Output(UInt(1.W))
    val en_out = Output(Bool())
  })

  val stage1 = Module(new Stage1Add())

  stage1.io.s1_a_in := io.a
  stage1.io.s1_b_in := io.b
  stage1.io.s1_en_in := io.en_in

  val stage2 = Module(new Stage2Add())

  stage2.io.s2_a_mant_in := stage1.io.s1_a_mant_out
  stage2.io.s2_b_mant_in := stage1.io.s1_b_mant_out
  stage2.io.s2_shmt_amout_in := stage1.io.s1_shmt_amout_out
  stage2.io.s2_a_larger_in := stage1.io.s1_a_larger_out
  stage2.io.s2_add_in := stage1.io.s1_add_out
  stage2.io.s2_c_sign_in := stage1.io.s1_c_sign_out
  stage2.io.s2_c_exp_in  := stage1.io.s1_c_exp_out
  stage2.io.s2_special_in := stage1.io.s1_special_out
  stage2.io.s2_en_in := stage1.io.s1_en_out

  val stage3 = Module(new Stage3Add())

  stage3.io.s3_a_mant_in := stage2.io.s2_a_mant_out
  stage3.io.s3_b_mant_in := stage2.io.s2_b_mant_out
  stage3.io.s3_add_in := stage2.io.s2_add_out
  stage3.io.s3_c_sign_in := stage2.io.s2_c_sign_out
  stage3.io.s3_c_exp_in  := stage2.io.s2_c_exp_out
  stage3.io.s3_shmt_amout_in := stage2.io.s2_shmt_amout_out
  stage3.io.s3_special_in := stage2.io.s2_special_out
  stage3.io.s3_en_in := stage2.io.s2_en_out

  val norm1 = Module(new Normalize())
  norm1.io.sign_in := stage3.io.s3_c_sign_out
  norm1.io.exp_in := stage3.io.s3_c_exp_out
  norm1.io.mant_in := stage3.io.s3_c_mant_out
  norm1.io.of_in := stage3.io.s3_of_out
  norm1.io.uf_in := stage3.io.s3_uf_out
  norm1.io.zero_in := stage3.io.s3_zero_out
  norm1.io.special_in := stage3.io.s3_special_out
  norm1.io.en_in := stage3.io.s3_en_out


  val round = Module(new Round())

  round.io.sign_in := norm1.io.sign_out
  round.io.exp_in := norm1.io.exp_out
  round.io.mant_in := norm1.io.mant_out
  round.io.of_in := norm1.io.of_out
  round.io.uf_in := norm1.io.uf_out
  round.io.zero_in := norm1.io.zero_out
  round.io.special_in := norm1.io.special_out
  round.io.en_in := norm1.io.en_out


  val norm2 = Module(new Normalize())

  norm2.io.sign_in := round.io.sign_out
  norm2.io.exp_in := round.io.exp_out
  norm2.io.mant_in := round.io.mant_out
  norm2.io.of_in := round.io.of_out
  norm2.io.uf_in := round.io.uf_out
  norm2.io.zero_in := round.io.zero_out
  norm2.io.special_in := round.io.special_out
  norm2.io.en_in := round.io.en_out

  io.c := Cat(Cat(norm2.io.sign_out, norm2.io.exp_out), norm2.io.mant_out(22,0))
  io.of := norm2.io.of_out
  io.uf := norm2.io.uf_out
  io.zero := norm2.io.zero_out
  io.en_out := norm2.io.en_out

}


// generate Verilog
object Adder extends App {
  (new chisel3.stage.ChiselStage).emitVerilog(new Adder())
}


