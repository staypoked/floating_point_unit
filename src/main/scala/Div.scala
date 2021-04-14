import Chisel.{Bits, INPUT, RegInit, fromBooleanToLiteral, fromIntToWidth, fromtIntToLiteral}
import chisel3.{Bool, Bundle, Input, Module, Output, Reg, RegNext, SInt, UInt, WireDefault, when}
import chisel3.util.Cat

class Div2 extends Module(){
 val io = IO(new Bundle{
   val a = Input(UInt(5.W))
   val b = Input(UInt(5.W))
   val index = Input(UInt(5.W))
   val enable = Input(Bool())

   val c = Output(UInt(5.W))
 })

  /*val divs = Array.fill(4){Module(new Div(8, 4))}
  divs(0) = Module(new Div(8, 0))

  for (i <- 1 until 4){
    divs(i) = {Module(new Div(8, i))}

    divs(i).io.N_in := divs(i - 1).io.N_out
    divs(i).io.D_in := divs(i - 1).io.D_out
    divs(i).io.R_in := divs(i - 1).io.R_out
    divs(i).io.Q_in := divs(i - 1).io.Q_out
    // divs(i).io.index := i.U
  }

  divs(0).io.N_in := io.a
  divs(0).io.D_in := io.b
  divs(0).io.R_in := 0.U
  divs(0).io.Q_in := 0.U
  // divs(0).io.index = 0.U*/


  /*val div1 = Module(new Div(8,1))
  val div2 = Module(new Div(8,2))
  val div3 = Module(new Div(8,3))

  div3.io.N_in := io.a
  div3.io.D_in := io.b
  div3.io.R_in := 0.U
  div3.io.Q_in := 0.U


  div2.io.N_in := div3.io.N_out
  div2.io.D_in := div3.io.D_out
  div2.io.R_in := div3.io.R_out
  div2.io.Q_in := div3.io.Q_out

  div1.io.N_in := div2.io.N_out
  div1.io.D_in := div2.io.D_out
  div1.io.R_in := div2.io.R_out
  div1.io.Q_in := div2.io.Q_out

  div0.io.N_in := div1.io.N_out
  div0.io.D_in := div1.io.D_out
  div0.io.R_in := div1.io.R_out
  div0.io.Q_in := div1.io.Q_out

  _root_.Chisel.printf("Output Div3: div3.io.N_out: %b, div3.io.D_out: %b, div3.io.R_out: %b, div3.io.Q_out: %b\n", div3.io.N_out, div3.io.D_out, div3.io.R_out, div3.io.Q_out)
  _root_.Chisel.printf("Output Div2: div2.io.N_out: %b, div2.io.D_out: %b, div2.io.R_out: %b, div2.io.Q_out: %b\n", div2.io.N_out, div2.io.D_out, div2.io.R_out, div2.io.Q_out)
  _root_.Chisel.printf("Output Div1: div1.io.N_out: %b, div1.io.D_out: %b, div1.io.R_out: %b, div1.io.Q_out: %b\n", div1.io.N_out, div1.io.D_out, div1.io.R_out, div1.io.Q_out)
  _root_.Chisel.printf("Output Div0: div0.io.N_out: %b, div0.io.D_out: %b, div0.io.R_out: %b, div0.io.Q_out: %b\n", div0.io.N_out, div0.io.D_out, div0.io.R_out, div0.io.Q_out)
*/

  val div0 = Module(new DivTry2(5,0))
  div0.io.N_in := io.a
  div0.io.D_in := io.b
  div0.io.index := io.index
  div0.io.enable := io.enable
  //when(div0.io.finish){
    io.c := div0.io.Q_out
  //}.otherwise{

  //}
}


class DivTry2(size: Int, index: Int) extends Module(){
  val io = IO(new Bundle{

    val N_in = Input(UInt(size.W))
    val D_in = Input(UInt(size.W))
    val index = Input(UInt(size.W))
    val enable = Input(Bool())
    //val index = Input(UInt(6.W))

    // Outputs
    val Q_out = Output(UInt(size.W))
    val R_out = Output(UInt(size.W))
    val finish = Output(Bool())

  })

