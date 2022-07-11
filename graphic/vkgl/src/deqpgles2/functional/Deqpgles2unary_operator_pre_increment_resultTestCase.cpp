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

#define VkglTestCase_004222_1 "dEQP-GLES2.functional.shaders.operator.unary_o"
#define VkglTestCase_004222_2 "perator.pre_increment_result.lowp_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004222, VkglTestCase_004222_1, VkglTestCase_004222_2);

#define VkglTestCase_004223_1 "dEQP-GLES2.functional.shaders.operator.unary_op"
#define VkglTestCase_004223_2 "erator.pre_increment_result.lowp_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004223, VkglTestCase_004223_1, VkglTestCase_004223_2);

#define VkglTestCase_004224_1 "dEQP-GLES2.functional.shaders.operator.unary_op"
#define VkglTestCase_004224_2 "erator.pre_increment_result.mediump_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004224, VkglTestCase_004224_1, VkglTestCase_004224_2);

#define VkglTestCase_004225_1 "dEQP-GLES2.functional.shaders.operator.unary_ope"
#define VkglTestCase_004225_2 "rator.pre_increment_result.mediump_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004225, VkglTestCase_004225_1, VkglTestCase_004225_2);

#define VkglTestCase_004226_1 "dEQP-GLES2.functional.shaders.operator.unary_o"
#define VkglTestCase_004226_2 "perator.pre_increment_result.highp_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004226, VkglTestCase_004226_1, VkglTestCase_004226_2);

#define VkglTestCase_004227_1 "dEQP-GLES2.functional.shaders.operator.unary_op"
#define VkglTestCase_004227_2 "erator.pre_increment_result.highp_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004227, VkglTestCase_004227_1, VkglTestCase_004227_2);

#define VkglTestCase_004228_1 "dEQP-GLES2.functional.shaders.operator.unary_"
#define VkglTestCase_004228_2 "operator.pre_increment_result.lowp_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004228, VkglTestCase_004228_1, VkglTestCase_004228_2);

#define VkglTestCase_004229_1 "dEQP-GLES2.functional.shaders.operator.unary_o"
#define VkglTestCase_004229_2 "perator.pre_increment_result.lowp_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004229, VkglTestCase_004229_1, VkglTestCase_004229_2);

#define VkglTestCase_004230_1 "dEQP-GLES2.functional.shaders.operator.unary_op"
#define VkglTestCase_004230_2 "erator.pre_increment_result.mediump_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004230, VkglTestCase_004230_1, VkglTestCase_004230_2);

#define VkglTestCase_004231_1 "dEQP-GLES2.functional.shaders.operator.unary_ope"
#define VkglTestCase_004231_2 "rator.pre_increment_result.mediump_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004231, VkglTestCase_004231_1, VkglTestCase_004231_2);

#define VkglTestCase_004232_1 "dEQP-GLES2.functional.shaders.operator.unary_o"
#define VkglTestCase_004232_2 "perator.pre_increment_result.highp_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004232, VkglTestCase_004232_1, VkglTestCase_004232_2);

#define VkglTestCase_004233_1 "dEQP-GLES2.functional.shaders.operator.unary_op"
#define VkglTestCase_004233_2 "erator.pre_increment_result.highp_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004233, VkglTestCase_004233_1, VkglTestCase_004233_2);

#define VkglTestCase_004234_1 "dEQP-GLES2.functional.shaders.operator.unary_"
#define VkglTestCase_004234_2 "operator.pre_increment_result.lowp_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004234, VkglTestCase_004234_1, VkglTestCase_004234_2);

#define VkglTestCase_004235_1 "dEQP-GLES2.functional.shaders.operator.unary_o"
#define VkglTestCase_004235_2 "perator.pre_increment_result.lowp_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004235, VkglTestCase_004235_1, VkglTestCase_004235_2);

#define VkglTestCase_004236_1 "dEQP-GLES2.functional.shaders.operator.unary_op"
#define VkglTestCase_004236_2 "erator.pre_increment_result.mediump_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004236, VkglTestCase_004236_1, VkglTestCase_004236_2);

#define VkglTestCase_004237_1 "dEQP-GLES2.functional.shaders.operator.unary_ope"
#define VkglTestCase_004237_2 "rator.pre_increment_result.mediump_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004237, VkglTestCase_004237_1, VkglTestCase_004237_2);

