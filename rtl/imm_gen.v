`timescale 1ns/1ps

module imm_gen (
  input  [31:0] instr,
  output [31:0] imm
);

  // TODO(Week 2):
  // Decode opcode and generate immediate for:
  // - I-type (addi/lw/jalr/etc.)
  // - S-type (sw)
  // - B-type (beq/bne)
  // - U-type (lui/auipc)
  // - J-type (jal)
  //
  // Keep sign extension correct.

  // Temporary placeholder.
  assign imm = 32'h0000_0000;

endmodule
