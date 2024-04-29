/* verilator lint_off UNUSED*/
/* verilator lint_off UNDRIVEN */

`timescale 1ns / 1ps

`include "parameters.v"

module activation(
    input [`DATA_WIDTH-1:0] din,
    output reg [`DATA_WIDTH-1:0] dout
);

    // relu
    assign dout = din[`DATA_WIDTH-1] ? 0 : din;

endmodule

/* verilator lint_off UNUSED*/
/* verilator lint_off UNDRIVEN */
