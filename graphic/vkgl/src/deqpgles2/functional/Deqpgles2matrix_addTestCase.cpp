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
#include "../Deqpgles2BaseFunc.h"
#include "../ActsDeqpgles20007TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_006881_1 "dEQP-GLES2.functional.shaders.matr"
#define VkglTestCase_006881_2 "ix.add.const_lowp_mat2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006881, VkglTestCase_006881_1, VkglTestCase_006881_2);

#define VkglTestCase_006882_1 "dEQP-GLES2.functional.shaders.matri"
#define VkglTestCase_006882_2 "x.add.const_lowp_mat2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006882, VkglTestCase_006882_1, VkglTestCase_006882_2);

#define VkglTestCase_006883_1 "dEQP-GLES2.functional.shaders.matr"
#define VkglTestCase_006883_2 "ix.add.const_lowp_mat2_mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006883, VkglTestCase_006883_1, VkglTestCase_006883_2);

#define VkglTestCase_006884_1 "dEQP-GLES2.functional.shaders.matri"
#define VkglTestCase_006884_2 "x.add.const_lowp_mat2_mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006884, VkglTestCase_006884_1, VkglTestCase_006884_2);

#define VkglTestCase_006885_1 "dEQP-GLES2.functional.shaders.matrix"
#define VkglTestCase_006885_2 ".add.const_mediump_mat2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006885, VkglTestCase_006885_1, VkglTestCase_006885_2);

#define VkglTestCase_006886_1 "dEQP-GLES2.functional.shaders.matrix."
#define VkglTestCase_006886_2 "add.const_mediump_mat2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006886, VkglTestCase_006886_1, VkglTestCase_006886_2);

#define VkglTestCase_006887_1 "dEQP-GLES2.functional.shaders.matri"
#define VkglTestCase_006887_2 "x.add.const_mediump_mat2_mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006887, VkglTestCase_006887_1, VkglTestCase_006887_2);

#define VkglTestCase_006888_1 "dEQP-GLES2.functional.shaders.matrix"
#define VkglTestCase_006888_2 ".add.const_mediump_mat2_mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006888, VkglTestCase_006888_1, VkglTestCase_006888_2);

#define VkglTestCase_006889_1 "dEQP-GLES2.functional.shaders.matri"
#define VkglTestCase_006889_2 "x.add.const_highp_mat2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006889, VkglTestCase_006889_1, VkglTestCase_006889_2);

#define VkglTestCase_006890_1 "dEQP-GLES2.functional.shaders.matrix"
#define VkglTestCase_006890_2 ".add.const_highp_mat2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006890, VkglTestCase_006890_1, VkglTestCase_006890_2);

#define VkglTestCase_006891_1 "dEQP-GLES2.functional.shaders.matr"
#define VkglTestCase_006891_2 "ix.add.const_highp_mat2_mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006891, VkglTestCase_006891_1, VkglTestCase_006891_2);

#define VkglTestCase_006892_1 "dEQP-GLES2.functional.shaders.matri"
#define VkglTestCase_006892_2 "x.add.const_highp_mat2_mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006892, VkglTestCase_006892_1, VkglTestCase_006892_2);

#define VkglTestCase_006893_1 "dEQP-GLES2.functional.shaders.matr"
#define VkglTestCase_006893_2 "ix.add.const_lowp_mat3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006893, VkglTestCase_006893_1, VkglTestCase_006893_2);

#define VkglTestCase_006894_1 "dEQP-GLES2.functional.shaders.matri"
#define VkglTestCase_006894_2 "x.add.const_lowp_mat3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006894, VkglTestCase_006894_1, VkglTestCase_006894_2);

#define VkglTestCase_006895_1 "dEQP-GLES2.functional.shaders.matr"
#define VkglTestCase_006895_2 "ix.add.const_lowp_mat3_mat3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006895, VkglTestCase_006895_1, VkglTestCase_006895_2);

