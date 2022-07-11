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
#include "../Deqpgles31BaseFunc.h"
#include "../ActsDeqpgles310002TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_001041_1 "dEQP-GLES31.functional.shaders.builtin_fu"
#define VkglTestCase_001041_2 "nctions.integer.uaddcarry.uint_lowp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001041, VkglTestCase_001041_1, VkglTestCase_001041_2);

#define VkglTestCase_001042_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_001042_2 "ctions.integer.uaddcarry.uint_lowp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001042, VkglTestCase_001042_1, VkglTestCase_001042_2);

#define VkglTestCase_001043_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_001043_2 "ctions.integer.uaddcarry.uint_lowp_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001043, VkglTestCase_001043_1, VkglTestCase_001043_2);

#define VkglTestCase_001044_1 "dEQP-GLES31.functional.shaders.builtin_funct"
#define VkglTestCase_001044_2 "ions.integer.uaddcarry.uint_lowp_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001044, VkglTestCase_001044_1, VkglTestCase_001044_2);

#define VkglTestCase_001045_1 "dEQP-GLES31.functional.shaders.builtin_func"
#define VkglTestCase_001045_2 "tions.integer.uaddcarry.uint_lowp_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001045, VkglTestCase_001045_1, VkglTestCase_001045_2);

#define VkglTestCase_001046_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_001046_2 "ctions.integer.uaddcarry.uint_lowp_compute"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001046, VkglTestCase_001046_1, VkglTestCase_001046_2);

#define VkglTestCase_001047_1 "dEQP-GLES31.functional.shaders.builtin_func"
#define VkglTestCase_001047_2 "tions.integer.uaddcarry.uint_mediump_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001047, VkglTestCase_001047_1, VkglTestCase_001047_2);

#define VkglTestCase_001048_1 "dEQP-GLES31.functional.shaders.builtin_funct"
#define VkglTestCase_001048_2 "ions.integer.uaddcarry.uint_mediump_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001048, VkglTestCase_001048_1, VkglTestCase_001048_2);

#define VkglTestCase_001049_1 "dEQP-GLES31.functional.shaders.builtin_funct"
#define VkglTestCase_001049_2 "ions.integer.uaddcarry.uint_mediump_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001049, VkglTestCase_001049_1, VkglTestCase_001049_2);

#define VkglTestCase_001050_1 "dEQP-GLES31.functional.shaders.builtin_functio"
#define VkglTestCase_001050_2 "ns.integer.uaddcarry.uint_mediump_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001050, VkglTestCase_001050_1, VkglTestCase_001050_2);

#define VkglTestCase_001051_1 "dEQP-GLES31.functional.shaders.builtin_funct"
#define VkglTestCase_001051_2 "ions.integer.uaddcarry.uint_mediump_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001051, VkglTestCase_001051_1, VkglTestCase_001051_2);

#define VkglTestCase_001052_1 "dEQP-GLES31.functional.shaders.builtin_func"
#define VkglTestCase_001052_2 "tions.integer.uaddcarry.uint_mediump_compute"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001052, VkglTestCase_001052_1, VkglTestCase_001052_2);

#define VkglTestCase_001053_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_001053_2 "ctions.integer.uaddcarry.uint_highp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001053, VkglTestCase_001053_1, VkglTestCase_001053_2);

#define VkglTestCase_001054_1 "dEQP-GLES31.functional.shaders.builtin_func"
#define VkglTestCase_001054_2 "tions.integer.uaddcarry.uint_highp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001054, VkglTestCase_001054_1, VkglTestCase_001054_2);

#define VkglTestCase_001055_1 "dEQP-GLES31.functional.shaders.builtin_func"
#define VkglTestCase_001055_2 "tions.integer.uaddcarry.uint_highp_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001055, VkglTestCase_001055_1, VkglTestCase_001055_2);

#define VkglTestCase_001056_1 "dEQP-GLES31.functional.shaders.builtin_functi"
#define VkglTestCase_001056_2 "ons.integer.uaddcarry.uint_highp_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001056, VkglTestCase_001056_1, VkglTestCase_001056_2);

#define VkglTestCase_001057_1 "dEQP-GLES31.functional.shaders.builtin_func"
#define VkglTestCase_001057_2 "tions.integer.uaddcarry.uint_highp_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001057, VkglTestCase_001057_1, VkglTestCase_001057_2);

#define VkglTestCase_001058_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_001058_2 "ctions.integer.uaddcarry.uint_highp_compute"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001058, VkglTestCase_001058_1, VkglTestCase_001058_2);

#define VkglTestCase_001059_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_001059_2 "ctions.integer.uaddcarry.uvec2_lowp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001059, VkglTestCase_001059_1, VkglTestCase_001059_2);

