%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
% leftLegRoll
% 
% This file is automatically converted to matlab format from C code.
% Source symbolic expressions exported from FROST:
% 	 https://github.com/ayonga/frost-dev
% 
% Author: Jenna Reher (jreher@caltech.edu)
% Automatically generated on: November 07, 2021 T 02:28
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
function out = leftLegRoll(var1)

  out = zeros(1, 1);

  p_output1 = zeros(1,1);


  t26 = cos(var1(4));
  t72 = cos(var1(7));
  t98 = sin(var1(4));
  t125 = t72*t98;
  t126 = cos(var1(5));
  t145 = sin(var1(7));
  t148 = t26*t126*t145;
  t155 = t125 + t148;
  t45 = sin(var1(5));
  t160 = cos(var1(8));
  t181 = -1.*t160;
  t193 = 1. + t181;
  t211 = sin(var1(8));
  t317 = cos(var1(9));
  t359 = -1.*t317;
  t370 = 1. + t359;
  t387 = sin(var1(9));
  t305 = -1.*t26*t160*t45;
  t308 = t155*t211;
  t314 = t305 + t308;
  t467 = t26*t126*t72;
  t475 = -1.*t98*t145;
  t504 = t467 + t475;
  t531 = cos(var1(10));
  t533 = -1.*t531;
  t535 = 1. + t533;
  t552 = sin(var1(10));
  t696 = -1.*var1(10);
  t700 = 0.226893 + t696;
  t567 = t317*t314;
  t570 = t504*t387;
  t572 = t567 + t570;
  t634 = t317*t504;
  t663 = -1.*t314*t387;
  t665 = t634 + t663;
  t703 = cos(t700);
  t708 = -1.*t703;
  t709 = 1. + t708;
  t730 = sin(t700);
  t774 = -1.*t552*t572;
  t775 = t531*t665;
  t781 = t774 + t775;
  t830 = t531*t572;
  t842 = t552*t665;
  t848 = t830 + t842;
  t872 = cos(var1(14));
  t878 = -1.*t872;
  t931 = 1. + t878;
  t944 = sin(var1(14));
  t964 = t730*t781;
  t965 = t703*t848;
  t967 = t964 + t965;
  t976 = t703*t781;
  t977 = -1.*t730*t848;
  t979 = t976 + t977;
  t1036 = t26*t72;
  t1037 = -1.*t126*t98*t145;
  t1044 = t1036 + t1037;
  t201 = 0.135*t193;
  t216 = 0.049*t211;
  t224 = t201 + t216;
  t230 = -0.049*t193;
  t232 = 0.135*t211;
  t238 = t230 + t232;
  t383 = -0.049*t370;
  t415 = -0.09*t387;
  t437 = t383 + t415;
  t506 = -0.09*t370;
  t512 = 0.049*t387;
  t518 = t506 + t512;
  t539 = -0.049*t535;
  t559 = -0.21*t552;
  t563 = t539 + t559;
  t1104 = t160*t98*t45;
  t1112 = t1044*t211;
  t1115 = t1104 + t1112;
  t1119 = -1.*t126*t72*t98;
  t1120 = -1.*t26*t145;
  t1128 = t1119 + t1120;
  t600 = -0.21*t535;
  t603 = 0.049*t552;
  t616 = t600 + t603;
  t721 = -0.70544*t709;
  t758 = -0.01841*t730;
  t771 = t721 + t758;
  t1146 = t317*t1115;
  t1154 = t1128*t387;
  t1161 = t1146 + t1154;
  t1171 = t317*t1128;
  t1184 = -1.*t1115*t387;
  t1190 = t1171 + t1184;
  t788 = 0.01841*t709;
  t789 = -0.70544*t730;
  t820 = t788 + t789;
  t934 = -0.02159*t931;
  t959 = -1.11344*t944;
  t960 = t934 + t959;
  t1197 = -1.*t552*t1161;
  t1202 = t531*t1190;
  t1206 = t1197 + t1202;
  t1215 = t531*t1161;
  t1236 = t552*t1190;
  t1237 = t1215 + t1236;
  t971 = -1.11344*t931;
  t972 = 0.02159*t944;
  t975 = t971 + t972;
  t1242 = t730*t1206;
  t1248 = t703*t1237;
  t1254 = t1242 + t1248;
  t1259 = t703*t1206;
  t1265 = -1.*t730*t1237;
  t1269 = t1259 + t1265;
  p_output1(1)=Arctan(0.135*t155 - 1.*t155*t224 - 1.*t314*t437 + 0.049*t26*t45 + t238*t26*t45 - 0.1305*(t155*t160 + t211*t26*t45) - 1.*t504*t518 - 1.*t563*t572 - 1.*t616*t665 - 1.*t771*t781 - 1.*t820*t848 - 1.*t960*t967 - 1.*t975*t979 + 1.11344*(-1.*t944*t967 + t872*t979) + 0.02159*(t872*t967 + t944*t979),-0.135*t1044 + t1044*t224 + t1115*t437 + t1128*t518 + t1161*t563 + t1190*t616 + t1206*t771 + t1237*t820 - 1.11344*(t1269*t872 - 1.*t1254*t944) - 0.02159*(t1254*t872 + t1269*t944) + t1254*t960 + t1269*t975 + 0.049*t45*t98 + t238*t45*t98 + 0.1305*(t1044*t160 - 1.*t211*t45*t98));
  out = reshape(p_output1, 1, 1);
end