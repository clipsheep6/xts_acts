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

#define VkglTestCase_004366_1 "dEQP-GLES2.functional.shaders.operator.unary_o"
#define VkglTestCase_004366_2 "perator.post_decrement_result.lowp_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004366, VkglTestCase_004366_1, VkglTestCase_004366_2);

#define VkglTestCase_004367_1 "dEQP-GLES2.functional.shaders.operator.unary_op"
#define VkglTestCase_004367_2 "erator.post_decrement_result.lowp_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004367, VkglTestCase_004367_1, VkglTestCase_004367_2);

#define VkglTestCase_004368_1 "dEQP-GLES2.functional.shaders.operator.unary_ope"
#define VkglTestCase_004368_2 "rator.post_decrement_result.mediump_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004368, VkglTestCase_004368_1, VkglTestCase_004368_2);

#define VkglTestCase_004369_1 "dEQP-GLES2.functional.shaders.operator.unary_oper"
#define VkglTestCase_004369_2 "ator.post_decrement_result.mediump_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004369, VkglTestCase_004369_1, VkglTestCase_004369_2);

#define VkglTestCase_004370_1 "dEQP-GLES2.functional.shaders.operator.unary_op"
#define VkglTestCase_004370_2 "erator.post_decrement_result.highp_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004370, VkglTestCase_004370_1, VkglTestCase_004370_2);

#define VkglTestCase_004371_1 "dEQP-GLES2.functional.shaders.operator.unary_ope"
#define VkglTestCase_004371_2 "rator.post_decrement_result.highp_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004371, VkglTestCase_004371_1, VkglTestCase_004371_2);

#define VkglTestCase_004372_1 "dEQP-GLES2.functional.shaders.operator.unary_o"
#define VkglTestCase_004372_2 "perator.post_decrement_result.lowp_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004372, VkglTestCase_004372_1, VkglTestCase_004372_2);

#define VkglTestCase_004373_1 "dEQP-GLES2.functional.shaders.operator.unary_op"
#define VkglTestCase_004373_2 "erator.post_decrement_result.lowp_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004373, VkglTestCase_004373_1, VkglTestCase_004373_2);

#define VkglTestCase_004374_1 "dEQP-GLES2.functional.shaders.operator.unary_op"
#define VkglTestCase_004374_2 "erator.post_decrement_result.mediump_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004374, VkglTestCase_004374_1, VkglTestCase_004374_2);

#define VkglTestCase_004375_1 "dEQP-GLES2.functional.shaders.operator.unary_ope"
#define VkglTestCase_004375_2 "rator.post_decrement_result.mediump_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004375, VkglTestCase_004375_1, VkglTestCase_004375_2);

#define VkglTestCase_004376_1 "dEQP-GLES2.functional.shaders.operator.unary_o"
#define VkglTestCase_004376_2 "perator.post_decrement_result.highp_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004376, VkglTestCase_004376_1, VkglTestCase_004376_2);

#define VkglTestCase_004377_1 "dEQP-GLES2.functional.shaders.operator.unary_op"
#define VkglTestCase_004377_2 "erator.post_decrement_result.highp_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004377, VkglTestCase_004377_1, VkglTestCase_004377_2);

#define VkglTestCase_004378_1 "dEQP-GLES2.functional.shaders.operator.unary_o"
#define VkglTestCase_004378_2 "perator.post_decrement_result.lowp_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004378, VkglTestCase_004378_1, VkglTestCase_004378_2);

#define VkglTestCase_004379_1 "dEQP-GLES2.functional.shaders.operator.unary_op"
#define VkglTestCase_004379_2 "erator.post_decrement_result.lowp_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004379, VkglTestCase_004379_1, VkglTestCase_004379_2);

#define VkglTestCase_004380_1 "dEQP-GLES2.functional.shaders.operator.unary_op"
#define VkglTestCase_004380_2 "erator.post_decrement_result.mediump_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004380, VkglTestCase_004380_1, VkglTestCase_004380_2);

#define VkglTestCase_004381_1 "dEQP-GLES2.functional.shaders.operator.unary_ope"
#define VkglTestCase_004381_2 "rator.post_decrement_result.mediump_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004381, VkglTestCase_004381_1, VkglTestCase_004381_2);

