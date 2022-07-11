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

#define VkglTestCase_007592_1 "dEQP-GLES3.functional.shaders.operator.unary_o"
#define VkglTestCase_007592_2 "perator.post_increment_effect.lowp_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007592, VkglTestCase_007592_1, VkglTestCase_007592_2);

#define VkglTestCase_007593_1 "dEQP-GLES3.functional.shaders.operator.unary_op"
#define VkglTestCase_007593_2 "erator.post_increment_effect.lowp_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007593, VkglTestCase_007593_1, VkglTestCase_007593_2);

#define VkglTestCase_007594_1 "dEQP-GLES3.functional.shaders.operator.unary_ope"
#define VkglTestCase_007594_2 "rator.post_increment_effect.mediump_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007594, VkglTestCase_007594_1, VkglTestCase_007594_2);

#define VkglTestCase_007595_1 "dEQP-GLES3.functional.shaders.operator.unary_oper"
#define VkglTestCase_007595_2 "ator.post_increment_effect.mediump_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007595, VkglTestCase_007595_1, VkglTestCase_007595_2);

#define VkglTestCase_007596_1 "dEQP-GLES3.functional.shaders.operator.unary_op"
#define VkglTestCase_007596_2 "erator.post_increment_effect.highp_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007596, VkglTestCase_007596_1, VkglTestCase_007596_2);

#define VkglTestCase_007597_1 "dEQP-GLES3.functional.shaders.operator.unary_ope"
#define VkglTestCase_007597_2 "rator.post_increment_effect.highp_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007597, VkglTestCase_007597_1, VkglTestCase_007597_2);

#define VkglTestCase_007598_1 "dEQP-GLES3.functional.shaders.operator.unary_o"
#define VkglTestCase_007598_2 "perator.post_increment_effect.lowp_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007598, VkglTestCase_007598_1, VkglTestCase_007598_2);

#define VkglTestCase_007599_1 "dEQP-GLES3.functional.shaders.operator.unary_op"
#define VkglTestCase_007599_2 "erator.post_increment_effect.lowp_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007599, VkglTestCase_007599_1, VkglTestCase_007599_2);

#define VkglTestCase_007600_1 "dEQP-GLES3.functional.shaders.operator.unary_op"
#define VkglTestCase_007600_2 "erator.post_increment_effect.mediump_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007600, VkglTestCase_007600_1, VkglTestCase_007600_2);

#define VkglTestCase_007601_1 "dEQP-GLES3.functional.shaders.operator.unary_ope"
#define VkglTestCase_007601_2 "rator.post_increment_effect.mediump_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007601, VkglTestCase_007601_1, VkglTestCase_007601_2);

#define VkglTestCase_007602_1 "dEQP-GLES3.functional.shaders.operator.unary_o"
#define VkglTestCase_007602_2 "perator.post_increment_effect.highp_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007602, VkglTestCase_007602_1, VkglTestCase_007602_2);

#define VkglTestCase_007603_1 "dEQP-GLES3.functional.shaders.operator.unary_op"
#define VkglTestCase_007603_2 "erator.post_increment_effect.highp_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007603, VkglTestCase_007603_1, VkglTestCase_007603_2);

#define VkglTestCase_007604_1 "dEQP-GLES3.functional.shaders.operator.unary_o"
#define VkglTestCase_007604_2 "perator.post_increment_effect.lowp_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007604, VkglTestCase_007604_1, VkglTestCase_007604_2);

#define VkglTestCase_007605_1 "dEQP-GLES3.functional.shaders.operator.unary_op"
#define VkglTestCase_007605_2 "erator.post_increment_effect.lowp_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007605, VkglTestCase_007605_1, VkglTestCase_007605_2);

#define VkglTestCase_007606_1 "dEQP-GLES3.functional.shaders.operator.unary_op"
#define VkglTestCase_007606_2 "erator.post_increment_effect.mediump_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007606, VkglTestCase_007606_1, VkglTestCase_007606_2);

#define VkglTestCase_007607_1 "dEQP-GLES3.functional.shaders.operator.unary_ope"
#define VkglTestCase_007607_2 "rator.post_increment_effect.mediump_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007607, VkglTestCase_007607_1, VkglTestCase_007607_2);

#define VkglTestCase_007608_1 "dEQP-GLES3.functional.shaders.operator.unary_o"
#define VkglTestCase_007608_2 "perator.post_increment_effect.highp_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007608, VkglTestCase_007608_1, VkglTestCase_007608_2);

#define VkglTestCase_007609_1 "dEQP-GLES3.functional.shaders.operator.unary_op"
#define VkglTestCase_007609_2 "erator.post_increment_effect.highp_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007609, VkglTestCase_007609_1, VkglTestCase_007609_2);

