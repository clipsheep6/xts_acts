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

#define VkglTestCase_004174_1 "dEQP-GLES2.functional.shaders.operator.unary_o"
#define VkglTestCase_004174_2 "perator.post_decrement_effect.lowp_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004174, VkglTestCase_004174_1, VkglTestCase_004174_2);

#define VkglTestCase_004175_1 "dEQP-GLES2.functional.shaders.operator.unary_op"
#define VkglTestCase_004175_2 "erator.post_decrement_effect.lowp_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004175, VkglTestCase_004175_1, VkglTestCase_004175_2);

#define VkglTestCase_004176_1 "dEQP-GLES2.functional.shaders.operator.unary_ope"
#define VkglTestCase_004176_2 "rator.post_decrement_effect.mediump_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004176, VkglTestCase_004176_1, VkglTestCase_004176_2);

#define VkglTestCase_004177_1 "dEQP-GLES2.functional.shaders.operator.unary_oper"
#define VkglTestCase_004177_2 "ator.post_decrement_effect.mediump_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004177, VkglTestCase_004177_1, VkglTestCase_004177_2);

#define VkglTestCase_004178_1 "dEQP-GLES2.functional.shaders.operator.unary_op"
#define VkglTestCase_004178_2 "erator.post_decrement_effect.highp_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004178, VkglTestCase_004178_1, VkglTestCase_004178_2);

#define VkglTestCase_004179_1 "dEQP-GLES2.functional.shaders.operator.unary_ope"
#define VkglTestCase_004179_2 "rator.post_decrement_effect.highp_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004179, VkglTestCase_004179_1, VkglTestCase_004179_2);

#define VkglTestCase_004180_1 "dEQP-GLES2.functional.shaders.operator.unary_o"
#define VkglTestCase_004180_2 "perator.post_decrement_effect.lowp_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004180, VkglTestCase_004180_1, VkglTestCase_004180_2);

#define VkglTestCase_004181_1 "dEQP-GLES2.functional.shaders.operator.unary_op"
#define VkglTestCase_004181_2 "erator.post_decrement_effect.lowp_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004181, VkglTestCase_004181_1, VkglTestCase_004181_2);

#define VkglTestCase_004182_1 "dEQP-GLES2.functional.shaders.operator.unary_op"
#define VkglTestCase_004182_2 "erator.post_decrement_effect.mediump_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004182, VkglTestCase_004182_1, VkglTestCase_004182_2);

#define VkglTestCase_004183_1 "dEQP-GLES2.functional.shaders.operator.unary_ope"
#define VkglTestCase_004183_2 "rator.post_decrement_effect.mediump_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004183, VkglTestCase_004183_1, VkglTestCase_004183_2);

#define VkglTestCase_004184_1 "dEQP-GLES2.functional.shaders.operator.unary_o"
#define VkglTestCase_004184_2 "perator.post_decrement_effect.highp_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004184, VkglTestCase_004184_1, VkglTestCase_004184_2);

#define VkglTestCase_004185_1 "dEQP-GLES2.functional.shaders.operator.unary_op"
#define VkglTestCase_004185_2 "erator.post_decrement_effect.highp_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004185, VkglTestCase_004185_1, VkglTestCase_004185_2);

#define VkglTestCase_004186_1 "dEQP-GLES2.functional.shaders.operator.unary_o"
#define VkglTestCase_004186_2 "perator.post_decrement_effect.lowp_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004186, VkglTestCase_004186_1, VkglTestCase_004186_2);

#define VkglTestCase_004187_1 "dEQP-GLES2.functional.shaders.operator.unary_op"
#define VkglTestCase_004187_2 "erator.post_decrement_effect.lowp_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004187, VkglTestCase_004187_1, VkglTestCase_004187_2);

#define VkglTestCase_004188_1 "dEQP-GLES2.functional.shaders.operator.unary_op"
#define VkglTestCase_004188_2 "erator.post_decrement_effect.mediump_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004188, VkglTestCase_004188_1, VkglTestCase_004188_2);

#define VkglTestCase_004189_1 "dEQP-GLES2.functional.shaders.operator.unary_ope"
#define VkglTestCase_004189_2 "rator.post_decrement_effect.mediump_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004189, VkglTestCase_004189_1, VkglTestCase_004189_2);

