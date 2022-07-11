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
#include "../ActsDeqpgles20005TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_004078_1 "dEQP-GLES2.functional.shaders.operator.unary_o"
#define VkglTestCase_004078_2 "perator.pre_decrement_effect.lowp_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004078, VkglTestCase_004078_1, VkglTestCase_004078_2);

#define VkglTestCase_004079_1 "dEQP-GLES2.functional.shaders.operator.unary_op"
#define VkglTestCase_004079_2 "erator.pre_decrement_effect.lowp_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004079, VkglTestCase_004079_1, VkglTestCase_004079_2);

#define VkglTestCase_004080_1 "dEQP-GLES2.functional.shaders.operator.unary_op"
#define VkglTestCase_004080_2 "erator.pre_decrement_effect.mediump_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004080, VkglTestCase_004080_1, VkglTestCase_004080_2);

#define VkglTestCase_004081_1 "dEQP-GLES2.functional.shaders.operator.unary_ope"
#define VkglTestCase_004081_2 "rator.pre_decrement_effect.mediump_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004081, VkglTestCase_004081_1, VkglTestCase_004081_2);

#define VkglTestCase_004082_1 "dEQP-GLES2.functional.shaders.operator.unary_o"
#define VkglTestCase_004082_2 "perator.pre_decrement_effect.highp_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004082, VkglTestCase_004082_1, VkglTestCase_004082_2);

#define VkglTestCase_004083_1 "dEQP-GLES2.functional.shaders.operator.unary_op"
#define VkglTestCase_004083_2 "erator.pre_decrement_effect.highp_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004083, VkglTestCase_004083_1, VkglTestCase_004083_2);

#define VkglTestCase_004084_1 "dEQP-GLES2.functional.shaders.operator.unary_"
#define VkglTestCase_004084_2 "operator.pre_decrement_effect.lowp_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004084, VkglTestCase_004084_1, VkglTestCase_004084_2);

#define VkglTestCase_004085_1 "dEQP-GLES2.functional.shaders.operator.unary_o"
#define VkglTestCase_004085_2 "perator.pre_decrement_effect.lowp_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004085, VkglTestCase_004085_1, VkglTestCase_004085_2);

#define VkglTestCase_004086_1 "dEQP-GLES2.functional.shaders.operator.unary_op"
#define VkglTestCase_004086_2 "erator.pre_decrement_effect.mediump_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004086, VkglTestCase_004086_1, VkglTestCase_004086_2);

#define VkglTestCase_004087_1 "dEQP-GLES2.functional.shaders.operator.unary_ope"
#define VkglTestCase_004087_2 "rator.pre_decrement_effect.mediump_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004087, VkglTestCase_004087_1, VkglTestCase_004087_2);

#define VkglTestCase_004088_1 "dEQP-GLES2.functional.shaders.operator.unary_o"
#define VkglTestCase_004088_2 "perator.pre_decrement_effect.highp_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004088, VkglTestCase_004088_1, VkglTestCase_004088_2);

#define VkglTestCase_004089_1 "dEQP-GLES2.functional.shaders.operator.unary_op"
#define VkglTestCase_004089_2 "erator.pre_decrement_effect.highp_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004089, VkglTestCase_004089_1, VkglTestCase_004089_2);

#define VkglTestCase_004090_1 "dEQP-GLES2.functional.shaders.operator.unary_"
#define VkglTestCase_004090_2 "operator.pre_decrement_effect.lowp_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004090, VkglTestCase_004090_1, VkglTestCase_004090_2);

#define VkglTestCase_004091_1 "dEQP-GLES2.functional.shaders.operator.unary_o"
#define VkglTestCase_004091_2 "perator.pre_decrement_effect.lowp_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004091, VkglTestCase_004091_1, VkglTestCase_004091_2);

#define VkglTestCase_004092_1 "dEQP-GLES2.functional.shaders.operator.unary_op"
#define VkglTestCase_004092_2 "erator.pre_decrement_effect.mediump_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004092, VkglTestCase_004092_1, VkglTestCase_004092_2);

#define VkglTestCase_004093_1 "dEQP-GLES2.functional.shaders.operator.unary_ope"
#define VkglTestCase_004093_2 "rator.pre_decrement_effect.mediump_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004093, VkglTestCase_004093_1, VkglTestCase_004093_2);

