module tile #(
    parameter int WIDTH = 8
) (
    input  logic [WIDTH-1:0] a,
    input  logic [WIDTH-1:0] b,
    input  logic [1:0]       op,
    output logic [WIDTH:0]   y
);
    always_comb begin
        unique case (op)
            2'd0: y = a + b;
            2'd1: y = a - b;
            2'd2: y = {1'b0, a} ^ {1'b0, b};
            default: y = {1'b0, a} & {1'b0, b};
        endcase
    end
endmodule
