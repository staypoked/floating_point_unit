import chisel3._
import chisel3.iotesters._
import org.scalatest._
import chisel3.iotesters.Driver

// http://weitz.de/ieee/

class AdderTester(dut: Adder) extends PeekPokeTester(dut) {

	println("---------- Running basic additions ----------")
	/*
	 * run basic Adder tests (two equal numbers)
	 */
	// Test 1
	val a_val = "b00111111100000000000000000000000".U
	val b_val = "b00111111100000000000000000000000".U

	poke(dut.io.a, a_val) //We apply a value to the input
	poke(dut.io.b, b_val) //We apply a value to the input

	step(6)
	expect(dut.io.c, "b01000000000000000000000000000000".U)
	expect(dut.io.of, false.B)
	expect(dut.io.uf, false.B)
	expect(dut.io.zero, false.B)


	/*
	 * run basic Adder tests (simple add with exponent alignment)
	 */
	// Test 2
	val a_val2 = "b01000000010000000000000000000000".U // 3
	val b_val2 = "b01000001101110000000000000000000".U // 23

	poke(dut.io.a, a_val2) //We apply a value to the input
	poke(dut.io.b, b_val2) //We apply a value to the input

	step(6)

	expect(dut.io.c, "b01000001110100000000000000000000".U) //26
	expect(dut.io.of, false.B)
	expect(dut.io.uf, false.B)
	expect(dut.io.zero, false.B)


	// Test 3
	val a_val_3 = "b01000001100011110001111010111000".U // 17.89
	val b_val_3 = "b01000100000000000000000010100100".U // 512.01

	poke(dut.io.a, a_val_3) //We apply a value to the input
	poke(dut.io.b, b_val_3) //We apply a value to the input

	step(6)

	expect(dut.io.c, "b01000100000001000111100110011010".U) // 529.9
	expect(dut.io.of, false.B)
	expect(dut.io.uf, false.B)
	expect(dut.io.zero, false.B)

	println("---------- Running additions with big differences ----------")
	/*
	 * run basic Adder tests (big difference)
	 */

	// Test 4
	val a_val_4 = "b01001001001011101111001100111001".U // 716595.56
	val b_val_4 = "b01000000011001010001111010111000".U // 3.58

	poke(dut.io.a, a_val_4) //We apply a value to the input
	poke(dut.io.b, b_val_4) //We apply a value to the input

	step(6)

	expect(dut.io.c, "b01001001001011101111001101110010".U) // 716599.1
	expect(dut.io.of, false.B)
	expect(dut.io.uf, false.B)
	expect(dut.io.zero, false.B)

	// Test 5 (Test 4 swapped)
	val a_val_5 = "b01000000011001010001111010111000".U // 3.58
	val b_val_5 = "b01001001001011101111001100111001".U // 716595.56

	poke(dut.io.a, a_val_5) //We apply a value to the input
	poke(dut.io.b, b_val_5) //We apply a value to the input

	step(6)

	expect(dut.io.c, "b01001001001011101111001101110010".U) // 716599.1
	expect(dut.io.of, false.B)
	expect(dut.io.uf, false.B)
	expect(dut.io.zero, false.B)

	// Test 6
	val a_val_6 = "b01010001101110100100001110110111".U // 1E11
	val b_val_6 = "b01001001001011101111001101110010".U // 716599.1


	poke(dut.io.a, a_val_6) //We apply a value to the input
	poke(dut.io.b, b_val_6) //We apply a value to the input

	step(6)

	expect(dut.io.c, "b01010001101110100100010000001110".U) // 1.0000071E11
	expect(dut.io.of, false.B)
	expect(dut.io.uf, false.B)
	expect(dut.io.zero, false.B)

	// Test 7
	val a_val_7 = "b01100000101011010111100011101100".U // 1E20
	val b_val_7 = "b01000010110010000000000000000000".U // 100


	poke(dut.io.a, a_val_7) //We apply a value to the input
	poke(dut.io.b, b_val_7) //We apply a value to the input

	step(6)

	expect(dut.io.c, "b01100000101011010111100011101100".U) // 1E20
	expect(dut.io.of, false.B)
	expect(dut.io.uf, false.B)
	expect(dut.io.zero, false.B)

	println("---------- Running PI and 0 tests ----------")
	/*
 	* run Adder test PI
	*/
  // Test 8
	val a_val_8 = "b01000000010010010000111111011011".U // PI
	val b_val_8 = "b00000000000000000000000000000000".U // 0

	poke(dut.io.a, a_val_8) //We apply a value to the input
	poke(dut.io.b, b_val_8) //We apply a value to the input
	step(6)

	expect(dut.io.c, "b01000000010010010000111111011100".U) // PI
	expect(dut.io.of, false.B)
	expect(dut.io.uf, false.B)
	expect(dut.io.zero, false.B)


