----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    15:26:38 03/07/2018 
-- Design Name: 
-- Module Name:    shift_mult - Behavioral 
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
use ieee.numeric_std.all;
use ieee.std_logic_unsigned.all;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity shift_mult is
    Port ( 	clock : in  STD_LOGIC;
           	w : in  STD_LOGIC_VECTOR (31 downto 0);
           	x : in  STD_LOGIC_VECTOR (31 downto 0);
           	k : in  STD_LOGIC_VECTOR (5 downto 0);
           	o : out  STD_LOGIC_VECTOR (64 downto 0);
		   	reset : in STD_LOGIC;
		   	enable : in STD_LOGIC;
		   	done : out STD_LOGIC);
end shift_mult;

architecture Behavioral of shift_mult is

component shift_unit is
    Port ( 	clock : in  STD_LOGIC;
				x : in  STD_LOGIC_VECTOR (31 downto 0);
				c : in STD_LOGIC_VECTOR (5 downto 0);
           	o : out  STD_LOGIC_VECTOR (64 downto 0);
           	reset : in STD_LOGIC;
		   	enable : in STD_LOGIC;
		   	done : out STD_LOGIC);
end component;

signal k_c : std_logic_vector(5 downto 0) := (others => '0');
signal count : std_logic_vector(5 downto 0) := (others => '0');
signal state : std_logic;
signal m : std_logic_vector(64 downto 0);
signal rst : std_logic;
constant enb : std_logic := '1';
signal dn : std_logic;
signal do : std_logic_vector(64 downto 0) := (others => '0');

begin
	shift: shift_unit port map (clock => clock, x => x, c => count, o => m, reset => rst, enable => enb, done => dn);
	process (clock, reset)
	begin
		if (reset = '1') then
			o <= (others => '0');
			do <= (others => '0');
			state <= '0';
			k_c <= (others => '0');
			rst <= '1';
			done <= '0';
		elsif (clock'event and clock = '1' and enable = '1') then
			if (k_c = k) then
				done <= '1';
				o <= do;
			elsif (count = "100000") then
				done <= '1';
				o <= do;
			end if;
			if (x(to_integer(unsigned(count))) = '1') then
				if (state = '0') then
					rst <= '1';
					state <= '1';
				else
					if (dn = '1') then
						k_c <= k_c + 1;
						count <= count + 1;
						state <= '0';
						do <= do + m;
					else
						rst <= '0';
					end if;
				end if;
			else
				count <= count + 1;
			end if;
		end if;
	end process;
end Behavioral;
