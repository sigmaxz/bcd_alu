----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    14:45:05 10/23/2013 
-- Design Name: 
-- Module Name:    my_alu - Behavioral 
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
use IEEE.STD_LOGIC_Arith.ALL;
use IEEE.STD_LOGIC_unsigned.ALL;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity my_alu is
    Port ( A : in  STD_LOGIC_VECTOR (31 downto 0);
           B : in  STD_LOGIC_VECTOR (31 downto 0);
           Opcode : in  STD_LOGIC_VECTOR (3 downto 0);
           Result : out  STD_LOGIC_VECTOR (35 downto 0);
           Carry_out : out  STD_LOGIC;
           Overflow : out  STD_LOGIC;
           Zero : out  STD_LOGIC);
end my_alu;

architecture Behavioral of my_alu is

begin
process(A, B, opcode)
variable col_temp1 : STD_LOGIC_VECTOR(3 downto 0);
variable col_temp2 : STD_LOGIC_VECTOR(3 downto 0);
variable col_result : STD_LOGIC_VECTOR(3 downto 0);
variable col_result_temp : STD_LOGIC_VECTOR(4 downto 0);
variable carrytemp : STD_LOGIC;
variable result_temp : STD_LOGIC_VECTOR(35 downto 0);
variable result_temp2 : STD_LOGIC_VECTOR(35 downto 0);
variable greater: STD_LOGIC_VECTOR(31 downto 0);
variable less: STD_LOGIC_VECTOR(31 downto 0);
begin


case Opcode is
when "1000" =>
-----------------------------col0
    col_temp1 := A(3 downto 0);
    col_temp2 := B(3 downto 0);
    col_result_temp := ('0' & col_temp1) + ('0' & col_temp2);
    carrytemp := col_result_temp(4);
	 col_result := col_result_temp(3 downto 0);
    if (carrytemp = '1') or (col_result_temp(3 downto 0) > 9) then
        carrytemp := '1';
        col_result := (col_result_temp(3 downto 0) + 6);
    end if;
   
    result_temp := x"00000000" & col_result;
--------------------------------col1
    col_temp1 := A(7 downto 4);
    col_temp2 := B(7 downto 4);
    col_result := col_temp1 + col_temp2 + ("000" & carrytemp);
    col_result_temp := ('0' & col_temp1) + ('0' & col_temp2) + ("0000" & carrytemp);
    carrytemp := col_result_temp(4);
    if (carrytemp = '1') or (col_result_temp(3 downto 0) > 9) then
        carrytemp := '1';
        col_result := (col_result_temp(3 downto 0) + 6);
    end if;
   
    result_temp2 := (x"0000000" & (col_result & x"0")) + result_temp;
-------------------------------------------col2
    col_temp1 := A(11 downto 8);
    col_temp2 := B(11 downto 8);
    col_result := col_temp1 + col_temp2 + ("000" & carrytemp);
    col_result_temp := ('0' & col_temp1) + ('0' & col_temp2) + ("0000" & carrytemp);
    carrytemp := col_result_temp(4);
    if (carrytemp = '1') or (col_result_temp(3 downto 0) > 9) then
        carrytemp := '1';
        col_result := (col_result_temp(3 downto 0) + 6);
    end if;
   
    result_temp := (x"000000" & (col_result & x"00")) + result_temp2;
-------------------------------------------------col3
    col_temp1 := A(15 downto 12);
    col_temp2 := B(15 downto 12);
    col_result := col_temp1 + col_temp2 + ("000" & carrytemp);
    col_result_temp := ('0' & col_temp1) + ('0' & col_temp2) + ("0000" & carrytemp);
    carrytemp := col_result_temp(4);
    if (carrytemp = '1') or (col_result_temp(3 downto 0) > 9) then
        carrytemp := '1';
        col_result := (col_result_temp(3 downto 0) + 6);
    end if;
   
    result_temp2 := (x"00000" & (col_result & x"000")) + result_temp;
---------------------------------------------col4
    col_temp1 := A(19 downto 16);
    col_temp2 := B(19 downto 16);
    col_result := col_temp1 + col_temp2 + ("000" & carrytemp);
    col_result_temp := ('0' & col_temp1) + ('0' & col_temp2) + ("0000" & carrytemp);
    carrytemp := col_result_temp(4);
    if (carrytemp = '1') or (col_result_temp(3 downto 0) > 9) then
        carrytemp := '1';
        col_result := (col_result_temp(3 downto 0) + 6);
    end if;
   
    result_temp := (x"0000" & (col_result & x"0000")) + result_temp2;
