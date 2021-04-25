import Chisel.{RegInit, fromBooleanToLiteral, fromIntToWidth, fromtIntToLiteral}
import chisel3.{Bool, Bundle, Input, Module, Output, RegNext, UInt, WireDefault, when}
import chisel3.util.{Cat}

class LongDivision(size: Int) extends Module(){
  val io = IO(new Bundle{
    // Inputs
    val numerator = Input(UInt(size.W))
    val denominator = Input(UInt(size.W))
    val enable = Input(Bool())

    // Outputs
    val quotient = Output(UInt(size.W))
    val remainder = Output(UInt(size.W))
    val ready = Output(Bool())
  })

  /*
  * Latch Inputs
  */
  val Nom = RegNext(io.numerator, 0.U)
  val Den = RegNext(io.denominator, 0.U)
  val set_to_0 = RegNext(!io.enable, false.B)
  val enable = RegNext(io.enable, false.B)

  /*
  * Initialize temporal values
  */
  val Q = RegInit(0.U(size.W))
  val R = RegInit(0.U(size.W))
  val TempR = WireDefault(0.U(size.W))
  val temp = RegInit(8388608.U((size + 1).W))
  val index = RegInit((size-1).U(size.W))
  val indexTemp = WireDefault((size - 1).U(size.W))

  /*
  * Long Division Algorithm
  */
  // decrement index
  indexTemp := index - 1.U

  // perform division for n-1 steps
  when(enable && !index(size-1)){
    TempR := Cat((R << 1)(size-1,1), Nom(index.asUInt()))

    when(TempR >= Den){
      R := TempR - Den
      Q := Q | temp
    }.otherwise{
      R := TempR
    }
    temp := temp >> 1.U
    index := indexTemp

  }

  /*
  * Reset registers
  */
  when(set_to_0){
    Q := 0.U
    R := 0.U
    index := (size - 1).U
    temp := 8388608.U
  }


  /*
  * Write Outputs
  */
  io.quotient := Q
  io.remainder := R
  io.ready := index(size-1)
}