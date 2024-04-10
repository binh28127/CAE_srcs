/* verilator lint_off UNUSEDSIGNAL */
/* verilator lint_off UNDRIVEN */

`timescale 1ns / 1ps

//import parameters::*;
`include "parameters.sv"

module quantization (
    input logic [`BIAS_WIDTH-1:0] din,
    output logic [`DATA_WIDTH-1:0] dout
);

    assign dout = (&din[19:12]) ? 8'hFF : (din[19:12] + {7'b0,din[11]});
 
endmodule

//module truncated (
//    input [31:0] din,
//    output [15:0] dout
//);

//    assign dout = din[27:12];

//endmodule

/* verilator lint_off UNUSEDSIGNAL */
/* verilator lint_off UNDRIVEN */