----------------------------------------------------------col5
    col_temp1 := A(23 downto 20);
    col_temp2 := B(23 downto 20);
    col_result := col_temp1 + col_temp2 + ("000" & carrytemp);
    col_result_temp := ('0' & col_temp1) + ('0' & col_temp2) + ("0000" & carrytemp);
    carrytemp := col_result_temp(4);
    if (carrytemp = '1') or (col_result_temp(3 downto 0) > 9) then
        carrytemp := '1';
        col_result := (col_result_temp(3 downto 0) + 6);
    end if;
   
    result_temp2 := (x"000" & (col_result & x"00000")) + result_temp;
---------------------------------------------col6
    col_temp1 := A(27 downto 24);
    col_temp2 := B(27 downto 24);
    col_result := col_temp1 + col_temp2 + ("000" & carrytemp);
    col_result_temp := ('0' & col_temp1) + ('0' & col_temp2) + ("0000" & carrytemp);
    carrytemp := col_result_temp(4);
    if (carrytemp = '1') or (col_result_temp(3 downto 0) > 9) then
        carrytemp := '1';
        col_result := (col_result_temp(3 downto 0) + 6);
    end if;
   
    result_temp := (x"00" & (col_result & x"000000")) + result_temp2;
----------------------------------------------------------col7
    col_temp1 := A(31 downto 28);
    col_temp2 := B(31 downto 28);
    col_result := col_temp1 + col_temp2 + ("000" & carrytemp);
    col_result_temp := ('0' & col_temp1) + ('0' & col_temp2) + ("0000" & carrytemp);
    carrytemp := col_result_temp(4);
    if (carrytemp = '1') or (col_result_temp(3 downto 0) > 9) then
        carrytemp := '1';
        col_result := (col_result_temp(3 downto 0) + 6);
    end if;
   
    result_temp2 := (x"0" & (col_result & x"0000000")) + result_temp;
---------------------------------------------col8
    col_result := ("000" & carrytemp);
	 Carry_out <= col_result(0);
   
    result_temp := (col_result & x"00000000") + result_temp2;
   
    result <= result_temp;
	 if result_temp = 0 then
		Zero <= '1';
	 else
		Zero <= '0';
	 end if;
	 Overflow <= '0';
---------------------------------------------------------------------------------------
when "1001" =>
-----------------------------col0
	 if A(27 downto 0) > B(27 downto 0) then
		greater := A;
		less := B;
	 else
		greater := B;
		less := A;
	 end if;
	 
    col_temp1 := greater(3 downto 0);
    col_temp2 := less(3 downto 0);
	 if B(28) /= A(28) then
		col_temp2 := 9 - col_temp2;
	 end if;
    col_result_temp := ('0' & col_temp1) + ('0' & col_temp2);
	 if B(28) /= A(28) then
		col_result_temp := col_result_temp + "00001";
	 end if;
    carrytemp := col_result_temp(4);
	 col_result := col_result_temp(3 downto 0);
    if (carrytemp = '1') or (col_result_temp(3 downto 0) > "1001" ) then
        carrytemp := '1';
        col_result := (col_result_temp(3 downto 0) + 6);
    end if;
   
    result_temp := x"00000000" & col_result;
--------------------------------col1
    col_temp1 := greater(7 downto 4);
    col_temp2 := less(7 downto 4);
	 if B(28) /= A(28) then
		col_temp2 := 9 - ( col_temp2);
	 end if;
    col_result := col_temp1 + col_temp2 + ("000" & carrytemp);
    col_result_temp := ('0' & col_temp1) + ('0' & col_temp2) + ("0000" & carrytemp);
    carrytemp := col_result_temp(4);
    if (carrytemp = '1') or (col_result_temp(3 downto 0) > 9) then
        carrytemp := '1';
        col_result := (col_result_temp(3 downto 0) + 6);
    end if;
   
    result_temp2 := (x"0000000" & (col_result & x"0")) + result_temp;
