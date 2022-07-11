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
#include "../ActsDeqpgles30009TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_008564_1 "dEQP-GLES3.functional.shaders.operator"
#define VkglTestCase_008564_2 ".binary_operator.div.lowp_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008564, VkglTestCase_008564_1, VkglTestCase_008564_2);

#define VkglTestCase_008565_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_008565_2 "binary_operator.div.lowp_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008565, VkglTestCase_008565_1, VkglTestCase_008565_2);

#define VkglTestCase_008566_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_008566_2 "binary_operator.div.mediump_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008566, VkglTestCase_008566_1, VkglTestCase_008566_2);

#define VkglTestCase_008567_1 "dEQP-GLES3.functional.shaders.operator.b"
#define VkglTestCase_008567_2 "inary_operator.div.mediump_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008567, VkglTestCase_008567_1, VkglTestCase_008567_2);

#define VkglTestCase_008568_1 "dEQP-GLES3.functional.shaders.operator"
#define VkglTestCase_008568_2 ".binary_operator.div.highp_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008568, VkglTestCase_008568_1, VkglTestCase_008568_2);

#define VkglTestCase_008569_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_008569_2 "binary_operator.div.highp_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008569, VkglTestCase_008569_1, VkglTestCase_008569_2);

#define VkglTestCase_008570_1 "dEQP-GLES3.functional.shaders.operato"
#define VkglTestCase_008570_2 "r.binary_operator.div.lowp_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008570, VkglTestCase_008570_1, VkglTestCase_008570_2);

#define VkglTestCase_008571_1 "dEQP-GLES3.functional.shaders.operator"
#define VkglTestCase_008571_2 ".binary_operator.div.lowp_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008571, VkglTestCase_008571_1, VkglTestCase_008571_2);

#define VkglTestCase_008572_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_008572_2 "binary_operator.div.mediump_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008572, VkglTestCase_008572_1, VkglTestCase_008572_2);

#define VkglTestCase_008573_1 "dEQP-GLES3.functional.shaders.operator.b"
#define VkglTestCase_008573_2 "inary_operator.div.mediump_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008573, VkglTestCase_008573_1, VkglTestCase_008573_2);

#define VkglTestCase_008574_1 "dEQP-GLES3.functional.shaders.operator"
#define VkglTestCase_008574_2 ".binary_operator.div.highp_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008574, VkglTestCase_008574_1, VkglTestCase_008574_2);

#define VkglTestCase_008575_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_008575_2 "binary_operator.div.highp_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008575, VkglTestCase_008575_1, VkglTestCase_008575_2);

#define VkglTestCase_008576_1 "dEQP-GLES3.functional.shaders.operato"
#define VkglTestCase_008576_2 "r.binary_operator.div.lowp_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008576, VkglTestCase_008576_1, VkglTestCase_008576_2);

#define VkglTestCase_008577_1 "dEQP-GLES3.functional.shaders.operator"
#define VkglTestCase_008577_2 ".binary_operator.div.lowp_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008577, VkglTestCase_008577_1, VkglTestCase_008577_2);

#define VkglTestCase_008578_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_008578_2 "binary_operator.div.mediump_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008578, VkglTestCase_008578_1, VkglTestCase_008578_2);

#define VkglTestCase_008579_1 "dEQP-GLES3.functional.shaders.operator.b"
#define VkglTestCase_008579_2 "inary_operator.div.mediump_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008579, VkglTestCase_008579_1, VkglTestCase_008579_2);

#define VkglTestCase_008580_1 "dEQP-GLES3.functional.shaders.operator"
#define VkglTestCase_008580_2 ".binary_operator.div.highp_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008580, VkglTestCase_008580_1, VkglTestCase_008580_2);

#define VkglTestCase_008581_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_008581_2 "binary_operator.div.highp_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008581, VkglTestCase_008581_1, VkglTestCase_008581_2);

#define VkglTestCase_008582_1 "dEQP-GLES3.functional.shaders.operato"
#define VkglTestCase_008582_2 "r.binary_operator.div.lowp_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008582, VkglTestCase_008582_1, VkglTestCase_008582_2);

#define VkglTestCase_008583_1 "dEQP-GLES3.functional.shaders.operator"
#define VkglTestCase_008583_2 ".binary_operator.div.lowp_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008583, VkglTestCase_008583_1, VkglTestCase_008583_2);

#define VkglTestCase_008584_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_008584_2 "binary_operator.div.mediump_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008584, VkglTestCase_008584_1, VkglTestCase_008584_2);

#define VkglTestCase_008585_1 "dEQP-GLES3.functional.shaders.operator.b"
#define VkglTestCase_008585_2 "inary_operator.div.mediump_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008585, VkglTestCase_008585_1, VkglTestCase_008585_2);

#define VkglTestCase_008586_1 "dEQP-GLES3.functional.shaders.operator"
#define VkglTestCase_008586_2 ".binary_operator.div.highp_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008586, VkglTestCase_008586_1, VkglTestCase_008586_2);

#define VkglTestCase_008587_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_008587_2 "binary_operator.div.highp_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008587, VkglTestCase_008587_1, VkglTestCase_008587_2);

#define VkglTestCase_008588_1 "dEQP-GLES3.functional.shaders.operato"
#define VkglTestCase_008588_2 "r.binary_operator.div.lowp_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008588, VkglTestCase_008588_1, VkglTestCase_008588_2);