  // Latch inputs
  val Nom = RegNext(io.N_in, 0.U)
  val Den = RegNext(io.D_in, 0.U)
  val Index = RegNext(io.index, 0.U)
  val enable = RegNext(io.enable, false.B)

  // Initialize temporal value
  val Q = RegInit(0.U(size.W))
  val R = RegInit(0.U(size.W))
  val temp = RegInit(32.U(6.W))

  //val tempQ = RegInit(0.U(size.W))
  //val tempR = RegInit(0.U(size.W))
  _root_.Chisel.printf("Before Output: Q: %b, R: %b, Index: %b, temp: %b, finish: %b\n", Q, R, Index, temp, io.finish)
   when(enable){
    io.finish := false.B
    R := Cat((R << 1)(4,1), Nom((Index - 1.U).asUInt()))

   //_root_.Chisel.printf("Nom(Index): %b\n", Nom(Index.asUInt()))
    when(R >= Den){
      R := R - Den
      Q := Q | temp

      Index := Index
    }.otherwise {
      temp := temp >> 1.U
      Index := Index - 1.U
    }

  }.otherwise{
    io.finish := true.B
    Q := Q
    R := R
  }
  _root_.Chisel.printf("After  Output: Q: %b, R: %b, Index: %b, temp: %b, finish: %b\n", Q, R, Index, temp, io.finish)

  //_root_.Chisel.printf("Output: Q: %b, tempQ: %b, R: %b, tempR: %b, temp: %b, finish: %b\n", Q, tempQ, R, tempR, temp, io.finish)
  //_root_.Chisel.printf("Output: Nom: %b, Den: %b\n", Nom, Den)

  io.Q_out := Q
  io.R_out := R


}





















class Div(c: Int, index: Int) extends Module(){
  val io = IO(new Bundle{

    val N_in = Input(UInt(c.W))
    val D_in = Input(UInt(c.W))
    val Q_in = Input(UInt(c.W))
    val R_in = Input(UInt(c.W))
    //val index = Input(UInt(6.W))

    // Outputs
    val N_out = Output(UInt(c.W))
    val D_out = Output(UInt(c.W))
    val Q_out = Output(UInt(c.W))
    val R_out = Output(UInt(c.W))

  })

  // Latch inputs
  val tempN = RegNext(io.N_in, 0.U)
  val tempD = RegNext(io.D_in, 0.U)
  val tempQ = RegNext(io.Q_in, 0.U)
  //val tempIndex = RegNext(io.index, 0.U)
  val tempR = RegNext(io.R_in << 1.asUInt, 0.U)

  val tempZ = WireDefault(0.U(c.W))
  val tempZ2 = WireDefault(0.U(c.W))
  tempZ2 := Cat(tempR(c - 1,1), tempN(index.U))


  when(tempZ2.asUInt() >= tempD.asUInt()){
    tempZ := tempZ2.asUInt() - tempD.asUInt()
    if( index == 0){
      tempQ := Cat(tempQ(c-1, index+1), 1.U(1.W))
    }else{
      tempQ := Cat(tempQ(c-1, index+1), 1.U(1.W), tempQ(index-1,0))
    }
    //tempQ := Cat(tempQ(c-1, index+1), 1.U(1.W), tempQ(index-1,0))
  }.otherwise{
    tempZ := tempZ2
  }
  /*
    if(index == 0) {
      _root_.Chisel.printf("Output Div0: tempN: %b, tempD: %b,tempR: %b, tempQ: %b\n", tempN, tempD, tempR, tempQ)
    }

    if(index == 1) {
      _root_.Chisel.printf("Output Div1: tempN: %b, tempD: %b,tempR: %b, tempQ: %b\n", tempN, tempD, tempR, tempQ)
    }

    if(index == 2) {
      _root_.Chisel.printf("Output Div2: tempN: %b, tempD: %b,tempR: %b, tempQ: %b\n", tempN, tempD, tempR, tempQ)
    }

    if(index == 3) {
      _root_.Chisel.printf("Output Div3: tempN: %b, tempD: %b,tempR: %b, tempQ: %b\n", tempN, tempD, tempR, tempQ)
    }*/

  io.N_out := tempN
  io.D_out := tempD
  io.Q_out := tempQ
  io.R_out := tempR

}