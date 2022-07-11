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
#include "../ActsDeqpgles30011TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_010064_1 "dEQP-GLES3.functional.shaders.operator.binar"
#define VkglTestCase_010064_2 "y_operator.mod_assign_effect.lowp_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010064, VkglTestCase_010064_1, VkglTestCase_010064_2);

#define VkglTestCase_010065_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_010065_2 "_operator.mod_assign_effect.lowp_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010065, VkglTestCase_010065_1, VkglTestCase_010065_2);

#define VkglTestCase_010066_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_010066_2 "_operator.mod_assign_effect.mediump_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010066, VkglTestCase_010066_1, VkglTestCase_010066_2);

#define VkglTestCase_010067_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_010067_2 "operator.mod_assign_effect.mediump_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010067, VkglTestCase_010067_1, VkglTestCase_010067_2);

#define VkglTestCase_010068_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_010068_2 "_operator.mod_assign_effect.lowp_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010068, VkglTestCase_010068_1, VkglTestCase_010068_2);

#define VkglTestCase_010069_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_010069_2 "operator.mod_assign_effect.lowp_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010069, VkglTestCase_010069_1, VkglTestCase_010069_2);

#define VkglTestCase_010070_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_010070_2 "operator.mod_assign_effect.mediump_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010070, VkglTestCase_010070_1, VkglTestCase_010070_2);

#define VkglTestCase_010071_1 "dEQP-GLES3.functional.shaders.operator.binary_o"
#define VkglTestCase_010071_2 "perator.mod_assign_effect.mediump_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010071, VkglTestCase_010071_1, VkglTestCase_010071_2);

#define VkglTestCase_010072_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_010072_2 "_operator.mod_assign_effect.lowp_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010072, VkglTestCase_010072_1, VkglTestCase_010072_2);

#define VkglTestCase_010073_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_010073_2 "operator.mod_assign_effect.lowp_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010073, VkglTestCase_010073_1, VkglTestCase_010073_2);

#define VkglTestCase_010074_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_010074_2 "operator.mod_assign_effect.mediump_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010074, VkglTestCase_010074_1, VkglTestCase_010074_2);

#define VkglTestCase_010075_1 "dEQP-GLES3.functional.shaders.operator.binary_o"
#define VkglTestCase_010075_2 "perator.mod_assign_effect.mediump_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010075, VkglTestCase_010075_1, VkglTestCase_010075_2);

#define VkglTestCase_010076_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_010076_2 "_operator.mod_assign_effect.lowp_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010076, VkglTestCase_010076_1, VkglTestCase_010076_2);

#define VkglTestCase_010077_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_010077_2 "operator.mod_assign_effect.lowp_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010077, VkglTestCase_010077_1, VkglTestCase_010077_2);

#define VkglTestCase_010078_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_010078_2 "operator.mod_assign_effect.mediump_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010078, VkglTestCase_010078_1, VkglTestCase_010078_2);

#define VkglTestCase_010079_1 "dEQP-GLES3.functional.shaders.operator.binary_o"
#define VkglTestCase_010079_2 "perator.mod_assign_effect.mediump_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010079, VkglTestCase_010079_1, VkglTestCase_010079_2);

#define VkglTestCase_010080_1 "dEQP-GLES3.functional.shaders.operator.binar"
#define VkglTestCase_010080_2 "y_operator.mod_assign_effect.highp_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010080, VkglTestCase_010080_1, VkglTestCase_010080_2);

#define VkglTestCase_010081_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_010081_2 "_operator.mod_assign_effect.highp_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010081, VkglTestCase_010081_1, VkglTestCase_010081_2);

#define VkglTestCase_010082_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_010082_2 "_operator.mod_assign_effect.highp_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010082, VkglTestCase_010082_1, VkglTestCase_010082_2);

#define VkglTestCase_010083_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_010083_2 "operator.mod_assign_effect.highp_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010083, VkglTestCase_010083_1, VkglTestCase_010083_2);

#define VkglTestCase_010084_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_010084_2 "_operator.mod_assign_effect.highp_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010084, VkglTestCase_010084_1, VkglTestCase_010084_2);

#define VkglTestCase_010085_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_010085_2 "operator.mod_assign_effect.highp_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010085, VkglTestCase_010085_1, VkglTestCase_010085_2);

#define VkglTestCase_010086_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_010086_2 "_operator.mod_assign_effect.highp_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010086, VkglTestCase_010086_1, VkglTestCase_010086_2);

#define VkglTestCase_010087_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_010087_2 "operator.mod_assign_effect.highp_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010087, VkglTestCase_010087_1, VkglTestCase_010087_2);

#define VkglTestCase_010088_1 "dEQP-GLES3.functional.shaders.operator.binar"
#define VkglTestCase_010088_2 "y_operator.mod_assign_effect.lowp_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010088, VkglTestCase_010088_1, VkglTestCase_010088_2);