#define VkglTestCase_008589_1 "dEQP-GLES3.functional.shaders.operator"
#define VkglTestCase_008589_2 ".binary_operator.div.lowp_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008589, VkglTestCase_008589_1, VkglTestCase_008589_2);

#define VkglTestCase_008590_1 "dEQP-GLES3.functional.shaders.operator"
#define VkglTestCase_008590_2 ".binary_operator.div.mediump_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008590, VkglTestCase_008590_1, VkglTestCase_008590_2);

#define VkglTestCase_008591_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_008591_2 "binary_operator.div.mediump_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008591, VkglTestCase_008591_1, VkglTestCase_008591_2);

#define VkglTestCase_008592_1 "dEQP-GLES3.functional.shaders.operator"
#define VkglTestCase_008592_2 ".binary_operator.div.lowp_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008592, VkglTestCase_008592_1, VkglTestCase_008592_2);

#define VkglTestCase_008593_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_008593_2 "binary_operator.div.lowp_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008593, VkglTestCase_008593_1, VkglTestCase_008593_2);

#define VkglTestCase_008594_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_008594_2 "binary_operator.div.mediump_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008594, VkglTestCase_008594_1, VkglTestCase_008594_2);

#define VkglTestCase_008595_1 "dEQP-GLES3.functional.shaders.operator.b"
#define VkglTestCase_008595_2 "inary_operator.div.mediump_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008595, VkglTestCase_008595_1, VkglTestCase_008595_2);

#define VkglTestCase_008596_1 "dEQP-GLES3.functional.shaders.operator"
#define VkglTestCase_008596_2 ".binary_operator.div.lowp_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008596, VkglTestCase_008596_1, VkglTestCase_008596_2);

#define VkglTestCase_008597_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_008597_2 "binary_operator.div.lowp_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008597, VkglTestCase_008597_1, VkglTestCase_008597_2);

#define VkglTestCase_008598_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_008598_2 "binary_operator.div.mediump_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008598, VkglTestCase_008598_1, VkglTestCase_008598_2);

#define VkglTestCase_008599_1 "dEQP-GLES3.functional.shaders.operator.b"
#define VkglTestCase_008599_2 "inary_operator.div.mediump_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008599, VkglTestCase_008599_1, VkglTestCase_008599_2);

#define VkglTestCase_008600_1 "dEQP-GLES3.functional.shaders.operator"
#define VkglTestCase_008600_2 ".binary_operator.div.lowp_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008600, VkglTestCase_008600_1, VkglTestCase_008600_2);

#define VkglTestCase_008601_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_008601_2 "binary_operator.div.lowp_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008601, VkglTestCase_008601_1, VkglTestCase_008601_2);

#define VkglTestCase_008602_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_008602_2 "binary_operator.div.mediump_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008602, VkglTestCase_008602_1, VkglTestCase_008602_2);

#define VkglTestCase_008603_1 "dEQP-GLES3.functional.shaders.operator.b"
#define VkglTestCase_008603_2 "inary_operator.div.mediump_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008603, VkglTestCase_008603_1, VkglTestCase_008603_2);

#define VkglTestCase_008604_1 "dEQP-GLES3.functional.shaders.operato"
#define VkglTestCase_008604_2 "r.binary_operator.div.highp_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008604, VkglTestCase_008604_1, VkglTestCase_008604_2);

#define VkglTestCase_008605_1 "dEQP-GLES3.functional.shaders.operator"
#define VkglTestCase_008605_2 ".binary_operator.div.highp_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008605, VkglTestCase_008605_1, VkglTestCase_008605_2);

#define VkglTestCase_008606_1 "dEQP-GLES3.functional.shaders.operator"
#define VkglTestCase_008606_2 ".binary_operator.div.highp_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008606, VkglTestCase_008606_1, VkglTestCase_008606_2);

#define VkglTestCase_008607_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_008607_2 "binary_operator.div.highp_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008607, VkglTestCase_008607_1, VkglTestCase_008607_2);

#define VkglTestCase_008608_1 "dEQP-GLES3.functional.shaders.operator"
#define VkglTestCase_008608_2 ".binary_operator.div.highp_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008608, VkglTestCase_008608_1, VkglTestCase_008608_2);

#define VkglTestCase_008609_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_008609_2 "binary_operator.div.highp_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008609, VkglTestCase_008609_1, VkglTestCase_008609_2);

#define VkglTestCase_008610_1 "dEQP-GLES3.functional.shaders.operator"
#define VkglTestCase_008610_2 ".binary_operator.div.highp_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008610, VkglTestCase_008610_1, VkglTestCase_008610_2);

#define VkglTestCase_008611_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_008611_2 "binary_operator.div.highp_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008611, VkglTestCase_008611_1, VkglTestCase_008611_2);

#define VkglTestCase_008612_1 "dEQP-GLES3.functional.shaders.operato"
#define VkglTestCase_008612_2 "r.binary_operator.div.lowp_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008612, VkglTestCase_008612_1, VkglTestCase_008612_2);

#define VkglTestCase_008613_1 "dEQP-GLES3.functional.shaders.operator"
#define VkglTestCase_008613_2 ".binary_operator.div.lowp_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008613, VkglTestCase_008613_1, VkglTestCase_008613_2);