#define VkglTestCase_001060_1 "dEQP-GLES31.functional.shaders.builtin_func"
#define VkglTestCase_001060_2 "tions.integer.uaddcarry.uvec2_lowp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001060, VkglTestCase_001060_1, VkglTestCase_001060_2);

#define VkglTestCase_001061_1 "dEQP-GLES31.functional.shaders.builtin_func"
#define VkglTestCase_001061_2 "tions.integer.uaddcarry.uvec2_lowp_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001061, VkglTestCase_001061_1, VkglTestCase_001061_2);

#define VkglTestCase_001062_1 "dEQP-GLES31.functional.shaders.builtin_functi"
#define VkglTestCase_001062_2 "ons.integer.uaddcarry.uvec2_lowp_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001062, VkglTestCase_001062_1, VkglTestCase_001062_2);

#define VkglTestCase_001063_1 "dEQP-GLES31.functional.shaders.builtin_func"
#define VkglTestCase_001063_2 "tions.integer.uaddcarry.uvec2_lowp_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001063, VkglTestCase_001063_1, VkglTestCase_001063_2);

#define VkglTestCase_001064_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_001064_2 "ctions.integer.uaddcarry.uvec2_lowp_compute"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001064, VkglTestCase_001064_1, VkglTestCase_001064_2);

#define VkglTestCase_001065_1 "dEQP-GLES31.functional.shaders.builtin_func"
#define VkglTestCase_001065_2 "tions.integer.uaddcarry.uvec2_mediump_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001065, VkglTestCase_001065_1, VkglTestCase_001065_2);

#define VkglTestCase_001066_1 "dEQP-GLES31.functional.shaders.builtin_funct"
#define VkglTestCase_001066_2 "ions.integer.uaddcarry.uvec2_mediump_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001066, VkglTestCase_001066_1, VkglTestCase_001066_2);

#define VkglTestCase_001067_1 "dEQP-GLES31.functional.shaders.builtin_funct"
#define VkglTestCase_001067_2 "ions.integer.uaddcarry.uvec2_mediump_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001067, VkglTestCase_001067_1, VkglTestCase_001067_2);

#define VkglTestCase_001068_1 "dEQP-GLES31.functional.shaders.builtin_functio"
#define VkglTestCase_001068_2 "ns.integer.uaddcarry.uvec2_mediump_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001068, VkglTestCase_001068_1, VkglTestCase_001068_2);

#define VkglTestCase_001069_1 "dEQP-GLES31.functional.shaders.builtin_functi"
#define VkglTestCase_001069_2 "ons.integer.uaddcarry.uvec2_mediump_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001069, VkglTestCase_001069_1, VkglTestCase_001069_2);

#define VkglTestCase_001070_1 "dEQP-GLES31.functional.shaders.builtin_funct"
#define VkglTestCase_001070_2 "ions.integer.uaddcarry.uvec2_mediump_compute"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001070, VkglTestCase_001070_1, VkglTestCase_001070_2);

#define VkglTestCase_001071_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_001071_2 "ctions.integer.uaddcarry.uvec2_highp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001071, VkglTestCase_001071_1, VkglTestCase_001071_2);

#define VkglTestCase_001072_1 "dEQP-GLES31.functional.shaders.builtin_func"
#define VkglTestCase_001072_2 "tions.integer.uaddcarry.uvec2_highp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001072, VkglTestCase_001072_1, VkglTestCase_001072_2);

#define VkglTestCase_001073_1 "dEQP-GLES31.functional.shaders.builtin_func"
#define VkglTestCase_001073_2 "tions.integer.uaddcarry.uvec2_highp_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001073, VkglTestCase_001073_1, VkglTestCase_001073_2);

#define VkglTestCase_001074_1 "dEQP-GLES31.functional.shaders.builtin_functi"
#define VkglTestCase_001074_2 "ons.integer.uaddcarry.uvec2_highp_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001074, VkglTestCase_001074_1, VkglTestCase_001074_2);

#define VkglTestCase_001075_1 "dEQP-GLES31.functional.shaders.builtin_funct"
#define VkglTestCase_001075_2 "ions.integer.uaddcarry.uvec2_highp_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001075, VkglTestCase_001075_1, VkglTestCase_001075_2);

#define VkglTestCase_001076_1 "dEQP-GLES31.functional.shaders.builtin_func"
#define VkglTestCase_001076_2 "tions.integer.uaddcarry.uvec2_highp_compute"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001076, VkglTestCase_001076_1, VkglTestCase_001076_2);

