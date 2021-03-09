import chisel3.iotesters.PeekPokeTester
import org.scalatest._

class AdderTester(dut: Adder) extends PeekPokeTester(dut) {
	  
	for (value <- 0 until 16) {
		poke(dut.io.a, value) //We apply a value to the input
		poke(dut.io.b, value) //We apply a value to the input
		//println(peek(dut.io.seg).toString(2).reverse.padTo(7,'0').reverse) //And check the value on the output.
		//print7Segment(peek(dut.io.seg),value) //Here we print the result, as it would look on the 7-segment display.
	}

}

class AdderSpec extends FlatSpec with Matchers {
	"Adder " should "pass" in {
		chisel3.iotesters.Driver(() => new Adder()) { c => new AdderTester(c)} should be (true)
	}
}