#define VkglTestCase_008614_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_008614_2 "binary_operator.div.mediump_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008614, VkglTestCase_008614_1, VkglTestCase_008614_2);

#define VkglTestCase_008615_1 "dEQP-GLES3.functional.shaders.operator.b"
#define VkglTestCase_008615_2 "inary_operator.div.mediump_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008615, VkglTestCase_008615_1, VkglTestCase_008615_2);

#define VkglTestCase_008616_1 "dEQP-GLES3.functional.shaders.operator"
#define VkglTestCase_008616_2 ".binary_operator.div.lowp_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008616, VkglTestCase_008616_1, VkglTestCase_008616_2);

#define VkglTestCase_008617_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_008617_2 "binary_operator.div.lowp_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008617, VkglTestCase_008617_1, VkglTestCase_008617_2);

#define VkglTestCase_008618_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_008618_2 "binary_operator.div.mediump_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008618, VkglTestCase_008618_1, VkglTestCase_008618_2);

#define VkglTestCase_008619_1 "dEQP-GLES3.functional.shaders.operator.b"
#define VkglTestCase_008619_2 "inary_operator.div.mediump_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008619, VkglTestCase_008619_1, VkglTestCase_008619_2);

#define VkglTestCase_008620_1 "dEQP-GLES3.functional.shaders.operator"
#define VkglTestCase_008620_2 ".binary_operator.div.lowp_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008620, VkglTestCase_008620_1, VkglTestCase_008620_2);

#define VkglTestCase_008621_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_008621_2 "binary_operator.div.lowp_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008621, VkglTestCase_008621_1, VkglTestCase_008621_2);

#define VkglTestCase_008622_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_008622_2 "binary_operator.div.mediump_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008622, VkglTestCase_008622_1, VkglTestCase_008622_2);

#define VkglTestCase_008623_1 "dEQP-GLES3.functional.shaders.operator.b"
#define VkglTestCase_008623_2 "inary_operator.div.mediump_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008623, VkglTestCase_008623_1, VkglTestCase_008623_2);

#define VkglTestCase_008624_1 "dEQP-GLES3.functional.shaders.operator"
#define VkglTestCase_008624_2 ".binary_operator.div.lowp_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008624, VkglTestCase_008624_1, VkglTestCase_008624_2);

#define VkglTestCase_008625_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_008625_2 "binary_operator.div.lowp_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008625, VkglTestCase_008625_1, VkglTestCase_008625_2);

#define VkglTestCase_008626_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_008626_2 "binary_operator.div.mediump_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008626, VkglTestCase_008626_1, VkglTestCase_008626_2);

#define VkglTestCase_008627_1 "dEQP-GLES3.functional.shaders.operator.b"
#define VkglTestCase_008627_2 "inary_operator.div.mediump_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008627, VkglTestCase_008627_1, VkglTestCase_008627_2);

#define VkglTestCase_008628_1 "dEQP-GLES3.functional.shaders.operator"
#define VkglTestCase_008628_2 ".binary_operator.div.highp_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008628, VkglTestCase_008628_1, VkglTestCase_008628_2);

#define VkglTestCase_008629_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_008629_2 "binary_operator.div.highp_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008629, VkglTestCase_008629_1, VkglTestCase_008629_2);

#define VkglTestCase_008630_1 "dEQP-GLES3.functional.shaders.operator"
#define VkglTestCase_008630_2 ".binary_operator.div.highp_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008630, VkglTestCase_008630_1, VkglTestCase_008630_2);

#define VkglTestCase_008631_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_008631_2 "binary_operator.div.highp_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008631, VkglTestCase_008631_1, VkglTestCase_008631_2);

#define VkglTestCase_008632_1 "dEQP-GLES3.functional.shaders.operator"
#define VkglTestCase_008632_2 ".binary_operator.div.highp_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008632, VkglTestCase_008632_1, VkglTestCase_008632_2);

#define VkglTestCase_008633_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_008633_2 "binary_operator.div.highp_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008633, VkglTestCase_008633_1, VkglTestCase_008633_2);

#define VkglTestCase_008634_1 "dEQP-GLES3.functional.shaders.operator"
#define VkglTestCase_008634_2 ".binary_operator.div.highp_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008634, VkglTestCase_008634_1, VkglTestCase_008634_2);

#define VkglTestCase_008635_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_008635_2 "binary_operator.div.highp_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008635, VkglTestCase_008635_1, VkglTestCase_008635_2);

#define VkglTestCase_008636_1 "dEQP-GLES3.functional.shaders.operator.b"
#define VkglTestCase_008636_2 "inary_operator.div.lowp_vec2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008636, VkglTestCase_008636_1, VkglTestCase_008636_2);

#define VkglTestCase_008637_1 "dEQP-GLES3.functional.shaders.operator.bi"
#define VkglTestCase_008637_2 "nary_operator.div.lowp_vec2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008637, VkglTestCase_008637_1, VkglTestCase_008637_2);

#define VkglTestCase_008638_1 "dEQP-GLES3.functional.shaders.operator.bin"
#define VkglTestCase_008638_2 "ary_operator.div.mediump_vec2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008638, VkglTestCase_008638_1, VkglTestCase_008638_2);

#define VkglTestCase_008639_1 "dEQP-GLES3.functional.shaders.operator.bina"
#define VkglTestCase_008639_2 "ry_operator.div.mediump_vec2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008639, VkglTestCase_008639_1, VkglTestCase_008639_2);

