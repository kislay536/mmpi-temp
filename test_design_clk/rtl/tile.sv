module tile #(
    parameter int WIDTH = 8
) (
    input  logic             clk,
    input  logic             rst_n,
    input  logic [WIDTH-1:0] a,
    input  logic [WIDTH-1:0] b,
    input  logic [1:0]       op,
    input  logic [WIDTH:0]   inter_in,
    output logic [WIDTH:0]   inter_out,
    output logic [WIDTH:0]   y
);
    logic [WIDTH:0] local_y;

    always_comb begin
        unique case (op)
            2'd0: local_y = a + b;
            2'd1: local_y = a - b;
            2'd2: local_y = {1'b0, a} ^ {1'b0, b};
            default: local_y = {1'b0, a} & {1'b0, b};
        endcase
    end

    always_ff @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            y <= '0;
            inter_out <= '0;
        end else begin
            y <= local_y ^ inter_in;
            inter_out <= local_y ^ inter_in;
        end
    end
endmodule
