package patmos

import Chisel.{fromBooleanToLiteral, fromIntToWidth, fromtIntToLiteral}
import chisel3.util.Cat
import chisel3.{Bool, Bundle, Input, Module, Output, RegNext, UInt, WireDefault, when}
class Stage1Mul extends Module{
  val io = IO(new Bundle {
    // Inputs
    val s1_a_in = Input(UInt(32.W))
    val s1_b_in = Input(UInt(32.W))

    // Outputs
    val s1_a_mant_out = Output(UInt(24.W)) // with implicit bit
    val s1_b_mant_out = Output(UInt(24.W)) // with implicit bit
    val s1_special_out = Output(UInt(2.W))
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

    // temporal value
  val temp_c_exp = WireDefault(0.U(8.W))
  val s1_special = WireDefault(0.U(2.W))

  // detect sign
  val temp_c_sign = s1_a_sign ^ s1_b_sign

  // calculate exponent
  temp_c_exp := s1_a_exp + s1_b_exp - 127.U

  // detect spezial cases
  // Inf * Inf = Inf => 1.U
  // Inf * finite = Inf
  // Inf * 0 = NaN => 3.U
  when((s1_a_exp === 255.U && s1_a_mant === 0.U) || (s1_b_exp === 255.U && s1_b_mant === 0.U)){
    // if one is zero than it is NaN
    when((s1_a_exp === 0.U && s1_a_mant === 0.U) || (s1_b_exp === 0.U && s1_b_mant === 0.U)){
      s1_special := 3.U
    // otherwise it is Inf
    }.otherwise{
      s1_special := 1.U
    }
  }

  // check if both are real numbers
  when((s1_a_exp === 255.U && s1_a_mant =/= 0.U) || (s1_b_exp === 255.U && s1_b_mant =/= 0.U)) {
    s1_special := 3.U
  }

  //_root_.Chisel.printf("Output Stage1: s1_a_sign[1]: %b, s1_a_exp[8]: %b, s1_a_mant[23]: %b\n", s1_a_sign, s1_a_exp, s1_a_mant)
  //_root_.Chisel.printf("Output Stage1: s1_b_sign[1]: %b, s1_b_exp[8]: %b, s1_b_mant[23]: %b\n", s1_b_sign, s1_b_exp, s1_b_mant)
  //_root_.Chisel.printf("Output Stage1: temp_c_sign[1]: %b, temp_c_exp[8]: %b\n", temp_c_sign, temp_c_exp)
  //_root_.Chisel.printf("\n")

  // Write Outputs
  io.s1_a_mant_out := Cat(1.U(1.W),s1_a_mant) // add implicit bits
  io.s1_b_mant_out := Cat(1.U(1.W),s1_b_mant) // add implicit bits
  //io.s1_sel_out := s1_sel
  io.s1_c_sign_out := temp_c_sign
  io.s1_c_exp_out := temp_c_exp
  io.s1_special_out := s1_special
}

class Stage2Mul extends Module {
  val io = IO(new Bundle {
    // Inputs
    val s2_a_mant_in = Input(UInt(24.W)) // with implicit bit
    val s2_b_mant_in = Input(UInt(24.W)) // with implicit bit
    val s2_special_in = Input(UInt(2.W))
    val s2_c_sign_in = Input(UInt(1.W))
    val s2_c_exp_in = Input(UInt(8.W))

    val s2_c_sign_out = Output(UInt(1.W))
    val s2_c_exp_out = Output(UInt(8.W))
    val s2_c_mant_out = Output(UInt(24.W))
    //val s2_round_out = Output(UInt(1.W))
    //val s2_sticki_out = Output(UInt(1.W))
    val s2_special_out = Output(UInt(2.W))
    val s2_res_mant_out = Output(UInt(48.W))
    val s2_exception_out = Output(Bool())
  })

  // Latch inputs
  val s2_a_mant = RegNext(io.s2_a_mant_in, 0.U)
  val s2_b_mant = RegNext(io.s2_b_mant_in, 0.U)

  //val s2_sel = RegNext(io.s2_sel_in, true.B)

  val s2_c_sign = RegNext(io.s2_c_sign_in, 0.U)
  val s2_c_exp = RegNext(io.s2_c_exp_in, 0.U)

  // temporal value
  val temp_c_sign = WireDefault(0.U(1.W))
  val temp_c_exp = WireDefault(0.U(8.W))
  val temp_c_mant = WireDefault(0.U(24.W))
  val temp_res_mant = WireDefault(0.U(48.W))
  //val temp_round = WireDefault(0.U(1.W))
  //val temp_sticki = WireDefault(0.U(1.W))
   val exception = WireDefault(Bool(), false.B)



  // Multiply
    temp_res_mant := s2_a_mant * s2_b_mant

  //_root_.Chisel.printf("Output Stage2: after computation temp_res_mant[48]: %b, check result: %b\n", temp_res_mant, (s2_b_mant / s2_a_mant))

  // Check overflow
  //when(s2_sel) {
    when(temp_res_mant(47)) {
      // overflow that cant be handle
      when(s2_c_exp === 254.U) {
        exception := true.B
        temp_c_sign := 0.U
        temp_c_exp := 255.U
        temp_c_mant := 1.U
      }.otherwise {
        // overflow handleable
        temp_c_sign := s2_c_sign
        temp_c_exp := s2_c_exp + 1.U
        temp_c_mant := temp_res_mant(47, 24)

        //temp_round := temp_res_mant(22)
        //temp_sticki := temp_res_mant(21)
      }

    }.otherwise {
      temp_c_sign := s2_c_sign
      temp_c_exp := s2_c_exp
      temp_c_mant := temp_res_mant(46, 23)
      //temp_round := temp_res_mant(21)
      // temp_sticki := temp_res_mant(20)
    }
 /* }.otherwise{
    // https://digitalsystemdesign.in/floating-point-division/
    when(temp_res_mant(23)){
      temp_c_sign := s2_c_sign
      temp_c_exp := s2_c_exp
      temp_c_mant := temp_res_mant(23, 0)
    }.otherwise{
      // underflow that cant be handle
      when(s2_c_exp === 1.U){
        // NaN
        exception := true.B
        temp_c_sign := 0.U
        temp_c_exp := 255.U
        temp_c_mant := 1.U
      }.otherwise{
        // underflow handleable
        temp_c_sign := s2_c_sign
        temp_c_exp := s2_c_exp //- 1.U
        temp_c_mant := temp_res_mant(23, 0)
      }
    }
  }*/

  //_root_.Chisel.printf("Output Stage2: temp_res_mant[48]: %b\n", temp_res_mant)
  _root_.Chisel.printf("Output Stage2: s2_c_sign[1]: %b, s2_c_exp[8]: %b, s2_c_mant[23]: %b\n", temp_c_sign, temp_c_exp, temp_c_mant)
  _root_.Chisel.printf("\n")

  io.s2_c_sign_out := temp_c_sign
  io.s2_c_exp_out := temp_c_exp
  io.s2_c_mant_out := temp_c_mant
  io.s2_exception_out := exception
  io.s2_res_mant_out := temp_res_mant
  io.s2_special_out :=  RegNext(io.s2_special_in, 0.U)
  //io.s2_round_out := temp_round
 // io.s2_sticki_out := temp_sticki
  //_root_.Chisel.printf("Output Stage2: s2_c_sign: %b, s2_c_exp: %b, c_mant: %b\n", io.s2_c_sign_in, io.s2_c_exp_in, c_mant)
}

class Stage3Mul extends Module{
  val io = IO(new Bundle{
    // Inputs
    val s3_c_sign_in = Input(UInt(1.W))
    val s3_c_exp_in = Input(UInt(8.W))
    val s3_c_mant_in = Input(UInt(24.W))
    //val s3_round_in = Input(UInt(1.W))
    //val s3_sticki_in = Input(UInt(1.W))
    val s3_special_in = Input(UInt(2.W))
    val s3_exception_in = Input(Bool())

    // Outputs
    val s3_c_out = Output(UInt(32.W))
    val s3_exception_out = Output(Bool())
  })


  // Latch the values
  val s3_c_sign = RegNext(io.s3_c_sign_in, 0.U)
  val s3_c_exp = RegNext(io.s3_c_exp_in, 0.U)
  val s3_c_mant = RegNext(io.s3_c_mant_in, 0.U)

  val s3_exception = RegNext(io.s3_exception_in, 0.U)
  val s3_special = RegNext(io.s3_special_in, 0.U)

  // temporal value
  val temp_c_sign = WireDefault(0.U(1.W))
  val temp_c_exp = WireDefault(0.U(8.W))
  val temp_c_mant = WireDefault(0.U(24.W))
  val temp_exception = WireDefault(0.U(1.W))

  // check the special flags
  // Inf
  when(s3_special === 1.U){
    temp_c_exp := 255.U
    temp_c_mant := 0.U
    temp_exception := 0.U

    // NaN
  }.elsewhen(s3_special === 3.U){
    temp_c_sign := s3_c_sign
    temp_c_exp := 255.U
    temp_c_mant := 1.U
    temp_exception := 0.U

  }.otherwise {
    temp_c_sign := s3_c_sign
    temp_c_exp := s3_c_exp
    temp_c_mant := s3_c_mant
    temp_exception := s3_exception
  }

  io.s3_c_out := Cat(Cat(temp_c_sign,temp_c_exp),temp_c_mant)
  io.s3_exception_out := temp_exception
}

class Multiplier extends Module{
  val io = IO(new Bundle {
    // Inputs
    val a = Input(UInt(32.W))
    val b = Input(UInt(32.W))
    //val sel = Input(UInt(1.W))

    // Outputs
    val c = Output(UInt(32.W))
    val exception = Output(Bool())
  })

  val stage1 = Module(new Stage1Mul())

  stage1.io.s1_a_in := io.a
  stage1.io.s1_b_in := io.b

  val stage2 = Module(new Stage2Mul())

  stage2.io.s2_a_mant_in := stage1.io.s1_a_mant_out
  stage2.io.s2_b_mant_in := stage1.io.s1_b_mant_out
  stage2.io.s2_special_in := stage1.io.s1_special_out
  stage2.io.s2_c_sign_in := stage1.io.s1_c_sign_out
  stage2.io.s2_c_exp_in := stage1.io.s1_c_exp_out
  stage2.io.s2_special_in := stage1.io.s1_special_out

  val norm1  = Module(new Normalize())

  norm1.io.sign_in := stage2.io.s2_c_sign_out
  norm1.io.exp_in := stage2.io.s2_c_exp_out
  norm1.io.mant_in := stage2.io.s2_c_mant_out

  norm1.io.of_in := stage2.io.s2_exception_out
  norm1.io.uf_in := false.B
  norm1.io.zero_in := false.B
  norm1.io.special_in := stage2.io.s2_special_out

  val round = Module(new Round())

  round.io.sign_in := norm1.io.sign_out
  round.io.exp_in := norm1.io.exp_out
  round.io.mant_in := norm1.io.mant_out
  round.io.of_in := norm1.io.of_out
  round.io.uf_in := false.B
  round.io.zero_in := false.B
  round.io.special_in := norm1.io.special_out

  val norm2 = Module(new Normalize())

  norm2.io.sign_in := round.io.sign_out
  norm2.io.exp_in := round.io.exp_out
  norm2.io.mant_in := round.io.mant_out
  norm2.io.of_in := round.io.of_out
  norm2.io.uf_in := false.B
  norm2.io.zero_in := false.B
  norm2.io.special_in := round.io.special_out

  val stage3 = Module(new Stage3Mul())
  stage3.io.s3_c_sign_in := norm2.io.sign_out
  stage3.io.s3_c_exp_in := norm2.io.exp_out
  stage3.io.s3_c_mant_in := norm2.io.mant_out
  stage3.io.s3_exception_in := norm2.io.of_out
  stage3.io.s3_special_in := norm2.io.special_out

  io.c := stage3.io.s3_c_out
  io.exception := stage3.io.s3_exception_out

  _root_.Chisel.printf("\n-----------------------------------------------------------\n\n")
}

// generate Verilog
object Multiplier extends App {
  (new chisel3.stage.ChiselStage).emitVerilog(new Multiplier())
}