#define VkglTestCase_008640_1 "dEQP-GLES3.functional.shaders.operator.bi"
#define VkglTestCase_008640_2 "nary_operator.div.highp_vec2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008640, VkglTestCase_008640_1, VkglTestCase_008640_2);

#define VkglTestCase_008641_1 "dEQP-GLES3.functional.shaders.operator.bin"
#define VkglTestCase_008641_2 "ary_operator.div.highp_vec2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008641, VkglTestCase_008641_1, VkglTestCase_008641_2);

#define VkglTestCase_008642_1 "dEQP-GLES3.functional.shaders.operator.b"
#define VkglTestCase_008642_2 "inary_operator.div.lowp_vec3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008642, VkglTestCase_008642_1, VkglTestCase_008642_2);

#define VkglTestCase_008643_1 "dEQP-GLES3.functional.shaders.operator.bi"
#define VkglTestCase_008643_2 "nary_operator.div.lowp_vec3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008643, VkglTestCase_008643_1, VkglTestCase_008643_2);

#define VkglTestCase_008644_1 "dEQP-GLES3.functional.shaders.operator.bin"
#define VkglTestCase_008644_2 "ary_operator.div.mediump_vec3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008644, VkglTestCase_008644_1, VkglTestCase_008644_2);

#define VkglTestCase_008645_1 "dEQP-GLES3.functional.shaders.operator.bina"
#define VkglTestCase_008645_2 "ry_operator.div.mediump_vec3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008645, VkglTestCase_008645_1, VkglTestCase_008645_2);

#define VkglTestCase_008646_1 "dEQP-GLES3.functional.shaders.operator.bi"
#define VkglTestCase_008646_2 "nary_operator.div.highp_vec3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008646, VkglTestCase_008646_1, VkglTestCase_008646_2);

#define VkglTestCase_008647_1 "dEQP-GLES3.functional.shaders.operator.bin"
#define VkglTestCase_008647_2 "ary_operator.div.highp_vec3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008647, VkglTestCase_008647_1, VkglTestCase_008647_2);

#define VkglTestCase_008648_1 "dEQP-GLES3.functional.shaders.operator.b"
#define VkglTestCase_008648_2 "inary_operator.div.lowp_vec4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008648, VkglTestCase_008648_1, VkglTestCase_008648_2);

#define VkglTestCase_008649_1 "dEQP-GLES3.functional.shaders.operator.bi"
#define VkglTestCase_008649_2 "nary_operator.div.lowp_vec4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008649, VkglTestCase_008649_1, VkglTestCase_008649_2);

#define VkglTestCase_008650_1 "dEQP-GLES3.functional.shaders.operator.bin"
#define VkglTestCase_008650_2 "ary_operator.div.mediump_vec4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008650, VkglTestCase_008650_1, VkglTestCase_008650_2);

#define VkglTestCase_008651_1 "dEQP-GLES3.functional.shaders.operator.bina"
#define VkglTestCase_008651_2 "ry_operator.div.mediump_vec4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008651, VkglTestCase_008651_1, VkglTestCase_008651_2);

#define VkglTestCase_008652_1 "dEQP-GLES3.functional.shaders.operator.bi"
#define VkglTestCase_008652_2 "nary_operator.div.highp_vec4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008652, VkglTestCase_008652_1, VkglTestCase_008652_2);

#define VkglTestCase_008653_1 "dEQP-GLES3.functional.shaders.operator.bin"
#define VkglTestCase_008653_2 "ary_operator.div.highp_vec4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008653, VkglTestCase_008653_1, VkglTestCase_008653_2);

#define VkglTestCase_008654_1 "dEQP-GLES3.functional.shaders.operator.b"
#define VkglTestCase_008654_2 "inary_operator.div.lowp_ivec2_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008654, VkglTestCase_008654_1, VkglTestCase_008654_2);

#define VkglTestCase_008655_1 "dEQP-GLES3.functional.shaders.operator.bi"
#define VkglTestCase_008655_2 "nary_operator.div.lowp_ivec2_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008655, VkglTestCase_008655_1, VkglTestCase_008655_2);

#define VkglTestCase_008656_1 "dEQP-GLES3.functional.shaders.operator.bi"
#define VkglTestCase_008656_2 "nary_operator.div.mediump_ivec2_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008656, VkglTestCase_008656_1, VkglTestCase_008656_2);

#define VkglTestCase_008657_1 "dEQP-GLES3.functional.shaders.operator.bin"
#define VkglTestCase_008657_2 "ary_operator.div.mediump_ivec2_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008657, VkglTestCase_008657_1, VkglTestCase_008657_2);

#define VkglTestCase_008658_1 "dEQP-GLES3.functional.shaders.operator.b"
#define VkglTestCase_008658_2 "inary_operator.div.lowp_ivec3_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008658, VkglTestCase_008658_1, VkglTestCase_008658_2);

#define VkglTestCase_008659_1 "dEQP-GLES3.functional.shaders.operator.bi"
#define VkglTestCase_008659_2 "nary_operator.div.lowp_ivec3_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008659, VkglTestCase_008659_1, VkglTestCase_008659_2);

