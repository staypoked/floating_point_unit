import chisel3._
import chisel3.util._
import chisel3.iotesters._
import org.scalatest._

class AdderTester(dut: Adder) extends PeekPokeTester(dut) {


	/*
	* NUMB GENERATOR
	 */
	for (repetitions <- 0 to 19){
		//val a_val = WireDefault(0.U)
		val a_val = "b00000001000000000000000000000001".U
		val b_val = "b00000001000000000000000000000001".U

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
		poke(dut.io.a, a_val) //We apply a value to the input
		poke(dut.io.b, b_val) //We apply a value to the input

		step(2)

		/*
		* CALC EXPECTED VALUE
		 */

		expect(dut.io.c, "b00000001000000000000000000000010".U)

	}

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