#define VkglTestCase_010089_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_010089_2 "_operator.mod_assign_effect.lowp_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010089, VkglTestCase_010089_1, VkglTestCase_010089_2);

#define VkglTestCase_010090_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_010090_2 "operator.mod_assign_effect.mediump_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010090, VkglTestCase_010090_1, VkglTestCase_010090_2);

#define VkglTestCase_010091_1 "dEQP-GLES3.functional.shaders.operator.binary_o"
#define VkglTestCase_010091_2 "perator.mod_assign_effect.mediump_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010091, VkglTestCase_010091_1, VkglTestCase_010091_2);

#define VkglTestCase_010092_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_010092_2 "_operator.mod_assign_effect.lowp_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010092, VkglTestCase_010092_1, VkglTestCase_010092_2);

#define VkglTestCase_010093_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_010093_2 "operator.mod_assign_effect.lowp_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010093, VkglTestCase_010093_1, VkglTestCase_010093_2);

#define VkglTestCase_010094_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_010094_2 "operator.mod_assign_effect.mediump_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010094, VkglTestCase_010094_1, VkglTestCase_010094_2);

#define VkglTestCase_010095_1 "dEQP-GLES3.functional.shaders.operator.binary_o"
#define VkglTestCase_010095_2 "perator.mod_assign_effect.mediump_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010095, VkglTestCase_010095_1, VkglTestCase_010095_2);

#define VkglTestCase_010096_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_010096_2 "_operator.mod_assign_effect.lowp_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010096, VkglTestCase_010096_1, VkglTestCase_010096_2);

#define VkglTestCase_010097_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_010097_2 "operator.mod_assign_effect.lowp_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010097, VkglTestCase_010097_1, VkglTestCase_010097_2);

#define VkglTestCase_010098_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_010098_2 "operator.mod_assign_effect.mediump_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010098, VkglTestCase_010098_1, VkglTestCase_010098_2);

#define VkglTestCase_010099_1 "dEQP-GLES3.functional.shaders.operator.binary_o"
#define VkglTestCase_010099_2 "perator.mod_assign_effect.mediump_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010099, VkglTestCase_010099_1, VkglTestCase_010099_2);

#define VkglTestCase_010100_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_010100_2 "_operator.mod_assign_effect.lowp_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010100, VkglTestCase_010100_1, VkglTestCase_010100_2);

#define VkglTestCase_010101_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_010101_2 "operator.mod_assign_effect.lowp_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010101, VkglTestCase_010101_1, VkglTestCase_010101_2);

#define VkglTestCase_010102_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_010102_2 "operator.mod_assign_effect.mediump_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010102, VkglTestCase_010102_1, VkglTestCase_010102_2);

#define VkglTestCase_010103_1 "dEQP-GLES3.functional.shaders.operator.binary_o"
#define VkglTestCase_010103_2 "perator.mod_assign_effect.mediump_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010103, VkglTestCase_010103_1, VkglTestCase_010103_2);

#define VkglTestCase_010104_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_010104_2 "_operator.mod_assign_effect.highp_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010104, VkglTestCase_010104_1, VkglTestCase_010104_2);

#define VkglTestCase_010105_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_010105_2 "operator.mod_assign_effect.highp_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010105, VkglTestCase_010105_1, VkglTestCase_010105_2);

#define VkglTestCase_010106_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_010106_2 "_operator.mod_assign_effect.highp_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010106, VkglTestCase_010106_1, VkglTestCase_010106_2);

#define VkglTestCase_010107_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_010107_2 "operator.mod_assign_effect.highp_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010107, VkglTestCase_010107_1, VkglTestCase_010107_2);

#define VkglTestCase_010108_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_010108_2 "_operator.mod_assign_effect.highp_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010108, VkglTestCase_010108_1, VkglTestCase_010108_2);

#define VkglTestCase_010109_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_010109_2 "operator.mod_assign_effect.highp_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010109, VkglTestCase_010109_1, VkglTestCase_010109_2);

#define VkglTestCase_010110_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_010110_2 "_operator.mod_assign_effect.highp_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010110, VkglTestCase_010110_1, VkglTestCase_010110_2);

#define VkglTestCase_010111_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_010111_2 "operator.mod_assign_effect.highp_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010111, VkglTestCase_010111_1, VkglTestCase_010111_2);

#define VkglTestCase_010112_1 "dEQP-GLES3.functional.shaders.operator.binary_o"
#define VkglTestCase_010112_2 "perator.mod_assign_effect.lowp_ivec2_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010112, VkglTestCase_010112_1, VkglTestCase_010112_2);