#define VkglTestCase_008660_1 "dEQP-GLES3.functional.shaders.operator.bi"
#define VkglTestCase_008660_2 "nary_operator.div.mediump_ivec3_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008660, VkglTestCase_008660_1, VkglTestCase_008660_2);

#define VkglTestCase_008661_1 "dEQP-GLES3.functional.shaders.operator.bin"
#define VkglTestCase_008661_2 "ary_operator.div.mediump_ivec3_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008661, VkglTestCase_008661_1, VkglTestCase_008661_2);

#define VkglTestCase_008662_1 "dEQP-GLES3.functional.shaders.operator.b"
#define VkglTestCase_008662_2 "inary_operator.div.lowp_ivec4_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008662, VkglTestCase_008662_1, VkglTestCase_008662_2);

#define VkglTestCase_008663_1 "dEQP-GLES3.functional.shaders.operator.bi"
#define VkglTestCase_008663_2 "nary_operator.div.lowp_ivec4_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008663, VkglTestCase_008663_1, VkglTestCase_008663_2);

#define VkglTestCase_008664_1 "dEQP-GLES3.functional.shaders.operator.bi"
#define VkglTestCase_008664_2 "nary_operator.div.mediump_ivec4_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008664, VkglTestCase_008664_1, VkglTestCase_008664_2);

#define VkglTestCase_008665_1 "dEQP-GLES3.functional.shaders.operator.bin"
#define VkglTestCase_008665_2 "ary_operator.div.mediump_ivec4_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008665, VkglTestCase_008665_1, VkglTestCase_008665_2);

#define VkglTestCase_008666_1 "dEQP-GLES3.functional.shaders.operator.b"
#define VkglTestCase_008666_2 "inary_operator.div.highp_ivec2_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008666, VkglTestCase_008666_1, VkglTestCase_008666_2);

#define VkglTestCase_008667_1 "dEQP-GLES3.functional.shaders.operator.bi"
#define VkglTestCase_008667_2 "nary_operator.div.highp_ivec2_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008667, VkglTestCase_008667_1, VkglTestCase_008667_2);

#define VkglTestCase_008668_1 "dEQP-GLES3.functional.shaders.operator.b"
#define VkglTestCase_008668_2 "inary_operator.div.highp_ivec3_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008668, VkglTestCase_008668_1, VkglTestCase_008668_2);

#define VkglTestCase_008669_1 "dEQP-GLES3.functional.shaders.operator.bi"
#define VkglTestCase_008669_2 "nary_operator.div.highp_ivec3_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008669, VkglTestCase_008669_1, VkglTestCase_008669_2);

#define VkglTestCase_008670_1 "dEQP-GLES3.functional.shaders.operator.b"
#define VkglTestCase_008670_2 "inary_operator.div.highp_ivec4_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008670, VkglTestCase_008670_1, VkglTestCase_008670_2);

#define VkglTestCase_008671_1 "dEQP-GLES3.functional.shaders.operator.bi"
#define VkglTestCase_008671_2 "nary_operator.div.highp_ivec4_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008671, VkglTestCase_008671_1, VkglTestCase_008671_2);

#define VkglTestCase_008672_1 "dEQP-GLES3.functional.shaders.operator.b"
#define VkglTestCase_008672_2 "inary_operator.div.lowp_uvec2_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008672, VkglTestCase_008672_1, VkglTestCase_008672_2);

#define VkglTestCase_008673_1 "dEQP-GLES3.functional.shaders.operator.bi"
#define VkglTestCase_008673_2 "nary_operator.div.lowp_uvec2_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008673, VkglTestCase_008673_1, VkglTestCase_008673_2);

#define VkglTestCase_008674_1 "dEQP-GLES3.functional.shaders.operator.bin"
#define VkglTestCase_008674_2 "ary_operator.div.mediump_uvec2_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008674, VkglTestCase_008674_1, VkglTestCase_008674_2);

#define VkglTestCase_008675_1 "dEQP-GLES3.functional.shaders.operator.bina"
#define VkglTestCase_008675_2 "ry_operator.div.mediump_uvec2_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008675, VkglTestCase_008675_1, VkglTestCase_008675_2);

#define VkglTestCase_008676_1 "dEQP-GLES3.functional.shaders.operator.b"
#define VkglTestCase_008676_2 "inary_operator.div.lowp_uvec3_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008676, VkglTestCase_008676_1, VkglTestCase_008676_2);

#define VkglTestCase_008677_1 "dEQP-GLES3.functional.shaders.operator.bi"
#define VkglTestCase_008677_2 "nary_operator.div.lowp_uvec3_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008677, VkglTestCase_008677_1, VkglTestCase_008677_2);

#define VkglTestCase_008678_1 "dEQP-GLES3.functional.shaders.operator.bin"
#define VkglTestCase_008678_2 "ary_operator.div.mediump_uvec3_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008678, VkglTestCase_008678_1, VkglTestCase_008678_2);

#define VkglTestCase_008679_1 "dEQP-GLES3.functional.shaders.operator.bina"
#define VkglTestCase_008679_2 "ry_operator.div.mediump_uvec3_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008679, VkglTestCase_008679_1, VkglTestCase_008679_2);

#define VkglTestCase_008680_1 "dEQP-GLES3.functional.shaders.operator.b"
#define VkglTestCase_008680_2 "inary_operator.div.lowp_uvec4_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008680, VkglTestCase_008680_1, VkglTestCase_008680_2);