-------------------------------------------col2
    col_temp1 := greater(11 downto 8);
    col_temp2 := less(11 downto 8);
	 if B(28) /= A(28) then
		col_temp2 := 9 - ( col_temp2);
	 end if;
    col_result := col_temp1 + col_temp2 + ("000" & carrytemp);
    col_result_temp := ('0' & col_temp1) + ('0' & col_temp2) + ("0000" & carrytemp);
    carrytemp := col_result_temp(4);
    if (carrytemp = '1') or (col_result_temp(3 downto 0) > 9) then
        carrytemp := '1';
        col_result := (col_result_temp(3 downto 0) + 6);
    end if;
   
    result_temp := (x"000000" & (col_result & x"00")) + result_temp2;
-------------------------------------------------col3
    col_temp1 := greater(15 downto 12);
    col_temp2 := less(15 downto 12);
	 if B(28) /= A(28) then
		col_temp2 := 9 - ( col_temp2);
	 end if;
    col_result := col_temp1 + col_temp2 + ("000" & carrytemp);
    col_result_temp := ('0' & col_temp1) + ('0' & col_temp2) + ("0000" & carrytemp);
    carrytemp := col_result_temp(4);
    if (carrytemp = '1') or (col_result_temp(3 downto 0) > 9) then
        carrytemp := '1';
        col_result := (col_result_temp(3 downto 0) + 6);
    end if;
   
    result_temp2 := (x"00000" & (col_result & x"000")) + result_temp;
---------------------------------------------col4
    col_temp1 := greater(19 downto 16);
    col_temp2 := less(19 downto 16);
	 if B(28) /= A(28) then
		col_temp2 := 9 - ( col_temp2);
	 end if;
    col_result := col_temp1 + col_temp2 + ("000" & carrytemp);
    col_result_temp := ('0' & col_temp1) + ('0' & col_temp2) + ("0000" & carrytemp);
    carrytemp := col_result_temp(4);
    if (carrytemp = '1') or (col_result_temp(3 downto 0) > 9) then
        carrytemp := '1';
        col_result := (col_result_temp(3 downto 0) + 6);
    end if;
   
    result_temp := (x"0000" & (col_result & x"0000")) + result_temp2;
----------------------------------------------------------col5
    col_temp1 := greater(23 downto 20);
    col_temp2 := less(23 downto 20);
	 if B(28) /= A(28) then
		col_temp2 := 9 - ( col_temp2);
	 end if;
    col_result := col_temp1 + col_temp2 + ("000" & carrytemp);
    col_result_temp := ('0' & col_temp1) + ('0' & col_temp2) + ("0000" & carrytemp);
    carrytemp := col_result_temp(4);
    if (carrytemp = '1') or (col_result_temp(3 downto 0) > 9) then
        carrytemp := '1';
        col_result := (col_result_temp(3 downto 0) + 6);
    end if;
   
    result_temp2 := (x"000" & (col_result & x"00000")) + result_temp;
---------------------------------------------col6
    col_temp1 := greater(27 downto 24);
    col_temp2 := less(27 downto 24);
	 if B(28) /= A(28) then
		col_temp2 := 9 - ( col_temp2);
	 end if;
    col_result := col_temp1 + col_temp2 + ("000" & carrytemp);
    col_result_temp := ('0' & col_temp1) + ('0' & col_temp2) + ("0000" & carrytemp);
    carrytemp := col_result_temp(4);
    if (carrytemp = '1') or (col_result_temp(3 downto 0) > 9) then
        carrytemp := '1';
        col_result := (col_result_temp(3 downto 0) + 6);
    end if;
   
    result_temp := (x"00" & (col_result & x"000000")) + result_temp2;
----------------------------------------------------------col7
    col_temp1 := greater(31 downto 28);
    col_temp2 := less(31 downto 28);
	 if A(28) = B(28) then
		col_result := ("000" & carrytemp);
	 else
		col_result := "0000";
	 end if;
 --   carrytemp := col_result_temp(4);
 --   if (carrytemp = '1') or (col_result_temp(3 downto 0) > 9) then
 --       carrytemp := '1';
 --       col_result := (col_result_temp(3 downto 0) + 6);
 --   end if;
   
    result_temp2 := (x"0" & (col_result & x"0000000")) + result_temp;
