import chisel3._
import chisel3.iotesters._
import org.scalatest._
import chisel3.iotesters.Driver

// http://weitz.de/ieee/

class DividerTester(dut: Divider) extends PeekPokeTester(dut) {
  val val_Inf = "b01111111100000000000000000000000".U // Inf
  val val_mInf = "b11111111100000000000000000000000".U // -Inf
  val val_NaN = "b01111111100000000000000000000001".U // NaN
  val val_zero = "b00000000000000000000000000000000".U // Zero
  val val_10_0 = "b01000001001000000000000000000000".U
  val val_2_0 = "b01000000000000000000000000000000".U
  val val_5_0 = "b01000000101000000000000000000000".U


  println("---------- Running special division tests ----------")
  /*
  * Division capturing special cases
  */

  // Test
  poke(dut.io.a, val_10_0) //We apply a value to the input
  poke(dut.io.b, val_Inf) //We apply a value to the input
  poke(dut.io.en_in, true.B)

  step(6)

  expect(dut.io.c, val_zero) //
  expect(dut.io.exception, false.B)

  // Test
  poke(dut.io.a, val_10_0) //We apply a value to the input
  poke(dut.io.b, val_zero) //We apply a value to the input

  step(6)

  expect(dut.io.c, val_Inf) //
  expect(dut.io.exception, false.B)

  // Test
  poke(dut.io.a, val_zero) //We apply a value to the input
  poke(dut.io.b, val_zero) //We apply a value to the input

  step(6)

  expect(dut.io.c, val_NaN) //
  expect(dut.io.exception, false.B)

  // Test
  poke(dut.io.a, val_Inf) //We apply a value to the input
  poke(dut.io.b, val_Inf) //We apply a value to the input

  step(6)

  expect(dut.io.c, val_NaN) //
  expect(dut.io.exception, false.B)

  // Test
  poke(dut.io.a, val_5_0) //We apply a value to the input
  poke(dut.io.b, val_NaN) //We apply a value to the input

  step(6)

  expect(dut.io.c, val_NaN) //
  expect(dut.io.exception, false.B)

  // Test
  poke(dut.io.a, val_NaN) //We apply a value to the input
  poke(dut.io.b, val_zero) //We apply a value to the input

  step(6)

  expect(dut.io.c, val_NaN) //
  expect(dut.io.exception, false.B)

  println("*** Finished testing!! ***")

}

class DividerSpec extends FlatSpec with Matchers {
  "Divider " should "pass" in {
    chisel3.iotesters.Driver(() => new Divider()) { c => new DividerTester(c)} should be (true)
  }
}

class DividerSpecWave extends FlatSpec with Matchers {
  "Divider " should "pass" in {
    Driver.execute(Array("--generate-vcd-output", "on"), () => new Divider()) { c => new DividerTester(c)} should be (true)
  }
}