#define VkglTestCase_007610_1 "dEQP-GLES3.functional.shaders.operator.unary_o"
#define VkglTestCase_007610_2 "perator.post_increment_effect.lowp_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007610, VkglTestCase_007610_1, VkglTestCase_007610_2);

#define VkglTestCase_007611_1 "dEQP-GLES3.functional.shaders.operator.unary_op"
#define VkglTestCase_007611_2 "erator.post_increment_effect.lowp_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007611, VkglTestCase_007611_1, VkglTestCase_007611_2);

#define VkglTestCase_007612_1 "dEQP-GLES3.functional.shaders.operator.unary_op"
#define VkglTestCase_007612_2 "erator.post_increment_effect.mediump_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007612, VkglTestCase_007612_1, VkglTestCase_007612_2);

#define VkglTestCase_007613_1 "dEQP-GLES3.functional.shaders.operator.unary_ope"
#define VkglTestCase_007613_2 "rator.post_increment_effect.mediump_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007613, VkglTestCase_007613_1, VkglTestCase_007613_2);

#define VkglTestCase_007614_1 "dEQP-GLES3.functional.shaders.operator.unary_o"
#define VkglTestCase_007614_2 "perator.post_increment_effect.highp_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007614, VkglTestCase_007614_1, VkglTestCase_007614_2);

#define VkglTestCase_007615_1 "dEQP-GLES3.functional.shaders.operator.unary_op"
#define VkglTestCase_007615_2 "erator.post_increment_effect.highp_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007615, VkglTestCase_007615_1, VkglTestCase_007615_2);

#define VkglTestCase_007616_1 "dEQP-GLES3.functional.shaders.operator.unary_"
#define VkglTestCase_007616_2 "operator.post_increment_effect.lowp_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007616, VkglTestCase_007616_1, VkglTestCase_007616_2);

#define VkglTestCase_007617_1 "dEQP-GLES3.functional.shaders.operator.unary_o"
#define VkglTestCase_007617_2 "perator.post_increment_effect.lowp_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007617, VkglTestCase_007617_1, VkglTestCase_007617_2);

#define VkglTestCase_007618_1 "dEQP-GLES3.functional.shaders.operator.unary_op"
#define VkglTestCase_007618_2 "erator.post_increment_effect.mediump_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007618, VkglTestCase_007618_1, VkglTestCase_007618_2);

#define VkglTestCase_007619_1 "dEQP-GLES3.functional.shaders.operator.unary_ope"
#define VkglTestCase_007619_2 "rator.post_increment_effect.mediump_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007619, VkglTestCase_007619_1, VkglTestCase_007619_2);

#define VkglTestCase_007620_1 "dEQP-GLES3.functional.shaders.operator.unary_o"
#define VkglTestCase_007620_2 "perator.post_increment_effect.highp_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007620, VkglTestCase_007620_1, VkglTestCase_007620_2);

#define VkglTestCase_007621_1 "dEQP-GLES3.functional.shaders.operator.unary_op"
#define VkglTestCase_007621_2 "erator.post_increment_effect.highp_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007621, VkglTestCase_007621_1, VkglTestCase_007621_2);

#define VkglTestCase_007622_1 "dEQP-GLES3.functional.shaders.operator.unary_o"
#define VkglTestCase_007622_2 "perator.post_increment_effect.lowp_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007622, VkglTestCase_007622_1, VkglTestCase_007622_2);

#define VkglTestCase_007623_1 "dEQP-GLES3.functional.shaders.operator.unary_op"
#define VkglTestCase_007623_2 "erator.post_increment_effect.lowp_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007623, VkglTestCase_007623_1, VkglTestCase_007623_2);

#define VkglTestCase_007624_1 "dEQP-GLES3.functional.shaders.operator.unary_ope"
#define VkglTestCase_007624_2 "rator.post_increment_effect.mediump_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007624, VkglTestCase_007624_1, VkglTestCase_007624_2);

#define VkglTestCase_007625_1 "dEQP-GLES3.functional.shaders.operator.unary_oper"
#define VkglTestCase_007625_2 "ator.post_increment_effect.mediump_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007625, VkglTestCase_007625_1, VkglTestCase_007625_2);

#define VkglTestCase_007626_1 "dEQP-GLES3.functional.shaders.operator.unary_op"
#define VkglTestCase_007626_2 "erator.post_increment_effect.highp_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007626, VkglTestCase_007626_1, VkglTestCase_007626_2);

#define VkglTestCase_007627_1 "dEQP-GLES3.functional.shaders.operator.unary_ope"
#define VkglTestCase_007627_2 "rator.post_increment_effect.highp_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007627, VkglTestCase_007627_1, VkglTestCase_007627_2);