#define VkglTestCase_004094_1 "dEQP-GLES2.functional.shaders.operator.unary_o"
#define VkglTestCase_004094_2 "perator.pre_decrement_effect.highp_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004094, VkglTestCase_004094_1, VkglTestCase_004094_2);

#define VkglTestCase_004095_1 "dEQP-GLES2.functional.shaders.operator.unary_op"
#define VkglTestCase_004095_2 "erator.pre_decrement_effect.highp_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004095, VkglTestCase_004095_1, VkglTestCase_004095_2);

#define VkglTestCase_004096_1 "dEQP-GLES2.functional.shaders.operator.unary_"
#define VkglTestCase_004096_2 "operator.pre_decrement_effect.lowp_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004096, VkglTestCase_004096_1, VkglTestCase_004096_2);

#define VkglTestCase_004097_1 "dEQP-GLES2.functional.shaders.operator.unary_o"
#define VkglTestCase_004097_2 "perator.pre_decrement_effect.lowp_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004097, VkglTestCase_004097_1, VkglTestCase_004097_2);

#define VkglTestCase_004098_1 "dEQP-GLES2.functional.shaders.operator.unary_op"
#define VkglTestCase_004098_2 "erator.pre_decrement_effect.mediump_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004098, VkglTestCase_004098_1, VkglTestCase_004098_2);

#define VkglTestCase_004099_1 "dEQP-GLES2.functional.shaders.operator.unary_ope"
#define VkglTestCase_004099_2 "rator.pre_decrement_effect.mediump_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004099, VkglTestCase_004099_1, VkglTestCase_004099_2);

#define VkglTestCase_004100_1 "dEQP-GLES2.functional.shaders.operator.unary_o"
#define VkglTestCase_004100_2 "perator.pre_decrement_effect.highp_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004100, VkglTestCase_004100_1, VkglTestCase_004100_2);

#define VkglTestCase_004101_1 "dEQP-GLES2.functional.shaders.operator.unary_op"
#define VkglTestCase_004101_2 "erator.pre_decrement_effect.highp_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004101, VkglTestCase_004101_1, VkglTestCase_004101_2);

#define VkglTestCase_004102_1 "dEQP-GLES2.functional.shaders.operator.unary_"
#define VkglTestCase_004102_2 "operator.pre_decrement_effect.lowp_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004102, VkglTestCase_004102_1, VkglTestCase_004102_2);

#define VkglTestCase_004103_1 "dEQP-GLES2.functional.shaders.operator.unary_o"
#define VkglTestCase_004103_2 "perator.pre_decrement_effect.lowp_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004103, VkglTestCase_004103_1, VkglTestCase_004103_2);

#define VkglTestCase_004104_1 "dEQP-GLES2.functional.shaders.operator.unary_o"
#define VkglTestCase_004104_2 "perator.pre_decrement_effect.mediump_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004104, VkglTestCase_004104_1, VkglTestCase_004104_2);

#define VkglTestCase_004105_1 "dEQP-GLES2.functional.shaders.operator.unary_op"
#define VkglTestCase_004105_2 "erator.pre_decrement_effect.mediump_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004105, VkglTestCase_004105_1, VkglTestCase_004105_2);

#define VkglTestCase_004106_1 "dEQP-GLES2.functional.shaders.operator.unary_"
#define VkglTestCase_004106_2 "operator.pre_decrement_effect.highp_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004106, VkglTestCase_004106_1, VkglTestCase_004106_2);

#define VkglTestCase_004107_1 "dEQP-GLES2.functional.shaders.operator.unary_o"
#define VkglTestCase_004107_2 "perator.pre_decrement_effect.highp_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004107, VkglTestCase_004107_1, VkglTestCase_004107_2);

#define VkglTestCase_004108_1 "dEQP-GLES2.functional.shaders.operator.unary_o"
#define VkglTestCase_004108_2 "perator.pre_decrement_effect.lowp_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004108, VkglTestCase_004108_1, VkglTestCase_004108_2);

#define VkglTestCase_004109_1 "dEQP-GLES2.functional.shaders.operator.unary_op"
#define VkglTestCase_004109_2 "erator.pre_decrement_effect.lowp_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004109, VkglTestCase_004109_1, VkglTestCase_004109_2);