#define VkglTestCase_004382_1 "dEQP-GLES2.functional.shaders.operator.unary_o"
#define VkglTestCase_004382_2 "perator.post_decrement_result.highp_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004382, VkglTestCase_004382_1, VkglTestCase_004382_2);

#define VkglTestCase_004383_1 "dEQP-GLES2.functional.shaders.operator.unary_op"
#define VkglTestCase_004383_2 "erator.post_decrement_result.highp_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004383, VkglTestCase_004383_1, VkglTestCase_004383_2);

#define VkglTestCase_004384_1 "dEQP-GLES2.functional.shaders.operator.unary_o"
#define VkglTestCase_004384_2 "perator.post_decrement_result.lowp_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004384, VkglTestCase_004384_1, VkglTestCase_004384_2);

#define VkglTestCase_004385_1 "dEQP-GLES2.functional.shaders.operator.unary_op"
#define VkglTestCase_004385_2 "erator.post_decrement_result.lowp_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004385, VkglTestCase_004385_1, VkglTestCase_004385_2);

#define VkglTestCase_004386_1 "dEQP-GLES2.functional.shaders.operator.unary_op"
#define VkglTestCase_004386_2 "erator.post_decrement_result.mediump_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004386, VkglTestCase_004386_1, VkglTestCase_004386_2);

#define VkglTestCase_004387_1 "dEQP-GLES2.functional.shaders.operator.unary_ope"
#define VkglTestCase_004387_2 "rator.post_decrement_result.mediump_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004387, VkglTestCase_004387_1, VkglTestCase_004387_2);

#define VkglTestCase_004388_1 "dEQP-GLES2.functional.shaders.operator.unary_o"
#define VkglTestCase_004388_2 "perator.post_decrement_result.highp_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004388, VkglTestCase_004388_1, VkglTestCase_004388_2);

#define VkglTestCase_004389_1 "dEQP-GLES2.functional.shaders.operator.unary_op"
#define VkglTestCase_004389_2 "erator.post_decrement_result.highp_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004389, VkglTestCase_004389_1, VkglTestCase_004389_2);

#define VkglTestCase_004390_1 "dEQP-GLES2.functional.shaders.operator.unary_"
#define VkglTestCase_004390_2 "operator.post_decrement_result.lowp_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004390, VkglTestCase_004390_1, VkglTestCase_004390_2);

#define VkglTestCase_004391_1 "dEQP-GLES2.functional.shaders.operator.unary_o"
#define VkglTestCase_004391_2 "perator.post_decrement_result.lowp_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004391, VkglTestCase_004391_1, VkglTestCase_004391_2);

#define VkglTestCase_004392_1 "dEQP-GLES2.functional.shaders.operator.unary_op"
#define VkglTestCase_004392_2 "erator.post_decrement_result.mediump_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004392, VkglTestCase_004392_1, VkglTestCase_004392_2);

#define VkglTestCase_004393_1 "dEQP-GLES2.functional.shaders.operator.unary_ope"
#define VkglTestCase_004393_2 "rator.post_decrement_result.mediump_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004393, VkglTestCase_004393_1, VkglTestCase_004393_2);

#define VkglTestCase_004394_1 "dEQP-GLES2.functional.shaders.operator.unary_o"
#define VkglTestCase_004394_2 "perator.post_decrement_result.highp_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004394, VkglTestCase_004394_1, VkglTestCase_004394_2);

#define VkglTestCase_004395_1 "dEQP-GLES2.functional.shaders.operator.unary_op"
#define VkglTestCase_004395_2 "erator.post_decrement_result.highp_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004395, VkglTestCase_004395_1, VkglTestCase_004395_2);

#define VkglTestCase_004396_1 "dEQP-GLES2.functional.shaders.operator.unary_o"
#define VkglTestCase_004396_2 "perator.post_decrement_result.lowp_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004396, VkglTestCase_004396_1, VkglTestCase_004396_2);

#define VkglTestCase_004397_1 "dEQP-GLES2.functional.shaders.operator.unary_op"
#define VkglTestCase_004397_2 "erator.post_decrement_result.lowp_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004397, VkglTestCase_004397_1, VkglTestCase_004397_2);