#define VkglTestCase_006896_1 "dEQP-GLES2.functional.shaders.matri"
#define VkglTestCase_006896_2 "x.add.const_lowp_mat3_mat3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006896, VkglTestCase_006896_1, VkglTestCase_006896_2);

#define VkglTestCase_006897_1 "dEQP-GLES2.functional.shaders.matrix"
#define VkglTestCase_006897_2 ".add.const_mediump_mat3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006897, VkglTestCase_006897_1, VkglTestCase_006897_2);

#define VkglTestCase_006898_1 "dEQP-GLES2.functional.shaders.matrix."
#define VkglTestCase_006898_2 "add.const_mediump_mat3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006898, VkglTestCase_006898_1, VkglTestCase_006898_2);

#define VkglTestCase_006899_1 "dEQP-GLES2.functional.shaders.matri"
#define VkglTestCase_006899_2 "x.add.const_mediump_mat3_mat3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006899, VkglTestCase_006899_1, VkglTestCase_006899_2);

#define VkglTestCase_006900_1 "dEQP-GLES2.functional.shaders.matrix"
#define VkglTestCase_006900_2 ".add.const_mediump_mat3_mat3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006900, VkglTestCase_006900_1, VkglTestCase_006900_2);

#define VkglTestCase_006901_1 "dEQP-GLES2.functional.shaders.matri"
#define VkglTestCase_006901_2 "x.add.const_highp_mat3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006901, VkglTestCase_006901_1, VkglTestCase_006901_2);

#define VkglTestCase_006902_1 "dEQP-GLES2.functional.shaders.matrix"
#define VkglTestCase_006902_2 ".add.const_highp_mat3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006902, VkglTestCase_006902_1, VkglTestCase_006902_2);

#define VkglTestCase_006903_1 "dEQP-GLES2.functional.shaders.matr"
#define VkglTestCase_006903_2 "ix.add.const_highp_mat3_mat3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006903, VkglTestCase_006903_1, VkglTestCase_006903_2);

#define VkglTestCase_006904_1 "dEQP-GLES2.functional.shaders.matri"
#define VkglTestCase_006904_2 "x.add.const_highp_mat3_mat3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006904, VkglTestCase_006904_1, VkglTestCase_006904_2);

#define VkglTestCase_006905_1 "dEQP-GLES2.functional.shaders.matr"
#define VkglTestCase_006905_2 "ix.add.const_lowp_mat4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006905, VkglTestCase_006905_1, VkglTestCase_006905_2);

#define VkglTestCase_006906_1 "dEQP-GLES2.functional.shaders.matri"
#define VkglTestCase_006906_2 "x.add.const_lowp_mat4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006906, VkglTestCase_006906_1, VkglTestCase_006906_2);

#define VkglTestCase_006907_1 "dEQP-GLES2.functional.shaders.matr"
#define VkglTestCase_006907_2 "ix.add.const_lowp_mat4_mat4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006907, VkglTestCase_006907_1, VkglTestCase_006907_2);

#define VkglTestCase_006908_1 "dEQP-GLES2.functional.shaders.matri"
#define VkglTestCase_006908_2 "x.add.const_lowp_mat4_mat4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006908, VkglTestCase_006908_1, VkglTestCase_006908_2);

#define VkglTestCase_006909_1 "dEQP-GLES2.functional.shaders.matrix"
#define VkglTestCase_006909_2 ".add.const_mediump_mat4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006909, VkglTestCase_006909_1, VkglTestCase_006909_2);

#define VkglTestCase_006910_1 "dEQP-GLES2.functional.shaders.matrix."
#define VkglTestCase_006910_2 "add.const_mediump_mat4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006910, VkglTestCase_006910_1, VkglTestCase_006910_2);

#define VkglTestCase_006911_1 "dEQP-GLES2.functional.shaders.matri"
#define VkglTestCase_006911_2 "x.add.const_mediump_mat4_mat4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006911, VkglTestCase_006911_1, VkglTestCase_006911_2);

