import chisel3._
import chisel3.util._


class Adder extends Module{
  val io = IO(new Bundle {
    val a = Input(UInt(32.W))
    val b = Input(UInt(32.W))
    val c = Output(UInt(32.W))
  })

  _root_.Chisel.printf("a_val: %b, b_val: %b\n", io.a, io.b)

  val a_sign = RegNext(io.a(31), 0.U)
  val a_exp = RegNext(io.a(30,24), 0.U)
  val a_mant = RegNext(io.a(23,0), 0.U)


  val b_sign = RegNext(io.b(31), 0.U)
  val b_exp = RegNext(io.b(30,24), 0.U)
  val b_mant = RegNext(io.b(23,0), 0.U)


  _root_.Chisel.printf("a_sign: %d, a_exp: %b, a_mant: %b\n", a_sign, a_exp, a_mant)
  _root_.Chisel.printf("b_sign: %d, b_exp: %b, b_mant: %b\n", b_sign, b_exp, b_mant)
  //_root_.Chisel.printf("a_input: %b, b_input: %b\n", a_input, b_input)

  // output
  val tmp_sign = RegNext(0.U(1.W))
  val tmp_exp = RegNext(0.U(7.W))
  val tmp_mant = RegNext(0.U(24.W))

  val check_underflow = RegNext(false.B);
  val check_overflow = RegNext(false.B);

  /*
  * Simple Double precision?
  * NaN, Zero, Infinity
   */


  // check alignment of exponents


  when(a_exp > b_exp){
    //shift lower exponent for difference
    val shift_val = a_exp - b_exp;
    b_exp := a_exp;
    b_mant := (b_mant >> shift_val).asUInt(); // exponent increase for b
  }.elsewhen(a_exp < b_exp) {
    val shift_val = b_exp - a_exp;
    a_exp := b_exp;
    a_mant := (a_mant >> shift_val).asUInt();
  }

  _root_.Chisel.printf("a_sign: %d, a_exp: %d, a_mant: %d\n", a_sign, a_exp, a_mant)
  _root_.Chisel.printf("b_sign: %d, b_exp: %d, b_mant: %d\n", b_sign, b_exp, b_mant)
  _root_.Chisel.printf("tmp_sign: %d, tmp_exp: %d, tmp_mant: %d\n", tmp_sign, tmp_exp, tmp_mant)


  // afterwards the exponents has to equal
  tmp_exp := a_exp;
  val opcode = RegNext(0.U);

  when(!a_sign) {
    when(!b_sign) {
      // sign + +
      tmp_sign := 0.U;
      tmp_mant := a_mant + b_mant
      _root_.Chisel.printf("tmp_sign: %d, tmp_exp: %d, tmp_mant: %d\n", tmp_sign, tmp_exp, tmp_mant)
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

  _root_.Chisel.printf("tmp_sign: %d, tmp_exp: %d, tmp_mant: %d\n", tmp_sign, tmp_exp, tmp_mant)

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
  _root_.Chisel.printf("io_c: %b\n", Cat(Cat(tmp_sign, tmp_exp), tmp_mant))
  io.c := Cat(Cat(tmp_sign, tmp_exp), tmp_mant);

}

/*
// generate Verilog
object Adder extends App {
  (new chisel3.stage.ChiselStage).emitVerilog(new Adder())
}*/


