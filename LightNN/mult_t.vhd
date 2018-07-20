--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   19:53:24 03/31/2018
-- Design Name:   
-- Module Name:   /home/youknowwho/Desktop/LightNN/LightNN/mult_t.vhd
-- Project Name:  LightNN
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: shift_mult
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
 
ENTITY mult_t IS
END mult_t;
 
ARCHITECTURE behavior OF mult_t IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT shift_mult
    PORT(
         clock : IN  std_logic;
         w : IN  std_logic_vector(31 downto 0);
         x : IN  std_logic_vector(31 downto 0);
         k : IN  std_logic_vector(5 downto 0);
         o : OUT  std_logic_vector(64 downto 0);
         reset : IN  std_logic;
         enable : IN  std_logic;
         done : OUT  std_logic
        );
    END COMPONENT;
    

   --Inputs
   signal clock : std_logic := '0';
   signal w : std_logic_vector(31 downto 0) := (others => '0');
   signal x : std_logic_vector(31 downto 0) := (others => '0');
   signal k : std_logic_vector(5 downto 0) := (others => '0');
   signal reset : std_logic := '0';
   signal enable : std_logic := '0';

 	--Outputs
   signal o : std_logic_vector(64 downto 0);
   signal done : std_logic;

   -- Clock period definitions
   constant clock_period : time := 1 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: shift_mult PORT MAP (
          clock => clock,
          w => w,
          x => x,
          k => k,
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
		x <= (others => '1');
		w <= (others => '0');
		k <= "100000";
      wait for 100 ns;	
		reset <= '0';
      -- insert stimulus here 

      wait;
		wait for 100 ns;
   end process;

END;
