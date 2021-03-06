/*
 * Automatically Generated from Mathematica.
 * Thu 23 Dec 2021 16:09:38 GMT-08:00
 */

#ifdef MATLAB_MEX_FILE
// No need to include header
#else
#include "Dya_pelvis_leftFoot.hh"
#endif

#ifdef MATLAB_MEX_FILE
#include <stdexcept>
#include <cmath>
#include<math.h>
/**
 * Copied from Wolfram Mathematica C Definitions file mdefs.hpp
 * Changed marcos to inline functions (Eric Cousineau)
 */
inline double Power(double x, double y) { return pow(x, y); }
inline double Sqrt(double x) { return sqrt(x); }

inline double Abs(double x) { return fabs(x); }

inline double Exp(double x) { return exp(x); }
inline double Log(double x) { return log(x); }

inline double Sin(double x) { return sin(x); }
inline double Cos(double x) { return cos(x); }
inline double Tan(double x) { return tan(x); }

inline double ArcSin(double x) { return asin(x); }
inline double ArcCos(double x) { return acos(x); }
inline double ArcTan(double x) { return atan(x); }

/* update ArcTan function to use atan2 instead. */
inline double ArcTan(double x, double y) { return atan2(y,x); }

inline double Sinh(double x) { return sinh(x); }
inline double Cosh(double x) { return cosh(x); }
inline double Tanh(double x) { return tanh(x); }

const double E	= 2.71828182845904523536029;
const double Pi = 3.14159265358979323846264;
const double Degree = 0.01745329251994329576924;

inline double Sec(double x) { return 1/cos(x); }
inline double Csc(double x) { return 1/sin(x); }

#endif

/*
 * Sub functions
 */
