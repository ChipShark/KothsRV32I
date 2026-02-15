`timescale 1ns/1ps

module decode_ctrl (
  input  [31:0] instr,
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
  // 1) Extract opcode/funct3/funct7.
  // 2) Fill a basic decode table for first instructions:
  //    - addi, add, sub
  //    - lw, sw
  //    - beq
  //    - jal, jalr
  // 3) Define ALU op encodings in a comment.

  // Temporary placeholders.
  assign reg_write  = 1'b0;
  assign mem_read   = 1'b0;
  assign mem_write  = 1'b0;
  assign branch     = 1'b0;
  assign jump       = 1'b0;
  assign alu_op     = 4'b0000;
  assign alu_src_imm = 1'b0;
  assign wb_sel_mem  = 1'b0;

endmodule
