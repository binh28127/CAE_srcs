/* verilator lint_off UNUSEDSIGNAL */

module test (
    input logic [3:0] a, b,
    output logic [4:0] c
);
    logic abc, binh;
    assign binh =1;
    assign c = {{1'b0,a} + {1'b0,b}};

endmodule
/* verilator lint_off UNUSEDSIGNAL */

