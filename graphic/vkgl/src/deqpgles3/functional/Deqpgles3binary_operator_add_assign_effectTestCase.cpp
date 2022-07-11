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
#include "../ActsDeqpgles30010TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_009560_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_009560_2 "_operator.add_assign_effect.lowp_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009560, VkglTestCase_009560_1, VkglTestCase_009560_2);

#define VkglTestCase_009561_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_009561_2 "operator.add_assign_effect.lowp_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009561, VkglTestCase_009561_1, VkglTestCase_009561_2);

#define VkglTestCase_009562_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_009562_2 "operator.add_assign_effect.mediump_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009562, VkglTestCase_009562_1, VkglTestCase_009562_2);

#define VkglTestCase_009563_1 "dEQP-GLES3.functional.shaders.operator.binary_o"
#define VkglTestCase_009563_2 "perator.add_assign_effect.mediump_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009563, VkglTestCase_009563_1, VkglTestCase_009563_2);

#define VkglTestCase_009564_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_009564_2 "_operator.add_assign_effect.highp_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009564, VkglTestCase_009564_1, VkglTestCase_009564_2);

#define VkglTestCase_009565_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_009565_2 "operator.add_assign_effect.highp_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009565, VkglTestCase_009565_1, VkglTestCase_009565_2);

#define VkglTestCase_009566_1 "dEQP-GLES3.functional.shaders.operator.binar"
#define VkglTestCase_009566_2 "y_operator.add_assign_effect.lowp_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009566, VkglTestCase_009566_1, VkglTestCase_009566_2);

#define VkglTestCase_009567_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_009567_2 "_operator.add_assign_effect.lowp_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009567, VkglTestCase_009567_1, VkglTestCase_009567_2);

#define VkglTestCase_009568_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_009568_2 "operator.add_assign_effect.mediump_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009568, VkglTestCase_009568_1, VkglTestCase_009568_2);

#define VkglTestCase_009569_1 "dEQP-GLES3.functional.shaders.operator.binary_o"
#define VkglTestCase_009569_2 "perator.add_assign_effect.mediump_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009569, VkglTestCase_009569_1, VkglTestCase_009569_2);

#define VkglTestCase_009570_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_009570_2 "_operator.add_assign_effect.highp_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009570, VkglTestCase_009570_1, VkglTestCase_009570_2);

#define VkglTestCase_009571_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_009571_2 "operator.add_assign_effect.highp_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009571, VkglTestCase_009571_1, VkglTestCase_009571_2);

#define VkglTestCase_009572_1 "dEQP-GLES3.functional.shaders.operator.binar"
#define VkglTestCase_009572_2 "y_operator.add_assign_effect.lowp_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009572, VkglTestCase_009572_1, VkglTestCase_009572_2);

#define VkglTestCase_009573_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_009573_2 "_operator.add_assign_effect.lowp_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009573, VkglTestCase_009573_1, VkglTestCase_009573_2);

#define VkglTestCase_009574_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_009574_2 "operator.add_assign_effect.mediump_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009574, VkglTestCase_009574_1, VkglTestCase_009574_2);

#define VkglTestCase_009575_1 "dEQP-GLES3.functional.shaders.operator.binary_o"
#define VkglTestCase_009575_2 "perator.add_assign_effect.mediump_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009575, VkglTestCase_009575_1, VkglTestCase_009575_2);

#define VkglTestCase_009576_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_009576_2 "_operator.add_assign_effect.highp_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009576, VkglTestCase_009576_1, VkglTestCase_009576_2);

#define VkglTestCase_009577_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_009577_2 "operator.add_assign_effect.highp_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009577, VkglTestCase_009577_1, VkglTestCase_009577_2);

#define VkglTestCase_009578_1 "dEQP-GLES3.functional.shaders.operator.binar"
#define VkglTestCase_009578_2 "y_operator.add_assign_effect.lowp_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009578, VkglTestCase_009578_1, VkglTestCase_009578_2);

#define VkglTestCase_009579_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_009579_2 "_operator.add_assign_effect.lowp_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009579, VkglTestCase_009579_1, VkglTestCase_009579_2);

