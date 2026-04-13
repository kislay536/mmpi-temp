// Modified by Metro-MPI to use specialized wrappers

module cmp_top #(
    parameter int WIDTH = 8
) (
    input  logic [WIDTH-1:0] in_a0,
    input  logic [WIDTH-1:0] in_b0,
    input  logic [WIDTH-1:0] in_a1,
    input  logic [WIDTH-1:0] in_b1,
    input  logic [WIDTH-1:0] in_a2,
    input  logic [WIDTH-1:0] in_b2,
    input  logic [WIDTH-1:0] in_a3,
    input  logic [WIDTH-1:0] in_b3,
    input  logic [1:0]       op0,
    input  logic [1:0]       op1,
    input  logic [1:0]       op2,
    input  logic [1:0]       op3,
    output logic [WIDTH:0]   out0,
    output logic [WIDTH:0]   out1,
    output logic [WIDTH:0]   out2,
    output logic [WIDTH:0]   out3
);
    u_tile0_tile_wrapper  u_tile0 (
        .a  (in_a0),
        .b  (in_b0),
        .op (op0),
        .y  (out0)
    );

    u_tile1_tile_wrapper  u_tile1 (
        .a  (in_a1),
        .b  (in_b1),
        .op (op1),
        .y  (out1)
    );

    u_tile2_tile_wrapper  u_tile2 (
        .a  (in_a2),
        .b  (in_b2),
        .op (op2),
        .y  (out2)
    );

    u_tile3_tile_wrapper  u_tile3 (
        .a  (in_a3),
        .b  (in_b3),
        .op (op3),
        .y  (out3)
    );
endmodule
