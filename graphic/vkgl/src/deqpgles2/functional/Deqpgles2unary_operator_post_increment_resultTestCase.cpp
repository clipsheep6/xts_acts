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

#define VkglTestCase_004318_1 "dEQP-GLES2.functional.shaders.operator.unary_o"
#define VkglTestCase_004318_2 "perator.post_increment_result.lowp_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004318, VkglTestCase_004318_1, VkglTestCase_004318_2);

#define VkglTestCase_004319_1 "dEQP-GLES2.functional.shaders.operator.unary_op"
#define VkglTestCase_004319_2 "erator.post_increment_result.lowp_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004319, VkglTestCase_004319_1, VkglTestCase_004319_2);

#define VkglTestCase_004320_1 "dEQP-GLES2.functional.shaders.operator.unary_ope"
#define VkglTestCase_004320_2 "rator.post_increment_result.mediump_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004320, VkglTestCase_004320_1, VkglTestCase_004320_2);

#define VkglTestCase_004321_1 "dEQP-GLES2.functional.shaders.operator.unary_oper"
#define VkglTestCase_004321_2 "ator.post_increment_result.mediump_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004321, VkglTestCase_004321_1, VkglTestCase_004321_2);

#define VkglTestCase_004322_1 "dEQP-GLES2.functional.shaders.operator.unary_op"
#define VkglTestCase_004322_2 "erator.post_increment_result.highp_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004322, VkglTestCase_004322_1, VkglTestCase_004322_2);

#define VkglTestCase_004323_1 "dEQP-GLES2.functional.shaders.operator.unary_ope"
#define VkglTestCase_004323_2 "rator.post_increment_result.highp_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004323, VkglTestCase_004323_1, VkglTestCase_004323_2);

#define VkglTestCase_004324_1 "dEQP-GLES2.functional.shaders.operator.unary_o"
#define VkglTestCase_004324_2 "perator.post_increment_result.lowp_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004324, VkglTestCase_004324_1, VkglTestCase_004324_2);

#define VkglTestCase_004325_1 "dEQP-GLES2.functional.shaders.operator.unary_op"
#define VkglTestCase_004325_2 "erator.post_increment_result.lowp_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004325, VkglTestCase_004325_1, VkglTestCase_004325_2);

#define VkglTestCase_004326_1 "dEQP-GLES2.functional.shaders.operator.unary_op"
#define VkglTestCase_004326_2 "erator.post_increment_result.mediump_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004326, VkglTestCase_004326_1, VkglTestCase_004326_2);

#define VkglTestCase_004327_1 "dEQP-GLES2.functional.shaders.operator.unary_ope"
#define VkglTestCase_004327_2 "rator.post_increment_result.mediump_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004327, VkglTestCase_004327_1, VkglTestCase_004327_2);

#define VkglTestCase_004328_1 "dEQP-GLES2.functional.shaders.operator.unary_o"
#define VkglTestCase_004328_2 "perator.post_increment_result.highp_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004328, VkglTestCase_004328_1, VkglTestCase_004328_2);

#define VkglTestCase_004329_1 "dEQP-GLES2.functional.shaders.operator.unary_op"
#define VkglTestCase_004329_2 "erator.post_increment_result.highp_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004329, VkglTestCase_004329_1, VkglTestCase_004329_2);

#define VkglTestCase_004330_1 "dEQP-GLES2.functional.shaders.operator.unary_o"
#define VkglTestCase_004330_2 "perator.post_increment_result.lowp_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004330, VkglTestCase_004330_1, VkglTestCase_004330_2);

#define VkglTestCase_004331_1 "dEQP-GLES2.functional.shaders.operator.unary_op"
#define VkglTestCase_004331_2 "erator.post_increment_result.lowp_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004331, VkglTestCase_004331_1, VkglTestCase_004331_2);

#define VkglTestCase_004332_1 "dEQP-GLES2.functional.shaders.operator.unary_op"
#define VkglTestCase_004332_2 "erator.post_increment_result.mediump_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004332, VkglTestCase_004332_1, VkglTestCase_004332_2);

#define VkglTestCase_004333_1 "dEQP-GLES2.functional.shaders.operator.unary_ope"
#define VkglTestCase_004333_2 "rator.post_increment_result.mediump_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004333, VkglTestCase_004333_1, VkglTestCase_004333_2);