#define VkglTestCase_009580_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_009580_2 "operator.add_assign_effect.mediump_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009580, VkglTestCase_009580_1, VkglTestCase_009580_2);

#define VkglTestCase_009581_1 "dEQP-GLES3.functional.shaders.operator.binary_o"
#define VkglTestCase_009581_2 "perator.add_assign_effect.mediump_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009581, VkglTestCase_009581_1, VkglTestCase_009581_2);

#define VkglTestCase_009582_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_009582_2 "_operator.add_assign_effect.highp_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009582, VkglTestCase_009582_1, VkglTestCase_009582_2);

#define VkglTestCase_009583_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_009583_2 "operator.add_assign_effect.highp_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009583, VkglTestCase_009583_1, VkglTestCase_009583_2);

#define VkglTestCase_009584_1 "dEQP-GLES3.functional.shaders.operator.binar"
#define VkglTestCase_009584_2 "y_operator.add_assign_effect.lowp_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009584, VkglTestCase_009584_1, VkglTestCase_009584_2);

#define VkglTestCase_009585_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_009585_2 "_operator.add_assign_effect.lowp_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009585, VkglTestCase_009585_1, VkglTestCase_009585_2);

#define VkglTestCase_009586_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_009586_2 "_operator.add_assign_effect.mediump_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009586, VkglTestCase_009586_1, VkglTestCase_009586_2);

#define VkglTestCase_009587_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_009587_2 "operator.add_assign_effect.mediump_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009587, VkglTestCase_009587_1, VkglTestCase_009587_2);

#define VkglTestCase_009588_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_009588_2 "_operator.add_assign_effect.lowp_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009588, VkglTestCase_009588_1, VkglTestCase_009588_2);

#define VkglTestCase_009589_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_009589_2 "operator.add_assign_effect.lowp_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009589, VkglTestCase_009589_1, VkglTestCase_009589_2);

#define VkglTestCase_009590_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_009590_2 "operator.add_assign_effect.mediump_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009590, VkglTestCase_009590_1, VkglTestCase_009590_2);

#define VkglTestCase_009591_1 "dEQP-GLES3.functional.shaders.operator.binary_o"
#define VkglTestCase_009591_2 "perator.add_assign_effect.mediump_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009591, VkglTestCase_009591_1, VkglTestCase_009591_2);

#define VkglTestCase_009592_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_009592_2 "_operator.add_assign_effect.lowp_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009592, VkglTestCase_009592_1, VkglTestCase_009592_2);

#define VkglTestCase_009593_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_009593_2 "operator.add_assign_effect.lowp_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009593, VkglTestCase_009593_1, VkglTestCase_009593_2);

#define VkglTestCase_009594_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_009594_2 "operator.add_assign_effect.mediump_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009594, VkglTestCase_009594_1, VkglTestCase_009594_2);

#define VkglTestCase_009595_1 "dEQP-GLES3.functional.shaders.operator.binary_o"
#define VkglTestCase_009595_2 "perator.add_assign_effect.mediump_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009595, VkglTestCase_009595_1, VkglTestCase_009595_2);

#define VkglTestCase_009596_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_009596_2 "_operator.add_assign_effect.lowp_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009596, VkglTestCase_009596_1, VkglTestCase_009596_2);

#define VkglTestCase_009597_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_009597_2 "operator.add_assign_effect.lowp_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009597, VkglTestCase_009597_1, VkglTestCase_009597_2);

#define VkglTestCase_009598_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_009598_2 "operator.add_assign_effect.mediump_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009598, VkglTestCase_009598_1, VkglTestCase_009598_2);

#define VkglTestCase_009599_1 "dEQP-GLES3.functional.shaders.operator.binary_o"
#define VkglTestCase_009599_2 "perator.add_assign_effect.mediump_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009599, VkglTestCase_009599_1, VkglTestCase_009599_2);

#define VkglTestCase_009600_1 "dEQP-GLES3.functional.shaders.operator.binar"
#define VkglTestCase_009600_2 "y_operator.add_assign_effect.highp_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009600, VkglTestCase_009600_1, VkglTestCase_009600_2);

