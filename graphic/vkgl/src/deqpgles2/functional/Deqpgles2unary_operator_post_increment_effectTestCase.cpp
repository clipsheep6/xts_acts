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

#define VkglTestCase_004126_1 "dEQP-GLES2.functional.shaders.operator.unary_o"
#define VkglTestCase_004126_2 "perator.post_increment_effect.lowp_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004126, VkglTestCase_004126_1, VkglTestCase_004126_2);

#define VkglTestCase_004127_1 "dEQP-GLES2.functional.shaders.operator.unary_op"
#define VkglTestCase_004127_2 "erator.post_increment_effect.lowp_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004127, VkglTestCase_004127_1, VkglTestCase_004127_2);

#define VkglTestCase_004128_1 "dEQP-GLES2.functional.shaders.operator.unary_ope"
#define VkglTestCase_004128_2 "rator.post_increment_effect.mediump_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004128, VkglTestCase_004128_1, VkglTestCase_004128_2);

#define VkglTestCase_004129_1 "dEQP-GLES2.functional.shaders.operator.unary_oper"
#define VkglTestCase_004129_2 "ator.post_increment_effect.mediump_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004129, VkglTestCase_004129_1, VkglTestCase_004129_2);

#define VkglTestCase_004130_1 "dEQP-GLES2.functional.shaders.operator.unary_op"
#define VkglTestCase_004130_2 "erator.post_increment_effect.highp_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004130, VkglTestCase_004130_1, VkglTestCase_004130_2);

#define VkglTestCase_004131_1 "dEQP-GLES2.functional.shaders.operator.unary_ope"
#define VkglTestCase_004131_2 "rator.post_increment_effect.highp_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004131, VkglTestCase_004131_1, VkglTestCase_004131_2);

#define VkglTestCase_004132_1 "dEQP-GLES2.functional.shaders.operator.unary_o"
#define VkglTestCase_004132_2 "perator.post_increment_effect.lowp_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004132, VkglTestCase_004132_1, VkglTestCase_004132_2);

#define VkglTestCase_004133_1 "dEQP-GLES2.functional.shaders.operator.unary_op"
#define VkglTestCase_004133_2 "erator.post_increment_effect.lowp_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004133, VkglTestCase_004133_1, VkglTestCase_004133_2);

#define VkglTestCase_004134_1 "dEQP-GLES2.functional.shaders.operator.unary_op"
#define VkglTestCase_004134_2 "erator.post_increment_effect.mediump_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004134, VkglTestCase_004134_1, VkglTestCase_004134_2);

#define VkglTestCase_004135_1 "dEQP-GLES2.functional.shaders.operator.unary_ope"
#define VkglTestCase_004135_2 "rator.post_increment_effect.mediump_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004135, VkglTestCase_004135_1, VkglTestCase_004135_2);

#define VkglTestCase_004136_1 "dEQP-GLES2.functional.shaders.operator.unary_o"
#define VkglTestCase_004136_2 "perator.post_increment_effect.highp_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004136, VkglTestCase_004136_1, VkglTestCase_004136_2);

#define VkglTestCase_004137_1 "dEQP-GLES2.functional.shaders.operator.unary_op"
#define VkglTestCase_004137_2 "erator.post_increment_effect.highp_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004137, VkglTestCase_004137_1, VkglTestCase_004137_2);

#define VkglTestCase_004138_1 "dEQP-GLES2.functional.shaders.operator.unary_o"
#define VkglTestCase_004138_2 "perator.post_increment_effect.lowp_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004138, VkglTestCase_004138_1, VkglTestCase_004138_2);

#define VkglTestCase_004139_1 "dEQP-GLES2.functional.shaders.operator.unary_op"
#define VkglTestCase_004139_2 "erator.post_increment_effect.lowp_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004139, VkglTestCase_004139_1, VkglTestCase_004139_2);

#define VkglTestCase_004140_1 "dEQP-GLES2.functional.shaders.operator.unary_op"
#define VkglTestCase_004140_2 "erator.post_increment_effect.mediump_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004140, VkglTestCase_004140_1, VkglTestCase_004140_2);

#define VkglTestCase_004141_1 "dEQP-GLES2.functional.shaders.operator.unary_ope"
#define VkglTestCase_004141_2 "rator.post_increment_effect.mediump_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004141, VkglTestCase_004141_1, VkglTestCase_004141_2);

