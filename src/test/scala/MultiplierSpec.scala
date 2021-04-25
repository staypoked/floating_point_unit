import chisel3._
import chisel3.iotesters._
import org.scalatest._
import chisel3.iotesters.Driver

// http://weitz.de/ieee/

class MultiplierTester(dut: Multiplier) extends PeekPokeTester(dut) {

  println("---------- Running basic multiplications ----------")
  /*
  * Simple Multiplication positive numbers
  */
  // Test 1
  val a_val = "b00111111100000000000000000000000".U // 1.0
  val b_val = "b01000000000000000000000000000000".U // 2.0

  poke(dut.io.a, a_val) //We apply a value to the input
  poke(dut.io.b, b_val) //We apply a value to the input
  step(6)

  expect(dut.io.c, "b01000000000000000000000000000000".U) // 2.0
  expect(dut.io.exception, false.B)


  // Test 2
  val a_val2 = "b01000000100100000000000000000000".U // 4.5
  val b_val2 = "b01000000000000000000000000000000".U // 2.0

  poke(dut.io.a, a_val2) //We apply a value to the input
  poke(dut.io.b, b_val2) //We apply a value to the input

  step(6)

  expect(dut.io.c, "b01000001000100000000000000000000".U) // 9.0
  expect(dut.io.exception, false.B)


  // Test 3
  val a_val3 = "b01000000100110110011001100110011".U // 4.85
  val b_val3 = "b01000000000001011100001010001111".U // 2.09

  poke(dut.io.a, a_val3) //We apply a value to the input
  poke(dut.io.b, b_val3) //We apply a value to the input

  step(6)
  expect(dut.io.c, "b01000001001000100010111100011010".U) // 10.136499
  expect(dut.io.exception, false.B)

  println("---------- Running multiplications with only negative numbers ----------")
  /*
  * Simple Multiplication negative numbers
  */

  // Test 4
  val a_val4 = "b11000000110000000000000000000000".U // -6.0
  val b_val4 = "b11000001000000000000000000000000".U // -8.0

  poke(dut.io.a, a_val4) //We apply a value to the input
  poke(dut.io.b, b_val4) //We apply a value to the input
  step(6)

  expect(dut.io.c, "b01000010010000000000000000000000".U) // 48.0
  expect(dut.io.exception, false.B)


  // Test 5
  val a_val5 = "b11000000101101000111101011100001".U // -5.64
  val b_val5 = "b11000001000100010001111010111000".U // -9.07

  poke(dut.io.a, a_val5) //We apply a value to the input
  poke(dut.io.b, b_val5) //We apply a value to the input

  step(6)
                      
  expect(dut.io.c, "b01000010010011001001111010000100".U) // 51.154797
  expect(dut.io.exception, false.B)


  // Test 6
  val a_val6 = "b11000100010110000110100011110110".U // -865.64
  val b_val6 = "b11000111101001111111100000001001".U // -86000.07

  poke(dut.io.a, a_val6) //We apply a value to the input
  poke(dut.io.b, b_val6) //We apply a value to the input

  step(6)

  expect(dut.io.c, "b01001100100011011111111000100110".U) // 74445104.0
  expect(dut.io.exception, false.B)

  println("---------- Running different sign multiplications ----------")
  /*
  * Simple Multiplication with different signs
  */
  // Test 7
  val a_val7 = "b11000001001010010011100011101111".U // -10.5764
  val b_val7 = "b01000001000010110001110000110110".U // 8.694387

  poke(dut.io.a, a_val7) //We apply a value to the input
  poke(dut.io.b, b_val7) //We apply a value to the input

  step(6)

  expect(dut.io.c, "b11000010101101111110100100100000".U) // -91.955315
  expect(dut.io.exception, false.B)

  // Test 8
  val a_val8 = "b11001011001000010110001000010000".U // -10576400.0
  val b_val8 = "b01010000000000011000111001110100".U // 8.694387E9

  poke(dut.io.a, a_val8) //We apply a value to the input
  poke(dut.io.b, b_val8) //We apply a value to the input

  step(6)

  expect(dut.io.c, "b11011011101000110101100001110000".U) // -9.195531E16
  expect(dut.io.exception, false.B)


  // Test 9
  val a_val9 = "b01010000000100000101000000100100".U // 9.684685E9
  val b_val9 = "b11010000000000011000111001110100".U // -8.694387E9

