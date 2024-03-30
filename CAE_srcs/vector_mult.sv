`timescale 1ns / 1ps

import parameters::*;

module vector_mult (
    input [WEIGHT_SIZE-1:0] [DATA_WIDTH-1:0] a,
    input [WEIGHT_SIZE-1:0] [DATA_WIDTH-1:0] b,
    output [DATA_WIDTH*2-1:0] psum
);

    reg [WEIGHT_SIZE-1:0] [DATA_WIDTH-1:0] a_3;
    reg [WEIGHT_SIZE-1:0] [DATA_WIDTH-1:0] b_3;
    reg [WEIGHT_SIZE-1:0] [DATA_WIDTH*2-1:0] p;

    always @(*)begin
        a_3[0] = a[0] ;
        a_3[1] = a[1] ;
        a_3[2] = a[2] ;
        b_3[0] = b[0] ;
        b_3[1] = b[1] ;
        b_3[2] = b[2] ;
    end

    genvar i;
    
    generate
        for(i = 0; i < WEIGHT_SIZE; i = i + 1) begin
            mult m1( .a(a_3[i]), .b(b_3[i]), .p(p[i]) );
        end
    endgenerate
    
    assign psum = p[0] + p[1] + p[2];

endmodule
