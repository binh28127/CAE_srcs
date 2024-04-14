`timescale 1ns / 1ps

`include "parameters.v"

module vector_mult (
    input [`WEIGHT_SIZE-1:0][`DATA_WIDTH-1:0] a ,
    input [`WEIGHT_SIZE-1:0][`DATA_WIDTH-1:0] b ,
    output [`DATA_WIDTH*2+1:0] psum
);

    reg [`DATA_WIDTH*2+1:0] p [`WEIGHT_SIZE-1:0];
    
    always @(*) begin
        p[0] = a[0] * b[0];
        p[1] = a[1] * b[1];
        p[2] = a[2] * b[2];
    end
    
    assign psum = p[0] + p[1] + p[2];

endmodule