#define VkglTestCase_001077_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_001077_2 "ctions.integer.uaddcarry.uvec3_lowp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001077, VkglTestCase_001077_1, VkglTestCase_001077_2);

#define VkglTestCase_001078_1 "dEQP-GLES31.functional.shaders.builtin_func"
#define VkglTestCase_001078_2 "tions.integer.uaddcarry.uvec3_lowp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001078, VkglTestCase_001078_1, VkglTestCase_001078_2);

#define VkglTestCase_001079_1 "dEQP-GLES31.functional.shaders.builtin_func"
#define VkglTestCase_001079_2 "tions.integer.uaddcarry.uvec3_lowp_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001079, VkglTestCase_001079_1, VkglTestCase_001079_2);

#define VkglTestCase_001080_1 "dEQP-GLES31.functional.shaders.builtin_functi"
#define VkglTestCase_001080_2 "ons.integer.uaddcarry.uvec3_lowp_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001080, VkglTestCase_001080_1, VkglTestCase_001080_2);

#define VkglTestCase_001081_1 "dEQP-GLES31.functional.shaders.builtin_func"
#define VkglTestCase_001081_2 "tions.integer.uaddcarry.uvec3_lowp_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001081, VkglTestCase_001081_1, VkglTestCase_001081_2);

#define VkglTestCase_001082_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_001082_2 "ctions.integer.uaddcarry.uvec3_lowp_compute"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001082, VkglTestCase_001082_1, VkglTestCase_001082_2);

#define VkglTestCase_001083_1 "dEQP-GLES31.functional.shaders.builtin_func"
#define VkglTestCase_001083_2 "tions.integer.uaddcarry.uvec3_mediump_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001083, VkglTestCase_001083_1, VkglTestCase_001083_2);

#define VkglTestCase_001084_1 "dEQP-GLES31.functional.shaders.builtin_funct"
#define VkglTestCase_001084_2 "ions.integer.uaddcarry.uvec3_mediump_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001084, VkglTestCase_001084_1, VkglTestCase_001084_2);

#define VkglTestCase_001085_1 "dEQP-GLES31.functional.shaders.builtin_funct"
#define VkglTestCase_001085_2 "ions.integer.uaddcarry.uvec3_mediump_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001085, VkglTestCase_001085_1, VkglTestCase_001085_2);

#define VkglTestCase_001086_1 "dEQP-GLES31.functional.shaders.builtin_functio"
#define VkglTestCase_001086_2 "ns.integer.uaddcarry.uvec3_mediump_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001086, VkglTestCase_001086_1, VkglTestCase_001086_2);

#define VkglTestCase_001087_1 "dEQP-GLES31.functional.shaders.builtin_functi"
#define VkglTestCase_001087_2 "ons.integer.uaddcarry.uvec3_mediump_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001087, VkglTestCase_001087_1, VkglTestCase_001087_2);

#define VkglTestCase_001088_1 "dEQP-GLES31.functional.shaders.builtin_funct"
#define VkglTestCase_001088_2 "ions.integer.uaddcarry.uvec3_mediump_compute"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001088, VkglTestCase_001088_1, VkglTestCase_001088_2);

#define VkglTestCase_001089_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_001089_2 "ctions.integer.uaddcarry.uvec3_highp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001089, VkglTestCase_001089_1, VkglTestCase_001089_2);

#define VkglTestCase_001090_1 "dEQP-GLES31.functional.shaders.builtin_func"
#define VkglTestCase_001090_2 "tions.integer.uaddcarry.uvec3_highp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001090, VkglTestCase_001090_1, VkglTestCase_001090_2);

#define VkglTestCase_001091_1 "dEQP-GLES31.functional.shaders.builtin_func"
#define VkglTestCase_001091_2 "tions.integer.uaddcarry.uvec3_highp_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001091, VkglTestCase_001091_1, VkglTestCase_001091_2);

#define VkglTestCase_001092_1 "dEQP-GLES31.functional.shaders.builtin_functi"
#define VkglTestCase_001092_2 "ons.integer.uaddcarry.uvec3_highp_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001092, VkglTestCase_001092_1, VkglTestCase_001092_2);

#define VkglTestCase_001093_1 "dEQP-GLES31.functional.shaders.builtin_funct"
#define VkglTestCase_001093_2 "ions.integer.uaddcarry.uvec3_highp_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001093, VkglTestCase_001093_1, VkglTestCase_001093_2);

#define VkglTestCase_001094_1 "dEQP-GLES31.functional.shaders.builtin_func"
#define VkglTestCase_001094_2 "tions.integer.uaddcarry.uvec3_highp_compute"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001094, VkglTestCase_001094_1, VkglTestCase_001094_2);