#define VkglTestCase_004334_1 "dEQP-GLES2.functional.shaders.operator.unary_o"
#define VkglTestCase_004334_2 "perator.post_increment_result.highp_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004334, VkglTestCase_004334_1, VkglTestCase_004334_2);

#define VkglTestCase_004335_1 "dEQP-GLES2.functional.shaders.operator.unary_op"
#define VkglTestCase_004335_2 "erator.post_increment_result.highp_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004335, VkglTestCase_004335_1, VkglTestCase_004335_2);

#define VkglTestCase_004336_1 "dEQP-GLES2.functional.shaders.operator.unary_o"
#define VkglTestCase_004336_2 "perator.post_increment_result.lowp_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004336, VkglTestCase_004336_1, VkglTestCase_004336_2);

#define VkglTestCase_004337_1 "dEQP-GLES2.functional.shaders.operator.unary_op"
#define VkglTestCase_004337_2 "erator.post_increment_result.lowp_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004337, VkglTestCase_004337_1, VkglTestCase_004337_2);

#define VkglTestCase_004338_1 "dEQP-GLES2.functional.shaders.operator.unary_op"
#define VkglTestCase_004338_2 "erator.post_increment_result.mediump_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004338, VkglTestCase_004338_1, VkglTestCase_004338_2);

#define VkglTestCase_004339_1 "dEQP-GLES2.functional.shaders.operator.unary_ope"
#define VkglTestCase_004339_2 "rator.post_increment_result.mediump_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004339, VkglTestCase_004339_1, VkglTestCase_004339_2);

#define VkglTestCase_004340_1 "dEQP-GLES2.functional.shaders.operator.unary_o"
#define VkglTestCase_004340_2 "perator.post_increment_result.highp_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004340, VkglTestCase_004340_1, VkglTestCase_004340_2);

#define VkglTestCase_004341_1 "dEQP-GLES2.functional.shaders.operator.unary_op"
#define VkglTestCase_004341_2 "erator.post_increment_result.highp_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004341, VkglTestCase_004341_1, VkglTestCase_004341_2);

#define VkglTestCase_004342_1 "dEQP-GLES2.functional.shaders.operator.unary_"
#define VkglTestCase_004342_2 "operator.post_increment_result.lowp_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004342, VkglTestCase_004342_1, VkglTestCase_004342_2);

#define VkglTestCase_004343_1 "dEQP-GLES2.functional.shaders.operator.unary_o"
#define VkglTestCase_004343_2 "perator.post_increment_result.lowp_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004343, VkglTestCase_004343_1, VkglTestCase_004343_2);

#define VkglTestCase_004344_1 "dEQP-GLES2.functional.shaders.operator.unary_op"
#define VkglTestCase_004344_2 "erator.post_increment_result.mediump_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004344, VkglTestCase_004344_1, VkglTestCase_004344_2);

#define VkglTestCase_004345_1 "dEQP-GLES2.functional.shaders.operator.unary_ope"
#define VkglTestCase_004345_2 "rator.post_increment_result.mediump_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004345, VkglTestCase_004345_1, VkglTestCase_004345_2);

#define VkglTestCase_004346_1 "dEQP-GLES2.functional.shaders.operator.unary_o"
#define VkglTestCase_004346_2 "perator.post_increment_result.highp_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004346, VkglTestCase_004346_1, VkglTestCase_004346_2);

#define VkglTestCase_004347_1 "dEQP-GLES2.functional.shaders.operator.unary_op"
#define VkglTestCase_004347_2 "erator.post_increment_result.highp_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004347, VkglTestCase_004347_1, VkglTestCase_004347_2);

#define VkglTestCase_004348_1 "dEQP-GLES2.functional.shaders.operator.unary_o"
#define VkglTestCase_004348_2 "perator.post_increment_result.lowp_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004348, VkglTestCase_004348_1, VkglTestCase_004348_2);

#define VkglTestCase_004349_1 "dEQP-GLES2.functional.shaders.operator.unary_op"
#define VkglTestCase_004349_2 "erator.post_increment_result.lowp_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004349, VkglTestCase_004349_1, VkglTestCase_004349_2);

