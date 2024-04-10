/* verilator lint_off UNUSEDSIGNAL */

`timescale 1ns / 1ps

//import parameters::*;
`include "parameters.sv"

module top (
    input clk_i,
    input [`DATA_WIDTH-1:0] a [`WEIGHT_SIZE-1:0],
    input [`DATA_WIDTH-1:0] b [`WEIGHT_SIZE-1:0],
    output [`DATA_WIDTH*2-1:0] psum
);

//    reg clk;
//    assign clk = clk_i;

    vector_mult vmult_0 (.*);

endmodule

/* verilator lint_off UNUSEDSIGNAL */

