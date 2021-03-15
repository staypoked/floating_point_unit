import Chisel.{fromBooleanToLiteral, fromIntToWidth, fromtIntToLiteral, is}
import chisel3.util.{Cat, switch}
import chisel3.{Bundle, Input, Module, Output, RegInit, RegNext, UInt, when}

class Multiplier extends Module{
  val io = IO(new Bundle {
    val a = Input(UInt(32.W))
    val b = Input(UInt(32.W))
    val sel = Input(UInt(1.W))
    val c = Output(UInt(32.W))
  })

  val a_sign = RegNext(io.a(31), 0.U)
  val a_exp = RegNext(io.a(30,23), 0.U)
  val a_mant = RegNext(io.a(22,0), 0.U)

  val b_sign = RegNext(io.b(31), 0.U)
  val b_exp = RegNext(io.b(30,23), 0.U)
  val b_mant = RegNext(io.b(22,0), 0.U)

  // output
  val tmp_sign = RegNext(0.U(1.W))
  val tmp_exp = RegNext(0.U(8.W))
  val tmp_mant = RegNext(0.U(23.W))

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


}
