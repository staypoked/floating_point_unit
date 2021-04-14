import Chisel.{Input, Output, RegNext, UInt}
import chisel3._
import chisel3.util._

import java.util.zip.CRC32

class Reziprocal extends Module{
  val io = IO(new Bundle{
    // Input
    val a = Input(UInt(32.W))

    // Output
    val b = Output(UInt(32.W))
  })

  // Latch inputs
  val D = RegNext(Cat(1.U(1.W), 128.U(8.W), io.a(22,0)), 0.U)

  // temporal values
  val C1 = "b01000000001101001011010010110101".U // 48/17
  val C2 = "b00111111111100001111000011110001".U // 32/17
  val C3 = "b01000000000000000000000000000000".U // 2

  // Initialize temporal values
  val s1_2D_out = WireDefault(0.U(32.W))
  val s1_N0 = WireDefault(0.U(32.W))
  val S1_N0_in = WireDefault(Cat(~s1_2D_out(31), s1_2D_out(31, 0)))
  val S2_DN0_out = WireDefault(0.U(32.W))
  val S2_2minDN0_out = WireDefault(0.U(32.W))
  val s2_N1 = WireDefault(0.U(32.W))
  val S3_DN1_out = WireDefault(0.U(32.W))
  val S3_2minDN1_out = WireDefault(0.U(32.W))
  val N2 = WireDefault(0.U(32.W))



  // Stage 1
  val s1_mul = Module(new Multiplier())
  val s1_add = Module(new Adder())

  s1_mul.io.a := C2
  s1_mul.io.b := D
  s1_2D_out := s1_mul.io.c

  s1_mul.io.en_in := true.B
  s1_add.io.en_in := true.B

  s1_add.io.a := C1
  s1_add.io.b := S1_N0_in
  s1_N0 := s1_add.io.c

  // Stage 2
  val s2_mul_1 = Module(new Multiplier())
  val s2_mul_2 = Module(new Multiplier())
  val s2_add = Module(new Adder())

  s2_mul_1.io.a := D
  s2_mul_1.io.b := s1_N0
  S2_DN0_out := s2_mul_1.io.c

  s2_add.io.a := C3
  s2_add.io.b := Cat(~S2_DN0_out(31), S2_DN0_out(30,0))
  S2_2minDN0_out := s2_add.io.c

  s2_mul_2.io.a := s1_N0
  s2_mul_2.io.b := S2_2minDN0_out
  s2_N1 := s2_mul_2.io.c

  s2_mul_1.io.en_in := true.B
  s2_mul_2.io.en_in := true.B
  s2_add.io.en_in := true.B

  // Stage 3
  val s3_mul_1 = Module(new Multiplier())
  val s3_mul_2 = Module(new Multiplier())
  val s3_add = Module(new Adder())

  s3_mul_1.io.a := D
  s3_mul_1.io.b := s2_N1
  S3_DN1_out := s3_mul_1.io.c

  s3_add.io.a := C3
  s3_add.io.b := Cat(~S3_DN1_out(31), S3_DN1_out(30,0))
  S3_2minDN1_out := s3_add.io.c

  s3_mul_2.io.a := s2_N1
  s3_mul_2.io.b := S3_2minDN1_out
  N2 := s3_mul_2.io.c


  s3_mul_1.io.en_in := true.B
  s3_mul_2.io.en_in := true.B
  s3_add.io.en_in := true.B


  // Output
  io.b := Cat(io.a(31), io.a(30,23), N2(22,0))
}