#define VkglTestCase_004238_1 "dEQP-GLES2.functional.shaders.operator.unary_o"
#define VkglTestCase_004238_2 "perator.pre_increment_result.highp_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004238, VkglTestCase_004238_1, VkglTestCase_004238_2);

#define VkglTestCase_004239_1 "dEQP-GLES2.functional.shaders.operator.unary_op"
#define VkglTestCase_004239_2 "erator.pre_increment_result.highp_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004239, VkglTestCase_004239_1, VkglTestCase_004239_2);

#define VkglTestCase_004240_1 "dEQP-GLES2.functional.shaders.operator.unary_"
#define VkglTestCase_004240_2 "operator.pre_increment_result.lowp_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004240, VkglTestCase_004240_1, VkglTestCase_004240_2);

#define VkglTestCase_004241_1 "dEQP-GLES2.functional.shaders.operator.unary_o"
#define VkglTestCase_004241_2 "perator.pre_increment_result.lowp_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004241, VkglTestCase_004241_1, VkglTestCase_004241_2);

#define VkglTestCase_004242_1 "dEQP-GLES2.functional.shaders.operator.unary_op"
#define VkglTestCase_004242_2 "erator.pre_increment_result.mediump_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004242, VkglTestCase_004242_1, VkglTestCase_004242_2);

#define VkglTestCase_004243_1 "dEQP-GLES2.functional.shaders.operator.unary_ope"
#define VkglTestCase_004243_2 "rator.pre_increment_result.mediump_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004243, VkglTestCase_004243_1, VkglTestCase_004243_2);

#define VkglTestCase_004244_1 "dEQP-GLES2.functional.shaders.operator.unary_o"
#define VkglTestCase_004244_2 "perator.pre_increment_result.highp_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004244, VkglTestCase_004244_1, VkglTestCase_004244_2);

#define VkglTestCase_004245_1 "dEQP-GLES2.functional.shaders.operator.unary_op"
#define VkglTestCase_004245_2 "erator.pre_increment_result.highp_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004245, VkglTestCase_004245_1, VkglTestCase_004245_2);

#define VkglTestCase_004246_1 "dEQP-GLES2.functional.shaders.operator.unary_"
#define VkglTestCase_004246_2 "operator.pre_increment_result.lowp_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004246, VkglTestCase_004246_1, VkglTestCase_004246_2);

#define VkglTestCase_004247_1 "dEQP-GLES2.functional.shaders.operator.unary_o"
#define VkglTestCase_004247_2 "perator.pre_increment_result.lowp_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004247, VkglTestCase_004247_1, VkglTestCase_004247_2);

#define VkglTestCase_004248_1 "dEQP-GLES2.functional.shaders.operator.unary_o"
#define VkglTestCase_004248_2 "perator.pre_increment_result.mediump_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004248, VkglTestCase_004248_1, VkglTestCase_004248_2);

#define VkglTestCase_004249_1 "dEQP-GLES2.functional.shaders.operator.unary_op"
#define VkglTestCase_004249_2 "erator.pre_increment_result.mediump_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004249, VkglTestCase_004249_1, VkglTestCase_004249_2);

#define VkglTestCase_004250_1 "dEQP-GLES2.functional.shaders.operator.unary_"
#define VkglTestCase_004250_2 "operator.pre_increment_result.highp_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004250, VkglTestCase_004250_1, VkglTestCase_004250_2);

#define VkglTestCase_004251_1 "dEQP-GLES2.functional.shaders.operator.unary_o"
#define VkglTestCase_004251_2 "perator.pre_increment_result.highp_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004251, VkglTestCase_004251_1, VkglTestCase_004251_2);

#define VkglTestCase_004252_1 "dEQP-GLES2.functional.shaders.operator.unary_o"
#define VkglTestCase_004252_2 "perator.pre_increment_result.lowp_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004252, VkglTestCase_004252_1, VkglTestCase_004252_2);

#define VkglTestCase_004253_1 "dEQP-GLES2.functional.shaders.operator.unary_op"
#define VkglTestCase_004253_2 "erator.pre_increment_result.lowp_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004253, VkglTestCase_004253_1, VkglTestCase_004253_2);

