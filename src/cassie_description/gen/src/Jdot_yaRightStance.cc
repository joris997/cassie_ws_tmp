/*
 * Automatically Generated from Mathematica.
 * Sun 7 Nov 2021 14:27:55 GMT-08:00
 */

#ifdef MATLAB_MEX_FILE
// No need to include header
#else
#include "Jdot_yaRightStance.hh"
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
static void output1(double *p_output1,const double *var1,const double *var2)
{
  double t358;
  double t582;
  double t269;
  double t347;
  double t351;
  double t353;
  double t373;
  double t485;
  double t519;
  double t553;
  double t642;
  double t122;
  double t195;
  double t732;
  double t573;
  double t693;
  double t704;
  double t246;
  double t733;
  double t780;
  double t787;
  double t1006;
  double t717;
  double t821;
  double t877;
  double t210;
  double t1026;
  double t1051;
  double t1059;
  double t1096;
  double t983;
  double t1069;
  double t1086;
  double t46;
  double t1100;
  double t1102;
  double t1109;
  double t1283;
  double t1288;
  double t1291;
  double t1300;
  double t1322;
  double t1344;
  double t1296;
  double t1352;
  double t1362;
  double t1701;
  double t1711;
  double t1721;
  double t1511;
  double t1726;
  double t1753;
  double t1790;
  double t1845;
  double t1847;
  double t1979;
  double t2016;
  double t2019;
  double t2086;
  double t2103;
  double t2110;
  double t2022;
  double t2117;
  double t2128;
  double t2198;
  double t2220;
  double t2229;
  double t2135;
  double t2279;
  double t2306;
  double t2364;
  double t2380;
  double t2386;
  double t2606;
  double t2649;
  double t2651;
  double t2667;
  double t2670;
  double t2739;
  double t2664;
  double t2746;
  double t2752;
  double t2769;
  double t2776;
  double t2779;
  double t2768;
  double t2789;
  double t2795;
  double t2814;
  double t2818;
  double t2821;
  double t2876;
  double t2896;
  double t2899;
  double t2916;
  double t2926;
  double t2929;
  double t2933;
  double t2934;
  double t2940;
  double t2931;
  double t2957;
  double t2974;
  double t2995;
  double t3000;
  double t3010;
  double t2978;
  double t3024;
  double t3028;
  double t3042;
  double t3054;
  double t3055;
  double t1755;
  double t1863;
  double t1877;
  double t1880;
  double t1883;
  double t1941;
  double t1945;
  double t1949;
  double t1958;
  double t3032;
  double t3063;
  double t3064;
  double t3067;
  double t3069;
  double t3070;
  double t3088;
  double t3089;
  double t3091;
  double t3113;
  double t1092;
  double t1114;
  double t1136;
  double t1160;
  double t1235;
  double t1245;
  double t3114;
  double t3145;
  double t3146;
  double t3249;
  double t3284;
  double t3285;
  double t3308;
  double t3252;
  double t3310;
  double t3311;
  double t3332;
  double t3333;
  double t3350;
  double t3330;
  double t3377;
  double t3378;
  double t3404;
  double t3409;
  double t3413;
  double t3120;
  double t3126;
  double t3131;
  double t3136;
  double t3141;
  double t3142;
  double t3143;
  double t1157;
  double t1263;
  double t1264;
  double t3525;
  double t3527;
  double t3532;
  double t3548;
  double t3570;
  double t3597;
  double t3546;
  double t3614;
  double t3618;
  double t3627;
  double t3629;
  double t3630;
  double t3681;
  double t3686;
  double t3705;
  double t3707;
  double t3717;
  double t3719;
  double t3730;
  double t3735;
  double t3736;
  double t3721;
  double t3740;
  double t3752;
  double t3755;
  double t3757;
  double t3759;
  double t3122;
  double t3791;
  double t3792;
  double t3799;
  double t3806;
  double t3810;
  double t3814;
  double t3822;
  double t3823;
  double t3826;
  double t3818;
  double t3839;
  double t3844;
  double t3846;
  double t3849;
  double t3850;
  double t3503;
  double t3888;
  double t3896;
  double t3951;
  double t3957;
  double t3962;
  double t3971;
  double t3973;
  double t3987;
  double t3992;
  double t3993;
  double t3996;
  double t4003;
  double t4009;
  double t4010;
  double t4013;
  double t4022;
  double t4024;
  double t4026;
  double t3932;
  double t3934;
  double t3943;
  double t3899;
  double t3900;
  double t3902;
  double t3977;
  double t3984;
  double t3985;
  double t3958;
  double t3959;
  double t3961;
  double t4016;
  double t4018;
  double t4020;
  double t4064;
  double t4067;
  double t4070;
  double t4004;
  double t4005;
  double t4008;
  double t4081;
  double t4087;
  double t4094;
  double t4097;
  double t4106;
  double t3887;
  double t3907;
  double t3914;
  double t3950;
  double t3974;
  double t3995;
  double t4015;
  double t4031;
  double t4037;
  double t4039;
  double t4041;
  double t4046;
  double t4048;
  double t4050;
  double t4053;
  double t4054;
  double t4055;
  double t4058;
  double t4060;
  double t4061;
  double t4063;
  double t4079;
  double t4080;
  double t4093;
  double t4107;
  double t4109;
  double t4110;
  double t4112;
  double t4113;
  double t4114;
  double t4115;
  double t4117;
  double t4118;
  double t4119;
  double t4148;
  double t4152;
  double t4154;
  double t4156;
  double t4160;
  double t4161;
  double t4165;
  double t4166;
  double t4290;
  double t4296;
  double t4311;
  double t4314;
  double t4329;
  double t4333;
  double t4334;
  double t4338;
  double t4339;
  double t4347;
  double t4349;
  double t4131;
  double t4135;
  double t4141;
  double t4145;
  double t4361;
  double t4363;
  double t4365;
  double t4371;
  double t4385;
  double t4395;
  double t4398;
  double t4169;
  double t4190;
  double t4205;
  double t4231;
  double t4242;
  double t4243;
  double t4358;
  double t4400;
  double t4403;
  double t4405;
  double t4426;
  double t4431;
  double t4444;
  double t4456;
  double t4457;
  double t4464;
  double t4467;
  double t4468;
  double t4461;
  double t4469;
  double t4472;
  double t4474;
  double t4475;
  double t4477;
  double t4516;
  double t4518;
  double t4520;
  double t4521;
  double t4522;
  double t4527;
  double t4530;
  double t4539;
  double t4526;
  double t4542;
  double t4546;
  double t4564;
  double t4571;
  double t4572;
  double t4592;
  double t4596;
  double t4597;
  double t4600;
  double t4602;
  double t4608;
  double t4609;
  double t4612;
  double t4603;
  double t4614;
  double t4616;
  double t4618;
  double t4620;
  double t4622;
  double t4056;
  double t4121;
  double t4122;
  double t4125;
  double t4709;
  double t4713;
  double t4714;
  double t4670;
  double t4672;
  double t4678;
  double t4664;
  double t4665;
  double t4146;
  double t4686;
  double t4688;
  double t4699;
  double t4680;
  double t4681;
  double t4155;
  double t4743;
  double t4745;
  double t4719;
  double t4720;
  double t4722;
  double t4725;
  double t4726;
  double t4729;
  double t4408;
  double t4409;
  double t4748;
  double t4749;
  double t4752;
  double t4758;
  double t4760;
  double t4761;
  double t4853;
  double t4854;
  double t4855;
  double t4856;
  double t4858;
  double t4859;
  double t4862;
  double t4880;
  double t4881;
  double t4882;
  double t4886;
  double t4889;
  double t4890;
  double t4896;
  double t4923;
  double t4924;
  double t4926;
  double t4927;
  double t4929;
  double t4931;
  double t4932;
  double t4969;
  double t4970;
  double t4962;
  double t4963;
  double t4967;
  double t4987;
  double t4988;
  double t4989;
  double t4974;
  double t4975;
  double t4976;
  double t5100;
  double t5102;
  double t5104;
  double t5105;
  double t5111;
  double t5114;
  double t5127;
  double t5128;
  double t5129;
  double t5135;
  double t5136;
  double t5140;
  double t5145;
  double t5146;
  double t5147;
  double t5157;
  double t5159;
  double t5160;
  double t5169;
  double t5170;
  double t5172;
  double t5177;
  double t5183;
  double t5187;
  double t5188;
  double t5164;
  double t5165;
  double t5168;
  double t5112;
  double t5115;
  double t5116;
  double t5119;
  double t5120;
  double t5123;
  double t5150;
  double t5154;
  double t5155;
  double t5138;
  double t5141;
  double t5142;
  double t5240;
  double t5241;
  double t5242;
  double t5175;
  double t5180;
  double t5181;
  double t5189;
  double t5190;
  double t5194;
  double t5247;
  double t5249;
  double t5250;
  double t5255;
  double t5256;
  double t5101;
  double t5103;
  double t5118;
  double t5124;
  double t5149;
  double t5161;
  double t5182;
  double t5199;
  double t5203;
  double t5204;
  double t5207;
  double t5210;
  double t5211;
  double t5214;
  double t5215;
  double t5216;
  double t5217;
  double t5221;
  double t5223;
  double t5227;
  double t5233;
  double t5244;
  double t5246;
  double t5253;
  double t5258;
  double t5259;
  double t5260;
  double t5262;
  double t5263;
  double t5264;
  double t5266;
  double t5267;
  double t5268;
  double t5270;
  double t5294;
  double t5297;
  double t5300;
  double t5302;
  double t5303;
  double t5311;
  double t5312;
  double t5313;
  double t5218;
  double t5281;
  double t5282;
  double t5284;
  double t5386;
  double t5387;
  double t5390;
  double t5334;
  double t5338;
  double t5347;
  double t5355;
  double t5356;
  double t5293;
  double t5370;
  double t5377;
  double t5379;
  double t5362;
  double t5363;
  double t5301;
  double t5420;
  double t5423;
  double t5445;
  double t5453;
  double t5456;
  double t5462;
  double t5463;
  t358 = Cos(var1[4]);
  t582 = Cos(var1[6]);
  t269 = Cos(var1[8]);
  t347 = Cos(var1[7]);
  t351 = Sin(var1[4]);
  t353 = -1.*t347*t351;
  t373 = Sin(var1[6]);
  t485 = Sin(var1[7]);
  t519 = t358*t373*t485;
  t553 = t353 + t519;
  t642 = Sin(var1[8]);
  t122 = -1.*var1[9];
  t195 = 0.226893 + t122;
  t732 = Cos(var1[9]);
  t573 = t269*t553;
  t693 = t358*t582*t642;
  t704 = t573 + t693;
  t246 = Sin(var1[9]);
  t733 = t358*t582*t269;
  t780 = -1.*t553*t642;
  t787 = t733 + t780;
  t1006 = Cos(t195);
  t717 = -1.*t246*t704;
  t821 = t732*t787;
  t877 = t717 + t821;
  t210 = Sin(t195);
  t1026 = t732*t704;
  t1051 = t246*t787;
  t1059 = t1026 + t1051;
  t1096 = Cos(var1[13]);
  t983 = t210*t877;
  t1069 = t1006*t1059;
  t1086 = t983 + t1069;
  t46 = Sin(var1[13]);
  t1100 = t1006*t877;
  t1102 = -1.*t210*t1059;
  t1109 = t1100 + t1102;
  t1283 = t582*t269*t485;
  t1288 = -1.*t373*t642;
  t1291 = t1283 + t1288;
  t1300 = -1.*t269*t373;
  t1322 = -1.*t582*t485*t642;
  t1344 = t1300 + t1322;
  t1296 = -1.*t246*t1291;
  t1352 = t732*t1344;
  t1362 = t1296 + t1352;
  t1701 = t732*t1291;
  t1711 = t246*t1344;
  t1721 = t1701 + t1711;
  t1511 = t210*t1362;
  t1726 = t1006*t1721;
  t1753 = t1511 + t1726;
  t1790 = t1006*t1362;
  t1845 = -1.*t210*t1721;
  t1847 = t1790 + t1845;
  t1979 = -1.*t269*t373*t485;
  t2016 = -1.*t582*t642;
  t2019 = t1979 + t2016;
  t2086 = -1.*t582*t269;
  t2103 = t373*t485*t642;
  t2110 = t2086 + t2103;
  t2022 = -1.*t246*t2019;
  t2117 = t732*t2110;
  t2128 = t2022 + t2117;
  t2198 = t732*t2019;
  t2220 = t246*t2110;
  t2229 = t2198 + t2220;
  t2135 = t210*t2128;
  t2279 = t1006*t2229;
  t2306 = t2135 + t2279;
  t2364 = t1006*t2128;
  t2380 = -1.*t210*t2229;
  t2386 = t2364 + t2380;
  t2606 = t582*t269*t351*t485;
  t2649 = -1.*t351*t373*t642;
  t2651 = t2606 + t2649;
  t2667 = -1.*t269*t351*t373;
  t2670 = -1.*t582*t351*t485*t642;
  t2739 = t2667 + t2670;
  t2664 = -1.*t246*t2651;
  t2746 = t732*t2739;
  t2752 = t2664 + t2746;
  t2769 = t732*t2651;
  t2776 = t246*t2739;
  t2779 = t2769 + t2776;
  t2768 = t210*t2752;
  t2789 = t1006*t2779;
  t2795 = t2768 + t2789;
  t2814 = t1006*t2752;
  t2818 = -1.*t210*t2779;
  t2821 = t2814 + t2818;
  t2876 = t358*t347;
  t2896 = t351*t373*t485;
  t2899 = t2876 + t2896;
  t2916 = t269*t2899;
  t2926 = t582*t351*t642;
  t2929 = t2916 + t2926;
  t2933 = t582*t269*t351;
  t2934 = -1.*t2899*t642;
  t2940 = t2933 + t2934;
  t2931 = -1.*t246*t2929;
  t2957 = t732*t2940;
  t2974 = t2931 + t2957;
  t2995 = t732*t2929;
  t3000 = t246*t2940;
  t3010 = t2995 + t3000;
  t2978 = t210*t2974;
  t3024 = t1006*t3010;
  t3028 = t2978 + t3024;
  t3042 = t1006*t2974;
  t3054 = -1.*t210*t3010;
  t3055 = t3042 + t3054;
  t1755 = -1.*t46*t1753;
  t1863 = t1096*t1847;
  t1877 = t1755 + t1863;
  t1880 = 0.766044*t1877;
  t1883 = t1096*t1753;
  t1941 = t46*t1847;
  t1945 = t1883 + t1941;
  t1949 = 0.642788*t1945;
  t1958 = t1880 + t1949;
  t3032 = -1.*t46*t3028;
  t3063 = t1096*t3055;
  t3064 = t3032 + t3063;
  t3067 = 0.766044*t3064;
  t3069 = t1096*t3028;
  t3070 = t46*t3055;
  t3088 = t3069 + t3070;
  t3089 = 0.642788*t3088;
  t3091 = t3067 + t3089;
  t3113 = Power(t1958,2);
  t1092 = -1.*t46*t1086;
  t1114 = t1096*t1109;
  t1136 = t1092 + t1114;
  t1160 = t1096*t1086;
  t1235 = t46*t1109;
  t1245 = t1160 + t1235;
  t3114 = Power(t3091,2);
  t3145 = t358*t582*t269*t485;
  t3146 = -1.*t358*t373*t642;
  t3249 = t3145 + t3146;
  t3284 = -1.*t358*t269*t373;
  t3285 = -1.*t358*t582*t485*t642;
  t3308 = t3284 + t3285;
  t3252 = -1.*t246*t3249;
  t3310 = t732*t3308;
  t3311 = t3252 + t3310;
  t3332 = t732*t3249;
  t3333 = t246*t3308;
  t3350 = t3332 + t3333;
  t3330 = t210*t3311;
  t3377 = t1006*t3350;
  t3378 = t3330 + t3377;
  t3404 = t1006*t3311;
  t3409 = -1.*t210*t3350;
  t3413 = t3404 + t3409;
  t3120 = t3113 + t3114;
  t3126 = -0.766044*t1136;
  t3131 = -0.642788*t1245;
  t3136 = t3126 + t3131;
  t3141 = Power(t3136,2);
  t3142 = t3113 + t3141 + t3114;
  t3143 = 1/t3142;
  t1157 = 0.766044*t1136;
  t1263 = 0.642788*t1245;
  t1264 = t1157 + t1263;
  t3525 = -1.*t582*t347*t269*t246;
  t3527 = -1.*t732*t582*t347*t642;
  t3532 = t3525 + t3527;
  t3548 = t732*t582*t347*t269;
  t3570 = -1.*t582*t347*t246*t642;
  t3597 = t3548 + t3570;
  t3546 = t210*t3532;
  t3614 = t1006*t3597;
  t3618 = t3546 + t3614;
  t3627 = t1006*t3532;
  t3629 = -1.*t210*t3597;
  t3630 = t3627 + t3629;
  t3681 = t347*t351*t373;
  t3686 = -1.*t358*t485;
  t3705 = t3681 + t3686;
  t3707 = -1.*t269*t246*t3705;
  t3717 = -1.*t732*t3705*t642;
  t3719 = t3707 + t3717;
  t3730 = t732*t269*t3705;
  t3735 = -1.*t246*t3705*t642;
  t3736 = t3730 + t3735;
  t3721 = t210*t3719;
  t3740 = t1006*t3736;
  t3752 = t3721 + t3740;
  t3755 = t1006*t3719;
  t3757 = -1.*t210*t3736;
  t3759 = t3755 + t3757;
  t3122 = 1/Sqrt(t3120);
  t3791 = t358*t347*t373;
  t3792 = t351*t485;
  t3799 = t3791 + t3792;
  t3806 = -1.*t269*t246*t3799;
  t3810 = -1.*t732*t3799*t642;
  t3814 = t3806 + t3810;
  t3822 = t732*t269*t3799;
  t3823 = -1.*t246*t3799*t642;
  t3826 = t3822 + t3823;
  t3818 = t210*t3814;
  t3839 = t1006*t3826;
  t3844 = t3818 + t3839;
  t3846 = t1006*t3814;
  t3849 = -1.*t210*t3826;
  t3850 = t3846 + t3849;
  t3503 = Sqrt(t3120);
  t3888 = -1.*t732;
  t3896 = 1. + t3888;
  t3951 = -1.*t1006;
  t3957 = 1. + t3951;
  t3962 = -1.*t269*t246;
  t3971 = -1.*t732*t642;
  t3973 = t3962 + t3971;
  t3987 = t732*t269;
  t3992 = -1.*t246*t642;
  t3993 = t3987 + t3992;
  t3996 = -1.*t1096;
  t4003 = 1. + t3996;
  t4009 = t210*t3973;
  t4010 = t1006*t3993;
  t4013 = t4009 + t4010;
  t4022 = t1006*t3973;
  t4024 = -1.*t210*t3993;
  t4026 = t4022 + t4024;
  t3932 = -0.21*t3896;
  t3934 = 0.049*t246;
  t3943 = t3932 + t3934;
  t3899 = -0.049*t3896;
  t3900 = -0.21*t246;
  t3902 = t3899 + t3900;
  t3977 = 0.01841*t3957;
  t3984 = -0.70544*t210;
  t3985 = t3977 + t3984;
  t3958 = -0.70544*t3957;
  t3959 = -0.01841*t210;
  t3961 = t3958 + t3959;
  t4016 = -1.11344*t4003;
  t4018 = 0.02159*t46;
  t4020 = t4016 + t4018;
  t4064 = t269*t246;
  t4067 = t732*t642;
  t4070 = t4064 + t4067;
  t4004 = -0.02159*t4003;
  t4005 = -1.11344*t46;
  t4008 = t4004 + t4005;
  t4081 = -1.*t210*t4070;
  t4087 = t4081 + t4010;
  t4094 = t1006*t4070;
  t4097 = t210*t3993;
  t4106 = t4094 + t4097;
  t3887 = 0.049*t269;
  t3907 = t269*t3902;
  t3914 = -0.09*t642;
  t3950 = -1.*t3943*t642;
  t3974 = t3961*t3973;
  t3995 = t3985*t3993;
  t4015 = t4008*t4013;
  t4031 = t4020*t4026;
  t4037 = -1.*t46*t4013;
  t4039 = t1096*t4026;
  t4041 = t4037 + t4039;
  t4046 = -1.11344*t4041;
  t4048 = t1096*t4013;
  t4050 = t46*t4026;
  t4053 = t4048 + t4050;
  t4054 = -0.02159*t4053;
  t4055 = t3887 + t3907 + t3914 + t3950 + t3974 + t3995 + t4015 + t4031 + t4046 + t4054;
  t4058 = 0.09*t269;
  t4060 = t269*t3943;
  t4061 = 0.049*t642;
  t4063 = t3902*t642;
  t4079 = t3985*t4070;
  t4080 = t3961*t3993;
  t4093 = t4020*t4087;
  t4107 = t4008*t4106;
  t4109 = t46*t4087;
  t4110 = t1096*t4106;
  t4112 = t4109 + t4110;
  t4113 = -0.02159*t4112;
  t4114 = t1096*t4087;
  t4115 = -1.*t46*t4106;
  t4117 = t4114 + t4115;
  t4118 = -1.11344*t4117;
  t4119 = t4058 + t4060 + t4061 + t4063 + t4079 + t4080 + t4093 + t4107 + t4113 + t4118;
  t4148 = -1.*t732*t269;
  t4152 = t246*t642;
  t4154 = t4148 + t4152;
  t4156 = -1.*t210*t3973;
  t4160 = t1006*t4154;
  t4161 = t4156 + t4160;
  t4165 = t210*t4154;
  t4166 = t4022 + t4165;
  t4290 = -0.049*t269;
  t4296 = -1.*t269*t3902;
  t4311 = 0.09*t642;
  t4314 = t3943*t642;
  t4329 = -1.*t3961*t3973;
  t4333 = -1.*t3985*t3993;
  t4334 = -1.*t4008*t4013;
  t4338 = -1.*t4020*t4026;
  t4339 = 1.11344*t4041;
  t4347 = 0.02159*t4053;
  t4349 = t4290 + t4296 + t4311 + t4314 + t4329 + t4333 + t4334 + t4338 + t4339 + t4347;
  t4131 = -0.09*t269;
  t4135 = -1.*t269*t3943;
  t4141 = -0.049*t642;
  t4145 = -1.*t3902*t642;
  t4361 = -1.*t3985*t4070;
  t4363 = -1.*t3961*t3993;
  t4365 = -1.*t4020*t4087;
  t4371 = -1.*t4008*t4106;
  t4385 = 0.02159*t4112;
  t4395 = 1.11344*t4117;
  t4398 = t4131 + t4135 + t4141 + t4145 + t4361 + t4363 + t4365 + t4371 + t4385 + t4395;
  t4169 = t46*t4161;
  t4190 = t1096*t4166;
  t4205 = t4169 + t4190;
  t4231 = t1096*t4161;
  t4242 = -1.*t46*t4166;
  t4243 = t4231 + t4242;
  t4358 = Power(t4349,2);
  t4400 = Power(t4398,2);
  t4403 = t4358 + t4400;
  t4405 = 1/t4403;
  t4426 = -1.*t582*t269*t485;
  t4431 = t373*t642;
  t4444 = t4426 + t4431;
  t4456 = t246*t4444;
  t4457 = t4456 + t1352;
  t4464 = t732*t4444;
  t4467 = -1.*t246*t1344;
  t4468 = t4464 + t4467;
  t4461 = -1.*t210*t4457;
  t4469 = t1006*t4468;
  t4472 = t4461 + t4469;
  t4474 = t1006*t4457;
  t4475 = t210*t4468;
  t4477 = t4474 + t4475;
  t4516 = -1.*t269*t2899;
  t4518 = -1.*t582*t351*t642;
  t4520 = t4516 + t4518;
  t4521 = t246*t4520;
  t4522 = t4521 + t2957;
  t4527 = t732*t4520;
  t4530 = -1.*t246*t2940;
  t4539 = t4527 + t4530;
  t4526 = -1.*t210*t4522;
  t4542 = t1006*t4539;
  t4546 = t4526 + t4542;
  t4564 = t1006*t4522;
  t4571 = t210*t4539;
  t4572 = t4564 + t4571;
  t4592 = -1.*t269*t553;
  t4596 = -1.*t358*t582*t642;
  t4597 = t4592 + t4596;
  t4600 = t246*t4597;
  t4602 = t4600 + t821;
  t4608 = t732*t4597;
  t4609 = -1.*t246*t787;
  t4612 = t4608 + t4609;
  t4603 = -1.*t210*t4602;
  t4614 = t1006*t4612;
  t4616 = t4603 + t4614;
  t4618 = t1006*t4602;
  t4620 = t210*t4612;
  t4622 = t4618 + t4620;
  t4056 = Power(t4055,2);
  t4121 = Power(t4119,2);
  t4122 = 0.00002025 + t4056 + t4121;
  t4125 = 1/Sqrt(t4122);
  t4709 = t4022 + t4094;
  t4713 = t210*t4070;
  t4714 = t4009 + t4713;
  t4670 = -0.21*t732;
  t4672 = -0.049*t246;
  t4678 = t4670 + t4672;
  t4664 = 0.049*t732;
  t4665 = t4664 + t3900;
  t4146 = t3985*t3973;
  t4686 = 0.01841*t1006;
  t4688 = 0.70544*t210;
  t4699 = t4686 + t4688;
  t4680 = 0.70544*t1006;
  t4681 = t4680 + t3959;
  t4155 = t3961*t4154;
  t4743 = t4010 + t4160;
  t4745 = t4097 + t4165;
  t4719 = t46*t4709;
  t4720 = t1096*t4714;
  t4722 = t4719 + t4720;
  t4725 = t1096*t4709;
  t4726 = -1.*t46*t4714;
  t4729 = t4725 + t4726;
  t4408 = -1.*t3985*t3973;
  t4409 = -1.*t3961*t4154;
  t4748 = t46*t4743;
  t4749 = t1096*t4745;
  t4752 = t4748 + t4749;
  t4758 = t1096*t4743;
  t4760 = -1.*t46*t4745;
  t4761 = t4758 + t4760;
  t4853 = -1.*t732*t704;
  t4854 = t4853 + t4609;
  t4855 = t1006*t4854;
  t4856 = t4855 + t1069;
  t4858 = t210*t4854;
  t4859 = t210*t1059;
  t4862 = t4858 + t4859;
  t4880 = -1.*t732*t1291;
  t4881 = t4880 + t4467;
  t4882 = t1006*t4881;
  t4886 = t4882 + t1726;
  t4889 = t210*t4881;
  t4890 = t210*t1721;
  t4896 = t4889 + t4890;
  t4923 = -1.*t732*t2929;
  t4924 = t4923 + t4530;
  t4926 = t1006*t4924;
  t4927 = t4926 + t3024;
  t4929 = t210*t4924;
  t4931 = t210*t3010;
  t4932 = t4929 + t4931;
  t4969 = 0.02159*t1096;
  t4970 = t4969 + t4005;
  t4962 = -1.11344*t1096;
  t4963 = -0.02159*t46;
  t4967 = t4962 + t4963;
  t4987 = -1.*t46*t4087;
  t4988 = -1.*t1096*t4106;
  t4989 = t4987 + t4988;
  t4974 = -1.*t1096*t4013;
  t4975 = -1.*t46*t4026;
  t4976 = t4974 + t4975;
  t5100 = Cos(var1[16]);
  t5102 = Sin(var1[16]);
  t5104 = Cos(var1[17]);
  t5105 = -1.*t5104;
  t5111 = 1. + t5105;
  t5114 = Sin(var1[17]);
  t5127 = -1.*var1[17];
  t5128 = 0.226893 + t5127;
  t5129 = Cos(t5128);
  t5135 = -1.*t5129;
  t5136 = 1. + t5135;
  t5140 = Sin(t5128);
  t5145 = -1.*t5104*t5102;
  t5146 = -1.*t5100*t5114;
  t5147 = t5145 + t5146;
  t5157 = t5100*t5104;
  t5159 = -1.*t5102*t5114;
  t5160 = t5157 + t5159;
  t5169 = Cos(var1[21]);
  t5170 = -1.*t5169;
  t5172 = 1. + t5170;
  t5177 = Sin(var1[21]);
  t5183 = t5129*t5147;
  t5187 = -1.*t5140*t5160;
  t5188 = t5183 + t5187;
  t5164 = t5140*t5147;
  t5165 = t5129*t5160;
  t5168 = t5164 + t5165;
  t5112 = -0.049*t5111;
  t5115 = -0.21*t5114;
  t5116 = t5112 + t5115;
  t5119 = -0.21*t5111;
  t5120 = 0.049*t5114;
  t5123 = t5119 + t5120;
  t5150 = 0.01841*t5136;
  t5154 = -0.70544*t5140;
  t5155 = t5150 + t5154;
  t5138 = -0.70544*t5136;
  t5141 = -0.01841*t5140;
  t5142 = t5138 + t5141;
  t5240 = t5104*t5102;
  t5241 = t5100*t5114;
  t5242 = t5240 + t5241;
  t5175 = -0.02159*t5172;
  t5180 = -1.11344*t5177;
  t5181 = t5175 + t5180;
  t5189 = -1.11344*t5172;
  t5190 = 0.02159*t5177;
  t5194 = t5189 + t5190;
  t5247 = t5129*t5242;
  t5249 = t5140*t5160;
  t5250 = t5247 + t5249;
  t5255 = -1.*t5140*t5242;
  t5256 = t5255 + t5165;
  t5101 = 0.049*t5100;
  t5103 = -0.09*t5102;
  t5118 = t5100*t5116;
  t5124 = -1.*t5102*t5123;
  t5149 = t5142*t5147;
  t5161 = t5155*t5160;
  t5182 = t5168*t5181;
  t5199 = t5188*t5194;
  t5203 = t5169*t5188;
  t5204 = -1.*t5168*t5177;
  t5207 = t5203 + t5204;
  t5210 = -1.11344*t5207;
  t5211 = t5169*t5168;
  t5214 = t5188*t5177;
  t5215 = t5211 + t5214;
  t5216 = -0.02159*t5215;
  t5217 = t5101 + t5103 + t5118 + t5124 + t5149 + t5161 + t5182 + t5199 + t5210 + t5216;
  t5221 = 0.09*t5100;
  t5223 = 0.049*t5102;
  t5227 = t5102*t5116;
  t5233 = t5100*t5123;
  t5244 = t5155*t5242;
  t5246 = t5142*t5160;
  t5253 = t5250*t5181;
  t5258 = t5256*t5194;
  t5259 = t5169*t5250;
  t5260 = t5256*t5177;
  t5262 = t5259 + t5260;
  t5263 = -0.02159*t5262;
  t5264 = t5169*t5256;
  t5266 = -1.*t5250*t5177;
  t5267 = t5264 + t5266;
  t5268 = -1.11344*t5267;
  t5270 = t5221 + t5223 + t5227 + t5233 + t5244 + t5246 + t5253 + t5258 + t5263 + t5268;
  t5294 = -1.*t5100*t5104;
  t5297 = t5102*t5114;
  t5300 = t5294 + t5297;
  t5302 = t5140*t5300;
  t5303 = t5183 + t5302;
  t5311 = -1.*t5140*t5147;
  t5312 = t5129*t5300;
  t5313 = t5311 + t5312;
  t5218 = Power(t5217,2);
  t5281 = Power(t5270,2);
  t5282 = 0.00002025 + t5218 + t5281;
  t5284 = 1/Sqrt(t5282);
  t5386 = t5140*t5242;
  t5387 = t5164 + t5386;
  t5390 = t5183 + t5247;
  t5334 = 0.049*t5104;
  t5338 = t5334 + t5115;
  t5347 = -0.21*t5104;
  t5355 = -0.049*t5114;
  t5356 = t5347 + t5355;
  t5293 = t5155*t5147;
  t5370 = 0.01841*t5129;
  t5377 = 0.70544*t5140;
  t5379 = t5370 + t5377;
  t5362 = 0.70544*t5129;
  t5363 = t5362 + t5141;
  t5301 = t5142*t5300;
  t5420 = t5249 + t5302;
  t5423 = t5165 + t5312;
  t5445 = 0.02159*t5169;
  t5453 = t5445 + t5180;
  t5456 = -1.11344*t5169;
  t5462 = -0.02159*t5177;
  t5463 = t5456 + t5462;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=1.;
  p_output1[7]=0;
  p_output1[8]=t3143*t3503*(-0.766044*(t1096*t3413 - 1.*t3378*t46) - 0.642788*(t1096*t3378 + t3413*t46)) + 0.5*t1264*t3122*t3143*(2.*t1958*(0.766044*(t1096*t2386 - 1.*t2306*t46) + 0.642788*(t1096*t2306 + t2386*t46)) + 2.*t3091*(0.766044*(t1096*t2821 - 1.*t2795*t46) + 0.642788*(t1096*t2795 + t2821*t46)));
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=0;
  p_output1[16]=1.;
  p_output1[17]=t3143*t3503*(-0.766044*(t1096*t3850 - 1.*t3844*t46) - 0.642788*(t1096*t3844 + t3850*t46)) + 0.5*t1264*t3122*t3143*(2.*t1958*(0.766044*(t1096*t3630 - 1.*t3618*t46) + 0.642788*(t1096*t3618 + t3630*t46)) + 2.*t3091*(0.766044*(t1096*t3759 - 1.*t3752*t46) + 0.642788*(t1096*t3752 + t3759*t46)));
  p_output1[18]=0;
  p_output1[19]=0;
  p_output1[20]=0;
  p_output1[21]=0;
  p_output1[22]=0.5*t4125*(2.*t4055*t4119 + 2.*t4055*(t4131 + t4135 + t4141 + t4145 + t4146 + t4155 + t4020*t4161 + t4008*t4166 - 0.02159*t4205 - 1.11344*t4243));
  p_output1[23]=t4055*t4349*t4405 + t4398*t4405*(t4058 + t4060 + t4061 + t4063 - 1.*t4020*t4161 - 1.*t4008*t4166 + 0.02159*t4205 + 1.11344*t4243 + t4408 + t4409);
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0.5*t1264*t3122*t3143*(2.*t1958*(0.642788*(t1096*t4477 + t4472*t46) + 0.766044*(t1096*t4472 - 1.*t4477*t46)) + 2.*t3091*(0.642788*(t1096*t4572 + t4546*t46) + 0.766044*(t1096*t4546 - 1.*t4572*t46))) + t3143*t3503*(-0.642788*(t46*t4616 + t1096*t4622) - 0.766044*(t1096*t4616 - 1.*t46*t4622));
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=0;
  p_output1[31]=0.5*t4125*(2.*t4055*(t4146 + t4155 + t269*t4678 + t3993*t4681 + t3973*t4699 + t4020*t4743 + t4008*t4745 - 0.02159*t4752 - 1.11344*t4761 - 1.*t4665*t642) + 2.*t4119*(t3974 + t3995 + t269*t4665 + t4070*t4681 + t3993*t4699 + t4020*t4709 + t4008*t4714 - 0.02159*t4722 - 1.11344*t4729 + t4678*t642));
  p_output1[32]=t4398*t4405*(t4408 + t4409 - 1.*t269*t4678 - 1.*t3993*t4681 - 1.*t3973*t4699 - 1.*t4020*t4743 - 1.*t4008*t4745 + 0.02159*t4752 + 1.11344*t4761 + t4665*t642) + t4055*t4405*(t4329 + t4333 - 1.*t269*t4665 - 1.*t4070*t4681 - 1.*t3993*t4699 - 1.*t4020*t4709 - 1.*t4008*t4714 + 0.02159*t4722 + 1.11344*t4729 - 1.*t4678*t642);
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=t3143*t3503*(-0.642788*(t46*t4856 + t1096*t4862) - 0.766044*(t1096*t4856 - 1.*t46*t4862)) + 0.5*t1264*t3122*t3143*(2.*t1958*(0.642788*(t46*t4886 + t1096*t4896) + 0.766044*(t1096*t4886 - 1.*t46*t4896)) + 2.*t3091*(0.642788*(t46*t4927 + t1096*t4932) + 0.766044*(t1096*t4927 - 1.*t46*t4932)));
  p_output1[36]=0;
  p_output1[37]=0;
  p_output1[38]=0;
  p_output1[39]=0;
  p_output1[40]=0.5*t4125*(2.*t4055*(-0.02159*t4041 + t4013*t4967 + t4026*t4970 - 1.11344*t4976) + 2.*t4119*(-0.02159*t4117 + t4106*t4967 + t4087*t4970 - 1.11344*t4989));
  p_output1[41]=t4398*t4405*(0.02159*t4041 - 1.*t4013*t4967 - 1.*t4026*t4970 + 1.11344*t4976) + t4055*t4405*(0.02159*t4117 - 1.*t4106*t4967 - 1.*t4087*t4970 + 1.11344*t4989);
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=t3143*t3503*(-0.642788*t1136 - 0.766044*(-1.*t1086*t1096 - 1.*t1109*t46)) + 0.5*t1264*t3122*t3143*(2.*t1958*(0.642788*t1877 + 0.766044*(-1.*t1096*t1753 - 1.*t1847*t46)) + 2.*t3091*(0.642788*t3064 + 0.766044*(-1.*t1096*t3028 - 1.*t3055*t46)));
  p_output1[45]=0;
  p_output1[46]=0;
  p_output1[47]=0;
  p_output1[48]=0;
  p_output1[49]=0;
  p_output1[50]=0;
  p_output1[51]=0;
  p_output1[52]=0;
  p_output1[53]=0;
  p_output1[54]=0;
  p_output1[55]=0;
  p_output1[56]=1.;
  p_output1[57]=0;
  p_output1[58]=0;
  p_output1[59]=0;
  p_output1[60]=0;
  p_output1[61]=0;
  p_output1[62]=0;
  p_output1[63]=0;
  p_output1[64]=0;
  p_output1[65]=0;
  p_output1[66]=0.5*t5284*(2.*t5217*t5270 + 2.*t5217*(-0.09*t5100 - 0.049*t5102 - 1.*t5102*t5116 - 1.*t5100*t5123 + t5293 + t5301 + t5181*t5303 + t5194*t5313 - 1.11344*(-1.*t5177*t5303 + t5169*t5313) - 0.02159*(t5169*t5303 + t5177*t5313)));
  p_output1[67]=0;
  p_output1[68]=0;
  p_output1[69]=0;
  p_output1[70]=0;
  p_output1[71]=0;
  p_output1[72]=0;
  p_output1[73]=0;
  p_output1[74]=0;
  p_output1[75]=0.5*t5284*(2.*t5270*(t5149 + t5161 + t5100*t5338 + t5102*t5356 + t5242*t5363 + t5160*t5379 + t5181*t5387 + t5194*t5390 - 1.11344*(-1.*t5177*t5387 + t5169*t5390) - 0.02159*(t5169*t5387 + t5177*t5390)) + 2.*t5217*(t5293 + t5301 - 1.*t5102*t5338 + t5100*t5356 + t5160*t5363 + t5147*t5379 + t5181*t5420 + t5194*t5423 - 1.11344*(-1.*t5177*t5420 + t5169*t5423) - 0.02159*(t5169*t5420 + t5177*t5423)));
  p_output1[76]=0;
  p_output1[77]=0;
  p_output1[78]=0;
  p_output1[79]=0;
  p_output1[80]=0;
  p_output1[81]=0;
  p_output1[82]=0;
  p_output1[83]=0;
  p_output1[84]=0.5*t5284*(2.*t5217*(-1.11344*(-1.*t5168*t5169 - 1.*t5177*t5188) - 0.02159*t5207 + t5188*t5453 + t5168*t5463) + 2.*t5270*(-1.11344*(-1.*t5169*t5250 - 1.*t5177*t5256) - 0.02159*t5267 + t5256*t5453 + t5250*t5463));
  p_output1[85]=0;
  p_output1[86]=0;
  p_output1[87]=0;
  p_output1[88]=0;
  p_output1[89]=0;
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

  double *var1,*var2;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 2)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Two input(s) required (var1,var2).");
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
  mrows = mxGetM(prhs[1]);
  ncols = mxGetN(prhs[1]);
  if( !mxIsDouble(prhs[1]) || mxIsComplex(prhs[1]) ||
    ( !(mrows == 22 && ncols == 1) && 
      !(mrows == 1 && ncols == 22))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var2 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 9, (mwSize) 10, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#endif // MATLAB_MEX_FILE

namespace SymFunction
{

void Jdot_yaRightStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}