#define VkglTestCase_010113_1 "dEQP-GLES3.functional.shaders.operator.binary_op"
#define VkglTestCase_010113_2 "erator.mod_assign_effect.lowp_ivec2_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010113, VkglTestCase_010113_1, VkglTestCase_010113_2);

#define VkglTestCase_010114_1 "dEQP-GLES3.functional.shaders.operator.binary_op"
#define VkglTestCase_010114_2 "erator.mod_assign_effect.mediump_ivec2_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010114, VkglTestCase_010114_1, VkglTestCase_010114_2);

#define VkglTestCase_010115_1 "dEQP-GLES3.functional.shaders.operator.binary_ope"
#define VkglTestCase_010115_2 "rator.mod_assign_effect.mediump_ivec2_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010115, VkglTestCase_010115_1, VkglTestCase_010115_2);

#define VkglTestCase_010116_1 "dEQP-GLES3.functional.shaders.operator.binary_o"
#define VkglTestCase_010116_2 "perator.mod_assign_effect.lowp_ivec3_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010116, VkglTestCase_010116_1, VkglTestCase_010116_2);

#define VkglTestCase_010117_1 "dEQP-GLES3.functional.shaders.operator.binary_op"
#define VkglTestCase_010117_2 "erator.mod_assign_effect.lowp_ivec3_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010117, VkglTestCase_010117_1, VkglTestCase_010117_2);

#define VkglTestCase_010118_1 "dEQP-GLES3.functional.shaders.operator.binary_op"
#define VkglTestCase_010118_2 "erator.mod_assign_effect.mediump_ivec3_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010118, VkglTestCase_010118_1, VkglTestCase_010118_2);

#define VkglTestCase_010119_1 "dEQP-GLES3.functional.shaders.operator.binary_ope"
#define VkglTestCase_010119_2 "rator.mod_assign_effect.mediump_ivec3_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010119, VkglTestCase_010119_1, VkglTestCase_010119_2);

#define VkglTestCase_010120_1 "dEQP-GLES3.functional.shaders.operator.binary_o"
#define VkglTestCase_010120_2 "perator.mod_assign_effect.lowp_ivec4_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010120, VkglTestCase_010120_1, VkglTestCase_010120_2);

#define VkglTestCase_010121_1 "dEQP-GLES3.functional.shaders.operator.binary_op"
#define VkglTestCase_010121_2 "erator.mod_assign_effect.lowp_ivec4_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010121, VkglTestCase_010121_1, VkglTestCase_010121_2);

#define VkglTestCase_010122_1 "dEQP-GLES3.functional.shaders.operator.binary_op"
#define VkglTestCase_010122_2 "erator.mod_assign_effect.mediump_ivec4_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010122, VkglTestCase_010122_1, VkglTestCase_010122_2);

#define VkglTestCase_010123_1 "dEQP-GLES3.functional.shaders.operator.binary_ope"
#define VkglTestCase_010123_2 "rator.mod_assign_effect.mediump_ivec4_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010123, VkglTestCase_010123_1, VkglTestCase_010123_2);

#define VkglTestCase_010124_1 "dEQP-GLES3.functional.shaders.operator.binary_o"
#define VkglTestCase_010124_2 "perator.mod_assign_effect.highp_ivec2_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010124, VkglTestCase_010124_1, VkglTestCase_010124_2);

#define VkglTestCase_010125_1 "dEQP-GLES3.functional.shaders.operator.binary_op"
#define VkglTestCase_010125_2 "erator.mod_assign_effect.highp_ivec2_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010125, VkglTestCase_010125_1, VkglTestCase_010125_2);

#define VkglTestCase_010126_1 "dEQP-GLES3.functional.shaders.operator.binary_o"
#define VkglTestCase_010126_2 "perator.mod_assign_effect.highp_ivec3_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010126, VkglTestCase_010126_1, VkglTestCase_010126_2);

#define VkglTestCase_010127_1 "dEQP-GLES3.functional.shaders.operator.binary_op"
#define VkglTestCase_010127_2 "erator.mod_assign_effect.highp_ivec3_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010127, VkglTestCase_010127_1, VkglTestCase_010127_2);

#define VkglTestCase_010128_1 "dEQP-GLES3.functional.shaders.operator.binary_o"
#define VkglTestCase_010128_2 "perator.mod_assign_effect.highp_ivec4_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010128, VkglTestCase_010128_1, VkglTestCase_010128_2);

#define VkglTestCase_010129_1 "dEQP-GLES3.functional.shaders.operator.binary_op"
#define VkglTestCase_010129_2 "erator.mod_assign_effect.highp_ivec4_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010129, VkglTestCase_010129_1, VkglTestCase_010129_2);

#define VkglTestCase_010130_1 "dEQP-GLES3.functional.shaders.operator.binary_o"
#define VkglTestCase_010130_2 "perator.mod_assign_effect.lowp_uvec2_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010130, VkglTestCase_010130_1, VkglTestCase_010130_2);

