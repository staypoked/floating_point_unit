import chisel3._
import chisel3.iotesters._
import org.scalatest._
import chisel3.iotesters.Driver

// http://weitz.de/ieee/

class AdderTester(dut: Adder) extends PeekPokeTester(dut) {

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

	// Test 3
	val a_val_3 = "b01000001100011110001111010111000".U // 17.89
	val b_val_3 = "b01000100000000000000000010100100".U // 512.01

	poke(dut.io.a, a_val_3) //We apply a value to the input
	poke(dut.io.b, b_val_3) //We apply a value to the input

	step(6)

	expect(dut.io.c, "b01000100000001000111100110011010".U) // 529.9


/*
	// run basic Adder tests (simple add with overflow)

	val a_val_6 = "b01111111011111111111111111111111".U
	val b_val_6 = "b01111111000000000000000000000010".U

	//poke(dut.io.sel, 1.U)
	poke(dut.io.a, a_val_6) //We apply a value to the input
	poke(dut.io.b, b_val_6) //We apply a value to the input


	step(3)

	expect(dut.io.c, "b00000000000000000000000000000000".U)
	expect(dut.io.of, true.B)
	expect(dut.io.uf, false.B)

	// run basic Adder tests (simple sub without exponent alignment)

	val a_val_7 = "b10000000100000000000000000000010".U
	val b_val_7 = "b00000000100000000000000000000100".U

	//poke(dut.io.sel, 0.U)
	poke(dut.io.a, a_val_7) //We apply a value to the input
	poke(dut.io.b, b_val_7) //We apply a value to the input

	step(3)

	expect(dut.io.c, "b00000000100000000000000000000010".U)
	expect(dut.io.of, false.B)
	expect(dut.io.uf, false.B)


	val a_val_8 = "b00000000100000000000000000000110".U
	val b_val_8 = "b10000000100000000000000000000010".U

	poke(dut.io.a, a_val_8) //We apply a value to the input
	poke(dut.io.b, b_val_8) //We apply a value to the input
	step(3)

	expect(dut.io.c, "b00000000100000000000000000000100".U)
	expect(dut.io.of, false.B)
	expect(dut.io.uf, false.B)

	// run basic Adder tests (simple sub with exponent alignment)

	val a_val_9 = "b00000000100000000000000000000110".U
	val b_val_9 = "b10000001000000000000000000000010".U

	poke(dut.io.a, a_val_9) //We apply a value to the input
	poke(dut.io.b, b_val_9) //We apply a value to the input

	step(3)

	expect(dut.io.c, "b00000001000000000000000000000001".U)
	expect(dut.io.of, false.B)
	expect(dut.io.uf, false.B)

	// run basic Adder tests (simple sub with exponent alignment bigger numbs)

	val a_val_10 = "b10000000100000000000000100000000".U
	val b_val_10 = "b01000000000000000000000000000010".U

	poke(dut.io.a, a_val_10) //We apply a value to the input
	poke(dut.io.b, b_val_10) //We apply a value to the input

	step(3)

	expect(dut.io.c, "b01000000000000000000000000000010".U)
	expect(dut.io.of, false.B)
	expect(dut.io.uf, false.B)


	// run basic Adder tests (simple sub with underflow)

	val a_val_11 = "b11111111011111111111111111111111".U
	val b_val_11 = "b11111111000000000000000000000001".U

	poke(dut.io.a, a_val_11) //We apply a value to the input
	poke(dut.io.b, b_val_11) //We apply a value to the input

	step(3)

	expect(dut.io.c, "b00000000000000000000000000000000".U)
	expect(dut.io.of, true.B)
	//expect(dut.io.uf, true.B)

	// substraction with underflow

	val a_val_12 = "b10000000011111111111111111111111".U
	val b_val_12 = "b10000000000000000000000000000001".U

	poke(dut.io.a, a_val_12) //We apply a value to the input
	poke(dut.io.b, b_val_12) //We apply a value to the input

	step(3)

	expect(dut.io.c, "b00000000000000000000000000000000".U)
	expect(dut.io.of, true.B)
	//expect(dut.io.uf, true.B)
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


