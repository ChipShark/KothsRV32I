`timescale 1ns/1ps

module regfile (
  input         clk,
  input         reset,
  input         we,
  input  [4:0]  waddr,
  input  [31:0] wdata,
  input  [4:0]  raddr1,
  input  [4:0]  raddr2,
  output [31:0] rdata1,
  output [31:0] rdata2
);

  // TODO(Week 2):
  // 1) Declare 32 x 32-bit register array.
  // 2) Implement write on posedge clk:
  //    - ignore writes to x0
  //    - honor reset behavior you choose (optional clear)
  // 3) Implement combinational reads.
  // 4) Force x0 read value to 32'h0.

  // Temporary placeholders so file compiles before implementation.
  assign rdata1 = 32'h0000_0000;
  assign rdata2 = 32'h0000_0000;

endmodule