#define VkglTestCase_007628_1 "dEQP-GLES3.functional.shaders.operator.unary_o"
#define VkglTestCase_007628_2 "perator.post_increment_effect.lowp_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007628, VkglTestCase_007628_1, VkglTestCase_007628_2);

#define VkglTestCase_007629_1 "dEQP-GLES3.functional.shaders.operator.unary_op"
#define VkglTestCase_007629_2 "erator.post_increment_effect.lowp_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007629, VkglTestCase_007629_1, VkglTestCase_007629_2);

#define VkglTestCase_007630_1 "dEQP-GLES3.functional.shaders.operator.unary_ope"
#define VkglTestCase_007630_2 "rator.post_increment_effect.mediump_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007630, VkglTestCase_007630_1, VkglTestCase_007630_2);

#define VkglTestCase_007631_1 "dEQP-GLES3.functional.shaders.operator.unary_oper"
#define VkglTestCase_007631_2 "ator.post_increment_effect.mediump_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007631, VkglTestCase_007631_1, VkglTestCase_007631_2);

#define VkglTestCase_007632_1 "dEQP-GLES3.functional.shaders.operator.unary_op"
#define VkglTestCase_007632_2 "erator.post_increment_effect.highp_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007632, VkglTestCase_007632_1, VkglTestCase_007632_2);

#define VkglTestCase_007633_1 "dEQP-GLES3.functional.shaders.operator.unary_ope"
#define VkglTestCase_007633_2 "rator.post_increment_effect.highp_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007633, VkglTestCase_007633_1, VkglTestCase_007633_2);

#define VkglTestCase_007634_1 "dEQP-GLES3.functional.shaders.operator.unary_o"
#define VkglTestCase_007634_2 "perator.post_increment_effect.lowp_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007634, VkglTestCase_007634_1, VkglTestCase_007634_2);

#define VkglTestCase_007635_1 "dEQP-GLES3.functional.shaders.operator.unary_op"
#define VkglTestCase_007635_2 "erator.post_increment_effect.lowp_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007635, VkglTestCase_007635_1, VkglTestCase_007635_2);

#define VkglTestCase_007636_1 "dEQP-GLES3.functional.shaders.operator.unary_ope"
#define VkglTestCase_007636_2 "rator.post_increment_effect.mediump_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007636, VkglTestCase_007636_1, VkglTestCase_007636_2);

#define VkglTestCase_007637_1 "dEQP-GLES3.functional.shaders.operator.unary_oper"
#define VkglTestCase_007637_2 "ator.post_increment_effect.mediump_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007637, VkglTestCase_007637_1, VkglTestCase_007637_2);

#define VkglTestCase_007638_1 "dEQP-GLES3.functional.shaders.operator.unary_op"
#define VkglTestCase_007638_2 "erator.post_increment_effect.highp_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007638, VkglTestCase_007638_1, VkglTestCase_007638_2);

#define VkglTestCase_007639_1 "dEQP-GLES3.functional.shaders.operator.unary_ope"
#define VkglTestCase_007639_2 "rator.post_increment_effect.highp_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007639, VkglTestCase_007639_1, VkglTestCase_007639_2);

#define VkglTestCase_007640_1 "dEQP-GLES3.functional.shaders.operator.unary_o"
#define VkglTestCase_007640_2 "perator.post_increment_effect.lowp_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007640, VkglTestCase_007640_1, VkglTestCase_007640_2);

#define VkglTestCase_007641_1 "dEQP-GLES3.functional.shaders.operator.unary_op"
#define VkglTestCase_007641_2 "erator.post_increment_effect.lowp_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007641, VkglTestCase_007641_1, VkglTestCase_007641_2);

#define VkglTestCase_007642_1 "dEQP-GLES3.functional.shaders.operator.unary_op"
#define VkglTestCase_007642_2 "erator.post_increment_effect.mediump_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007642, VkglTestCase_007642_1, VkglTestCase_007642_2);

#define VkglTestCase_007643_1 "dEQP-GLES3.functional.shaders.operator.unary_ope"
#define VkglTestCase_007643_2 "rator.post_increment_effect.mediump_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007643, VkglTestCase_007643_1, VkglTestCase_007643_2);

#define VkglTestCase_007644_1 "dEQP-GLES3.functional.shaders.operator.unary_o"
#define VkglTestCase_007644_2 "perator.post_increment_effect.highp_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007644, VkglTestCase_007644_1, VkglTestCase_007644_2);

#define VkglTestCase_007645_1 "dEQP-GLES3.functional.shaders.operator.unary_op"
#define VkglTestCase_007645_2 "erator.post_increment_effect.highp_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007645, VkglTestCase_007645_1, VkglTestCase_007645_2);

