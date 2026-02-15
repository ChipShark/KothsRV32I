`timescale 1ns/1ps

module imem #(
  parameter WORDS = 256
)(
  input  [31:0] addr,
  output [31:0] rdata
);

  localparam AW = $clog2(WORDS);
  reg [31:0] mem [0:WORDS-1];

  // Word-aligned read: byte addr -> word index.
  assign rdata = mem[addr[AW+1:2]];

endmodule
