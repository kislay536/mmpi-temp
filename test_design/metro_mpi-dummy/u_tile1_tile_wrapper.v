module u_tile1_tile_wrapper (
  a,
  b,
  op,
  y
);

  input wire [7:0] a;
  input wire [7:0] b;
  input wire [1:0] op;
  output reg [8:0] y;

  modified_tile #(
    .PARTITION_ID(2)
  ) inst (
    .a(a),
    .b(b),
    .op(op),
    .y(y)
  );
endmodule
