import chisel3._
import chisel3.iotesters._
import org.scalatest._
import chisel3.iotesters.Driver

// http://weitz.de/ieee/

class MultiplierTester(dut: Multiplier) extends PeekPokeTester(dut) {

  val a_val = "b00000000100000000000000000000001".U
  val b_val = "b00000000100000000000000000000010".U

  //poke(dut.io.sel, 1.U)
  poke(dut.io.a, a_val) //We apply a value to the input
  poke(dut.io.b, b_val) //We apply a value to the input
  poke(dut.io.sel, 1.U(1.W))
  step(4)

  expect(dut.io.c, "b00000000100000000000000000000010".U)


  // ---------------------------- everything works fine until here (to be continued)

  println("*** Finished testing!! ***")

}

class MultiplierSpec extends FlatSpec with Matchers {
  "Multiplier " should "pass" in {
    chisel3.iotesters.Driver(() => new Multiplier()) { c => new MultiplierTester(c)} should be (true)
  }
}

/*
class MultiplierSpec extends FlatSpec with Matchers {
	"Multiplier " should "pass" in {
		Driver.execute(Array("--generate-vcd-output", "on"), () => new Multiplier()) { c => new MultiplierTester(c)} should be (true)
	}
}*/


