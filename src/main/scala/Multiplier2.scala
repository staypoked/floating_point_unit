import Chisel.{UIntToOH, fromBooleanToLiteral, fromIntToWidth, fromtIntToLiteral, is}
import chisel3.{Bool, Bundle, Input, Module, Output, RegInit, RegNext, UInt, WireDefault, when}

class Stage1 extends Module{
  val io = IO(new Bundle {
    // Inputs
    val s1_a = Input(UInt(32.W))
    val s1_b = Input(UInt(32.W))
    val s1_sel_in = Input(Bool())

    val s1_sel_out = Output(Bool())
    val s1_c_sign = Output(UInt(1.W))
    val s1_c_exp = Output(UInt(8.W))
  })

  // Latch inputs
  val s1_a_sign = RegNext(io.s1_a(31), 0.U)
  val s1_a_exp = RegNext(io.s1_a(30,23), 0.U)
  val s1_a_mant = RegNext(io.s1_a(22,0), 0.U)

  val s1_b_sign = RegNext(io.s1_b(31), 0.U)
  val s1_b_exp = RegNext(io.s1_b(30,23), 0.U)
  val s1_b_mant = RegNext(io.s1_b(22,0), 0.U)


  // detect sign
  val temp_c_sign = (s1_a_sign ^ s1_b_sign)

  // align exponent
  val temp_c_exp = s1_a_exp + s1_b_exp - 128.U

  // write to outputs
  io.s1_sel_out := RegNext(io.s1_sel_in, true.B)
  io.s1_c_sign := temp_c_sign
  io.s1_c_exp := temp_c_exp
}

class Stage2 extends Module {
  val io = IO(new Bundle {
    // Inputs
    val s2_a = Input(UInt(32.W))
    val s2_b = Input(UInt(32.W))
    val s2_sel_in = Input(Bool())
    val s2_c_sign = Input(UInt(1.W))
    val s2_c_exp = Input(UInt(8.W))

    val c_sign = Output(UInt(1.W))
    val c_exp = Output(UInt(8.W))
    val c_mant
  })

  // Latch inputs
  val s2_a_sign = RegNext(io.s2_a(31), 0.U)
  val s2_a_exp = RegNext(io.s2_a(30,23), 0.U)
  val s2_a_mant = RegNext(io.s2_a(22,0), 0.U)

  val s2_b_sign = RegNext(io.s2_b(31), 0.U)
  val s2_b_exp = RegNext(io.s2_b(30,23), 0.U)
  val s2_b_mant = RegNext(io.s2_b(22,0), 0.U)

  val s2_c_sign = RegNext(io.s2_c_sign, 0.U)
  val s2_c_exp = RegNext(io.s2_c_exp, 0.U)

  val s2_sel = RegNext(io.s2_sel_in, true.B)

  // temporal value
  val c_mant = WireDefault(UInt(64.W))

  when(s2_sel){
    c_mant := s2_a_mant * s2_b_mant
  }.otherwise{
    c_mant := s2_a_mant / s2_b_mant
  }


}


class Multiplier2 extends Module{
  val io = IO(new Bundle {
    val a = Input(UInt(32.W))
    val b = Input(UInt(32.W))
    val sel = Input(UInt(1.W))
    val c = Output(UInt(32.W))
  })
/*
  val a_sign = RegNext(io.a(31), 0.U)
  val a_exp = RegNext(io.a(30,23), 0.U)
  val a_mant = RegNext(io.a(22,0), 0.U)

  val b_sign = RegNext(io.b(31), 0.U)
  val b_exp = RegNext(io.b(30,23), 0.U)
  val b_mant = RegNext(io.b(22,0), 0.U)

  // output
  val tmp_sign = RegInit(0.U(1.W))
  val tmp_exp = RegInit(0.U(8.W))
  val tmp_mant = RegInit(0.U(23.W))

  tmp_sign := a_sign ^ b_sign

  // sign determination
  /*when (a_sign) {
    when (b_sign) {
      tmp_sign := a_sign
    } .otherwise {
      tmp_sign := b_sign
    }
  } .otherwise {
    when (b_sign) {
      tmp_sign := a_sign
    } .otherwise {
      tmp_sign := !a_sign
    }
  }*/

  tmp_exp := a_exp + b_exp - 128.U // bias

  switch(io.sel) {
    is(0.U) { // multiplication
      tmp_mant := a_mant * b_mant
    }
    is(1.U) { // division
      tmp_mant := a_mant / b_mant
    }
  }

  var check_overflow = RegInit(false.B);
  var check_underflow = RegInit(false.B);

  // Over- and underflow
  switch(io.sel){ // multiplication
    is(0.U){
      when (a_mant > b_mant){
        when (tmp_mant < a_mant){
          check_overflow := true.B;
        }
      }.otherwise{
        when (tmp_mant < b_mant){
          check_overflow := true.B;
        }
      }
    }

    is(1.U){ // division
      when (a_mant > b_mant){
        when (tmp_mant > a_mant){
          check_underflow := true.B;
        }
      }.otherwise{
        when (tmp_mant > b_mant){
          check_underflow := true.B;
        }
      }
    }
  }

  val trigger_except = check_overflow | check_underflow
  when (trigger_except) {
    // trigger exception using some output flag
  }

  // output
  io.c := Cat(Cat(tmp_sign, tmp_exp), tmp_mant);
*/

}
