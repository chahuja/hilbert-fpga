`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////

module fft16TB;

	reg  ED;
	reg  RST;
	reg  CLK;
	reg  START;
	reg  ifft;
	wire  [32-1:0] DIImag;
	wire  [32-1:0] DIReal;
	wire [32+3:0] DOImag;
	wire [32+3:0] DOReal;
	wire RDY;
	
	reg [4:0] count;
	
	initial 
		begin
			CLK = 1'b0;
			forever #5 CLK = ~CLK;
		end		  
		
	initial 
		begin	
		   ifft = 1'b0;
			ED = 1'b1;
			RST = 1'b0;
			count = 0;
			START = 1'b0;
			#13 RST =1'b1;
			#43 RST =1'b0;
			#53 START =1'b1;
			#12 START =1'b0;
		end	
	
	reg [4:0] ct16;
	always @(posedge CLK or posedge START)  
		if (ED)	begin
			if (START) ct16 = 7'b000_0000;
			else ct16 = ct16+ 'd1;
		end	  
	
	wire [31:0] D_R,D_I;	
	READ_ROM32 UG( .ADDR(ct16) ,
		.DATA_RE(D_R), .DATA_IM(D_I));
		
	assign DIImag  = D_I;
	assign DIReal  = D_R;
	
	fft16 UUT(
	.ED(ED),
	.RST(RST),
	.CLK(CLK),
	.START(START),
	.ifft(ifft),
	.DIImag(DIImag),
	.DIReal(DIReal),
	.DOImag(DOImag),
	.DOReal(DOReal),
	.RDY(RDY));
	

	always @(posedge RDY)
		count <= 17;
		
	always @(posedge CLK)
	begin
		if(count!=0)
		begin
			if(count!=17)
			$display("count:%d result real:%d imag:%d",count,DOReal,DOImag);
			count = count-1;
		end
	end
	
endmodule