#define VkglTestCase_008681_1 "dEQP-GLES3.functional.shaders.operator.bi"
#define VkglTestCase_008681_2 "nary_operator.div.lowp_uvec4_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008681, VkglTestCase_008681_1, VkglTestCase_008681_2);

#define VkglTestCase_008682_1 "dEQP-GLES3.functional.shaders.operator.bin"
#define VkglTestCase_008682_2 "ary_operator.div.mediump_uvec4_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008682, VkglTestCase_008682_1, VkglTestCase_008682_2);

#define VkglTestCase_008683_1 "dEQP-GLES3.functional.shaders.operator.bina"
#define VkglTestCase_008683_2 "ry_operator.div.mediump_uvec4_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008683, VkglTestCase_008683_1, VkglTestCase_008683_2);

#define VkglTestCase_008684_1 "dEQP-GLES3.functional.shaders.operator.bi"
#define VkglTestCase_008684_2 "nary_operator.div.highp_uvec2_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008684, VkglTestCase_008684_1, VkglTestCase_008684_2);

#define VkglTestCase_008685_1 "dEQP-GLES3.functional.shaders.operator.bin"
#define VkglTestCase_008685_2 "ary_operator.div.highp_uvec2_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008685, VkglTestCase_008685_1, VkglTestCase_008685_2);

#define VkglTestCase_008686_1 "dEQP-GLES3.functional.shaders.operator.bi"
#define VkglTestCase_008686_2 "nary_operator.div.highp_uvec3_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008686, VkglTestCase_008686_1, VkglTestCase_008686_2);

#define VkglTestCase_008687_1 "dEQP-GLES3.functional.shaders.operator.bin"
#define VkglTestCase_008687_2 "ary_operator.div.highp_uvec3_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008687, VkglTestCase_008687_1, VkglTestCase_008687_2);

#define VkglTestCase_008688_1 "dEQP-GLES3.functional.shaders.operator.bi"
#define VkglTestCase_008688_2 "nary_operator.div.highp_uvec4_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008688, VkglTestCase_008688_1, VkglTestCase_008688_2);

#define VkglTestCase_008689_1 "dEQP-GLES3.functional.shaders.operator.bin"
#define VkglTestCase_008689_2 "ary_operator.div.highp_uvec4_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008689, VkglTestCase_008689_1, VkglTestCase_008689_2);

#define VkglTestCase_008690_1 "dEQP-GLES3.functional.shaders.operator.b"
#define VkglTestCase_008690_2 "inary_operator.div.lowp_float_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008690, VkglTestCase_008690_1, VkglTestCase_008690_2);

#define VkglTestCase_008691_1 "dEQP-GLES3.functional.shaders.operator.bi"
#define VkglTestCase_008691_2 "nary_operator.div.lowp_float_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008691, VkglTestCase_008691_1, VkglTestCase_008691_2);

#define VkglTestCase_008692_1 "dEQP-GLES3.functional.shaders.operator.bin"
#define VkglTestCase_008692_2 "ary_operator.div.mediump_float_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008692, VkglTestCase_008692_1, VkglTestCase_008692_2);

#define VkglTestCase_008693_1 "dEQP-GLES3.functional.shaders.operator.bina"
#define VkglTestCase_008693_2 "ry_operator.div.mediump_float_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008693, VkglTestCase_008693_1, VkglTestCase_008693_2);

#define VkglTestCase_008694_1 "dEQP-GLES3.functional.shaders.operator.bi"
#define VkglTestCase_008694_2 "nary_operator.div.highp_float_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008694, VkglTestCase_008694_1, VkglTestCase_008694_2);

#define VkglTestCase_008695_1 "dEQP-GLES3.functional.shaders.operator.bin"
#define VkglTestCase_008695_2 "ary_operator.div.highp_float_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008695, VkglTestCase_008695_1, VkglTestCase_008695_2);

#define VkglTestCase_008696_1 "dEQP-GLES3.functional.shaders.operator.b"
#define VkglTestCase_008696_2 "inary_operator.div.lowp_float_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008696, VkglTestCase_008696_1, VkglTestCase_008696_2);

#define VkglTestCase_008697_1 "dEQP-GLES3.functional.shaders.operator.bi"
#define VkglTestCase_008697_2 "nary_operator.div.lowp_float_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008697, VkglTestCase_008697_1, VkglTestCase_008697_2);

#define VkglTestCase_008698_1 "dEQP-GLES3.functional.shaders.operator.bin"
#define VkglTestCase_008698_2 "ary_operator.div.mediump_float_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008698, VkglTestCase_008698_1, VkglTestCase_008698_2);

#define VkglTestCase_008699_1 "dEQP-GLES3.functional.shaders.operator.bina"
#define VkglTestCase_008699_2 "ry_operator.div.mediump_float_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008699, VkglTestCase_008699_1, VkglTestCase_008699_2);

#define VkglTestCase_008700_1 "dEQP-GLES3.functional.shaders.operator.bi"
#define VkglTestCase_008700_2 "nary_operator.div.highp_float_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008700, VkglTestCase_008700_1, VkglTestCase_008700_2);

#define VkglTestCase_008701_1 "dEQP-GLES3.functional.shaders.operator.bin"
#define VkglTestCase_008701_2 "ary_operator.div.highp_float_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008701, VkglTestCase_008701_1, VkglTestCase_008701_2);

