/* verilator lint_off UNUSED*/
/* verilator lint_off UNDRIVEN */

`timescale 1ns / 1ps

`include "parameters.v"

module quantization (
    input [`BIAS_WIDTH-1:0] din,
    output reg [`DATA_WIDTH-1:0] dout
);
    assign dout = din [`DATA_WIDTH-1:0];
    //assign dout = (&din[19:12]) ? 8'hFF : (din[19:12] + {7'b0,din[11]});
 
endmodule

/* verilator lint_off UNUSED*/
/* verilator lint_off UNDRIVEN */
