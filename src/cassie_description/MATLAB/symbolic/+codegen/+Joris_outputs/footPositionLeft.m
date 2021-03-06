%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
% footPositionLeft
% 
% This file is automatically converted to matlab format from C code.
% Source symbolic expressions exported from FROST:
% 	 https://github.com/ayonga/frost-dev
% 
% Author: Jenna Reher (jreher@caltech.edu)
% Automatically generated on: January 01, 2022 T 02:48
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
function out = footPositionLeft(var1)

  out = zeros(1, 3);

  p_output1 = zeros(3,1);


  t3 = cos(var1(2));
  t7 = cos(var1(3));
  t8 = cos(var1(4));
  t9 = -1.*t8;
  t10 = 1. + t9;
  t12 = sin(var1(4));
  t21 = sin(var1(3));
  t29 = cos(var1(6));
  t30 = -1.*t29;
  t31 = 1. + t30;
  t33 = sin(var1(6));
  t36 = -1.*t3*t7*t12;
  t37 = -1.*t8*t3*t21;
  t38 = t36 + t37;
  t43 = t8*t3*t7;
  t44 = -1.*t3*t12*t21;
  t45 = t43 + t44;
  t47 = cos(var1(7));
  t48 = -1.*t47;
  t49 = 1. + t48;
  t51 = sin(var1(7));
  t54 = t33*t38;
  t55 = t29*t45;
  t56 = t54 + t55;
  t61 = t29*t38;
  t62 = -1.*t33*t45;
  t63 = t61 + t62;
  t74 = cos(var1(1));
  t4 = -1.*t3;
  t5 = 1. + t4;
  t16 = sin(var1(2));
  t18 = -1.*t7;
  t19 = 1. + t18;
  t20 = -0.049*t19;
  t22 = -0.09*t21;
  t23 = t20 + t22;
  t11 = -0.049*t10;
  t13 = -0.21*t12;
  t14 = t11 + t13;
  t84 = sin(var1(1));
  t25 = -0.21*t10;
  t26 = 0.049*t12;
  t27 = t25 + t26;
  t32 = -0.70544*t31;
  t34 = -0.01841*t33;
  t35 = t32 + t34;
  t89 = t74*t7*t16;
  t90 = -1.*t84*t21;
  t91 = t89 + t90;
  t93 = -1.*t7*t84;
  t94 = -1.*t74*t16*t21;
  t95 = t93 + t94;
  t40 = 0.01841*t31;
  t41 = -0.70544*t33;
  t42 = t40 + t41;
  t50 = -0.02159*t49;
  t52 = -1.11344*t51;
  t53 = t50 + t52;
  t97 = -1.*t12*t91;
  t98 = t8*t95;
  t99 = t97 + t98;
  t101 = t8*t91;
  t102 = t12*t95;
  t103 = t101 + t102;
  t58 = -1.11344*t49;
  t59 = 0.02159*t51;
  t60 = t58 + t59;
  t105 = t33*t99;
  t106 = t29*t103;
  t107 = t105 + t106;
  t109 = t29*t99;
  t110 = -1.*t33*t103;
  t111 = t109 + t110;
  t79 = 0.135*t5;
  t80 = 0.049*t16;
  t81 = t79 + t80;
  t85 = -0.09*t19;
  t86 = 0.049*t21;
  t87 = t85 + t86;
  t127 = t7*t84*t16;
  t128 = t74*t21;
  t129 = t127 + t128;
  t131 = t74*t7;
  t132 = -1.*t84*t16*t21;
  t133 = t131 + t132;
  t135 = -1.*t12*t129;
  t136 = t8*t133;
  t137 = t135 + t136;
  t139 = t8*t129;
  t140 = t12*t133;
  t141 = t139 + t140;
  t143 = t33*t137;
  t144 = t29*t141;
  t145 = t143 + t144;
  t147 = t29*t137;
  t148 = -1.*t33*t141;
  t149 = t147 + t148;
  p_output1(1)=0.0045*t16 + t23*t3 - 1.*t21*t27*t3 + t35*t38 + t42*t45 - 0.049*t5 + t53*t56 + t60*t63 - 1.13106*(-1.*t51*t56 + t47*t63) + 0.0306*(t47*t56 + t51*t63) + t14*t3*t7;
  p_output1(2)=t103*t42 - 1.13106*(t111*t47 - 1.*t107*t51) + 0.0306*(t107*t47 + t111*t51) + t107*t53 + t111*t60 + 0.135*(1. - 1.*t74) + t16*t23*t74 + 0.1305*t3*t74 + t74*t81 - 1.*t84*t87 + t14*t91 + t27*t95 + t35*t99;
  p_output1(3)=t129*t14 + t133*t27 + t137*t35 + t141*t42 - 1.13106*(t149*t47 - 1.*t145*t51) + 0.0306*(t145*t47 + t149*t51) + t145*t53 + t149*t60 - 0.135*t84 + t16*t23*t84 + 0.1305*t3*t84 + t81*t84 + t74*t87;
  out = reshape(p_output1, 1, 3);
end