#define VkglTestCase_006912_1 "dEQP-GLES2.functional.shaders.matrix"
#define VkglTestCase_006912_2 ".add.const_mediump_mat4_mat4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006912, VkglTestCase_006912_1, VkglTestCase_006912_2);

#define VkglTestCase_006913_1 "dEQP-GLES2.functional.shaders.matri"
#define VkglTestCase_006913_2 "x.add.const_highp_mat4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006913, VkglTestCase_006913_1, VkglTestCase_006913_2);

#define VkglTestCase_006914_1 "dEQP-GLES2.functional.shaders.matrix"
#define VkglTestCase_006914_2 ".add.const_highp_mat4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006914, VkglTestCase_006914_1, VkglTestCase_006914_2);

#define VkglTestCase_006915_1 "dEQP-GLES2.functional.shaders.matr"
#define VkglTestCase_006915_2 "ix.add.const_highp_mat4_mat4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006915, VkglTestCase_006915_1, VkglTestCase_006915_2);

#define VkglTestCase_006916_1 "dEQP-GLES2.functional.shaders.matri"
#define VkglTestCase_006916_2 "x.add.const_highp_mat4_mat4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006916, VkglTestCase_006916_1, VkglTestCase_006916_2);

#define VkglTestCase_006917_1 "dEQP-GLES2.functional.shaders.matri"
#define VkglTestCase_006917_2 "x.add.uniform_lowp_mat2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006917, VkglTestCase_006917_1, VkglTestCase_006917_2);

#define VkglTestCase_006918_1 "dEQP-GLES2.functional.shaders.matrix"
#define VkglTestCase_006918_2 ".add.uniform_lowp_mat2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006918, VkglTestCase_006918_1, VkglTestCase_006918_2);

#define VkglTestCase_006919_1 "dEQP-GLES2.functional.shaders.matri"
#define VkglTestCase_006919_2 "x.add.uniform_lowp_mat2_mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006919, VkglTestCase_006919_1, VkglTestCase_006919_2);

#define VkglTestCase_006920_1 "dEQP-GLES2.functional.shaders.matrix"
#define VkglTestCase_006920_2 ".add.uniform_lowp_mat2_mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006920, VkglTestCase_006920_1, VkglTestCase_006920_2);

#define VkglTestCase_006921_1 "dEQP-GLES2.functional.shaders.matrix."
#define VkglTestCase_006921_2 "add.uniform_mediump_mat2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006921, VkglTestCase_006921_1, VkglTestCase_006921_2);

#define VkglTestCase_006922_1 "dEQP-GLES2.functional.shaders.matrix.a"
#define VkglTestCase_006922_2 "dd.uniform_mediump_mat2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006922, VkglTestCase_006922_1, VkglTestCase_006922_2);

#define VkglTestCase_006923_1 "dEQP-GLES2.functional.shaders.matrix"
#define VkglTestCase_006923_2 ".add.uniform_mediump_mat2_mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006923, VkglTestCase_006923_1, VkglTestCase_006923_2);

#define VkglTestCase_006924_1 "dEQP-GLES2.functional.shaders.matrix."
#define VkglTestCase_006924_2 "add.uniform_mediump_mat2_mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006924, VkglTestCase_006924_1, VkglTestCase_006924_2);

#define VkglTestCase_006925_1 "dEQP-GLES2.functional.shaders.matrix"
#define VkglTestCase_006925_2 ".add.uniform_highp_mat2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006925, VkglTestCase_006925_1, VkglTestCase_006925_2);

#define VkglTestCase_006926_1 "dEQP-GLES2.functional.shaders.matrix."
#define VkglTestCase_006926_2 "add.uniform_highp_mat2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006926, VkglTestCase_006926_1, VkglTestCase_006926_2);

