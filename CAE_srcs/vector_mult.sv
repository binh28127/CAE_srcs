`timescale 1ns / 1ps

//import parameters::*;
`include "parameters.sv"

module vector_mult (
    input [`DATA_WIDTH-1:0] a [`WEIGHT_SIZE-1:0],
    input [`DATA_WIDTH-1:0] b [`WEIGHT_SIZE-1:0],
    output [`DATA_WIDTH*2+1:0] psum
);

    reg [`DATA_WIDTH*2+1:0] p [`WEIGHT_SIZE-1:0];

    genvar i;
    
    generate
        for(i = 0; i < `WEIGHT_SIZE; i = i + 1) begin
//            mult m1( .a(a_3[i]), .b(b_3[i]), .p(p[i]) );
            assign p[i] = a[i] * b[i];
        end
    endgenerate
    
    assign psum = p[0] + p[1] + p[2];

endmodule
