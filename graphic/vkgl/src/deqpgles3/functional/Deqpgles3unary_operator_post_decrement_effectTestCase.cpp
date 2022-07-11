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
#include "../ActsDeqpgles30008TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_007664_1 "dEQP-GLES3.functional.shaders.operator.unary_o"
#define VkglTestCase_007664_2 "perator.post_decrement_effect.lowp_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007664, VkglTestCase_007664_1, VkglTestCase_007664_2);

#define VkglTestCase_007665_1 "dEQP-GLES3.functional.shaders.operator.unary_op"
#define VkglTestCase_007665_2 "erator.post_decrement_effect.lowp_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007665, VkglTestCase_007665_1, VkglTestCase_007665_2);

#define VkglTestCase_007666_1 "dEQP-GLES3.functional.shaders.operator.unary_ope"
#define VkglTestCase_007666_2 "rator.post_decrement_effect.mediump_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007666, VkglTestCase_007666_1, VkglTestCase_007666_2);

#define VkglTestCase_007667_1 "dEQP-GLES3.functional.shaders.operator.unary_oper"
#define VkglTestCase_007667_2 "ator.post_decrement_effect.mediump_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007667, VkglTestCase_007667_1, VkglTestCase_007667_2);

#define VkglTestCase_007668_1 "dEQP-GLES3.functional.shaders.operator.unary_op"
#define VkglTestCase_007668_2 "erator.post_decrement_effect.highp_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007668, VkglTestCase_007668_1, VkglTestCase_007668_2);

#define VkglTestCase_007669_1 "dEQP-GLES3.functional.shaders.operator.unary_ope"
#define VkglTestCase_007669_2 "rator.post_decrement_effect.highp_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007669, VkglTestCase_007669_1, VkglTestCase_007669_2);

#define VkglTestCase_007670_1 "dEQP-GLES3.functional.shaders.operator.unary_o"
#define VkglTestCase_007670_2 "perator.post_decrement_effect.lowp_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007670, VkglTestCase_007670_1, VkglTestCase_007670_2);

#define VkglTestCase_007671_1 "dEQP-GLES3.functional.shaders.operator.unary_op"
#define VkglTestCase_007671_2 "erator.post_decrement_effect.lowp_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007671, VkglTestCase_007671_1, VkglTestCase_007671_2);

#define VkglTestCase_007672_1 "dEQP-GLES3.functional.shaders.operator.unary_op"
#define VkglTestCase_007672_2 "erator.post_decrement_effect.mediump_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007672, VkglTestCase_007672_1, VkglTestCase_007672_2);

#define VkglTestCase_007673_1 "dEQP-GLES3.functional.shaders.operator.unary_ope"
#define VkglTestCase_007673_2 "rator.post_decrement_effect.mediump_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007673, VkglTestCase_007673_1, VkglTestCase_007673_2);

#define VkglTestCase_007674_1 "dEQP-GLES3.functional.shaders.operator.unary_o"
#define VkglTestCase_007674_2 "perator.post_decrement_effect.highp_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007674, VkglTestCase_007674_1, VkglTestCase_007674_2);

#define VkglTestCase_007675_1 "dEQP-GLES3.functional.shaders.operator.unary_op"
#define VkglTestCase_007675_2 "erator.post_decrement_effect.highp_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007675, VkglTestCase_007675_1, VkglTestCase_007675_2);

#define VkglTestCase_007676_1 "dEQP-GLES3.functional.shaders.operator.unary_o"
#define VkglTestCase_007676_2 "perator.post_decrement_effect.lowp_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007676, VkglTestCase_007676_1, VkglTestCase_007676_2);

#define VkglTestCase_007677_1 "dEQP-GLES3.functional.shaders.operator.unary_op"
#define VkglTestCase_007677_2 "erator.post_decrement_effect.lowp_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007677, VkglTestCase_007677_1, VkglTestCase_007677_2);

#define VkglTestCase_007678_1 "dEQP-GLES3.functional.shaders.operator.unary_op"
#define VkglTestCase_007678_2 "erator.post_decrement_effect.mediump_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007678, VkglTestCase_007678_1, VkglTestCase_007678_2);

#define VkglTestCase_007679_1 "dEQP-GLES3.functional.shaders.operator.unary_ope"
#define VkglTestCase_007679_2 "rator.post_decrement_effect.mediump_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007679, VkglTestCase_007679_1, VkglTestCase_007679_2);

#define VkglTestCase_007680_1 "dEQP-GLES3.functional.shaders.operator.unary_o"
#define VkglTestCase_007680_2 "perator.post_decrement_effect.highp_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007680, VkglTestCase_007680_1, VkglTestCase_007680_2);

