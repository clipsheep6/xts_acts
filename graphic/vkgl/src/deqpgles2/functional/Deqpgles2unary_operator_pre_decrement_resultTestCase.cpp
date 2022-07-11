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

#define VkglTestCase_004270_1 "dEQP-GLES2.functional.shaders.operator.unary_o"
#define VkglTestCase_004270_2 "perator.pre_decrement_result.lowp_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004270, VkglTestCase_004270_1, VkglTestCase_004270_2);

#define VkglTestCase_004271_1 "dEQP-GLES2.functional.shaders.operator.unary_op"
#define VkglTestCase_004271_2 "erator.pre_decrement_result.lowp_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004271, VkglTestCase_004271_1, VkglTestCase_004271_2);

#define VkglTestCase_004272_1 "dEQP-GLES2.functional.shaders.operator.unary_op"
#define VkglTestCase_004272_2 "erator.pre_decrement_result.mediump_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004272, VkglTestCase_004272_1, VkglTestCase_004272_2);

#define VkglTestCase_004273_1 "dEQP-GLES2.functional.shaders.operator.unary_ope"
#define VkglTestCase_004273_2 "rator.pre_decrement_result.mediump_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004273, VkglTestCase_004273_1, VkglTestCase_004273_2);

#define VkglTestCase_004274_1 "dEQP-GLES2.functional.shaders.operator.unary_o"
#define VkglTestCase_004274_2 "perator.pre_decrement_result.highp_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004274, VkglTestCase_004274_1, VkglTestCase_004274_2);

#define VkglTestCase_004275_1 "dEQP-GLES2.functional.shaders.operator.unary_op"
#define VkglTestCase_004275_2 "erator.pre_decrement_result.highp_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004275, VkglTestCase_004275_1, VkglTestCase_004275_2);

#define VkglTestCase_004276_1 "dEQP-GLES2.functional.shaders.operator.unary_"
#define VkglTestCase_004276_2 "operator.pre_decrement_result.lowp_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004276, VkglTestCase_004276_1, VkglTestCase_004276_2);

#define VkglTestCase_004277_1 "dEQP-GLES2.functional.shaders.operator.unary_o"
#define VkglTestCase_004277_2 "perator.pre_decrement_result.lowp_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004277, VkglTestCase_004277_1, VkglTestCase_004277_2);

#define VkglTestCase_004278_1 "dEQP-GLES2.functional.shaders.operator.unary_op"
#define VkglTestCase_004278_2 "erator.pre_decrement_result.mediump_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004278, VkglTestCase_004278_1, VkglTestCase_004278_2);

#define VkglTestCase_004279_1 "dEQP-GLES2.functional.shaders.operator.unary_ope"
#define VkglTestCase_004279_2 "rator.pre_decrement_result.mediump_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004279, VkglTestCase_004279_1, VkglTestCase_004279_2);

#define VkglTestCase_004280_1 "dEQP-GLES2.functional.shaders.operator.unary_o"
#define VkglTestCase_004280_2 "perator.pre_decrement_result.highp_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004280, VkglTestCase_004280_1, VkglTestCase_004280_2);

#define VkglTestCase_004281_1 "dEQP-GLES2.functional.shaders.operator.unary_op"
#define VkglTestCase_004281_2 "erator.pre_decrement_result.highp_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004281, VkglTestCase_004281_1, VkglTestCase_004281_2);

#define VkglTestCase_004282_1 "dEQP-GLES2.functional.shaders.operator.unary_"
#define VkglTestCase_004282_2 "operator.pre_decrement_result.lowp_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004282, VkglTestCase_004282_1, VkglTestCase_004282_2);

#define VkglTestCase_004283_1 "dEQP-GLES2.functional.shaders.operator.unary_o"
#define VkglTestCase_004283_2 "perator.pre_decrement_result.lowp_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004283, VkglTestCase_004283_1, VkglTestCase_004283_2);

#define VkglTestCase_004284_1 "dEQP-GLES2.functional.shaders.operator.unary_op"
#define VkglTestCase_004284_2 "erator.pre_decrement_result.mediump_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004284, VkglTestCase_004284_1, VkglTestCase_004284_2);