	println("---------- Running additions expecting Inf ----------")
	/*
	* run Adder tests expect overflow add inf
	*/
  // Test 9
	val a_val_9 = "b01111111011111111111111111111111".U // Biggest normalized floating point number 3.4028235E38
	val b_val_9 = "b01111111011111111111111111111111".U // Biggest normalized floating point number 3.4028235E38

	poke(dut.io.a, a_val_9) //We apply a value to the input
	poke(dut.io.b, b_val_9) //We apply a value to the input
	step(6)

	expect(dut.io.c, "b01111111100000000000000000000000".U) // Inf
	expect(dut.io.of, true.B)
	expect(dut.io.uf, false.B)
	expect(dut.io.zero, false.B)

	println("---------- Running additions with small numbers ----------")
  /*
	* run Adder tests with small numbers
	*/
  // Test 10
  val a_val_10 = "b00000000100000000000000000000001".U // Smallest normalized floating point number 1.1754945E-38
  val b_val_10 = "b00000011110010000000000000000010".U //  1.1754945E-36

  poke(dut.io.a, a_val_10) //We apply a value to the input
  poke(dut.io.b, b_val_10) //We apply a value to the input

  step(6)

  expect(dut.io.c, "b00000011110010100000000000000010".U) // 1.1872495E-36
  expect(dut.io.of, false.B)
  expect(dut.io.uf, false.B)
	expect(dut.io.zero, false.B)

	println("---------- Running basic subtraction ----------")
  /*
  * run Adder tests with different signs numbers
  */
	// Test 11
	val a_val_11 = "b11000001011100000000000000000000".U // -15.
	val b_val_11 = "b01000001010000000000000000000000".U // 12

	poke(dut.io.a, a_val_11) //We apply a value to the input
	poke(dut.io.b, b_val_11) //We apply a value to the input
	step(6)

	expect(dut.io.c, "b11000000010000000000000000000000".U) // -3
	expect(dut.io.of, false.B)
	expect(dut.io.uf, false.B)
	expect(dut.io.zero, false.B)


	// Test 12 swapped Test 11
	poke(dut.io.a, b_val_11) //We apply a value to the input
	poke(dut.io.b, a_val_11) //We apply a value to the input
	step(6)

	expect(dut.io.c, "b11000000010000000000000000000000".U) // -3
	expect(dut.io.of, false.B)
	expect(dut.io.uf, false.B)
	expect(dut.io.zero, false.B)


	// Test 13 -15 + 15
	val b_val_13 = "b01000001011100000000000000000000".U // 15.

	poke(dut.io.a, a_val_11) //We apply a value to the input
	poke(dut.io.b, b_val_13) //We apply a value to the input
	step(6)

	expect(dut.io.c, "b00000000000000000000000000000000".U) // 0
	expect(dut.io.of, false.B)
	expect(dut.io.uf, false.B)
	expect(dut.io.zero, true.B)

	/*
  * run Adder tests with negative numbers
  */

	// Test 14
	val a_val_14 = "b11000100000101000110010100011111".U // -593.58
	val b_val_14 = "b11000001000000000000000000000000".U //  -8.0

	poke(dut.io.a, a_val_14) //We apply a value to the input
	poke(dut.io.b, b_val_14) //We apply a value to the input

	step(6)

	expect(dut.io.c, "b11000100000101100110010100100000".U) // -601.58
	expect(dut.io.of, false.B)
	expect(dut.io.uf, false.B)
	expect(dut.io.zero, false.B)


	// Test 15
	val a_val_15 = "b11001100011000110100111001000111".U // -59586844.0
	val b_val_15 = "b11000001000011100011110101110001".U //  -8.89

	poke(dut.io.a, a_val_15) //We apply a value to the input
	poke(dut.io.b, b_val_15) //We apply a value to the input

	step(6)

	expect(dut.io.c, "b11001100011000110100111001001010".U) // -59586852.0
	expect(dut.io.of, false.B)
	expect(dut.io.uf, false.B)
	expect(dut.io.zero, false.B)

	// Test 16 swapped Test 15
	poke(dut.io.a, b_val_15) //We apply a value to the input
	poke(dut.io.b, a_val_15) //We apply a value to the input

	step(6)

	expect(dut.io.c, "b11001100011000110100111001001010".U) // -59586852.0
	expect(dut.io.of, false.B)
	expect(dut.io.uf, false.B)
	expect(dut.io.zero, false.B)

	println("---------- Running add/sub with big differences ----------")
	/*
	* run Adder tests with big numbers and different signs
	*/

	// Test 17
	val a_val_17 = "b11100101010010011110001101011001".U // -5.9586843E22
	val b_val_17 = "b01000001000011100011110101110001".U //  8.89

	poke(dut.io.a, a_val_17) //We apply a value to the input
	poke(dut.io.b, b_val_17) //We apply a value to the input

	step(6)

	expect(dut.io.c, "b11100101010010011110001101011010".U) // -5.9586843E22
	expect(dut.io.of, false.B)
	expect(dut.io.uf, false.B)
	expect(dut.io.zero, false.B)