#define VkglTestCase_004190_1 "dEQP-GLES2.functional.shaders.operator.unary_o"
#define VkglTestCase_004190_2 "perator.post_decrement_effect.highp_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004190, VkglTestCase_004190_1, VkglTestCase_004190_2);

#define VkglTestCase_004191_1 "dEQP-GLES2.functional.shaders.operator.unary_op"
#define VkglTestCase_004191_2 "erator.post_decrement_effect.highp_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004191, VkglTestCase_004191_1, VkglTestCase_004191_2);

#define VkglTestCase_004192_1 "dEQP-GLES2.functional.shaders.operator.unary_o"
#define VkglTestCase_004192_2 "perator.post_decrement_effect.lowp_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004192, VkglTestCase_004192_1, VkglTestCase_004192_2);

#define VkglTestCase_004193_1 "dEQP-GLES2.functional.shaders.operator.unary_op"
#define VkglTestCase_004193_2 "erator.post_decrement_effect.lowp_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004193, VkglTestCase_004193_1, VkglTestCase_004193_2);

#define VkglTestCase_004194_1 "dEQP-GLES2.functional.shaders.operator.unary_op"
#define VkglTestCase_004194_2 "erator.post_decrement_effect.mediump_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004194, VkglTestCase_004194_1, VkglTestCase_004194_2);

#define VkglTestCase_004195_1 "dEQP-GLES2.functional.shaders.operator.unary_ope"
#define VkglTestCase_004195_2 "rator.post_decrement_effect.mediump_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004195, VkglTestCase_004195_1, VkglTestCase_004195_2);

#define VkglTestCase_004196_1 "dEQP-GLES2.functional.shaders.operator.unary_o"
#define VkglTestCase_004196_2 "perator.post_decrement_effect.highp_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004196, VkglTestCase_004196_1, VkglTestCase_004196_2);

#define VkglTestCase_004197_1 "dEQP-GLES2.functional.shaders.operator.unary_op"
#define VkglTestCase_004197_2 "erator.post_decrement_effect.highp_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004197, VkglTestCase_004197_1, VkglTestCase_004197_2);

#define VkglTestCase_004198_1 "dEQP-GLES2.functional.shaders.operator.unary_"
#define VkglTestCase_004198_2 "operator.post_decrement_effect.lowp_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004198, VkglTestCase_004198_1, VkglTestCase_004198_2);

#define VkglTestCase_004199_1 "dEQP-GLES2.functional.shaders.operator.unary_o"
#define VkglTestCase_004199_2 "perator.post_decrement_effect.lowp_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004199, VkglTestCase_004199_1, VkglTestCase_004199_2);

#define VkglTestCase_004200_1 "dEQP-GLES2.functional.shaders.operator.unary_op"
#define VkglTestCase_004200_2 "erator.post_decrement_effect.mediump_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004200, VkglTestCase_004200_1, VkglTestCase_004200_2);

#define VkglTestCase_004201_1 "dEQP-GLES2.functional.shaders.operator.unary_ope"
#define VkglTestCase_004201_2 "rator.post_decrement_effect.mediump_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004201, VkglTestCase_004201_1, VkglTestCase_004201_2);

#define VkglTestCase_004202_1 "dEQP-GLES2.functional.shaders.operator.unary_o"
#define VkglTestCase_004202_2 "perator.post_decrement_effect.highp_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004202, VkglTestCase_004202_1, VkglTestCase_004202_2);

#define VkglTestCase_004203_1 "dEQP-GLES2.functional.shaders.operator.unary_op"
#define VkglTestCase_004203_2 "erator.post_decrement_effect.highp_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004203, VkglTestCase_004203_1, VkglTestCase_004203_2);

#define VkglTestCase_004204_1 "dEQP-GLES2.functional.shaders.operator.unary_o"
#define VkglTestCase_004204_2 "perator.post_decrement_effect.lowp_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004204, VkglTestCase_004204_1, VkglTestCase_004204_2);

#define VkglTestCase_004205_1 "dEQP-GLES2.functional.shaders.operator.unary_op"
#define VkglTestCase_004205_2 "erator.post_decrement_effect.lowp_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004205, VkglTestCase_004205_1, VkglTestCase_004205_2);

