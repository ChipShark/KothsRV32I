`timescale 1ns/1ps

module tb_id_stage (
  input logic clk
);

  logic        reset;
  logic [31:0] instr;
  logic [31:0] wb_data;
  logic [4:0]  wb_rd;
  logic        wb_we;
  logic [4:0]  rs1;
  logic [4:0]  rs2;
  logic [4:0]  rd;
  logic [31:0] rs1_data;
  logic [31:0] rs2_data;
  logic [31:0] imm;
  logic        reg_write;
  logic        mem_read;
  logic        mem_write;
  logic        branch;
  logic        jump;
  logic [3:0]  alu_op;
  logic        alu_src_imm;
  logic        wb_sel_mem;
  integer cycle;

  id_stage u_id_stage (
    .clk(clk),
    .reset(reset),
    .instr(instr),
    .wb_data(wb_data),
    .wb_rd(wb_rd),
    .wb_we(wb_we),
    .rs1(rs1),
    .rs2(rs2),
    .rd(rd),
    .rs1_data(rs1_data),
    .rs2_data(rs2_data),
    .imm(imm),
    .reg_write(reg_write),
    .mem_read(mem_read),
    .mem_write(mem_write),
    .branch(branch),
    .jump(jump),
    .alu_op(alu_op),
    .alu_src_imm(alu_src_imm),
    .wb_sel_mem(wb_sel_mem)
  );

  initial begin
    reset   = 1'b1;
    instr   = 32'h0000_0013; // addi x0, x0, 0
    wb_data = 32'h0000_0000;
    wb_rd   = 5'd0;
    wb_we   = 1'b0;
    cycle   = 0;
  end

  always @(posedge clk) begin
    cycle <= cycle + 1;

    // TODO(Week 2): deassert reset after a couple cycles.
    // if (cycle == N) reset <= 1'b0;

    // TODO(Week 2): drive writeback to preload regfile values.
    // Example flow:
    // 1) wb_we <= 1'b1; wb_rd <= 5'd1; wb_data <= 32'h....;
    // 2) wb_we <= 1'b0;

    // TODO(Week 2): apply instruction cases and check decode:
    // - addi
    // - add/sub
    // - lw/sw
    // - beq
    // - jal/jalr
  end

  always @(negedge clk) begin
    // TODO(Week 2): add $fatal checks for each case.
    // Keep one check per behavior for easier debugging.

    // Optional completion point:
    // if (cycle == DONE_CYCLE) begin
    //   $display("PASS: ID stage basic decode behavior");
    //   $finish;
    // end
  end

endmodule