#define VkglTestCase_001095_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_001095_2 "ctions.integer.uaddcarry.uvec4_lowp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001095, VkglTestCase_001095_1, VkglTestCase_001095_2);

#define VkglTestCase_001096_1 "dEQP-GLES31.functional.shaders.builtin_func"
#define VkglTestCase_001096_2 "tions.integer.uaddcarry.uvec4_lowp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001096, VkglTestCase_001096_1, VkglTestCase_001096_2);

#define VkglTestCase_001097_1 "dEQP-GLES31.functional.shaders.builtin_func"
#define VkglTestCase_001097_2 "tions.integer.uaddcarry.uvec4_lowp_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001097, VkglTestCase_001097_1, VkglTestCase_001097_2);

#define VkglTestCase_001098_1 "dEQP-GLES31.functional.shaders.builtin_functi"
#define VkglTestCase_001098_2 "ons.integer.uaddcarry.uvec4_lowp_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001098, VkglTestCase_001098_1, VkglTestCase_001098_2);

#define VkglTestCase_001099_1 "dEQP-GLES31.functional.shaders.builtin_func"
#define VkglTestCase_001099_2 "tions.integer.uaddcarry.uvec4_lowp_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001099, VkglTestCase_001099_1, VkglTestCase_001099_2);

#define VkglTestCase_001100_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_001100_2 "ctions.integer.uaddcarry.uvec4_lowp_compute"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001100, VkglTestCase_001100_1, VkglTestCase_001100_2);

#define VkglTestCase_001101_1 "dEQP-GLES31.functional.shaders.builtin_func"
#define VkglTestCase_001101_2 "tions.integer.uaddcarry.uvec4_mediump_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001101, VkglTestCase_001101_1, VkglTestCase_001101_2);

#define VkglTestCase_001102_1 "dEQP-GLES31.functional.shaders.builtin_funct"
#define VkglTestCase_001102_2 "ions.integer.uaddcarry.uvec4_mediump_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001102, VkglTestCase_001102_1, VkglTestCase_001102_2);

#define VkglTestCase_001103_1 "dEQP-GLES31.functional.shaders.builtin_funct"
#define VkglTestCase_001103_2 "ions.integer.uaddcarry.uvec4_mediump_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001103, VkglTestCase_001103_1, VkglTestCase_001103_2);

#define VkglTestCase_001104_1 "dEQP-GLES31.functional.shaders.builtin_functio"
#define VkglTestCase_001104_2 "ns.integer.uaddcarry.uvec4_mediump_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001104, VkglTestCase_001104_1, VkglTestCase_001104_2);

#define VkglTestCase_001105_1 "dEQP-GLES31.functional.shaders.builtin_functi"
#define VkglTestCase_001105_2 "ons.integer.uaddcarry.uvec4_mediump_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001105, VkglTestCase_001105_1, VkglTestCase_001105_2);

#define VkglTestCase_001106_1 "dEQP-GLES31.functional.shaders.builtin_funct"
#define VkglTestCase_001106_2 "ions.integer.uaddcarry.uvec4_mediump_compute"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001106, VkglTestCase_001106_1, VkglTestCase_001106_2);

#define VkglTestCase_001107_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_001107_2 "ctions.integer.uaddcarry.uvec4_highp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001107, VkglTestCase_001107_1, VkglTestCase_001107_2);

#define VkglTestCase_001108_1 "dEQP-GLES31.functional.shaders.builtin_func"
#define VkglTestCase_001108_2 "tions.integer.uaddcarry.uvec4_highp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001108, VkglTestCase_001108_1, VkglTestCase_001108_2);

#define VkglTestCase_001109_1 "dEQP-GLES31.functional.shaders.builtin_func"
#define VkglTestCase_001109_2 "tions.integer.uaddcarry.uvec4_highp_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001109, VkglTestCase_001109_1, VkglTestCase_001109_2);

#define VkglTestCase_001110_1 "dEQP-GLES31.functional.shaders.builtin_functi"
#define VkglTestCase_001110_2 "ons.integer.uaddcarry.uvec4_highp_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001110, VkglTestCase_001110_1, VkglTestCase_001110_2);

#define VkglTestCase_001111_1 "dEQP-GLES31.functional.shaders.builtin_funct"
#define VkglTestCase_001111_2 "ions.integer.uaddcarry.uvec4_highp_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001111, VkglTestCase_001111_1, VkglTestCase_001111_2);

#define VkglTestCase_001112_1 "dEQP-GLES31.functional.shaders.builtin_func"
#define VkglTestCase_001112_2 "tions.integer.uaddcarry.uvec4_highp_compute"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001112, VkglTestCase_001112_1, VkglTestCase_001112_2);