#define VkglTestCase_004350_1 "dEQP-GLES2.functional.shaders.operator.unary_ope"
#define VkglTestCase_004350_2 "rator.post_increment_result.mediump_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004350, VkglTestCase_004350_1, VkglTestCase_004350_2);

#define VkglTestCase_004351_1 "dEQP-GLES2.functional.shaders.operator.unary_oper"
#define VkglTestCase_004351_2 "ator.post_increment_result.mediump_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004351, VkglTestCase_004351_1, VkglTestCase_004351_2);

#define VkglTestCase_004352_1 "dEQP-GLES2.functional.shaders.operator.unary_op"
#define VkglTestCase_004352_2 "erator.post_increment_result.highp_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004352, VkglTestCase_004352_1, VkglTestCase_004352_2);

#define VkglTestCase_004353_1 "dEQP-GLES2.functional.shaders.operator.unary_ope"
#define VkglTestCase_004353_2 "rator.post_increment_result.highp_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004353, VkglTestCase_004353_1, VkglTestCase_004353_2);

#define VkglTestCase_004354_1 "dEQP-GLES2.functional.shaders.operator.unary_o"
#define VkglTestCase_004354_2 "perator.post_increment_result.lowp_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004354, VkglTestCase_004354_1, VkglTestCase_004354_2);

#define VkglTestCase_004355_1 "dEQP-GLES2.functional.shaders.operator.unary_op"
#define VkglTestCase_004355_2 "erator.post_increment_result.lowp_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004355, VkglTestCase_004355_1, VkglTestCase_004355_2);

#define VkglTestCase_004356_1 "dEQP-GLES2.functional.shaders.operator.unary_ope"
#define VkglTestCase_004356_2 "rator.post_increment_result.mediump_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004356, VkglTestCase_004356_1, VkglTestCase_004356_2);

#define VkglTestCase_004357_1 "dEQP-GLES2.functional.shaders.operator.unary_oper"
#define VkglTestCase_004357_2 "ator.post_increment_result.mediump_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004357, VkglTestCase_004357_1, VkglTestCase_004357_2);

#define VkglTestCase_004358_1 "dEQP-GLES2.functional.shaders.operator.unary_op"
#define VkglTestCase_004358_2 "erator.post_increment_result.highp_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004358, VkglTestCase_004358_1, VkglTestCase_004358_2);

#define VkglTestCase_004359_1 "dEQP-GLES2.functional.shaders.operator.unary_ope"
#define VkglTestCase_004359_2 "rator.post_increment_result.highp_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004359, VkglTestCase_004359_1, VkglTestCase_004359_2);

#define VkglTestCase_004360_1 "dEQP-GLES2.functional.shaders.operator.unary_o"
#define VkglTestCase_004360_2 "perator.post_increment_result.lowp_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004360, VkglTestCase_004360_1, VkglTestCase_004360_2);

#define VkglTestCase_004361_1 "dEQP-GLES2.functional.shaders.operator.unary_op"
#define VkglTestCase_004361_2 "erator.post_increment_result.lowp_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004361, VkglTestCase_004361_1, VkglTestCase_004361_2);

#define VkglTestCase_004362_1 "dEQP-GLES2.functional.shaders.operator.unary_ope"
#define VkglTestCase_004362_2 "rator.post_increment_result.mediump_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004362, VkglTestCase_004362_1, VkglTestCase_004362_2);

#define VkglTestCase_004363_1 "dEQP-GLES2.functional.shaders.operator.unary_oper"
#define VkglTestCase_004363_2 "ator.post_increment_result.mediump_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004363, VkglTestCase_004363_1, VkglTestCase_004363_2);

#define VkglTestCase_004364_1 "dEQP-GLES2.functional.shaders.operator.unary_op"
#define VkglTestCase_004364_2 "erator.post_increment_result.highp_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004364, VkglTestCase_004364_1, VkglTestCase_004364_2);

#define VkglTestCase_004365_1 "dEQP-GLES2.functional.shaders.operator.unary_ope"
#define VkglTestCase_004365_2 "rator.post_increment_result.highp_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004365, VkglTestCase_004365_1, VkglTestCase_004365_2);
