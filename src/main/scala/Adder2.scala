import chisel3._
import chisel3.util._

class Stage1 extends Module {
  val io = IO(new Bundle{
    // Inputs
    val s1_a = Input(UInt(32.W))
    val s1_b = Input(UInt(32.W))
    val s1_add_in = Input(Bool())

    // Outputs
    val s1_res_a = Output(UInt(32.W))
    val s1_res_b = Output(UInt(32.W))
    val s1_shmt_amout = Output(UInt(8.W))
    val s1_a_larger = Output(Bool())
    val s1_add_out = Output(Bool())
  })

  // Latch inputs
  val s1_a_sign = RegNext(io.s1_a(31), 0.U)
  val s1_a_exp = RegNext(io.s1_a(30,23), 0.U)
  val s1_a_mant = RegNext(io.s1_a(22,0), 0.U)

  val s1_b_sign = RegNext(io.s1_b(31), 0.U)
  val s1_b_exp = RegNext(io.s1_b(30,23), 0.U)
  val s1_b_mant = RegNext(io.s1_b(22,0), 0.U)

  val s1_add = RegNext(io.s1_add_in, false.B)

  // temporal value
  val temp_a_exp = WireDefault(0.U(8))
  val temp_b_exp = WireDefault(0.U(8))
  val shift_value = WireDefault(0.U(8))

  val temp_a_larger = Wire(Bool())

    when(s1_a_exp > s1_b_exp) {
      //shift lower exponent for difference
        shift_value := s1_a_exp - s1_b_exp
        temp_a_exp := s1_a_exp
        temp_b_exp := s1_a_exp

        temp_a_larger := true.B
      }.elsewhen(s1_a_exp < s1_b_exp) {
        shift_value := s1_b_exp - s1_a_exp
        temp_a_exp := s1_b_exp
        temp_b_exp := s1_b_exp

        temp_a_larger := false.B
      }.otherwise {
        // a_exp == b_exp
        temp_a_exp := s1_b_exp
        temp_b_exp := s1_b_exp

        shift_value := 0.U


        temp_a_larger := true.B
    }

    io.s1_res_a := Cat(Cat(s1_a_sign, temp_a_exp), s1_a_mant);
    io.s1_res_b := Cat(Cat(s1_b_sign, temp_b_exp), s1_b_mant);
    io.s1_shmt_amout := shift_value
    io.s1_a_larger := temp_a_larger
    io.s1_add_out := s1_add

  }

class Stage2 extends Module {
  val io = IO(new Bundle{
    // Inputs
    val s2_a = Input(UInt(32.W))
    val s2_b = Input(UInt(32.W))
    val s2_add_in = Input(Bool())
    val s2_a_larger_in = Input(Bool())
    val s2_shmt_amout = Input(UInt(8.W))

    // Outputs
    val s2_res_a = Output(UInt(33.W))
    val s2_res_b = Output(UInt(33.W))
    val s2_add_out = Output(Bool())
    val s2_a_larger_out = Output(Bool())
  })

  // Latch inputs
  // extend mantissa to detect overflow
  val s2_a_sign = RegNext(io.s2_a(31), 0.U)
  val s2_a_exp = RegNext(io.s2_a(30,23), 0.U)
  val s2_a_mant = RegNext(Cat(0.U(1.W),io.s2_a(22,0)), 0.U)

  val s2_b_sign = RegNext(io.s2_b(31), 0.U)
  val s2_b_exp = RegNext(io.s2_b(30,23), 0.U)
  val s2_b_mant = RegNext(Cat(0.U(1.W),io.s2_b(22,0)), 0.U)

  val shift_value = RegNext(io.s2_shmt_amout, 0.U)
  val s2_add = RegNext(io.s2_add_in, false.B)
  val s2_a_larger = RegNext(io.s2_a_larger_in, true.B)

  // temporal value
  val temp_a_mant = WireDefault(0.U(24))
  val temp_b_mant = WireDefault(0.U(24))

