`timescale 1ns / 1ps

import parameters::*;

module mult (
    input [DATA_WIDTH-1:0] a,
    input [DATA_WIDTH-1:0] b,
    output [DATA_WIDTH*2-1:0] p
);

    assign p = a * b;

endmodule
