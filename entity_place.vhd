entity place_b is
port (ck 		: in std_logic ;
	ra0_init, ra1_init 	: in std_logic ;
	activer, desactiver 	: in std_logic ;
	marque 		: out std_logic ;
end place_b;

architecture archi_place of place_b is
begin
	process (ck, ra0_init, ra1_init, activer, desactiver)
	begin
		if (ra0_init = '1') then marque <= '0';
		elsif (ra1_init = '1') then marque <= '1';
		elsif (ck'event and ck = '1') then 
			if (activer = '1') then marque <= '1';
			elsif (desactiver <= '1') then marque <= '0'; 
			end if ;
		end if ;
	end process ;
end archi_place ;

