library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.NUMERIC_STD.ALL;


entity FIFO is
generic( 
		B: natural:=8 --number of bits 
	); 
	port ( 
		clk, reset: in std_logic; 
		rd, wr: in std_logic; 
		w_data: in std_logic_vector (B-1 downto 0);  
		r_data: out std_logic_vector (B-1 downto 0);
		empty, full: out std_logic
); 
end FIFO;

architecture Behavioral of FIFO is
	--vetor de 8 slots -- cada slot eh um std_logic_vector de tamanho 8
	type reg_file_type is array ((2**3) - 1 downto 0) of std_logic_vector (B-1 downto 0); 
	signal array_reg: reg_file_type;
	
	--FIFO circular com 8 slots 
	--> "000" = 0 e "111" = 7 -> 3 bits para representar todos os slots
	-- ponteiros de write e read
	signal w_ptr_reg, w_ptr_next, w_ptr_succ: std_logic_vector (2 downto 0);
	signal r_ptr_reg, r_ptr_next, r_ptr_succ: std_logic_vector (2 downto 0);
	
	--verifica estado da fila empty/full
	signal full_reg, empty_reg, full_next, empty_next: std_logic;
	
	-- estado da FIFO, se eh para escrever ou ler
	signal wr_op: std_logic_vector (1 downto 0); 
	signal wr_en: std_logic;
begin

process (clk, reset) 
	begin 
	if (reset='1') then --zera todo o vetor da fila
		array_reg <= (others=>(others=>'0')); 
	elsif (clk'event and clk='1') then 
		if wr_en='1' then --se escrita enable
			--array[posicao] = data;
			array_reg(to_integer(unsigned(w_ptr_reg))) <= w_data;
		end if; 
	end if; 
end process;

--r_data sempre recebe o valor do array na posicao r_ptr_reg
r_data <= array_reg(to_integer(unsigned(r_ptr_reg)));

-- write enabled only when FIFO is not full 
wr_en <= wr and (not full_reg);


--fifo control logic
--register for read and write pointers
process(clk,reset)
begin
	if (reset='1') then 
		w_ptr_reg <= (others=>'0'); 
		r_ptr_reg <= (others=>'0'); 
		full_reg <= '0'; 
		empty_reg <= '1';
	elsif (clk'event and clk='1') then
		w_ptr_reg <= w_ptr_next ; 
		r_ptr_reg <= r_ptr_next ; 
		full_reg <= full_next;
		empty_reg <= empty_next;
	end if;
end process;

-- successive pointer values
-- Fila circular, quando w_ptr_reg = "111" = 7 
-- "111" + 1 = "000" volta para a primeira posicao
w_ptr_succ <= std_logic_vector(unsigned(w_ptr_reg) + 1);
r_ptr_succ <= std_logic_vector(unsigned(r_ptr_reg) + 1);

-- next_state logic for read and write pointers
-- wr_op eh o modo em q a fila esta
-- se wr_op = "10" modo escrita
-- se wr_op = "01" modo leitura
wr_op <= wr & rd;			

process (w_ptr_reg, w_ptr_succ, r_ptr_reg, r_ptr_succ, wr_op, empty_reg, full_reg) 
begin 
	w_ptr_next <= w_ptr_reg; 
	r_ptr_next <= r_ptr_reg; 
	full_next <= full_reg; 
	empty_next <= empty_reg ;
	case wr_op is
		when "00" => -- faz nada
		when "01" => -- read
		if (empty_reg /= '1') then -- not empty 
			r_ptr_next <= r_ptr_succ; 
			full_next <= '0'; 
			if (r_ptr_succ=w_ptr_reg) then
				empty_next <='1';
			end if;
		end if;
		when "10" => --write
			if (full_reg /= '1') then -- not full 
				w_ptr_next <= w_ptr_succ; 
				empty_next <= '0'; 
				if (w_ptr_succ=r_ptr_reg) then
					full_next <='1';
				end if;
			end if;
		when others => --write/read
			w_ptr_next <= w_ptr_succ ; 
			r_ptr_next <= r_ptr_succ ; 
	end case;
end process;

--saida logica para saber se a fila esta cheia ou vazia
full <= full_reg;
empty <= empty_reg;

end Behavioral;