#define VkglTestCase_007681_1 "dEQP-GLES3.functional.shaders.operator.unary_op"
#define VkglTestCase_007681_2 "erator.post_decrement_effect.highp_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007681, VkglTestCase_007681_1, VkglTestCase_007681_2);

#define VkglTestCase_007682_1 "dEQP-GLES3.functional.shaders.operator.unary_o"
#define VkglTestCase_007682_2 "perator.post_decrement_effect.lowp_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007682, VkglTestCase_007682_1, VkglTestCase_007682_2);

#define VkglTestCase_007683_1 "dEQP-GLES3.functional.shaders.operator.unary_op"
#define VkglTestCase_007683_2 "erator.post_decrement_effect.lowp_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007683, VkglTestCase_007683_1, VkglTestCase_007683_2);

#define VkglTestCase_007684_1 "dEQP-GLES3.functional.shaders.operator.unary_op"
#define VkglTestCase_007684_2 "erator.post_decrement_effect.mediump_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007684, VkglTestCase_007684_1, VkglTestCase_007684_2);

#define VkglTestCase_007685_1 "dEQP-GLES3.functional.shaders.operator.unary_ope"
#define VkglTestCase_007685_2 "rator.post_decrement_effect.mediump_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007685, VkglTestCase_007685_1, VkglTestCase_007685_2);

#define VkglTestCase_007686_1 "dEQP-GLES3.functional.shaders.operator.unary_o"
#define VkglTestCase_007686_2 "perator.post_decrement_effect.highp_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007686, VkglTestCase_007686_1, VkglTestCase_007686_2);

#define VkglTestCase_007687_1 "dEQP-GLES3.functional.shaders.operator.unary_op"
#define VkglTestCase_007687_2 "erator.post_decrement_effect.highp_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007687, VkglTestCase_007687_1, VkglTestCase_007687_2);

#define VkglTestCase_007688_1 "dEQP-GLES3.functional.shaders.operator.unary_"
#define VkglTestCase_007688_2 "operator.post_decrement_effect.lowp_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007688, VkglTestCase_007688_1, VkglTestCase_007688_2);

#define VkglTestCase_007689_1 "dEQP-GLES3.functional.shaders.operator.unary_o"
#define VkglTestCase_007689_2 "perator.post_decrement_effect.lowp_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007689, VkglTestCase_007689_1, VkglTestCase_007689_2);

#define VkglTestCase_007690_1 "dEQP-GLES3.functional.shaders.operator.unary_op"
#define VkglTestCase_007690_2 "erator.post_decrement_effect.mediump_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007690, VkglTestCase_007690_1, VkglTestCase_007690_2);

#define VkglTestCase_007691_1 "dEQP-GLES3.functional.shaders.operator.unary_ope"
#define VkglTestCase_007691_2 "rator.post_decrement_effect.mediump_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007691, VkglTestCase_007691_1, VkglTestCase_007691_2);

#define VkglTestCase_007692_1 "dEQP-GLES3.functional.shaders.operator.unary_o"
#define VkglTestCase_007692_2 "perator.post_decrement_effect.highp_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007692, VkglTestCase_007692_1, VkglTestCase_007692_2);

#define VkglTestCase_007693_1 "dEQP-GLES3.functional.shaders.operator.unary_op"
#define VkglTestCase_007693_2 "erator.post_decrement_effect.highp_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007693, VkglTestCase_007693_1, VkglTestCase_007693_2);

#define VkglTestCase_007694_1 "dEQP-GLES3.functional.shaders.operator.unary_o"
#define VkglTestCase_007694_2 "perator.post_decrement_effect.lowp_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007694, VkglTestCase_007694_1, VkglTestCase_007694_2);

#define VkglTestCase_007695_1 "dEQP-GLES3.functional.shaders.operator.unary_op"
#define VkglTestCase_007695_2 "erator.post_decrement_effect.lowp_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007695, VkglTestCase_007695_1, VkglTestCase_007695_2);

#define VkglTestCase_007696_1 "dEQP-GLES3.functional.shaders.operator.unary_ope"
#define VkglTestCase_007696_2 "rator.post_decrement_effect.mediump_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007696, VkglTestCase_007696_1, VkglTestCase_007696_2);

#define VkglTestCase_007697_1 "dEQP-GLES3.functional.shaders.operator.unary_oper"
#define VkglTestCase_007697_2 "ator.post_decrement_effect.mediump_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007697, VkglTestCase_007697_1, VkglTestCase_007697_2);

#define VkglTestCase_007698_1 "dEQP-GLES3.functional.shaders.operator.unary_op"
#define VkglTestCase_007698_2 "erator.post_decrement_effect.highp_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007698, VkglTestCase_007698_1, VkglTestCase_007698_2);

#define VkglTestCase_007699_1 "dEQP-GLES3.functional.shaders.operator.unary_ope"
#define VkglTestCase_007699_2 "rator.post_decrement_effect.highp_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007699, VkglTestCase_007699_1, VkglTestCase_007699_2);

