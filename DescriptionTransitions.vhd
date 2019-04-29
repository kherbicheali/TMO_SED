------bloc F-------
a_p2 <= '1' when (p4='1' and Po='0') else '0';
d_p2 <= '1' when (p2='1' and p1='1' and  Accept='1' and Po='1') else '0';

a_p1 <= '1' when (p3='1' and Cancel='1') else '0';
d_p1 <= '1' when (p1='1' and  Accept='1' and Po='0')  or  (p2='1' and p1='1' and  Accept='1' and Po='1') else '0';

a_p3 <= '1' when (p1='1' and Accept='1' and Po='0') or (p2='1' and p1='1' and Accept='1' and Po='1') else '0';
d_p3 <= '1' when (p3='1' and  Cancel='1') else '0';

a_p4 <= '1' when (p2='1' and p1='1' and Accept='1' and Po='1') else '0';
d_p4 <= '1' when (p4='1' and  Po='0') else '0';

--marquage:

place_p2: place_b port map (ck, r_p2, s_p2, a_p2, d_p2, p2);
place_p1: place_b port map (ck, r_p1, s_p1, a_p1, d_p1, p1);
place_p3: place_b port map (ck, r_p3, s_p3, a_p3, d_p3, p3);
place_p4: place_b port map (ck, r_p4, s_p4, a_p4, d_p4, p4);
