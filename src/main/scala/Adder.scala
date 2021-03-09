import Chisel.is
import chisel3._
import chisel3.core.IO
import chisel3.util.ImplicitConversions.booleanToBool
import chisel3.util._


class Adder extends Module{
  val io = IO(new Bundle {
    val a = Input(UInt(32.W))
    val b = Input(UInt(32.W))
    val c = Output(UInt(32.W))
  })

  //val a_sign := Cat(io.a(3,2), 0.U(2.W));
  var a_sign = RegNext(io.a(0)); // 1 for neg
  var a_exp = RegNext(io.a(7,1));
  var a_mant = RegNext(io.a(31,8));

  var b_sign = RegNext(io.b(0));
  var b_exp = RegNext(io.b(7,1));
  var b_mant = RegNext(io.b(31,8));

  // output
  var tmp_sign = RegInit(0.U(1.W));
  var tmp_exp = RegInit(0.U(7.W));
  var tmp_mant = RegInit(0.U(24.W));

  var check_underflow = RegInit(false.B);
  var check_overflow = RegInit(false.B);

  /*
  * Simple Double precision?
  * NaN, Zero, Infinity
   */


  // check alignment of exponents
  when(a_exp > b_exp){
    //shift lower exponent for difference
    var shift_val = a_exp - b_exp;
    b_exp := a_exp;
    b_mant := b_mant >> shift_val; // exponent increase for b
  }.elsewhen(a_exp < b_exp) {
    var shift_val = b_exp - a_exp;
    a_exp := b_exp;
    a_mant := a_mant >> shift_val;
  }


  // afterwards the exponents has to equal
  tmp_exp := a_exp;
  var opcode = RegInit(0.U);

  when(!a_sign) {
    when(!b_sign) {
      // sign + +
      tmp_sign := 0.U;
      tmp_mant := a_mant + b_mant;
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
          check_overflow := true.B;
        }
      }.otherwise{
        when (tmp_mant < b_mant){
          check_overflow := true.B;
        }
      }
    }

    is(2.U){
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


  // output
  io.c := Cat(Cat(tmp_sign, tmp_exp), tmp_mant);

}

/*
// generate Verilog
object Adder extends App {
  (new chisel3.stage.ChiselStage).emitVerilog(new Adder())
}*/


