%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
% J_rightHeel_constraint
% 
% This file is automatically converted to matlab format from C code.
% Source symbolic expressions exported from FROST:
% 	 https://github.com/ayonga/frost-dev
% 
% Author: Jenna Reher (jreher@caltech.edu)
% Automatically generated on: November 07, 2021 T 02:27
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
function out = J_rightHeel_constraint(var1)

  out = zeros(3, 22);

  p_output1 = zeros(66,1);


  t243 = cos(var1(4));
  t488 = cos(var1(6));
  t588 = sin(var1(4));
  t501 = sin(var1(5));
  t590 = sin(var1(6));
  t404 = cos(var1(16));
  t435 = -1.*t404;
  t460 = 1. + t435;
  t474 = sin(var1(16));
  t287 = cos(var1(5));
  t310 = sin(var1(15));
  t640 = cos(var1(15));
  t676 = -1.*t488*t588;
  t682 = -1.*t243*t501*t590;
  t689 = t676 + t682;
  t576 = t243*t488*t501;
  t592 = -1.*t588*t590;
  t596 = t576 + t592;
  t739 = -1.*t243*t287*t310;
  t763 = t640*t689;
  t769 = t739 + t763;
  t778 = cos(var1(17));
  t793 = -1.*t778;
  t828 = 1. + t793;
  t850 = sin(var1(17));
  t875 = -1.*t640*t243*t287;
  t877 = -1.*t310*t689;
  t913 = t875 + t877;
  t980 = t404*t596;
  t986 = t474*t769;
  t992 = t980 + t986;
  t1004 = cos(var1(18));
  t1011 = -1.*t1004;
  t1014 = 1. + t1011;
  t1021 = sin(var1(18));
  t1040 = t850*t913;
  t1049 = t778*t992;
  t1059 = t1040 + t1049;
  t1107 = t778*t913;
  t1110 = -1.*t850*t992;
  t1118 = t1107 + t1110;
  t1127 = cos(var1(19));
  t1132 = -1.*t1127;
  t1140 = 1. + t1132;
  t1144 = sin(var1(19));
  t1160 = -1.*t1021*t1059;
  t1162 = t1004*t1118;
  t1163 = t1160 + t1162;
  t1198 = t1004*t1059;
  t1201 = t1021*t1118;
  t1216 = t1198 + t1201;
  t1226 = cos(var1(20));
  t1236 = -1.*t1226;
  t1248 = 1. + t1236;
  t1298 = sin(var1(20));
  t1323 = t1144*t1163;
  t1324 = t1127*t1216;
  t1325 = t1323 + t1324;
  t1340 = t1127*t1163;
  t1359 = -1.*t1144*t1216;
  t1368 = t1340 + t1359;
  t1381 = cos(var1(22));
  t1389 = -1.*t1381;
  t1394 = 1. + t1389;
  t1398 = sin(var1(22));
  t1408 = -1.*t1298*t1325;
  t1413 = t1226*t1368;
  t1421 = t1408 + t1413;
  t1461 = t1226*t1325;
  t1462 = t1298*t1368;
  t1464 = t1461 + t1462;
  t324 = 0.135*t310;
  t326 = 0. + t324;
  t469 = -0.049*t460;
  t480 = -0.135*t474;
  t482 = 0. + t469 + t480;
  t652 = -1.*t640;
  t659 = 1. + t652;
  t664 = -0.135*t659;
  t669 = 0. + t664;
  t714 = -0.135*t460;
  t718 = 0.049*t474;
  t730 = 0. + t714 + t718;
  t1525 = t243*t488;
  t1526 = -1.*t588*t501*t590;
  t1536 = t1525 + t1526;
  t846 = -0.09*t828;
  t851 = 0.049*t850;
  t855 = 0. + t846 + t851;
  t1509 = t488*t588*t501;
  t1517 = t243*t590;
  t1520 = t1509 + t1517;
  t1540 = -1.*t287*t310*t588;
  t1545 = t640*t1536;
  t1550 = t1540 + t1545;
  t954 = -0.049*t828;
  t968 = -0.09*t850;
  t978 = 0. + t954 + t968;
  t1017 = -0.049*t1014;
  t1024 = -0.21*t1021;
  t1038 = 0. + t1017 + t1024;
  t1557 = -1.*t640*t287*t588;
  t1559 = -1.*t310*t1536;
  t1564 = t1557 + t1559;
  t1595 = t404*t1520;
  t1598 = t474*t1550;
  t1600 = t1595 + t1598;
  t1079 = -0.21*t1014;
  t1098 = 0.049*t1021;
  t1099 = 0. + t1079 + t1098;
  t1143 = -0.27068*t1140;
  t1149 = 0.00159*t1144;
  t1159 = 0. + t1143 + t1149;
  t1612 = t850*t1564;
  t1614 = t778*t1600;
  t1616 = t1612 + t1614;
  t1619 = t778*t1564;
  t1630 = -1.*t850*t1600;
  t1635 = t1619 + t1630;
  t1169 = -0.00159*t1140;
  t1172 = -0.27068*t1144;
  t1177 = 0. + t1169 + t1172;
  t1252 = 0.01841*t1248;
  t1310 = -0.70544*t1298;
  t1316 = 0. + t1252 + t1310;
  t1645 = -1.*t1021*t1616;
  t1646 = t1004*t1635;
  t1650 = t1645 + t1646;
  t1670 = t1004*t1616;
  t1686 = t1021*t1635;
  t1688 = t1670 + t1686;
  t1328 = -0.70544*t1248;
  t1334 = -0.01841*t1298;
  t1335 = 0. + t1328 + t1334;
  t1395 = -1.11344*t1394;
  t1402 = 0.02159*t1398;
  t1404 = 0. + t1395 + t1402;
  t1691 = t1144*t1650;
  t1692 = t1127*t1688;
  t1700 = t1691 + t1692;
  t1704 = t1127*t1650;
  t1705 = -1.*t1144*t1688;
  t1706 = t1704 + t1705;
  t1431 = -0.02159*t1394;
  t1433 = -1.11344*t1398;
  t1451 = 0. + t1431 + t1433;
  t1712 = -1.*t1298*t1700;
  t1713 = t1226*t1706;
  t1716 = t1712 + t1713;
  t1729 = t1226*t1700;
  t1732 = t1298*t1706;
  t1744 = t1729 + t1732;
  t1812 = t287*t310;
  t1814 = t640*t501*t590;
  t1817 = t1812 + t1814;
  t1819 = t640*t287;
  t1823 = -1.*t310*t501*t590;
  t1833 = t1819 + t1823;
  t1848 = -1.*t404*t488*t501;
  t1851 = t474*t1817;
  t1853 = t1848 + t1851;
  t1862 = t850*t1833;
  t1874 = t778*t1853;
  t1884 = t1862 + t1874;
  t1904 = t778*t1833;
  t1906 = -1.*t850*t1853;
  t1907 = t1904 + t1906;
  t1911 = -1.*t1021*t1884;
  t1917 = t1004*t1907;
  t1918 = t1911 + t1917;
  t1929 = t1004*t1884;
  t1931 = t1021*t1907;
  t1932 = t1929 + t1931;
  t1940 = t1144*t1918;
  t1942 = t1127*t1932;
  t1944 = t1940 + t1942;
  t1950 = t1127*t1918;
  t1951 = -1.*t1144*t1932;
  t1952 = t1950 + t1951;
  t1955 = -1.*t1298*t1944;
  t1957 = t1226*t1952;
  t1961 = t1955 + t1957;
  t1965 = t1226*t1944;
  t1966 = t1298*t1952;
  t1968 = t1965 + t1966;
  t2007 = t310*t588*t501;
  t2009 = -1.*t640*t287*t588*t590;
  t2010 = t2007 + t2009;
  t2014 = t640*t588*t501;
  t2015 = t287*t310*t588*t590;
  t2020 = t2014 + t2015;
  t2043 = t404*t287*t488*t588;
  t2044 = t474*t2010;
  t2045 = t2043 + t2044;
  t2054 = t850*t2020;
  t2055 = t778*t2045;
  t2056 = t2054 + t2055;
  t2065 = t778*t2020;
  t2067 = -1.*t850*t2045;
  t2069 = t2065 + t2067;
  t2077 = -1.*t1021*t2056;
  t2081 = t1004*t2069;
  t2087 = t2077 + t2081;
  t2093 = t1004*t2056;
  t2094 = t1021*t2069;
  t2112 = t2093 + t2094;
  t2118 = t1144*t2087;
  t2127 = t1127*t2112;
  t2129 = t2118 + t2127;
  t2142 = t1127*t2087;
  t2145 = -1.*t1144*t2112;
  t2146 = t2142 + t2145;
  t2153 = -1.*t1298*t2129;
  t2162 = t1226*t2146;
  t2163 = t2153 + t2162;
  t2166 = t1226*t2129;
  t2168 = t1298*t2146;
  t2169 = t2166 + t2168;
  t2224 = -1.*t243*t310*t501;
  t2225 = t640*t243*t287*t590;
  t2229 = t2224 + t2225;
  t2235 = -1.*t640*t243*t501;
  t2237 = -1.*t243*t287*t310*t590;
  t2241 = t2235 + t2237;
  t2268 = -1.*t404*t243*t287*t488;
  t2275 = t474*t2229;
  t2281 = t2268 + t2275;
  t2289 = t850*t2241;
  t2292 = t778*t2281;
  t2300 = t2289 + t2292;
  t2311 = t778*t2241;
  t2319 = -1.*t850*t2281;
  t2327 = t2311 + t2319;
  t2336 = -1.*t1021*t2300;
  t2344 = t1004*t2327;
  t2365 = t2336 + t2344;
  t2369 = t1004*t2300;
  t2380 = t1021*t2327;
  t2382 = t2369 + t2380;
  t2393 = t1144*t2365;
  t2396 = t1127*t2382;
  t2398 = t2393 + t2396;
  t2402 = t1127*t2365;
  t2405 = -1.*t1144*t2382;
  t2410 = t2402 + t2405;
  t2414 = -1.*t1298*t2398;
  t2416 = t1226*t2410;
  t2418 = t2414 + t2416;
  t2430 = t1226*t2398;
  t2432 = t1298*t2410;
  t2438 = t2430 + t2432;
  t2512 = -1.*t640*t287*t488*t474;
  t2514 = -1.*t404*t287*t590;
  t2515 = t2512 + t2514;
  t2536 = t287*t488*t310*t850;
  t2539 = t778*t2515;
  t2548 = t2536 + t2539;
  t2552 = t778*t287*t488*t310;
  t2553 = -1.*t850*t2515;
  t2560 = t2552 + t2553;
  t2565 = -1.*t1021*t2548;
  t2566 = t1004*t2560;
  t2573 = t2565 + t2566;
  t2578 = t1004*t2548;
  t2581 = t1021*t2560;
  t2588 = t2578 + t2581;
  t2604 = t1144*t2573;
  t2607 = t1127*t2588;
  t2616 = t2604 + t2607;
  t2620 = t1127*t2573;
  t2625 = -1.*t1144*t2588;
  t2626 = t2620 + t2625;
  t2637 = -1.*t1298*t2616;
  t2639 = t1226*t2626;
  t2641 = t2637 + t2639;
  t2646 = t1226*t2616;
  t2653 = t1298*t2626;
  t2654 = t2646 + t2653;
  t2709 = -1.*t488*t588*t501;
  t2719 = -1.*t243*t590;
  t2720 = t2709 + t2719;
  t2729 = t640*t474*t2720;
  t2732 = t404*t1536;
  t2736 = t2729 + t2732;
  t2754 = -1.*t310*t850*t2720;
  t2755 = t778*t2736;
  t2762 = t2754 + t2755;
  t2766 = -1.*t778*t310*t2720;
  t2778 = -1.*t850*t2736;
  t2787 = t2766 + t2778;
  t2790 = -1.*t1021*t2762;
  t2791 = t1004*t2787;
  t2798 = t2790 + t2791;
  t2802 = t1004*t2762;
  t2809 = t1021*t2787;
  t2813 = t2802 + t2809;
  t2826 = t1144*t2798;
  t2828 = t1127*t2813;
  t2842 = t2826 + t2828;
  t2854 = t1127*t2798;
  t2855 = -1.*t1144*t2813;
  t2875 = t2854 + t2855;
  t2887 = -1.*t1298*t2842;
  t2890 = t1226*t2875;
  t2894 = t2887 + t2890;
  t2900 = t1226*t2842;
  t2904 = t1298*t2875;
  t2909 = t2900 + t2904;
  t2982 = t488*t588;
  t2984 = t243*t501*t590;
  t2986 = t2982 + t2984;
  t2998 = t640*t474*t596;
  t2999 = t404*t2986;
  t3005 = t2998 + t2999;
  t3027 = -1.*t310*t850*t596;
  t3029 = t778*t3005;
  t3047 = t3027 + t3029;
  t3074 = -1.*t778*t310*t596;
  t3075 = -1.*t850*t3005;
  t3076 = t3074 + t3075;
  t3092 = -1.*t1021*t3047;
  t3097 = t1004*t3076;
  t3099 = t3092 + t3097;
  t3103 = t1004*t3047;
  t3108 = t1021*t3076;
  t3110 = t3103 + t3108;
  t3123 = t1144*t3099;
  t3129 = t1127*t3110;
  t3130 = t3123 + t3129;
  t3135 = t1127*t3099;
  t3137 = -1.*t1144*t3110;
  t3138 = t3135 + t3137;
  t3158 = -1.*t1298*t3130;
  t3162 = t1226*t3138;
  t3167 = t3158 + t3162;
  t3177 = t1226*t3130;
  t3185 = t1298*t3138;
  t3187 = t3177 + t3185;
  t3236 = t640*t501;
  t3244 = t287*t310*t590;
  t3245 = t3236 + t3244;
  t3212 = -1.*t310*t501;
  t3215 = t640*t287*t590;
  t3220 = t3212 + t3215;
  t3254 = t850*t3220;
  t3257 = t778*t474*t3245;
  t3264 = t3254 + t3257;
  t3270 = t778*t3220;
  t3272 = -1.*t474*t850*t3245;
  t3276 = t3270 + t3272;
  t3288 = -1.*t1021*t3264;
  t3289 = t1004*t3276;
  t3294 = t3288 + t3289;
  t3300 = t1004*t3264;
  t3303 = t1021*t3276;
  t3308 = t3300 + t3303;
  t3317 = t1144*t3294;
  t3319 = t1127*t3308;
  t3321 = t3317 + t3319;
  t3331 = t1127*t3294;
  t3333 = -1.*t1144*t3308;
  t3336 = t3331 + t3333;
  t3340 = -1.*t1298*t3321;
  t3342 = t1226*t3336;
  t3344 = t3340 + t3342;
  t3346 = t1226*t3321;
  t3349 = t1298*t3336;
  t3351 = t3346 + t3349;
  t3392 = t287*t310*t588;
  t3394 = -1.*t640*t1536;
  t3396 = t3392 + t3394;
  t3412 = t850*t3396;
  t3413 = t778*t474*t1564;
  t3416 = t3412 + t3413;
  t3418 = t778*t3396;
  t3420 = -1.*t474*t850*t1564;
  t3423 = t3418 + t3420;
  t3436 = -1.*t1021*t3416;
  t3437 = t1004*t3423;
  t3439 = t3436 + t3437;
  t3454 = t1004*t3416;
  t3467 = t1021*t3423;
  t3468 = t3454 + t3467;
  t3477 = t1144*t3439;
  t3479 = t1127*t3468;
  t3484 = t3477 + t3479;
  t3488 = t1127*t3439;
  t3491 = -1.*t1144*t3468;
  t3492 = t3488 + t3491;
  t3501 = -1.*t1298*t3484;
  t3504 = t1226*t3492;
  t3506 = t3501 + t3504;
  t3510 = t1226*t3484;
  t3513 = t1298*t3492;
  t3517 = t3510 + t3513;
  t3554 = t640*t243*t287;
  t3555 = -1.*t310*t2986;
  t3562 = t3554 + t3555;
  t3546 = -1.*t640*t2986;
  t3547 = t739 + t3546;
  t3580 = t850*t3547;
  t3581 = t778*t474*t3562;
  t3587 = t3580 + t3581;
  t3590 = t778*t3547;
  t3593 = -1.*t474*t850*t3562;
  t3595 = t3590 + t3593;
  t3605 = -1.*t1021*t3587;
  t3613 = t1004*t3595;
  t3616 = t3605 + t3613;
  t3631 = t1004*t3587;
  t3639 = t1021*t3595;
  t3641 = t3631 + t3639;
  t3645 = t1144*t3616;
  t3646 = t1127*t3641;
  t3647 = t3645 + t3646;
  t3652 = t1127*t3616;
  t3654 = -1.*t1144*t3641;
  t3656 = t3652 + t3654;
  t3663 = -1.*t1298*t3647;
  t3666 = t1226*t3656;
  t3671 = t3663 + t3666;
  t3675 = t1226*t3647;
  t3677 = t1298*t3656;
  t3678 = t3675 + t3677;
  t3709 = t310*t501;
  t3710 = -1.*t640*t287*t590;
  t3712 = t3709 + t3710;
  t3718 = -1.*t287*t488*t474;
  t3725 = t404*t3712;
  t3729 = t3718 + t3725;
  t3746 = -1.*t1004*t850*t3729;
  t3747 = -1.*t778*t1021*t3729;
  t3748 = t3746 + t3747;
  t3753 = t778*t1004*t3729;
  t3761 = -1.*t850*t1021*t3729;
  t3763 = t3753 + t3761;
  t3771 = t1144*t3748;
  t3774 = t1127*t3763;
  t3775 = t3771 + t3774;
  t3778 = t1127*t3748;
  t3784 = -1.*t1144*t3763;
  t3788 = t3778 + t3784;
  t3793 = -1.*t1298*t3775;
  t3794 = t1226*t3788;
  t3795 = t3793 + t3794;
  t3798 = t1226*t3775;
  t3800 = t1298*t3788;
  t3801 = t3798 + t3800;
  t3697 = -0.135*t404;
  t3698 = -0.049*t474;
  t3700 = t3697 + t3698;
  t3702 = 0.049*t404;
  t3707 = t3702 + t480;
  t1572 = -1.*t474*t1520;
  t1576 = t404*t1550;
  t1580 = t1572 + t1576;
  t3847 = -1.*t1004*t850*t1580;
  t3848 = -1.*t778*t1021*t1580;
  t3849 = t3847 + t3848;
  t3851 = t778*t1004*t1580;
  t3854 = -1.*t850*t1021*t1580;
  t3855 = t3851 + t3854;
  t3861 = t1144*t3849;
  t3862 = t1127*t3855;
  t3864 = t3861 + t3862;
  t3869 = t1127*t3849;
  t3870 = -1.*t1144*t3855;
  t3871 = t3869 + t3870;
  t3875 = -1.*t1298*t3864;
  t3876 = t1226*t3871;
  t3879 = t3875 + t3876;
  t3882 = t1226*t3864;
  t3883 = t1298*t3871;
  t3889 = t3882 + t3883;
  t3905 = -1.*t243*t488*t501;
  t3910 = t588*t590;
  t3911 = t3905 + t3910;
  t3914 = t243*t287*t310;
  t3915 = t640*t2986;
  t3917 = t3914 + t3915;
  t3920 = -1.*t474*t3911;
  t3921 = t404*t3917;
  t3923 = t3920 + t3921;
  t3936 = -1.*t1004*t850*t3923;
  t3937 = -1.*t778*t1021*t3923;
  t3938 = t3936 + t3937;
  t3949 = t778*t1004*t3923;
  t3956 = -1.*t850*t1021*t3923;
  t3960 = t3949 + t3956;
  t3971 = t1144*t3938;
  t3975 = t1127*t3960;
  t3976 = t3971 + t3975;
  t3986 = t1127*t3938;
  t3988 = -1.*t1144*t3960;
  t3991 = t3986 + t3988;
  t3998 = -1.*t1298*t3976;
  t4000 = t1226*t3991;
  t4001 = t3998 + t4000;
  t4010 = t1226*t3976;
  t4011 = t1298*t3991;
  t4012 = t4010 + t4011;
  t4051 = t404*t287*t488;
  t4057 = t474*t3712;
  t4065 = t4051 + t4057;
  t4071 = -1.*t850*t3245;
  t4072 = -1.*t778*t4065;
  t4073 = t4071 + t4072;
  t4082 = t778*t3245;
  t4084 = -1.*t850*t4065;
  t4088 = t4082 + t4084;
  t4092 = t1021*t4073;
  t4096 = t1004*t4088;
  t4097 = t4092 + t4096;
  t4100 = t1004*t4073;
  t4102 = -1.*t1021*t4088;
  t4103 = t4100 + t4102;
  t4110 = -1.*t1144*t4097;
  t4111 = t1127*t4103;
  t4114 = t4110 + t4111;
  t4120 = t1127*t4097;
  t4121 = t1144*t4103;
  t4123 = t4120 + t4121;
  t4128 = t1298*t4114;
  t4137 = t1226*t4123;
  t4140 = t4128 + t4137;
  t4151 = t1226*t4114;
  t4152 = -1.*t1298*t4123;
  t4157 = t4151 + t4152;
  t4031 = 0.049*t778;
  t4032 = t4031 + t968;
  t4044 = -0.09*t778;
  t4047 = -0.049*t850;
  t4049 = t4044 + t4047;
  t4192 = -1.*t850*t1564;
  t4195 = -1.*t778*t1600;
  t4196 = t4192 + t4195;
  t4200 = t1021*t4196;
  t4201 = t4200 + t1646;
  t4206 = t1004*t4196;
  t4211 = -1.*t1021*t1635;
  t4212 = t4206 + t4211;
  t4217 = -1.*t1144*t4201;
  t4218 = t1127*t4212;
  t4225 = t4217 + t4218;
  t4228 = t1127*t4201;
  t4229 = t1144*t4212;
  t4233 = t4228 + t4229;
  t4238 = t1298*t4225;
  t4245 = t1226*t4233;
  t4246 = t4238 + t4245;
  t4249 = t1226*t4225;
  t4250 = -1.*t1298*t4233;
  t4256 = t4249 + t4250;
  t4291 = t404*t3911;
  t4293 = t474*t3917;
  t4294 = t4291 + t4293;
  t4298 = -1.*t850*t3562;
  t4299 = -1.*t778*t4294;
  t4302 = t4298 + t4299;
  t4304 = t778*t3562;
  t4307 = -1.*t850*t4294;
  t4308 = t4304 + t4307;
  t4312 = t1021*t4302;
  t4313 = t1004*t4308;
  t4316 = t4312 + t4313;
  t4329 = t1004*t4302;
  t4335 = -1.*t1021*t4308;
  t4341 = t4329 + t4335;
  t4345 = -1.*t1144*t4316;
  t4346 = t1127*t4341;
  t4351 = t4345 + t4346;
  t4356 = t1127*t4316;
  t4357 = t1144*t4341;
  t4361 = t4356 + t4357;
  t4374 = t1298*t4351;
  t4388 = t1226*t4361;
  t4392 = t4374 + t4388;
  t4406 = t1226*t4351;
  t4412 = -1.*t1298*t4361;
  t4413 = t4406 + t4412;
  t4463 = t850*t3245;
  t4466 = t778*t4065;
  t4470 = t4463 + t4466;
  t4487 = -1.*t1021*t4470;
  t4489 = t4487 + t4096;
  t4496 = -1.*t1004*t4470;
  t4499 = t4496 + t4102;
  t4503 = -1.*t1144*t4489;
  t4504 = t1127*t4499;
  t4505 = t4503 + t4504;
  t4508 = t1127*t4489;
  t4509 = t1144*t4499;
  t4510 = t4508 + t4509;
  t4517 = t1298*t4505;
  t4521 = t1226*t4510;
  t4524 = t4517 + t4521;
  t4529 = t1226*t4505;
  t4532 = -1.*t1298*t4510;
  t4533 = t4529 + t4532;
  t4454 = -0.21*t1004;
  t4458 = -0.049*t1021;
  t4460 = t4454 + t4458;
  t4480 = 0.049*t1004;
  t4481 = t4480 + t1024;
  t4555 = -1.*t1004*t1616;
  t4556 = t4555 + t4211;
  t4559 = -1.*t1144*t1650;
  t4561 = t1127*t4556;
  t4563 = t4559 + t4561;
  t4567 = t1144*t4556;
  t4570 = t1704 + t4567;
  t4578 = t1298*t4563;
  t4579 = t1226*t4570;
  t4582 = t4578 + t4579;
  t4586 = t1226*t4563;
  t4587 = -1.*t1298*t4570;
  t4589 = t4586 + t4587;
  t4641 = t850*t3562;
  t4650 = t778*t4294;
  t4652 = t4641 + t4650;
  t4663 = -1.*t1021*t4652;
  t4666 = t4663 + t4313;
  t4674 = -1.*t1004*t4652;
  t4675 = t4674 + t4335;
  t4682 = -1.*t1144*t4666;
  t4683 = t1127*t4675;
  t4685 = t4682 + t4683;
  t4691 = t1127*t4666;
  t4693 = t1144*t4675;
  t4695 = t4691 + t4693;
  t4697 = t1298*t4685;
  t4699 = t1226*t4695;
  t4701 = t4697 + t4699;
  t4705 = t1226*t4685;
  t4706 = -1.*t1298*t4695;
  t4707 = t4705 + t4706;
  t4769 = t1004*t4470;
  t4770 = t1021*t4088;
  t4774 = t4769 + t4770;
  t4779 = -1.*t1127*t4774;
  t4784 = t4503 + t4779;
  t4788 = -1.*t1144*t4774;
  t4793 = t4508 + t4788;
  t4801 = t1298*t4784;
  t4802 = t1226*t4793;
  t4805 = t4801 + t4802;
  t4808 = t1226*t4784;
  t4811 = -1.*t1298*t4793;
  t4814 = t4808 + t4811;
  t4745 = 0.00159*t1127;
  t4751 = t4745 + t1172;
  t4762 = -0.27068*t1127;
  t4766 = -0.00159*t1144;
  t4768 = t4762 + t4766;
  t4841 = -1.*t1127*t1688;
  t4847 = t4559 + t4841;
  t4856 = t1298*t4847;
  t4860 = t4856 + t1713;
  t4883 = t1226*t4847;
  t4884 = -1.*t1298*t1706;
  t4885 = t4883 + t4884;
  t4913 = t1004*t4652;
  t4915 = t1021*t4308;
  t4921 = t4913 + t4915;
  t4930 = -1.*t1127*t4921;
  t4933 = t4682 + t4930;
  t4939 = -1.*t1144*t4921;
  t4943 = t4691 + t4939;
  t4950 = t1298*t4933;
  t4957 = t1226*t4943;
  t4959 = t4950 + t4957;
  t4964 = t1226*t4933;
  t4966 = -1.*t1298*t4943;
  t4971 = t4964 + t4966;
  t5016 = t1144*t4489;
  t5017 = t1127*t4774;
  t5019 = t5016 + t5017;
  t5026 = -1.*t1298*t5019;
  t5028 = t5026 + t4802;
  t5030 = -1.*t1226*t5019;
  t5033 = t5030 + t4811;
  t5006 = -0.70544*t1226;
  t5008 = 0.01841*t1298;
  t5009 = t5006 + t5008;
  t5022 = -0.01841*t1226;
  t5023 = t5022 + t1310;
  t5058 = -1.*t1226*t1700;
  t5060 = t5058 + t4884;
  t1765 = t1381*t1716;
  t5107 = t1144*t4666;
  t5109 = t1127*t4921;
  t5110 = t5107 + t5109;
  t5125 = -1.*t1298*t5110;
  t5133 = t5125 + t4957;
  t5144 = -1.*t1226*t5110;
  t5150 = t5144 + t4966;
  t5035 = -1.*t1398*t5028;
  t5208 = t1226*t5019;
  t5210 = t1298*t4793;
  t5212 = t5208 + t5210;
  t5046 = t1381*t5028;
  t5196 = 0.02159*t1381;
  t5197 = t5196 + t1433;
  t5200 = -1.11344*t1381;
  t5201 = -0.02159*t1398;
  t5207 = t5200 + t5201;
  t5067 = -1.*t1398*t1716;
  t1780 = -1.*t1398*t1744;
  t1787 = t1765 + t1780;
  t5162 = -1.*t1398*t5133;
  t5273 = t1226*t5110;
  t5276 = t1298*t4943;
  t5278 = t5273 + t5276;
  t5179 = t1381*t5133;
  p_output1(1)=1.;
  p_output1(5)=1.;
  p_output1(9)=1.;
  p_output1(11)=t1038*t1059 + t1099*t1118 + t1159*t1163 + t1177*t1216 + t1316*t1325 + t1335*t1368 + t1404*t1421 + t1451*t1464 - 0.014395*(t1398*t1421 + t1381*t1464) - 1.184683*(t1381*t1421 - 1.*t1398*t1464) - 1.*t243*t287*t326 + t482*t596 + t669*t689 + t730*t769 - 0.1305*(-1.*t474*t596 + t404*t769) + t855*t913 + t978*t992;
  p_output1(12)=-0.1305*t1580 + t1038*t1616 + t1099*t1635 + t1159*t1650 + t1177*t1688 + t1316*t1700 + t1335*t1706 + t1404*t1716 + t1451*t1744 - 0.014395*(t1398*t1716 + t1381*t1744) - 1.184683*t1787 + t1520*t482 - 1.*t287*t326*t588 + t1536*t669 + t1550*t730 + t1564*t855 + t1600*t978;
  p_output1(13)=t1038*t1884 + t1099*t1907 + t1159*t1918 + t1177*t1932 + t1316*t1944 + t1335*t1952 + t1404*t1961 + t1451*t1968 - 0.014395*(t1398*t1961 + t1381*t1968) - 1.184683*(t1381*t1961 - 1.*t1398*t1968) + t287*t326 - 1.*t482*t488*t501 - 0.1305*(t1817*t404 + t474*t488*t501) + t501*t590*t669 + t1817*t730 + t1833*t855 + t1853*t978;
  p_output1(14)=t1038*t2056 + t1099*t2069 + t1159*t2087 + t1177*t2112 + t1316*t2129 + t1335*t2146 + t1404*t2163 + t1451*t2169 - 0.014395*(t1398*t2163 + t1381*t2169) - 1.184683*(t1381*t2163 - 1.*t1398*t2169) + t287*t482*t488*t588 + t326*t501*t588 - 0.1305*(t2010*t404 - 1.*t287*t474*t488*t588) - 1.*t287*t588*t590*t669 + t2010*t730 + t2020*t855 + t2045*t978;
  p_output1(15)=t1038*t2300 + t1099*t2327 + t1159*t2365 + t1177*t2382 + t1316*t2398 + t1335*t2410 + t1404*t2418 + t1451*t2438 - 0.014395*(t1398*t2418 + t1381*t2438) - 1.184683*(t1381*t2418 - 1.*t1398*t2438) - 1.*t243*t287*t482*t488 - 0.1305*(t2229*t404 + t243*t287*t474*t488) - 1.*t243*t326*t501 + t243*t287*t590*t669 + t2229*t730 + t2241*t855 + t2281*t978;
  p_output1(16)=t1038*t2548 + t1099*t2560 + t1159*t2573 + t1177*t2588 + t1316*t2616 + t1335*t2626 + t1404*t2641 + t1451*t2654 - 0.014395*(t1398*t2641 + t1381*t2654) - 1.184683*(t1381*t2641 - 1.*t1398*t2654) - 1.*t287*t482*t590 - 0.1305*(t287*t474*t590 - 1.*t287*t404*t488*t640) - 1.*t287*t488*t669 - 1.*t287*t488*t640*t730 + t287*t310*t488*t855 + t2515*t978;
  p_output1(17)=t1038*t2762 + t1099*t2787 + t1159*t2798 + t1177*t2813 + t1316*t2842 + t1335*t2875 + t1404*t2894 + t1451*t2909 - 0.014395*(t1398*t2894 + t1381*t2909) - 1.184683*(t1381*t2894 - 1.*t1398*t2909) + t1536*t482 - 0.1305*(-1.*t1536*t474 + t2720*t404*t640) + t2720*t669 + t2720*t640*t730 - 1.*t2720*t310*t855 + t2736*t978;
  p_output1(18)=t1038*t3047 + t1099*t3076 + t1159*t3099 + t1177*t3110 + t1316*t3130 + t1335*t3138 + t1404*t3167 + t1451*t3187 - 0.014395*(t1398*t3167 + t1381*t3187) - 1.184683*(t1381*t3167 - 1.*t1398*t3187) + t2986*t482 - 0.1305*(-1.*t2986*t474 + t404*t596*t640) + t596*t669 + t596*t640*t730 - 1.*t310*t596*t855 + t3005*t978;
  p_output1(43)=t1038*t3264 + t1099*t3276 + t1159*t3294 + t1177*t3308 + t1316*t3321 + t1335*t3336 + t1404*t3344 + t1451*t3351 - 0.014395*(t1398*t3344 + t1381*t3351) - 1.184683*(t1381*t3344 - 1.*t1398*t3351) - 0.1305*t3245*t404 + 0.135*t287*t310*t590 + 0.135*t501*t640 + t3245*t730 + t3220*t855 + t3245*t474*t978;
  p_output1(44)=-0.135*t1536*t310 + t1038*t3416 + t1099*t3423 + t1159*t3439 + t1177*t3468 + t1316*t3484 + t1335*t3492 + t1404*t3506 + t1451*t3517 - 0.014395*(t1398*t3506 + t1381*t3517) - 1.184683*(t1381*t3506 - 1.*t1398*t3517) - 0.1305*t1564*t404 - 0.135*t287*t588*t640 + t1564*t730 + t3396*t855 + t1564*t474*t978;
  p_output1(45)=-0.135*t2986*t310 + t1038*t3587 + t1099*t3595 + t1159*t3616 + t1177*t3641 + t1316*t3647 + t1335*t3656 + t1404*t3671 + t1451*t3678 - 0.014395*(t1398*t3671 + t1381*t3678) - 1.184683*(t1381*t3671 - 1.*t1398*t3678) - 0.1305*t3562*t404 + 0.135*t243*t287*t640 + t3562*t730 + t3547*t855 + t3562*t474*t978;
  p_output1(46)=t3707*t3712 + t1159*t3748 + t1177*t3763 + t1316*t3775 + t1335*t3788 + t1404*t3795 + t1451*t3801 - 0.014395*(t1398*t3795 + t1381*t3801) - 1.184683*(t1381*t3795 - 1.*t1398*t3801) + t287*t3700*t488 - 0.1305*(-1.*t3712*t474 - 1.*t287*t404*t488) + t1038*t3729*t778 - 1.*t1099*t3729*t850 + t3729*t978;
  p_output1(47)=t1520*t3700 + t1550*t3707 + t1159*t3849 + t1177*t3855 + t1316*t3864 + t1335*t3871 + t1404*t3879 + t1451*t3889 - 0.014395*(t1398*t3879 + t1381*t3889) - 1.184683*(t1381*t3879 - 1.*t1398*t3889) - 0.1305*(-1.*t1520*t404 - 1.*t1550*t474) + t1038*t1580*t778 - 1.*t1099*t1580*t850 + t1580*t978;
  p_output1(48)=t3700*t3911 + t3707*t3917 + t1159*t3938 + t1177*t3960 + t1316*t3976 + t1335*t3991 + t1404*t4001 + t1451*t4012 - 0.014395*(t1398*t4001 + t1381*t4012) - 1.184683*(t1381*t4001 - 1.*t1398*t4012) - 0.1305*(-1.*t3911*t404 - 1.*t3917*t474) + t1038*t3923*t778 - 1.*t1099*t3923*t850 + t3923*t978;
  p_output1(49)=t3245*t4032 + t4049*t4065 + t1099*t4073 + t1038*t4088 + t1177*t4097 + t1159*t4103 + t1335*t4114 + t1316*t4123 + t1451*t4140 + t1404*t4157 - 1.184683*(-1.*t1398*t4140 + t1381*t4157) - 0.014395*(t1381*t4140 + t1398*t4157);
  p_output1(50)=t1038*t1635 + t1564*t4032 + t1600*t4049 + t1099*t4196 + t1177*t4201 + t1159*t4212 + t1335*t4225 + t1316*t4233 + t1451*t4246 + t1404*t4256 - 1.184683*(-1.*t1398*t4246 + t1381*t4256) - 0.014395*(t1381*t4246 + t1398*t4256);
  p_output1(51)=t3562*t4032 + t4049*t4294 + t1099*t4302 + t1038*t4308 + t1177*t4316 + t1159*t4341 + t1335*t4351 + t1316*t4361 + t1451*t4392 + t1404*t4413 - 1.184683*(-1.*t1398*t4392 + t1381*t4413) - 0.014395*(t1381*t4392 + t1398*t4413);
  p_output1(52)=t4460*t4470 + t4088*t4481 + t1177*t4489 + t1159*t4499 + t1335*t4505 + t1316*t4510 + t1451*t4524 + t1404*t4533 - 1.184683*(-1.*t1398*t4524 + t1381*t4533) - 0.014395*(t1381*t4524 + t1398*t4533);
  p_output1(53)=t1177*t1650 + t1616*t4460 + t1635*t4481 + t1159*t4556 + t1335*t4563 + t1316*t4570 + t1451*t4582 + t1404*t4589 - 1.184683*(-1.*t1398*t4582 + t1381*t4589) - 0.014395*(t1381*t4582 + t1398*t4589);
  p_output1(54)=t4308*t4481 + t4460*t4652 + t1177*t4666 + t1159*t4675 + t1335*t4685 + t1316*t4695 + t1451*t4701 + t1404*t4707 - 1.184683*(-1.*t1398*t4701 + t1381*t4707) - 0.014395*(t1381*t4701 + t1398*t4707);
  p_output1(55)=t4489*t4751 + t4768*t4774 + t1335*t4784 + t1316*t4793 + t1451*t4805 + t1404*t4814 - 1.184683*(-1.*t1398*t4805 + t1381*t4814) - 0.014395*(t1381*t4805 + t1398*t4814);
  p_output1(56)=t1316*t1706 + t1650*t4751 + t1688*t4768 + t1335*t4847 + t1451*t4860 + t1404*t4885 - 1.184683*(-1.*t1398*t4860 + t1381*t4885) - 0.014395*(t1381*t4860 + t1398*t4885);
  p_output1(57)=t4666*t4751 + t4768*t4921 + t1335*t4933 + t1316*t4943 + t1451*t4959 + t1404*t4971 - 1.184683*(-1.*t1398*t4959 + t1381*t4971) - 0.014395*(t1381*t4959 + t1398*t4971);
  p_output1(58)=t5009*t5019 + t4793*t5023 + t1451*t5028 + t1404*t5033 - 1.184683*(t1381*t5033 + t5035) - 0.014395*(t1398*t5033 + t5046);
  p_output1(59)=t1451*t1716 + t1700*t5009 + t1706*t5023 + t1404*t5060 - 0.014395*(t1765 + t1398*t5060) - 1.184683*(t1381*t5060 + t5067);
  p_output1(60)=t4943*t5023 + t5009*t5110 + t1451*t5133 + t1404*t5150 - 1.184683*(t1381*t5150 + t5162) - 0.014395*(t1398*t5150 + t5179);
  p_output1(64)=t5028*t5197 + t5207*t5212 - 1.184683*(t5035 - 1.*t1381*t5212) - 0.014395*(t5046 - 1.*t1398*t5212);
  p_output1(65)=-0.014395*t1787 - 1.184683*(-1.*t1381*t1744 + t5067) + t1716*t5197 + t1744*t5207;
  p_output1(66)=t5133*t5197 + t5207*t5278 - 1.184683*(t5162 - 1.*t1381*t5278) - 0.014395*(t5179 - 1.*t1398*t5278);
  out = reshape(p_output1, 3, 22);
end