  poke(dut.io.a, a_val9) //We apply a value to the input
  poke(dut.io.b, b_val9) //We apply a value to the input

  step(6)

  expect(dut.io.c, "b11100000100100100001000101100000".U) // -8.4202395E19
  expect(dut.io.exception, false.B)

  println("---------- Running multiplications with big numbers ----------")
  /*
  * Multiplication with big numbers
  */

  // Test 10 edge case expecting -Inf*/
  val a_val10 = "b01101010101000000011100000111101".U // 9.684685E25
  val b_val10 = "b11010110100111100010011001100101".U // -8.694387E13

  poke(dut.io.a, a_val10) //We apply a value to the input
  poke(dut.io.b, b_val10) //We apply a value to the input

  step(6)

  expect(dut.io.c, "b11111111100000000000000000000000".U) // -Inf
  expect(dut.io.exception, true.B)


  // Test 11
  val a_val11 = "b01101010101000000011100000111101".U // 9.684685E25
  val b_val11 = "b01010110100111100010011001100101".U // 8.694387E13

  poke(dut.io.a, a_val11) //We apply a value to the input
  poke(dut.io.b, b_val11) //We apply a value to the input

  step(6)

  expect(dut.io.c, "b01111111100000000000000000000000".U) // Inf
  expect(dut.io.exception, true.B)

  // Test 12*/
  val a_val12 = "b01101100010010100000000000000110".U // 9.768125E26
  val b_val12 = "b01000001000010110001110000110110".U // 8.694387

  poke(dut.io.a, a_val12) //We apply a value to the input
  poke(dut.io.b, b_val12) //We apply a value to the input

  step(6)

  expect(dut.io.c, "b01101101110110111000100010001100".U) // 8.4927865E27
  expect(dut.io.exception, false.B)

  println("---------- Running special multiplication tests ----------")
  /*
  * Multiplication capturing special cases
  */
  // Test 13
  val val_Inf = "b01111111100000000000000000000000".U // Inf
  val val_mInf = "b11111111100000000000000000000000".U // -Inf

  poke(dut.io.a, val_Inf) //We apply a value to the input
  poke(dut.io.b, val_mInf) //We apply a value to the input

  step(6)

  expect(dut.io.c, val_mInf) // -Inf
  expect(dut.io.exception, false.B)

  // Test 14
  poke(dut.io.a, val_Inf) //We apply a value to the input
  poke(dut.io.b, val_Inf) //We apply a value to the input

  step(6)

  expect(dut.io.c, val_Inf) // Inf
  expect(dut.io.exception, false.B)

  // Test 15
  poke(dut.io.a, b_val12) //We apply a value to the input finite
  poke(dut.io.b, val_Inf) //We apply a value to the input

  step(6)

  expect(dut.io.c, val_Inf) // Inf
  expect(dut.io.exception, false.B)

  // Test 16
  poke(dut.io.a, b_val10) //We apply a value to the input finite
  poke(dut.io.b, val_Inf) //We apply a value to the input

  step(6)

  expect(dut.io.c, val_mInf) // Inf
  expect(dut.io.exception, false.B)

  // Test 17
  val val_NaN = "b01111111100000000000000000000001".U // NaN
  poke(dut.io.a, b_val12) //We apply a value to the input finite
  poke(dut.io.b, val_NaN) //We apply a value to the input

  step(6)

  expect(dut.io.c, val_NaN) // Inf
  expect(dut.io.exception, false.B)

  // Test 18
  val val_Null = "b00000000000000000000000000000000".U // NaN
  poke(dut.io.a, val_Inf) //We apply a value to the input finite
  poke(dut.io.b, val_Null) //We apply a value to the input

  step(6)

  expect(dut.io.c, val_NaN) // Inf
  expect(dut.io.exception, false.B)

  // ---------------------------- everything works fine until here (to be continued)

  println("*** Finished testing Multiplier! ***")

}

class MultiplierSpec extends FlatSpec with Matchers {
  "Multiplier " should "pass" in {
    chisel3.iotesters.Driver(() => new Multiplier()) { c => new MultiplierTester(c)} should be (true)
  }
}
/*
class MultiplierSpecWave extends FlatSpec with Matchers {
	"Multiplier " should "pass" in {
		Driver.execute(Array("--generate-vcd-output", "on"), () => new Multiplier()) { c => new MultiplierTester(c)} should be (true)
	}
}*/

