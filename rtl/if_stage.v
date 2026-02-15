`timescale 1ns/1ps

module if_stage (
  input         clk,
  input         reset,

  // Redirect support (for branch/jump later)
  input         redirect_valid,
  input  [31:0] redirect_pc,

  // Interface to instruction memory
  output [31:0] pc,
  input  [31:0] instr_in,

  // Outputs to next stage (or IF/ID reg later)
  output [31:0] instr
);

  reg [31:0] pc_r;
  reg [31:0] instr_r;
  wire [31:0] pc_next;
  wire [31:0] pc_plus4;

  assign pc_plus4 = pc_r + 32'd4;
  assign pc_next  = redirect_valid ? redirect_pc : pc_plus4;

  always @(posedge clk or posedge reset) begin
    if (reset) begin
      pc_r <= 32'h0000_0000;
    end else begin
      pc_r <= pc_next;
    end
  end

  always @(posedge clk or posedge reset) begin
    if (reset) begin
      instr_r <= 32'h0000_0013; // addi x0, x0, 0 (NOP)
    end else begin
      instr_r <= instr_in;
    end
  end

  assign pc    = pc_r;
  assign instr = instr_r;

endmodule
