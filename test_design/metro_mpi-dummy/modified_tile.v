`timescale 1ns / 1ps

module modified_tile #(
  parameter integer PARTITION_ID = -1
) (
  a,
  b,
  op,
  y);

  input wire [7:0] a;
  input wire [7:0] b;
  input wire [1:0] op;
  output reg [8:0] y;

  import "DPI-C" function void dpi_tile(input int partition_id,
input bit [7:0] a,
input bit [7:0] b,
input bit [1:0] op,
output bit [8:0] y
);

  always @(*) begin
    dpi_tile(PARTITION_ID,
        a,
        b,
        op,
        y
);
  end
endmodule