#define VkglTestCase_006927_1 "dEQP-GLES2.functional.shaders.matri"
#define VkglTestCase_006927_2 "x.add.uniform_highp_mat2_mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006927, VkglTestCase_006927_1, VkglTestCase_006927_2);

#define VkglTestCase_006928_1 "dEQP-GLES2.functional.shaders.matrix"
#define VkglTestCase_006928_2 ".add.uniform_highp_mat2_mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006928, VkglTestCase_006928_1, VkglTestCase_006928_2);

#define VkglTestCase_006929_1 "dEQP-GLES2.functional.shaders.matri"
#define VkglTestCase_006929_2 "x.add.uniform_lowp_mat3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006929, VkglTestCase_006929_1, VkglTestCase_006929_2);

#define VkglTestCase_006930_1 "dEQP-GLES2.functional.shaders.matrix"
#define VkglTestCase_006930_2 ".add.uniform_lowp_mat3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006930, VkglTestCase_006930_1, VkglTestCase_006930_2);

#define VkglTestCase_006931_1 "dEQP-GLES2.functional.shaders.matri"
#define VkglTestCase_006931_2 "x.add.uniform_lowp_mat3_mat3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006931, VkglTestCase_006931_1, VkglTestCase_006931_2);

#define VkglTestCase_006932_1 "dEQP-GLES2.functional.shaders.matrix"
#define VkglTestCase_006932_2 ".add.uniform_lowp_mat3_mat3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006932, VkglTestCase_006932_1, VkglTestCase_006932_2);

#define VkglTestCase_006933_1 "dEQP-GLES2.functional.shaders.matrix."
#define VkglTestCase_006933_2 "add.uniform_mediump_mat3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006933, VkglTestCase_006933_1, VkglTestCase_006933_2);

#define VkglTestCase_006934_1 "dEQP-GLES2.functional.shaders.matrix.a"
#define VkglTestCase_006934_2 "dd.uniform_mediump_mat3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006934, VkglTestCase_006934_1, VkglTestCase_006934_2);

#define VkglTestCase_006935_1 "dEQP-GLES2.functional.shaders.matrix"
#define VkglTestCase_006935_2 ".add.uniform_mediump_mat3_mat3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006935, VkglTestCase_006935_1, VkglTestCase_006935_2);

#define VkglTestCase_006936_1 "dEQP-GLES2.functional.shaders.matrix."
#define VkglTestCase_006936_2 "add.uniform_mediump_mat3_mat3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006936, VkglTestCase_006936_1, VkglTestCase_006936_2);

#define VkglTestCase_006937_1 "dEQP-GLES2.functional.shaders.matrix"
#define VkglTestCase_006937_2 ".add.uniform_highp_mat3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006937, VkglTestCase_006937_1, VkglTestCase_006937_2);

#define VkglTestCase_006938_1 "dEQP-GLES2.functional.shaders.matrix."
#define VkglTestCase_006938_2 "add.uniform_highp_mat3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006938, VkglTestCase_006938_1, VkglTestCase_006938_2);

#define VkglTestCase_006939_1 "dEQP-GLES2.functional.shaders.matri"
#define VkglTestCase_006939_2 "x.add.uniform_highp_mat3_mat3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006939, VkglTestCase_006939_1, VkglTestCase_006939_2);

#define VkglTestCase_006940_1 "dEQP-GLES2.functional.shaders.matrix"
#define VkglTestCase_006940_2 ".add.uniform_highp_mat3_mat3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006940, VkglTestCase_006940_1, VkglTestCase_006940_2);

#define VkglTestCase_006941_1 "dEQP-GLES2.functional.shaders.matri"
#define VkglTestCase_006941_2 "x.add.uniform_lowp_mat4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006941, VkglTestCase_006941_1, VkglTestCase_006941_2);

#define VkglTestCase_006942_1 "dEQP-GLES2.functional.shaders.matrix"
#define VkglTestCase_006942_2 ".add.uniform_lowp_mat4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006942, VkglTestCase_006942_1, VkglTestCase_006942_2);

