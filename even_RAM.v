`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////

module even_RAM(CLK,RST,ED,START,ADDR,DReal,DImag,DOReal,DOImag);
parameter total_bits = 32;
input  CLK;
input  RST;
input  ED;
input  START;
input  [3:0] ADDR;
input  [total_bits-1:0] DReal;
input  [total_bits-1:0] DImag;
output [total_bits-1:0] DOReal;
output [total_bits-1:0] DOImag;

reg [total_bits-1] data [0:15];
reg [4:0] ct;
always@(posedge CLK) begin
if(RST)



endmodule
