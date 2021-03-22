import chisel3._
import chisel3.util._

/*
* EXPONENT ALIGNMENT
* */
class Stage1Add extends Module {
  val io = IO(new Bundle{
    // Inputs
    val s1_a_in = Input(UInt(32.W))
    val s1_b_in = Input(UInt(32.W))

    // Outputs
    val s1_a_mant_out = Output(UInt(24.W))
    val s1_b_mant_out = Output(UInt(24.W))
    val s1_shmt_amout_out = Output(UInt(8.W))
    val s1_a_larger_out = Output(Bool())
    val s1_add_out = Output(Bool())
    val s1_c_sign_out = Output(UInt(1.W))
    val s1_c_exp_out = Output(UInt(8.W))
  })

  // Latch inputs
  val s1_a_sign = RegNext(io.s1_a_in(31), 0.U)
  val s1_a_exp = RegNext(io.s1_a_in(30,23), 0.U)
  val s1_a_mant = RegNext(io.s1_a_in(22,0), 0.U)

  val s1_b_sign = RegNext(io.s1_b_in(31), 0.U)
  val s1_b_exp = RegNext(io.s1_b_in(30,23), 0.U)
  val s1_b_mant = RegNext(io.s1_b_in(22,0), 0.U)

  // Initialize temporal values
  val temp_c_sign = WireDefault(0.U(1.W))
  val temp_c_exp = WireDefault(0.U(8.W))
  val shift_value = WireDefault(0.U(8.W))

  val temp_a_larger = WireDefault(Bool(), false.B)

  // detect operation
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
    //_root_.Chisel.printf("Output Stage1: s1_a_sign[1]: %b, temp_a_exp[8]: %b, s1_a_mant[23]: %b\n", s1_a_sign, s1_a_exp, s1_a_mant)
    //_root_.Chisel.printf("Output Stage1: s1_b_sign[1]: %b, temp_b_exp[8]: %b, s1_b_mant[23]: %b\n", s1_b_sign, s1_b_exp, s1_b_mant)
    //_root_.Chisel.printf("Output Stage1: temp_c_sign[1]: %b, temp_c_exp[8]: %b\n", temp_c_sign, temp_c_exp)
    //_root_.Chisel.printf("Output Stage1: shift_value %d\n", shift_value)
    // Write Output
    // extend mantissas by implicit leading bit
    io.s1_a_mant_out := Cat(1.U(1.W), s1_a_mant);
    io.s1_b_mant_out := Cat(1.U(1.W), s1_b_mant);;
    io.s1_shmt_amout_out := shift_value
    io.s1_a_larger_out := temp_a_larger
    io.s1_add_out := s1_add
    io.s1_c_sign_out := temp_c_sign
    io.s1_c_exp_out := temp_c_exp

  }

/*
* MANTISSA SHIFTING
* */
class Stage2Add extends Module {
  val io = IO(new Bundle{
    // Inputs
    val s2_a_mant_in = Input(UInt(24.W))
    val s2_b_mant_in = Input(UInt(24.W))
    val s2_shmt_amout_in = Input(UInt(8.W))
    val s2_a_larger_in = Input(Bool())
    val s2_add_in = Input(Bool())

    val s2_c_sign_in = Input(UInt(1.W))
    val s2_c_exp_in = Input(UInt(8.W))


    // Outputs
    val s2_a_mant_out = Output(UInt(24.W))
    val s2_b_mant_out = Output(UInt(24.W))
    val s2_add_out = Output(Bool())
    val s2_c_sign_out = Output(UInt(1.W))
    val s2_c_exp_out = Output(UInt(8.W))
  })

  // Latch inputs
  val s2_a_mant = RegNext(io.s2_a_mant_in, 0.U)
  val s2_b_mant = RegNext(io.s2_b_mant_in, 0.U)

  val shift_value = RegNext(io.s2_shmt_amout_in, 0.U)
  val s2_a_larger = RegNext(io.s2_a_larger_in, true.B)

  // Initialize temporal values
  val temp_a_mant = WireDefault(0.U(24.W))
  val temp_b_mant = WireDefault(0.U(24.W))

