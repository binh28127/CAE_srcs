`timescale 1ns / 1ps

`include "parameters.v"
module top (
    input clk_i, 
    input rst, 
    input enable,
    input layer,
    input [`INPUT_SIZE-1:0][`DATA_WIDTH-1:0] data_in ,
    input [`INPUT_SIZE-1:0][`DATA_WIDTH-1:0] weight_in ,
    output reg [`DATA_WIDTH*2+1:0] psum,
    output reg flag_comp
);
    pe pe_o (
        .clk(clk_i),
        .*
    );

endmodule