#define VkglTestCase_007700_1 "dEQP-GLES3.functional.shaders.operator.unary_o"
#define VkglTestCase_007700_2 "perator.post_decrement_effect.lowp_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007700, VkglTestCase_007700_1, VkglTestCase_007700_2);

#define VkglTestCase_007701_1 "dEQP-GLES3.functional.shaders.operator.unary_op"
#define VkglTestCase_007701_2 "erator.post_decrement_effect.lowp_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007701, VkglTestCase_007701_1, VkglTestCase_007701_2);

#define VkglTestCase_007702_1 "dEQP-GLES3.functional.shaders.operator.unary_ope"
#define VkglTestCase_007702_2 "rator.post_decrement_effect.mediump_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007702, VkglTestCase_007702_1, VkglTestCase_007702_2);

#define VkglTestCase_007703_1 "dEQP-GLES3.functional.shaders.operator.unary_oper"
#define VkglTestCase_007703_2 "ator.post_decrement_effect.mediump_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007703, VkglTestCase_007703_1, VkglTestCase_007703_2);

#define VkglTestCase_007704_1 "dEQP-GLES3.functional.shaders.operator.unary_op"
#define VkglTestCase_007704_2 "erator.post_decrement_effect.highp_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007704, VkglTestCase_007704_1, VkglTestCase_007704_2);

#define VkglTestCase_007705_1 "dEQP-GLES3.functional.shaders.operator.unary_ope"
#define VkglTestCase_007705_2 "rator.post_decrement_effect.highp_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007705, VkglTestCase_007705_1, VkglTestCase_007705_2);

#define VkglTestCase_007706_1 "dEQP-GLES3.functional.shaders.operator.unary_o"
#define VkglTestCase_007706_2 "perator.post_decrement_effect.lowp_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007706, VkglTestCase_007706_1, VkglTestCase_007706_2);

#define VkglTestCase_007707_1 "dEQP-GLES3.functional.shaders.operator.unary_op"
#define VkglTestCase_007707_2 "erator.post_decrement_effect.lowp_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007707, VkglTestCase_007707_1, VkglTestCase_007707_2);

#define VkglTestCase_007708_1 "dEQP-GLES3.functional.shaders.operator.unary_ope"
#define VkglTestCase_007708_2 "rator.post_decrement_effect.mediump_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007708, VkglTestCase_007708_1, VkglTestCase_007708_2);

#define VkglTestCase_007709_1 "dEQP-GLES3.functional.shaders.operator.unary_oper"
#define VkglTestCase_007709_2 "ator.post_decrement_effect.mediump_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007709, VkglTestCase_007709_1, VkglTestCase_007709_2);

#define VkglTestCase_007710_1 "dEQP-GLES3.functional.shaders.operator.unary_op"
#define VkglTestCase_007710_2 "erator.post_decrement_effect.highp_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007710, VkglTestCase_007710_1, VkglTestCase_007710_2);

#define VkglTestCase_007711_1 "dEQP-GLES3.functional.shaders.operator.unary_ope"
#define VkglTestCase_007711_2 "rator.post_decrement_effect.highp_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007711, VkglTestCase_007711_1, VkglTestCase_007711_2);

#define VkglTestCase_007712_1 "dEQP-GLES3.functional.shaders.operator.unary_o"
#define VkglTestCase_007712_2 "perator.post_decrement_effect.lowp_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007712, VkglTestCase_007712_1, VkglTestCase_007712_2);

#define VkglTestCase_007713_1 "dEQP-GLES3.functional.shaders.operator.unary_op"
#define VkglTestCase_007713_2 "erator.post_decrement_effect.lowp_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007713, VkglTestCase_007713_1, VkglTestCase_007713_2);

#define VkglTestCase_007714_1 "dEQP-GLES3.functional.shaders.operator.unary_op"
#define VkglTestCase_007714_2 "erator.post_decrement_effect.mediump_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007714, VkglTestCase_007714_1, VkglTestCase_007714_2);

#define VkglTestCase_007715_1 "dEQP-GLES3.functional.shaders.operator.unary_ope"
#define VkglTestCase_007715_2 "rator.post_decrement_effect.mediump_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007715, VkglTestCase_007715_1, VkglTestCase_007715_2);

#define VkglTestCase_007716_1 "dEQP-GLES3.functional.shaders.operator.unary_o"
#define VkglTestCase_007716_2 "perator.post_decrement_effect.highp_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007716, VkglTestCase_007716_1, VkglTestCase_007716_2);

#define VkglTestCase_007717_1 "dEQP-GLES3.functional.shaders.operator.unary_op"
#define VkglTestCase_007717_2 "erator.post_decrement_effect.highp_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007717, VkglTestCase_007717_1, VkglTestCase_007717_2);

