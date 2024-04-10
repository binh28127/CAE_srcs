`timescale 1ns / 1ps

//import parameters::*;
`include "parameters.sv"

module top (
    input logic  clk_i, rst, en,
    input logic [`DATA_WIDTH-1:0] data_in [`INPUT_SIZE-1:0],
    input logic [`DATA_WIDTH-1:0] weight_in [`WEIGHT_SIZE-1:0],
    output logic [`DATA_WIDTH*2+1:0] psum [`INPUT_SIZE-3:0],
    output logic done
);

    logic clk;
    assign clk = clk_i;

    pe pe_0 (.*);

endmodule