#define VkglTestCase_004398_1 "dEQP-GLES2.functional.shaders.operator.unary_ope"
#define VkglTestCase_004398_2 "rator.post_decrement_result.mediump_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004398, VkglTestCase_004398_1, VkglTestCase_004398_2);

#define VkglTestCase_004399_1 "dEQP-GLES2.functional.shaders.operator.unary_oper"
#define VkglTestCase_004399_2 "ator.post_decrement_result.mediump_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004399, VkglTestCase_004399_1, VkglTestCase_004399_2);

#define VkglTestCase_004400_1 "dEQP-GLES2.functional.shaders.operator.unary_op"
#define VkglTestCase_004400_2 "erator.post_decrement_result.highp_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004400, VkglTestCase_004400_1, VkglTestCase_004400_2);

#define VkglTestCase_004401_1 "dEQP-GLES2.functional.shaders.operator.unary_ope"
#define VkglTestCase_004401_2 "rator.post_decrement_result.highp_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004401, VkglTestCase_004401_1, VkglTestCase_004401_2);

#define VkglTestCase_004402_1 "dEQP-GLES2.functional.shaders.operator.unary_o"
#define VkglTestCase_004402_2 "perator.post_decrement_result.lowp_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004402, VkglTestCase_004402_1, VkglTestCase_004402_2);

#define VkglTestCase_004403_1 "dEQP-GLES2.functional.shaders.operator.unary_op"
#define VkglTestCase_004403_2 "erator.post_decrement_result.lowp_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004403, VkglTestCase_004403_1, VkglTestCase_004403_2);

#define VkglTestCase_004404_1 "dEQP-GLES2.functional.shaders.operator.unary_ope"
#define VkglTestCase_004404_2 "rator.post_decrement_result.mediump_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004404, VkglTestCase_004404_1, VkglTestCase_004404_2);

#define VkglTestCase_004405_1 "dEQP-GLES2.functional.shaders.operator.unary_oper"
#define VkglTestCase_004405_2 "ator.post_decrement_result.mediump_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004405, VkglTestCase_004405_1, VkglTestCase_004405_2);

#define VkglTestCase_004406_1 "dEQP-GLES2.functional.shaders.operator.unary_op"
#define VkglTestCase_004406_2 "erator.post_decrement_result.highp_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004406, VkglTestCase_004406_1, VkglTestCase_004406_2);

#define VkglTestCase_004407_1 "dEQP-GLES2.functional.shaders.operator.unary_ope"
#define VkglTestCase_004407_2 "rator.post_decrement_result.highp_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004407, VkglTestCase_004407_1, VkglTestCase_004407_2);

#define VkglTestCase_004408_1 "dEQP-GLES2.functional.shaders.operator.unary_o"
#define VkglTestCase_004408_2 "perator.post_decrement_result.lowp_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004408, VkglTestCase_004408_1, VkglTestCase_004408_2);

#define VkglTestCase_004409_1 "dEQP-GLES2.functional.shaders.operator.unary_op"
#define VkglTestCase_004409_2 "erator.post_decrement_result.lowp_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004409, VkglTestCase_004409_1, VkglTestCase_004409_2);

#define VkglTestCase_004410_1 "dEQP-GLES2.functional.shaders.operator.unary_ope"
#define VkglTestCase_004410_2 "rator.post_decrement_result.mediump_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004410, VkglTestCase_004410_1, VkglTestCase_004410_2);

#define VkglTestCase_004411_1 "dEQP-GLES2.functional.shaders.operator.unary_oper"
#define VkglTestCase_004411_2 "ator.post_decrement_result.mediump_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004411, VkglTestCase_004411_1, VkglTestCase_004411_2);

#define VkglTestCase_004412_1 "dEQP-GLES2.functional.shaders.operator.unary_op"
#define VkglTestCase_004412_2 "erator.post_decrement_result.highp_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004412, VkglTestCase_004412_1, VkglTestCase_004412_2);

#define VkglTestCase_004413_1 "dEQP-GLES2.functional.shaders.operator.unary_ope"
#define VkglTestCase_004413_2 "rator.post_decrement_result.highp_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004413, VkglTestCase_004413_1, VkglTestCase_004413_2);