#define VkglTestCase_006943_1 "dEQP-GLES2.functional.shaders.matri"
#define VkglTestCase_006943_2 "x.add.uniform_lowp_mat4_mat4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006943, VkglTestCase_006943_1, VkglTestCase_006943_2);

#define VkglTestCase_006944_1 "dEQP-GLES2.functional.shaders.matrix"
#define VkglTestCase_006944_2 ".add.uniform_lowp_mat4_mat4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006944, VkglTestCase_006944_1, VkglTestCase_006944_2);

#define VkglTestCase_006945_1 "dEQP-GLES2.functional.shaders.matrix."
#define VkglTestCase_006945_2 "add.uniform_mediump_mat4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006945, VkglTestCase_006945_1, VkglTestCase_006945_2);

#define VkglTestCase_006946_1 "dEQP-GLES2.functional.shaders.matrix.a"
#define VkglTestCase_006946_2 "dd.uniform_mediump_mat4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006946, VkglTestCase_006946_1, VkglTestCase_006946_2);

#define VkglTestCase_006947_1 "dEQP-GLES2.functional.shaders.matrix"
#define VkglTestCase_006947_2 ".add.uniform_mediump_mat4_mat4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006947, VkglTestCase_006947_1, VkglTestCase_006947_2);

#define VkglTestCase_006948_1 "dEQP-GLES2.functional.shaders.matrix."
#define VkglTestCase_006948_2 "add.uniform_mediump_mat4_mat4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006948, VkglTestCase_006948_1, VkglTestCase_006948_2);

#define VkglTestCase_006949_1 "dEQP-GLES2.functional.shaders.matrix"
#define VkglTestCase_006949_2 ".add.uniform_highp_mat4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006949, VkglTestCase_006949_1, VkglTestCase_006949_2);

#define VkglTestCase_006950_1 "dEQP-GLES2.functional.shaders.matrix."
#define VkglTestCase_006950_2 "add.uniform_highp_mat4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006950, VkglTestCase_006950_1, VkglTestCase_006950_2);

#define VkglTestCase_006951_1 "dEQP-GLES2.functional.shaders.matri"
#define VkglTestCase_006951_2 "x.add.uniform_highp_mat4_mat4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006951, VkglTestCase_006951_1, VkglTestCase_006951_2);

#define VkglTestCase_006952_1 "dEQP-GLES2.functional.shaders.matrix"
#define VkglTestCase_006952_2 ".add.uniform_highp_mat4_mat4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006952, VkglTestCase_006952_1, VkglTestCase_006952_2);

#define VkglTestCase_006953_1 "dEQP-GLES2.functional.shaders.matri"
#define VkglTestCase_006953_2 "x.add.dynamic_lowp_mat2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006953, VkglTestCase_006953_1, VkglTestCase_006953_2);

#define VkglTestCase_006954_1 "dEQP-GLES2.functional.shaders.matrix"
#define VkglTestCase_006954_2 ".add.dynamic_lowp_mat2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006954, VkglTestCase_006954_1, VkglTestCase_006954_2);

#define VkglTestCase_006955_1 "dEQP-GLES2.functional.shaders.matri"
#define VkglTestCase_006955_2 "x.add.dynamic_lowp_mat2_mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006955, VkglTestCase_006955_1, VkglTestCase_006955_2);

#define VkglTestCase_006956_1 "dEQP-GLES2.functional.shaders.matrix"
#define VkglTestCase_006956_2 ".add.dynamic_lowp_mat2_mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006956, VkglTestCase_006956_1, VkglTestCase_006956_2);

#define VkglTestCase_006957_1 "dEQP-GLES2.functional.shaders.matrix."
#define VkglTestCase_006957_2 "add.dynamic_mediump_mat2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006957, VkglTestCase_006957_1, VkglTestCase_006957_2);

