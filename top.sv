`timescale 1ns / 1ps

//import parameters::*;
`include "parameters.sv"

module top (
    input clk_i, rst, en,
    input [`INPUT_SIZE-1:0] [`DATA_WIDTH-1:0] data_in,
    input [`WEIGHT_SIZE-1:0] [`DATA_WIDTH-1:0] weight_in,
    input [`INPUT_SIZE-3:0] [`DATA_WIDTH*2-1:0] psum_in,
    output reg [`INPUT_SIZE-3:0] [`DATA_WIDTH*2-1:0] psum_out,
    output reg done
);

    reg clk;
    assign clk = clk_i;

    pe pe_0 (.*);

endmodule

