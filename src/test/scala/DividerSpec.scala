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
  val val_m10_849 = "b11000001001011011001010110000001".U

  val val_2_0 = "b01000000000000000000000000000000".U
  val val_2_074 = "b01000000000001001011110001101010".U

  val val_5_0 = "b01000000101000000000000000000000".U
  val val_5_230 = "b01000000101001111010101000000000".U

  val val_530_0 = "b01000100000001001000000000000000".U
  val val_m530_0 = "b11000100000001001000000000000000".U

  val val_m95632_0 = "b11000111101110101100100000000000".U
  val val_m968_785 = "b11000100011100100011001000111101".U
  val val_m600_001 = "b11000100000101100000000000010000".U
  val val_m180_43773 = "b11000011001101000111000000001111".U

  val val_6E15 = "b01011001110001000000110110001110".U
  val val_m6E15 = "b11011001110001000000110110001110".U

  val val_4E9 = "b01001111011011100110101100101000".U
  val val_m4E9 = "b11001111011011100110101100101000".U

  println("---------- Running basic divisions ----------")
 /*
  * Simple Divisions positive numbers
  */
  println("Test")

  poke(dut.io.a, val_10_0) //We apply a value to the input
  poke(dut.io.b, val_2_0) //We apply a value to the input
  poke(dut.io.en_in, true.B)

  step(33)

  expect(dut.io.c, val_5_0) //
  expect(dut.io.exception, false.B)
  expect(dut.io.en_out, true.B)

  println("Reset")
  poke(dut.io.en_in, false.B)
  step(3)

  println("---------- Running divisions with only negative numbers ----------")
  /*
   * Simple Divisions negative numbers
   */
  println("Test")
  poke(dut.io.a, val_m95632_0) //We apply a value to the input
  poke(dut.io.b, val_m180_43773) //We apply a value to the input
  poke(dut.io.en_in, true.B)

  step(33)
  expect(dut.io.c, "b01000100000001001000000000010000".U)
  expect(dut.io.exception, false.B)

  println("Reset")
  poke(dut.io.en_in, false.B)
  step(3)


  println("Test")
  poke(dut.io.a, val_m968_785) //We apply a value to the input
  poke(dut.io.b, val_m600_001) //We apply a value to the input
  poke(dut.io.en_in, true.B)

  step(33)
  expect(dut.io.c, "b00111111101100000011000110001110".U)
  expect(dut.io.exception, false.B)

  println("Reset")
  poke(dut.io.en_in, false.B)
  step(3)

  println("---------- Running different sign divisions ----------")
  /*
  * Simple Divisions with different signs
  */
  println("Test")
  poke(dut.io.a, val_m180_43773) //We apply a value to the input
  poke(dut.io.b, val_2_074) //We apply a value to the input
  poke(dut.io.en_in, true.B)

  step(33)

  expect(dut.io.c, "b11000010101011100000000000101000".U)
  expect(dut.io.exception, false.B)

  println("Reset")
  poke(dut.io.en_in, false.B)
  step(3)

  println("Test")
  poke(dut.io.a, val_m600_001) //We apply a value to the input
  poke(dut.io.b, val_530_0) //We apply a value to the input
  poke(dut.io.en_in, true.B)

  step(33)

  expect(dut.io.c, "b10111111100001011000000000010000".U)
  expect(dut.io.exception, false.B)

  println("Reset")
  poke(dut.io.en_in, false.B)
  step(3)

  println("---------- Running divisions with big differences ----------")
  /*
  * Divisions with big numbers
  */
  println("Test")
  poke(dut.io.a, val_6E15) //We apply a value to the input
  poke(dut.io.b, val_2_0) //We apply a value to the input
  poke(dut.io.en_in, true.B)

  step(33)

  expect(dut.io.c, "b01011001010001000000110110001110".U)
  expect(dut.io.exception, false.B)

  println("Reset")
  poke(dut.io.en_in, false.B)
  step(3)

  println("Test")
  poke(dut.io.a, val_m4E9) //We apply a value to the input
  poke(dut.io.b, val_530_0) //We apply a value to the input
  poke(dut.io.en_in, true.B)

  step(33)

  expect(dut.io.c, "b11001010111011100110101100101000".U)
  expect(dut.io.exception, false.B)

  println("Reset")
  poke(dut.io.en_in, false.B)
  step(3)

  println("---------- Running divisions with special operations ----------")

  // Test
  println("Test")
  poke(dut.io.a, val_10_0) //We apply a value to the input
  poke(dut.io.b, val_Inf) //We apply a value to the input
  poke(dut.io.en_in, true.B)

  step(33)

  expect(dut.io.c, val_zero) //
  expect(dut.io.exception, false.B)

  println("Reset")
  poke(dut.io.en_in, false.B)
  step(3)

  // Test
  println("Test")
  poke(dut.io.a, val_10_0) //We apply a value to the input
  poke(dut.io.b, val_zero) //We apply a value to the input

  step(33)

  expect(dut.io.c, val_Inf) //
  expect(dut.io.exception, true.B)

  println("Reset")
  poke(dut.io.en_in, false.B)
  step(3)

  // Test
  println("Test")
  poke(dut.io.a, val_zero) //We apply a value to the input
  poke(dut.io.b, val_zero) //We apply a value to the input

  step(33)

  expect(dut.io.c, val_NaN) //
  expect(dut.io.exception, false.B)

  println("Reset")
  poke(dut.io.en_in, false.B)
  step(3)

  // Test
  println("Test")
  poke(dut.io.a, val_Inf) //We apply a value to the input
  poke(dut.io.b, val_Inf) //We apply a value to the input

  step(33)

  expect(dut.io.c, val_NaN) //
  expect(dut.io.exception, false.B)

  println("Reset")
  poke(dut.io.en_in, false.B)
  step(3)

  // Test
  println("Test")
  poke(dut.io.a, val_5_0) //We apply a value to the input
  poke(dut.io.b, val_NaN) //We apply a value to the input

  step(33)

  expect(dut.io.c, val_NaN) //
  expect(dut.io.exception, false.B)

  println("Reset")
  poke(dut.io.en_in, false.B)
  step(3)

  // Test
  println("Test")
  poke(dut.io.a, val_NaN) //We apply a value to the input
  poke(dut.io.b, val_zero) //We apply a value to the input

  step(33)

  expect(dut.io.c, val_NaN) //
  expect(dut.io.exception, false.B)

  println("---------- Finished testing Divider! ----------")

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