#define VkglTestCase_006958_1 "dEQP-GLES2.functional.shaders.matrix.a"
#define VkglTestCase_006958_2 "dd.dynamic_mediump_mat2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006958, VkglTestCase_006958_1, VkglTestCase_006958_2);

#define VkglTestCase_006959_1 "dEQP-GLES2.functional.shaders.matrix"
#define VkglTestCase_006959_2 ".add.dynamic_mediump_mat2_mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006959, VkglTestCase_006959_1, VkglTestCase_006959_2);

#define VkglTestCase_006960_1 "dEQP-GLES2.functional.shaders.matrix."
#define VkglTestCase_006960_2 "add.dynamic_mediump_mat2_mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006960, VkglTestCase_006960_1, VkglTestCase_006960_2);

#define VkglTestCase_006961_1 "dEQP-GLES2.functional.shaders.matrix"
#define VkglTestCase_006961_2 ".add.dynamic_highp_mat2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006961, VkglTestCase_006961_1, VkglTestCase_006961_2);

#define VkglTestCase_006962_1 "dEQP-GLES2.functional.shaders.matrix."
#define VkglTestCase_006962_2 "add.dynamic_highp_mat2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006962, VkglTestCase_006962_1, VkglTestCase_006962_2);

#define VkglTestCase_006963_1 "dEQP-GLES2.functional.shaders.matri"
#define VkglTestCase_006963_2 "x.add.dynamic_highp_mat2_mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006963, VkglTestCase_006963_1, VkglTestCase_006963_2);

#define VkglTestCase_006964_1 "dEQP-GLES2.functional.shaders.matrix"
#define VkglTestCase_006964_2 ".add.dynamic_highp_mat2_mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006964, VkglTestCase_006964_1, VkglTestCase_006964_2);

#define VkglTestCase_006965_1 "dEQP-GLES2.functional.shaders.matri"
#define VkglTestCase_006965_2 "x.add.dynamic_lowp_mat3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006965, VkglTestCase_006965_1, VkglTestCase_006965_2);

#define VkglTestCase_006966_1 "dEQP-GLES2.functional.shaders.matrix"
#define VkglTestCase_006966_2 ".add.dynamic_lowp_mat3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006966, VkglTestCase_006966_1, VkglTestCase_006966_2);

#define VkglTestCase_006967_1 "dEQP-GLES2.functional.shaders.matri"
#define VkglTestCase_006967_2 "x.add.dynamic_lowp_mat3_mat3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006967, VkglTestCase_006967_1, VkglTestCase_006967_2);

#define VkglTestCase_006968_1 "dEQP-GLES2.functional.shaders.matrix"
#define VkglTestCase_006968_2 ".add.dynamic_lowp_mat3_mat3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006968, VkglTestCase_006968_1, VkglTestCase_006968_2);

#define VkglTestCase_006969_1 "dEQP-GLES2.functional.shaders.matrix."
#define VkglTestCase_006969_2 "add.dynamic_mediump_mat3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006969, VkglTestCase_006969_1, VkglTestCase_006969_2);

#define VkglTestCase_006970_1 "dEQP-GLES2.functional.shaders.matrix.a"
#define VkglTestCase_006970_2 "dd.dynamic_mediump_mat3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006970, VkglTestCase_006970_1, VkglTestCase_006970_2);

#define VkglTestCase_006971_1 "dEQP-GLES2.functional.shaders.matrix"
#define VkglTestCase_006971_2 ".add.dynamic_mediump_mat3_mat3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006971, VkglTestCase_006971_1, VkglTestCase_006971_2);

#define VkglTestCase_006972_1 "dEQP-GLES2.functional.shaders.matrix."
#define VkglTestCase_006972_2 "add.dynamic_mediump_mat3_mat3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006972, VkglTestCase_006972_1, VkglTestCase_006972_2);

#define VkglTestCase_006973_1 "dEQP-GLES2.functional.shaders.matrix"
#define VkglTestCase_006973_2 ".add.dynamic_highp_mat3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006973, VkglTestCase_006973_1, VkglTestCase_006973_2);

