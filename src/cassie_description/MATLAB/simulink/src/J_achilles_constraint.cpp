/*
 * Automatically Generated from Mathematica.
 * Wed 21 Aug 2019 14:42:08 GMT-07:00
 */

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

/*
 * Sub functions
 */
static void output1(double *p_output1,const double *var1)
{
  double t794;
  double t294;
  double t1059;
  double t1899;
  double t2042;
  double t2709;
  double t4014;
  double t4041;
  double t4083;
  double t4119;
  double t4205;
  double t4206;
  double t4210;
  double t3969;
  double t3983;
  double t4002;
  double t4279;
  double t4285;
  double t4287;
  double t4295;
  double t4296;
  double t4301;
  double t4400;
  double t4320;
  double t4372;
  double t4377;
  double t4427;
  double t4504;
  double t4389;
  double t4595;
  double t2585;
  double t2966;
  double t3440;
  double t3524;
  double t3553;
  double t3623;
  double t4118;
  double t4120;
  double t4181;
  double t4227;
  double t4249;
  double t4261;
  double t4290;
  double t4293;
  double t4825;
  double t4828;
  double t4871;
  double t4429;
  double t4901;
  double t4909;
  double t4436;
  double t4439;
  double t4440;
  double t4913;
  double t4918;
  double t4924;
  double t4451;
  double t4456;
  double t4479;
  double t4502;
  double t4503;
  double t4507;
  double t4537;
  double t4543;
  double t4544;
  double t4545;
  double t4553;
  double t4558;
  double t4568;
  double t4575;
  double t4581;
  double t4588;
  double t4589;
  double t4591;
  double t4606;
  double t4617;
  double t4621;
  double t4647;
  double t4649;
  double t4681;
  double t4716;
  double t4720;
  double t4988;
  double t4996;
  double t4998;
  double t5004;
  double t5012;
  double t5026;
  double t5030;
  double t5035;
  double t4759;
  double t4804;
  double t4823;
  double t4872;
  double t4884;
  double t4911;
  double t4926;
  double t4928;
  double t4931;
  double t4934;
  double t4935;
  double t4937;
  double t4941;
  double t4945;
  double t4947;
  double t4951;
  double t4952;
  double t4957;
  double t4975;
  double t4981;
  double t4982;
  double t4983;
  double t4984;
  double t5001;
  double t5002;
  double t5017;
  double t5036;
  double t5037;
  double t5039;
  double t5043;
  double t5047;
  double t5048;
  double t5055;
  double t5056;
  double t5063;
  double t5064;
  double t5069;
  double t5071;
  double t5072;
  double t5076;
  double t5086;
  double t5087;
  double t5089;
  double t5091;
  double t5093;
  double t4191;
  double t4275;
  double t4303;
  double t4430;
  double t4432;
  double t4434;
  double t4447;
  double t4480;
  double t4491;
  double t4500;
  double t4562;
  double t4628;
  double t4680;
  double t4686;
  double t4687;
  double t4689;
  double t4737;
  double t4979;
  double t5112;
  double t5114;
  double t5103;
  double t5104;
  double t5107;
  double t5108;
  double t5109;
  double t5151;
  double t5153;
  double t5234;
  double t5244;
  double t5225;
  double t5248;
  double t5243;
  double t5235;
  double t5247;
  double t5227;
  double t5272;
  double t5283;
  double t5269;
  double t5294;
  double t5256;
  double t5258;
  double t5266;
  double t5267;
  double t5273;
  double t5274;
  double t5278;
  double t5279;
  double t5281;
  double t5282;
  double t5284;
  double t5285;
  double t5287;
  double t5288;
  double t5305;
  double t5295;
  double t5366;
  double t5360;
  double t5370;
  double t5371;
  double t5372;
  double t5375;
  double t5391;
  double t5394;
  double t5395;
  double t5398;
  double t5403;
  double t5404;
  double t5406;
  double t5386;
  double t5387;
  double t5389;
  double t5413;
  double t5414;
  double t5415;
  double t5419;
  double t5421;
  double t5422;
  double t5434;
  double t5440;
  double t5426;
  double t5430;
  double t5432;
  double t5453;
  double t5433;
  double t5508;
  double t5373;
  double t5376;
  double t5378;
  double t5380;
  double t5381;
  double t5383;
  double t5396;
  double t5400;
  double t5401;
  double t5407;
  double t5408;
  double t5409;
  double t5416;
  double t5417;
  double t5530;
  double t5531;
  double t5532;
  double t5442;
  double t5535;
  double t5537;
  double t5451;
  double t5452;
  double t5461;
  double t5463;
  double t5464;
  double t5465;
  double t5468;
  double t5470;
  double t5473;
  double t5539;
  double t5540;
  double t5541;
  double t5477;
  double t5478;
  double t5480;
  double t5485;
  double t5486;
  double t5487;
  double t5499;
  double t5500;
  double t5504;
  double t5505;
  double t5506;
  double t5507;
  double t5509;
  double t5510;
  double t5512;
  double t5514;
  double t5515;
  double t5517;
  double t5524;
  double t5525;
  double t5567;
  double t5569;
  double t5570;
  double t5573;
  double t5574;
  double t5576;
  double t5578;
  double t5579;
  double t5527;
  double t5528;
  double t5529;
  double t5533;
  double t5534;
  double t5538;
  double t5542;
  double t5544;
  double t5545;
  double t5547;
  double t5549;
  double t5550;
  double t5551;
  double t5552;
  double t5553;
  double t5554;
  double t5555;
  double t5556;
  double t5558;
  double t5561;
  double t5563;
  double t5564;
  double t5565;
  double t5571;
  double t5572;
  double t5575;
  double t5580;
  double t5581;
  double t5582;
  double t5583;
  double t5584;
  double t5585;
  double t5587;
  double t5588;
  double t5589;
  double t5590;
  double t5591;
  double t5592;
  double t5593;
  double t5594;
  double t5599;
  double t5600;
  double t5602;
  double t5603;
  double t5604;
  double t5402;
  double t5411;
  double t5424;
  double t5444;
  double t5445;
  double t5449;
  double t5474;
  double t5481;
  double t5489;
  double t5496;
  double t5498;
  double t5513;
  double t5516;
  double t5519;
  double t5521;
  double t5522;
  double t5526;
  double t5559;
  double t5626;
  double t5627;
  double t5617;
  double t5618;
  double t5620;
  double t5621;
  double t5622;
  double t5653;
  double t5655;
  double t5713;
  double t5700;
  double t5709;
  double t5704;
  double t5703;
  double t5710;
  double t5731;
  double t5699;
  double t5714;
  double t5741;
  double t5730;
  double t5751;
  double t5724;
  double t5726;
  double t5732;
  double t5735;
  double t5736;
  double t5737;
  double t5738;
  double t5739;
  double t5742;
  double t5743;
  double t5744;
  double t5745;
  double t5747;
  double t5748;
  double t5758;
  double t5752;
  t794 = Sin(var1[9]);
  t294 = Cos(var1[9]);
  t1059 = Cos(var1[10]);
  t1899 = -1.*t1059;
  t2042 = 1. + t1899;
  t2709 = Sin(var1[10]);
  t4014 = Cos(var1[11]);
  t4041 = -1.*t4014;
  t4083 = 1. + t4041;
  t4119 = Sin(var1[11]);
  t4205 = -1.*t294*t1059;
  t4206 = t794*t2709;
  t4210 = t4205 + t4206;
  t3969 = -1.*t1059*t794;
  t3983 = -1.*t294*t2709;
  t4002 = t3969 + t3983;
  t4279 = Cos(var1[12]);
  t4285 = -1.*t4279;
  t4287 = 1. + t4285;
  t4295 = t4014*t4210;
  t4296 = -1.*t4002*t4119;
  t4301 = t4295 + t4296;
  t4400 = Sin(var1[12]);
  t4320 = t4014*t4002;
  t4372 = t4210*t4119;
  t4377 = t4320 + t4372;
  t4427 = -0.996943*t4400;
  t4504 = -0.0004284921280000001*t4287;
  t4389 = 0.0004284921280000001*t4287;
  t4595 = 0.996943*t4400;
  t2585 = -0.00159*t2042;
  t2966 = -0.27068*t2709;
  t3440 = t2585 + t2966;
  t3524 = -0.27068*t2042;
  t3553 = 0.00159*t2709;
  t3623 = t3524 + t3553;
  t4118 = 0.01841*t4083;
  t4120 = -0.70544*t4119;
  t4181 = t4118 + t4120;
  t4227 = -0.70544*t4083;
  t4249 = -0.01841*t4119;
  t4261 = t4227 + t4249;
  t4290 = -0.999969365345*t4287;
  t4293 = 1. + t4290;
  t4825 = t294*t1059;
  t4828 = -1.*t794*t2709;
  t4871 = t4825 + t4828;
  t4429 = t4389 + t4427;
  t4901 = -1.*t4871*t4119;
  t4909 = t4320 + t4901;
  t4436 = 0.005481192614*t4287;
  t4439 = -0.077936*t4400;
  t4440 = t4436 + t4439;
  t4913 = t4014*t4871;
  t4918 = t4002*t4119;
  t4924 = t4913 + t4918;
  t4451 = 0.07769774964800001*t4287;
  t4456 = 0.005498*t4400;
  t4479 = t4451 + t4456;
  t4502 = -1.2096424700126054e-9*var1[12];
  t4503 = -0.6934128581485427*t4287;
  t4507 = t4504 + t4427;
  t4537 = -0.021877537552*t4507;
  t4543 = -0.005481192614*t4287;
  t4544 = 0.077936*t4400;
  t4545 = t4543 + t4544;
  t4553 = 0.005534467322*t4545;
  t4558 = t4502 + t4503 + t4537 + t4553;
  t4568 = -1.7147089040178687e-8*var1[12];
  t4575 = -0.021744644052735636*t4287;
  t4581 = -0.07769774964800001*t4287;
  t4588 = -0.005498*t4400;
  t4589 = t4581 + t4588;
  t4591 = 0.005534467322*t4589;
  t4606 = t4504 + t4595;
  t4617 = -0.6934341012630001*t4606;
  t4621 = t4568 + t4575 + t4591 + t4617;
  t4647 = -0.993925573253*t4287;
  t4649 = 1. + t4647;
  t4681 = t4389 + t4595;
  t4716 = -1.*t294;
  t4720 = 1. + t4716;
  t4988 = t1059*t794;
  t4996 = t294*t2709;
  t4998 = t4988 + t4996;
  t5004 = -1.*t4998*t4119;
  t5012 = t4913 + t5004;
  t5026 = t4014*t4998;
  t5030 = t4871*t4119;
  t5035 = t5026 + t5030;
  t4759 = 0.21*t794;
  t4804 = -1.*t294*t3440;
  t4823 = t794*t3623;
  t4872 = -1.*t4871*t4181;
  t4884 = -1.*t4002*t4261;
  t4911 = t4293*t4909;
  t4926 = t4924*t4429;
  t4928 = t4911 + t4926;
  t4931 = 0.588518*t4928;
  t4934 = t4909*t4440;
  t4935 = t4924*t4479;
  t4937 = t4934 + t4935;
  t4941 = -0.124503*t4937;
  t4945 = -1.*t4909*t4558;
  t4947 = -1.*t4924*t4621;
  t4951 = t4649*t4924;
  t4952 = t4909*t4681;
  t4957 = t4951 + t4952;
  t4975 = -0.045407*t4957;
  t4981 = 0.21*t4720;
  t4982 = -0.049*t794;
  t4983 = -1.*t794*t3440;
  t4984 = -1.*t294*t3623;
  t5001 = -1.*t4998*t4181;
  t5002 = -1.*t4871*t4261;
  t5017 = t4293*t5012;
  t5036 = t5035*t4429;
  t5037 = t5017 + t5036;
  t5039 = 0.588518*t5037;
  t5043 = t5012*t4440;
  t5047 = t5035*t4479;
  t5048 = t5043 + t5047;
  t5055 = -0.124503*t5048;
  t5056 = -1.*t5012*t4558;
  t5063 = -1.*t5035*t4621;
  t5064 = t4649*t5035;
  t5069 = t5012*t4681;
  t5071 = t5064 + t5069;
  t5072 = -0.045407*t5071;
  t5076 = -0.09 + t4981 + t4982 + t4983 + t4984 + t5001 + t5002 + t5039 + t5055 + t5056 + t5063 + t5072;
  t5086 = 0.00159*t1059;
  t5087 = t5086 + t2966;
  t5089 = -0.27068*t1059;
  t5091 = -0.00159*t2709;
  t5093 = t5089 + t5091;
  t4191 = -1.*t4002*t4181;
  t4275 = -1.*t4210*t4261;
  t4303 = t4293*t4301;
  t4430 = t4377*t4429;
  t4432 = t4303 + t4430;
  t4434 = 0.588518*t4432;
  t4447 = t4301*t4440;
  t4480 = t4377*t4479;
  t4491 = t4447 + t4480;
  t4500 = -0.124503*t4491;
  t4562 = -1.*t4301*t4558;
  t4628 = -1.*t4377*t4621;
  t4680 = t4649*t4377;
  t4686 = t4301*t4681;
  t4687 = t4680 + t4686;
  t4689 = -0.045407*t4687;
  t4737 = 0.049*t4720;
  t4979 = -0.049 + t4737 + t4759 + t4804 + t4823 + t4872 + t4884 + t4931 + t4941 + t4945 + t4947 + t4975;
  t5112 = -1.*t4014*t4871;
  t5114 = t5112 + t4296;
  t5103 = -0.01841*t4014;
  t5104 = t5103 + t4120;
  t5107 = -0.70544*t4014;
  t5108 = 0.01841*t4119;
  t5109 = t5107 + t5108;
  t5151 = -1.*t4014*t4998;
  t5153 = t5151 + t4901;
  t5234 = -0.077936*t4279;
  t5244 = 0.005481192614*t4400;
  t5225 = 0.005498*t4279;
  t5248 = 0.07769774964800001*t4400;
  t5243 = 0.077936*t4279;
  t5235 = -0.005481192614*t4400;
  t5247 = -0.005498*t4279;
  t5227 = -0.07769774964800001*t4400;
  t5272 = -0.0004284921280000001*t4400;
  t5283 = 0.996943*t4279;
  t5269 = -0.996943*t4279;
  t5294 = 0.0004284921280000001*t4400;
  t5256 = t5234 + t5244;
  t5258 = t5225 + t5248;
  t5266 = t5243 + t5235;
  t5267 = 0.005534467322*t5266;
  t5273 = t5269 + t5272;
  t5274 = -0.021877537552*t5273;
  t5278 = -0.6934128581485427*t4400;
  t5279 = -1.2096424700126054e-9 + t5267 + t5274 + t5278;
  t5281 = t5247 + t5227;
  t5282 = 0.005534467322*t5281;
  t5284 = t5283 + t5272;
  t5285 = -0.6934341012630001*t5284;
  t5287 = -0.021744644052735636*t4400;
  t5288 = -1.7147089040178687e-8 + t5282 + t5285 + t5287;
  t5305 = t5269 + t5294;
  t5295 = t5283 + t5294;
  t5366 = Sin(var1[17]);
  t5360 = Cos(var1[17]);
  t5370 = Cos(var1[18]);
  t5371 = -1.*t5370;
  t5372 = 1. + t5371;
  t5375 = Sin(var1[18]);
  t5391 = Cos(var1[19]);
  t5394 = -1.*t5391;
  t5395 = 1. + t5394;
  t5398 = Sin(var1[19]);
  t5403 = -1.*t5360*t5370;
  t5404 = t5366*t5375;
  t5406 = t5403 + t5404;
  t5386 = -1.*t5370*t5366;
  t5387 = -1.*t5360*t5375;
  t5389 = t5386 + t5387;
  t5413 = Cos(var1[20]);
  t5414 = -1.*t5413;
  t5415 = 1. + t5414;
  t5419 = t5391*t5406;
  t5421 = -1.*t5389*t5398;
  t5422 = t5419 + t5421;
  t5434 = Sin(var1[20]);
  t5440 = -0.996943*t5434;
  t5426 = t5391*t5389;
  t5430 = t5406*t5398;
  t5432 = t5426 + t5430;
  t5453 = -0.0004284921280000001*t5415;
  t5433 = 0.0004284921280000001*t5415;
  t5508 = 0.996943*t5434;
  t5373 = -0.00159*t5372;
  t5376 = -0.27068*t5375;
  t5378 = t5373 + t5376;
  t5380 = -0.27068*t5372;
  t5381 = 0.00159*t5375;
  t5383 = t5380 + t5381;
  t5396 = 0.01841*t5395;
  t5400 = -0.70544*t5398;
  t5401 = t5396 + t5400;
  t5407 = -0.70544*t5395;
  t5408 = -0.01841*t5398;
  t5409 = t5407 + t5408;
  t5416 = -0.999969365345*t5415;
  t5417 = 1. + t5416;
  t5530 = t5360*t5370;
  t5531 = -1.*t5366*t5375;
  t5532 = t5530 + t5531;
  t5442 = t5433 + t5440;
  t5535 = -1.*t5532*t5398;
  t5537 = t5426 + t5535;
  t5451 = -1.2096424700126054e-9*var1[20];
  t5452 = -0.6934128581485427*t5415;
  t5461 = t5453 + t5440;
  t5463 = -0.021877537552*t5461;
  t5464 = 0.005481192614*t5415;
  t5465 = -0.077936*t5434;
  t5468 = t5464 + t5465;
  t5470 = -0.005534467322*t5468;
  t5473 = t5451 + t5452 + t5463 + t5470;
  t5539 = t5391*t5532;
  t5540 = t5389*t5398;
  t5541 = t5539 + t5540;
  t5477 = -0.07769774964800001*t5415;
  t5478 = -0.005498*t5434;
  t5480 = t5477 + t5478;
  t5485 = -0.005481192614*t5415;
  t5486 = 0.077936*t5434;
  t5487 = t5485 + t5486;
  t5499 = -1.7147089040178687e-8*var1[20];
  t5500 = -0.021744644052735636*t5415;
  t5504 = 0.07769774964800001*t5415;
  t5505 = 0.005498*t5434;
  t5506 = t5504 + t5505;
  t5507 = -0.005534467322*t5506;
  t5509 = t5453 + t5508;
  t5510 = -0.6934341012630001*t5509;
  t5512 = t5499 + t5500 + t5507 + t5510;
  t5514 = -0.993925573253*t5415;
  t5515 = 1. + t5514;
  t5517 = t5433 + t5508;
  t5524 = -1.*t5360;
  t5525 = 1. + t5524;
  t5567 = t5370*t5366;
  t5569 = t5360*t5375;
  t5570 = t5567 + t5569;
  t5573 = -1.*t5570*t5398;
  t5574 = t5539 + t5573;
  t5576 = t5391*t5570;
  t5578 = t5532*t5398;
  t5579 = t5576 + t5578;
  t5527 = 0.21*t5366;
  t5528 = -1.*t5360*t5378;
  t5529 = t5366*t5383;
  t5533 = -1.*t5532*t5401;
  t5534 = -1.*t5389*t5409;
  t5538 = t5417*t5537;
  t5542 = t5541*t5442;
  t5544 = t5538 + t5542;
  t5545 = 0.588518*t5544;
  t5547 = -1.*t5537*t5473;
  t5549 = t5541*t5480;
  t5550 = t5537*t5487;
  t5551 = t5549 + t5550;
  t5552 = 0.124503*t5551;
  t5553 = -1.*t5541*t5512;
  t5554 = t5515*t5541;
  t5555 = t5537*t5517;
  t5556 = t5554 + t5555;
  t5558 = -0.045407*t5556;
  t5561 = 0.21*t5525;
  t5563 = -0.049*t5366;
  t5564 = -1.*t5366*t5378;
  t5565 = -1.*t5360*t5383;
  t5571 = -1.*t5570*t5401;
  t5572 = -1.*t5532*t5409;
  t5575 = t5417*t5574;
  t5580 = t5579*t5442;
  t5581 = t5575 + t5580;
  t5582 = 0.588518*t5581;
  t5583 = -1.*t5574*t5473;
  t5584 = t5579*t5480;
  t5585 = t5574*t5487;
  t5587 = t5584 + t5585;
  t5588 = 0.124503*t5587;
  t5589 = -1.*t5579*t5512;
  t5590 = t5515*t5579;
  t5591 = t5574*t5517;
  t5592 = t5590 + t5591;
  t5593 = -0.045407*t5592;
  t5594 = -0.09 + t5561 + t5563 + t5564 + t5565 + t5571 + t5572 + t5582 + t5583 + t5588 + t5589 + t5593;
  t5599 = 0.00159*t5370;
  t5600 = t5599 + t5376;
  t5602 = -0.27068*t5370;
  t5603 = -0.00159*t5375;
  t5604 = t5602 + t5603;
  t5402 = -1.*t5389*t5401;
  t5411 = -1.*t5406*t5409;
  t5424 = t5417*t5422;
  t5444 = t5432*t5442;
  t5445 = t5424 + t5444;
  t5449 = 0.588518*t5445;
  t5474 = -1.*t5422*t5473;
  t5481 = t5432*t5480;
  t5489 = t5422*t5487;
  t5496 = t5481 + t5489;
  t5498 = 0.124503*t5496;
  t5513 = -1.*t5432*t5512;
  t5516 = t5515*t5432;
  t5519 = t5422*t5517;
  t5521 = t5516 + t5519;
  t5522 = -0.045407*t5521;
  t5526 = 0.049*t5525;
  t5559 = -0.049 + t5526 + t5527 + t5528 + t5529 + t5533 + t5534 + t5545 + t5547 + t5552 + t5553 + t5558;
  t5626 = -1.*t5391*t5532;
  t5627 = t5626 + t5421;
  t5617 = -0.01841*t5391;
  t5618 = t5617 + t5400;
  t5620 = -0.70544*t5391;
  t5621 = 0.01841*t5398;
  t5622 = t5620 + t5621;
  t5653 = -1.*t5391*t5570;
  t5655 = t5653 + t5535;
  t5713 = -0.005498*t5413;
  t5700 = -0.07769774964800001*t5434;
  t5709 = 0.077936*t5413;
  t5704 = -0.005481192614*t5434;
  t5703 = -0.077936*t5413;
  t5710 = 0.005481192614*t5434;
  t5731 = -0.0004284921280000001*t5434;
  t5699 = 0.005498*t5413;
  t5714 = 0.07769774964800001*t5434;
  t5741 = 0.996943*t5413;
  t5730 = -0.996943*t5413;
  t5751 = 0.0004284921280000001*t5434;
  t5724 = t5713 + t5700;
  t5726 = t5709 + t5704;
  t5732 = t5730 + t5731;
  t5735 = -0.021877537552*t5732;
  t5736 = t5703 + t5710;
  t5737 = -0.005534467322*t5736;
  t5738 = -0.6934128581485427*t5434;
  t5739 = -1.2096424700126054e-9 + t5735 + t5737 + t5738;
  t5742 = t5741 + t5731;
  t5743 = -0.6934341012630001*t5742;
  t5744 = t5699 + t5714;
  t5745 = -0.005534467322*t5744;
  t5747 = -0.021744644052735636*t5434;
  t5748 = -1.7147089040178687e-8 + t5743 + t5745 + t5747;
  t5758 = t5730 + t5751;
  t5752 = t5741 + t5751;
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
  p_output1[18]=2.*(-0.049*t294 + t4759 + t4804 + t4823 + t4872 + t4884 + t4931 + t4941 + t4945 + t4947 + t4975)*t5076 + 2.*t4979*(0.21*t294 + t294*t3623 + t4191 + t4275 + t4434 + t4500 + t4562 + t4628 + t4689 + 0.049*t794 + t3440*t794);
  p_output1[19]=0;
  p_output1[20]=2.*t4979*(t4191 + t4275 + t4434 + t4500 + t4562 + t4628 + t4689 - 1.*t294*t5093 + t5087*t794) + 2.*t5076*(t4872 + t4884 + t4931 + t4941 + t4945 + t4947 + t4975 - 1.*t294*t5087 - 1.*t5093*t794);
  p_output1[21]=0;
  p_output1[22]=2.*t4979*(-1.*t4621*t4909 - 1.*t4002*t5104 - 1.*t4871*t5109 - 1.*t4558*t5114 + 0.588518*(t4429*t4909 + t4293*t5114) - 0.124503*(t4479*t4909 + t4440*t5114) - 0.045407*(t4649*t4909 + t4681*t5114)) + 2.*t5076*(-1.*t4621*t5012 - 1.*t4871*t5104 - 1.*t4998*t5109 - 1.*t4558*t5153 + 0.588518*(t4429*t5012 + t4293*t5153) - 0.124503*(t4479*t5012 + t4440*t5153) - 0.045407*(t4649*t5012 + t4681*t5153));
  p_output1[23]=0;
  p_output1[24]=2.*t4979*(-0.124503*(t4909*t5256 + t4924*t5258) - 1.*t4909*t5279 - 1.*t4924*t5288 - 0.045407*(-0.993925573253*t4400*t4924 + t4909*t5295) + 0.588518*(-0.999969365345*t4400*t4909 + t4924*t5305)) + 2.*t5076*(-0.124503*(t5012*t5256 + t5035*t5258) - 1.*t5012*t5279 - 1.*t5035*t5288 - 0.045407*(-0.993925573253*t4400*t5035 + t5012*t5295) + 0.588518*(-0.999969365345*t4400*t5012 + t5035*t5305)) + 2.*(2.1934241414728571e-7 + 0.0007262134395594695*t4400 + 0.021877537552*(t5225 + t5227) + 0.6934341012630001*(t5234 + t5235) + 0.588518*(t5243 + t5244) - 0.045407*(t5247 + t5248))*(0.09 - 0.124503*(1. - 0.006104248100000001*t4287) - 0.000033783761634830594*t4287 + 0.6934341012630001*(t4439 + t4543) + 0.588518*(t4436 + t4544) + 0.021877537552*(t4456 + t4581) - 0.045407*(t4451 + t4588) + 2.1934241414728571e-7*var1[12]);
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=0;
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=2.*(0.21*t5360 + 0.049*t5366 + t5366*t5378 + t5360*t5383 + t5402 + t5411 + t5449 + t5474 + t5498 + t5513 + t5522)*t5559 + 2.*(-0.049*t5360 + t5527 + t5528 + t5529 + t5533 + t5534 + t5545 + t5547 + t5552 + t5553 + t5558)*t5594;
  p_output1[36]=0;
  p_output1[37]=2.*t5559*(t5402 + t5411 + t5449 + t5474 + t5498 + t5513 + t5522 + t5366*t5600 - 1.*t5360*t5604) + 2.*t5594*(t5533 + t5534 + t5545 + t5547 + t5552 + t5553 + t5558 - 1.*t5360*t5600 - 1.*t5366*t5604);
  p_output1[38]=0;
  p_output1[39]=2.*t5559*(-1.*t5512*t5537 - 1.*t5389*t5618 - 1.*t5532*t5622 - 1.*t5473*t5627 + 0.588518*(t5442*t5537 + t5417*t5627) + 0.124503*(t5480*t5537 + t5487*t5627) - 0.045407*(t5515*t5537 + t5517*t5627)) + 2.*t5594*(-1.*t5512*t5574 - 1.*t5532*t5618 - 1.*t5570*t5622 - 1.*t5473*t5655 + 0.588518*(t5442*t5574 + t5417*t5655) + 0.124503*(t5480*t5574 + t5487*t5655) - 0.045407*(t5515*t5574 + t5517*t5655));
  p_output1[40]=0;
  p_output1[41]=2.*t5559*(0.124503*(t5541*t5724 + t5537*t5726) - 1.*t5537*t5739 - 1.*t5541*t5748 - 0.045407*(-0.993925573253*t5434*t5541 + t5537*t5752) + 0.588518*(-0.999969365345*t5434*t5537 + t5541*t5758)) + 2.*t5594*(0.124503*(t5579*t5724 + t5574*t5726) - 1.*t5574*t5739 - 1.*t5579*t5748 - 0.045407*(-0.993925573253*t5434*t5579 + t5574*t5752) + 0.588518*(-0.999969365345*t5434*t5574 + t5579*t5758)) + 2.*(-2.1934241414728571e-7 - 0.0007262134395594695*t5434 - 0.045407*(t5699 + t5700) + 0.588518*(t5703 + t5704) + 0.6934341012630001*(t5709 + t5710) + 0.021877537552*(t5713 + t5714))*(-0.09 + 0.124503*(1. - 0.006104248100000001*t5415) + 0.000033783761634830594*t5415 + 0.588518*(t5465 + t5485) + 0.6934341012630001*(t5464 + t5486) + 0.021877537552*(t5478 + t5504) - 0.045407*(t5477 + t5505) - 2.1934241414728571e-7*var1[20]);
  p_output1[42]=0;
  p_output1[43]=0;
}

namespace SymFunction
{

void J_achilles_constraint_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}



