module Adder(
  input         clock,
  input         reset,
  input  [31:0] io_a,
  input  [31:0] io_b,
  output [31:0] io_c
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
  reg [31:0] _RAND_1;
  reg [31:0] _RAND_2;
  reg [31:0] _RAND_3;
  reg [31:0] _RAND_4;
  reg [31:0] _RAND_5;
  reg [31:0] _RAND_6;
  reg [31:0] _RAND_7;
  reg [31:0] _RAND_8;
`endif // RANDOMIZE_REG_INIT
  wire  _T_1 = ~reset; // @[Adder.scala 12:23]
  reg  a_sign; // @[Adder.scala 14:23]
  reg [6:0] a_exp; // @[Adder.scala 15:22]
  reg [23:0] a_mant; // @[Adder.scala 16:23]
  reg  b_sign; // @[Adder.scala 19:23]
  reg [6:0] b_exp; // @[Adder.scala 20:22]
  reg [23:0] b_mant; // @[Adder.scala 21:23]
  reg  tmp_sign; // @[Adder.scala 29:25]
  reg [6:0] tmp_exp; // @[Adder.scala 30:24]
  reg [23:0] tmp_mant; // @[Adder.scala 31:25]
  wire [6:0] _T_14 = a_exp - b_exp; // @[Adder.scala 47:27]
  wire [23:0] _T_15 = b_mant >> _T_14; // @[Adder.scala 49:23]
  wire [6:0] _T_18 = b_exp - a_exp; // @[Adder.scala 51:27]
  wire [23:0] _T_19 = a_mant >> _T_18; // @[Adder.scala 53:23]
  wire  _T_26 = ~a_sign; // @[Adder.scala 65:8]
  wire  _T_27 = ~b_sign; // @[Adder.scala 66:10]
  wire [23:0] _T_29 = a_mant + b_mant; // @[Adder.scala 69:26]
  wire [23:0] _T_34 = a_mant - b_mant; // @[Adder.scala 80:26]
  wire [23:0] _T_38 = b_mant - a_mant; // @[Adder.scala 91:26]
  wire [7:0] hi = {tmp_sign,tmp_exp}; // @[Cat.scala 30:58]
  wire [31:0] _T_51 = {tmp_sign,tmp_exp,tmp_mant}; // @[Cat.scala 30:58]
  assign io_c = {hi,tmp_mant}; // @[Cat.scala 30:58]
  always @(posedge clock) begin
    if (reset) begin // @[Adder.scala 14:23]
      a_sign <= 1'h0; // @[Adder.scala 14:23]
    end else begin
      a_sign <= io_a[31]; // @[Adder.scala 14:23]
    end
    if (reset) begin // @[Adder.scala 15:22]
      a_exp <= 7'h0; // @[Adder.scala 15:22]
    end else if (a_exp > b_exp) begin // @[Adder.scala 45:22]
      a_exp <= io_a[30:24]; // @[Adder.scala 15:22]
    end else if (a_exp < b_exp) begin // @[Adder.scala 50:29]
      a_exp <= b_exp; // @[Adder.scala 52:11]
    end else begin
      a_exp <= io_a[30:24]; // @[Adder.scala 15:22]
    end
    if (reset) begin // @[Adder.scala 16:23]
      a_mant <= 24'h0; // @[Adder.scala 16:23]
    end else if (a_exp > b_exp) begin // @[Adder.scala 45:22]
      a_mant <= io_a[23:0]; // @[Adder.scala 16:23]
    end else if (a_exp < b_exp) begin // @[Adder.scala 50:29]
      a_mant <= _T_19; // @[Adder.scala 53:12]
    end else begin
      a_mant <= io_a[23:0]; // @[Adder.scala 16:23]
    end
    if (reset) begin // @[Adder.scala 19:23]
      b_sign <= 1'h0; // @[Adder.scala 19:23]
    end else begin
      b_sign <= io_b[31]; // @[Adder.scala 19:23]
    end
    if (reset) begin // @[Adder.scala 20:22]
      b_exp <= 7'h0; // @[Adder.scala 20:22]
    end else if (a_exp > b_exp) begin // @[Adder.scala 45:22]
      b_exp <= a_exp; // @[Adder.scala 48:11]
    end else begin
      b_exp <= io_b[30:24]; // @[Adder.scala 20:22]
    end
    if (reset) begin // @[Adder.scala 21:23]
      b_mant <= 24'h0; // @[Adder.scala 21:23]
    end else if (a_exp > b_exp) begin // @[Adder.scala 45:22]
      b_mant <= _T_15; // @[Adder.scala 49:12]
    end else begin
      b_mant <= io_b[23:0]; // @[Adder.scala 21:23]
    end
    if (~a_sign) begin // @[Adder.scala 65:17]
      if (~b_sign) begin // @[Adder.scala 66:19]
        tmp_sign <= 1'h0; // @[Adder.scala 68:16]
      end else if (a_mant >= b_mant) begin // @[Adder.scala 75:30]
        tmp_sign <= a_sign; // @[Adder.scala 76:18]
      end else begin
        tmp_sign <= b_sign; // @[Adder.scala 78:18]
      end
    end else if (_T_27) begin // @[Adder.scala 84:19]
      if (a_mant > b_mant) begin // @[Adder.scala 86:29]
        tmp_sign <= a_sign; // @[Adder.scala 87:18]
      end else begin
        tmp_sign <= b_sign; // @[Adder.scala 89:18]
      end
    end else begin
      tmp_sign <= a_sign; // @[Adder.scala 96:16]
    end
    tmp_exp <= a_exp; // @[Adder.scala 62:11]
    if (~a_sign) begin // @[Adder.scala 65:17]
      if (~b_sign) begin // @[Adder.scala 66:19]
        tmp_mant <= _T_29; // @[Adder.scala 69:16]
      end else begin
        tmp_mant <= _T_34; // @[Adder.scala 80:16]
      end
    end else if (_T_27) begin // @[Adder.scala 84:19]
      tmp_mant <= _T_38; // @[Adder.scala 91:16]
    end else begin
      tmp_mant <= _T_29; // @[Adder.scala 97:16]
    end
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (~reset) begin
          $fwrite(32'h80000002,"a_val: %b, b_val: %b\n",io_a,io_b); // @[Adder.scala 12:23]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_1) begin
          $fwrite(32'h80000002,"a_sign: %d, a_exp: %b, a_mant: %b\n",a_sign,a_exp,a_mant); // @[Adder.scala 24:23]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_1) begin
          $fwrite(32'h80000002,"b_sign: %d, b_exp: %b, b_mant: %b\n",b_sign,b_exp,b_mant); // @[Adder.scala 25:23]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_1) begin
          $fwrite(32'h80000002,"a_sign: %d, a_exp: %d, a_mant: %d\n",a_sign,a_exp,a_mant); // @[Adder.scala 56:23]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_1) begin
          $fwrite(32'h80000002,"b_sign: %d, b_exp: %d, b_mant: %d\n",b_sign,b_exp,b_mant); // @[Adder.scala 57:23]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_1) begin
          $fwrite(32'h80000002,"tmp_sign: %d, tmp_exp: %d, tmp_mant: %d\n",tmp_sign,tmp_exp,tmp_mant); // @[Adder.scala 58:23]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_26 & _T_27 & _T_1) begin
          $fwrite(32'h80000002,"tmp_sign: %d, tmp_exp: %d, tmp_mant: %d\n",tmp_sign,tmp_exp,tmp_mant); // @[Adder.scala 70:27]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_1) begin
          $fwrite(32'h80000002,"tmp_sign: %d, tmp_exp: %d, tmp_mant: %d\n",tmp_sign,tmp_exp,tmp_mant); // @[Adder.scala 102:23]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_1) begin
          $fwrite(32'h80000002,"io_c: %b\n",_T_51); // @[Adder.scala 133:23]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
  end
// Register and memory initialization
`ifdef RANDOMIZE_GARBAGE_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_INVALID_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_REG_INIT
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_MEM_INIT
`define RANDOMIZE
`endif
`ifndef RANDOM
`define RANDOM $random
`endif
`ifdef RANDOMIZE_MEM_INIT
  integer initvar;
`endif
`ifndef SYNTHESIS
`ifdef FIRRTL_BEFORE_INITIAL
`FIRRTL_BEFORE_INITIAL
`endif
initial begin
  `ifdef RANDOMIZE
    `ifdef INIT_RANDOM
      `INIT_RANDOM
    `endif
    `ifndef VERILATOR
      `ifdef RANDOMIZE_DELAY
        #`RANDOMIZE_DELAY begin end
      `else
        #0.002 begin end
      `endif
    `endif
`ifdef RANDOMIZE_REG_INIT
  _RAND_0 = {1{`RANDOM}};
  a_sign = _RAND_0[0:0];
  _RAND_1 = {1{`RANDOM}};
  a_exp = _RAND_1[6:0];
  _RAND_2 = {1{`RANDOM}};
  a_mant = _RAND_2[23:0];
  _RAND_3 = {1{`RANDOM}};
  b_sign = _RAND_3[0:0];
  _RAND_4 = {1{`RANDOM}};
  b_exp = _RAND_4[6:0];
  _RAND_5 = {1{`RANDOM}};
  b_mant = _RAND_5[23:0];
  _RAND_6 = {1{`RANDOM}};
  tmp_sign = _RAND_6[0:0];
  _RAND_7 = {1{`RANDOM}};
  tmp_exp = _RAND_7[6:0];
  _RAND_8 = {1{`RANDOM}};
  tmp_mant = _RAND_8[23:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module Multiplier(
  input         clock,
  input         reset,
  input  [31:0] io_a,
  input  [31:0] io_b,
  input         io_sel,
  output [31:0] io_c
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
  reg [31:0] _RAND_1;
  reg [31:0] _RAND_2;
  reg [31:0] _RAND_3;
  reg [31:0] _RAND_4;
  reg [31:0] _RAND_5;
  reg [31:0] _RAND_6;
  reg [31:0] _RAND_7;
  reg [31:0] _RAND_8;
`endif // RANDOMIZE_REG_INIT
  reg  a_sign; // @[Multiplier.scala 13:23]
  reg [6:0] a_exp; // @[Multiplier.scala 14:22]
  reg [23:0] a_mant; // @[Multiplier.scala 15:23]
  reg  b_sign; // @[Multiplier.scala 17:23]
  reg [6:0] b_exp; // @[Multiplier.scala 18:22]
  reg [23:0] b_mant; // @[Multiplier.scala 19:23]
  reg  tmp_sign; // @[Multiplier.scala 22:25]
  reg [6:0] tmp_exp; // @[Multiplier.scala 23:24]
  reg [23:0] tmp_mant; // @[Multiplier.scala 24:25]
  wire [6:0] _T_8 = a_exp + b_exp; // @[Multiplier.scala 43:20]
  wire [7:0] _GEN_11 = {{1'd0}, _T_8}; // @[Multiplier.scala 43:28]
  wire [7:0] _T_10 = _GEN_11 - 8'h80; // @[Multiplier.scala 43:28]
  wire  _T_11 = ~io_sel; // @[Conditional.scala 37:30]
  wire [47:0] _T_12 = a_mant * b_mant; // @[Multiplier.scala 47:26]
  wire [23:0] _T_14 = a_mant / b_mant; // @[Multiplier.scala 50:26]
  wire [23:0] _GEN_0 = io_sel ? _T_14 : tmp_mant; // @[Conditional.scala 39:67 Multiplier.scala 50:16 Multiplier.scala 24:25]
  wire [47:0] _GEN_1 = _T_11 ? _T_12 : {{24'd0}, _GEN_0}; // @[Conditional.scala 40:58 Multiplier.scala 47:16]
  wire [7:0] hi = {tmp_sign,tmp_exp}; // @[Cat.scala 30:58]
  assign io_c = {hi,tmp_mant}; // @[Cat.scala 30:58]
  always @(posedge clock) begin
    a_sign <= io_a[0]; // @[Multiplier.scala 13:28]
    a_exp <= io_a[7:1]; // @[Multiplier.scala 14:27]
    a_mant <= io_a[31:8]; // @[Multiplier.scala 15:28]
    b_sign <= io_b[0]; // @[Multiplier.scala 17:28]
    b_exp <= io_b[7:1]; // @[Multiplier.scala 18:27]
    b_mant <= io_b[31:8]; // @[Multiplier.scala 19:28]
    if (reset) begin // @[Multiplier.scala 22:25]
      tmp_sign <= 1'h0; // @[Multiplier.scala 22:25]
    end else begin
      tmp_sign <= a_sign ^ b_sign; // @[Multiplier.scala 26:12]
    end
    if (reset) begin // @[Multiplier.scala 23:24]
      tmp_exp <= 7'h0; // @[Multiplier.scala 23:24]
    end else begin
      tmp_exp <= _T_10[6:0]; // @[Multiplier.scala 43:11]
    end
    if (reset) begin // @[Multiplier.scala 24:25]
      tmp_mant <= 24'h0; // @[Multiplier.scala 24:25]
    end else begin
      tmp_mant <= _GEN_1[23:0];
    end
  end
// Register and memory initialization
`ifdef RANDOMIZE_GARBAGE_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_INVALID_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_REG_INIT
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_MEM_INIT
`define RANDOMIZE
`endif
`ifndef RANDOM
`define RANDOM $random
`endif
`ifdef RANDOMIZE_MEM_INIT
  integer initvar;
`endif
`ifndef SYNTHESIS
`ifdef FIRRTL_BEFORE_INITIAL
`FIRRTL_BEFORE_INITIAL
`endif
initial begin
  `ifdef RANDOMIZE
    `ifdef INIT_RANDOM
      `INIT_RANDOM
    `endif
    `ifndef VERILATOR
      `ifdef RANDOMIZE_DELAY
        #`RANDOMIZE_DELAY begin end
      `else
        #0.002 begin end
      `endif
    `endif
`ifdef RANDOMIZE_REG_INIT
  _RAND_0 = {1{`RANDOM}};
  a_sign = _RAND_0[0:0];
  _RAND_1 = {1{`RANDOM}};
  a_exp = _RAND_1[6:0];
  _RAND_2 = {1{`RANDOM}};
  a_mant = _RAND_2[23:0];
  _RAND_3 = {1{`RANDOM}};
  b_sign = _RAND_3[0:0];
  _RAND_4 = {1{`RANDOM}};
  b_exp = _RAND_4[6:0];
  _RAND_5 = {1{`RANDOM}};
  b_mant = _RAND_5[23:0];
  _RAND_6 = {1{`RANDOM}};
  tmp_sign = _RAND_6[0:0];
  _RAND_7 = {1{`RANDOM}};
  tmp_exp = _RAND_7[6:0];
  _RAND_8 = {1{`RANDOM}};
  tmp_mant = _RAND_8[23:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module FPU(
  input         clock,
  input         reset,
  input  [31:0] io_a,
  input  [31:0] io_b,
  input  [1:0]  io_sel,
  output [31:0] io_c
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
`endif // RANDOMIZE_REG_INIT
  wire  FPUAdder_clock; // @[FPU.scala 14:24]
  wire  FPUAdder_reset; // @[FPU.scala 14:24]
  wire [31:0] FPUAdder_io_a; // @[FPU.scala 14:24]
  wire [31:0] FPUAdder_io_b; // @[FPU.scala 14:24]
  wire [31:0] FPUAdder_io_c; // @[FPU.scala 14:24]
  wire  FPUMultiplierDivisionUnit_clock; // @[FPU.scala 19:41]
  wire  FPUMultiplierDivisionUnit_reset; // @[FPU.scala 19:41]
  wire [31:0] FPUMultiplierDivisionUnit_io_a; // @[FPU.scala 19:41]
  wire [31:0] FPUMultiplierDivisionUnit_io_b; // @[FPU.scala 19:41]
  wire  FPUMultiplierDivisionUnit_io_sel; // @[FPU.scala 19:41]
  wire [31:0] FPUMultiplierDivisionUnit_io_c; // @[FPU.scala 19:41]
  reg [31:0] tmp_c; // @[FPU.scala 25:22]
  wire  _T_1 = 2'h0 == io_sel; // @[Conditional.scala 37:30]
  wire  _T_2 = 2'h1 == io_sel; // @[Conditional.scala 37:30]
  wire  _T_3 = 2'h2 == io_sel; // @[Conditional.scala 37:30]
  wire  _T_4 = 2'h3 == io_sel; // @[Conditional.scala 37:30]
  wire [31:0] _GEN_0 = _T_4 ? FPUMultiplierDivisionUnit_io_c : tmp_c; // @[Conditional.scala 39:67 FPU.scala 38:13 FPU.scala 25:22]
  Adder FPUAdder ( // @[FPU.scala 14:24]
    .clock(FPUAdder_clock),
    .reset(FPUAdder_reset),
    .io_a(FPUAdder_io_a),
    .io_b(FPUAdder_io_b),
    .io_c(FPUAdder_io_c)
  );
  Multiplier FPUMultiplierDivisionUnit ( // @[FPU.scala 19:41]
    .clock(FPUMultiplierDivisionUnit_clock),
    .reset(FPUMultiplierDivisionUnit_reset),
    .io_a(FPUMultiplierDivisionUnit_io_a),
    .io_b(FPUMultiplierDivisionUnit_io_b),
    .io_sel(FPUMultiplierDivisionUnit_io_sel),
    .io_c(FPUMultiplierDivisionUnit_io_c)
  );
  assign io_c = tmp_c; // @[FPU.scala 42:8]
  assign FPUAdder_clock = clock;
  assign FPUAdder_reset = reset;
  assign FPUAdder_io_a = io_a; // @[FPU.scala 15:17]
  assign FPUAdder_io_b = io_b; // @[FPU.scala 16:17]
  assign FPUMultiplierDivisionUnit_clock = clock;
  assign FPUMultiplierDivisionUnit_reset = reset;
  assign FPUMultiplierDivisionUnit_io_a = io_a; // @[FPU.scala 20:34]
  assign FPUMultiplierDivisionUnit_io_b = io_b; // @[FPU.scala 21:34]
  assign FPUMultiplierDivisionUnit_io_sel = io_sel[0]; // @[FPU.scala 22:45]
  always @(posedge clock) begin
    if (reset) begin // @[FPU.scala 25:22]
      tmp_c <= 32'h0; // @[FPU.scala 25:22]
    end else if (_T_1) begin // @[Conditional.scala 40:58]
      tmp_c <= FPUAdder_io_c; // @[FPU.scala 29:13]
    end else if (_T_2) begin // @[Conditional.scala 39:67]
      tmp_c <= FPUAdder_io_c; // @[FPU.scala 32:13]
    end else if (_T_3) begin // @[Conditional.scala 39:67]
      tmp_c <= FPUMultiplierDivisionUnit_io_c; // @[FPU.scala 35:13]
    end else begin
      tmp_c <= _GEN_0;
    end
  end
// Register and memory initialization
`ifdef RANDOMIZE_GARBAGE_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_INVALID_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_REG_INIT
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_MEM_INIT
`define RANDOMIZE
`endif
`ifndef RANDOM
`define RANDOM $random
`endif
`ifdef RANDOMIZE_MEM_INIT
  integer initvar;
`endif
`ifndef SYNTHESIS
`ifdef FIRRTL_BEFORE_INITIAL
`FIRRTL_BEFORE_INITIAL
`endif
initial begin
  `ifdef RANDOMIZE
    `ifdef INIT_RANDOM
      `INIT_RANDOM
    `endif
    `ifndef VERILATOR
      `ifdef RANDOMIZE_DELAY
        #`RANDOMIZE_DELAY begin end
      `else
        #0.002 begin end
      `endif
    `endif
`ifdef RANDOMIZE_REG_INIT
  _RAND_0 = {1{`RANDOM}};
  tmp_c = _RAND_0[31:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