#define VkglTestCase_004254_1 "dEQP-GLES2.functional.shaders.operator.unary_op"
#define VkglTestCase_004254_2 "erator.pre_increment_result.mediump_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004254, VkglTestCase_004254_1, VkglTestCase_004254_2);

#define VkglTestCase_004255_1 "dEQP-GLES2.functional.shaders.operator.unary_ope"
#define VkglTestCase_004255_2 "rator.pre_increment_result.mediump_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004255, VkglTestCase_004255_1, VkglTestCase_004255_2);

#define VkglTestCase_004256_1 "dEQP-GLES2.functional.shaders.operator.unary_o"
#define VkglTestCase_004256_2 "perator.pre_increment_result.highp_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004256, VkglTestCase_004256_1, VkglTestCase_004256_2);

#define VkglTestCase_004257_1 "dEQP-GLES2.functional.shaders.operator.unary_op"
#define VkglTestCase_004257_2 "erator.pre_increment_result.highp_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004257, VkglTestCase_004257_1, VkglTestCase_004257_2);

#define VkglTestCase_004258_1 "dEQP-GLES2.functional.shaders.operator.unary_o"
#define VkglTestCase_004258_2 "perator.pre_increment_result.lowp_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004258, VkglTestCase_004258_1, VkglTestCase_004258_2);

#define VkglTestCase_004259_1 "dEQP-GLES2.functional.shaders.operator.unary_op"
#define VkglTestCase_004259_2 "erator.pre_increment_result.lowp_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004259, VkglTestCase_004259_1, VkglTestCase_004259_2);

#define VkglTestCase_004260_1 "dEQP-GLES2.functional.shaders.operator.unary_op"
#define VkglTestCase_004260_2 "erator.pre_increment_result.mediump_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004260, VkglTestCase_004260_1, VkglTestCase_004260_2);

#define VkglTestCase_004261_1 "dEQP-GLES2.functional.shaders.operator.unary_ope"
#define VkglTestCase_004261_2 "rator.pre_increment_result.mediump_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004261, VkglTestCase_004261_1, VkglTestCase_004261_2);

#define VkglTestCase_004262_1 "dEQP-GLES2.functional.shaders.operator.unary_o"
#define VkglTestCase_004262_2 "perator.pre_increment_result.highp_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004262, VkglTestCase_004262_1, VkglTestCase_004262_2);

#define VkglTestCase_004263_1 "dEQP-GLES2.functional.shaders.operator.unary_op"
#define VkglTestCase_004263_2 "erator.pre_increment_result.highp_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004263, VkglTestCase_004263_1, VkglTestCase_004263_2);

#define VkglTestCase_004264_1 "dEQP-GLES2.functional.shaders.operator.unary_o"
#define VkglTestCase_004264_2 "perator.pre_increment_result.lowp_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004264, VkglTestCase_004264_1, VkglTestCase_004264_2);

#define VkglTestCase_004265_1 "dEQP-GLES2.functional.shaders.operator.unary_op"
#define VkglTestCase_004265_2 "erator.pre_increment_result.lowp_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004265, VkglTestCase_004265_1, VkglTestCase_004265_2);

#define VkglTestCase_004266_1 "dEQP-GLES2.functional.shaders.operator.unary_op"
#define VkglTestCase_004266_2 "erator.pre_increment_result.mediump_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004266, VkglTestCase_004266_1, VkglTestCase_004266_2);

#define VkglTestCase_004267_1 "dEQP-GLES2.functional.shaders.operator.unary_ope"
#define VkglTestCase_004267_2 "rator.pre_increment_result.mediump_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004267, VkglTestCase_004267_1, VkglTestCase_004267_2);

#define VkglTestCase_004268_1 "dEQP-GLES2.functional.shaders.operator.unary_o"
#define VkglTestCase_004268_2 "perator.pre_increment_result.highp_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004268, VkglTestCase_004268_1, VkglTestCase_004268_2);

#define VkglTestCase_004269_1 "dEQP-GLES2.functional.shaders.operator.unary_op"
#define VkglTestCase_004269_2 "erator.pre_increment_result.highp_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004269, VkglTestCase_004269_1, VkglTestCase_004269_2);