#define VkglTestCase_008702_1 "dEQP-GLES3.functional.shaders.operator.b"
#define VkglTestCase_008702_2 "inary_operator.div.lowp_float_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008702, VkglTestCase_008702_1, VkglTestCase_008702_2);

#define VkglTestCase_008703_1 "dEQP-GLES3.functional.shaders.operator.bi"
#define VkglTestCase_008703_2 "nary_operator.div.lowp_float_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008703, VkglTestCase_008703_1, VkglTestCase_008703_2);

#define VkglTestCase_008704_1 "dEQP-GLES3.functional.shaders.operator.bin"
#define VkglTestCase_008704_2 "ary_operator.div.mediump_float_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008704, VkglTestCase_008704_1, VkglTestCase_008704_2);

#define VkglTestCase_008705_1 "dEQP-GLES3.functional.shaders.operator.bina"
#define VkglTestCase_008705_2 "ry_operator.div.mediump_float_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008705, VkglTestCase_008705_1, VkglTestCase_008705_2);

#define VkglTestCase_008706_1 "dEQP-GLES3.functional.shaders.operator.bi"
#define VkglTestCase_008706_2 "nary_operator.div.highp_float_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008706, VkglTestCase_008706_1, VkglTestCase_008706_2);

#define VkglTestCase_008707_1 "dEQP-GLES3.functional.shaders.operator.bin"
#define VkglTestCase_008707_2 "ary_operator.div.highp_float_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008707, VkglTestCase_008707_1, VkglTestCase_008707_2);

#define VkglTestCase_008708_1 "dEQP-GLES3.functional.shaders.operator.b"
#define VkglTestCase_008708_2 "inary_operator.div.lowp_int_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008708, VkglTestCase_008708_1, VkglTestCase_008708_2);

#define VkglTestCase_008709_1 "dEQP-GLES3.functional.shaders.operator.bi"
#define VkglTestCase_008709_2 "nary_operator.div.lowp_int_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008709, VkglTestCase_008709_1, VkglTestCase_008709_2);

#define VkglTestCase_008710_1 "dEQP-GLES3.functional.shaders.operator.bi"
#define VkglTestCase_008710_2 "nary_operator.div.mediump_int_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008710, VkglTestCase_008710_1, VkglTestCase_008710_2);

#define VkglTestCase_008711_1 "dEQP-GLES3.functional.shaders.operator.bin"
#define VkglTestCase_008711_2 "ary_operator.div.mediump_int_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008711, VkglTestCase_008711_1, VkglTestCase_008711_2);

#define VkglTestCase_008712_1 "dEQP-GLES3.functional.shaders.operator.b"
#define VkglTestCase_008712_2 "inary_operator.div.lowp_int_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008712, VkglTestCase_008712_1, VkglTestCase_008712_2);

#define VkglTestCase_008713_1 "dEQP-GLES3.functional.shaders.operator.bi"
#define VkglTestCase_008713_2 "nary_operator.div.lowp_int_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008713, VkglTestCase_008713_1, VkglTestCase_008713_2);

#define VkglTestCase_008714_1 "dEQP-GLES3.functional.shaders.operator.bi"
#define VkglTestCase_008714_2 "nary_operator.div.mediump_int_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008714, VkglTestCase_008714_1, VkglTestCase_008714_2);

#define VkglTestCase_008715_1 "dEQP-GLES3.functional.shaders.operator.bin"
#define VkglTestCase_008715_2 "ary_operator.div.mediump_int_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008715, VkglTestCase_008715_1, VkglTestCase_008715_2);

#define VkglTestCase_008716_1 "dEQP-GLES3.functional.shaders.operator.b"
#define VkglTestCase_008716_2 "inary_operator.div.lowp_int_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008716, VkglTestCase_008716_1, VkglTestCase_008716_2);

#define VkglTestCase_008717_1 "dEQP-GLES3.functional.shaders.operator.bi"
#define VkglTestCase_008717_2 "nary_operator.div.lowp_int_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008717, VkglTestCase_008717_1, VkglTestCase_008717_2);

#define VkglTestCase_008718_1 "dEQP-GLES3.functional.shaders.operator.bi"
#define VkglTestCase_008718_2 "nary_operator.div.mediump_int_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008718, VkglTestCase_008718_1, VkglTestCase_008718_2);

#define VkglTestCase_008719_1 "dEQP-GLES3.functional.shaders.operator.bin"
#define VkglTestCase_008719_2 "ary_operator.div.mediump_int_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008719, VkglTestCase_008719_1, VkglTestCase_008719_2);

#define VkglTestCase_008720_1 "dEQP-GLES3.functional.shaders.operator.b"
#define VkglTestCase_008720_2 "inary_operator.div.highp_int_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008720, VkglTestCase_008720_1, VkglTestCase_008720_2);

#define VkglTestCase_008721_1 "dEQP-GLES3.functional.shaders.operator.bi"
#define VkglTestCase_008721_2 "nary_operator.div.highp_int_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008721, VkglTestCase_008721_1, VkglTestCase_008721_2);

#define VkglTestCase_008722_1 "dEQP-GLES3.functional.shaders.operator.b"
#define VkglTestCase_008722_2 "inary_operator.div.highp_int_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008722, VkglTestCase_008722_1, VkglTestCase_008722_2);

