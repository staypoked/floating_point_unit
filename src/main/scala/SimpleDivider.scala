import Chisel.{Bits, INPUT, RegInit, fromBooleanToLiteral, fromIntToWidth, fromtIntToLiteral}
import chisel3.{Bool, Bundle, Input, Module, Output, Reg, RegNext, SInt, UInt, WireDefault, when}
import chisel3.util.{Cat, Reverse}

class SimpleDivider(size: Int) extends Module(){
  val io = IO(new Bundle{

    val N_in = Input(UInt(size.W))
    val D_in = Input(UInt(size.W))
    val set_to_0 = Input(Bool())
    val enable = Input(Bool())
    //val index = Input(UInt(6.W))

    // Outputs
    val Q_out = Output(UInt(size.W))
    val R_out = Output(UInt(size.W))
  })

  // Latch inputs
  val Nom = RegNext(io.N_in, 0.U)
  val Den = RegNext(io.D_in, 0.U)
  val set_to_0 = RegNext(io.set_to_0, false.B)
  val enable = RegNext(io.enable, false.B)

  // set_to_0ialize temporal value
  val Q = RegInit(0.U(size.W))
  val R = RegInit(0.U(size.W))
  val temp = RegInit(16777216.U((size + 1).W))
  val index = RegInit((size - 2).U(size.W))

  //_root_.Chisel.printf("Before Output: Nom: %b, Den: %b\n", Nom, Den)
  //_root_.Chisel.printf("Before Output: Q: %b, R: %b, index: %b, temp: %b, set_to_0: %b\n", Q, R, index, temp, set_to_0)
  when(enable){
    R := Cat((R << 1)(size-1,1), Nom(index.asUInt()))

    //_root_.Chisel.printf("Nom(index): %b\n", Nom(index.asUInt()))
    when(R >= Den){
      R := R - Den
      Q := Q | temp

      index := index
    }.otherwise {
      temp := temp >> 1.U
      index := index - 1.U
    }

  }.otherwise{

    Q := Q
    R := R
  }

  // reset registers
  when(set_to_0){
    Q := 0.U
    R := 0.U
    index := (size - 1).U
    temp := 16777216.U
  }


  //_root_.Chisel.printf("After  Output: Q: %b, R: %b, index: %b, temp: %b, set_to_0: %b\n", Q, R, index, temp, set_to_0)
  //_root_.Chisel.printf("Output: Q.R: %b.%b\n", Q, Reverse(R))


  io.Q_out := Q
  io.R_out := R
}