  // shift the smaller mantissa and swap positions if necessary
  when(s2_a_larger){
    temp_a_mant := s2_a_mant
    temp_b_mant := (s2_b_mant >> shift_value)//.asUInt() // exponent increase for b

  }.otherwise{
    temp_a_mant := s2_b_mant
    temp_b_mant := (s2_a_mant >> shift_value)//.asUInt() // exponent increase for a
  }

  //_root_.Chisel.printf("Output Stage2: s2_a_mant[24]: %b\n", temp_a_mant)
  //_root_.Chisel.printf("Output Stage2: s2_b_mant[24]: %b\n", temp_b_mant)

  // Write Outputs
  io.s2_a_mant_out := temp_a_mant
  io.s2_b_mant_out := temp_b_mant
  // values that are not used in this module
  io.s2_add_out := RegNext(io.s2_add_in, false.B)
  io.s2_c_sign_out := RegNext(io.s2_c_sign_in, 0.U)
  io.s2_c_exp_out := RegNext(io.s2_c_exp_in, 0.U)
}


/*
* OVERFLOW, UF CHECK
* */
class Stage3Add extends Module {
  val io = IO(new Bundle {
    // Inputs
    val s3_a_mant_in = Input(UInt(24.W))
    val s3_b_mant_in = Input(UInt(24.W))
    val s3_add_in = Input(Bool())
    val s3_c_sign_in = Input(UInt(1.W))
    val s3_c_exp_in = Input(UInt(8.W))

    // Outputs
    val s3_c_sign_out = Output(UInt(1.W))
    val s3_c_exp_out = Output(UInt(8.W))
    val s3_c_mant_out = Output(UInt(24.W))
    val s3_of_out = Output(Bool())
    val s3_uf_out = Output(Bool())
  })

  // Latch inputs
  // extend mantissa to detect overflow
  val s3_a_mant = RegNext(io.s3_a_mant_in, 0.U)
  val s3_b_mant = RegNext(io.s3_b_mant_in, 0.U)

  val s3_add = RegNext(io.s3_add_in, false.B)
  val s3_c_sign = RegNext(io.s3_c_sign_in, 0.U)
  val s3_c_exp = RegNext(io.s3_c_exp_in, 0.U)

  // Initialize temporal values
  val temp_sum_mant = WireDefault(0.U(25.W))
  val temp_c_mant = WireDefault(0.U(24.W))
  val temp_c_sign = WireDefault(0.U(1.W))
  val temp_c_exp = WireDefault(0.U(8.W))
  val check_overflow = WireDefault(0.U(1.W))
  val check_underflow = WireDefault(0.U(1.W))



  // add or sub
  when(s3_add){
    temp_sum_mant := s3_a_mant + s3_b_mant
  }.otherwise {
    temp_sum_mant := s3_a_mant - s3_b_mant
  }

  //_root_.Chisel.printf("temp_sum_mant: %b\n", temp_sum_mant)


  //_root_.Chisel.printf("Output Stage3: temp_sum_mant(24): %b\n", temp_sum_mant(24))
  //check the overflow bit (24)
  when (temp_sum_mant(24)){
    // if addition
    when(s3_add) {
      // overflow can't be handled anymore since the exponent is out of range
      when (s3_c_exp === 254.U){
        check_overflow := 1.U
        temp_c_mant := 0.U
        temp_c_sign := 0.U
        temp_c_exp := 0.U
      // overflow can be handled
      }.otherwise {
        temp_c_exp := s3_c_exp + 1.U
        temp_c_mant := temp_sum_mant(24,1)
        temp_c_sign := s3_c_sign
      }

    // substraction
    }.otherwise{
      // underflow can't be handled anymore since the exponent can't be represented
      when(s3_c_exp === 1.U){
        check_underflow := 1.U
        temp_c_mant := 0.U
        temp_c_sign := 0.U
        temp_c_exp := 0.U
      }.otherwise {
        // Underflow can be handled
        // invert bitwise
        temp_c_mant := -temp_sum_mant(23, 0)
        temp_c_exp := s3_c_exp
        // flip bit
        temp_c_sign := !s3_c_sign
      }
    }

  }.otherwise {
    temp_c_mant := temp_sum_mant(23,0)
    temp_c_exp := s3_c_exp
    temp_c_sign := s3_c_sign
  }

