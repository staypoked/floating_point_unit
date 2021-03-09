import Chisel.{fromBooleanToLiteral, fromIntToWidth, fromtIntToLiteral, is}
import chisel3.util.switch
import chisel3.{Bundle, Input, Module, Output, RegInit, RegNext, UInt, when}

class Multiplier extends Module{
  val io = IO(new Bundle {
    val a = Input(UInt(32.W))
    val b = Input(UInt(32.W))
    val sel = Input(UInt(1.W))
    val c = Output(UInt(32.W))
  })

  val a_sign = RegNext(io.a(0)); // 1 for neg
  val a_exp = RegNext(io.a(7,1));
  val a_mant = RegNext(io.a(31,8));

  val b_sign = RegNext(io.b(0));
  val b_exp = RegNext(io.b(7,1));
  val b_mant = RegNext(io.b(31,8));

  // output
  val tmp_sign = RegInit(UInt(1.W));
  val tmp_exp = RegInit(UInt(7.W));
  val tmp_mant = RegInit(UInt(24.W));

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
      tmp_mant := a_mant << b_mant
    }
    is(1.U) { // division
      tmp_mant := a_mant >> b_mant
    }
  }

  var check_overflow = false;
  var check_underflow = false;

  // Over- and underflow
  switch(io.sel){ // multiplication
    is(0.U){
      when (a_mant > b_mant){
        when (tmp_mant < a_mant){
          check_overflow = true;
        }
      }.otherwise{
        when (tmp_mant < b_mant){
          check_overflow = true;
        }
      }
    }

    is(1.U){ // division
      when (a_mant > b_mant){
        when (tmp_mant > a_mant){
          check_underflow = true;
        }
      }.otherwise{
        when (tmp_mant > b_mant){
          check_underflow = true;
        }
      }
    }
  }

  val trigger_except = check_overflow | check_underflow
  when (trigger_except.B) {
    // trigger exception using some output flag
  }

  // output
  io.c(0) := tmp_sign;
  io.c(1,7) := tmp_exp;
  io.c(8,31) := tmp_mant;


}
