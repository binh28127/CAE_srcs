`timescale 1ns / 1ps

`include "parameters.v"
module top (
    input clk_i, 
    input rst, 
    input enable,
    input layer,
    input [`DATA_WIDTH*2+1:0] psum [`WEIGHT_SIZE-1:0],
    input [`BIAS_WIDTH-1:0] bias,
    output reg [`BIAS_WIDTH-1:0] sum,
    //done used when layer = 1
    output reg conv_comp,
    output reg fc_done,
    output wire fc_line_done
);
    accumulate accumulate_0 (
        .clk(clk_i),
        .*
    );

endmodule