---------------------------------------------col8
    col_result := (("000" & carrytemp) + col_temp1 + col_temp2 );
	 col_result := "0" & col_result(3 downto 1);
	 Carry_out <= '0';
   
    result_temp := (col_result & x"00000000") + result_temp2;
   
    result <= result_temp;
	 if result_temp = 0 then
		Zero <= '1';
	 else
		Zero <= '0';
	 end if;
	 Overflow <= '0';
--------------------------------------------------------------------------------------
when "1100" =>
	 if A(27 downto 0) > B(27 downto 0) then
		greater := A;
		less := B;
	 else
		greater := B;
		less := A;
	 end if;
	 
    col_temp1 := greater(3 downto 0);
    col_temp2 := less(3 downto 0);
	 col_temp2 := 9 - col_temp2;
    col_result_temp := ('0' & col_temp1) + ('0' & col_temp2);
	 col_result_temp := col_result_temp + "00001";
    carrytemp := col_result_temp(4);
	 col_result := col_result_temp(3 downto 0);
    if (carrytemp = '1') or (col_result_temp(3 downto 0) > "1001" ) then
        carrytemp := '1';
        col_result := (col_result_temp(3 downto 0) + 6);
    end if;
   
    result_temp := x"00000000" & col_result;
--------------------------------col1
    col_temp1 := greater(7 downto 4);
    col_temp2 := less(7 downto 4);
	 col_temp2 := 9 - ( col_temp2);
    col_result := col_temp1 + col_temp2 + ("000" & carrytemp);
    col_result_temp := ('0' & col_temp1) + ('0' & col_temp2) + ("0000" & carrytemp);
    carrytemp := col_result_temp(4);
    if (carrytemp = '1') or (col_result_temp(3 downto 0) > 9) then
        carrytemp := '1';
        col_result := (col_result_temp(3 downto 0) + 6);
    end if;
   
    result_temp2 := (x"0000000" & (col_result & x"0")) + result_temp;
-------------------------------------------col2
    col_temp1 := greater(11 downto 8);
    col_temp2 := less(11 downto 8);
	 col_temp2 := 9 - ( col_temp2);
    col_result := col_temp1 + col_temp2 + ("000" & carrytemp);
    col_result_temp := ('0' & col_temp1) + ('0' & col_temp2) + ("0000" & carrytemp);
    carrytemp := col_result_temp(4);
    if (carrytemp = '1') or (col_result_temp(3 downto 0) > 9) then
        carrytemp := '1';
        col_result := (col_result_temp(3 downto 0) + 6);
    end if;
   
    result_temp := (x"000000" & (col_result & x"00")) + result_temp2;
-------------------------------------------------col3
    col_temp1 := greater(15 downto 12);
    col_temp2 := less(15 downto 12);
	 col_temp2 := 9 - ( col_temp2);
    col_result := col_temp1 + col_temp2 + ("000" & carrytemp);
    col_result_temp := ('0' & col_temp1) + ('0' & col_temp2) + ("0000" & carrytemp);
    carrytemp := col_result_temp(4);
    if (carrytemp = '1') or (col_result_temp(3 downto 0) > 9) then
        carrytemp := '1';
        col_result := (col_result_temp(3 downto 0) + 6);
    end if;
   
    result_temp2 := (x"00000" & (col_result & x"000")) + result_temp;
---------------------------------------------col4
    col_temp1 := greater(19 downto 16);
    col_temp2 := less(19 downto 16);
	 col_temp2 := 9 - ( col_temp2);
    col_result := col_temp1 + col_temp2 + ("000" & carrytemp);
    col_result_temp := ('0' & col_temp1) + ('0' & col_temp2) + ("0000" & carrytemp);
    carrytemp := col_result_temp(4);
    if (carrytemp = '1') or (col_result_temp(3 downto 0) > 9) then
        carrytemp := '1';
        col_result := (col_result_temp(3 downto 0) + 6);
    end if;
   
    result_temp := (x"0000" & (col_result & x"0000")) + result_temp2;
----------------------------------------------------------col5
    col_temp1 := greater(23 downto 20);
    col_temp2 := less(23 downto 20);
	 col_temp2 := 9 - ( col_temp2);
    col_result := col_temp1 + col_temp2 + ("000" & carrytemp);
    col_result_temp := ('0' & col_temp1) + ('0' & col_temp2) + ("0000" & carrytemp);
    carrytemp := col_result_temp(4);
    if (carrytemp = '1') or (col_result_temp(3 downto 0) > 9) then
        carrytemp := '1';
        col_result := (col_result_temp(3 downto 0) + 6);
    end if;
   
    result_temp2 := (x"000" & (col_result & x"00000")) + result_temp;
