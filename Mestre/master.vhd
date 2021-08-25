library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.NUMERIC_STD.ALL;


entity master is
port(
	clk: in STD_LOGIC;
	start: in STD_LOGIC;
	rst: in STD_LOGIC;
	miso: in STD_LOGIC;
	data: in STD_LOGIC_VECTOR(7 downto 0);
	mosi: out STD_LOGIC;
	cs1: out STD_LOGIC
);
end master;

architecture Behavioral of master is
	type state_type is (s0,s1,s2,s3);
	signal state: state_type;
	signal bufferMosi: unsigned(7 downto 0);
	signal bufferMiso: unsigned(7 downto 0);
	signal count: unsigned(3 downto 0);
begin
	process(clk,start)
	begin
		if rst = '1' then
			bufferMosi <= (others=>'0');
			count <= "0000";
			state <= s0;
			cs1 <= '1';
		elsif(rising_edge(clk))then
			case state is
				when s0=>--idle
					if start = '1' then--load data
						bufferMosi <= unsigned(data);
						state<=s1;
					else
						state<=s0;
					end if;
				when s1 =>--start communication
					mosi <= STD_LOGIC(bufferMosi(7));
					bufferMosi <= bufferMosi(6 downto 0) & '0';
					cs1 <='0';
					count <= count + 1;
					if count + 1 = "1000" then
						state <= s2;
						count <= "0000";
					else
						state <= s1;
					end if;
				when s2 =>-- receive slave message
--					mosi <= STD_LOGIC(bufferMosi(7));
					bufferMiso <= bufferMiso(6 downto 0) & miso;
					count <= count + 1;
					if count + 1 = "1000" then
						state <= s3;
						count <= "0000";
					else
						state <= s2;
					end if;
				when s3 =>-- end comunication
					cs1 <='1';
					state <=s0;	
			end case;
		end if;
	end process;
						
			


end Behavioral;