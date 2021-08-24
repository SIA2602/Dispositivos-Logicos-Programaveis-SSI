--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   10:28:02 08/22/2021
-- Design Name:   
-- Module Name:   C:/Users/gusta/Desktop/2021_1/DLP/Prova 1/Prova 1/SSI/test.vhd
-- Project Name:  SSI
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: master
-- 
-- Dependencies:
-- 
-- Revision:
-- Revision 0.01 - File Created
-- Additional Comments:
--
-- Notes: 
-- This testbench has been automatically generated using types std_logic and
-- std_logic_vector for the ports of the unit under test.  Xilinx recommends
-- that these types always be used for the top-level I/O of a design in order
-- to guarantee that the testbench will bind correctly to the post-implementation 
-- simulation model.
--------------------------------------------------------------------------------
LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
 
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--USE ieee.numeric_std.ALL;
 
ENTITY test IS
END test;
 
ARCHITECTURE behavior OF test IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT master
    PORT(
         clk : IN  std_logic;
         start : IN  std_logic;
         rst : IN  std_logic;
         miso : IN  std_logic;
         data : IN  std_logic_vector(7 downto 0);
         mosi : OUT  std_logic;
         cs1 : OUT  std_logic
        );
    END COMPONENT;
    

   --Inputs
   signal clk : std_logic := '0';
   signal start : std_logic := '0';
   signal rst : std_logic := '1';
   signal miso : std_logic := '0';
   signal data : std_logic_vector(7 downto 0) := "01100001";

 	--Outputs
   signal mosi : std_logic;
   signal cs1 : std_logic;

   -- Clock period definitions
   constant clk_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: master PORT MAP (
          clk => clk,
          start => start,
          rst => rst,
          miso => miso,
          data => data,
          mosi => mosi,
          cs1 => cs1
        );

   -- Clock process definitions
   clk_process :process
   begin
		clk <= '0';
		wait for clk_period/2;
		clk <= '1';
		wait for clk_period/2;
   end process;
 

   -- Stimulus process
   stim_proc: process
   begin		
      -- hold reset state for 100 ns.
      wait for clk_period;
		rst<='0';
		start<='1';
		wait for clk_period;
		start<='0';
		wait for clk_period/2;
		miso<='0';
		wait for clk_period;
		miso<='1';
		wait for clk_period;
		miso<='1';
		wait for clk_period;
		miso<='0';
		wait for clk_period;
		miso<='0';
		wait for clk_period;
		miso<='0';
		wait for clk_period;
		miso<='1';
		wait for clk_period;
		miso<='0';

      -- insert stimulus here 

      wait;
   end process;

END;