#define VkglTestCase_004285_1 "dEQP-GLES2.functional.shaders.operator.unary_ope"
#define VkglTestCase_004285_2 "rator.pre_decrement_result.mediump_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004285, VkglTestCase_004285_1, VkglTestCase_004285_2);

#define VkglTestCase_004286_1 "dEQP-GLES2.functional.shaders.operator.unary_o"
#define VkglTestCase_004286_2 "perator.pre_decrement_result.highp_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004286, VkglTestCase_004286_1, VkglTestCase_004286_2);

#define VkglTestCase_004287_1 "dEQP-GLES2.functional.shaders.operator.unary_op"
#define VkglTestCase_004287_2 "erator.pre_decrement_result.highp_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004287, VkglTestCase_004287_1, VkglTestCase_004287_2);

#define VkglTestCase_004288_1 "dEQP-GLES2.functional.shaders.operator.unary_"
#define VkglTestCase_004288_2 "operator.pre_decrement_result.lowp_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004288, VkglTestCase_004288_1, VkglTestCase_004288_2);

#define VkglTestCase_004289_1 "dEQP-GLES2.functional.shaders.operator.unary_o"
#define VkglTestCase_004289_2 "perator.pre_decrement_result.lowp_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004289, VkglTestCase_004289_1, VkglTestCase_004289_2);

#define VkglTestCase_004290_1 "dEQP-GLES2.functional.shaders.operator.unary_op"
#define VkglTestCase_004290_2 "erator.pre_decrement_result.mediump_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004290, VkglTestCase_004290_1, VkglTestCase_004290_2);

#define VkglTestCase_004291_1 "dEQP-GLES2.functional.shaders.operator.unary_ope"
#define VkglTestCase_004291_2 "rator.pre_decrement_result.mediump_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004291, VkglTestCase_004291_1, VkglTestCase_004291_2);

#define VkglTestCase_004292_1 "dEQP-GLES2.functional.shaders.operator.unary_o"
#define VkglTestCase_004292_2 "perator.pre_decrement_result.highp_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004292, VkglTestCase_004292_1, VkglTestCase_004292_2);

#define VkglTestCase_004293_1 "dEQP-GLES2.functional.shaders.operator.unary_op"
#define VkglTestCase_004293_2 "erator.pre_decrement_result.highp_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004293, VkglTestCase_004293_1, VkglTestCase_004293_2);

#define VkglTestCase_004294_1 "dEQP-GLES2.functional.shaders.operator.unary_"
#define VkglTestCase_004294_2 "operator.pre_decrement_result.lowp_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004294, VkglTestCase_004294_1, VkglTestCase_004294_2);

#define VkglTestCase_004295_1 "dEQP-GLES2.functional.shaders.operator.unary_o"
#define VkglTestCase_004295_2 "perator.pre_decrement_result.lowp_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004295, VkglTestCase_004295_1, VkglTestCase_004295_2);

#define VkglTestCase_004296_1 "dEQP-GLES2.functional.shaders.operator.unary_o"
#define VkglTestCase_004296_2 "perator.pre_decrement_result.mediump_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004296, VkglTestCase_004296_1, VkglTestCase_004296_2);

#define VkglTestCase_004297_1 "dEQP-GLES2.functional.shaders.operator.unary_op"
#define VkglTestCase_004297_2 "erator.pre_decrement_result.mediump_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004297, VkglTestCase_004297_1, VkglTestCase_004297_2);

#define VkglTestCase_004298_1 "dEQP-GLES2.functional.shaders.operator.unary_"
#define VkglTestCase_004298_2 "operator.pre_decrement_result.highp_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004298, VkglTestCase_004298_1, VkglTestCase_004298_2);

#define VkglTestCase_004299_1 "dEQP-GLES2.functional.shaders.operator.unary_o"
#define VkglTestCase_004299_2 "perator.pre_decrement_result.highp_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004299, VkglTestCase_004299_1, VkglTestCase_004299_2);

#define VkglTestCase_004300_1 "dEQP-GLES2.functional.shaders.operator.unary_o"
#define VkglTestCase_004300_2 "perator.pre_decrement_result.lowp_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004300, VkglTestCase_004300_1, VkglTestCase_004300_2);

#define VkglTestCase_004301_1 "dEQP-GLES2.functional.shaders.operator.unary_op"
#define VkglTestCase_004301_2 "erator.pre_decrement_result.lowp_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004301, VkglTestCase_004301_1, VkglTestCase_004301_2);