#define VkglTestCase_004206_1 "dEQP-GLES2.functional.shaders.operator.unary_ope"
#define VkglTestCase_004206_2 "rator.post_decrement_effect.mediump_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004206, VkglTestCase_004206_1, VkglTestCase_004206_2);

#define VkglTestCase_004207_1 "dEQP-GLES2.functional.shaders.operator.unary_oper"
#define VkglTestCase_004207_2 "ator.post_decrement_effect.mediump_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004207, VkglTestCase_004207_1, VkglTestCase_004207_2);

#define VkglTestCase_004208_1 "dEQP-GLES2.functional.shaders.operator.unary_op"
#define VkglTestCase_004208_2 "erator.post_decrement_effect.highp_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004208, VkglTestCase_004208_1, VkglTestCase_004208_2);

#define VkglTestCase_004209_1 "dEQP-GLES2.functional.shaders.operator.unary_ope"
#define VkglTestCase_004209_2 "rator.post_decrement_effect.highp_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004209, VkglTestCase_004209_1, VkglTestCase_004209_2);

#define VkglTestCase_004210_1 "dEQP-GLES2.functional.shaders.operator.unary_o"
#define VkglTestCase_004210_2 "perator.post_decrement_effect.lowp_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004210, VkglTestCase_004210_1, VkglTestCase_004210_2);

#define VkglTestCase_004211_1 "dEQP-GLES2.functional.shaders.operator.unary_op"
#define VkglTestCase_004211_2 "erator.post_decrement_effect.lowp_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004211, VkglTestCase_004211_1, VkglTestCase_004211_2);

#define VkglTestCase_004212_1 "dEQP-GLES2.functional.shaders.operator.unary_ope"
#define VkglTestCase_004212_2 "rator.post_decrement_effect.mediump_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004212, VkglTestCase_004212_1, VkglTestCase_004212_2);

#define VkglTestCase_004213_1 "dEQP-GLES2.functional.shaders.operator.unary_oper"
#define VkglTestCase_004213_2 "ator.post_decrement_effect.mediump_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004213, VkglTestCase_004213_1, VkglTestCase_004213_2);

#define VkglTestCase_004214_1 "dEQP-GLES2.functional.shaders.operator.unary_op"
#define VkglTestCase_004214_2 "erator.post_decrement_effect.highp_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004214, VkglTestCase_004214_1, VkglTestCase_004214_2);

#define VkglTestCase_004215_1 "dEQP-GLES2.functional.shaders.operator.unary_ope"
#define VkglTestCase_004215_2 "rator.post_decrement_effect.highp_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004215, VkglTestCase_004215_1, VkglTestCase_004215_2);

#define VkglTestCase_004216_1 "dEQP-GLES2.functional.shaders.operator.unary_o"
#define VkglTestCase_004216_2 "perator.post_decrement_effect.lowp_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004216, VkglTestCase_004216_1, VkglTestCase_004216_2);

#define VkglTestCase_004217_1 "dEQP-GLES2.functional.shaders.operator.unary_op"
#define VkglTestCase_004217_2 "erator.post_decrement_effect.lowp_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004217, VkglTestCase_004217_1, VkglTestCase_004217_2);

#define VkglTestCase_004218_1 "dEQP-GLES2.functional.shaders.operator.unary_ope"
#define VkglTestCase_004218_2 "rator.post_decrement_effect.mediump_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004218, VkglTestCase_004218_1, VkglTestCase_004218_2);

#define VkglTestCase_004219_1 "dEQP-GLES2.functional.shaders.operator.unary_oper"
#define VkglTestCase_004219_2 "ator.post_decrement_effect.mediump_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004219, VkglTestCase_004219_1, VkglTestCase_004219_2);

#define VkglTestCase_004220_1 "dEQP-GLES2.functional.shaders.operator.unary_op"
#define VkglTestCase_004220_2 "erator.post_decrement_effect.highp_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004220, VkglTestCase_004220_1, VkglTestCase_004220_2);

#define VkglTestCase_004221_1 "dEQP-GLES2.functional.shaders.operator.unary_ope"
#define VkglTestCase_004221_2 "rator.post_decrement_effect.highp_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004221, VkglTestCase_004221_1, VkglTestCase_004221_2);