#define VkglTestCase_007718_1 "dEQP-GLES3.functional.shaders.operator.unary_o"
#define VkglTestCase_007718_2 "perator.post_decrement_effect.lowp_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007718, VkglTestCase_007718_1, VkglTestCase_007718_2);

#define VkglTestCase_007719_1 "dEQP-GLES3.functional.shaders.operator.unary_op"
#define VkglTestCase_007719_2 "erator.post_decrement_effect.lowp_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007719, VkglTestCase_007719_1, VkglTestCase_007719_2);

#define VkglTestCase_007720_1 "dEQP-GLES3.functional.shaders.operator.unary_ope"
#define VkglTestCase_007720_2 "rator.post_decrement_effect.mediump_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007720, VkglTestCase_007720_1, VkglTestCase_007720_2);

#define VkglTestCase_007721_1 "dEQP-GLES3.functional.shaders.operator.unary_oper"
#define VkglTestCase_007721_2 "ator.post_decrement_effect.mediump_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007721, VkglTestCase_007721_1, VkglTestCase_007721_2);

#define VkglTestCase_007722_1 "dEQP-GLES3.functional.shaders.operator.unary_op"
#define VkglTestCase_007722_2 "erator.post_decrement_effect.highp_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007722, VkglTestCase_007722_1, VkglTestCase_007722_2);

#define VkglTestCase_007723_1 "dEQP-GLES3.functional.shaders.operator.unary_ope"
#define VkglTestCase_007723_2 "rator.post_decrement_effect.highp_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007723, VkglTestCase_007723_1, VkglTestCase_007723_2);

#define VkglTestCase_007724_1 "dEQP-GLES3.functional.shaders.operator.unary_o"
#define VkglTestCase_007724_2 "perator.post_decrement_effect.lowp_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007724, VkglTestCase_007724_1, VkglTestCase_007724_2);

#define VkglTestCase_007725_1 "dEQP-GLES3.functional.shaders.operator.unary_op"
#define VkglTestCase_007725_2 "erator.post_decrement_effect.lowp_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007725, VkglTestCase_007725_1, VkglTestCase_007725_2);

#define VkglTestCase_007726_1 "dEQP-GLES3.functional.shaders.operator.unary_ope"
#define VkglTestCase_007726_2 "rator.post_decrement_effect.mediump_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007726, VkglTestCase_007726_1, VkglTestCase_007726_2);

#define VkglTestCase_007727_1 "dEQP-GLES3.functional.shaders.operator.unary_oper"
#define VkglTestCase_007727_2 "ator.post_decrement_effect.mediump_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007727, VkglTestCase_007727_1, VkglTestCase_007727_2);

#define VkglTestCase_007728_1 "dEQP-GLES3.functional.shaders.operator.unary_op"
#define VkglTestCase_007728_2 "erator.post_decrement_effect.highp_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007728, VkglTestCase_007728_1, VkglTestCase_007728_2);

#define VkglTestCase_007729_1 "dEQP-GLES3.functional.shaders.operator.unary_ope"
#define VkglTestCase_007729_2 "rator.post_decrement_effect.highp_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007729, VkglTestCase_007729_1, VkglTestCase_007729_2);

#define VkglTestCase_007730_1 "dEQP-GLES3.functional.shaders.operator.unary_o"
#define VkglTestCase_007730_2 "perator.post_decrement_effect.lowp_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007730, VkglTestCase_007730_1, VkglTestCase_007730_2);

#define VkglTestCase_007731_1 "dEQP-GLES3.functional.shaders.operator.unary_op"
#define VkglTestCase_007731_2 "erator.post_decrement_effect.lowp_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007731, VkglTestCase_007731_1, VkglTestCase_007731_2);

#define VkglTestCase_007732_1 "dEQP-GLES3.functional.shaders.operator.unary_ope"
#define VkglTestCase_007732_2 "rator.post_decrement_effect.mediump_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007732, VkglTestCase_007732_1, VkglTestCase_007732_2);

#define VkglTestCase_007733_1 "dEQP-GLES3.functional.shaders.operator.unary_oper"
#define VkglTestCase_007733_2 "ator.post_decrement_effect.mediump_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007733, VkglTestCase_007733_1, VkglTestCase_007733_2);

#define VkglTestCase_007734_1 "dEQP-GLES3.functional.shaders.operator.unary_op"
#define VkglTestCase_007734_2 "erator.post_decrement_effect.highp_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007734, VkglTestCase_007734_1, VkglTestCase_007734_2);

#define VkglTestCase_007735_1 "dEQP-GLES3.functional.shaders.operator.unary_ope"
#define VkglTestCase_007735_2 "rator.post_decrement_effect.highp_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007735, VkglTestCase_007735_1, VkglTestCase_007735_2);