static void output1(double *p_output1,const double *var1)
{
  double t110;
  double t25;
  double t71;
  double t73;
  double t112;
  double t171;
  double t176;
  double t325;
  double t439;
  double t571;
  double t699;
  double t741;
  double t750;
  double t835;
  double t839;
  double t880;
  double t893;
  double t1160;
  double t1164;
  double t1171;
  double t1209;
  double t1075;
  double t1131;
  double t1134;
  double t1248;
  double t1253;
  double t1281;
  double t1371;
  double t1379;
  double t1383;
  double t1419;
  double t1445;
  double t1456;
  double t1460;
  double t1502;
  double t1534;
  double t1570;
  double t1573;
  double t1580;
  double t1596;
  double t1599;
  double t1615;
  double t1618;
  double t1627;
  double t1659;
  double t1661;
  double t1697;
  double t1739;
  double t1752;
  double t1758;
  double t1769;
  double t1795;
  double t1799;
  double t1801;
  double t1851;
  double t1859;
  double t1861;
  double t379;
  double t395;
  double t446;
  double t449;
  double t2075;
  double t2088;
  double t2090;
  double t881;
  double t910;
  double t941;
  double t964;
  double t980;
  double t1007;
  double t1194;
  double t1221;
  double t1235;
  double t1297;
  double t1304;
  double t1308;
  double t1387;
  double t1432;
  double t1438;
  double t2120;
  double t2128;
  double t2159;
  double t2166;
  double t2170;
  double t2172;
  double t1464;
  double t1484;
  double t1498;
  double t1597;
  double t1607;
  double t1608;
  double t2192;
  double t2193;
  double t2198;
  double t2222;
  double t2229;
  double t2234;
  double t1639;
  double t1640;
  double t1644;
  double t1759;
  double t1786;
  double t1794;
  double t2260;
  double t2268;
  double t2300;
  double t2325;
  double t2358;
  double t2373;
  double t1835;
  double t1836;
  double t1850;
  double t2378;
  double t2386;
  double t2401;
  double t2473;
  double t2477;
  double t2479;
  double t2690;
  double t2699;
  double t2700;
  double t2712;
  double t2718;
  double t2723;
  double t2734;
  double t2739;
  double t2741;
  double t2766;
  double t2808;
  double t2814;
  double t2845;
  double t2860;
  double t2870;
  double t2883;
  double t2894;
  double t2900;
  double t2904;
  double t2932;
  double t2943;
  double t3188;
  double t3191;
  double t3201;
  double t3226;
  double t3260;
  double t3269;
  double t3284;
  double t3285;
  double t3288;
  double t3296;
  double t3300;
  double t3301;
  double t3337;
  double t3341;
  double t3348;
  double t3375;
  double t3378;
  double t3379;
  double t3389;
  double t3427;
  double t3428;
  double t3637;
  double t3645;
  double t3656;
  double t3711;
  double t3725;
  double t3748;
  double t3777;
  double t3778;
  double t3811;
  double t3879;
  double t3896;
  double t3898;
  double t3918;
  double t3957;
  double t3960;
  double t4036;
  double t4044;
  double t4076;
  double t4098;
  double t4128;
  double t4130;
  double t4498;
  double t4512;
  double t4528;
  double t4616;
  double t4621;
  double t4624;
  double t4649;
  double t4651;
  double t4652;
  double t4668;
  double t4674;
  double t4689;
  double t4704;
  double t4719;
  double t4721;
  double t4733;
  double t4776;
  double t4779;
  double t5022;
  double t5041;
  double t5050;
  double t5087;
  double t5093;
  double t5094;
  double t5100;
  double t5104;
  double t5140;
  double t5143;
  double t5158;
  double t5162;
  double t5171;
  double t5224;
  double t5227;
  double t5235;
  double t5239;
  double t5247;
  double t5298;
  double t5300;
  double t5315;
  double t5470;
  double t5485;
  double t5487;
  double t5540;
  double t5555;
  double t5576;
  double t5603;
  double t5604;
  double t5607;
  double t5639;
  double t5640;
  double t5670;
  double t5676;
  double t5678;
  double t5680;
  double t5699;
  double t5709;
  double t5713;
  double t5720;
  double t5725;
  double t5728;
  double t5774;
  double t5775;
  double t5776;
  double t5784;
  double t5785;
  double t5795;
  double t5806;
  double t5822;
  double t5832;
  double t5841;
  double t5850;
  double t5854;
  double t5860;
  double t5874;
  double t5876;
  double t5752;
  double t5753;
  double t5761;
  double t5765;
  double t5768;
  double t2110;
  double t2117;
  double t2118;
  double t5969;
  double t5970;
  double t5973;
  double t5986;
  double t5987;
  double t5991;
  double t5994;
  double t6013;
  double t6015;
  double t6018;
  double t6019;
  double t6020;
  double t6057;
  double t6058;
  double t6061;
  double t6071;
  double t6074;
  double t6080;
  double t6112;
  double t6113;
  double t6117;
  double t6121;
  double t6126;
  double t6128;
  double t6138;
  double t6139;
  double t6147;
  double t6149;
  double t6160;
  double t6161;
  double t6194;
  double t6197;
  double t6199;
  double t6222;
  double t6225;
  double t6226;
  double t6230;
  double t6233;
  double t6238;
  double t6242;
  double t6246;
  double t6248;
  double t6256;
  double t6260;
  double t6261;
  double t6269;
  double t6272;
  double t6273;
  double t6277;
  double t6280;
  double t6285;
  double t6186;
  double t6190;
  double t6202;
  double t6203;
  double t6207;
  double t6330;
  double t6335;
  double t6336;
  double t6349;
  double t6352;
  double t6362;
  double t6365;
  double t6369;
  double t6373;
  double t6374;
  double t6375;
  double t6378;
  double t6379;
  double t6381;
  double t6396;
  double t6410;
  double t6414;
  double t6418;
  double t6423;
  double t6426;
  double t6431;
  double t6437;
  double t6446;
  double t6450;
  double t6453;
  double t6454;
  double t6462;
  double t6465;
  double t6466;
  double t6471;
  double t6472;
  double t6473;
  double t6475;
  double t6476;
  double t6478;
  double t6500;
  double t6503;
  double t6504;
  double t6509;
  double t6510;
  double t6512;
  double t6513;
  double t6522;
  double t6525;
  double t6530;
  double t6534;
  double t6537;
  double t6538;
  double t6496;
  double t6497;
  double t6499;
  double t6506;
  double t6507;
  double t6607;
  double t6611;
  double t6615;
  double t6620;
  double t6623;
  double t6628;
  double t6629;
  double t6663;
  double t6667;
  double t6668;
  double t6671;
  double t6672;
  double t6676;
  double t6677;
  double t6684;
  double t6686;
  double t6688;
  double t6690;
  double t6692;
  double t6693;
  double t6734;
  double t6735;
  double t6738;
  double t6742;
  double t6747;
  double t6757;
  double t6761;
  double t6708;
  double t6709;
  double t6714;
  double t6723;
  double t6731;
  double t6800;
  double t6811;
  double t2483;
  double t6836;
  double t6839;
  double t6840;
  double t6847;
  double t6848;
  double t6852;
  double t6853;
  double t6906;
  double t6909;
  double t6910;
  double t6768;
  double t6779;
  double t6898;
  double t6902;
  double t6905;
  double t6918;
  double t6920;
  double t2482;
  double t2497;
  double t6818;
  double t6968;
  double t6969;
  double t6970;
  double t6871;
  double t6879;
  t110 = Cos(var1[3]);
  t25 = Cos(var1[5]);
  t71 = Sin(var1[3]);
  t73 = Sin(var1[4]);
  t112 = Sin(var1[5]);
  t171 = Cos(var1[4]);
  t176 = Sin(var1[14]);
  t325 = Cos(var1[14]);
  t439 = Cos(var1[6]);
  t571 = Sin(var1[6]);
  t699 = -1.*t439*t71;
  t741 = -1.*t110*t171*t571;
  t750 = t699 + t741;
  t835 = Cos(var1[7]);
  t839 = -1.*t835;
  t880 = 1. + t839;
  t893 = Sin(var1[7]);
  t1160 = Cos(var1[8]);
  t1164 = -1.*t1160;
  t1171 = 1. + t1164;
  t1209 = Sin(var1[8]);
  t1075 = t110*t835*t73;
  t1131 = t750*t893;
  t1134 = t1075 + t1131;
  t1248 = -1.*t110*t171*t439;
  t1253 = t71*t571;
  t1281 = t1248 + t1253;
  t1371 = Cos(var1[9]);
  t1379 = -1.*t1371;
  t1383 = 1. + t1379;
  t1419 = Sin(var1[9]);
  t1445 = t1160*t1134;
  t1456 = t1281*t1209;
  t1460 = t1445 + t1456;
  t1502 = t1160*t1281;
  t1534 = -1.*t1134*t1209;
  t1570 = t1502 + t1534;
  t1573 = Cos(var1[11]);
  t1580 = -1.*t1573;
  t1596 = 1. + t1580;
  t1599 = Sin(var1[11]);
  t1615 = -1.*t1419*t1460;
  t1618 = t1371*t1570;
  t1627 = t1615 + t1618;
  t1659 = t1371*t1460;
  t1661 = t1419*t1570;
  t1697 = t1659 + t1661;
  t1739 = Cos(var1[13]);
  t1752 = -1.*t1739;
  t1758 = 1. + t1752;
  t1769 = Sin(var1[13]);
  t1795 = t1599*t1627;
  t1799 = t1573*t1697;
  t1801 = t1795 + t1799;
  t1851 = t1573*t1627;
  t1859 = -1.*t1599*t1697;
  t1861 = t1851 + t1859;
  t379 = -1.*t325;
  t395 = 1. + t379;
  t446 = -1.*t439;
  t449 = 1. + t446;
  t2075 = t110*t439;
  t2088 = -1.*t171*t71*t571;
  t2090 = t2075 + t2088;
  t881 = 0.135*t880;
  t910 = 0.049*t893;
  t941 = t881 + t910;
  t964 = -0.049*t880;
  t980 = 0.135*t893;
  t1007 = t964 + t980;
  t1194 = -0.049*t1171;
  t1221 = -0.09*t1209;
  t1235 = t1194 + t1221;
  t1297 = -0.09*t1171;
  t1304 = 0.049*t1209;
  t1308 = t1297 + t1304;
  t1387 = -0.049*t1383;
  t1432 = -0.21*t1419;
  t1438 = t1387 + t1432;
  t2120 = t835*t71*t73;
  t2128 = t2090*t893;
  t2159 = t2120 + t2128;
  t2166 = -1.*t171*t439*t71;
  t2170 = -1.*t110*t571;
  t2172 = t2166 + t2170;
  t1464 = -0.21*t1383;
  t1484 = 0.049*t1419;
  t1498 = t1464 + t1484;
  t1597 = -0.70544*t1596;
  t1607 = -0.01841*t1599;
  t1608 = t1597 + t1607;
  t2192 = t1160*t2159;
  t2193 = t2172*t1209;
  t2198 = t2192 + t2193;
  t2222 = t1160*t2172;
  t2229 = -1.*t2159*t1209;
  t2234 = t2222 + t2229;
  t1639 = 0.01841*t1596;
  t1640 = -0.70544*t1599;
  t1644 = t1639 + t1640;
  t1759 = -0.02159*t1758;
  t1786 = -1.11344*t1769;
  t1794 = t1759 + t1786;
  t2260 = -1.*t1419*t2198;
  t2268 = t1371*t2234;
  t2300 = t2260 + t2268;
  t2325 = t1371*t2198;
  t2358 = t1419*t2234;
  t2373 = t2325 + t2358;
  t1835 = -1.11344*t1758;
  t1836 = 0.02159*t1769;
  t1850 = t1835 + t1836;
  t2378 = t1599*t2300;
  t2386 = t1573*t2373;
  t2401 = t2378 + t2386;
  t2473 = t1573*t2300;
  t2477 = -1.*t1599*t2373;
  t2479 = t2473 + t2477;
  t2690 = -1.*t835*t73;
  t2699 = t171*t571*t893;
  t2700 = t2690 + t2699;
  t2712 = t1160*t2700;
  t2718 = t171*t439*t1209;
  t2723 = t2712 + t2718;
  t2734 = t171*t439*t1160;
  t2739 = -1.*t2700*t1209;
  t2741 = t2734 + t2739;
  t2766 = -1.*t1419*t2723;
  t2808 = t1371*t2741;
  t2814 = t2766 + t2808;
  t2845 = t1371*t2723;
  t2860 = t1419*t2741;
  t2870 = t2845 + t2860;
  t2883 = t1599*t2814;
  t2894 = t1573*t2870;
  t2900 = t2883 + t2894;
  t2904 = t1573*t2814;
  t2932 = -1.*t1599*t2870;
  t2943 = t2904 + t2932;
  t3188 = t171*t835*t71;
  t3191 = t71*t73*t571*t893;
  t3201 = t3188 + t3191;
  t3226 = t1160*t3201;
  t3260 = t439*t71*t73*t1209;
  t3269 = t3226 + t3260;
  t3284 = t439*t1160*t71*t73;
  t3285 = -1.*t3201*t1209;
  t3288 = t3284 + t3285;
  t3296 = -1.*t1419*t3269;
  t3300 = t1371*t3288;
  t3301 = t3296 + t3300;
  t3337 = t1371*t3269;
  t3341 = t1419*t3288;
  t3348 = t3337 + t3341;
  t3375 = t1599*t3301;
  t3378 = t1573*t3348;
  t3379 = t3375 + t3378;
  t3389 = t1573*t3301;
  t3427 = -1.*t1599*t3348;
  t3428 = t3389 + t3427;
  t3637 = -1.*t110*t171*t835;
  t3645 = -1.*t110*t73*t571*t893;
  t3656 = t3637 + t3645;
  t3711 = t1160*t3656;
  t3725 = -1.*t110*t439*t73*t1209;
  t3748 = t3711 + t3725;
  t3777 = -1.*t110*t439*t1160*t73;
  t3778 = -1.*t3656*t1209;
  t3811 = t3777 + t3778;
  t3879 = -1.*t1419*t3748;
  t3896 = t1371*t3811;
  t3898 = t3879 + t3896;
  t3918 = t1371*t3748;
  t3957 = t1419*t3811;
  t3960 = t3918 + t3957;
  t4036 = t1599*t3898;
  t4044 = t1573*t3960;
  t4076 = t4036 + t4044;
  t4098 = t1573*t3898;
  t4128 = -1.*t1599*t3960;
  t4130 = t4098 + t4128;
  t4498 = t439*t1160*t73*t893;
  t4512 = -1.*t73*t571*t1209;
  t4528 = t4498 + t4512;
  t4616 = -1.*t1160*t73*t571;
  t4621 = -1.*t439*t73*t893*t1209;
  t4624 = t4616 + t4621;
  t4649 = -1.*t1419*t4528;
  t4651 = t1371*t4624;
  t4652 = t4649 + t4651;
  t4668 = t1371*t4528;
  t4674 = t1419*t4624;
  t4689 = t4668 + t4674;
  t4704 = t1599*t4652;
  t4719 = t1573*t4689;
  t4721 = t4704 + t4719;
  t4733 = t1573*t4652;
  t4776 = -1.*t1599*t4689;
  t4779 = t4733 + t4776;
  t5022 = -1.*t110*t439;
  t5041 = t171*t71*t571;
  t5050 = t5022 + t5041;
  t5087 = t1160*t2172*t893;
  t5093 = t5050*t1209;
  t5094 = t5087 + t5093;
  t5100 = t1160*t5050;
  t5104 = -1.*t2172*t893*t1209;
  t5140 = t5100 + t5104;
  t5143 = -1.*t1419*t5094;
  t5158 = t1371*t5140;
  t5162 = t5143 + t5158;
  t5171 = t1371*t5094;
  t5224 = t1419*t5140;
  t5227 = t5171 + t5224;
  t5235 = t1599*t5162;
  t5239 = t1573*t5227;
  t5247 = t5235 + t5239;
  t5298 = t1573*t5162;
  t5300 = -1.*t1599*t5227;
  t5315 = t5298 + t5300;
  t5470 = t110*t171*t439;
  t5485 = -1.*t71*t571;
  t5487 = t5470 + t5485;
  t5540 = t1160*t5487*t893;
  t5555 = t750*t1209;
  t5576 = t5540 + t5555;
  t5603 = t1160*t750;
  t5604 = -1.*t5487*t893*t1209;
  t5607 = t5603 + t5604;
  t5639 = -1.*t1419*t5576;
  t5640 = t1371*t5607;
  t5670 = t5639 + t5640;
  t5676 = t1371*t5576;
  t5678 = t1419*t5607;
  t5680 = t5676 + t5678;
  t5699 = t1599*t5670;
  t5709 = t1573*t5680;
  t5713 = t5699 + t5709;
  t5720 = t1573*t5670;
  t5725 = -1.*t1599*t5680;
  t5728 = t5720 + t5725;
  t5774 = t835*t73*t571;
  t5775 = -1.*t171*t893;
  t5776 = t5774 + t5775;
  t5784 = -1.*t1160*t1419*t5776;
  t5785 = -1.*t1371*t5776*t1209;
  t5795 = t5784 + t5785;
  t5806 = t1371*t1160*t5776;
  t5822 = -1.*t1419*t5776*t1209;
  t5832 = t5806 + t5822;
  t5841 = t1599*t5795;
  t5850 = t1573*t5832;
  t5854 = t5841 + t5850;
  t5860 = t1573*t5795;
  t5874 = -1.*t1599*t5832;
  t5876 = t5860 + t5874;
  t5752 = 0.135*t835;
  t5753 = -0.049*t893;
  t5761 = t5752 + t5753;
  t5765 = 0.049*t835;
  t5768 = t5765 + t980;
  t2110 = t835*t2090;
  t2117 = -1.*t71*t73*t893;
  t2118 = t2110 + t2117;
  t5969 = -1.*t1160*t1419*t2118;
  t5970 = -1.*t1371*t2118*t1209;
  t5973 = t5969 + t5970;
  t5986 = t1371*t1160*t2118;
  t5987 = -1.*t1419*t2118*t1209;
  t5991 = t5986 + t5987;
  t5994 = t1599*t5973;
  t6013 = t1573*t5991;
  t6015 = t5994 + t6013;
  t6018 = t1573*t5973;
  t6019 = -1.*t1599*t5991;
  t6020 = t6018 + t6019;
  t6057 = t439*t71;
  t6058 = t110*t171*t571;
  t6061 = t6057 + t6058;
  t6071 = t835*t6061;
  t6074 = t110*t73*t893;
  t6080 = t6071 + t6074;
  t6112 = -1.*t1160*t1419*t6080;
  t6113 = -1.*t1371*t6080*t1209;
  t6117 = t6112 + t6113;
  t6121 = t1371*t1160*t6080;
  t6126 = -1.*t1419*t6080*t1209;
  t6128 = t6121 + t6126;
  t6138 = t1599*t6117;
  t6139 = t1573*t6128;
  t6147 = t6138 + t6139;
  t6149 = t1573*t6117;
  t6160 = -1.*t1599*t6128;
  t6161 = t6149 + t6160;
  t6194 = t171*t835;
  t6197 = t73*t571*t893;
  t6199 = t6194 + t6197;
  t6222 = -1.*t1160*t6199;
  t6225 = -1.*t439*t73*t1209;
  t6226 = t6222 + t6225;
  t6230 = t439*t1160*t73;
  t6233 = -1.*t6199*t1209;
  t6238 = t6230 + t6233;
  t6242 = t1419*t6226;
  t6246 = t1371*t6238;
  t6248 = t6242 + t6246;
  t6256 = t1371*t6226;
  t6260 = -1.*t1419*t6238;
  t6261 = t6256 + t6260;
  t6269 = -1.*t1599*t6248;
  t6272 = t1573*t6261;
  t6273 = t6269 + t6272;
  t6277 = t1573*t6248;
  t6280 = t1599*t6261;
  t6285 = t6277 + t6280;
  t6186 = 0.049*t1160;
  t6190 = t6186 + t1221;
  t6202 = -0.09*t1160;
  t6203 = -0.049*t1209;
  t6207 = t6202 + t6203;
  t6330 = -1.*t1160*t2159;
  t6335 = -1.*t2172*t1209;
  t6336 = t6330 + t6335;
  t6349 = t1419*t6336;
  t6352 = t6349 + t2268;
  t6362 = t1371*t6336;
  t6365 = -1.*t1419*t2234;
  t6369 = t6362 + t6365;
  t6373 = -1.*t1599*t6352;
  t6374 = t1573*t6369;
  t6375 = t6373 + t6374;
  t6378 = t1573*t6352;
  t6379 = t1599*t6369;
  t6381 = t6378 + t6379;
  t6396 = -1.*t110*t835*t73;
  t6410 = t6061*t893;
  t6414 = t6396 + t6410;
  t6418 = -1.*t1160*t6414;
  t6423 = -1.*t5487*t1209;
  t6426 = t6418 + t6423;
  t6431 = t1160*t5487;
  t6437 = -1.*t6414*t1209;
  t6446 = t6431 + t6437;
  t6450 = t1419*t6426;
  t6453 = t1371*t6446;
  t6454 = t6450 + t6453;
  t6462 = t1371*t6426;
  t6465 = -1.*t1419*t6446;
  t6466 = t6462 + t6465;
  t6471 = -1.*t1599*t6454;
  t6472 = t1573*t6466;
  t6473 = t6471 + t6472;
  t6475 = t1573*t6454;
  t6476 = t1599*t6466;
  t6478 = t6475 + t6476;
  t6500 = t1160*t6199;
  t6503 = t439*t73*t1209;
  t6504 = t6500 + t6503;
  t6509 = -1.*t1419*t6504;
  t6510 = t6509 + t6246;
  t6512 = -1.*t1371*t6504;
  t6513 = t6512 + t6260;
  t6522 = -1.*t1599*t6510;
  t6525 = t1573*t6513;
  t6530 = t6522 + t6525;
  t6534 = t1573*t6510;
  t6537 = t1599*t6513;
  t6538 = t6534 + t6537;
  t6496 = -0.21*t1371;
  t6497 = -0.049*t1419;
  t6499 = t6496 + t6497;
  t6506 = 0.049*t1371;
  t6507 = t6506 + t1432;
  t6607 = -1.*t1371*t2198;
  t6611 = t6607 + t6365;
  t6615 = -1.*t1599*t2300;
  t6620 = t1573*t6611;
  t6623 = t6615 + t6620;
  t6628 = t1599*t6611;
  t6629 = t2473 + t6628;
  t6663 = t1160*t6414;
  t6667 = t5487*t1209;
  t6668 = t6663 + t6667;
  t6671 = -1.*t1419*t6668;
  t6672 = t6671 + t6453;
  t6676 = -1.*t1371*t6668;
  t6677 = t6676 + t6465;
  t6684 = -1.*t1599*t6672;
  t6686 = t1573*t6677;
  t6688 = t6684 + t6686;
  t6690 = t1573*t6672;
  t6692 = t1599*t6677;
  t6693 = t6690 + t6692;
  t6734 = t1371*t6504;
  t6735 = t1419*t6238;
  t6738 = t6734 + t6735;
  t6742 = -1.*t1573*t6738;
  t6747 = t6522 + t6742;
  t6757 = -1.*t1599*t6738;
  t6761 = t6534 + t6757;
  t6708 = -0.01841*t1573;
  t6709 = t6708 + t1640;
  t6714 = -0.70544*t1573;
  t6723 = 0.01841*t1599;
  t6731 = t6714 + t6723;
  t6800 = -1.*t1573*t2373;
  t6811 = t6615 + t6800;
  t2483 = t1739*t2479;
  t6836 = t1371*t6668;
  t6839 = t1419*t6446;
  t6840 = t6836 + t6839;
  t6847 = -1.*t1573*t6840;
  t6848 = t6684 + t6847;
  t6852 = -1.*t1599*t6840;
  t6853 = t6690 + t6852;
  t6906 = t1599*t6510;
  t6909 = t1573*t6738;
  t6910 = t6906 + t6909;
  t6768 = t1739*t6761;
  t6779 = -1.*t1769*t6761;
  t6898 = -1.11344*t1739;
  t6902 = -0.02159*t1769;
  t6905 = t6898 + t6902;
  t6918 = 0.02159*t1739;
  t6920 = t6918 + t1786;
  t2482 = -1.*t1769*t2401;
  t2497 = t2482 + t2483;
  t6818 = -1.*t1769*t2479;
  t6968 = t1599*t6672;
  t6969 = t1573*t6840;
  t6970 = t6968 + t6969;
  t6871 = t1739*t6853;
  t6879 = -1.*t1769*t6853;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=-1.*t110*t112 - 1.*t25*t71*t73;
  p_output1[19]=t110*t25 - 1.*t112*t71*t73;
  p_output1[20]=0;
  p_output1[21]=0;
  p_output1[22]=0.5*(-2.*t1134*t1235 - 2.*t1281*t1308 - 2.*t1438*t1460 - 2.*t1498*t1570 - 2.*t1608*t1627 - 2.*t1644*t1697 - 0.135*t110*t171*t176 - 2.*t1794*t1801 - 2.*t1850*t1861 + 2.22688*(-1.*t1769*t1801 + t1739*t1861) + 0.04318*(t1739*t1801 + t1769*t1861) - 0.135*t110*t171*t571 + 0.135*t395*t71 + 0.135*t449*t71 - 0.135*(-1.*t110*t171*t176 - 1.*t325*t71) - 0.098*t110*t73 - 2.*t1007*t110*t73 + 0.135*t750 - 0.261*(t750*t835 - 1.*t110*t73*t893) - 2.*t750*t941);
  p_output1[23]=0.5*(0.135*t2090 - 0.261*t2118 - 2.*t1235*t2159 - 2.*t1308*t2172 - 2.*t1438*t2198 - 2.*t1498*t2234 - 2.*t1608*t2300 - 2.*t1644*t2373 - 2.*t1794*t2401 - 2.*t1850*t2479 + 0.04318*(t1739*t2401 + t1769*t2479) + 2.22688*t2497 - 0.135*t110*t395 - 0.135*t110*t449 - 0.135*t171*t176*t71 - 0.135*t171*t571*t71 - 0.135*(t110*t325 - 1.*t171*t176*t71) - 0.098*t71*t73 - 2.*t1007*t71*t73 - 2.*t2090*t941);
  p_output1[24]=t110*t171*t25;
  p_output1[25]=t110*t112*t171;
  p_output1[26]=0;
  p_output1[27]=0.5*(-2.*t1235*t2700 - 2.*t1438*t2723 - 2.*t1498*t2741 - 2.*t1608*t2814 - 2.*t1644*t2870 - 2.*t1794*t2900 - 2.*t1850*t2943 + 2.22688*(-1.*t1769*t2900 + t1739*t2943) + 0.04318*(t1739*t2900 + t1769*t2943) - 2.*t1308*t171*t439 + 0.27*t171*t571 + 0.098*t73 + 2.*t1007*t73 - 0.261*(t171*t571*t835 + t73*t893) - 2.*t171*t571*t941);
  p_output1[28]=0.5*(-2.*t1235*t3201 - 2.*t1438*t3269 - 2.*t1498*t3288 - 2.*t1608*t3301 - 2.*t1644*t3348 - 2.*t1794*t3379 - 2.*t1850*t3428 + 2.22688*(-1.*t1769*t3379 + t1739*t3428) + 0.04318*(t1739*t3379 + t1769*t3428) - 0.098*t171*t71 - 2.*t1007*t171*t71 - 2.*t1308*t439*t71*t73 + 0.27*t571*t71*t73 - 0.261*(t571*t71*t73*t835 - 1.*t171*t71*t893) - 2.*t571*t71*t73*t941);
  p_output1[29]=0.5*(0.098*t110*t171 + 2.*t1007*t110*t171 - 2.*t1235*t3656 - 2.*t1438*t3748 - 2.*t1498*t3811 - 2.*t1608*t3898 - 2.*t1644*t3960 - 2.*t1794*t4076 - 2.*t1850*t4130 + 2.22688*(-1.*t1769*t4076 + t1739*t4130) + 0.04318*(t1739*t4076 + t1769*t4130) + 2.*t110*t1308*t439*t73 - 0.27*t110*t571*t73 - 0.261*(-1.*t110*t571*t73*t835 + t110*t171*t893) + 2.*t110*t571*t73*t941);
  p_output1[30]=-1.*t25*t71 - 1.*t110*t112*t73;
  p_output1[31]=-1.*t112*t71 + t110*t25*t73;
  p_output1[32]=0;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=0;
  p_output1[37]=0;
  p_output1[38]=0;
  p_output1[39]=0.5*(-2.*t1438*t4528 - 2.*t1498*t4624 - 2.*t1608*t4652 - 2.*t1644*t4689 - 2.*t1794*t4721 - 2.*t1850*t4779 + 2.22688*(-1.*t1769*t4721 + t1739*t4779) + 0.04318*(t1739*t4721 + t1769*t4779) + 0.27*t439*t73 + 2.*t1308*t571*t73 - 0.261*t439*t73*t835 - 2.*t1235*t439*t73*t893 - 2.*t439*t73*t941);
  p_output1[40]=0.5*(0.135*t2172 - 2.*t1308*t5050 - 2.*t1438*t5094 - 2.*t1498*t5140 - 2.*t1608*t5162 - 2.*t1644*t5227 - 2.*t1794*t5247 - 2.*t1850*t5315 + 2.22688*(-1.*t1769*t5247 + t1739*t5315) + 0.04318*(t1739*t5247 + t1769*t5315) - 0.135*t110*t571 - 0.135*t171*t439*t71 - 0.261*t2172*t835 - 2.*t1235*t2172*t893 - 2.*t2172*t941);
  p_output1[41]=0.5*(0.135*t110*t171*t439 + 0.135*t5487 - 2.*t1438*t5576 - 2.*t1498*t5607 - 2.*t1608*t5670 - 2.*t1644*t5680 - 2.*t1794*t5713 - 2.*t1850*t5728 + 2.22688*(-1.*t1769*t5713 + t1739*t5728) + 0.04318*(t1739*t5713 + t1769*t5728) - 0.135*t571*t71 - 2.*t1308*t750 - 0.261*t5487*t835 - 2.*t1235*t5487*t893 - 2.*t5487*t941);
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=1.;
  p_output1[45]=0.5*(-2.*t171*t5761 - 2.*t1235*t5776 - 2.*t1160*t1438*t5776 + 2.*t1209*t1498*t5776 - 2.*t1608*t5795 - 2.*t1644*t5832 - 2.*t1794*t5854 - 2.*t1850*t5876 + 2.22688*(-1.*t1769*t5854 + t1739*t5876) + 0.04318*(t1739*t5854 + t1769*t5876) - 2.*t571*t5768*t73 - 0.261*(-1.*t171*t835 - 1.*t571*t73*t893));
  p_output1[46]=0.5*(-2.*t1235*t2118 - 2.*t1160*t1438*t2118 + 2.*t1209*t1498*t2118 - 2.*t2090*t5768 - 2.*t1608*t5973 - 2.*t1644*t5991 - 2.*t1794*t6015 - 2.*t1850*t6020 + 2.22688*(-1.*t1769*t6015 + t1739*t6020) + 0.04318*(t1739*t6015 + t1769*t6020) - 2.*t5761*t71*t73 - 0.261*(-1.*t71*t73*t835 - 1.*t2090*t893));
  p_output1[47]=0.5*(-2.*t5768*t6061 - 2.*t1235*t6080 - 2.*t1160*t1438*t6080 + 2.*t1209*t1498*t6080 - 2.*t1608*t6117 - 2.*t1644*t6128 - 2.*t1794*t6147 - 2.*t1850*t6161 + 2.22688*(-1.*t1769*t6147 + t1739*t6161) + 0.04318*(t1739*t6147 + t1769*t6161) + 2.*t110*t5761*t73 - 0.261*(t1075 - 1.*t6061*t893));
  p_output1[48]=0;
  p_output1[49]=0;
  p_output1[50]=0;
  p_output1[51]=0.5*(-2.*t6199*t6207 - 2.*t1498*t6226 - 2.*t1438*t6238 - 2.*t1644*t6248 - 2.*t1608*t6261 - 2.*t1850*t6273 - 2.*t1794*t6285 + 0.04318*(t1769*t6273 + t1739*t6285) + 2.22688*(t1739*t6273 - 1.*t1769*t6285) - 2.*t439*t6190*t73);
  p_output1[52]=0.5*(-2.*t1438*t2234 - 2.*t2172*t6190 - 2.*t2159*t6207 - 2.*t1498*t6336 - 2.*t1644*t6352 - 2.*t1608*t6369 - 2.*t1850*t6375 - 2.*t1794*t6381 + 0.04318*(t1769*t6375 + t1739*t6381) + 2.22688*(t1739*t6375 - 1.*t1769*t6381));
  p_output1[53]=0.5*(-2.*t5487*t6190 - 2.*t6207*t6414 - 2.*t1498*t6426 - 2.*t1438*t6446 - 2.*t1644*t6454 - 2.*t1608*t6466 - 2.*t1850*t6473 - 2.*t1794*t6478 + 0.04318*(t1769*t6473 + t1739*t6478) + 2.22688*(t1739*t6473 - 1.*t1769*t6478));
  p_output1[54]=0;
  p_output1[55]=0;
  p_output1[56]=0;
  p_output1[57]=0.5*(-2.*t6499*t6504 - 2.*t6238*t6507 - 2.*t1644*t6510 - 2.*t1608*t6513 - 2.*t1850*t6530 - 2.*t1794*t6538 + 0.04318*(t1769*t6530 + t1739*t6538) + 2.22688*(t1739*t6530 - 1.*t1769*t6538));
  p_output1[58]=0.5*(-2.*t1644*t2300 - 2.*t2198*t6499 - 2.*t2234*t6507 - 2.*t1608*t6611 - 2.*t1850*t6623 - 2.*t1794*t6629 + 0.04318*(t1769*t6623 + t1739*t6629) + 2.22688*(t1739*t6623 - 1.*t1769*t6629));
  p_output1[59]=0.5*(-2.*t6446*t6507 - 2.*t6499*t6668 - 2.*t1644*t6672 - 2.*t1608*t6677 - 2.*t1850*t6688 - 2.*t1794*t6693 + 0.04318*(t1769*t6688 + t1739*t6693) + 2.22688*(t1739*t6688 - 1.*t1769*t6693));
  p_output1[60]=0;
  p_output1[61]=0;
  p_output1[62]=0;
  p_output1[63]=0;
  p_output1[64]=0;
  p_output1[65]=0;
  p_output1[66]=0;
  p_output1[67]=0;
  p_output1[68]=0;
  p_output1[69]=0.5*(-2.*t6510*t6709 - 2.*t6731*t6738 - 2.*t1850*t6747 - 2.*t1794*t6761 + 0.04318*(t1769*t6747 + t6768) + 2.22688*(t1739*t6747 + t6779));
  p_output1[70]=0.5*(-2.*t1794*t2479 - 2.*t2300*t6709 - 2.*t2373*t6731 - 2.*t1850*t6811 + 0.04318*(t2483 + t1769*t6811) + 2.22688*(t1739*t6811 + t6818));
  p_output1[71]=0.5*(-2.*t6672*t6709 - 2.*t6731*t6840 - 2.*t1850*t6848 - 2.*t1794*t6853 + 0.04318*(t1769*t6848 + t6871) + 2.22688*(t1739*t6848 + t6879));
  p_output1[72]=0;
  p_output1[73]=0;
  p_output1[74]=0;
  p_output1[75]=0;
  p_output1[76]=0;
  p_output1[77]=0;
  p_output1[78]=0;
  p_output1[79]=0;
  p_output1[80]=0;
  p_output1[81]=0.5*(-2.*t6905*t6910 + 2.22688*(t6779 - 1.*t1739*t6910) + 0.04318*(t6768 - 1.*t1769*t6910) - 2.*t6761*t6920);
  p_output1[82]=0.5*(0.04318*t2497 + 2.22688*(-1.*t1739*t2401 + t6818) - 2.*t2401*t6905 - 2.*t2479*t6920);
  p_output1[83]=0.5*(-2.*t6853*t6920 - 2.*t6905*t6970 + 2.22688*(t6879 - 1.*t1739*t6970) + 0.04318*(t6871 - 1.*t1769*t6970));
  p_output1[84]=0;
  p_output1[85]=0;
  p_output1[86]=0;
  p_output1[87]=0;
  p_output1[88]=0.5*(-0.135*t110*t176 - 0.135*t171*t325*t71 - 0.135*(-1.*t110*t176 - 1.*t171*t325*t71));
  p_output1[89]=0.5*(0.135*t110*t171*t325 - 0.135*t176*t71 - 0.135*(t110*t171*t325 - 1.*t176*t71));
  p_output1[90]=0;
  p_output1[91]=0;
  p_output1[92]=0;
  p_output1[93]=0;
  p_output1[94]=0;
  p_output1[95]=0;
  p_output1[96]=0;
  p_output1[97]=0;
  p_output1[98]=0;
  p_output1[99]=0;
  p_output1[100]=0;
  p_output1[101]=0;
  p_output1[102]=0;
  p_output1[103]=0;
  p_output1[104]=0;
  p_output1[105]=0;
  p_output1[106]=0;
  p_output1[107]=0;
  p_output1[108]=0;
  p_output1[109]=0;
  p_output1[110]=0;
  p_output1[111]=0;
  p_output1[112]=0;
  p_output1[113]=0;
  p_output1[114]=0;
  p_output1[115]=0;
  p_output1[116]=0;
  p_output1[117]=0;
  p_output1[118]=0;
  p_output1[119]=0;
  p_output1[120]=0;
  p_output1[121]=0;
  p_output1[122]=0;
  p_output1[123]=0;
  p_output1[124]=0;
  p_output1[125]=0;
  p_output1[126]=0;
  p_output1[127]=0;
  p_output1[128]=0;
  p_output1[129]=0;
  p_output1[130]=0;
  p_output1[131]=0;
  p_output1[132]=0;
  p_output1[133]=0;
  p_output1[134]=0;
  p_output1[135]=0;
  p_output1[136]=0;
  p_output1[137]=0;
  p_output1[138]=0;
  p_output1[139]=0;
  p_output1[140]=0;
  p_output1[141]=0;
  p_output1[142]=0;
  p_output1[143]=0;
  p_output1[144]=0;
  p_output1[145]=0;
  p_output1[146]=0;
  p_output1[147]=0;
  p_output1[148]=0;
  p_output1[149]=0;
  p_output1[150]=0;
  p_output1[151]=0;
  p_output1[152]=0;
  p_output1[153]=0;
  p_output1[154]=0;
  p_output1[155]=0;
  p_output1[156]=0;
  p_output1[157]=0;
  p_output1[158]=0;
  p_output1[159]=0;
  p_output1[160]=0;
  p_output1[161]=0;
  p_output1[162]=0;
  p_output1[163]=0;
  p_output1[164]=0;
  p_output1[165]=0;
  p_output1[166]=0;
  p_output1[167]=0;
  p_output1[168]=0;
  p_output1[169]=0;
  p_output1[170]=0;
  p_output1[171]=0;
  p_output1[172]=0;
  p_output1[173]=0;
  p_output1[174]=0;
  p_output1[175]=0;
  p_output1[176]=0;
  p_output1[177]=0;
  p_output1[178]=0;
  p_output1[179]=0;
  p_output1[180]=0;
  p_output1[181]=0;
  p_output1[182]=0;
  p_output1[183]=0;
  p_output1[184]=0;
  p_output1[185]=0;
  p_output1[186]=0;
  p_output1[187]=0;
  p_output1[188]=0;
  p_output1[189]=0;
  p_output1[190]=0;
  p_output1[191]=0;
  p_output1[192]=0;
  p_output1[193]=0;
  p_output1[194]=0;
  p_output1[195]=0;
  p_output1[196]=0;
  p_output1[197]=0;
  p_output1[198]=0;
  p_output1[199]=0;
  p_output1[200]=0;
  p_output1[201]=0;
  p_output1[202]=0;
  p_output1[203]=0;
  p_output1[204]=0;
  p_output1[205]=0;
  p_output1[206]=0;
  p_output1[207]=0;
  p_output1[208]=0;
  p_output1[209]=0;
  p_output1[210]=0;
  p_output1[211]=0;
  p_output1[212]=0;
  p_output1[213]=0;
  p_output1[214]=0;
  p_output1[215]=0;
  p_output1[216]=0;
  p_output1[217]=0;
  p_output1[218]=0;
  p_output1[219]=0;
  p_output1[220]=0;
  p_output1[221]=0;
  p_output1[222]=0;
  p_output1[223]=0;
  p_output1[224]=0;
  p_output1[225]=0;
  p_output1[226]=0;
  p_output1[227]=0;
  p_output1[228]=0;
  p_output1[229]=0;
  p_output1[230]=0;
  p_output1[231]=0;
  p_output1[232]=0;
  p_output1[233]=0;
  p_output1[234]=0;
  p_output1[235]=0;
  p_output1[236]=0;
  p_output1[237]=0;
  p_output1[238]=0;
  p_output1[239]=0;
  p_output1[240]=0;
  p_output1[241]=0;
  p_output1[242]=0;
  p_output1[243]=0;
  p_output1[244]=0;
  p_output1[245]=0;
  p_output1[246]=0;
  p_output1[247]=0;
  p_output1[248]=0;
  p_output1[249]=0;
  p_output1[250]=0;
  p_output1[251]=0;
  p_output1[252]=0;
  p_output1[253]=0;
  p_output1[254]=0;
  p_output1[255]=0;
  p_output1[256]=0;
  p_output1[257]=0;
  p_output1[258]=0;
  p_output1[259]=0;
  p_output1[260]=0;
  p_output1[261]=0;
  p_output1[262]=0;
  p_output1[263]=0;
}



#ifdef MATLAB_MEX_FILE

#include "mex.h"
/*
 * Main function
 */
void mexFunction( int nlhs, mxArray *plhs[],
                  int nrhs, const mxArray *prhs[] )
{
  size_t mrows, ncols;

  double *var1;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 1)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "One input(s) required (var1).");
    }
  else if( nlhs > 1)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:maxlhs", "Too many output arguments.");
    }

  /*  The input must be a noncomplex double vector or scaler.  */
  mrows = mxGetM(prhs[0]);
  ncols = mxGetN(prhs[0]);
  if( !mxIsDouble(prhs[0]) || mxIsComplex(prhs[0]) ||
    ( !(mrows == 22 && ncols == 1) && 
      !(mrows == 1 && ncols == 22))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var1 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 6, (mwSize) 44, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#endif // MATLAB_MEX_FILE

namespace SymFunction
{

void Dya_pelvis_leftFoot_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}




