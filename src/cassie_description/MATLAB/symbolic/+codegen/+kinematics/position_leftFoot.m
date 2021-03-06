%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
% position_leftFoot
% 
% This file is automatically converted to matlab format from C code.
% Source symbolic expressions exported from FROST:
% 	 https://github.com/ayonga/frost-dev
% 
% Author: Jenna Reher (jreher@caltech.edu)
% Automatically generated on: November 07, 2021 T 02:25
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
function out = position_leftFoot(var1)

  out = zeros(3, 1);

  p_output1 = zeros(3,1);


  t113 = sin(var1(5));
  t193 = sin(var1(7));
  t370 = cos(var1(8));
  t398 = -1.*t370;
  t465 = 1. + t398;
  t624 = sin(var1(8));
  t743 = cos(var1(5));
  t843 = cos(var1(9));
  t852 = -1.*t843;
  t860 = 1. + t852;
  t872 = sin(var1(9));
  t819 = t743*t370;
  t820 = t113*t193*t624;
  t833 = t819 + t820;
  t908 = cos(var1(7));
  t1038 = cos(var1(10));
  t1048 = -1.*t1038;
  t1050 = 1. + t1048;
  t1054 = sin(var1(10));
  t1144 = t843*t833;
  t1154 = t908*t113*t872;
  t1156 = t1144 + t1154;
  t1193 = t908*t843*t113;
  t1196 = -1.*t833*t872;
  t1206 = t1193 + t1196;
  t1217 = cos(var1(11));
  t1219 = -1.*t1217;
  t1220 = 1. + t1219;
  t1223 = sin(var1(11));
  t1231 = -1.*t1054*t1156;
  t1233 = t1038*t1206;
  t1234 = t1231 + t1233;
  t1261 = t1038*t1156;
  t1270 = t1054*t1206;
  t1277 = t1261 + t1270;
  t1289 = cos(var1(12));
  t1295 = -1.*t1289;
  t1302 = 1. + t1295;
  t1315 = sin(var1(12));
  t1330 = t1223*t1234;
  t1331 = t1217*t1277;
  t1333 = t1330 + t1331;
  t1369 = t1217*t1234;
  t1373 = -1.*t1223*t1277;
  t1380 = t1369 + t1373;
  t1395 = cos(var1(14));
  t1403 = -1.*t1395;
  t1415 = 1. + t1403;
  t1436 = sin(var1(14));
  t1447 = -1.*t1315*t1333;
  t1449 = t1289*t1380;
  t1451 = t1447 + t1449;
  t1492 = t1289*t1333;
  t1501 = t1315*t1380;
  t1511 = t1492 + t1501;
  t1563 = cos(var1(4));
  t1567 = sin(var1(4));
  t541 = 0.135*t465;
  t646 = 0.049*t624;
  t701 = t541 + t646;
  t758 = -0.049*t465;
  t776 = 0.135*t624;
  t786 = t758 + t776;
  t1570 = t1563*t908;
  t1571 = -1.*t743*t1567*t193;
  t1573 = t1570 + t1571;
  t866 = -0.049*t860;
  t880 = -0.09*t872;
  t894 = t866 + t880;
  t915 = -0.09*t860;
  t924 = 0.049*t872;
  t934 = t915 + t924;
  t1053 = -0.049*t1050;
  t1055 = -0.21*t1054;
  t1143 = t1053 + t1055;
  t1585 = t370*t1567*t113;
  t1594 = t1573*t624;
  t1595 = t1585 + t1594;
  t1600 = -1.*t743*t908*t1567;
  t1601 = -1.*t1563*t193;
  t1602 = t1600 + t1601;
  t1176 = -0.21*t1050;
  t1185 = 0.049*t1054;
  t1192 = t1176 + t1185;
  t1221 = -0.27068*t1220;
  t1227 = 0.00159*t1223;
  t1229 = t1221 + t1227;
  t1607 = t843*t1595;
  t1611 = t1602*t872;
  t1612 = t1607 + t1611;
  t1614 = t843*t1602;
  t1615 = -1.*t1595*t872;
  t1618 = t1614 + t1615;
  t1237 = -0.00159*t1220;
  t1249 = -0.27068*t1223;
  t1257 = t1237 + t1249;
  t1310 = 0.01841*t1302;
  t1323 = -0.70544*t1315;
  t1329 = t1310 + t1323;
  t1623 = -1.*t1054*t1612;
  t1625 = t1038*t1618;
  t1627 = t1623 + t1625;
  t1629 = t1038*t1612;
  t1631 = t1054*t1618;
  t1632 = t1629 + t1631;
  t1343 = -0.70544*t1302;
  t1361 = -0.01841*t1315;
  t1363 = t1343 + t1361;
  t1424 = -1.11344*t1415;
  t1443 = 0.02159*t1436;
  t1444 = t1424 + t1443;
  t1638 = t1223*t1627;
  t1645 = t1217*t1632;
  t1646 = t1638 + t1645;
  t1650 = t1217*t1627;
  t1652 = -1.*t1223*t1632;
  t1655 = t1650 + t1652;
  t1475 = -0.02159*t1415;
  t1476 = -1.11344*t1436;
  t1485 = t1475 + t1476;
  t1671 = -1.*t1315*t1646;
  t1678 = t1289*t1655;
  t1684 = t1671 + t1678;
  t1695 = t1289*t1646;
  t1700 = t1315*t1655;
  t1707 = t1695 + t1700;
  t1564 = -1.*t908;
  t1565 = 1. + t1564;
  t1760 = t908*t1567;
  t1765 = t1563*t743*t193;
  t1776 = t1760 + t1765;
  t1815 = -1.*t1563*t370*t113;
  t1816 = t1776*t624;
  t1817 = t1815 + t1816;
  t1819 = t1563*t743*t908;
  t1827 = -1.*t1567*t193;
  t1835 = t1819 + t1827;
  t1852 = t843*t1817;
  t1856 = t1835*t872;
  t1865 = t1852 + t1856;
  t1878 = t843*t1835;
  t1884 = -1.*t1817*t872;
  t1888 = t1878 + t1884;
  t1895 = -1.*t1054*t1865;
  t1896 = t1038*t1888;
  t1898 = t1895 + t1896;
  t1900 = t1038*t1865;
  t1902 = t1054*t1888;
  t1903 = t1900 + t1902;
  t1905 = t1223*t1898;
  t1907 = t1217*t1903;
  t1908 = t1905 + t1907;
  t1910 = t1217*t1898;
  t1911 = -1.*t1223*t1903;
  t1912 = t1910 + t1911;
  t1915 = -1.*t1315*t1908;
  t1916 = t1289*t1912;
  t1923 = t1915 + t1916;
  t1925 = t1289*t1908;
  t1927 = t1315*t1912;
  t1928 = t1925 + t1927;
  p_output1(1)=t1143*t1156 + t1192*t1206 + t1229*t1234 + t1257*t1277 + t1329*t1333 + t1363*t1380 + t1444*t1451 + t1485*t1511 + 0.0306*(t1436*t1451 + t1395*t1511) - 1.13106*(t1395*t1451 - 1.*t1436*t1511) - 0.135*t113*t193 + t113*t193*t701 + 0.1305*(t113*t193*t370 - 1.*t624*t743) + t743*t786 + t833*t894 + t113*t908*t934 + var1(1);
  p_output1(2)=0.135*t1563*t1565 + t1143*t1612 + t1192*t1618 + t1229*t1627 + t1257*t1632 + t1329*t1646 + t1363*t1655 + t1444*t1684 + t1485*t1707 + 0.0306*(t1436*t1684 + t1395*t1707) - 1.13106*(t1395*t1684 - 1.*t1436*t1707) + 0.1305*(t1573*t370 - 1.*t113*t1567*t624) + t1573*t701 + 0.135*t1567*t193*t743 + t113*t1567*t786 + t1595*t894 + t1602*t934 + var1(2);
  p_output1(3)=0.135*t1565*t1567 + t1143*t1865 + t1192*t1888 + t1229*t1898 + t1257*t1903 + t1329*t1908 + t1363*t1912 + t1444*t1923 + t1485*t1928 + 0.0306*(t1436*t1923 + t1395*t1928) - 1.13106*(t1395*t1923 - 1.*t1436*t1928) + 0.1305*(t1776*t370 + t113*t1563*t624) + t1776*t701 - 0.135*t1563*t193*t743 - 1.*t113*t1563*t786 + t1817*t894 + t1835*t934 + var1(3);
  out = reshape(p_output1, 3, 1);
end