  //_root_.Chisel.printf("Output Stage3: temp_sum_mant[25]: %b\n", temp_sum_mant)
  //_root_.Chisel.printf("Output Stage3: temp_c_sign[1]: %b, temp_c_exp[8]: %b, temp_c_mant[24]: %b\n", temp_c_sign, temp_c_exp, temp_c_mant)

  io.s3_c_sign_out := temp_c_sign
  io.s3_c_exp_out :=temp_c_exp
  io.s3_c_mant_out := temp_c_mant
  io.s3_of_out := check_overflow
  io.s3_uf_out := check_underflow
}

/*
* ADDER
* */
class Adder extends Module {
  val io = IO(new Bundle {
    // Input
    val a = Input(UInt(32.W))
    val b = Input(UInt(32.W))
    val sel = Input(UInt(1.W))

    // Output
    val c = Output(UInt(32.W))
    val of = Output(UInt(1.W))
    val uf = Output(UInt(1.W))
  })

  val stage1 = Module(new Stage1Add())

  stage1.io.s1_a_in := io.a
  stage1.io.s1_b_in := io.b

  val stage2 = Module(new Stage2Add())

  stage2.io.s2_a_mant_in := stage1.io.s1_a_mant_out
  stage2.io.s2_b_mant_in := stage1.io.s1_b_mant_out
  stage2.io.s2_shmt_amout_in := stage1.io.s1_shmt_amout_out
  stage2.io.s2_a_larger_in := stage1.io.s1_a_larger_out
  stage2.io.s2_add_in := stage1.io.s1_add_out
  stage2.io.s2_c_sign_in := stage1.io.s1_c_sign_out
  stage2.io.s2_c_exp_in  := stage1.io.s1_c_exp_out

  val stage3 = Module(new Stage3Add())

  stage3.io.s3_a_mant_in := stage2.io.s2_a_mant_out
  stage3.io.s3_b_mant_in := stage2.io.s2_b_mant_out
  stage3.io.s3_add_in := stage2.io.s2_add_out
  stage3.io.s3_c_sign_in := stage2.io.s2_c_sign_out
  stage3.io.s3_c_exp_in  := stage2.io.s2_c_exp_out

  val norm1 = Module(new NormalizeAdd())
  norm1.io.sign_in := stage3.io.s3_c_sign_out
  norm1.io.exp_in := stage3.io.s3_c_exp_out
  norm1.io.mant_in := stage3.io.s3_c_mant_out
  norm1.io.of_in := stage3.io.s3_of_out
  norm1.io.uf_in := stage3.io.s3_uf_out
  norm1.io.norm_in := true.B


  val round = Module(new RoundAdd())

  round.io.sign_in := norm1.io.sign_out
  round.io.exp_in := norm1.io.exp_out
  round.io.mant_in := norm1.io.mant_out
  round.io.of_in := norm1.io.of_out
  round.io.uf_in := norm1.io.uf_out

  //_root_.Chisel.printf("io_c: %b\n", io.c)

  val norm2 = Module(new NormalizeAdd())

  norm2.io.sign_in := round.io.sign_out
  norm2.io.exp_in := round.io.exp_out
  norm2.io.mant_in := round.io.mant_out
  norm2.io.of_in := round.io.of_out
  norm2.io.uf_in := round.io.uf_out
  norm2.io.norm_in := round.io.rounded_out

  //_root_.Chisel.printf("Output Stage4: temp_c_sign[1]: %b, temp_c_exp[8]: %b, temp_c_mant[23]: %b\n", norm1.io.sign_out, norm1.io.exp_out, norm1.io.mant_out)
  //_root_.Chisel.printf("Output Stage5: temp_c_sign[1]: %b, temp_c_exp[8]: %b, temp_c_mant[23]: %b\n", round.io.sign_out, round.io.exp_out, round.io.mant_out)
  _root_.Chisel.printf("Output Stage6: temp_c_sign[1]: %b, temp_c_exp[8]: %b, temp_c_mant[23]: %b\n", norm2.io.sign_out, norm2.io.exp_out, norm2.io.mant_out)

  io.c := Cat(Cat(norm2.io.sign_out, norm2.io.exp_out), norm2.io.mant_out(22,0))
  io.of := norm2.io.of_out
  io.uf := norm2.io.uf_out

}


// generate Verilog
/*object Adder extends App {
  (new chisel3.stage.ChiselStage).emitVerilog(new Adder())
}*/


