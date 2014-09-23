`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////

module weight(CLK ,RST,ED,START, DReal,DImag, DOReal, DOImag,RDY  );

parameter total_bits = 32;

input CLK;
input RST;
input ED;
input START;
output reg RDY;
input [total_bits-1:0] DReal;
input [total_bits-1:0] DImag;
output [total_bits-1:0] DOReal;
output [total_bits-1:0] DOImag;

reg [4:0] ADDR;
reg [1:0] state;

///////////////////////////////////////////////////////////////////////////////////  Data change according to use
reg signed [31:0] re[0:15];
reg signed [31:0] im[0:15];
initial  begin
re[0] = 32'h00010000;re[1] = 32'h0000FB15;re[2] = 32'h0000EC83;re[3] = 32'h0000D4DB;
re[4] = 32'h0000B505;re[5] = 32'h00008E3A;re[6] = 32'h000061F8;re[7] = 32'h000031F1;
re[8] = 32'h00000000;re[9] = 32'hFFFFCE0F;re[10] = 32'hFFFF9E08;re[11] = 32'hFFFF71C6;
re[12] = 32'hFFFF4AFB;re[13] = 32'hFFFF2B25;re[14] = 32'hFFFF137D;re[15] = 32'hFFFF04EB;
im[0] = 32'h00000000;im[1] = 32'hFFFFCE0F;im[2] = 32'hFFFF9E08;im[3] = 32'hFFFF71C6;
im[4] = 32'hFFFF4AFB;im[5] = 32'hFFFF2B25;im[6] = 32'hFFFF137D;im[7] = 32'hFFFF04EB;
im[8] = 32'hFFFF0000;im[9] = 32'hFFFF04EB;im[10] = 32'hFFFF137D;im[11] = 32'hFFFF2B25;
im[12] = 32'hFFFF4AFB;im[13] = 32'hFFFF71C6;im[14] = 32'hFFFF9E08;im[15] = 32'hFFFFCE0F;
end
/////////////////////////////////////////////////////////////////////////////////////////

always @(posedge CLK)
begin
	if(RST) begin
		ADDR<=18;
		state<=0;
		RDY<=0;
	end
	else if(START) begin
		if(state==0)
			state<=1;
		else if(state==1) begin
			state<=2;
			ADDR<=0;
		end
		else if(state==2)
			state<=1;
		RDY<=0;
	end
	else if(ED) begin
	RDY<=0;
		if(state==2)
			if(ADDR!=18)
			ADDR<=ADDR+1;
			
	end
	
	if(ADDR==1)
		RDY<=1;
		
	
end

   reg signed  [total_bits-1 : 0] drd,did;
	reg signed  [total_bits-1 : 0] wrd,wid;
	wire signed [2*total_bits-1 : 0] drri,drii,diri,diii;
	reg signed  [total_bits:0] drr,dri,dir,dii,dwr,dwi;
	
	assign  	drri=drd*wrd;  
	assign	diri=did*wrd;  
	assign	drii=drd*wid;
	assign	diii=did*wid;

//wire OVF;   //Change for different width
//assign sel = drri[63] ^ dwr[62] ^ dwr[61] ^ drri[63] ^ dwr[62] ^ dwr[61]

always @(posedge CLK) begin
	if((state==2&&ED)&&(ADDR!=18)) begin
					drd<=DReal;
					did<=DImag;
					wrd<=re[ADDR];
					wid<=im[ADDR];
					drr<=drri[47:15];   //Change according to use
					dri<=drii[47:15];
					dir<=diri[47:15];
					dii<=diii[47:15];
					dwr<=drr - dii;				
					dwi<=dri + dir;
	end
end
assign DOReal = dwr[total_bits:1];
assign DOImag = dwi[total_bits:1];
endmodule