---------------------------------------------col6
    col_temp1 := greater(27 downto 24);
    col_temp2 := less(27 downto 24);
	 col_temp2 := 9 - ( col_temp2);
    col_result := col_temp1 + col_temp2 + ("000" & carrytemp);
    col_result_temp := ('0' & col_temp1) + ('0' & col_temp2) + ("0000" & carrytemp);
    carrytemp := col_result_temp(4);
    if (carrytemp = '1') or (col_result_temp(3 downto 0) > 9) then
        carrytemp := '1';
        col_result := (col_result_temp(3 downto 0) + 6);
    end if;
   
    result_temp := (x"00" & (col_result & x"000000")) + result_temp2;
----------------------------------------------------------col7
    col_temp1 := greater(31 downto 28);
    col_temp2 := less(31 downto 28);
	 col_temp2 := 9 - ( col_temp2);
    col_result := col_temp1 + col_temp2 + ("000" & carrytemp);
    col_result_temp := ('0' & col_temp1) + ('0' & col_temp2) + ("0000" & carrytemp);
    carrytemp := col_result_temp(4);
    if (carrytemp = '1') or (col_result_temp(3 downto 0) > 9) then
        carrytemp := '1';
        col_result := (col_result_temp(3 downto 0) + 6);
    end if;
   
    result_temp2 := (x"0" & (col_result & x"0000000")) + result_temp;
---------------------------------------------col8
    col_result := "0000";
	-- col_result := "0" & col_result(3 downto 1);
	 Carry_out <= '0';
   
    result_temp := (col_result & x"00000000") + result_temp2;
   
    result <= result_temp;
	 if result_temp = 0 then
		Zero <= '1';
	 else
		Zero <= '0';
	 end if;
	 if A < B then
		Overflow <= '1';
	 else
		Overflow <= '0';
	 end if;
	------------------------------------------------------------------------------------

when "1101"=>

	 if A(27 downto 0) > B(27 downto 0) then
		greater := A;
		less := B;
	 else
		greater := B;
		less := A;
	 end if;
	 
    col_temp1 := greater(3 downto 0);
    col_temp2 := less(3 downto 0);
	 if B(28) = A(28) then
		col_temp2 := 9 - col_temp2;
	 end if;
    col_result_temp := ('0' & col_temp1) + ('0' & col_temp2);
	 if B(28) = A(28) then
		col_result_temp := col_result_temp + "00001";
	 end if;
    carrytemp := col_result_temp(4);
	 col_result := col_result_temp(3 downto 0);
    if (carrytemp = '1') or (col_result_temp(3 downto 0) > "1001" ) then
        carrytemp := '1';
        col_result := (col_result_temp(3 downto 0) + 6);
    end if;
   
    result_temp := x"00000000" & col_result;
--------------------------------col1
    col_temp1 := greater(7 downto 4);
    col_temp2 := less(7 downto 4);
	 if B(28) = A(28) then
		col_temp2 := 9 - ( col_temp2);
	 end if;
    col_result := col_temp1 + col_temp2 + ("000" & carrytemp);
    col_result_temp := ('0' & col_temp1) + ('0' & col_temp2) + ("0000" & carrytemp);
    carrytemp := col_result_temp(4);
    if (carrytemp = '1') or (col_result_temp(3 downto 0) > 9) then
        carrytemp := '1';
        col_result := (col_result_temp(3 downto 0) + 6);
    end if;
   
    result_temp2 := (x"0000000" & (col_result & x"0")) + result_temp;
-------------------------------------------col2
    col_temp1 := greater(11 downto 8);
    col_temp2 := less(11 downto 8);
	 if B(28) = A(28) then
		col_temp2 := 9 - ( col_temp2);
	 end if;
    col_result := col_temp1 + col_temp2 + ("000" & carrytemp);
    col_result_temp := ('0' & col_temp1) + ('0' & col_temp2) + ("0000" & carrytemp);
    carrytemp := col_result_temp(4);
    if (carrytemp = '1') or (col_result_temp(3 downto 0) > 9) then
        carrytemp := '1';
        col_result := (col_result_temp(3 downto 0) + 6);
    end if;
   
    result_temp := (x"000000" & (col_result & x"00")) + result_temp2;
