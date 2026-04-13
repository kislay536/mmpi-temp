`timescale 1ns / 1ps

module modified_tile #(
  parameter integer PARTITION_ID = -1
) (
  clk,
  rst_n,
  a,
  b,
  op,
  inter_in,
  inter_out,
  y);

  input wire clk;
  input wire rst_n;
  input wire [7:0] a;
  input wire [7:0] b;
  input wire [1:0] op;
  input wire [8:0] inter_in;
  output reg [8:0] inter_out;
  output reg [8:0] y;

  import "DPI-C" function void dpi_tile(input int partition_id,
input bit clk,
input bit rst_n,
input bit [7:0] a,
input bit [7:0] b,
input bit [1:0] op,
input bit [8:0] inter_in,
output bit [8:0] inter_out,
output bit [8:0] y
);

  always @(posedge clk) begin
    dpi_tile(PARTITION_ID,
        clk,
        rst_n,
        a,
        b,
        op,
        inter_in,
        inter_out,
        y
);
  end
endmodule
