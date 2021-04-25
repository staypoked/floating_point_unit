import chisel3._
import chisel3.iotesters._
import org.scalatest._
import chisel3.iotesters.Driver

// http://weitz.de/ieee/

class SimpleDividerTester(dut: SimpleDivider) extends PeekPokeTester(dut) {
  val val_Inf = "b01111111100000000000000000000000".U // Inf
  val val_mInf = "b11111111100000000000000000000000".U // -Inf
  val val_NaN = "b01111111100000000000000000000001".U // NaN
  val val_Null = "b00000000000000000000000000000000".U // Null
  /*


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

    */

  /*
  * Simple Multiplication positive numbers
  */
  // Test 1
  val val_10_0 = 10.U
  val val_20_0 = 20.U
  val val_512_0 = 512.U
  val val_256_0 = 256.U
  val val_2_0 = 2.U
  val val_5_0 = 5.U
  val val1 = "b1010000000000".U
  val val2 = "b1000000000000".U
  //1000000000000

  poke(dut.io.N_in, val1) //We apply a value to the input
  poke(dut.io.D_in, val2) //We apply a value to the input
  step(1)
  poke(dut.io.enable, true.B)
  poke(dut.io.set_to_0, false.B)
  step(17)

  expect(dut.io.Q_out, 1.U) // 5.0
  expect(dut.io.R_out, "b10000000000".U)

  println("*** Finished testing!! ***")

  //step(4)

}

class SimpleDividerSpec extends FlatSpec with Matchers {
  "SimpleDivider " should "pass" in {
    chisel3.iotesters.Driver(() => new SimpleDivider(14)) { c => new SimpleDividerTester(c)} should be (true)
  }
}

class SimpleDividerSpecWave extends FlatSpec with Matchers {
  "SimpleDivider " should "pass" in {
    Driver.execute(Array("--generate-vcd-output", "on"), () => new SimpleDivider(14)) { c => new SimpleDividerTester(c)} should be (true)
  }
}