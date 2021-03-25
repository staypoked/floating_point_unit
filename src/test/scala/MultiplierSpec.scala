import chisel3._
import chisel3.iotesters._
import org.scalatest._
import chisel3.iotesters.Driver

// http://weitz.de/ieee/

class MultiplierTester(dut: Multiplier) extends PeekPokeTester(dut) {

/*
  val a_val = "b00111111100000000000000000000000".U // 1.0
  val b_val = "b01000000000000000000000000000000".U // 2.0


  poke(dut.io.a, a_val) //We apply a value to the input
  poke(dut.io.b, b_val) //We apply a value to the input
  poke(dut.io.sel, true.B)
  step(6)

  expect(dut.io.c, "b01000000000000000000000000000000".U) // 2.0


  val a_val2 = "b01000000100100000000000000000000".U // 4.5
  val b_val2 = "b01000000000000000000000000000000".U // 2.0


  poke(dut.io.a, a_val2) //We apply a value to the input
  poke(dut.io.b, b_val2) //We apply a value to the input
  poke(dut.io.sel, true.B)

  step(6)

  expect(dut.io.c, "b01000001000100000000000000000000".U) // 9.0

  val a_val3 = "b01000000100110110011001100110011".U // 4.85
  val b_val3 = "b01000000000001011100001010001111".U // 2.09


  poke(dut.io.a, a_val3) //We apply a value to the input
  poke(dut.io.b, b_val3) //We apply a value to the input
  poke(dut.io.sel, true.B)

  step(6)
  expect(dut.io.c, "b01000001001000100010111100011010".U) // 10.136499
*/
  /*
   * Divide
   */

  val a_val8 = "b01000001001000000000000000000000".U // 10.0
  //val b_val8 = "b01000000101000000000000000000000".U // 5.0
  val b_val8 = "b01000000000000000000000000000000".U // 2.0

  poke(dut.io.a, a_val8) //We apply a value to the input
  poke(dut.io.b, b_val8) //We apply a value to the input

  step(12)
  //expect(dut.io.c, "b01000000000000000000000000000000".U) // 2.0
  expect(dut.io.c, "b01000000101000000000000000000000".U) // 5.0
/*
  val a_val9 = "b01000000100110110011001100110011".U // 4.85
  val b_val9 = "b01000000000001011100001010001111".U // 2.09


  poke(dut.io.a, a_val9) //We apply a value to the input
  poke(dut.io.b, b_val9) //We apply a value to the input
  poke(dut.io.sel, false.B)

  step(6)
  expect(dut.io.c, "b01000000000101001000010001001010".U) // 2.3205743
*/
  // ---------------------------- everything works fine until here (to be continued)

  println("*** Finished testing!! ***")

}

class MultiplierSpec extends FlatSpec with Matchers {
  "Multiplier " should "pass" in {
    chisel3.iotesters.Driver(() => new Multiplier()) { c => new MultiplierTester(c)} should be (true)
  }
}

class MultiplierSpecWave extends FlatSpec with Matchers {
	"Multiplier " should "pass" in {
		Driver.execute(Array("--generate-vcd-output", "on"), () => new Multiplier()) { c => new MultiplierTester(c)} should be (true)
	}
}

