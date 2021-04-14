import chisel3._
import chisel3.iotesters.{Driver, _}
import org.scalatest._

// http://weitz.de/ieee/

class DivTester(dut: Div2) extends PeekPokeTester(dut) {
  val val_Inf = "b01111111100000000000000000000000".U // Inf
  val val_mInf = "b11111111100000000000000000000000".U // -Inf
  val val_NaN = "b01111111100000000000000000000001".U // NaN
  val val_Null = "b00000000000000000000000000000000".U // Null



  /*
  * Simple Multiplication positive numbers
  */
  // Test 1
  val val_10_0 = 10.U
  val val_20_0 = 20.U
  val val_2_0 = 2.U
  val val_5_0 = 5.U


  poke(dut.io.a, val_20_0) //We apply a value to the input
  poke(dut.io.b, val_2_0) //We apply a value to the input
  poke(dut.io.index, 5.U)
  poke(dut.io.enable, true.B)
  step(10)

  expect(dut.io.c, val_10_0) // 5.0

  step(1)


  println("*** Finished testing!! ***")

}

class DivSpec extends FlatSpec with Matchers {
  "Divider " should "pass" in {
    chisel3.iotesters.Driver(() => new Div2()) { c => new DivTester(c)} should be (true)
  }
}

class DivSpecWave extends FlatSpec with Matchers {
  "Divider " should "pass" in {
    Driver.execute(Array("--generate-vcd-output", "on"), () => new Div2()) { c => new DivTester(c)} should be (true)
  }
}