#define VkglTestCase_010131_1 "dEQP-GLES3.functional.shaders.operator.binary_op"
#define VkglTestCase_010131_2 "erator.mod_assign_effect.lowp_uvec2_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010131, VkglTestCase_010131_1, VkglTestCase_010131_2);

#define VkglTestCase_010132_1 "dEQP-GLES3.functional.shaders.operator.binary_ope"
#define VkglTestCase_010132_2 "rator.mod_assign_effect.mediump_uvec2_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010132, VkglTestCase_010132_1, VkglTestCase_010132_2);

#define VkglTestCase_010133_1 "dEQP-GLES3.functional.shaders.operator.binary_oper"
#define VkglTestCase_010133_2 "ator.mod_assign_effect.mediump_uvec2_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010133, VkglTestCase_010133_1, VkglTestCase_010133_2);

#define VkglTestCase_010134_1 "dEQP-GLES3.functional.shaders.operator.binary_o"
#define VkglTestCase_010134_2 "perator.mod_assign_effect.lowp_uvec3_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010134, VkglTestCase_010134_1, VkglTestCase_010134_2);

#define VkglTestCase_010135_1 "dEQP-GLES3.functional.shaders.operator.binary_op"
#define VkglTestCase_010135_2 "erator.mod_assign_effect.lowp_uvec3_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010135, VkglTestCase_010135_1, VkglTestCase_010135_2);

#define VkglTestCase_010136_1 "dEQP-GLES3.functional.shaders.operator.binary_ope"
#define VkglTestCase_010136_2 "rator.mod_assign_effect.mediump_uvec3_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010136, VkglTestCase_010136_1, VkglTestCase_010136_2);

#define VkglTestCase_010137_1 "dEQP-GLES3.functional.shaders.operator.binary_oper"
#define VkglTestCase_010137_2 "ator.mod_assign_effect.mediump_uvec3_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010137, VkglTestCase_010137_1, VkglTestCase_010137_2);

#define VkglTestCase_010138_1 "dEQP-GLES3.functional.shaders.operator.binary_o"
#define VkglTestCase_010138_2 "perator.mod_assign_effect.lowp_uvec4_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010138, VkglTestCase_010138_1, VkglTestCase_010138_2);

#define VkglTestCase_010139_1 "dEQP-GLES3.functional.shaders.operator.binary_op"
#define VkglTestCase_010139_2 "erator.mod_assign_effect.lowp_uvec4_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010139, VkglTestCase_010139_1, VkglTestCase_010139_2);

#define VkglTestCase_010140_1 "dEQP-GLES3.functional.shaders.operator.binary_ope"
#define VkglTestCase_010140_2 "rator.mod_assign_effect.mediump_uvec4_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010140, VkglTestCase_010140_1, VkglTestCase_010140_2);

#define VkglTestCase_010141_1 "dEQP-GLES3.functional.shaders.operator.binary_oper"
#define VkglTestCase_010141_2 "ator.mod_assign_effect.mediump_uvec4_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010141, VkglTestCase_010141_1, VkglTestCase_010141_2);

#define VkglTestCase_010142_1 "dEQP-GLES3.functional.shaders.operator.binary_op"
#define VkglTestCase_010142_2 "erator.mod_assign_effect.highp_uvec2_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010142, VkglTestCase_010142_1, VkglTestCase_010142_2);

#define VkglTestCase_010143_1 "dEQP-GLES3.functional.shaders.operator.binary_ope"
#define VkglTestCase_010143_2 "rator.mod_assign_effect.highp_uvec2_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010143, VkglTestCase_010143_1, VkglTestCase_010143_2);

#define VkglTestCase_010144_1 "dEQP-GLES3.functional.shaders.operator.binary_op"
#define VkglTestCase_010144_2 "erator.mod_assign_effect.highp_uvec3_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010144, VkglTestCase_010144_1, VkglTestCase_010144_2);

#define VkglTestCase_010145_1 "dEQP-GLES3.functional.shaders.operator.binary_ope"
#define VkglTestCase_010145_2 "rator.mod_assign_effect.highp_uvec3_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010145, VkglTestCase_010145_1, VkglTestCase_010145_2);

#define VkglTestCase_010146_1 "dEQP-GLES3.functional.shaders.operator.binary_op"
#define VkglTestCase_010146_2 "erator.mod_assign_effect.highp_uvec4_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010146, VkglTestCase_010146_1, VkglTestCase_010146_2);

#define VkglTestCase_010147_1 "dEQP-GLES3.functional.shaders.operator.binary_ope"
#define VkglTestCase_010147_2 "rator.mod_assign_effect.highp_uvec4_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010147, VkglTestCase_010147_1, VkglTestCase_010147_2);
