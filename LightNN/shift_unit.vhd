----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    15:24:51 03/07/2018 
-- Design Name: 
-- Module Name:    shift_unit - Behavioral 
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

entity shift_unit is
    Port ( 	clock : in  STD_LOGIC;
				x : in  STD_LOGIC_VECTOR (31 downto 0);
				c : in STD_LOGIC_VECTOR (5 downto 0);
           	o : out  STD_LOGIC_VECTOR (64 downto 0);
           	reset : in STD_LOGIC;
		   	enable : in STD_LOGIC;
		   	done : out STD_LOGIC);
end shift_unit;

architecture Behavioral of shift_unit is

signal count : std_logic_vector(5 downto 0) := (others => '0');
signal do : std_logic_vector(64 downto 0) := (others => '0');

begin
	process (clock, reset)
	begin
		if (reset = '1') then
			do <= "000000000000000000000000000000000" & x;
			o <= (others => '0');
			done <= '0';
			count <= (others => '0');
		elsif (clock'event and clock = '1' and enable = '1') then
			if (count = c) then
				o <= do;
				done <= '1';
			else
				do <= do(63 downto 0) & '0';
				count <= count + 1;
			end if;
		end if;
	end process;
end Behavioral;

