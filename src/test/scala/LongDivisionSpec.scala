import chisel3._
import chisel3.iotesters._
import org.scalatest._
import chisel3.iotesters.Driver

// http://weitz.de/ieee/

class LongDivisionTester(dut: LongDivision) extends PeekPokeTester(dut) {
  val val_Inf = "b01111111100000000000000000000000".U // Inf
  val val_mInf = "b11111111100000000000000000000000".U // -Inf
  val val_NaN = "b01111111100000000000000000000001".U // NaN
  val val_Null = "b00000000000000000000000000000000".U // Null
  /*


    // Test 1
    val val_10_0 = 10.U
    val val_20_0 = 20.U
    val val_2_0 = 2.U
    val val_5_0 = 5.U


    poke(dut.io.a, val_20_0) //We apply a value to the input
    poke(dut.io.b, val_2_0) //We apply a value to the input
    poke(dut.io.index, 5.U)
    poke(dut.io.enable, true.B)
    step(10)

    expect(dut.io.c, val_10_0) // 5.0

    step(1)

    */

  /*
  * Simple Multiplication positive numbers
  */
  // Test 1
  val val_10_0 = 10.U
  val val_20_0 = 20.U
  val val_512_0 = 512.U
  val val_256_0 = 256.U
  val val_2_0 = 2.U
  val val_5_0 = 5.U
  val val1 = "b101000000000000000000000".U
  val val2 = "b100000000000000000000000".U
  val val3 = "b101011011001010110000001".U
  //1000000000000

  println("*** First Division ***")
  poke(dut.io.numerator, val1) //We apply a value to the input
  poke(dut.io.denominator, val2) //We apply a value to the input
  step(1)
  poke(dut.io.enable, true.B)

  step(47)

  expect(dut.io.quotient, 1.U) // 5.0
  expect(dut.io.remainder, "b1000000000000000000000".U)
  expect(dut.io.ready, true.B) // 5.0

  println("*** Resetting ***")
  poke(dut.io.enable, false.B)

  step(2)
  expect(dut.io.quotient, 0.U)
  expect(dut.io.remainder, 0.U)
  expect(dut.io.ready, false.B)

  println("*** Second Division ***")
  poke(dut.io.numerator, val_512_0) //We apply a value to the input
  poke(dut.io.denominator, 2.U) //We apply a value to the input

  poke(dut.io.enable, true.B)
  step(25)

  expect(dut.io.quotient, val_256_0) // 5.0
  expect(dut.io.remainder, 0.U)
  expect(dut.io.ready, true.B) // 5.0

  println("*** Resetting ***")
  poke(dut.io.enable, false.B)
  step(2)

  println("*** Third Division ***")
  poke(dut.io.numerator, val3) //We apply a value to the input
  poke(dut.io.denominator, val2) //We apply a value to the input

  poke(dut.io.enable, true.B)
  step(25)

  expect(dut.io.quotient, 1.U) // 5.0
  expect(dut.io.remainder, "b1011011001010110000001".U)
  expect(dut.io.ready, true.B) // 5.0

  println("*** Finished testing!! ***")

  //step(4)

}

class LongDivisionSpec extends FlatSpec with Matchers {
  "SimpleDivider " should "pass" in {
    chisel3.iotesters.Driver(() => new LongDivision(24)) { c => new LongDivisionTester(c)} should be (true)
  }
}

class LongDivisionSpecWave extends FlatSpec with Matchers {
  "SimpleDivider " should "pass" in {
    Driver.execute(Array("--generate-vcd-output", "on"), () => new LongDivision(24)) { c => new LongDivisionTester(c)} should be (true)
  }
}