#define VkglTestCase_009601_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_009601_2 "_operator.add_assign_effect.highp_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009601, VkglTestCase_009601_1, VkglTestCase_009601_2);

#define VkglTestCase_009602_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_009602_2 "_operator.add_assign_effect.highp_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009602, VkglTestCase_009602_1, VkglTestCase_009602_2);

#define VkglTestCase_009603_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_009603_2 "operator.add_assign_effect.highp_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009603, VkglTestCase_009603_1, VkglTestCase_009603_2);

#define VkglTestCase_009604_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_009604_2 "_operator.add_assign_effect.highp_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009604, VkglTestCase_009604_1, VkglTestCase_009604_2);

#define VkglTestCase_009605_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_009605_2 "operator.add_assign_effect.highp_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009605, VkglTestCase_009605_1, VkglTestCase_009605_2);

#define VkglTestCase_009606_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_009606_2 "_operator.add_assign_effect.highp_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009606, VkglTestCase_009606_1, VkglTestCase_009606_2);

#define VkglTestCase_009607_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_009607_2 "operator.add_assign_effect.highp_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009607, VkglTestCase_009607_1, VkglTestCase_009607_2);

#define VkglTestCase_009608_1 "dEQP-GLES3.functional.shaders.operator.binar"
#define VkglTestCase_009608_2 "y_operator.add_assign_effect.lowp_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009608, VkglTestCase_009608_1, VkglTestCase_009608_2);

#define VkglTestCase_009609_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_009609_2 "_operator.add_assign_effect.lowp_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009609, VkglTestCase_009609_1, VkglTestCase_009609_2);

#define VkglTestCase_009610_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_009610_2 "operator.add_assign_effect.mediump_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009610, VkglTestCase_009610_1, VkglTestCase_009610_2);

#define VkglTestCase_009611_1 "dEQP-GLES3.functional.shaders.operator.binary_o"
#define VkglTestCase_009611_2 "perator.add_assign_effect.mediump_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009611, VkglTestCase_009611_1, VkglTestCase_009611_2);

#define VkglTestCase_009612_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_009612_2 "_operator.add_assign_effect.lowp_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009612, VkglTestCase_009612_1, VkglTestCase_009612_2);

#define VkglTestCase_009613_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_009613_2 "operator.add_assign_effect.lowp_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009613, VkglTestCase_009613_1, VkglTestCase_009613_2);

#define VkglTestCase_009614_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_009614_2 "operator.add_assign_effect.mediump_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009614, VkglTestCase_009614_1, VkglTestCase_009614_2);

#define VkglTestCase_009615_1 "dEQP-GLES3.functional.shaders.operator.binary_o"
#define VkglTestCase_009615_2 "perator.add_assign_effect.mediump_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009615, VkglTestCase_009615_1, VkglTestCase_009615_2);

#define VkglTestCase_009616_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_009616_2 "_operator.add_assign_effect.lowp_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009616, VkglTestCase_009616_1, VkglTestCase_009616_2);

#define VkglTestCase_009617_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_009617_2 "operator.add_assign_effect.lowp_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009617, VkglTestCase_009617_1, VkglTestCase_009617_2);

#define VkglTestCase_009618_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_009618_2 "operator.add_assign_effect.mediump_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009618, VkglTestCase_009618_1, VkglTestCase_009618_2);

#define VkglTestCase_009619_1 "dEQP-GLES3.functional.shaders.operator.binary_o"
#define VkglTestCase_009619_2 "perator.add_assign_effect.mediump_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009619, VkglTestCase_009619_1, VkglTestCase_009619_2);

#define VkglTestCase_009620_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_009620_2 "_operator.add_assign_effect.lowp_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009620, VkglTestCase_009620_1, VkglTestCase_009620_2);

#define VkglTestCase_009621_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_009621_2 "operator.add_assign_effect.lowp_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009621, VkglTestCase_009621_1, VkglTestCase_009621_2);

#define VkglTestCase_009622_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_009622_2 "operator.add_assign_effect.mediump_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009622, VkglTestCase_009622_1, VkglTestCase_009622_2);

