`timescale 1ns/1ps

module id_stage (
  input         clk,
  input         reset,
  input  [31:0] instr,
  input  [31:0] wb_data,
  input  [4:0]  wb_rd,
  input         wb_we,
  output [4:0]  rs1,
  output [4:0]  rs2,
  output [4:0]  rd,
  output [31:0] rs1_data,
  output [31:0] rs2_data,
  output [31:0] imm,
  output        reg_write,
  output        mem_read,
  output        mem_write,
  output        branch,
  output        jump,
  output [3:0]  alu_op,
  output        alu_src_imm,
  output        wb_sel_mem
);

  // TODO(Week 2):
  // 1) Extract rs1/rs2/rd fields from instruction.
  // 2) Instantiate regfile (read rs1/rs2, write from WB port).
  // 3) Instantiate imm_gen.
  // 4) Instantiate decode_ctrl.

  // Field extraction scaffold (keep/remove as you prefer).
  assign rs1 = instr[19:15];
  assign rs2 = instr[24:20];
  assign rd  = instr[11:7];

  // Temporary placeholders; replace by module wiring.
  assign rs1_data = 32'h0000_0000;
  assign rs2_data = 32'h0000_0000;
  assign imm      = 32'h0000_0000;
  assign reg_write = 1'b0;
  assign mem_read  = 1'b0;
  assign mem_write = 1'b0;
  assign branch    = 1'b0;
  assign jump      = 1'b0;
  assign alu_op    = 4'b0000;
  assign alu_src_imm = 1'b0;
  assign wb_sel_mem  = 1'b0;

endmodule