#define VkglTestCase_004142_1 "dEQP-GLES2.functional.shaders.operator.unary_o"
#define VkglTestCase_004142_2 "perator.post_increment_effect.highp_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004142, VkglTestCase_004142_1, VkglTestCase_004142_2);

#define VkglTestCase_004143_1 "dEQP-GLES2.functional.shaders.operator.unary_op"
#define VkglTestCase_004143_2 "erator.post_increment_effect.highp_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004143, VkglTestCase_004143_1, VkglTestCase_004143_2);

#define VkglTestCase_004144_1 "dEQP-GLES2.functional.shaders.operator.unary_o"
#define VkglTestCase_004144_2 "perator.post_increment_effect.lowp_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004144, VkglTestCase_004144_1, VkglTestCase_004144_2);

#define VkglTestCase_004145_1 "dEQP-GLES2.functional.shaders.operator.unary_op"
#define VkglTestCase_004145_2 "erator.post_increment_effect.lowp_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004145, VkglTestCase_004145_1, VkglTestCase_004145_2);

#define VkglTestCase_004146_1 "dEQP-GLES2.functional.shaders.operator.unary_op"
#define VkglTestCase_004146_2 "erator.post_increment_effect.mediump_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004146, VkglTestCase_004146_1, VkglTestCase_004146_2);

#define VkglTestCase_004147_1 "dEQP-GLES2.functional.shaders.operator.unary_ope"
#define VkglTestCase_004147_2 "rator.post_increment_effect.mediump_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004147, VkglTestCase_004147_1, VkglTestCase_004147_2);

#define VkglTestCase_004148_1 "dEQP-GLES2.functional.shaders.operator.unary_o"
#define VkglTestCase_004148_2 "perator.post_increment_effect.highp_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004148, VkglTestCase_004148_1, VkglTestCase_004148_2);

#define VkglTestCase_004149_1 "dEQP-GLES2.functional.shaders.operator.unary_op"
#define VkglTestCase_004149_2 "erator.post_increment_effect.highp_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004149, VkglTestCase_004149_1, VkglTestCase_004149_2);

#define VkglTestCase_004150_1 "dEQP-GLES2.functional.shaders.operator.unary_"
#define VkglTestCase_004150_2 "operator.post_increment_effect.lowp_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004150, VkglTestCase_004150_1, VkglTestCase_004150_2);

#define VkglTestCase_004151_1 "dEQP-GLES2.functional.shaders.operator.unary_o"
#define VkglTestCase_004151_2 "perator.post_increment_effect.lowp_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004151, VkglTestCase_004151_1, VkglTestCase_004151_2);

#define VkglTestCase_004152_1 "dEQP-GLES2.functional.shaders.operator.unary_op"
#define VkglTestCase_004152_2 "erator.post_increment_effect.mediump_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004152, VkglTestCase_004152_1, VkglTestCase_004152_2);

#define VkglTestCase_004153_1 "dEQP-GLES2.functional.shaders.operator.unary_ope"
#define VkglTestCase_004153_2 "rator.post_increment_effect.mediump_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004153, VkglTestCase_004153_1, VkglTestCase_004153_2);

#define VkglTestCase_004154_1 "dEQP-GLES2.functional.shaders.operator.unary_o"
#define VkglTestCase_004154_2 "perator.post_increment_effect.highp_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004154, VkglTestCase_004154_1, VkglTestCase_004154_2);

#define VkglTestCase_004155_1 "dEQP-GLES2.functional.shaders.operator.unary_op"
#define VkglTestCase_004155_2 "erator.post_increment_effect.highp_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004155, VkglTestCase_004155_1, VkglTestCase_004155_2);

#define VkglTestCase_004156_1 "dEQP-GLES2.functional.shaders.operator.unary_o"
#define VkglTestCase_004156_2 "perator.post_increment_effect.lowp_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004156, VkglTestCase_004156_1, VkglTestCase_004156_2);

#define VkglTestCase_004157_1 "dEQP-GLES2.functional.shaders.operator.unary_op"
#define VkglTestCase_004157_2 "erator.post_increment_effect.lowp_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004157, VkglTestCase_004157_1, VkglTestCase_004157_2);