#define VkglTestCase_009623_1 "dEQP-GLES3.functional.shaders.operator.binary_o"
#define VkglTestCase_009623_2 "perator.add_assign_effect.mediump_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009623, VkglTestCase_009623_1, VkglTestCase_009623_2);

#define VkglTestCase_009624_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_009624_2 "_operator.add_assign_effect.highp_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009624, VkglTestCase_009624_1, VkglTestCase_009624_2);

#define VkglTestCase_009625_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_009625_2 "operator.add_assign_effect.highp_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009625, VkglTestCase_009625_1, VkglTestCase_009625_2);

#define VkglTestCase_009626_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_009626_2 "_operator.add_assign_effect.highp_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009626, VkglTestCase_009626_1, VkglTestCase_009626_2);

#define VkglTestCase_009627_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_009627_2 "operator.add_assign_effect.highp_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009627, VkglTestCase_009627_1, VkglTestCase_009627_2);

#define VkglTestCase_009628_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_009628_2 "_operator.add_assign_effect.highp_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009628, VkglTestCase_009628_1, VkglTestCase_009628_2);

#define VkglTestCase_009629_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_009629_2 "operator.add_assign_effect.highp_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009629, VkglTestCase_009629_1, VkglTestCase_009629_2);

#define VkglTestCase_009630_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_009630_2 "_operator.add_assign_effect.highp_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009630, VkglTestCase_009630_1, VkglTestCase_009630_2);

#define VkglTestCase_009631_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_009631_2 "operator.add_assign_effect.highp_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009631, VkglTestCase_009631_1, VkglTestCase_009631_2);

#define VkglTestCase_009632_1 "dEQP-GLES3.functional.shaders.operator.binary_o"
#define VkglTestCase_009632_2 "perator.add_assign_effect.lowp_vec2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009632, VkglTestCase_009632_1, VkglTestCase_009632_2);

#define VkglTestCase_009633_1 "dEQP-GLES3.functional.shaders.operator.binary_op"
#define VkglTestCase_009633_2 "erator.add_assign_effect.lowp_vec2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009633, VkglTestCase_009633_1, VkglTestCase_009633_2);

#define VkglTestCase_009634_1 "dEQP-GLES3.functional.shaders.operator.binary_ope"
#define VkglTestCase_009634_2 "rator.add_assign_effect.mediump_vec2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009634, VkglTestCase_009634_1, VkglTestCase_009634_2);

#define VkglTestCase_009635_1 "dEQP-GLES3.functional.shaders.operator.binary_oper"
#define VkglTestCase_009635_2 "ator.add_assign_effect.mediump_vec2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009635, VkglTestCase_009635_1, VkglTestCase_009635_2);

#define VkglTestCase_009636_1 "dEQP-GLES3.functional.shaders.operator.binary_op"
#define VkglTestCase_009636_2 "erator.add_assign_effect.highp_vec2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009636, VkglTestCase_009636_1, VkglTestCase_009636_2);

#define VkglTestCase_009637_1 "dEQP-GLES3.functional.shaders.operator.binary_ope"
#define VkglTestCase_009637_2 "rator.add_assign_effect.highp_vec2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009637, VkglTestCase_009637_1, VkglTestCase_009637_2);

#define VkglTestCase_009638_1 "dEQP-GLES3.functional.shaders.operator.binary_o"
#define VkglTestCase_009638_2 "perator.add_assign_effect.lowp_vec3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009638, VkglTestCase_009638_1, VkglTestCase_009638_2);

#define VkglTestCase_009639_1 "dEQP-GLES3.functional.shaders.operator.binary_op"
#define VkglTestCase_009639_2 "erator.add_assign_effect.lowp_vec3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009639, VkglTestCase_009639_1, VkglTestCase_009639_2);

#define VkglTestCase_009640_1 "dEQP-GLES3.functional.shaders.operator.binary_ope"
#define VkglTestCase_009640_2 "rator.add_assign_effect.mediump_vec3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009640, VkglTestCase_009640_1, VkglTestCase_009640_2);