#define VkglTestCase_004302_1 "dEQP-GLES2.functional.shaders.operator.unary_op"
#define VkglTestCase_004302_2 "erator.pre_decrement_result.mediump_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004302, VkglTestCase_004302_1, VkglTestCase_004302_2);

#define VkglTestCase_004303_1 "dEQP-GLES2.functional.shaders.operator.unary_ope"
#define VkglTestCase_004303_2 "rator.pre_decrement_result.mediump_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004303, VkglTestCase_004303_1, VkglTestCase_004303_2);

#define VkglTestCase_004304_1 "dEQP-GLES2.functional.shaders.operator.unary_o"
#define VkglTestCase_004304_2 "perator.pre_decrement_result.highp_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004304, VkglTestCase_004304_1, VkglTestCase_004304_2);

#define VkglTestCase_004305_1 "dEQP-GLES2.functional.shaders.operator.unary_op"
#define VkglTestCase_004305_2 "erator.pre_decrement_result.highp_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004305, VkglTestCase_004305_1, VkglTestCase_004305_2);

#define VkglTestCase_004306_1 "dEQP-GLES2.functional.shaders.operator.unary_o"
#define VkglTestCase_004306_2 "perator.pre_decrement_result.lowp_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004306, VkglTestCase_004306_1, VkglTestCase_004306_2);

#define VkglTestCase_004307_1 "dEQP-GLES2.functional.shaders.operator.unary_op"
#define VkglTestCase_004307_2 "erator.pre_decrement_result.lowp_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004307, VkglTestCase_004307_1, VkglTestCase_004307_2);

#define VkglTestCase_004308_1 "dEQP-GLES2.functional.shaders.operator.unary_op"
#define VkglTestCase_004308_2 "erator.pre_decrement_result.mediump_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004308, VkglTestCase_004308_1, VkglTestCase_004308_2);

#define VkglTestCase_004309_1 "dEQP-GLES2.functional.shaders.operator.unary_ope"
#define VkglTestCase_004309_2 "rator.pre_decrement_result.mediump_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004309, VkglTestCase_004309_1, VkglTestCase_004309_2);

#define VkglTestCase_004310_1 "dEQP-GLES2.functional.shaders.operator.unary_o"
#define VkglTestCase_004310_2 "perator.pre_decrement_result.highp_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004310, VkglTestCase_004310_1, VkglTestCase_004310_2);

#define VkglTestCase_004311_1 "dEQP-GLES2.functional.shaders.operator.unary_op"
#define VkglTestCase_004311_2 "erator.pre_decrement_result.highp_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004311, VkglTestCase_004311_1, VkglTestCase_004311_2);

#define VkglTestCase_004312_1 "dEQP-GLES2.functional.shaders.operator.unary_o"
#define VkglTestCase_004312_2 "perator.pre_decrement_result.lowp_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004312, VkglTestCase_004312_1, VkglTestCase_004312_2);

#define VkglTestCase_004313_1 "dEQP-GLES2.functional.shaders.operator.unary_op"
#define VkglTestCase_004313_2 "erator.pre_decrement_result.lowp_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004313, VkglTestCase_004313_1, VkglTestCase_004313_2);

#define VkglTestCase_004314_1 "dEQP-GLES2.functional.shaders.operator.unary_op"
#define VkglTestCase_004314_2 "erator.pre_decrement_result.mediump_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004314, VkglTestCase_004314_1, VkglTestCase_004314_2);

#define VkglTestCase_004315_1 "dEQP-GLES2.functional.shaders.operator.unary_ope"
#define VkglTestCase_004315_2 "rator.pre_decrement_result.mediump_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004315, VkglTestCase_004315_1, VkglTestCase_004315_2);

#define VkglTestCase_004316_1 "dEQP-GLES2.functional.shaders.operator.unary_o"
#define VkglTestCase_004316_2 "perator.pre_decrement_result.highp_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004316, VkglTestCase_004316_1, VkglTestCase_004316_2);

#define VkglTestCase_004317_1 "dEQP-GLES2.functional.shaders.operator.unary_op"
#define VkglTestCase_004317_2 "erator.pre_decrement_result.highp_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004317, VkglTestCase_004317_1, VkglTestCase_004317_2);
