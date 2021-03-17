import chisel3._
import chisel3.iotesters._
import org.scalatest._
import chisel3.iotesters.Driver

class Adder2Tester(dut: Adder2) extends PeekPokeTester(dut) {
/*
	// run basic Adder tests (simple add without exponent alignment)

	val a_val = "b00000000100000000000000000000001".U
	val b_val = "b00000000100000000000000000000010".U

	poke(dut.io.sel, 1.U)
	poke(dut.io.a, a_val) //We apply a value to the input
	poke(dut.io.b, b_val) //We apply a value to the input

	step(3)

	expect(dut.io.c, "b00000000100000000000000000000011".U)




	val a_val_2 = "b00000000100000000000000000100001".U
	val b_val_2 = "b00000000100000000000000001000010".U

	poke(dut.io.sel, 1.U)
	poke(dut.io.a, a_val_2) //We apply a value to the input
	poke(dut.io.b, b_val_2) //We apply a value to the input

	step(3)

	expect(dut.io.c, "b00000000100000000000000001100011".U)



	// run basic Adder tests (simple add with exponent alignment)

	val a_val_3 = "b00000000100000000000000000000010".U
	val b_val_3 = "b00000001000000000000000000000010".U

	poke(dut.io.sel, 1.U)
	poke(dut.io.a, a_val_3) //We apply a value to the input
	poke(dut.io.b, b_val_3) //We apply a value to the input

	step(3)

	expect(dut.io.c, "b00000001000000000000000000000011".U)




	val a_val_4 = "b00000000100000000000000000100000".U
	val b_val_4 = "b00001000000000000000000000000010".U

	poke(dut.io.sel, 1.U)
	poke(dut.io.a, a_val_4) //We apply a value to the input
	poke(dut.io.b, b_val_4) //We apply a value to the input

	step(3)

	expect(dut.io.c, "b00001000000000000000000000000010".U)





  //
	val a_val_5 = "b00000001000000001100000000000000".U
	val b_val_5 = "b00001000000000000000000000000010".U

	poke(dut.io.sel, 1.U)
	poke(dut.io.a, a_val_5) //We apply a value to the input
	poke(dut.io.b, b_val_5) //We apply a value to the input

	step(3)

	expect(dut.io.c, "b00001000000000000000000000000101".U)
	expect(dut.io.of, false.B)
	expect(dut.io.uf, false.B)




	// run basic Adder tests (simple add with overflow)

	val a_val_6 = "b01111111011111111111111111111111".U
	val b_val_6 = "b01111111000000000000000000000010".U

	poke(dut.io.sel, 1.U)
	poke(dut.io.a, a_val_6) //We apply a value to the input
	poke(dut.io.b, b_val_6) //We apply a value to the input


	step(3)

	expect(dut.io.c, "b00000000000000000000000000000000".U)
	expect(dut.io.of, true.B)
	expect(dut.io.uf, false.B)

*/


	/// 2er complement capture !!!!!!!!!!!!!!!!!!1/// 2er complement capture !!!!!!!!!!!!!!!!!!1

	// run basic Adder tests (simple sub without exponent alignment)

	val a_val_7 = "b10000000100000000000000000000010".U
	val b_val_7 = "b00000000100000000000000000000100".U

	poke(dut.io.sel, 0.U)
	poke(dut.io.a, a_val_7) //We apply a value to the input
	poke(dut.io.b, b_val_7) //We apply a value to the input

	step(3)

	expect(dut.io.c, "b10000000111111111111111111111100".U) // -- two's complement works also fine for subtraction
	expect(dut.io.of, false.B)
	expect(dut.io.uf, false.B)


/*

	val a_val_8 = "b00000000100000000000000000000110".U
	val b_val_8 = "b10000000100000000000000000000010".U

	poke(dut.io.a, a_val_8) //We apply a value to the input
	poke(dut.io.b, b_val_8) //We apply a value to the input
	step(3)
	poke(dut.io.en, true.B)
	step(3)

	expect(dut.io.c, "b00000000100000000000000000000100".U)
	expect(dut.io.of, false.B)
	expect(dut.io.uf, false.B)

	step(1)
	poke(dut.io.en, false.B)


	// run basic Adder tests (simple sub with exponent alignment)

	val a_val_9 = "b00000000100000000000000000000110".U
	val b_val_9 = "b10000001000000000000000000000010".U

	poke(dut.io.a, a_val_9) //We apply a value to the input
	poke(dut.io.b, b_val_9) //We apply a value to the input

	step(3)
	poke(dut.io.en, true.B)
	step(3)

	expect(dut.io.c, "b00000001000000000000000000000001".U)
	expect(dut.io.of, false.B)
	expect(dut.io.uf, false.B)

	step(1)
	poke(dut.io.en, false.B)

	// run basic Adder tests (simple sub with exponent alignment bigger numbs)

	val a_val_10 = "b10000000100000000000000100000000".U
	val b_val_10 = "b01000000000000000000000000000010".U

	poke(dut.io.a, a_val_10) //We apply a value to the input
	poke(dut.io.b, b_val_10) //We apply a value to the input

	step(3)
	poke(dut.io.en, true.B)
	step(5)

	expect(dut.io.c, "b01000000000000000000000000000010".U)
	expect(dut.io.of, false.B)
	expect(dut.io.uf, false.B)


	step(1)
	poke(dut.io.en, false.B)
	// run basic Adder tests (simple sub with underflow)

	val a_val_11 = "b11111111011111111111111111111111".U
	val b_val_11 = "b11111111000000000000000000000001".U

	poke(dut.io.a, a_val_11) //We apply a value to the input
	poke(dut.io.b, b_val_11) //We apply a value to the input
	step(5)
	poke(dut.io.en, true.B)
	step(5)

	expect(dut.io.c, "b00000000000000000000000000000000".U)
	expect(dut.io.of, false.B)
	expect(dut.io.uf, true.B)


*/

	// ---------------------------- everything works fine until here (to be continued)

	println("*** Finished testing!! ***")

}

class Adder2Spec extends FlatSpec with Matchers {
	"Adder2 " should "pass" in {
		chisel3.iotesters.Driver(() => new Adder2()) { c => new Adder2Tester(c)} should be (true)
	}
}

/*
class Adder2Spec extends FlatSpec with Matchers {
	"Adder2 " should "pass" in {
		Driver.execute(Array("--generate-vcd-output", "on"), () => new Adder2()) { c => new Adder2Tester(c)} should be (true)
	}
}*/