#define VkglTestCase_004158_1 "dEQP-GLES2.functional.shaders.operator.unary_ope"
#define VkglTestCase_004158_2 "rator.post_increment_effect.mediump_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004158, VkglTestCase_004158_1, VkglTestCase_004158_2);

#define VkglTestCase_004159_1 "dEQP-GLES2.functional.shaders.operator.unary_oper"
#define VkglTestCase_004159_2 "ator.post_increment_effect.mediump_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004159, VkglTestCase_004159_1, VkglTestCase_004159_2);

#define VkglTestCase_004160_1 "dEQP-GLES2.functional.shaders.operator.unary_op"
#define VkglTestCase_004160_2 "erator.post_increment_effect.highp_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004160, VkglTestCase_004160_1, VkglTestCase_004160_2);

#define VkglTestCase_004161_1 "dEQP-GLES2.functional.shaders.operator.unary_ope"
#define VkglTestCase_004161_2 "rator.post_increment_effect.highp_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004161, VkglTestCase_004161_1, VkglTestCase_004161_2);

#define VkglTestCase_004162_1 "dEQP-GLES2.functional.shaders.operator.unary_o"
#define VkglTestCase_004162_2 "perator.post_increment_effect.lowp_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004162, VkglTestCase_004162_1, VkglTestCase_004162_2);

#define VkglTestCase_004163_1 "dEQP-GLES2.functional.shaders.operator.unary_op"
#define VkglTestCase_004163_2 "erator.post_increment_effect.lowp_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004163, VkglTestCase_004163_1, VkglTestCase_004163_2);

#define VkglTestCase_004164_1 "dEQP-GLES2.functional.shaders.operator.unary_ope"
#define VkglTestCase_004164_2 "rator.post_increment_effect.mediump_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004164, VkglTestCase_004164_1, VkglTestCase_004164_2);

#define VkglTestCase_004165_1 "dEQP-GLES2.functional.shaders.operator.unary_oper"
#define VkglTestCase_004165_2 "ator.post_increment_effect.mediump_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004165, VkglTestCase_004165_1, VkglTestCase_004165_2);

#define VkglTestCase_004166_1 "dEQP-GLES2.functional.shaders.operator.unary_op"
#define VkglTestCase_004166_2 "erator.post_increment_effect.highp_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004166, VkglTestCase_004166_1, VkglTestCase_004166_2);

#define VkglTestCase_004167_1 "dEQP-GLES2.functional.shaders.operator.unary_ope"
#define VkglTestCase_004167_2 "rator.post_increment_effect.highp_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004167, VkglTestCase_004167_1, VkglTestCase_004167_2);

#define VkglTestCase_004168_1 "dEQP-GLES2.functional.shaders.operator.unary_o"
#define VkglTestCase_004168_2 "perator.post_increment_effect.lowp_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004168, VkglTestCase_004168_1, VkglTestCase_004168_2);

#define VkglTestCase_004169_1 "dEQP-GLES2.functional.shaders.operator.unary_op"
#define VkglTestCase_004169_2 "erator.post_increment_effect.lowp_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004169, VkglTestCase_004169_1, VkglTestCase_004169_2);

#define VkglTestCase_004170_1 "dEQP-GLES2.functional.shaders.operator.unary_ope"
#define VkglTestCase_004170_2 "rator.post_increment_effect.mediump_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004170, VkglTestCase_004170_1, VkglTestCase_004170_2);

#define VkglTestCase_004171_1 "dEQP-GLES2.functional.shaders.operator.unary_oper"
#define VkglTestCase_004171_2 "ator.post_increment_effect.mediump_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004171, VkglTestCase_004171_1, VkglTestCase_004171_2);

#define VkglTestCase_004172_1 "dEQP-GLES2.functional.shaders.operator.unary_op"
#define VkglTestCase_004172_2 "erator.post_increment_effect.highp_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004172, VkglTestCase_004172_1, VkglTestCase_004172_2);

#define VkglTestCase_004173_1 "dEQP-GLES2.functional.shaders.operator.unary_ope"
#define VkglTestCase_004173_2 "rator.post_increment_effect.highp_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004173, VkglTestCase_004173_1, VkglTestCase_004173_2);