-------------------------------------------------col3
    col_temp1 := greater(15 downto 12);
    col_temp2 := less(15 downto 12);
	 if B(28) = A(28) then
		col_temp2 := 9 - ( col_temp2);
	 end if;
    col_result := col_temp1 + col_temp2 + ("000" & carrytemp);
    col_result_temp := ('0' & col_temp1) + ('0' & col_temp2) + ("0000" & carrytemp);
    carrytemp := col_result_temp(4);
    if (carrytemp = '1') or (col_result_temp(3 downto 0) > 9) then
        carrytemp := '1';
        col_result := (col_result_temp(3 downto 0) + 6);
    end if;
   
    result_temp2 := (x"00000" & (col_result & x"000")) + result_temp;
---------------------------------------------col4
    col_temp1 := greater(19 downto 16);
    col_temp2 := less(19 downto 16);
	 if B(28) = A(28) then
		col_temp2 := 9 - ( col_temp2);
	 end if;
    col_result := col_temp1 + col_temp2 + ("000" & carrytemp);
    col_result_temp := ('0' & col_temp1) + ('0' & col_temp2) + ("0000" & carrytemp);
    carrytemp := col_result_temp(4);
    if (carrytemp = '1') or (col_result_temp(3 downto 0) > 9) then
        carrytemp := '1';
        col_result := (col_result_temp(3 downto 0) + 6);
    end if;
   
    result_temp := (x"0000" & (col_result & x"0000")) + result_temp2;
----------------------------------------------------------col5
    col_temp1 := greater(23 downto 20);
    col_temp2 := less(23 downto 20);
	 if B(28) = A(28) then
		col_temp2 := 9 - ( col_temp2);
	 end if;
    col_result := col_temp1 + col_temp2 + ("000" & carrytemp);
    col_result_temp := ('0' & col_temp1) + ('0' & col_temp2) + ("0000" & carrytemp);
    carrytemp := col_result_temp(4);
    if (carrytemp = '1') or (col_result_temp(3 downto 0) > 9) then
        carrytemp := '1';
        col_result := (col_result_temp(3 downto 0) + 6);
    end if;
   
    result_temp2 := (x"000" & (col_result & x"00000")) + result_temp;
---------------------------------------------col6
    col_temp1 := greater(27 downto 24);
    col_temp2 := less(27 downto 24);
	 if B(28) = A(28) then
		col_temp2 := 9 - ( col_temp2);
	 end if;
    col_result := col_temp1 + col_temp2 + ("000" & carrytemp);
    col_result_temp := ('0' & col_temp1) + ('0' & col_temp2) + ("0000" & carrytemp);
    carrytemp := col_result_temp(4);
    if (carrytemp = '1') or (col_result_temp(3 downto 0) > 9) then
        carrytemp := '1';
        col_result := (col_result_temp(3 downto 0) + 6);
    end if;
   
    result_temp := (x"00" & (col_result & x"000000")) + result_temp2;
----------------------------------------------------------col7
    col_temp1 := greater(31 downto 28);
    col_temp2 := less(31 downto 28);
	 if A(28) /= B(28) then
		col_result := ("000" & carrytemp);
	 else
		col_result := "0000";
	 end if;
 --   carrytemp := col_result_temp(4);
 --   if (carrytemp = '1') or (col_result_temp(3 downto 0) > 9) then
 --       carrytemp := '1';
 --       col_result := (col_result_temp(3 downto 0) + 6);
 --   end if;
   
    result_temp2 := (x"0" & (col_result & x"0000000")) + result_temp;
---------------------------------------------col8
    col_result := (("000" & carrytemp) + col_temp1 + col_temp2 );
	 col_result := "0" & col_result(3 downto 1);
	 Carry_out <= '0';
   
    result_temp := (col_result & x"00000000") + result_temp2;
   
    result <= result_temp;
	 if result_temp = 0 then
		Zero <= '1';
	 else
		Zero <= '0';
	 end if;
	 Overflow <= '0';

when others => Result <= "0000" & A;
end case;
   
end process;

end Behavioral;

