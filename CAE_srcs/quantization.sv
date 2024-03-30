`timescale 1ns / 1ps

import parameters::*;

module quantization (
    input [DATA_WIDTH*2-1:0] din,
    output reg [DATA_WIDTH-1:0] dout
);

    assign dout = (&din[15:8]) ? 8'hFF : (din[15:8] + din[7]);
 
endmodule

//module truncated (
//    input [31:0] din,
//    output [15:0] dout
//);

//    assign dout = din[27:12];

//endmodule