#define VkglTestCase_009641_1 "dEQP-GLES3.functional.shaders.operator.binary_oper"
#define VkglTestCase_009641_2 "ator.add_assign_effect.mediump_vec3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009641, VkglTestCase_009641_1, VkglTestCase_009641_2);

#define VkglTestCase_009642_1 "dEQP-GLES3.functional.shaders.operator.binary_op"
#define VkglTestCase_009642_2 "erator.add_assign_effect.highp_vec3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009642, VkglTestCase_009642_1, VkglTestCase_009642_2);

#define VkglTestCase_009643_1 "dEQP-GLES3.functional.shaders.operator.binary_ope"
#define VkglTestCase_009643_2 "rator.add_assign_effect.highp_vec3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009643, VkglTestCase_009643_1, VkglTestCase_009643_2);

#define VkglTestCase_009644_1 "dEQP-GLES3.functional.shaders.operator.binary_o"
#define VkglTestCase_009644_2 "perator.add_assign_effect.lowp_vec4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009644, VkglTestCase_009644_1, VkglTestCase_009644_2);

#define VkglTestCase_009645_1 "dEQP-GLES3.functional.shaders.operator.binary_op"
#define VkglTestCase_009645_2 "erator.add_assign_effect.lowp_vec4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009645, VkglTestCase_009645_1, VkglTestCase_009645_2);

#define VkglTestCase_009646_1 "dEQP-GLES3.functional.shaders.operator.binary_ope"
#define VkglTestCase_009646_2 "rator.add_assign_effect.mediump_vec4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009646, VkglTestCase_009646_1, VkglTestCase_009646_2);

#define VkglTestCase_009647_1 "dEQP-GLES3.functional.shaders.operator.binary_oper"
#define VkglTestCase_009647_2 "ator.add_assign_effect.mediump_vec4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009647, VkglTestCase_009647_1, VkglTestCase_009647_2);

#define VkglTestCase_009648_1 "dEQP-GLES3.functional.shaders.operator.binary_op"
#define VkglTestCase_009648_2 "erator.add_assign_effect.highp_vec4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009648, VkglTestCase_009648_1, VkglTestCase_009648_2);

#define VkglTestCase_009649_1 "dEQP-GLES3.functional.shaders.operator.binary_ope"
#define VkglTestCase_009649_2 "rator.add_assign_effect.highp_vec4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009649, VkglTestCase_009649_1, VkglTestCase_009649_2);

#define VkglTestCase_009650_1 "dEQP-GLES3.functional.shaders.operator.binary_o"
#define VkglTestCase_009650_2 "perator.add_assign_effect.lowp_ivec2_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009650, VkglTestCase_009650_1, VkglTestCase_009650_2);

#define VkglTestCase_009651_1 "dEQP-GLES3.functional.shaders.operator.binary_op"
#define VkglTestCase_009651_2 "erator.add_assign_effect.lowp_ivec2_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009651, VkglTestCase_009651_1, VkglTestCase_009651_2);

#define VkglTestCase_009652_1 "dEQP-GLES3.functional.shaders.operator.binary_op"
#define VkglTestCase_009652_2 "erator.add_assign_effect.mediump_ivec2_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009652, VkglTestCase_009652_1, VkglTestCase_009652_2);

#define VkglTestCase_009653_1 "dEQP-GLES3.functional.shaders.operator.binary_ope"
#define VkglTestCase_009653_2 "rator.add_assign_effect.mediump_ivec2_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009653, VkglTestCase_009653_1, VkglTestCase_009653_2);

#define VkglTestCase_009654_1 "dEQP-GLES3.functional.shaders.operator.binary_o"
#define VkglTestCase_009654_2 "perator.add_assign_effect.lowp_ivec3_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009654, VkglTestCase_009654_1, VkglTestCase_009654_2);

#define VkglTestCase_009655_1 "dEQP-GLES3.functional.shaders.operator.binary_op"
#define VkglTestCase_009655_2 "erator.add_assign_effect.lowp_ivec3_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009655, VkglTestCase_009655_1, VkglTestCase_009655_2);