	// Test 18
	val a_val_18 = "b11100101010010011110001101011001".U // -5.9586843E22
	val b_val_18 = "b01100000011001001000001111000001".U //  6.5864867E19

	poke(dut.io.a, a_val_18) //We apply a value to the input
	poke(dut.io.b, b_val_18) //We apply a value to the input

	step(6)

	expect(dut.io.c, "b11100101010010011010101000111010".U) // -5.952098E22
	expect(dut.io.of, false.B)
	expect(dut.io.uf, false.B)
	expect(dut.io.zero, false.B)

	// Test 19
	val a_val_19 = "b11111111011111111111111111111111".U // Biggest normalized negative floating point number 3.4028235E38
	val b_val_19 = "b01111001010010101111011000111000".U //  6.5864867E34

	poke(dut.io.a, a_val_19) //We apply a value to the input
	poke(dut.io.b, b_val_19) //We apply a value to the input

	step(6)

	expect(dut.io.c, "b11111111011111111111001101010000".U) // -3.4021649E38
	expect(dut.io.of, false.B)
	expect(dut.io.uf, false.B)
	expect(dut.io.zero, false.B)

	println("---------- Testing special operations ----------")
	/*
	* run Adder Test with spezial cases
	*/
	// Test 20
	val a_val_20 = "b01111111100000000000000000000000".U // +Inf
	val b_val_20 = "b11111111100000000000000000000000".U // -Inf

	poke(dut.io.a, a_val_20) //We apply a value to the input
	poke(dut.io.b, b_val_20) //We apply a value to the input

	step(6)

	expect(dut.io.c, "b01111111100000000000000000000001".U) // NaN
	expect(dut.io.of, false.B)
	expect(dut.io.uf, false.B)
	expect(dut.io.zero, false.B)


	// Test 21
	poke(dut.io.a, a_val_20) //We apply a value to the input
	poke(dut.io.b, a_val_20) //We apply a value to the input

	step(6)

	expect(dut.io.c, "b01111111100000000000000000000000".U) // +Inf
	expect(dut.io.of, false.B)
	expect(dut.io.uf, false.B)
	expect(dut.io.zero, false.B)

  // Test 22
	val a_val_22 = "b01111111100000000000000000000001".U // NaN
	val b_val_22 = "b01000001000011100011110101110001".U //  8.89

	poke(dut.io.a, a_val_22) //We apply a value to the input
	poke(dut.io.b, b_val_22) //We apply a value to the input

	step(6)

	expect(dut.io.c, "b01111111100000000000000000000001".U) // NaN
	expect(dut.io.of, false.B)
	expect(dut.io.uf, false.B)
	expect(dut.io.zero, false.B)


	// Test 23
	poke(dut.io.a, a_val_22) //We apply a value to the input // NaN
	poke(dut.io.b, b_val_20) //We apply a value to the input // -Inf

	step(6)

	expect(dut.io.c, "b01111111100000000000000000000001".U) // NaN
	expect(dut.io.of, false.B)
	expect(dut.io.uf, false.B)
	expect(dut.io.zero, false.B)

	// Test 24
	poke(dut.io.a, a_val_20) //We apply a value to the input // Inf
	poke(dut.io.b, b_val_22) //We apply a value to the input // 8.89

	step(6)

	expect(dut.io.c, "b01111111100000000000000000000000".U) // +Inf
	expect(dut.io.of, false.B)
	expect(dut.io.uf, false.B)
	expect(dut.io.zero, false.B)


	// Test 24
	poke(dut.io.a, b_val_20) //We apply a value to the input // -Inf
	poke(dut.io.b, b_val_22) //We apply a value to the input // 8.89

	step(6)

	expect(dut.io.c, "b11111111100000000000000000000000".U) // -Inf
	expect(dut.io.of, false.B)
	expect(dut.io.uf, false.B)

	expect(dut.io.zero, false.B)

	/*
	* run Adder Test expect underflow and -Inf
	*/
/*
	// Test 20
	val a_val_20 = "b10000000111111111111111111111111".U // -2.3509886E-38
	val b_val_20 = "b00000000100011001100110011001101".U // -1.1754945E-38

	poke(dut.io.a, a_val_20) //We apply a value to the input
	poke(dut.io.b, b_val_20) //We apply a value to the input

	step(6)

	expect(dut.io.c, "b11111111100000000000000000000000".U) // -Inf
	expect(dut.io.of, false.B)
	expect(dut.io.uf, true.B)
	expect(dut.io.zero, false.B)
*/
	// ---------------------------- everything works fine until here (to be continued)


	println("*** Finished testing!! ***")

}

class AdderSpec extends FlatSpec with Matchers {
	"Adder " should "pass" in {
		chisel3.iotesters.Driver(() => new Adder()) { c => new AdderTester(c)} should be (true)
	}
}


class AdderSpecWave extends FlatSpec with Matchers {
	"Adder " should "pass" in {
		Driver.execute(Array("--generate-vcd-output", "on"), () => new Adder()) { c => new AdderTester(c)} should be (true)
	}
}


