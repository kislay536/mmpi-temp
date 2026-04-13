module u_tile3_tile_wrapper (
  a,
  b,
  op,
  inter_in,
  inter_out,
  y
);

  input wire [7:0] a;
  input wire [7:0] b;
  input wire [1:0] op;
  input wire [8:0] inter_in;
  output reg [8:0] inter_out;
  output reg [8:0] y;

  modified_tile #(
    .PARTITION_ID(4)
  ) inst (
    .a(a),
    .b(b),
    .op(op),
    .inter_in(inter_in),
    .inter_out(inter_out),
    .y(y)
  );
endmodule
