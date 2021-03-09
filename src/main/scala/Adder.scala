import Chisel.is
import chisel3._
import chisel3.util.ImplicitConversions.booleanToBool
import chisel3.util._


class Adder extends Module{
  val io = IO(new Bundle {
    val a = Input(UInt(32.W))
    val b = Input(UInt(32.W))
    val c = Output(UInt(32.W))
  })

  //val a_sign := Cat(io.a(3,2), 0.U(2.W));
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

  val check_underflow = false;
  val check_overflow = false;

  /*
  * Simple Double precision?
  * NaN, Zero, Infinity
   */


  // check alignment of exponents
  when(a_exp > b_exp){
    //shift lower exponent for difference
    val shift_val = RegNext(a_exp - b_exp);
    b_exp := RegNext(a_exp);
    b_mant := RegNext(b_mant >> shift_val); // exponent increase for b
  }.elsewhen(a_exp < b_exp){
    val shift_val = RegNext(b_exp - a_exp);
    a_exp := RegNext(b_exp);
    a_mant := RegNext(a_mant >> shift_val);
  }


  // afterwards the exponents has to equal
  tmp_exp := a_exp;
  val opcode = 0.U;

  /*switch(a_sign){
    is(0.U){
      when (!b_sign){
        // sign + +
        tmp_sign := 0.U;
        tmp_mant := RegNext(a_mant + b_mant);
        opcode := 1.U;

      }.otherwise{
        // sign a + and b -
        when (a_mant >= b_mant){
          tmp_sign := a_sign;
        }.otherwise{
          tmp_sign := b_sign;
        }
        tmp_mant := a_mant - b_mant;
        opcode:= 2.U;
      }
    }
    is(1.U) {
      when (!b_sign){
        // sign a - and b +
        when (a_mant > b_mant){
          tmp_sign := a_sign;
        }.otherwise{
          tmp_sign := b_sign;
        }
        tmp_mant := b_mant - a_mant;
        opcode := 2.U;

      }.otherwise{
        // sign - -
        tmp_sign := a_sign;
        tmp_mant := a_mant + b_mant;
        opcode := 1.U;
      }
    }
  }*/

  when(!a_sign) {
    when(!b_sign) {
      // sign + +
      tmp_sign := 0.U;
      tmp_mant := RegNext(a_mant + b_mant);
      opcode := 1.U;

    }.otherwise {
      // sign a + and b -
      when(a_mant >= b_mant) {
        tmp_sign := a_sign;
      }.otherwise {
        tmp_sign := b_sign;
      }
      tmp_mant := a_mant - b_mant;
      opcode := 2.U;
    }
  }.otherwise{
    when (!b_sign){
      // sign a - and b +
      when (a_mant > b_mant){
        tmp_sign := a_sign;
      }.otherwise{
        tmp_sign := b_sign;
      }
      tmp_mant := b_mant - a_mant;
      opcode := 2.U;

    }.otherwise{
      // sign - -
      tmp_sign := a_sign;
      tmp_mant := a_mant + b_mant;
      opcode := 1.U;
    }
  }


  // Over- and underflow
  switch(opcode){
    is(1.U){
      when (a_mant > b_mant){
        when (tmp_mant < a_mant){
          check_overflow := true;
        }
      }.otherwise{
        when (tmp_mant < b_mant){
          check_overflow := true;
        }
      }
    }

    is(2.U){
      when (a_mant > b_mant){
        when (tmp_mant > a_mant){
          check_underflow := true;
        }
      }.otherwise{
        when (tmp_mant > b_mant){
          check_underflow := true;
        }
      }
    }
  }


  // output
  io.c(0) := tmp_sign;
  io.c(1,7) := tmp_exp;
  io.c(8,31) := tmp_mant;

}



