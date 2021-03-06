%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
% J_pelvis_LeftStance_all
% 
% This file is automatically converted to matlab format from C code.
% Source symbolic expressions exported from FROST:
% 	 https://github.com/ayonga/frost-dev
% 
% Author: Jenna Reher (jreher@caltech.edu)
% Automatically generated on: December 23, 2021 T 05:03
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
function out = J_pelvis_LeftStance_all(var1)

  out = zeros(6, 22);

  p_output1 = zeros(132,1);


  t2922 = cos(var1(4));
  t1740 = cos(var1(6));
  t2179 = sin(var1(4));
  t2245 = sin(var1(5));
  t3130 = sin(var1(6));
  t4055 = -1.*var1(8);
  t4062 = -1.*var1(9);
  t4124 = -1.*var1(7);
  t4125 = var1(10) + t4124 + var1(9);
  t4128 = var1(10) + var1(12) + t4124 + var1(9);
  t4133 = var1(10) + var1(7) + var1(9);
  t4138 = var1(10) + var1(12) + var1(7) + var1(9);
  t4141 = var1(10) + t4124 + t4055 + var1(9);
  t4150 = var1(10) + var1(12) + t4124 + t4055 + var1(9);
  t4181 = var1(10) + var1(7) + t4055 + var1(9);
  t4184 = var1(10) + var1(12) + var1(7) + t4055 + var1(9);
  t4187 = var1(10) + t4124 + var1(8) + var1(9);
  t4191 = var1(10) + var1(12) + t4124 + var1(8) + var1(9);
  t4202 = var1(10) + var1(7) + var1(8) + var1(9);
  t4205 = var1(10) + var1(12) + var1(7) + var1(8) + var1(9);
  t4242 = var1(10) + t4055 + var1(9);
  t4245 = var1(10) + var1(12) + t4055 + var1(9);
  t4248 = var1(10) + var1(8) + var1(9);
  t4251 = var1(10) + var1(12) + var1(8) + var1(9);
  t4210 = var1(7) + t4062;
  t4126 = cos(t4125);
  t4129 = cos(t4128);
  t4217 = var1(7) + var1(9);
  t4136 = cos(t4133);
  t4139 = cos(t4138);
  t4148 = cos(t4141);
  t4162 = cos(t4150);
  t4182 = cos(t4181);
  t4185 = cos(t4184);
  t4188 = cos(t4187);
  t4192 = cos(t4191);
  t4203 = cos(t4202);
  t4206 = cos(t4205);
  t4056 = var1(7) + t4055;
  t4059 = var1(7) + var1(8);
  t4063 = var1(7) + t4055 + t4062;
  t4094 = var1(7) + var1(8) + t4062;
  t4213 = sin(t4125);
  t4215 = sin(t4128);
  t4220 = sin(t4133);
  t4222 = sin(t4138);
  t4224 = sin(t4141);
  t4226 = sin(t4150);
  t4178 = var1(7) + t4055 + var1(9);
  t4228 = sin(t4181);
  t4230 = sin(t4184);
  t4232 = sin(t4187);
  t4234 = sin(t4191);
  t4195 = var1(7) + var1(8) + var1(9);
  t4236 = sin(t4202);
  t4238 = sin(t4205);
  t4057 = cos(t4056);
  t4058 = 900.*t4057;
  t4060 = cos(t4059);
  t4061 = 900.*t4060;
  t4064 = cos(t4063);
  t4093 = 12000.*t4064;
  t4095 = cos(t4094);
  t4108 = -12000.*t4095;
  t4127 = 13482.*t4126;
  t4130 = -8000.*t4129;
  t4137 = -13482.*t4136;
  t4140 = 8000.*t4139;
  t4149 = -49544.*t4148;
  t4177 = -40800.*t4162;
  t4179 = cos(t4178);
  t4180 = -12000.*t4179;
  t4183 = -49544.*t4182;
  t4186 = -40800.*t4185;
  t4189 = 49544.*t4188;
  t4193 = 40800.*t4192;
  t4200 = cos(t4195);
  t4201 = 12000.*t4200;
  t4204 = 49544.*t4203;
  t4207 = 40800.*t4206;
  t4208 = sin(var1(7));
  t4209 = -36000.*t4208;
  t4211 = sin(t4210);
  t4212 = -24000.*t4211;
  t4214 = 99088.*t4213;
  t4216 = 81600.*t4215;
  t4218 = sin(t4217);
  t4219 = -24000.*t4218;
  t4221 = -99088.*t4220;
  t4223 = -81600.*t4222;
  t4225 = 6741.*t4224;
  t4227 = -4000.*t4226;
  t4229 = 6741.*t4228;
  t4231 = -4000.*t4230;
  t4233 = -6741.*t4232;
  t4235 = 4000.*t4234;
  t4237 = -6741.*t4236;
  t4239 = 4000.*t4238;
  t4240 = -54000. + t4058 + t4061 + t4093 + t4108 + t4127 + t4130 + t4137 + t4140 + t4149 + t4177 + t4180 + t4183 + t4186 + t4189 + t4193 + t4201 + t4204 + t4207 + t4209 + t4212 + t4214 + t4216 + t4219 + t4221 + t4223 + t4225 + t4227 + t4229 + t4231 + t4233 + t4235 + t4237 + t4239;
  t4243 = cos(t4242);
  t4244 = 6741.*t4243;
  t4246 = cos(t4245);
  t4247 = -4000.*t4246;
  t4249 = cos(t4248);
  t4250 = 6741.*t4249;
  t4252 = cos(t4251);
  t4253 = -4000.*t4252;
  t4254 = sin(var1(8));
  t4255 = 900.*t4254;
  t4256 = var1(8) + t4062;
  t4257 = sin(t4256);
  t4258 = -12000.*t4257;
  t4259 = sin(t4242);
  t4260 = 49544.*t4259;
  t4261 = sin(t4245);
  t4262 = 40800.*t4261;
  t4263 = var1(8) + var1(9);
  t4264 = sin(t4263);
  t4265 = 12000.*t4264;
  t4266 = sin(t4248);
  t4267 = 49544.*t4266;
  t4268 = sin(t4251);
  t4269 = 40800.*t4268;
  t4270 = t4244 + t4247 + t4250 + t4253 + t4255 + t4258 + t4260 + t4262 + t4265 + t4267 + t4269;
  t4271 = 2.*t2245*t4270;
  t4272 = cos(var1(5));
  t4273 = cos(var1(7));
  t4274 = 36000.*t4273;
  t4275 = cos(t4210);
  t4276 = 24000.*t4275;
  t4277 = 99088.*t4126;
  t4278 = 81600.*t4129;
  t4279 = cos(t4217);
  t4280 = 24000.*t4279;
  t4281 = 99088.*t4136;
  t4282 = 81600.*t4139;
  t4283 = 6741.*t4148;
  t4284 = -4000.*t4162;
  t4285 = -6741.*t4182;
  t4286 = 4000.*t4185;
  t4287 = -6741.*t4188;
  t4288 = 4000.*t4192;
  t4289 = 6741.*t4203;
  t4290 = -4000.*t4206;
  t4291 = sin(t4056);
  t4292 = 900.*t4291;
  t4293 = sin(t4059);
  t4294 = 900.*t4293;
  t4295 = sin(t4063);
  t4296 = 12000.*t4295;
  t4297 = sin(t4094);
  t4298 = -12000.*t4297;
  t4299 = -13482.*t4213;
  t4300 = 8000.*t4215;
  t4301 = -13482.*t4220;
  t4302 = 8000.*t4222;
  t4303 = 49544.*t4224;
  t4304 = 40800.*t4226;
  t4305 = sin(t4178);
  t4306 = -12000.*t4305;
  t4307 = -49544.*t4228;
  t4308 = -40800.*t4230;
  t4309 = -49544.*t4232;
  t4310 = -40800.*t4234;
  t4311 = sin(t4195);
  t4312 = 12000.*t4311;
  t4313 = 49544.*t4236;
  t4314 = 40800.*t4238;
  t4315 = t4274 + t4276 + t4277 + t4278 + t4280 + t4281 + t4282 + t4283 + t4284 + t4285 + t4286 + t4287 + t4288 + t4289 + t4290 + t4292 + t4294 + t4296 + t4298 + t4299 + t4300 + t4301 + t4302 + t4303 + t4304 + t4306 + t4307 + t4308 + t4309 + t4310 + t4312 + t4313 + t4314;
  t4316 = t4272*t4315;
  t4317 = t4271 + t4316;
  t4329 = var1(10) + var1(9);
  t4332 = var1(10) + var1(12) + var1(9);
  t4330 = cos(t4329);
  t4333 = cos(t4332);
  t4335 = sin(t4329);
  t4337 = sin(t4332);
  t4358 = 2.*t4272*t4270;
  t4359 = -1.*t2245*t4315;
  t4360 = t4358 + t4359;
  t4327 = cos(var1(9));
  t4328 = 12000.*t4327;
  t4331 = 49544.*t4330;
  t4334 = 40800.*t4333;
  t4336 = -6741.*t4335;
  t4338 = 4000.*t4337;
  t4339 = 9000. + t4328 + t4331 + t4334 + t4336 + t4338;
  t4341 = cos(var1(8));
  t4342 = 450.*t4341;
  t4343 = 6741.*t4330;
  t4344 = -4000.*t4333;
  t4345 = sin(var1(9));
  t4346 = 12000.*t4345;
  t4347 = 49544.*t4335;
  t4348 = 40800.*t4337;
  t4349 = t4343 + t4344 + t4346 + t4347 + t4348;
  t4350 = -1.*t4254*t4349;
  t4351 = t4342 + t4350;
  t4373 = -36000.*t4273;
  t4374 = -24000.*t4275;
  t4375 = -99088.*t4126;
  t4376 = -81600.*t4129;
  t4377 = -24000.*t4279;
  t4378 = -99088.*t4136;
  t4379 = -81600.*t4139;
  t4380 = -6741.*t4148;
  t4381 = 4000.*t4162;
  t4382 = 6741.*t4182;
  t4383 = -4000.*t4185;
  t4384 = 6741.*t4188;
  t4385 = -4000.*t4192;
  t4386 = -6741.*t4203;
  t4387 = 4000.*t4206;
  t4388 = -900.*t4291;
  t4389 = -900.*t4293;
  t4390 = -12000.*t4295;
  t4391 = 12000.*t4297;
  t4392 = 13482.*t4213;
  t4393 = -8000.*t4215;
  t4394 = 13482.*t4220;
  t4395 = -8000.*t4222;
  t4396 = -49544.*t4224;
  t4397 = -40800.*t4226;
  t4398 = 12000.*t4305;
  t4399 = 49544.*t4228;
  t4400 = 40800.*t4230;
  t4401 = 49544.*t4232;
  t4402 = 40800.*t4234;
  t4403 = -12000.*t4311;
  t4404 = -49544.*t4236;
  t4405 = -40800.*t4238;
  t4406 = t4373 + t4374 + t4375 + t4376 + t4377 + t4378 + t4379 + t4380 + t4381 + t4382 + t4383 + t4384 + t4385 + t4386 + t4387 + t4388 + t4389 + t4390 + t4391 + t4392 + t4393 + t4394 + t4395 + t4396 + t4397 + t4398 + t4399 + t4400 + t4401 + t4402 + t4403 + t4404 + t4405;
  t4408 = t4058 + t4061 + t4093 + t4108 + t4127 + t4130 + t4137 + t4140 + t4149 + t4177 + t4180 + t4183 + t4186 + t4189 + t4193 + t4201 + t4204 + t4207 + t4209 + t4212 + t4214 + t4216 + t4219 + t4221 + t4223 + t4225 + t4227 + t4229 + t4231 + t4233 + t4235 + t4237 + t4239;
  t4420 = 900.*t4341;
  t4421 = cos(t4256);
  t4422 = -12000.*t4421;
  t4423 = -49544.*t4243;
  t4424 = -40800.*t4246;
  t4425 = cos(t4263);
  t4426 = 12000.*t4425;
  t4427 = 49544.*t4249;
  t4428 = 40800.*t4252;
  t4429 = 6741.*t4259;
  t4430 = -4000.*t4261;
  t4431 = -6741.*t4266;
  t4432 = 4000.*t4268;
  t4433 = t4420 + t4422 + t4423 + t4424 + t4426 + t4427 + t4428 + t4429 + t4430 + t4431 + t4432;
  t4437 = t4380 + t4381 + t4285 + t4286 + t4287 + t4288 + t4386 + t4387 + t4292 + t4389 + t4296 + t4391 + t4396 + t4397 + t4306 + t4307 + t4308 + t4309 + t4310 + t4403 + t4404 + t4405;
  t4439 = 2.*t2245*t4433;
  t4440 = -900.*t4057;
  t4441 = -12000.*t4064;
  t4442 = 12000.*t4179;
  t4443 = 49544.*t4182;
  t4444 = 40800.*t4185;
  t4445 = -49544.*t4188;
  t4446 = -40800.*t4192;
  t4447 = -6741.*t4228;
  t4448 = 4000.*t4230;
  t4449 = 6741.*t4232;
  t4450 = -4000.*t4234;
  t4451 = t4440 + t4061 + t4441 + t4108 + t4149 + t4177 + t4442 + t4443 + t4444 + t4445 + t4446 + t4201 + t4204 + t4207 + t4225 + t4227 + t4447 + t4448 + t4449 + t4450 + t4237 + t4239;
  t4452 = t4272*t4451;
  t4453 = t4439 + t4452;
  t4472 = 12000.*t4421;
  t4473 = 49544.*t4243;
  t4474 = 40800.*t4246;
  t4475 = -6741.*t4259;
  t4476 = 4000.*t4261;
  t4477 = t4472 + t4473 + t4474 + t4426 + t4427 + t4428 + t4475 + t4476 + t4431 + t4432;
  t4481 = t4276 + t4277 + t4278 + t4377 + t4378 + t4379 + t4283 + t4284 + t4382 + t4383 + t4287 + t4288 + t4386 + t4387 + t4296 + t4298 + t4299 + t4300 + t4394 + t4395 + t4303 + t4304 + t4398 + t4399 + t4400 + t4309 + t4310 + t4403 + t4404 + t4405;
  t4483 = 2.*t2245*t4477;
  t4484 = 12000.*t4095;
  t4485 = -13482.*t4126;
  t4486 = 8000.*t4129;
  t4487 = 49544.*t4148;
  t4488 = 40800.*t4162;
  t4489 = 24000.*t4211;
  t4490 = -99088.*t4213;
  t4491 = -81600.*t4215;
  t4492 = -6741.*t4224;
  t4493 = 4000.*t4226;
  t4494 = t4441 + t4484 + t4485 + t4486 + t4137 + t4140 + t4487 + t4488 + t4180 + t4183 + t4186 + t4445 + t4446 + t4201 + t4204 + t4207 + t4489 + t4490 + t4491 + t4219 + t4221 + t4223 + t4492 + t4493 + t4229 + t4231 + t4449 + t4450 + t4237 + t4239;
  t4495 = t4272*t4494;
  t4496 = t4483 + t4495;
  t4461 = -6741.*t4330;
  t4462 = 4000.*t4333;
  t4464 = -49544.*t4335;
  t4465 = -40800.*t4337;
  t4510 = t4473 + t4474 + t4427 + t4428 + t4475 + t4476 + t4431 + t4432;
  t4514 = t4277 + t4278 + t4378 + t4379 + t4283 + t4284 + t4382 + t4383 + t4287 + t4288 + t4386 + t4387 + t4299 + t4300 + t4394 + t4395 + t4303 + t4304 + t4399 + t4400 + t4309 + t4310 + t4404 + t4405;
  t4516 = 2.*t2245*t4510;
  t4517 = t4485 + t4486 + t4137 + t4140 + t4487 + t4488 + t4183 + t4186 + t4445 + t4446 + t4204 + t4207 + t4490 + t4491 + t4221 + t4223 + t4492 + t4493 + t4229 + t4231 + t4449 + t4450 + t4237 + t4239;
  t4518 = t4272*t4517;
  t4519 = t4516 + t4518;
  t4533 = t4474 + t4428 + t4476 + t4432;
  t4537 = t4278 + t4379 + t4284 + t4383 + t4288 + t4387 + t4300 + t4395 + t4304 + t4400 + t4310 + t4405;
  t4539 = 2.*t2245*t4533;
  t4540 = t4486 + t4140 + t4488 + t4186 + t4446 + t4207 + t4491 + t4223 + t4493 + t4231 + t4450 + t4239;
  t4541 = t4272*t4540;
  t4542 = t4539 + t4541;
  p_output1(19)=-1.*t1740*t2179*t2245 - 1.*t2922*t3130;
  p_output1(20)=t1740*t2922 - 1.*t2179*t2245*t3130;
  p_output1(23)=2.5e-6*(-1.*t2179*t4240 - 1.*t2922*t4317);
  p_output1(24)=2.5e-6*(t2922*t4240 - 1.*t2179*t4317);
  p_output1(25)=t1740*t2922*t4272;
  p_output1(26)=t2922*t3130*t4272;
  p_output1(28)=5.e-6*(t2245*t4270 + 2.*t4272*(t4273*t4339 + t4208*t4351));
  p_output1(29)=-2.5e-6*t2179*t4360;
  p_output1(30)=2.5e-6*t2922*t4360;
  p_output1(31)=-1.*t1740*t2179 - 1.*t2245*t2922*t3130;
  p_output1(32)=t1740*t2245*t2922 - 1.*t2179*t3130;
  p_output1(40)=1.e-5*t2245*(-1.*t4208*t4339 + t4273*t4351);
  p_output1(41)=2.5e-6*(t2922*t4406 - 1.*t2179*t4272*t4408);
  p_output1(42)=2.5e-6*(t2179*t4406 + t2922*t4272*t4408);
  p_output1(45)=1.;
  p_output1(46)=5.e-6*(2.*t2245*t4208*(-450.*t4254 - 1.*t4341*t4349) - 1.*t4272*t4433);
  p_output1(47)=2.5e-6*(t2922*t4437 - 1.*t2179*t4453);
  p_output1(48)=2.5e-6*(t2179*t4437 + t2922*t4453);
  p_output1(52)=5.e-6*(2.*t2245*(-1.*t4208*t4254*(t4328 + t4331 + t4334 + t4336 + t4338) + t4273*(-12000.*t4345 + t4461 + t4462 + t4464 + t4465)) - 1.*t4272*t4477);
  p_output1(53)=2.5e-6*(t2922*t4481 - 1.*t2179*t4496);
  p_output1(54)=2.5e-6*(t2179*t4481 + t2922*t4496);
  p_output1(58)=5.e-6*(2.*t2245*(-1.*t4208*t4254*(t4331 + t4334 + t4336 + t4338) + t4273*(t4461 + t4462 + t4464 + t4465)) - 1.*t4272*t4510);
  p_output1(59)=2.5e-6*(t2922*t4514 - 1.*t2179*t4519);
  p_output1(60)=2.5e-6*(t2179*t4514 + t2922*t4519);
  p_output1(70)=5.e-6*(2.*t2245*(-1.*t4208*t4254*(t4334 + t4338) + t4273*(t4462 + t4465)) - 1.*t4272*t4533);
  p_output1(71)=2.5e-6*(t2922*t4537 - 1.*t2179*t4542);
  p_output1(72)=2.5e-6*(t2179*t4537 + t2922*t4542);
  out = reshape(p_output1, 6, 22);
end