import chisel3.iotesters.PeekPokeTester
import chisel3.iotesters.Driver
import org.scalatest._


import chisel3.iotesters.PeekPokeTester
import org.scalatest._

class VGASpec extends FlatSpec with Matchers {

  "VGA" should "pass" in {
    Driver.execute(Array("--generate-vcd-output", "on"), () =>
      new Adder2 ())  { c =>
      new PeekPokeTester(c) {

          step(10)


        println("\nEnd the blinking LED")
      }
    } should be (true)
  }

}



