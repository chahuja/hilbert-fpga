`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////

module odd_RAM(CLK,RST,ED,START,ADDR,DReal,DImag,DOReal,DOImag);
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

reg [total_bits-1:0] data_RE [0:15];
reg [total_bits-1:0] data_IM [0:15];
reg [4:0] ct;
reg [1:0] flag;

always@(posedge CLK) begin
if(RST) begin
	ct<=16;
	flag<=0;
end
else if(START) begin
	if(flag==0) begin
		flag<=1;
		ct<=0;
	end
	else if(flag==1)
		flag<=2;
	else if(flag==2) begin
		flag<=1;
		ct<=0;
	end
end
else if(ED)
		if(ct<16) begin
			ct <= ct+1;
			data_RE[ct] <= DReal;
			data_IM[ct] <= DImag;
		end
	
end

assign DOReal = data_RE[ADDR];
assign DOImag = data_IM[ADDR];

endmodule
