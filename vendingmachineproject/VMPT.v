`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   09:39:33 07/06/2019
// Design Name:   VMP
// Module Name:   C:/Xilinx/New folder/vendingmachineproject/VMPT.v
// Project Name:  vendingmachineproject
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: VMP
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module VMPT;

	// Inputs
	reg [8:0] clientcoin;

	// Outputs
	wire conclusion;
	wire [3:0] remcach;

	// Instantiate the Unit Under Test (UUT)
	VMP uut (
		.clientcoin(clientcoin), 
		.conclusion(conclusion), 
		.remcach(remcach)
	);

	initial begin
		// Initialize Inputs
		clientcoin = 0;

		// Wait 100 ns for global reset to finish
		#100;
		
       clientcoin = 010010001; 
		// Add stimulus here
	
	end
      
endmodule

