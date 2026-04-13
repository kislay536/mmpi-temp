module cmp_top #(
    parameter int WIDTH = 8
) (
    input  logic             clk,
    input  logic             rst_n,
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
    output logic [WIDTH:0]   out3,
    output logic [WIDTH:0]   inter01,
    output logic [WIDTH:0]   inter12,
    output logic [WIDTH:0]   inter23,
    output logic [WIDTH:0]   inter34
);
    logic [WIDTH:0] inter_link0;
    logic [WIDTH:0] inter_link1;
    logic [WIDTH:0] inter_link2;
    logic [WIDTH:0] inter_link3;
    logic [WIDTH:0] inter_link4;

    assign inter_link0 = '0;
    assign inter01 = inter_link1;
    assign inter12 = inter_link2;
    assign inter23 = inter_link3;
    assign inter34 = inter_link4;

    tile #(.WIDTH(WIDTH)) u_tile0 (
        .clk (clk),
        .rst_n (rst_n),
        .a  (in_a0),
        .b  (in_b0),
        .op (op0),
        .inter_in  (inter_link0),
        .inter_out (inter_link1),
        .y  (out0)
    );

    tile #(.WIDTH(WIDTH)) u_tile1 (
        .clk (clk),
        .rst_n (rst_n),
        .a  (in_a1),
        .b  (in_b1),
        .op (op1),
        .inter_in  (inter_link1),
        .inter_out (inter_link2),
        .y  (out1)
    );

    tile #(.WIDTH(WIDTH)) u_tile2 (
        .clk (clk),
        .rst_n (rst_n),
        .a  (in_a2),
        .b  (in_b2),
        .op (op2),
        .inter_in  (inter_link2),
        .inter_out (inter_link3),
        .y  (out2)
    );

    tile #(.WIDTH(WIDTH)) u_tile3 (
        .clk (clk),
        .rst_n (rst_n),
        .a  (in_a3),
        .b  (in_b3),
        .op (op3),
        .inter_in  (inter_link3),
        .inter_out (inter_link4),
        .y  (out3)
    );
endmodule
