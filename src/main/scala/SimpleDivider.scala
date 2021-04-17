import Chisel.{Bits, INPUT, RegInit, fromBooleanToLiteral, fromIntToWidth, fromtIntToLiteral}
import chisel3.{Bool, Bundle, Input, Module, Output, Reg, RegNext, SInt, UInt, WireDefault, when}
import chisel3.util.{Cat, Reverse}

class SimpleDivider(size: Int) extends Module(){
  val io = IO(new Bundle{

    val Nom = Input(UInt(size.W))
    val Den = Input(UInt(size.W))
    val set_to_0 = Input(Bool())
    val enable = Input(Bool())
    //val index = Input(UInt(6.W))

    // Outputs
    val Quo = Output(UInt(size.W))
    val Rem = Output(UInt(size.W))
    val Ready = Output(Bool())
  })

  // Latch inputs
  val Nom = RegNext(io.Nom, 0.U)
  val Den = RegNext(io.Den, 0.U)
  val set_to_0 = RegNext(!io.enable, false.B)
  val enable = RegNext(io.enable, false.B)

  // Initialize temporal value
  val Q = RegInit(0.U(size.W))
  val R = RegInit(0.U(size.W))
  val temp = RegInit(8388608.U((size + 1).W))//16777216.U((size + 1).W))
  val index = RegInit((size-1).S(size.W))
  val ready = RegInit(Bool(), false.B)

  val TempR = WireDefault(0.U(size.W))
  val TempQ = WireDefault(0.U(size.W))
  val TempTemp = WireDefault(0.U((size+1).W))
  val TempIndex = WireDefault(0.S(size.W))



  //_root_.Chisel.printf("Before Output: Nom: %b, Den: %b\n", Nom, Den)
  //_root_.Chisel.printf("Before Output: Q: %b, R: %b, index: %b, temp: %b, set_to_0: %b\n", Q, R, index, temp, set_to_0)
  TempIndex := index - 1.S
  when(enable && TempIndex >= -1.S){
    R := Cat((R << 1)(size-1,1), Nom(index.asUInt()))


    //_root_.Chisel.printf("Nom(index): %b\n", Nom(index.asUInt()))
    when(R >= Den){
      R := (R - Den).asUInt()
      Q := Q | temp


      //index := index
    }.otherwise {
      //temp := temp >> 1.U
      //index := index - 1.S
      //R := TempR
      //R := R
      //Q := Q
    }


    //TempTemp := temp >> 1.U


    temp := temp >> 1.U
    index := TempIndex


  }/*.otherwise{
    //index := index
   .otherwise{
      //Q := Q
      //R := R
    }




  }*/
  //101000000000000000000000
  // Indicate result is ready
  when(index === -1.S){
    ready := true.B

  }

  // reset registers
  when(set_to_0){
    Q := 0.U
    R := 0.U
    index := (size-1).S
    temp := 8388608.U //16777216.U
    ready := false.B
  }

  //_root_.Chisel.printf("After Output: div: %b, mod: %b\n", Nom/Den, Nom%Den)
  //_root_.Chisel.printf("After Output: Q: %b, R: %b, index: %d, temp: %b, set_to_0: %b\n", Q, R, index, temp, set_to_0)
  //_root_.Chisel.printf("Output: Q.R: %b.%b\n", Q, Reverse(R))


  io.Quo := Q
  io.Rem := R
  io.Ready := ready
}
