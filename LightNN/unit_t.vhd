--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   19:16:51 03/31/2018
-- Design Name:   
-- Module Name:   /home/youknowwho/Desktop/LightNN/LightNN/unit_t.vhd
-- Project Name:  LightNN
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: shift_unit
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
 
ENTITY unit_t IS
END unit_t;
 
ARCHITECTURE behavior OF unit_t IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT shift_unit
    PORT(
         clock : IN  std_logic;
         x : IN  std_logic_vector(31 downto 0);
         c : IN  std_logic_vector(6 downto 0);
         o : OUT  std_logic_vector(64 downto 0);
         reset : IN  std_logic;
         enable : IN  std_logic;
         done : OUT  std_logic
        );
    END COMPONENT;
    

   --Inputs
   signal clock : std_logic := '0';
   signal x : std_logic_vector(31 downto 0) := (others => '0');
   signal c : std_logic_vector(6 downto 0) := (others => '0');
   signal reset : std_logic := '0';
   signal enable : std_logic := '0';

 	--Outputs
   signal o : std_logic_vector(64 downto 0);
   signal done : std_logic;

   -- Clock period definitions
   constant clock_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: shift_unit PORT MAP (
          clock => clock,
          x => x,
          c => c,
          o => o,
          reset => reset,
          enable => enable,
          done => done
        );

   -- Clock process definitions
   clock_process :process
   begin
		clock <= '0';
		wait for clock_period/2;
		clock <= '1';
		wait for clock_period/2;
   end process;
 

   -- Stimulus process
   stim_proc: process
   begin		
      -- hold reset state for 100 ns.
		reset <= '1';
		enable <= '1';
      wait for 100 ns;	
		x <= (others => '1');
		c <= "100000";
      wait for clock_period*10;
		reset <= '0';
      -- insert stimulus here 

      wait;
   end process;

END;