#define VkglTestCase_007646_1 "dEQP-GLES3.functional.shaders.operator.unary_o"
#define VkglTestCase_007646_2 "perator.post_increment_effect.lowp_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007646, VkglTestCase_007646_1, VkglTestCase_007646_2);

#define VkglTestCase_007647_1 "dEQP-GLES3.functional.shaders.operator.unary_op"
#define VkglTestCase_007647_2 "erator.post_increment_effect.lowp_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007647, VkglTestCase_007647_1, VkglTestCase_007647_2);

#define VkglTestCase_007648_1 "dEQP-GLES3.functional.shaders.operator.unary_ope"
#define VkglTestCase_007648_2 "rator.post_increment_effect.mediump_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007648, VkglTestCase_007648_1, VkglTestCase_007648_2);

#define VkglTestCase_007649_1 "dEQP-GLES3.functional.shaders.operator.unary_oper"
#define VkglTestCase_007649_2 "ator.post_increment_effect.mediump_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007649, VkglTestCase_007649_1, VkglTestCase_007649_2);

#define VkglTestCase_007650_1 "dEQP-GLES3.functional.shaders.operator.unary_op"
#define VkglTestCase_007650_2 "erator.post_increment_effect.highp_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007650, VkglTestCase_007650_1, VkglTestCase_007650_2);

#define VkglTestCase_007651_1 "dEQP-GLES3.functional.shaders.operator.unary_ope"
#define VkglTestCase_007651_2 "rator.post_increment_effect.highp_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007651, VkglTestCase_007651_1, VkglTestCase_007651_2);

#define VkglTestCase_007652_1 "dEQP-GLES3.functional.shaders.operator.unary_o"
#define VkglTestCase_007652_2 "perator.post_increment_effect.lowp_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007652, VkglTestCase_007652_1, VkglTestCase_007652_2);

#define VkglTestCase_007653_1 "dEQP-GLES3.functional.shaders.operator.unary_op"
#define VkglTestCase_007653_2 "erator.post_increment_effect.lowp_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007653, VkglTestCase_007653_1, VkglTestCase_007653_2);

#define VkglTestCase_007654_1 "dEQP-GLES3.functional.shaders.operator.unary_ope"
#define VkglTestCase_007654_2 "rator.post_increment_effect.mediump_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007654, VkglTestCase_007654_1, VkglTestCase_007654_2);

#define VkglTestCase_007655_1 "dEQP-GLES3.functional.shaders.operator.unary_oper"
#define VkglTestCase_007655_2 "ator.post_increment_effect.mediump_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007655, VkglTestCase_007655_1, VkglTestCase_007655_2);

#define VkglTestCase_007656_1 "dEQP-GLES3.functional.shaders.operator.unary_op"
#define VkglTestCase_007656_2 "erator.post_increment_effect.highp_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007656, VkglTestCase_007656_1, VkglTestCase_007656_2);

#define VkglTestCase_007657_1 "dEQP-GLES3.functional.shaders.operator.unary_ope"
#define VkglTestCase_007657_2 "rator.post_increment_effect.highp_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007657, VkglTestCase_007657_1, VkglTestCase_007657_2);

#define VkglTestCase_007658_1 "dEQP-GLES3.functional.shaders.operator.unary_o"
#define VkglTestCase_007658_2 "perator.post_increment_effect.lowp_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007658, VkglTestCase_007658_1, VkglTestCase_007658_2);

#define VkglTestCase_007659_1 "dEQP-GLES3.functional.shaders.operator.unary_op"
#define VkglTestCase_007659_2 "erator.post_increment_effect.lowp_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007659, VkglTestCase_007659_1, VkglTestCase_007659_2);

#define VkglTestCase_007660_1 "dEQP-GLES3.functional.shaders.operator.unary_ope"
#define VkglTestCase_007660_2 "rator.post_increment_effect.mediump_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007660, VkglTestCase_007660_1, VkglTestCase_007660_2);

#define VkglTestCase_007661_1 "dEQP-GLES3.functional.shaders.operator.unary_oper"
#define VkglTestCase_007661_2 "ator.post_increment_effect.mediump_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007661, VkglTestCase_007661_1, VkglTestCase_007661_2);

#define VkglTestCase_007662_1 "dEQP-GLES3.functional.shaders.operator.unary_op"
#define VkglTestCase_007662_2 "erator.post_increment_effect.highp_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007662, VkglTestCase_007662_1, VkglTestCase_007662_2);

#define VkglTestCase_007663_1 "dEQP-GLES3.functional.shaders.operator.unary_ope"
#define VkglTestCase_007663_2 "rator.post_increment_effect.highp_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007663, VkglTestCase_007663_1, VkglTestCase_007663_2);