  when(s2_a_larger){
    temp_a_mant := s2_a_mant
    temp_b_mant := (s2_b_mant >> shift_value).asUInt() // exponent increase for b

  }.otherwise{
    temp_a_mant := (s2_b_mant >> shift_value).asUInt() // exponent increase for b
    temp_b_mant := s2_b_mant
  }

  io.s2_res_a := Cat(Cat(s2_a_sign, s2_a_exp), temp_a_mant);
  io.s2_res_b := Cat(Cat(s2_b_sign, s2_b_exp), temp_b_mant);
  io.s2_add_out := s2_add
  io.s2_a_larger_out := s2_a_larger
}

class Stage3 extends Module {
  val io = IO(new Bundle {
    // Inputs
    val s3_a = Input(UInt(33.W))
    val s3_b = Input(UInt(33.W))
    val s3_add_in = Input(Bool())
    val s3_a_larger = Input(Bool())

    // Outputs
    val s3_c = Output(UInt(32.W))
  })

  // Latch inputs
  // extend mantissa to detect overflow
  val s3_a_sign = RegNext(io.s3_a(32), 0.U)
  val s3_a_exp = RegNext(io.s3_a(31,24), 0.U)
  val s3_a_mant = RegNext(io.s3_a(23,0), 0.U)

  val s3_b_sign = RegNext(io.s3_b(32), 0.U)
  val s3_b_exp = RegNext(io.s3_b(31,24), 0.U)
  val s3_b_mant = RegNext(io.s3_b(23,0), 0.U)

  val s3_add = RegNext(io.s3_add_in, false.B)
  val s3_a_larger = RegNext(io.s3_a_larger, true.B)

  // temporal value
  val temp_sum_mant = WireDefault(0.U(24))
  val temp_c_mant = WireDefault(0.U(23))
  val temp_c_sign = WireDefault(0.U(1))


  // add or sub
  when(s3_add){
    temp_sum_mant := s3_a_mant + s3_b_mant
  }.otherwise {
    temp_sum_mant := s3_a_mant - s3_b_mant
  }

  //detect sign
  when(s3_a_larger){
    temp_c_sign := s3_a_sign
  }.otherwise {
    temp_c_sign := s3_b_sign
  }

  // check the overflow
  when (temp_sum_mant(23) === 1.U(1.W)){
    // please check overflow
  }. otherwise{
    temp_c_mant := temp_sum_mant(22,0)
  }



  io.s3_c := Cat(Cat(temp_c_sign, s3_a_exp), temp_c_mant);


}

class Adder2 extends Module {
  val io = IO(new Bundle {
    // Input
    val a = Input(UInt(32.W))
    val b = Input(UInt(32.W))
    val opcode = Input(UInt(2.W))

    // Output
    val c = Output(UInt(32.W))
    val of = Output(UInt(1.W))
    val uf = Output(UInt(1.W))
  })

  val stage1 = Module(new Stage1())

  stage1.io.s1_a := io.a
  stage1.io.s1_b := io.b
  stage1.io.s1_add_in := io.opcode(0)

  val stage2 = Module(new Stage2())

  stage2.io.s2_a := stage1.io.s1_res_a
  stage2.io.s2_b := stage1.io.s1_res_b
  stage2.io.s2_add_in := stage1.io.s1_add_out
  stage2.io.s2_a_larger_in := stage1.io.s1_a_larger
  stage2.io.s2_shmt_amout := stage1.io.s1_shmt_amout

  val stage3 = Module(new Stage3())

  stage3.io.s3_a := stage2.io.s2_res_a
  stage3.io.s3_b := stage2.io.s2_res_b
  stage3.io.s3_add_in := stage2.io.s2_add_out
  stage3.io.s3_a_larger := stage2.io.s2_a_larger_out

  io.c := stage3.io.s3_c

}


// generate Verilog
/*object Adder extends App {
  (new chisel3.stage.ChiselStage).emitVerilog(new Adder())
}*/


