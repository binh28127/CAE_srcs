`timescale 1ns / 1ps

//import parameters::*;
`include "parameters.sv"

module top (
    input logic  clk_i, rst,
    input logic [`DATA_WIDTH-1:0] data,
    output logic [`DATA_WIDTH-1:0] max,
    output logic done
);

    logic clk;
    assign clk = clk_i;

    compare comp_0 (.*);

endmodule