#define VkglTestCase_008723_1 "dEQP-GLES3.functional.shaders.operator.bi"
#define VkglTestCase_008723_2 "nary_operator.div.highp_int_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008723, VkglTestCase_008723_1, VkglTestCase_008723_2);

#define VkglTestCase_008724_1 "dEQP-GLES3.functional.shaders.operator.b"
#define VkglTestCase_008724_2 "inary_operator.div.highp_int_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008724, VkglTestCase_008724_1, VkglTestCase_008724_2);

#define VkglTestCase_008725_1 "dEQP-GLES3.functional.shaders.operator.bi"
#define VkglTestCase_008725_2 "nary_operator.div.highp_int_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008725, VkglTestCase_008725_1, VkglTestCase_008725_2);

#define VkglTestCase_008726_1 "dEQP-GLES3.functional.shaders.operator.b"
#define VkglTestCase_008726_2 "inary_operator.div.lowp_uint_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008726, VkglTestCase_008726_1, VkglTestCase_008726_2);

#define VkglTestCase_008727_1 "dEQP-GLES3.functional.shaders.operator.bi"
#define VkglTestCase_008727_2 "nary_operator.div.lowp_uint_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008727, VkglTestCase_008727_1, VkglTestCase_008727_2);

#define VkglTestCase_008728_1 "dEQP-GLES3.functional.shaders.operator.bin"
#define VkglTestCase_008728_2 "ary_operator.div.mediump_uint_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008728, VkglTestCase_008728_1, VkglTestCase_008728_2);

#define VkglTestCase_008729_1 "dEQP-GLES3.functional.shaders.operator.bina"
#define VkglTestCase_008729_2 "ry_operator.div.mediump_uint_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008729, VkglTestCase_008729_1, VkglTestCase_008729_2);

#define VkglTestCase_008730_1 "dEQP-GLES3.functional.shaders.operator.b"
#define VkglTestCase_008730_2 "inary_operator.div.lowp_uint_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008730, VkglTestCase_008730_1, VkglTestCase_008730_2);

#define VkglTestCase_008731_1 "dEQP-GLES3.functional.shaders.operator.bi"
#define VkglTestCase_008731_2 "nary_operator.div.lowp_uint_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008731, VkglTestCase_008731_1, VkglTestCase_008731_2);

#define VkglTestCase_008732_1 "dEQP-GLES3.functional.shaders.operator.bin"
#define VkglTestCase_008732_2 "ary_operator.div.mediump_uint_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008732, VkglTestCase_008732_1, VkglTestCase_008732_2);

#define VkglTestCase_008733_1 "dEQP-GLES3.functional.shaders.operator.bina"
#define VkglTestCase_008733_2 "ry_operator.div.mediump_uint_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008733, VkglTestCase_008733_1, VkglTestCase_008733_2);

#define VkglTestCase_008734_1 "dEQP-GLES3.functional.shaders.operator.b"
#define VkglTestCase_008734_2 "inary_operator.div.lowp_uint_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008734, VkglTestCase_008734_1, VkglTestCase_008734_2);

#define VkglTestCase_008735_1 "dEQP-GLES3.functional.shaders.operator.bi"
#define VkglTestCase_008735_2 "nary_operator.div.lowp_uint_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008735, VkglTestCase_008735_1, VkglTestCase_008735_2);

#define VkglTestCase_008736_1 "dEQP-GLES3.functional.shaders.operator.bin"
#define VkglTestCase_008736_2 "ary_operator.div.mediump_uint_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008736, VkglTestCase_008736_1, VkglTestCase_008736_2);

#define VkglTestCase_008737_1 "dEQP-GLES3.functional.shaders.operator.bina"
#define VkglTestCase_008737_2 "ry_operator.div.mediump_uint_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008737, VkglTestCase_008737_1, VkglTestCase_008737_2);

#define VkglTestCase_008738_1 "dEQP-GLES3.functional.shaders.operator.bi"
#define VkglTestCase_008738_2 "nary_operator.div.highp_uint_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008738, VkglTestCase_008738_1, VkglTestCase_008738_2);

#define VkglTestCase_008739_1 "dEQP-GLES3.functional.shaders.operator.bin"
#define VkglTestCase_008739_2 "ary_operator.div.highp_uint_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008739, VkglTestCase_008739_1, VkglTestCase_008739_2);

#define VkglTestCase_008740_1 "dEQP-GLES3.functional.shaders.operator.bi"
#define VkglTestCase_008740_2 "nary_operator.div.highp_uint_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008740, VkglTestCase_008740_1, VkglTestCase_008740_2);

#define VkglTestCase_008741_1 "dEQP-GLES3.functional.shaders.operator.bin"
#define VkglTestCase_008741_2 "ary_operator.div.highp_uint_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008741, VkglTestCase_008741_1, VkglTestCase_008741_2);

#define VkglTestCase_008742_1 "dEQP-GLES3.functional.shaders.operator.bi"
#define VkglTestCase_008742_2 "nary_operator.div.highp_uint_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008742, VkglTestCase_008742_1, VkglTestCase_008742_2);

#define VkglTestCase_008743_1 "dEQP-GLES3.functional.shaders.operator.bin"
#define VkglTestCase_008743_2 "ary_operator.div.highp_uint_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008743, VkglTestCase_008743_1, VkglTestCase_008743_2);
