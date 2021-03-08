import Chisel.is
import chisel3._
import chisel3.core.IO
import chisel3._
import chisel3.util._


class Adder extends Module{
  val io = IO(new Bundle {
    val a = Input(UInt(32.W))
    val b = Input(UInt(32.W))
    val c = Output(UInt(32.W))
  })

  //val a_sign := Cat(io.a(3,2), 0.U(2.W));
  val a_sign = RegNext(io.a(0)); // 1 for neg
  val a_exp = RegNext(io.a(1,7));
  val a_mant = RegNext(io.a(8,31));

  val b_sign = RegNext(io.b(0));
  val b_exp = RegNext(io.b(1,7));
  val b_mant = RegNext(io.b(8,31));

  // output
  val tmp_sign = RegInit(0.U(1.W));
  val tmp_exp = RegInit(0.U(7.W));
  val tmp_mant = RegInit(0.U(24.W));

  val check_underflow = 0.U;
  val check_overflow = 0.U;

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

  switch(a_sign){
    is(0.U){
      when (!b_sign){
        // sign + +
        tmp_sign := 0.U;
        tmp_mant := RegNext(a_mant + b_mant);
      }.otherwise{
        // sign a + and b -
        when (a_mant >= b_mant){
          tmp_sign := a_sign;
        }.otherwise{
          tmp_sign := b_sign;
        }
        tmp_mant := a_mant - b_mant;
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
      }.otherwise{
        // sign - -
        tmp_sign := a_sign;
        tmp_mant := a_mant + b_mant;
      }
    }
  }


  // Over- and underflow
  switch(tmp_exp){
    is("1111111".){

    }
  }




  // output
  io.c(0) := tmp_sign;
  io.c(1,7) := tmp_exp;
  io.c(8,31) := tmp_mant;

}



