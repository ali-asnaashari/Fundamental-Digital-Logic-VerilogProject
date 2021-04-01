`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    08:55:05 07/06/2019 
// Design Name: 
// Module Name:    VMP 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module VMP(clientcoin,conclusion,remcach);
	//input
	input [8:0] clientcoin;//9 bit
	//outputs register
	output reg conclusion;//one bit
	output reg [3:0] remcach ; //4bit
	//reg
	reg [7:0] goods [3:0]; // definition a memory 2D called goods 
	
	initial //FOR DESCRIPTION THE FUNCTION
		begin
			$readmemb("boxinfo.txt",goods);//readmemb function reads boxinfo.txt PLUS saved in goods PLUS,definition with dollar sign($)
		end

	always @(*)
		begin
		//this condition told us that our choose is right or not
		if(clientcoin[8:7] == goods[0][7:6])
			begin
				
				if( clientcoin[6:4] <= goods[0][5:3] )//if there are enough goods
					begin
						
						if((clientcoin[6:4] * goods[0][2:0]) <= clientcoin[3:0])//if client has enough coin
							begin
								conclusion = 1;
								goods[0][5:3] = goods[0][5:3] - clientcoin[6:4];
								remcach[3:0] = clientcoin[3:0] - (clientcoin[6:4] * goods[0][2:0]);
						
							end
						
						else 
							begin
								conclusion = 0;
								remcach[3:0] = clientcoin[3:0];
							end
							
					end
				
				else 
					begin
						conclusion = 0;
						remcach[3:0] = clientcoin[3:0];
					end
					
			end
		
		if(clientcoin[8:7] == goods[1][7:6])
			begin
				
				if( clientcoin[6:4] <= goods[1][5:3] )//if there are enough goods
					begin
						
						if((clientcoin[6:4] * goods[1][2:0]) <= clientcoin[3:0])//if client has enough coin
							begin
								conclusion = 1;
								goods[1][5:3] = goods[1][5:3] - clientcoin[6:4];
								remcach[3:0] = clientcoin[3:0] - (clientcoin[6:4] * goods[0][2:0]);
							end
						
						else 
							begin
								conclusion = 0;
								remcach[3:0] = clientcoin[3:0];
							end
							
					end
				
				else 
					begin
						conclusion = 0;
						remcach[3:0] = clientcoin[3:0];
					end
					
			end
		if(clientcoin[8:7] == goods[2][7:6])
			begin
				
				if( clientcoin <= goods[2][5:3] )//if there are enough goods
					begin
						
						if((clientcoin[6:4] * goods[2][2:0]) <= clientcoin[3:0])//if client has enough coin
							begin
								conclusion = 1;
								goods[2][5:3] = goods[2][5:3] - clientcoin[6:4];
								remcach[3:0] = clientcoin[3:0] - (clientcoin[6:4] * goods[2][2:0]);			
							end
			
						else 
							begin
								conclusion = 0;
								remcach[3:0] = clientcoin[3:0];
							end
							
					end
				
				else 
					begin
						conclusion = 0;
						remcach[3:0] = clientcoin[3:0];
					end
					
			end
			
			if(clientcoin[8:7] == goods[3][7:6])
			begin
				
				if( clientcoin[6:4] <= goods[3][5:3] )//if there are enough goods
					begin
						
						if((clientcoin[6:4] * goods[3][2:0]) <= clientcoin[3:0])//if client has enough coin
							begin
								conclusion = 1;
								goods[3][5:3] = goods[3][5:3] - clientcoin[6:4];
								remcach[3:0] = clientcoin[3:0] - (clientcoin[6:4] * goods[3][2:0]);
							end
							
						else 
							begin
								conclusion = 0;
								remcach[3:0] = clientcoin[3:0];
							end
							
					end
			
				else 
					begin
						conclusion = 0;
						remcach[3:0] = clientcoin[3:0];
					end
					
			end

		end //always finish

endmodule


