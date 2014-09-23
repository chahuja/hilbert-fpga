`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////

module fft32( CLK ,RST ,ED ,START ,DReal ,DImag ,RDY ,DOReal ,DOImag, ifft ); //Add overflow , check weather shift & ADDR is needed 

parameter total_bits = 32;
input  CLK;
input  RST;
input  ED;
input  START;
input  ifft;
input  [total_bits-1:0] DReal;
input  [total_bits-1:0] DImag;
output reg RDY;
output [total_bits-1:0] DOReal;
output [total_bits-1:0] DOImag;

wire [total_bits-1:0] dr1;
wire [total_bits-1:0] di1;
wire [total_bits+3:0] dr2;
wire [total_bits+3:0] di2;
wire [total_bits-1:0] dr3;
wire [total_bits-1:0] di3;
wire [total_bits-1:0] dr4;
wire [total_bits-1:0] di4;
wire rdy1,rdy2,rdy3;

wire [3:0] ADDR;
reg  [5:0] AR;
assign ADDR = AR[3:0];

initial
AR<=0;

RAM1    #(total_bits) ram_1(.CLK(CLK),.RST(RST),.ED(ED),.START(START),.DReal(DReal),.DImag(DImag),.RDY(rdy1),.DOReal(dr1),.DOImag(di1));
fft16   #(total_bits) fft_16(.ED(ED),.RST(RST),.CLK(CLK),.START(rdy1),.ifft(ifft),.DIImag(di1),.DIReal(dr1),.DOImag(di2),.DOReal(dr2),.RDY(rdy2));
weight  #(total_bits) wcalc(.CLK(CLK) ,.RST(RST),.ED(ED),.START(rdy2),.DReal(dr2[total_bits-1:0]),.DImag(di2[total_bits-1:0]),.DOReal(dr3),.DOImag(di3),.RDY(rdy3));
odd_RAM #(total_bits) oram(.CLK(CLK),.RST(RST),.ED(ED),.START(rdy2),.ADDR(ADDR),.DReal(dr2[total_bits-1:0]),.DImag(di2[total_bits-1:0]),.DOReal(dr4),.DOImag(di4));

reg [total_bits-1:0] data_ra[0:15];
reg [total_bits-1:0] data_im[0:15];
reg [1:0] state;
reg [total_bits-1:0] ra;
reg [total_bits-1:0] im;

assign DOReal = ra;
assign DOImag = im;

always@(posedge CLK)begin
	if(RST) begin
		AR<=32;
		state<=0;
	end
	else if(rdy3) begin
		AR<=0;
		state<=1;
	end
	else if(ED)begin
			RDY<=0;
			if(state==1) begin                      //Check for overflow
				ra<=dr4 + dr3;
				im<=di4 + di3;
				data_ra[AR[3:0]] <= dr4 - dr3;
				data_im[AR[3:0]] <= di4 - di3;
			end
			else if(state==2) begin
				ra <= data_ra[AR[3:0]];
				im <= data_im[AR[3:0]];
			end
			if(AR==15)
				state<=2;
			if(AR<32)
				AR<=AR+1;
			if(AR==0&&state==1)
				RDY<=1;
	end
end

endmodule
