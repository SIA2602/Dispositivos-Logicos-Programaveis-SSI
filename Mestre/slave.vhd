----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    20:53:36 08/24/2021 
-- Design Name: 
-- Module Name:    slave - Behavioral 
-- Project Name: 
-- Target Devices: 
-- Tool versions: 
-- Description: 
--
-- Dependencies: 
--
-- Revision: 
-- Revision 0.01 - File Created
-- Additional Comments: 
--
----------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
	use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity slave is
Port(
	mosi: in std_logic;
	miso: out std_logic;
	master_clk: in std_logic;
	cs: in std_logic
);
end slave;

architecture Behavioral of slave is
	type state_type is (idle,initial,receiving,transm,finished);
	signal state_reg: state_type:= idle;
	signal state_next: state_type:= idle;
	signal mosi_reg: unsigned (7 downto 0):= "00000000";
	signal miso_reg: unsigned (7 downto 0):= "00000000";
--	signal miso_: unsigned (7 downto 0):= "00000000";
	signal counter: integer range 0 to 16 := 0; --unsigned(15 downto 0) := "0000000000000000";
begin
	process(master_clk)
	begin
		if (master_clk'event and master_clk='1') then
			state_reg <= state_next;
--			mosi_reg <= mosi_next;
		end if;
	end process;

	process(master_clk)
	begin
		case state_reg is
		
			when idle =>
				if(cs='0') then
					state_next <= initial;
				elsif(cs='1') then
					state_next <= idle;
				end if;
				
			when initial =>
				state_next <= receiving;
				
			when receiving =>
--				mosi_next <= mosi_tmp(6 downto 0) & mosi;
				if(rising_edge(master_clk)) then
					mosi_reg <= mosi_reg (6 downto 0) & mosi;
					counter <= counter + 1;
				end if;
				if(counter=8) then
					state_next <= transm;
				end if;
				
			when transm =>
				if(counter=16) then
					state_next <= finished;
				end if;
				if(rising_edge(master_clk)) then
					counter <= counter + 1;
				end if;
				miso <= '1';
				
			when finished =>
				counter <= 0;
				miso <= '0';
				state_next <= idle;
		end case;
	end process;
	
--	mosi_tmp <= mosi_reg;
	
end Behavioral;