#define VkglTestCase_006974_1 "dEQP-GLES2.functional.shaders.matrix."
#define VkglTestCase_006974_2 "add.dynamic_highp_mat3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006974, VkglTestCase_006974_1, VkglTestCase_006974_2);

#define VkglTestCase_006975_1 "dEQP-GLES2.functional.shaders.matri"
#define VkglTestCase_006975_2 "x.add.dynamic_highp_mat3_mat3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006975, VkglTestCase_006975_1, VkglTestCase_006975_2);

#define VkglTestCase_006976_1 "dEQP-GLES2.functional.shaders.matrix"
#define VkglTestCase_006976_2 ".add.dynamic_highp_mat3_mat3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006976, VkglTestCase_006976_1, VkglTestCase_006976_2);

#define VkglTestCase_006977_1 "dEQP-GLES2.functional.shaders.matri"
#define VkglTestCase_006977_2 "x.add.dynamic_lowp_mat4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006977, VkglTestCase_006977_1, VkglTestCase_006977_2);

#define VkglTestCase_006978_1 "dEQP-GLES2.functional.shaders.matrix"
#define VkglTestCase_006978_2 ".add.dynamic_lowp_mat4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006978, VkglTestCase_006978_1, VkglTestCase_006978_2);

#define VkglTestCase_006979_1 "dEQP-GLES2.functional.shaders.matri"
#define VkglTestCase_006979_2 "x.add.dynamic_lowp_mat4_mat4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006979, VkglTestCase_006979_1, VkglTestCase_006979_2);

#define VkglTestCase_006980_1 "dEQP-GLES2.functional.shaders.matrix"
#define VkglTestCase_006980_2 ".add.dynamic_lowp_mat4_mat4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006980, VkglTestCase_006980_1, VkglTestCase_006980_2);

#define VkglTestCase_006981_1 "dEQP-GLES2.functional.shaders.matrix."
#define VkglTestCase_006981_2 "add.dynamic_mediump_mat4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006981, VkglTestCase_006981_1, VkglTestCase_006981_2);

#define VkglTestCase_006982_1 "dEQP-GLES2.functional.shaders.matrix.a"
#define VkglTestCase_006982_2 "dd.dynamic_mediump_mat4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006982, VkglTestCase_006982_1, VkglTestCase_006982_2);

#define VkglTestCase_006983_1 "dEQP-GLES2.functional.shaders.matrix"
#define VkglTestCase_006983_2 ".add.dynamic_mediump_mat4_mat4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006983, VkglTestCase_006983_1, VkglTestCase_006983_2);

#define VkglTestCase_006984_1 "dEQP-GLES2.functional.shaders.matrix."
#define VkglTestCase_006984_2 "add.dynamic_mediump_mat4_mat4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006984, VkglTestCase_006984_1, VkglTestCase_006984_2);

#define VkglTestCase_006985_1 "dEQP-GLES2.functional.shaders.matrix"
#define VkglTestCase_006985_2 ".add.dynamic_highp_mat4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006985, VkglTestCase_006985_1, VkglTestCase_006985_2);

#define VkglTestCase_006986_1 "dEQP-GLES2.functional.shaders.matrix."
#define VkglTestCase_006986_2 "add.dynamic_highp_mat4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006986, VkglTestCase_006986_1, VkglTestCase_006986_2);

#define VkglTestCase_006987_1 "dEQP-GLES2.functional.shaders.matri"
#define VkglTestCase_006987_2 "x.add.dynamic_highp_mat4_mat4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006987, VkglTestCase_006987_1, VkglTestCase_006987_2);

#define VkglTestCase_006988_1 "dEQP-GLES2.functional.shaders.matrix"
#define VkglTestCase_006988_2 ".add.dynamic_highp_mat4_mat4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006988, VkglTestCase_006988_1, VkglTestCase_006988_2);