#define VkglTestCase_009656_1 "dEQP-GLES3.functional.shaders.operator.binary_op"
#define VkglTestCase_009656_2 "erator.add_assign_effect.mediump_ivec3_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009656, VkglTestCase_009656_1, VkglTestCase_009656_2);

#define VkglTestCase_009657_1 "dEQP-GLES3.functional.shaders.operator.binary_ope"
#define VkglTestCase_009657_2 "rator.add_assign_effect.mediump_ivec3_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009657, VkglTestCase_009657_1, VkglTestCase_009657_2);

#define VkglTestCase_009658_1 "dEQP-GLES3.functional.shaders.operator.binary_o"
#define VkglTestCase_009658_2 "perator.add_assign_effect.lowp_ivec4_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009658, VkglTestCase_009658_1, VkglTestCase_009658_2);

#define VkglTestCase_009659_1 "dEQP-GLES3.functional.shaders.operator.binary_op"
#define VkglTestCase_009659_2 "erator.add_assign_effect.lowp_ivec4_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009659, VkglTestCase_009659_1, VkglTestCase_009659_2);

#define VkglTestCase_009660_1 "dEQP-GLES3.functional.shaders.operator.binary_op"
#define VkglTestCase_009660_2 "erator.add_assign_effect.mediump_ivec4_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009660, VkglTestCase_009660_1, VkglTestCase_009660_2);

#define VkglTestCase_009661_1 "dEQP-GLES3.functional.shaders.operator.binary_ope"
#define VkglTestCase_009661_2 "rator.add_assign_effect.mediump_ivec4_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009661, VkglTestCase_009661_1, VkglTestCase_009661_2);

#define VkglTestCase_009662_1 "dEQP-GLES3.functional.shaders.operator.binary_o"
#define VkglTestCase_009662_2 "perator.add_assign_effect.highp_ivec2_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009662, VkglTestCase_009662_1, VkglTestCase_009662_2);

#define VkglTestCase_009663_1 "dEQP-GLES3.functional.shaders.operator.binary_op"
#define VkglTestCase_009663_2 "erator.add_assign_effect.highp_ivec2_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009663, VkglTestCase_009663_1, VkglTestCase_009663_2);

#define VkglTestCase_009664_1 "dEQP-GLES3.functional.shaders.operator.binary_o"
#define VkglTestCase_009664_2 "perator.add_assign_effect.highp_ivec3_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009664, VkglTestCase_009664_1, VkglTestCase_009664_2);

#define VkglTestCase_009665_1 "dEQP-GLES3.functional.shaders.operator.binary_op"
#define VkglTestCase_009665_2 "erator.add_assign_effect.highp_ivec3_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009665, VkglTestCase_009665_1, VkglTestCase_009665_2);

#define VkglTestCase_009666_1 "dEQP-GLES3.functional.shaders.operator.binary_o"
#define VkglTestCase_009666_2 "perator.add_assign_effect.highp_ivec4_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009666, VkglTestCase_009666_1, VkglTestCase_009666_2);

#define VkglTestCase_009667_1 "dEQP-GLES3.functional.shaders.operator.binary_op"
#define VkglTestCase_009667_2 "erator.add_assign_effect.highp_ivec4_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009667, VkglTestCase_009667_1, VkglTestCase_009667_2);

#define VkglTestCase_009668_1 "dEQP-GLES3.functional.shaders.operator.binary_o"
#define VkglTestCase_009668_2 "perator.add_assign_effect.lowp_uvec2_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009668, VkglTestCase_009668_1, VkglTestCase_009668_2);

#define VkglTestCase_009669_1 "dEQP-GLES3.functional.shaders.operator.binary_op"
#define VkglTestCase_009669_2 "erator.add_assign_effect.lowp_uvec2_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009669, VkglTestCase_009669_1, VkglTestCase_009669_2);

#define VkglTestCase_009670_1 "dEQP-GLES3.functional.shaders.operator.binary_ope"
#define VkglTestCase_009670_2 "rator.add_assign_effect.mediump_uvec2_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009670, VkglTestCase_009670_1, VkglTestCase_009670_2);

