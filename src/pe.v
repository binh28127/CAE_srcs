`timescale 1ns / 1ps

`include "parameters.v"

module pe (
    input clk, 
    input rst, 
    input enable,
    input layer,
    input [`INPUT_SIZE-1:0][`DATA_WIDTH-1:0] data_in ,
    input [`INPUT_SIZE-1:0][`DATA_WIDTH-1:0] weight_in ,
    output reg [`DATA_WIDTH*2+1:0] psum,
    output reg flag_comp
);
    /* verilator lint_off UNUSED*/
    reg [`DATA_WIDTH-1:0] data_row [`INPUT_SIZE+1:0];
    reg [`DATA_WIDTH-1:0] weight_row [`INPUT_SIZE+1:0];
    /* verilator lint_off UNUSED*/
    reg [`DATA_WIDTH-1:0] data [`WEIGHT_SIZE-1:0];
    reg [`DATA_WIDTH-1:0] weight [`WEIGHT_SIZE-1:0];
    reg [4:0] counter;
    wire [`DATA_WIDTH*2+1:0] buffer;
    
    localparam IDLE = 2'd0;
    localparam INPT = 2'd1;
    localparam COMP = 2'd2;
    localparam OUPT = 2'd3;

    reg [1:0] state;
    
    always @(*) begin
        if(flag_comp) psum = buffer;
        else psum =0;
    end

    always @(posedge clk or posedge rst) begin
        if(rst) begin 
            state <= IDLE;
            flag_comp <= 0;
        end
        else begin
            case (state)
                IDLE: begin
                    if(enable) state <= INPT;
                    flag_comp <= 0;
                end
                INPT: begin
                    data_row[0] <= data_in[0];
                    data_row[1] <= data_in[1];
                    data_row[2] <= data_in[2];
                    data_row[3] <= data_in[3];
                    data_row[4] <= data_in[4];
                    data_row[5] <= data_in[5];
                    data_row[6] <= data_in[6];
                    data_row[7] <= data_in[7];
                    data_row[8] <= data_in[8];
                    data_row[9] <= data_in[9];
                    data_row[10] <= data_in[10];
                    data_row[11] <= data_in[11];
                    data_row[12] <= data_in[12];
                    data_row[13] <= data_in[13];
                    data_row[14] <= data_in[14];
                    data_row[15] <= data_in[15];
                    data_row[16] <= data_in[16];
                    data_row[17] <= data_in[17];
                    data_row[18] <= data_in[18];
                    data_row[19] <= data_in[19];
                    data_row[20] <= data_in[20];
                    data_row[21] <= data_in[21];
                    data_row[22] <= data_in[22];
                    data_row[23] <= data_in[23];
                    data_row[24] <= data_in[24];
                    data_row[25] <= data_in[25];
                    data_row[26] <= data_in[26];
                    data_row[27] <= data_in[27];
                    data_row[28] <= 0;
                    data_row[29] <= 0;
                    weight_row[0] <= weight_in[0];
                    weight_row[1] <= weight_in[1];
                    weight_row[2] <= weight_in[2];
                    weight_row[3] <= weight_in[3];
                    weight_row[4] <= weight_in[4];
                    weight_row[5] <= weight_in[5];
                    weight_row[6] <= weight_in[6];
                    weight_row[7] <= weight_in[7];
                    weight_row[8] <= weight_in[8];
                    weight_row[9] <= weight_in[9];
                    weight_row[10] <= weight_in[10];
                    weight_row[11] <= weight_in[11];
                    weight_row[12] <= weight_in[12];
                    weight_row[13] <= weight_in[13];
                    weight_row[14] <= weight_in[14];
                    weight_row[15] <= weight_in[15];
                    weight_row[16] <= weight_in[16];
                    weight_row[17] <= weight_in[17];
                    weight_row[18] <= weight_in[18];
                    weight_row[19] <= weight_in[19];
                    weight_row[20] <= weight_in[20];
                    weight_row[21] <= weight_in[21];
                    weight_row[22] <= weight_in[22];
                    weight_row[23] <= weight_in[23];
                    weight_row[24] <= weight_in[24];
                    weight_row[25] <= weight_in[25];
                    weight_row[26] <= weight_in[26];
                    weight_row[27] <= weight_in[27];
                    weight_row[28] <= 0;
                    weight_row[29] <= 0;
                    state <= COMP;
                end
                COMP: begin
                    if(layer == 0) begin
                        counter <= counter + 1;
                        {weight[2], weight[1], weight[0]} <= {weight_row[2],weight_row[1],weight_row[0]};
                        {data[2],data[1],data[0]} <= {data_row[counter+2],data_row[counter+1],data_row[counter]};
                        if(counter == `INPUT_SIZE-3) state <= OUPT;
                    end
                    else begin
                        counter <= counter + 3;
                        {data[2],data[1],data[0]} <= {data_row[counter+2],data_row[counter+1],data_row[counter]};
                        {weight[2], weight[1], weight[0]} <= {weight_row[counter+2],weight_row[counter+1],weight_row[counter]};
                        if(counter == `INPUT_SIZE-1) state <= OUPT;
                    end
                    flag_comp <= 1;
                end
                OUPT: begin
                    state <= IDLE;
                    flag_comp <= 0;
                    counter <= 0;
                end 
                default: state <= IDLE;
            endcase
        end
    end
    
    vector_mult vmult_0 (
        .a({weight[2], weight[1], weight[0]}),
        .b({data[2], data[1], data[0]}),
        .psum(buffer)
    );
    
endmodule
