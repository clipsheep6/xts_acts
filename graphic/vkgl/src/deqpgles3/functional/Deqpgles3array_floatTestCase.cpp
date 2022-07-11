/*
 * Copyright (c) 2022 Shenzhen Kaihong Digital Industry Development Co., Ltd.
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <climits>
#include <gtest/gtest.h>
#include "../Deqpgles3BaseFunc.h"
#include "../ActsDeqpgles30040TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_039140_1 "dEQP-GLES3.functional.fragment_o"
#define VkglTestCase_039140_2 "ut.array.float.rgba32f_lowp_float"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039140, VkglTestCase_039140_1, VkglTestCase_039140_2);

#define VkglTestCase_039141_1 "dEQP-GLES3.functional.fragment_o"
#define VkglTestCase_039141_2 "ut.array.float.rgba32f_lowp_vec2"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039141, VkglTestCase_039141_1, VkglTestCase_039141_2);

#define VkglTestCase_039142_1 "dEQP-GLES3.functional.fragment_o"
#define VkglTestCase_039142_2 "ut.array.float.rgba32f_lowp_vec3"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039142, VkglTestCase_039142_1, VkglTestCase_039142_2);

#define VkglTestCase_039143_1 "dEQP-GLES3.functional.fragment_o"
#define VkglTestCase_039143_2 "ut.array.float.rgba32f_lowp_vec4"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039143, VkglTestCase_039143_1, VkglTestCase_039143_2);

#define VkglTestCase_039144_1 "dEQP-GLES3.functional.fragment_out"
#define VkglTestCase_039144_2 ".array.float.rgba32f_mediump_float"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039144, VkglTestCase_039144_1, VkglTestCase_039144_2);

#define VkglTestCase_039145_1 "dEQP-GLES3.functional.fragment_ou"
#define VkglTestCase_039145_2 "t.array.float.rgba32f_mediump_vec2"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039145, VkglTestCase_039145_1, VkglTestCase_039145_2);

#define VkglTestCase_039146_1 "dEQP-GLES3.functional.fragment_ou"
#define VkglTestCase_039146_2 "t.array.float.rgba32f_mediump_vec3"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039146, VkglTestCase_039146_1, VkglTestCase_039146_2);

#define VkglTestCase_039147_1 "dEQP-GLES3.functional.fragment_ou"
#define VkglTestCase_039147_2 "t.array.float.rgba32f_mediump_vec4"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039147, VkglTestCase_039147_1, VkglTestCase_039147_2);

#define VkglTestCase_039148_1 "dEQP-GLES3.functional.fragment_ou"
#define VkglTestCase_039148_2 "t.array.float.rgba32f_highp_float"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039148, VkglTestCase_039148_1, VkglTestCase_039148_2);

#define VkglTestCase_039149_1 "dEQP-GLES3.functional.fragment_o"
#define VkglTestCase_039149_2 "ut.array.float.rgba32f_highp_vec2"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039149, VkglTestCase_039149_1, VkglTestCase_039149_2);

#define VkglTestCase_039150_1 "dEQP-GLES3.functional.fragment_o"
#define VkglTestCase_039150_2 "ut.array.float.rgba32f_highp_vec3"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039150, VkglTestCase_039150_1, VkglTestCase_039150_2);

#define VkglTestCase_039151_1 "dEQP-GLES3.functional.fragment_o"
#define VkglTestCase_039151_2 "ut.array.float.rgba32f_highp_vec4"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039151, VkglTestCase_039151_1, VkglTestCase_039151_2);

#define VkglTestCase_039152_1 "dEQP-GLES3.functional.fragment_o"
#define VkglTestCase_039152_2 "ut.array.float.rgba16f_lowp_float"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039152, VkglTestCase_039152_1, VkglTestCase_039152_2);

#define VkglTestCase_039153_1 "dEQP-GLES3.functional.fragment_o"
#define VkglTestCase_039153_2 "ut.array.float.rgba16f_lowp_vec2"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039153, VkglTestCase_039153_1, VkglTestCase_039153_2);

#define VkglTestCase_039154_1 "dEQP-GLES3.functional.fragment_o"
#define VkglTestCase_039154_2 "ut.array.float.rgba16f_lowp_vec3"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039154, VkglTestCase_039154_1, VkglTestCase_039154_2);

#define VkglTestCase_039155_1 "dEQP-GLES3.functional.fragment_o"
#define VkglTestCase_039155_2 "ut.array.float.rgba16f_lowp_vec4"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039155, VkglTestCase_039155_1, VkglTestCase_039155_2);

#define VkglTestCase_039156_1 "dEQP-GLES3.functional.fragment_out"
#define VkglTestCase_039156_2 ".array.float.rgba16f_mediump_float"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039156, VkglTestCase_039156_1, VkglTestCase_039156_2);

#define VkglTestCase_039157_1 "dEQP-GLES3.functional.fragment_ou"
#define VkglTestCase_039157_2 "t.array.float.rgba16f_mediump_vec2"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039157, VkglTestCase_039157_1, VkglTestCase_039157_2);

#define VkglTestCase_039158_1 "dEQP-GLES3.functional.fragment_ou"
#define VkglTestCase_039158_2 "t.array.float.rgba16f_mediump_vec3"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039158, VkglTestCase_039158_1, VkglTestCase_039158_2);

#define VkglTestCase_039159_1 "dEQP-GLES3.functional.fragment_ou"
#define VkglTestCase_039159_2 "t.array.float.rgba16f_mediump_vec4"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039159, VkglTestCase_039159_1, VkglTestCase_039159_2);

#define VkglTestCase_039160_1 "dEQP-GLES3.functional.fragment_ou"
#define VkglTestCase_039160_2 "t.array.float.rgba16f_highp_float"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039160, VkglTestCase_039160_1, VkglTestCase_039160_2);

#define VkglTestCase_039161_1 "dEQP-GLES3.functional.fragment_o"
#define VkglTestCase_039161_2 "ut.array.float.rgba16f_highp_vec2"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039161, VkglTestCase_039161_1, VkglTestCase_039161_2);

#define VkglTestCase_039162_1 "dEQP-GLES3.functional.fragment_o"
#define VkglTestCase_039162_2 "ut.array.float.rgba16f_highp_vec3"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039162, VkglTestCase_039162_1, VkglTestCase_039162_2);

#define VkglTestCase_039163_1 "dEQP-GLES3.functional.fragment_o"
#define VkglTestCase_039163_2 "ut.array.float.rgba16f_highp_vec4"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039163, VkglTestCase_039163_1, VkglTestCase_039163_2);

#define VkglTestCase_039164_1 "dEQP-GLES3.functional.fragment_out.a"
#define VkglTestCase_039164_2 "rray.float.r11f_g11f_b10f_lowp_float"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039164, VkglTestCase_039164_1, VkglTestCase_039164_2);

#define VkglTestCase_039165_1 "dEQP-GLES3.functional.fragment_out."
#define VkglTestCase_039165_2 "array.float.r11f_g11f_b10f_lowp_vec2"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039165, VkglTestCase_039165_1, VkglTestCase_039165_2);

#define VkglTestCase_039166_1 "dEQP-GLES3.functional.fragment_out."
#define VkglTestCase_039166_2 "array.float.r11f_g11f_b10f_lowp_vec3"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039166, VkglTestCase_039166_1, VkglTestCase_039166_2);

#define VkglTestCase_039167_1 "dEQP-GLES3.functional.fragment_out."
#define VkglTestCase_039167_2 "array.float.r11f_g11f_b10f_lowp_vec4"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039167, VkglTestCase_039167_1, VkglTestCase_039167_2);

#define VkglTestCase_039168_1 "dEQP-GLES3.functional.fragment_out.ar"
#define VkglTestCase_039168_2 "ray.float.r11f_g11f_b10f_mediump_float"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039168, VkglTestCase_039168_1, VkglTestCase_039168_2);

#define VkglTestCase_039169_1 "dEQP-GLES3.functional.fragment_out.ar"
#define VkglTestCase_039169_2 "ray.float.r11f_g11f_b10f_mediump_vec2"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039169, VkglTestCase_039169_1, VkglTestCase_039169_2);

#define VkglTestCase_039170_1 "dEQP-GLES3.functional.fragment_out.ar"
#define VkglTestCase_039170_2 "ray.float.r11f_g11f_b10f_mediump_vec3"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039170, VkglTestCase_039170_1, VkglTestCase_039170_2);

#define VkglTestCase_039171_1 "dEQP-GLES3.functional.fragment_out.ar"
#define VkglTestCase_039171_2 "ray.float.r11f_g11f_b10f_mediump_vec4"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039171, VkglTestCase_039171_1, VkglTestCase_039171_2);

#define VkglTestCase_039172_1 "dEQP-GLES3.functional.fragment_out.a"
#define VkglTestCase_039172_2 "rray.float.r11f_g11f_b10f_highp_float"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039172, VkglTestCase_039172_1, VkglTestCase_039172_2);

#define VkglTestCase_039173_1 "dEQP-GLES3.functional.fragment_out.a"
#define VkglTestCase_039173_2 "rray.float.r11f_g11f_b10f_highp_vec2"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039173, VkglTestCase_039173_1, VkglTestCase_039173_2);

#define VkglTestCase_039174_1 "dEQP-GLES3.functional.fragment_out.a"
#define VkglTestCase_039174_2 "rray.float.r11f_g11f_b10f_highp_vec3"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039174, VkglTestCase_039174_1, VkglTestCase_039174_2);

#define VkglTestCase_039175_1 "dEQP-GLES3.functional.fragment_out.a"
#define VkglTestCase_039175_2 "rray.float.r11f_g11f_b10f_highp_vec4"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039175, VkglTestCase_039175_1, VkglTestCase_039175_2);

#define VkglTestCase_039176_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_039176_2 "out.array.float.rg32f_lowp_float"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039176, VkglTestCase_039176_1, VkglTestCase_039176_2);

#define VkglTestCase_039177_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_039177_2 "out.array.float.rg32f_lowp_vec2"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039177, VkglTestCase_039177_1, VkglTestCase_039177_2);

#define VkglTestCase_039178_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_039178_2 "out.array.float.rg32f_lowp_vec3"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039178, VkglTestCase_039178_1, VkglTestCase_039178_2);

#define VkglTestCase_039179_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_039179_2 "out.array.float.rg32f_lowp_vec4"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039179, VkglTestCase_039179_1, VkglTestCase_039179_2);

#define VkglTestCase_039180_1 "dEQP-GLES3.functional.fragment_ou"
#define VkglTestCase_039180_2 "t.array.float.rg32f_mediump_float"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039180, VkglTestCase_039180_1, VkglTestCase_039180_2);

#define VkglTestCase_039181_1 "dEQP-GLES3.functional.fragment_o"
#define VkglTestCase_039181_2 "ut.array.float.rg32f_mediump_vec2"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039181, VkglTestCase_039181_1, VkglTestCase_039181_2);

#define VkglTestCase_039182_1 "dEQP-GLES3.functional.fragment_o"
#define VkglTestCase_039182_2 "ut.array.float.rg32f_mediump_vec3"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039182, VkglTestCase_039182_1, VkglTestCase_039182_2);

#define VkglTestCase_039183_1 "dEQP-GLES3.functional.fragment_o"
#define VkglTestCase_039183_2 "ut.array.float.rg32f_mediump_vec4"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039183, VkglTestCase_039183_1, VkglTestCase_039183_2);

#define VkglTestCase_039184_1 "dEQP-GLES3.functional.fragment_o"
#define VkglTestCase_039184_2 "ut.array.float.rg32f_highp_float"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039184, VkglTestCase_039184_1, VkglTestCase_039184_2);

#define VkglTestCase_039185_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_039185_2 "out.array.float.rg32f_highp_vec2"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039185, VkglTestCase_039185_1, VkglTestCase_039185_2);

#define VkglTestCase_039186_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_039186_2 "out.array.float.rg32f_highp_vec3"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039186, VkglTestCase_039186_1, VkglTestCase_039186_2);

#define VkglTestCase_039187_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_039187_2 "out.array.float.rg32f_highp_vec4"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039187, VkglTestCase_039187_1, VkglTestCase_039187_2);

#define VkglTestCase_039188_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_039188_2 "out.array.float.rg16f_lowp_float"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039188, VkglTestCase_039188_1, VkglTestCase_039188_2);

#define VkglTestCase_039189_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_039189_2 "out.array.float.rg16f_lowp_vec2"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039189, VkglTestCase_039189_1, VkglTestCase_039189_2);

#define VkglTestCase_039190_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_039190_2 "out.array.float.rg16f_lowp_vec3"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039190, VkglTestCase_039190_1, VkglTestCase_039190_2);

#define VkglTestCase_039191_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_039191_2 "out.array.float.rg16f_lowp_vec4"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039191, VkglTestCase_039191_1, VkglTestCase_039191_2);

#define VkglTestCase_039192_1 "dEQP-GLES3.functional.fragment_ou"
#define VkglTestCase_039192_2 "t.array.float.rg16f_mediump_float"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039192, VkglTestCase_039192_1, VkglTestCase_039192_2);

#define VkglTestCase_039193_1 "dEQP-GLES3.functional.fragment_o"
#define VkglTestCase_039193_2 "ut.array.float.rg16f_mediump_vec2"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039193, VkglTestCase_039193_1, VkglTestCase_039193_2);

#define VkglTestCase_039194_1 "dEQP-GLES3.functional.fragment_o"
#define VkglTestCase_039194_2 "ut.array.float.rg16f_mediump_vec3"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039194, VkglTestCase_039194_1, VkglTestCase_039194_2);

#define VkglTestCase_039195_1 "dEQP-GLES3.functional.fragment_o"
#define VkglTestCase_039195_2 "ut.array.float.rg16f_mediump_vec4"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039195, VkglTestCase_039195_1, VkglTestCase_039195_2);

#define VkglTestCase_039196_1 "dEQP-GLES3.functional.fragment_o"
#define VkglTestCase_039196_2 "ut.array.float.rg16f_highp_float"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039196, VkglTestCase_039196_1, VkglTestCase_039196_2);

#define VkglTestCase_039197_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_039197_2 "out.array.float.rg16f_highp_vec2"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039197, VkglTestCase_039197_1, VkglTestCase_039197_2);

#define VkglTestCase_039198_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_039198_2 "out.array.float.rg16f_highp_vec3"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039198, VkglTestCase_039198_1, VkglTestCase_039198_2);

#define VkglTestCase_039199_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_039199_2 "out.array.float.rg16f_highp_vec4"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039199, VkglTestCase_039199_1, VkglTestCase_039199_2);

#define VkglTestCase_039200_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_039200_2 "out.array.float.r32f_lowp_float"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039200, VkglTestCase_039200_1, VkglTestCase_039200_2);

#define VkglTestCase_039201_1 "dEQP-GLES3.functional.fragment"
#define VkglTestCase_039201_2 "_out.array.float.r32f_lowp_vec2"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039201, VkglTestCase_039201_1, VkglTestCase_039201_2);

#define VkglTestCase_039202_1 "dEQP-GLES3.functional.fragment"
#define VkglTestCase_039202_2 "_out.array.float.r32f_lowp_vec3"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039202, VkglTestCase_039202_1, VkglTestCase_039202_2);

#define VkglTestCase_039203_1 "dEQP-GLES3.functional.fragment"
#define VkglTestCase_039203_2 "_out.array.float.r32f_lowp_vec4"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039203, VkglTestCase_039203_1, VkglTestCase_039203_2);

#define VkglTestCase_039204_1 "dEQP-GLES3.functional.fragment_o"
#define VkglTestCase_039204_2 "ut.array.float.r32f_mediump_float"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039204, VkglTestCase_039204_1, VkglTestCase_039204_2);

#define VkglTestCase_039205_1 "dEQP-GLES3.functional.fragment_o"
#define VkglTestCase_039205_2 "ut.array.float.r32f_mediump_vec2"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039205, VkglTestCase_039205_1, VkglTestCase_039205_2);

#define VkglTestCase_039206_1 "dEQP-GLES3.functional.fragment_o"
#define VkglTestCase_039206_2 "ut.array.float.r32f_mediump_vec3"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039206, VkglTestCase_039206_1, VkglTestCase_039206_2);

#define VkglTestCase_039207_1 "dEQP-GLES3.functional.fragment_o"
#define VkglTestCase_039207_2 "ut.array.float.r32f_mediump_vec4"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039207, VkglTestCase_039207_1, VkglTestCase_039207_2);

#define VkglTestCase_039208_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_039208_2 "out.array.float.r32f_highp_float"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039208, VkglTestCase_039208_1, VkglTestCase_039208_2);

#define VkglTestCase_039209_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_039209_2 "out.array.float.r32f_highp_vec2"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039209, VkglTestCase_039209_1, VkglTestCase_039209_2);

#define VkglTestCase_039210_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_039210_2 "out.array.float.r32f_highp_vec3"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039210, VkglTestCase_039210_1, VkglTestCase_039210_2);

#define VkglTestCase_039211_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_039211_2 "out.array.float.r32f_highp_vec4"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039211, VkglTestCase_039211_1, VkglTestCase_039211_2);

#define VkglTestCase_039212_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_039212_2 "out.array.float.r16f_lowp_float"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039212, VkglTestCase_039212_1, VkglTestCase_039212_2);

#define VkglTestCase_039213_1 "dEQP-GLES3.functional.fragment"
#define VkglTestCase_039213_2 "_out.array.float.r16f_lowp_vec2"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039213, VkglTestCase_039213_1, VkglTestCase_039213_2);

#define VkglTestCase_039214_1 "dEQP-GLES3.functional.fragment"
#define VkglTestCase_039214_2 "_out.array.float.r16f_lowp_vec3"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039214, VkglTestCase_039214_1, VkglTestCase_039214_2);

#define VkglTestCase_039215_1 "dEQP-GLES3.functional.fragment"
#define VkglTestCase_039215_2 "_out.array.float.r16f_lowp_vec4"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039215, VkglTestCase_039215_1, VkglTestCase_039215_2);

#define VkglTestCase_039216_1 "dEQP-GLES3.functional.fragment_o"
#define VkglTestCase_039216_2 "ut.array.float.r16f_mediump_float"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039216, VkglTestCase_039216_1, VkglTestCase_039216_2);

#define VkglTestCase_039217_1 "dEQP-GLES3.functional.fragment_o"
#define VkglTestCase_039217_2 "ut.array.float.r16f_mediump_vec2"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039217, VkglTestCase_039217_1, VkglTestCase_039217_2);

#define VkglTestCase_039218_1 "dEQP-GLES3.functional.fragment_o"
#define VkglTestCase_039218_2 "ut.array.float.r16f_mediump_vec3"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039218, VkglTestCase_039218_1, VkglTestCase_039218_2);

#define VkglTestCase_039219_1 "dEQP-GLES3.functional.fragment_o"
#define VkglTestCase_039219_2 "ut.array.float.r16f_mediump_vec4"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039219, VkglTestCase_039219_1, VkglTestCase_039219_2);

#define VkglTestCase_039220_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_039220_2 "out.array.float.r16f_highp_float"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039220, VkglTestCase_039220_1, VkglTestCase_039220_2);

#define VkglTestCase_039221_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_039221_2 "out.array.float.r16f_highp_vec2"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039221, VkglTestCase_039221_1, VkglTestCase_039221_2);

#define VkglTestCase_039222_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_039222_2 "out.array.float.r16f_highp_vec3"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039222, VkglTestCase_039222_1, VkglTestCase_039222_2);

#define VkglTestCase_039223_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_039223_2 "out.array.float.r16f_highp_vec4"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039223, VkglTestCase_039223_1, VkglTestCase_039223_2);