#define VkglTestCase_004110_1 "dEQP-GLES2.functional.shaders.operator.unary_op"
#define VkglTestCase_004110_2 "erator.pre_decrement_effect.mediump_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004110, VkglTestCase_004110_1, VkglTestCase_004110_2);

#define VkglTestCase_004111_1 "dEQP-GLES2.functional.shaders.operator.unary_ope"
#define VkglTestCase_004111_2 "rator.pre_decrement_effect.mediump_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004111, VkglTestCase_004111_1, VkglTestCase_004111_2);

#define VkglTestCase_004112_1 "dEQP-GLES2.functional.shaders.operator.unary_o"
#define VkglTestCase_004112_2 "perator.pre_decrement_effect.highp_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004112, VkglTestCase_004112_1, VkglTestCase_004112_2);

#define VkglTestCase_004113_1 "dEQP-GLES2.functional.shaders.operator.unary_op"
#define VkglTestCase_004113_2 "erator.pre_decrement_effect.highp_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004113, VkglTestCase_004113_1, VkglTestCase_004113_2);

#define VkglTestCase_004114_1 "dEQP-GLES2.functional.shaders.operator.unary_o"
#define VkglTestCase_004114_2 "perator.pre_decrement_effect.lowp_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004114, VkglTestCase_004114_1, VkglTestCase_004114_2);

#define VkglTestCase_004115_1 "dEQP-GLES2.functional.shaders.operator.unary_op"
#define VkglTestCase_004115_2 "erator.pre_decrement_effect.lowp_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004115, VkglTestCase_004115_1, VkglTestCase_004115_2);

#define VkglTestCase_004116_1 "dEQP-GLES2.functional.shaders.operator.unary_op"
#define VkglTestCase_004116_2 "erator.pre_decrement_effect.mediump_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004116, VkglTestCase_004116_1, VkglTestCase_004116_2);

#define VkglTestCase_004117_1 "dEQP-GLES2.functional.shaders.operator.unary_ope"
#define VkglTestCase_004117_2 "rator.pre_decrement_effect.mediump_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004117, VkglTestCase_004117_1, VkglTestCase_004117_2);

#define VkglTestCase_004118_1 "dEQP-GLES2.functional.shaders.operator.unary_o"
#define VkglTestCase_004118_2 "perator.pre_decrement_effect.highp_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004118, VkglTestCase_004118_1, VkglTestCase_004118_2);

#define VkglTestCase_004119_1 "dEQP-GLES2.functional.shaders.operator.unary_op"
#define VkglTestCase_004119_2 "erator.pre_decrement_effect.highp_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004119, VkglTestCase_004119_1, VkglTestCase_004119_2);

#define VkglTestCase_004120_1 "dEQP-GLES2.functional.shaders.operator.unary_o"
#define VkglTestCase_004120_2 "perator.pre_decrement_effect.lowp_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004120, VkglTestCase_004120_1, VkglTestCase_004120_2);

#define VkglTestCase_004121_1 "dEQP-GLES2.functional.shaders.operator.unary_op"
#define VkglTestCase_004121_2 "erator.pre_decrement_effect.lowp_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004121, VkglTestCase_004121_1, VkglTestCase_004121_2);

#define VkglTestCase_004122_1 "dEQP-GLES2.functional.shaders.operator.unary_op"
#define VkglTestCase_004122_2 "erator.pre_decrement_effect.mediump_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004122, VkglTestCase_004122_1, VkglTestCase_004122_2);

#define VkglTestCase_004123_1 "dEQP-GLES2.functional.shaders.operator.unary_ope"
#define VkglTestCase_004123_2 "rator.pre_decrement_effect.mediump_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004123, VkglTestCase_004123_1, VkglTestCase_004123_2);

#define VkglTestCase_004124_1 "dEQP-GLES2.functional.shaders.operator.unary_o"
#define VkglTestCase_004124_2 "perator.pre_decrement_effect.highp_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004124, VkglTestCase_004124_1, VkglTestCase_004124_2);

#define VkglTestCase_004125_1 "dEQP-GLES2.functional.shaders.operator.unary_op"
#define VkglTestCase_004125_2 "erator.pre_decrement_effect.highp_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004125, VkglTestCase_004125_1, VkglTestCase_004125_2);
