import chisel3._
import chisel3.util._
import chisel3.iotesters._
import org.scalatest._

class AdderTester(dut: Adder) extends PeekPokeTester(dut) {

	// run basic Adder tests (simple add without exponent alignment)
/*
	val a_val = "b00000000100000000000000000000001".U
	val b_val = "b00000000100000000000000000000010".U

	poke(dut.io.a, a_val) //We apply a value to the input
	poke(dut.io.b, b_val) //We apply a value to the input

	step(2)

	//expect(dut.io.c, "b00000000100000000000000000000011".U)

	val a_val_2 = "b00000000100000000000000000100001".U
	val b_val_2 = "b00000000100000000000000001000010".U

	poke(dut.io.a, a_val_2) //We apply a value to the input
	poke(dut.io.b, b_val_2) //We apply a value to the input

	step(2)

	//expect(dut.io.c, "b00000000100000000000000001100011".U)

	// run basic Adder tests (simple add with exponent alignment)

	val a_val_3 = "b00000000100000000000000000000010".U
	val b_val_3 = "b00000001000000000000000000000010".U

	poke(dut.io.a, a_val_3) //We apply a value to the input
	poke(dut.io.b, b_val_3) //We apply a value to the input

	step(3)

	expect(dut.io.c, "b00000001000000000000000000000011".U)

	val a_val_4 = "b00000000100000000000000000100000".U
	val b_val_4 = "b00001000000000000000000000000010".U

	poke(dut.io.a, a_val_4) //We apply a value to the input
	poke(dut.io.b, b_val_4) //We apply a value to the input

	step(3)

	expect(dut.io.c, "b00001000000000000000000000000010".U)

	val a_val_5 = "b00000001000000001100000000000000".U
	val b_val_5 = "b00001000000000000000000000000010".U

	poke(dut.io.a, a_val_5) //We apply a value to the input
	poke(dut.io.b, b_val_5) //We apply a value to the input

	step(4)

	expect(dut.io.c, "b00001000000000000000000000000101".U)

	// run basic Adder tests (simple add with overflow)

	val a_val_6 = "b00000000111111111111111111111111".U
	val b_val_6 = "b00000000100000000000000000000010".U

	poke(dut.io.a, a_val_6) //We apply a value to the input
	poke(dut.io.b, b_val_6) //We apply a value to the input

	step(3)

	expect(dut.io.c, "b00000000000000000000000000000000".U)
	expect(dut.io.of, true.B)
	expect(dut.io.uf, false.B)

	// run basic Adder tests (simple sub without exponent alignment)

	val a_val_7 = "b10000000100000000000000000000110".U
	val b_val_7 = "b00000000100000000000000000000010".U

	poke(dut.io.a, a_val_7) //We apply a value to the input
	poke(dut.io.b, b_val_7) //We apply a value to the input

	step(3)

	expect(dut.io.c, "b10000000111111111111111111111100".U) // -- two's complement works also fine for subtraction
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

*/

	// run basic Adder tests (simple sub with exponent alignment) ---------------------------- everything works fine until here (to be continued)

	val a_val_7 = "b10000000100000000000000000000110".U
	val b_val_7 = "b00000000100000000000000000000010".U

	poke(dut.io.a, a_val_7) //We apply a value to the input
	poke(dut.io.b, b_val_7) //We apply a value to the input

	step(3)

	expect(dut.io.c, "b10000000111111111111111111111100".U)
	expect(dut.io.of, false.B)
	expect(dut.io.uf, false.B)

	// run basic Adder tests (simple sub with underflow)

	val a_val_10 = "b00000000100000000000000000000000".U
	val b_val_10 = "b10000000100000000000000000000010".U

	poke(dut.io.a, a_val_10) //We apply a value to the input
	poke(dut.io.b, b_val_10) //We apply a value to the input

	step(3)

	expect(dut.io.c, "b00000000000000000000000000000000".U)
	expect(dut.io.of, true.B)
	expect(dut.io.uf, false.B)


	/*
	* NUMB GENERATOR
	 */
	// for (repetitions <- 0 to 19){
		//val a_val = WireDefault(0.U)


		/*
		var a_sign = 0.U(1.W)
		var a_exp = 0.U(7.W)
		var a_mant = 0.U(24.W)
		var b_sign = 0.U(1.W)
		var b_exp = 0.U(7.W)
		var b_mant = 0.U(24.W)

		var rand_sign = scala.util.Random.nextInt(1)
		a_sign = rand_sign.asUInt()
		rand_sign = scala.util.Random.nextInt(1)
		b_sign = rand_sign.asUInt()


		val rand_exp = scala.util.Random.nextInt(1)
		a_exp = rand_exp.asUInt()
		b_exp = rand_exp.asUInt()

		var rand_mant = scala.util.Random.nextInt(40)
		val a_mant = rand_mant.asUInt()
		rand_mant = scala.util.Random.nextInt(40)
		val b_mant = rand_mant.asUInt()
*/


		/*
		* CALC EXPECTED VALUE
		 */


	// }

	println("*** Finished testing!! ***")

	/*
	for (value <- 0 until 16) {
		poke(dut.io.a, a_val) //We apply a value to the input
		poke(dut.io.b, b_val) //We apply a value to the input
		//println(peek(dut.io.seg).toString(2).reverse.padTo(7,'0').reverse) //And check the value on the output.
		//print7Segment(peek(dut.io.seg),value) //Here we print the result, as it would look on the 7-segment display.
	}*/

}

class AdderSpec extends FlatSpec with Matchers {
	"Adder " should "pass" in {
		chisel3.iotesters.Driver(() => new Adder()) { c => new AdderTester(c)} should be (true)
	}
}
