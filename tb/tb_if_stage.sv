`timescale 1ns/1ps

module tb_if_stage (
  input logic clk
);

  logic reset;
  logic        redirect_valid;
  logic [31:0] redirect_pc;
  logic [31:0] pc;
  logic [31:0] instr_in;
  logic [31:0] instr;

  integer cycle;

  imem u_imem (
    .addr(pc),
    .rdata(instr_in)
  );

  if_stage u_if_stage (
    .clk(clk),
    .reset(reset),
    .redirect_valid(redirect_valid),
    .redirect_pc(redirect_pc),
    .pc(pc),
    .instr_in(instr_in),
    .instr(instr)
  );

  initial begin
    u_imem.mem[0]  = 32'h0000_0013;
    u_imem.mem[1]  = 32'h0000_0013;
    u_imem.mem[2]  = 32'h0000_0013;
    u_imem.mem[3]  = 32'h0000_0013;
    u_imem.mem[64] = 32'h0000_0013;

    reset = 1'b1;
    redirect_valid = 1'b0;
    redirect_pc    = 32'h0000_0000;
    cycle = 0;
  end

  // Stimulus and control updates happen on positive edge.
  always @(posedge clk) begin
    cycle <= cycle + 1;

    if (cycle == 2) begin
      reset <= 1'b0;
    end

    if (cycle == 4) begin
      redirect_pc    <= 32'h0000_0100;
      redirect_valid <= 1'b1;
    end

    if (cycle == 5) begin
      redirect_valid <= 1'b0;
    end
  end

  // Check after state updates settle (on negative edge).
  always @(negedge clk) begin
    if (cycle == 4 && pc !== 32'h0000_0004)
      $fatal(1, "PC increment failed: expected 4, got %h", pc);

    if (cycle == 5 && pc !== 32'h0000_0008)
      $fatal(1, "PC increment failed: expected 8, got %h", pc);

    if (cycle == 6 && pc !== 32'h0000_0100)
      $fatal(1, "Redirect failed: expected 0x100, got %h", pc);

    if (cycle == 7) begin
      if (pc !== 32'h0000_0104)
        $fatal(1, "Post-redirect increment failed: expected 0x104, got %h", pc);
      $display("PASS: IF stage basic behavior");
      $finish;
    end
  end

  initial begin
    $dumpfile("dump.vcd");
    $dumpvars(0, tb_if_stage);
  end

endmodule
