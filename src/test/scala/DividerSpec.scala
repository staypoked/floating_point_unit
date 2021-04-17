import chisel3._
import chisel3.iotesters._
import org.scalatest._
import chisel3.iotesters.Driver

// http://weitz.de/ieee/

class DividerTester(dut: Divider) extends PeekPokeTester(dut) {
  val val_Inf = "b01111111100000000000000000000000".U // Inf
  val val_mInf = "b11111111100000000000000000000000".U // -Inf
  val val_NaN = "b01111111100000000000000000000001".U // NaN
  val val_zero = "b00000000000000000000000000000000".U // Zero

  val val_10_0 = "b01000001001000000000000000000000".U
  val val_10_849 = "b01000001001011011001010110000001".U

  val val_2_0 = "b01000000000000000000000000000000".U
  val val_2_074 = "b01000000000001001011110001101010".U

  val val_5_0 = "b01000000101000000000000000000000".U
  val val_5_230 = "b01000000101001110110001111111100".U

  val val_m95632_0 = "b11000111101110101100100000000000".U
  val val_530_0 = "b01000100000001001000000000000000".U
  val val_m180_43773 = "b11000011001101000111000000001111".U


  println("---------- Running basic divisions ----------")
  /*
  * Simple Divisions positive numbers
  */
  poke(dut.io.a, val_10_0) //We apply a value to the input
  poke(dut.io.b, val_2_0) //We apply a value to the input
  poke(dut.io.en_in, true.B)

  step(6)

  expect(dut.io.c, val_5_0) //
  expect(dut.io.exception, false.B)

  poke(dut.io.a, val_10_849) //We apply a value to the input
  poke(dut.io.b, val_2_074) //We apply a value to the input
  poke(dut.io.en_in, true.B)

  step(6)
  val calc1 = "b01000000101010001101100100011000".U // 5.2765007
  expect(dut.io.c, calc1) //
  expect(dut.io.exception, false.B)

  println("---------- Running divisions with only negative numbers ----------")
  /*
  * Simple Divisions negative numbers
  */

  println("---------- Running different sign divisions ----------")
  /*
  * Simple Divisions with different signs
  */
  poke(dut.io.a, val_m95632_0) //We apply a value to the input
  poke(dut.io.b, val_530_0) //We apply a value to the input
  poke(dut.io.en_in, true.B)

  step(6)

  expect(dut.io.c, val_m180_43773) //
  expect(dut.io.exception, false.B)

  println("---------- Running divisions with big numbers ----------")
  /*
  * Divisions with big numbers
  */

  println("---------- Running divisions with small numbers ----------")
  /*
  * Divisions with small numbers
  */

  // Test
  poke(dut.io.a, val_10_0) //We apply a value to the input
  poke(dut.io.b, val_Inf) //We apply a value to the input
  poke(dut.io.en_in, true.B)

  step(6)

  expect(dut.io.c, val_zero) //
  expect(dut.io.exception, false.B)

  // Test
  poke(dut.io.a, val_10_0) //We apply a value to the input
  poke(dut.io.b, val_zero) //We apply a value to the input

  step(6)

  expect(dut.io.c, val_Inf) //
  expect(dut.io.exception, false.B)

  // Test
  poke(dut.io.a, val_zero) //We apply a value to the input
  poke(dut.io.b, val_zero) //We apply a value to the input

  step(6)

  expect(dut.io.c, val_NaN) //
  expect(dut.io.exception, false.B)

  // Test
  poke(dut.io.a, val_Inf) //We apply a value to the input
  poke(dut.io.b, val_Inf) //We apply a value to the input

  step(6)

  expect(dut.io.c, val_NaN) //
  expect(dut.io.exception, false.B)

  // Test
  poke(dut.io.a, val_5_0) //We apply a value to the input
  poke(dut.io.b, val_NaN) //We apply a value to the input

  step(6)

  expect(dut.io.c, val_NaN) //
  expect(dut.io.exception, false.B)

  // Test
  poke(dut.io.a, val_NaN) //We apply a value to the input
  poke(dut.io.b, val_zero) //We apply a value to the input

  step(6)

  expect(dut.io.c, val_NaN) //
  expect(dut.io.exception, false.B)

  println("*** Finished testing!! ***")

}

class DividerSpec extends FlatSpec with Matchers {
  "Divider " should "pass" in {
    chisel3.iotesters.Driver(() => new Divider()) { c => new DividerTester(c)} should be (true)
  }
}

class DividerSpecWave extends FlatSpec with Matchers {
  "Divider " should "pass" in {
    Driver.execute(Array("--generate-vcd-output", "on"), () => new Divider()) { c => new DividerTester(c)} should be (true)
  }
}

