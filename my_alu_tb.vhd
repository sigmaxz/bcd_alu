--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   14:48:36 10/23/2013
-- Design Name:   
-- Module Name:   /home/csmajs/svill017/BCD_alu/my_alu_tb.vhd
-- Project Name:  BCD_alu
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: my_alu
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
 
ENTITY my_alu_tb IS
END my_alu_tb;
 
ARCHITECTURE behavior OF my_alu_tb IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT my_alu
    PORT(
         A : IN  std_logic_vector(31 downto 0);
         B : IN  std_logic_vector(31 downto 0);
         Opcode : IN  std_logic_vector(3 downto 0);
         Result : OUT  std_logic_vector(35 downto 0);
         Carry_out : OUT  std_logic;
         Overflow : OUT  std_logic;
         Zero : OUT  std_logic
        );
    END COMPONENT;
    

   --Inputs
   signal A : std_logic_vector(31 downto 0) := (others => '0');
   signal B : std_logic_vector(31 downto 0) := (others => '0');
   signal Opcode : std_logic_vector(3 downto 0) := (others => '0');

 	--Outputs
   signal Result : std_logic_vector(35 downto 0);
   signal Carry_out : std_logic;
   signal Overflow : std_logic;
   signal Zero : std_logic;
   -- No clocks detected in port list. Replace clk below with 
   -- appropriate port name 
   signal clk : std_logic;
   constant clk_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: my_alu PORT MAP (
          A => A,
          B => B,
          Opcode => Opcode,
          Result => Result,
          Carry_out => Carry_out,
          Overflow => Overflow,
          Zero => Zero
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
      wait for 100 ns;	
      -- insert stimulus here 

	    wait for 30 ns;
		  Opcode <= "1000" ; 
        A <= x"80045129";
        B <= x"32366099";
		  
		 wait for 10 ns;
		 assert Result = x"112411228" 	report "Test_1: result incorrect" 	severity Warning;
		 assert Carry_out = '1' 				        report "Test_1: carryout incorrect"	severity Warning;
		 assert Overflow = '0' 				        report "Test_1: overflow incorrect"	severity Warning;
		 assert Zero = '0'				                report "Test_1: zero incorrect"	severity Warning;
        
		 wait for 30 ns;
       A <= x"00000000";
       B <= x"00000000";
		  
		 wait for 10 ns;
		 assert Result = x"000000000" 	report "Test_2: result incorrect" 	severity Warning;
		 assert Carry_out = '0' 				        report "Test_2: carryout incorrect"	severity Warning;
		 assert Overflow = '0' 				        report "Test_2: overflow incorrect"	severity Warning;
		 assert Zero = '1'				                report "Test_2: zero incorrect"	severity Warning;
   
		wait for 30 ns;
       A <= x"42345678";
       B <= x"57654321";
		  
		 wait for 10 ns;
		 assert Result = x"099999999" 	report "Test_3: result incorrect" 	severity Warning;
		 assert Carry_out = '0' 				        report "Test_3: carryout incorrect"	severity Warning;
		 assert Overflow = '0' 				        report "Test_3: overflow incorrect"	severity Warning;
		 assert Zero = '0'				                report "Test_3: zero incorrect"	severity Warning;
  
   wait for 30 ns;
		  Opcode <= "1001" ; 
        A <= x"09145129";
        B <= x"02366099";
		  
		 wait for 10 ns;
		 assert Result = x"011511228" 	report "Test_4: result incorrect" 	severity Warning;
		 assert Carry_out = '0' 				        report "Test_4: carryout incorrect"	severity Warning;
		 assert Overflow = '0' 				        report "Test_4: overflow incorrect"	severity Warning;
		 assert Zero = '0'				                report "Test_4: zero incorrect"	severity Warning;
        
		 wait for 30 ns;
       A <= x"00000000";
       B <= x"00000000";
		  
		 wait for 10 ns;
		 assert Result = x"000000000" 	report "Test_5: result incorrect" 	severity Warning;
		 assert Carry_out = '0' 				        report "Test_5: carryout incorrect"	severity Warning;
		 assert Overflow = '0' 				        report "Test_5: overflow incorrect"	severity Warning;
		 assert Zero = '1'				                report "Test_5: zero incorrect"	severity Warning;
   
		wait for 30 ns;
       A <= x"02345678";
       B <= x"17654321";
		  
		 wait for 10 ns;
		 assert Result = x"105308643" 	report "Test_6: result incorrect" 	severity Warning;
		 assert Carry_out = '0' 				        report "Test_6: carryout incorrect"	severity Warning;
		 assert Overflow = '0' 				        report "Test_6: overflow incorrect"	severity Warning;
		 assert Zero = '0'				                report "Test_6: zero incorrect"	severity Warning;
  
    wait for 30 ns;
		  Opcode <= "1100" ; 
        A <= x"99145129";
        B <= x"42366099";
		  
		 wait for 10 ns;
		 assert Result = x"056779030" 	report "Test_7: result incorrect" 	severity Warning;
		 assert Carry_out = '0' 				        report "Test_7: carryout incorrect"	severity Warning;
		 assert Overflow = '0' 				        report "Test_7: overflow incorrect"	severity Warning;
		 assert Zero = '0'				                report "Test_7: zero incorrect"	severity Warning;
        
		 wait for 30 ns;
       A <= x"00000000";
       B <= x"00000000";
		  
		 wait for 10 ns;
		 assert Result = x"000000000" 	report "Test_8: result incorrect" 	severity Warning;
		 assert Carry_out = '0' 				        report "Test_8: carryout incorrect"	severity Warning;
		 assert Overflow = '0' 				        report "Test_8: overflow incorrect"	severity Warning;
		 assert Zero = '1'				                report "Test_8: zero incorrect"	severity Warning;
   
		wait for 30 ns;
       A <= x"02345678";
       B <= x"17654321";
		  
		 wait for 10 ns;
		 --result would not matter for the next case underflow
		-- assert Result = x"105308643" 	report "Test_6: result incorrect" 	severity Warning;
		 assert Carry_out = '0' 				        report "Test_9: carryout incorrect"	severity Warning;
		 assert Overflow = '1' 				        report "Test_9: overflow incorrect"	severity Warning;
		 assert Zero = '0'				                report "Test_9: zero incorrect"	severity Warning;
  
     wait for 30 ns;
		  Opcode <= "1101" ; 
        A <= x"09145129";
        B <= x"02366099";
		  
		 wait for 10 ns;
		 assert Result = x"006779030" 	report "Test_10: result incorrect" 	severity Warning;
		 assert Carry_out = '0' 				        report "Test_10: carryout incorrect"	severity Warning;
		 assert Overflow = '0' 				        report "Test_10: overflow incorrect"	severity Warning;
		 assert Zero = '0'				                report "Test_10: zero incorrect"	severity Warning;
        
		 wait for 30 ns;
       A <= x"00000000";
       B <= x"00000000";
		  
		 wait for 10 ns;
		 assert Result = x"000000000" 	report "Test_11: result incorrect" 	severity Warning;
		 assert Carry_out = '0' 				        report "Test_11: carryout incorrect"	severity Warning;
		 assert Overflow = '0' 				        report "Test_11: overflow incorrect"	severity Warning;
		 assert Zero = '1'				                report "Test_11: zero incorrect"	severity Warning;
   
		wait for 30 ns;
       A <= x"13345678";
       B <= x"17654321";
		  
		 wait for 10 ns;
		 assert Result = x"104308643" 	report "Test_12: result incorrect" 	severity Warning;
		 assert Carry_out = '0' 				        report "Test_12: carryout incorrect"	severity Warning;
		 assert Overflow = '0' 				        report "Test_12: overflow incorrect"	severity Warning;
		 assert Zero = '0'				                report "Test_12: zero incorrect"	severity Warning;
  
      wait;
   end process;

END;