#define VkglTestCase_009671_1 "dEQP-GLES3.functional.shaders.operator.binary_oper"
#define VkglTestCase_009671_2 "ator.add_assign_effect.mediump_uvec2_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009671, VkglTestCase_009671_1, VkglTestCase_009671_2);

#define VkglTestCase_009672_1 "dEQP-GLES3.functional.shaders.operator.binary_o"
#define VkglTestCase_009672_2 "perator.add_assign_effect.lowp_uvec3_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009672, VkglTestCase_009672_1, VkglTestCase_009672_2);

#define VkglTestCase_009673_1 "dEQP-GLES3.functional.shaders.operator.binary_op"
#define VkglTestCase_009673_2 "erator.add_assign_effect.lowp_uvec3_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009673, VkglTestCase_009673_1, VkglTestCase_009673_2);

#define VkglTestCase_009674_1 "dEQP-GLES3.functional.shaders.operator.binary_ope"
#define VkglTestCase_009674_2 "rator.add_assign_effect.mediump_uvec3_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009674, VkglTestCase_009674_1, VkglTestCase_009674_2);

#define VkglTestCase_009675_1 "dEQP-GLES3.functional.shaders.operator.binary_oper"
#define VkglTestCase_009675_2 "ator.add_assign_effect.mediump_uvec3_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009675, VkglTestCase_009675_1, VkglTestCase_009675_2);

#define VkglTestCase_009676_1 "dEQP-GLES3.functional.shaders.operator.binary_o"
#define VkglTestCase_009676_2 "perator.add_assign_effect.lowp_uvec4_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009676, VkglTestCase_009676_1, VkglTestCase_009676_2);

#define VkglTestCase_009677_1 "dEQP-GLES3.functional.shaders.operator.binary_op"
#define VkglTestCase_009677_2 "erator.add_assign_effect.lowp_uvec4_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009677, VkglTestCase_009677_1, VkglTestCase_009677_2);

#define VkglTestCase_009678_1 "dEQP-GLES3.functional.shaders.operator.binary_ope"
#define VkglTestCase_009678_2 "rator.add_assign_effect.mediump_uvec4_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009678, VkglTestCase_009678_1, VkglTestCase_009678_2);

#define VkglTestCase_009679_1 "dEQP-GLES3.functional.shaders.operator.binary_oper"
#define VkglTestCase_009679_2 "ator.add_assign_effect.mediump_uvec4_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009679, VkglTestCase_009679_1, VkglTestCase_009679_2);

#define VkglTestCase_009680_1 "dEQP-GLES3.functional.shaders.operator.binary_op"
#define VkglTestCase_009680_2 "erator.add_assign_effect.highp_uvec2_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009680, VkglTestCase_009680_1, VkglTestCase_009680_2);

#define VkglTestCase_009681_1 "dEQP-GLES3.functional.shaders.operator.binary_ope"
#define VkglTestCase_009681_2 "rator.add_assign_effect.highp_uvec2_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009681, VkglTestCase_009681_1, VkglTestCase_009681_2);

#define VkglTestCase_009682_1 "dEQP-GLES3.functional.shaders.operator.binary_op"
#define VkglTestCase_009682_2 "erator.add_assign_effect.highp_uvec3_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009682, VkglTestCase_009682_1, VkglTestCase_009682_2);

#define VkglTestCase_009683_1 "dEQP-GLES3.functional.shaders.operator.binary_ope"
#define VkglTestCase_009683_2 "rator.add_assign_effect.highp_uvec3_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009683, VkglTestCase_009683_1, VkglTestCase_009683_2);

#define VkglTestCase_009684_1 "dEQP-GLES3.functional.shaders.operator.binary_op"
#define VkglTestCase_009684_2 "erator.add_assign_effect.highp_uvec4_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009684, VkglTestCase_009684_1, VkglTestCase_009684_2);

#define VkglTestCase_009685_1 "dEQP-GLES3.functional.shaders.operator.binary_ope"
#define VkglTestCase_009685_2 "rator.add_assign_effect.highp_uvec4_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009685, VkglTestCase_009685_1, VkglTestCase_009685_2);
