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
#include "../ActsDeqpgles30041TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_040548_1 "dEQP-GLES3.functional.transform_feedbac"
#define VkglTestCase_040548_2 "k.basic_types.separate.points.lowp_float"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040548, VkglTestCase_040548_1, VkglTestCase_040548_2);

#define VkglTestCase_040549_1 "dEQP-GLES3.functional.transform_feedback."
#define VkglTestCase_040549_2 "basic_types.separate.points.mediump_float"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040549, VkglTestCase_040549_1, VkglTestCase_040549_2);

#define VkglTestCase_040550_1 "dEQP-GLES3.functional.transform_feedback"
#define VkglTestCase_040550_2 ".basic_types.separate.points.highp_float"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040550, VkglTestCase_040550_1, VkglTestCase_040550_2);

#define VkglTestCase_040551_1 "dEQP-GLES3.functional.transform_feedbac"
#define VkglTestCase_040551_2 "k.basic_types.separate.points.lowp_vec2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040551, VkglTestCase_040551_1, VkglTestCase_040551_2);

#define VkglTestCase_040552_1 "dEQP-GLES3.functional.transform_feedback"
#define VkglTestCase_040552_2 ".basic_types.separate.points.mediump_vec2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040552, VkglTestCase_040552_1, VkglTestCase_040552_2);

#define VkglTestCase_040553_1 "dEQP-GLES3.functional.transform_feedbac"
#define VkglTestCase_040553_2 "k.basic_types.separate.points.highp_vec2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040553, VkglTestCase_040553_1, VkglTestCase_040553_2);

#define VkglTestCase_040554_1 "dEQP-GLES3.functional.transform_feedbac"
#define VkglTestCase_040554_2 "k.basic_types.separate.points.lowp_vec3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040554, VkglTestCase_040554_1, VkglTestCase_040554_2);

#define VkglTestCase_040555_1 "dEQP-GLES3.functional.transform_feedback"
#define VkglTestCase_040555_2 ".basic_types.separate.points.mediump_vec3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040555, VkglTestCase_040555_1, VkglTestCase_040555_2);

#define VkglTestCase_040556_1 "dEQP-GLES3.functional.transform_feedbac"
#define VkglTestCase_040556_2 "k.basic_types.separate.points.highp_vec3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040556, VkglTestCase_040556_1, VkglTestCase_040556_2);

#define VkglTestCase_040557_1 "dEQP-GLES3.functional.transform_feedbac"
#define VkglTestCase_040557_2 "k.basic_types.separate.points.lowp_vec4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040557, VkglTestCase_040557_1, VkglTestCase_040557_2);

#define VkglTestCase_040558_1 "dEQP-GLES3.functional.transform_feedback"
#define VkglTestCase_040558_2 ".basic_types.separate.points.mediump_vec4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040558, VkglTestCase_040558_1, VkglTestCase_040558_2);

#define VkglTestCase_040559_1 "dEQP-GLES3.functional.transform_feedbac"
#define VkglTestCase_040559_2 "k.basic_types.separate.points.highp_vec4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040559, VkglTestCase_040559_1, VkglTestCase_040559_2);

#define VkglTestCase_040560_1 "dEQP-GLES3.functional.transform_feedbac"
#define VkglTestCase_040560_2 "k.basic_types.separate.points.lowp_mat2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040560, VkglTestCase_040560_1, VkglTestCase_040560_2);

#define VkglTestCase_040561_1 "dEQP-GLES3.functional.transform_feedback"
#define VkglTestCase_040561_2 ".basic_types.separate.points.mediump_mat2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040561, VkglTestCase_040561_1, VkglTestCase_040561_2);

#define VkglTestCase_040562_1 "dEQP-GLES3.functional.transform_feedbac"
#define VkglTestCase_040562_2 "k.basic_types.separate.points.highp_mat2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040562, VkglTestCase_040562_1, VkglTestCase_040562_2);

#define VkglTestCase_040563_1 "dEQP-GLES3.functional.transform_feedback"
#define VkglTestCase_040563_2 ".basic_types.separate.points.lowp_mat2x3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040563, VkglTestCase_040563_1, VkglTestCase_040563_2);

#define VkglTestCase_040564_1 "dEQP-GLES3.functional.transform_feedback."
#define VkglTestCase_040564_2 "basic_types.separate.points.mediump_mat2x3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040564, VkglTestCase_040564_1, VkglTestCase_040564_2);

#define VkglTestCase_040565_1 "dEQP-GLES3.functional.transform_feedback"
#define VkglTestCase_040565_2 ".basic_types.separate.points.highp_mat2x3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040565, VkglTestCase_040565_1, VkglTestCase_040565_2);

#define VkglTestCase_040566_1 "dEQP-GLES3.functional.transform_feedback"
#define VkglTestCase_040566_2 ".basic_types.separate.points.lowp_mat2x4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040566, VkglTestCase_040566_1, VkglTestCase_040566_2);

#define VkglTestCase_040567_1 "dEQP-GLES3.functional.transform_feedback."
#define VkglTestCase_040567_2 "basic_types.separate.points.mediump_mat2x4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040567, VkglTestCase_040567_1, VkglTestCase_040567_2);

#define VkglTestCase_040568_1 "dEQP-GLES3.functional.transform_feedback"
#define VkglTestCase_040568_2 ".basic_types.separate.points.highp_mat2x4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040568, VkglTestCase_040568_1, VkglTestCase_040568_2);

#define VkglTestCase_040569_1 "dEQP-GLES3.functional.transform_feedback"
#define VkglTestCase_040569_2 ".basic_types.separate.points.lowp_mat3x2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040569, VkglTestCase_040569_1, VkglTestCase_040569_2);

#define VkglTestCase_040570_1 "dEQP-GLES3.functional.transform_feedback."
#define VkglTestCase_040570_2 "basic_types.separate.points.mediump_mat3x2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040570, VkglTestCase_040570_1, VkglTestCase_040570_2);

#define VkglTestCase_040571_1 "dEQP-GLES3.functional.transform_feedback"
#define VkglTestCase_040571_2 ".basic_types.separate.points.highp_mat3x2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040571, VkglTestCase_040571_1, VkglTestCase_040571_2);

#define VkglTestCase_040572_1 "dEQP-GLES3.functional.transform_feedbac"
#define VkglTestCase_040572_2 "k.basic_types.separate.points.lowp_mat3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040572, VkglTestCase_040572_1, VkglTestCase_040572_2);

#define VkglTestCase_040573_1 "dEQP-GLES3.functional.transform_feedback"
#define VkglTestCase_040573_2 ".basic_types.separate.points.mediump_mat3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040573, VkglTestCase_040573_1, VkglTestCase_040573_2);

#define VkglTestCase_040574_1 "dEQP-GLES3.functional.transform_feedbac"
#define VkglTestCase_040574_2 "k.basic_types.separate.points.highp_mat3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040574, VkglTestCase_040574_1, VkglTestCase_040574_2);

#define VkglTestCase_040575_1 "dEQP-GLES3.functional.transform_feedback"
#define VkglTestCase_040575_2 ".basic_types.separate.points.lowp_mat3x4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040575, VkglTestCase_040575_1, VkglTestCase_040575_2);

#define VkglTestCase_040576_1 "dEQP-GLES3.functional.transform_feedback."
#define VkglTestCase_040576_2 "basic_types.separate.points.mediump_mat3x4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040576, VkglTestCase_040576_1, VkglTestCase_040576_2);

#define VkglTestCase_040577_1 "dEQP-GLES3.functional.transform_feedback"
#define VkglTestCase_040577_2 ".basic_types.separate.points.highp_mat3x4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040577, VkglTestCase_040577_1, VkglTestCase_040577_2);

#define VkglTestCase_040578_1 "dEQP-GLES3.functional.transform_feedback"
#define VkglTestCase_040578_2 ".basic_types.separate.points.lowp_mat4x2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040578, VkglTestCase_040578_1, VkglTestCase_040578_2);

#define VkglTestCase_040579_1 "dEQP-GLES3.functional.transform_feedback."
#define VkglTestCase_040579_2 "basic_types.separate.points.mediump_mat4x2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040579, VkglTestCase_040579_1, VkglTestCase_040579_2);

#define VkglTestCase_040580_1 "dEQP-GLES3.functional.transform_feedback"
#define VkglTestCase_040580_2 ".basic_types.separate.points.highp_mat4x2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040580, VkglTestCase_040580_1, VkglTestCase_040580_2);

#define VkglTestCase_040581_1 "dEQP-GLES3.functional.transform_feedback"
#define VkglTestCase_040581_2 ".basic_types.separate.points.lowp_mat4x3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040581, VkglTestCase_040581_1, VkglTestCase_040581_2);

#define VkglTestCase_040582_1 "dEQP-GLES3.functional.transform_feedback."
#define VkglTestCase_040582_2 "basic_types.separate.points.mediump_mat4x3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040582, VkglTestCase_040582_1, VkglTestCase_040582_2);

#define VkglTestCase_040583_1 "dEQP-GLES3.functional.transform_feedback"
#define VkglTestCase_040583_2 ".basic_types.separate.points.highp_mat4x3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040583, VkglTestCase_040583_1, VkglTestCase_040583_2);

#define VkglTestCase_040584_1 "dEQP-GLES3.functional.transform_feedbac"
#define VkglTestCase_040584_2 "k.basic_types.separate.points.lowp_mat4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040584, VkglTestCase_040584_1, VkglTestCase_040584_2);

#define VkglTestCase_040585_1 "dEQP-GLES3.functional.transform_feedback"
#define VkglTestCase_040585_2 ".basic_types.separate.points.mediump_mat4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040585, VkglTestCase_040585_1, VkglTestCase_040585_2);

#define VkglTestCase_040586_1 "dEQP-GLES3.functional.transform_feedbac"
#define VkglTestCase_040586_2 "k.basic_types.separate.points.highp_mat4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040586, VkglTestCase_040586_1, VkglTestCase_040586_2);

#define VkglTestCase_040587_1 "dEQP-GLES3.functional.transform_feedba"
#define VkglTestCase_040587_2 "ck.basic_types.separate.points.lowp_int"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040587, VkglTestCase_040587_1, VkglTestCase_040587_2);

#define VkglTestCase_040588_1 "dEQP-GLES3.functional.transform_feedback"
#define VkglTestCase_040588_2 ".basic_types.separate.points.mediump_int"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040588, VkglTestCase_040588_1, VkglTestCase_040588_2);

#define VkglTestCase_040589_1 "dEQP-GLES3.functional.transform_feedbac"
#define VkglTestCase_040589_2 "k.basic_types.separate.points.highp_int"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040589, VkglTestCase_040589_1, VkglTestCase_040589_2);

#define VkglTestCase_040590_1 "dEQP-GLES3.functional.transform_feedbac"
#define VkglTestCase_040590_2 "k.basic_types.separate.points.lowp_ivec2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040590, VkglTestCase_040590_1, VkglTestCase_040590_2);

#define VkglTestCase_040591_1 "dEQP-GLES3.functional.transform_feedback."
#define VkglTestCase_040591_2 "basic_types.separate.points.mediump_ivec2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040591, VkglTestCase_040591_1, VkglTestCase_040591_2);

#define VkglTestCase_040592_1 "dEQP-GLES3.functional.transform_feedback"
#define VkglTestCase_040592_2 ".basic_types.separate.points.highp_ivec2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040592, VkglTestCase_040592_1, VkglTestCase_040592_2);

#define VkglTestCase_040593_1 "dEQP-GLES3.functional.transform_feedbac"
#define VkglTestCase_040593_2 "k.basic_types.separate.points.lowp_ivec3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040593, VkglTestCase_040593_1, VkglTestCase_040593_2);

#define VkglTestCase_040594_1 "dEQP-GLES3.functional.transform_feedback."
#define VkglTestCase_040594_2 "basic_types.separate.points.mediump_ivec3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040594, VkglTestCase_040594_1, VkglTestCase_040594_2);

#define VkglTestCase_040595_1 "dEQP-GLES3.functional.transform_feedback"
#define VkglTestCase_040595_2 ".basic_types.separate.points.highp_ivec3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040595, VkglTestCase_040595_1, VkglTestCase_040595_2);

#define VkglTestCase_040596_1 "dEQP-GLES3.functional.transform_feedbac"
#define VkglTestCase_040596_2 "k.basic_types.separate.points.lowp_ivec4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040596, VkglTestCase_040596_1, VkglTestCase_040596_2);

#define VkglTestCase_040597_1 "dEQP-GLES3.functional.transform_feedback."
#define VkglTestCase_040597_2 "basic_types.separate.points.mediump_ivec4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040597, VkglTestCase_040597_1, VkglTestCase_040597_2);

#define VkglTestCase_040598_1 "dEQP-GLES3.functional.transform_feedback"
#define VkglTestCase_040598_2 ".basic_types.separate.points.highp_ivec4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040598, VkglTestCase_040598_1, VkglTestCase_040598_2);

#define VkglTestCase_040599_1 "dEQP-GLES3.functional.transform_feedbac"
#define VkglTestCase_040599_2 "k.basic_types.separate.points.lowp_uint"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040599, VkglTestCase_040599_1, VkglTestCase_040599_2);

#define VkglTestCase_040600_1 "dEQP-GLES3.functional.transform_feedback"
#define VkglTestCase_040600_2 ".basic_types.separate.points.mediump_uint"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040600, VkglTestCase_040600_1, VkglTestCase_040600_2);

#define VkglTestCase_040601_1 "dEQP-GLES3.functional.transform_feedbac"
#define VkglTestCase_040601_2 "k.basic_types.separate.points.highp_uint"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040601, VkglTestCase_040601_1, VkglTestCase_040601_2);

#define VkglTestCase_040602_1 "dEQP-GLES3.functional.transform_feedbac"
#define VkglTestCase_040602_2 "k.basic_types.separate.points.lowp_uvec2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040602, VkglTestCase_040602_1, VkglTestCase_040602_2);

#define VkglTestCase_040603_1 "dEQP-GLES3.functional.transform_feedback."
#define VkglTestCase_040603_2 "basic_types.separate.points.mediump_uvec2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040603, VkglTestCase_040603_1, VkglTestCase_040603_2);

#define VkglTestCase_040604_1 "dEQP-GLES3.functional.transform_feedback"
#define VkglTestCase_040604_2 ".basic_types.separate.points.highp_uvec2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040604, VkglTestCase_040604_1, VkglTestCase_040604_2);

#define VkglTestCase_040605_1 "dEQP-GLES3.functional.transform_feedbac"
#define VkglTestCase_040605_2 "k.basic_types.separate.points.lowp_uvec3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040605, VkglTestCase_040605_1, VkglTestCase_040605_2);

#define VkglTestCase_040606_1 "dEQP-GLES3.functional.transform_feedback."
#define VkglTestCase_040606_2 "basic_types.separate.points.mediump_uvec3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040606, VkglTestCase_040606_1, VkglTestCase_040606_2);

#define VkglTestCase_040607_1 "dEQP-GLES3.functional.transform_feedback"
#define VkglTestCase_040607_2 ".basic_types.separate.points.highp_uvec3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040607, VkglTestCase_040607_1, VkglTestCase_040607_2);

#define VkglTestCase_040608_1 "dEQP-GLES3.functional.transform_feedbac"
#define VkglTestCase_040608_2 "k.basic_types.separate.points.lowp_uvec4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040608, VkglTestCase_040608_1, VkglTestCase_040608_2);

#define VkglTestCase_040609_1 "dEQP-GLES3.functional.transform_feedback."
#define VkglTestCase_040609_2 "basic_types.separate.points.mediump_uvec4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040609, VkglTestCase_040609_1, VkglTestCase_040609_2);

#define VkglTestCase_040610_1 "dEQP-GLES3.functional.transform_feedback"
#define VkglTestCase_040610_2 ".basic_types.separate.points.highp_uvec4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040610, VkglTestCase_040610_1, VkglTestCase_040610_2);

#define VkglTestCase_040926_1 "dEQP-GLES3.functional.transform_feed"
#define VkglTestCase_040926_2 "back.array.separate.points.lowp_float"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040926, VkglTestCase_040926_1, VkglTestCase_040926_2);

#define VkglTestCase_040927_1 "dEQP-GLES3.functional.transform_feedba"
#define VkglTestCase_040927_2 "ck.array.separate.points.mediump_float"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040927, VkglTestCase_040927_1, VkglTestCase_040927_2);

#define VkglTestCase_040928_1 "dEQP-GLES3.functional.transform_feedb"
#define VkglTestCase_040928_2 "ack.array.separate.points.highp_float"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040928, VkglTestCase_040928_1, VkglTestCase_040928_2);

#define VkglTestCase_040929_1 "dEQP-GLES3.functional.transform_feed"
#define VkglTestCase_040929_2 "back.array.separate.points.lowp_vec2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040929, VkglTestCase_040929_1, VkglTestCase_040929_2);

#define VkglTestCase_040930_1 "dEQP-GLES3.functional.transform_feedb"
#define VkglTestCase_040930_2 "ack.array.separate.points.mediump_vec2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040930, VkglTestCase_040930_1, VkglTestCase_040930_2);

#define VkglTestCase_040931_1 "dEQP-GLES3.functional.transform_feed"
#define VkglTestCase_040931_2 "back.array.separate.points.highp_vec2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040931, VkglTestCase_040931_1, VkglTestCase_040931_2);

#define VkglTestCase_040932_1 "dEQP-GLES3.functional.transform_feed"
#define VkglTestCase_040932_2 "back.array.separate.points.lowp_vec3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040932, VkglTestCase_040932_1, VkglTestCase_040932_2);

#define VkglTestCase_040933_1 "dEQP-GLES3.functional.transform_feedb"
#define VkglTestCase_040933_2 "ack.array.separate.points.mediump_vec3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040933, VkglTestCase_040933_1, VkglTestCase_040933_2);

#define VkglTestCase_040934_1 "dEQP-GLES3.functional.transform_feed"
#define VkglTestCase_040934_2 "back.array.separate.points.highp_vec3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040934, VkglTestCase_040934_1, VkglTestCase_040934_2);

#define VkglTestCase_040935_1 "dEQP-GLES3.functional.transform_feed"
#define VkglTestCase_040935_2 "back.array.separate.points.lowp_vec4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040935, VkglTestCase_040935_1, VkglTestCase_040935_2);

#define VkglTestCase_040936_1 "dEQP-GLES3.functional.transform_feedb"
#define VkglTestCase_040936_2 "ack.array.separate.points.mediump_vec4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040936, VkglTestCase_040936_1, VkglTestCase_040936_2);

#define VkglTestCase_040937_1 "dEQP-GLES3.functional.transform_feed"
#define VkglTestCase_040937_2 "back.array.separate.points.highp_vec4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040937, VkglTestCase_040937_1, VkglTestCase_040937_2);

#define VkglTestCase_040938_1 "dEQP-GLES3.functional.transform_feed"
#define VkglTestCase_040938_2 "back.array.separate.points.lowp_mat2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040938, VkglTestCase_040938_1, VkglTestCase_040938_2);

#define VkglTestCase_040939_1 "dEQP-GLES3.functional.transform_feedb"
#define VkglTestCase_040939_2 "ack.array.separate.points.mediump_mat2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040939, VkglTestCase_040939_1, VkglTestCase_040939_2);

#define VkglTestCase_040940_1 "dEQP-GLES3.functional.transform_feed"
#define VkglTestCase_040940_2 "back.array.separate.points.highp_mat2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040940, VkglTestCase_040940_1, VkglTestCase_040940_2);

#define VkglTestCase_040941_1 "dEQP-GLES3.functional.transform_feedb"
#define VkglTestCase_040941_2 "ack.array.separate.points.lowp_mat2x3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040941, VkglTestCase_040941_1, VkglTestCase_040941_2);

#define VkglTestCase_040942_1 "dEQP-GLES3.functional.transform_feedba"
#define VkglTestCase_040942_2 "ck.array.separate.points.mediump_mat2x3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040942, VkglTestCase_040942_1, VkglTestCase_040942_2);

#define VkglTestCase_040943_1 "dEQP-GLES3.functional.transform_feedb"
#define VkglTestCase_040943_2 "ack.array.separate.points.highp_mat2x3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040943, VkglTestCase_040943_1, VkglTestCase_040943_2);

#define VkglTestCase_040944_1 "dEQP-GLES3.functional.transform_feedb"
#define VkglTestCase_040944_2 "ack.array.separate.points.lowp_mat2x4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040944, VkglTestCase_040944_1, VkglTestCase_040944_2);

#define VkglTestCase_040945_1 "dEQP-GLES3.functional.transform_feedba"
#define VkglTestCase_040945_2 "ck.array.separate.points.mediump_mat2x4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040945, VkglTestCase_040945_1, VkglTestCase_040945_2);

#define VkglTestCase_040946_1 "dEQP-GLES3.functional.transform_feedb"
#define VkglTestCase_040946_2 "ack.array.separate.points.highp_mat2x4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040946, VkglTestCase_040946_1, VkglTestCase_040946_2);

#define VkglTestCase_040947_1 "dEQP-GLES3.functional.transform_feedb"
#define VkglTestCase_040947_2 "ack.array.separate.points.lowp_mat3x2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040947, VkglTestCase_040947_1, VkglTestCase_040947_2);

#define VkglTestCase_040948_1 "dEQP-GLES3.functional.transform_feedba"
#define VkglTestCase_040948_2 "ck.array.separate.points.mediump_mat3x2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040948, VkglTestCase_040948_1, VkglTestCase_040948_2);

#define VkglTestCase_040949_1 "dEQP-GLES3.functional.transform_feedb"
#define VkglTestCase_040949_2 "ack.array.separate.points.highp_mat3x2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040949, VkglTestCase_040949_1, VkglTestCase_040949_2);

#define VkglTestCase_040950_1 "dEQP-GLES3.functional.transform_feed"
#define VkglTestCase_040950_2 "back.array.separate.points.lowp_mat3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040950, VkglTestCase_040950_1, VkglTestCase_040950_2);

#define VkglTestCase_040951_1 "dEQP-GLES3.functional.transform_feedb"
#define VkglTestCase_040951_2 "ack.array.separate.points.mediump_mat3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040951, VkglTestCase_040951_1, VkglTestCase_040951_2);

#define VkglTestCase_040952_1 "dEQP-GLES3.functional.transform_feed"
#define VkglTestCase_040952_2 "back.array.separate.points.highp_mat3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040952, VkglTestCase_040952_1, VkglTestCase_040952_2);

#define VkglTestCase_040953_1 "dEQP-GLES3.functional.transform_feedb"
#define VkglTestCase_040953_2 "ack.array.separate.points.lowp_mat3x4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040953, VkglTestCase_040953_1, VkglTestCase_040953_2);

#define VkglTestCase_040954_1 "dEQP-GLES3.functional.transform_feedba"
#define VkglTestCase_040954_2 "ck.array.separate.points.mediump_mat3x4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040954, VkglTestCase_040954_1, VkglTestCase_040954_2);

#define VkglTestCase_040955_1 "dEQP-GLES3.functional.transform_feedb"
#define VkglTestCase_040955_2 "ack.array.separate.points.highp_mat3x4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040955, VkglTestCase_040955_1, VkglTestCase_040955_2);

#define VkglTestCase_040956_1 "dEQP-GLES3.functional.transform_feedb"
#define VkglTestCase_040956_2 "ack.array.separate.points.lowp_mat4x2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040956, VkglTestCase_040956_1, VkglTestCase_040956_2);

#define VkglTestCase_040957_1 "dEQP-GLES3.functional.transform_feedba"
#define VkglTestCase_040957_2 "ck.array.separate.points.mediump_mat4x2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040957, VkglTestCase_040957_1, VkglTestCase_040957_2);

#define VkglTestCase_040958_1 "dEQP-GLES3.functional.transform_feedb"
#define VkglTestCase_040958_2 "ack.array.separate.points.highp_mat4x2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040958, VkglTestCase_040958_1, VkglTestCase_040958_2);

#define VkglTestCase_040959_1 "dEQP-GLES3.functional.transform_feedb"
#define VkglTestCase_040959_2 "ack.array.separate.points.lowp_mat4x3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040959, VkglTestCase_040959_1, VkglTestCase_040959_2);

#define VkglTestCase_040960_1 "dEQP-GLES3.functional.transform_feedba"
#define VkglTestCase_040960_2 "ck.array.separate.points.mediump_mat4x3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040960, VkglTestCase_040960_1, VkglTestCase_040960_2);

#define VkglTestCase_040961_1 "dEQP-GLES3.functional.transform_feedb"
#define VkglTestCase_040961_2 "ack.array.separate.points.highp_mat4x3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040961, VkglTestCase_040961_1, VkglTestCase_040961_2);

#define VkglTestCase_040962_1 "dEQP-GLES3.functional.transform_feed"
#define VkglTestCase_040962_2 "back.array.separate.points.lowp_mat4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040962, VkglTestCase_040962_1, VkglTestCase_040962_2);

#define VkglTestCase_040963_1 "dEQP-GLES3.functional.transform_feedb"
#define VkglTestCase_040963_2 "ack.array.separate.points.mediump_mat4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040963, VkglTestCase_040963_1, VkglTestCase_040963_2);

#define VkglTestCase_040964_1 "dEQP-GLES3.functional.transform_feed"
#define VkglTestCase_040964_2 "back.array.separate.points.highp_mat4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040964, VkglTestCase_040964_1, VkglTestCase_040964_2);

#define VkglTestCase_040965_1 "dEQP-GLES3.functional.transform_fee"
#define VkglTestCase_040965_2 "dback.array.separate.points.lowp_int"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040965, VkglTestCase_040965_1, VkglTestCase_040965_2);

#define VkglTestCase_040966_1 "dEQP-GLES3.functional.transform_feedb"
#define VkglTestCase_040966_2 "ack.array.separate.points.mediump_int"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040966, VkglTestCase_040966_1, VkglTestCase_040966_2);

#define VkglTestCase_040967_1 "dEQP-GLES3.functional.transform_feed"
#define VkglTestCase_040967_2 "back.array.separate.points.highp_int"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040967, VkglTestCase_040967_1, VkglTestCase_040967_2);

#define VkglTestCase_040968_1 "dEQP-GLES3.functional.transform_feed"
#define VkglTestCase_040968_2 "back.array.separate.points.lowp_ivec2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040968, VkglTestCase_040968_1, VkglTestCase_040968_2);

#define VkglTestCase_040969_1 "dEQP-GLES3.functional.transform_feedba"
#define VkglTestCase_040969_2 "ck.array.separate.points.mediump_ivec2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040969, VkglTestCase_040969_1, VkglTestCase_040969_2);

#define VkglTestCase_040970_1 "dEQP-GLES3.functional.transform_feedb"
#define VkglTestCase_040970_2 "ack.array.separate.points.highp_ivec2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040970, VkglTestCase_040970_1, VkglTestCase_040970_2);

#define VkglTestCase_040971_1 "dEQP-GLES3.functional.transform_feed"
#define VkglTestCase_040971_2 "back.array.separate.points.lowp_ivec3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040971, VkglTestCase_040971_1, VkglTestCase_040971_2);

#define VkglTestCase_040972_1 "dEQP-GLES3.functional.transform_feedba"
#define VkglTestCase_040972_2 "ck.array.separate.points.mediump_ivec3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040972, VkglTestCase_040972_1, VkglTestCase_040972_2);

#define VkglTestCase_040973_1 "dEQP-GLES3.functional.transform_feedb"
#define VkglTestCase_040973_2 "ack.array.separate.points.highp_ivec3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040973, VkglTestCase_040973_1, VkglTestCase_040973_2);

#define VkglTestCase_040974_1 "dEQP-GLES3.functional.transform_feed"
#define VkglTestCase_040974_2 "back.array.separate.points.lowp_ivec4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040974, VkglTestCase_040974_1, VkglTestCase_040974_2);

#define VkglTestCase_040975_1 "dEQP-GLES3.functional.transform_feedba"
#define VkglTestCase_040975_2 "ck.array.separate.points.mediump_ivec4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040975, VkglTestCase_040975_1, VkglTestCase_040975_2);

#define VkglTestCase_040976_1 "dEQP-GLES3.functional.transform_feedb"
#define VkglTestCase_040976_2 "ack.array.separate.points.highp_ivec4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040976, VkglTestCase_040976_1, VkglTestCase_040976_2);

#define VkglTestCase_040977_1 "dEQP-GLES3.functional.transform_feed"
#define VkglTestCase_040977_2 "back.array.separate.points.lowp_uint"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040977, VkglTestCase_040977_1, VkglTestCase_040977_2);

#define VkglTestCase_040978_1 "dEQP-GLES3.functional.transform_feedb"
#define VkglTestCase_040978_2 "ack.array.separate.points.mediump_uint"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040978, VkglTestCase_040978_1, VkglTestCase_040978_2);

#define VkglTestCase_040979_1 "dEQP-GLES3.functional.transform_feed"
#define VkglTestCase_040979_2 "back.array.separate.points.highp_uint"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040979, VkglTestCase_040979_1, VkglTestCase_040979_2);

#define VkglTestCase_040980_1 "dEQP-GLES3.functional.transform_feed"
#define VkglTestCase_040980_2 "back.array.separate.points.lowp_uvec2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040980, VkglTestCase_040980_1, VkglTestCase_040980_2);

#define VkglTestCase_040981_1 "dEQP-GLES3.functional.transform_feedba"
#define VkglTestCase_040981_2 "ck.array.separate.points.mediump_uvec2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040981, VkglTestCase_040981_1, VkglTestCase_040981_2);

#define VkglTestCase_040982_1 "dEQP-GLES3.functional.transform_feedb"
#define VkglTestCase_040982_2 "ack.array.separate.points.highp_uvec2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040982, VkglTestCase_040982_1, VkglTestCase_040982_2);

#define VkglTestCase_040983_1 "dEQP-GLES3.functional.transform_feed"
#define VkglTestCase_040983_2 "back.array.separate.points.lowp_uvec3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040983, VkglTestCase_040983_1, VkglTestCase_040983_2);

#define VkglTestCase_040984_1 "dEQP-GLES3.functional.transform_feedba"
#define VkglTestCase_040984_2 "ck.array.separate.points.mediump_uvec3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040984, VkglTestCase_040984_1, VkglTestCase_040984_2);

#define VkglTestCase_040985_1 "dEQP-GLES3.functional.transform_feedb"
#define VkglTestCase_040985_2 "ack.array.separate.points.highp_uvec3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040985, VkglTestCase_040985_1, VkglTestCase_040985_2);

#define VkglTestCase_040986_1 "dEQP-GLES3.functional.transform_feed"
#define VkglTestCase_040986_2 "back.array.separate.points.lowp_uvec4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040986, VkglTestCase_040986_1, VkglTestCase_040986_2);

#define VkglTestCase_040987_1 "dEQP-GLES3.functional.transform_feedba"
#define VkglTestCase_040987_2 "ck.array.separate.points.mediump_uvec4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040987, VkglTestCase_040987_1, VkglTestCase_040987_2);

#define VkglTestCase_040988_1 "dEQP-GLES3.functional.transform_feedb"
#define VkglTestCase_040988_2 "ack.array.separate.points.highp_uvec4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040988, VkglTestCase_040988_1, VkglTestCase_040988_2);

#define VkglTestCase_041304_1 "dEQP-GLES3.functional.transform_feedback"
#define VkglTestCase_041304_2 ".array_element.separate.points.lowp_float"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041304, VkglTestCase_041304_1, VkglTestCase_041304_2);

#define VkglTestCase_041305_1 "dEQP-GLES3.functional.transform_feedback.a"
#define VkglTestCase_041305_2 "rray_element.separate.points.mediump_float"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041305, VkglTestCase_041305_1, VkglTestCase_041305_2);

#define VkglTestCase_041306_1 "dEQP-GLES3.functional.transform_feedback."
#define VkglTestCase_041306_2 "array_element.separate.points.highp_float"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041306, VkglTestCase_041306_1, VkglTestCase_041306_2);

#define VkglTestCase_041307_1 "dEQP-GLES3.functional.transform_feedback"
#define VkglTestCase_041307_2 ".array_element.separate.points.lowp_vec2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041307, VkglTestCase_041307_1, VkglTestCase_041307_2);

#define VkglTestCase_041308_1 "dEQP-GLES3.functional.transform_feedback."
#define VkglTestCase_041308_2 "array_element.separate.points.mediump_vec2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041308, VkglTestCase_041308_1, VkglTestCase_041308_2);

#define VkglTestCase_041309_1 "dEQP-GLES3.functional.transform_feedback"
#define VkglTestCase_041309_2 ".array_element.separate.points.highp_vec2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041309, VkglTestCase_041309_1, VkglTestCase_041309_2);

#define VkglTestCase_041310_1 "dEQP-GLES3.functional.transform_feedback"
#define VkglTestCase_041310_2 ".array_element.separate.points.lowp_vec3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041310, VkglTestCase_041310_1, VkglTestCase_041310_2);

#define VkglTestCase_041311_1 "dEQP-GLES3.functional.transform_feedback."
#define VkglTestCase_041311_2 "array_element.separate.points.mediump_vec3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041311, VkglTestCase_041311_1, VkglTestCase_041311_2);

#define VkglTestCase_041312_1 "dEQP-GLES3.functional.transform_feedback"
#define VkglTestCase_041312_2 ".array_element.separate.points.highp_vec3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041312, VkglTestCase_041312_1, VkglTestCase_041312_2);

#define VkglTestCase_041313_1 "dEQP-GLES3.functional.transform_feedback"
#define VkglTestCase_041313_2 ".array_element.separate.points.lowp_vec4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041313, VkglTestCase_041313_1, VkglTestCase_041313_2);

#define VkglTestCase_041314_1 "dEQP-GLES3.functional.transform_feedback."
#define VkglTestCase_041314_2 "array_element.separate.points.mediump_vec4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041314, VkglTestCase_041314_1, VkglTestCase_041314_2);

#define VkglTestCase_041315_1 "dEQP-GLES3.functional.transform_feedback"
#define VkglTestCase_041315_2 ".array_element.separate.points.highp_vec4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041315, VkglTestCase_041315_1, VkglTestCase_041315_2);

#define VkglTestCase_041316_1 "dEQP-GLES3.functional.transform_feedback"
#define VkglTestCase_041316_2 ".array_element.separate.points.lowp_mat2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041316, VkglTestCase_041316_1, VkglTestCase_041316_2);

#define VkglTestCase_041317_1 "dEQP-GLES3.functional.transform_feedback."
#define VkglTestCase_041317_2 "array_element.separate.points.mediump_mat2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041317, VkglTestCase_041317_1, VkglTestCase_041317_2);

#define VkglTestCase_041318_1 "dEQP-GLES3.functional.transform_feedback"
#define VkglTestCase_041318_2 ".array_element.separate.points.highp_mat2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041318, VkglTestCase_041318_1, VkglTestCase_041318_2);

#define VkglTestCase_041319_1 "dEQP-GLES3.functional.transform_feedback."
#define VkglTestCase_041319_2 "array_element.separate.points.lowp_mat2x3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041319, VkglTestCase_041319_1, VkglTestCase_041319_2);

#define VkglTestCase_041320_1 "dEQP-GLES3.functional.transform_feedback.a"
#define VkglTestCase_041320_2 "rray_element.separate.points.mediump_mat2x3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041320, VkglTestCase_041320_1, VkglTestCase_041320_2);

#define VkglTestCase_041321_1 "dEQP-GLES3.functional.transform_feedback."
#define VkglTestCase_041321_2 "array_element.separate.points.highp_mat2x3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041321, VkglTestCase_041321_1, VkglTestCase_041321_2);

#define VkglTestCase_041322_1 "dEQP-GLES3.functional.transform_feedback."
#define VkglTestCase_041322_2 "array_element.separate.points.lowp_mat2x4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041322, VkglTestCase_041322_1, VkglTestCase_041322_2);

#define VkglTestCase_041323_1 "dEQP-GLES3.functional.transform_feedback.a"
#define VkglTestCase_041323_2 "rray_element.separate.points.mediump_mat2x4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041323, VkglTestCase_041323_1, VkglTestCase_041323_2);

#define VkglTestCase_041324_1 "dEQP-GLES3.functional.transform_feedback."
#define VkglTestCase_041324_2 "array_element.separate.points.highp_mat2x4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041324, VkglTestCase_041324_1, VkglTestCase_041324_2);

#define VkglTestCase_041325_1 "dEQP-GLES3.functional.transform_feedback."
#define VkglTestCase_041325_2 "array_element.separate.points.lowp_mat3x2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041325, VkglTestCase_041325_1, VkglTestCase_041325_2);

#define VkglTestCase_041326_1 "dEQP-GLES3.functional.transform_feedback.a"
#define VkglTestCase_041326_2 "rray_element.separate.points.mediump_mat3x2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041326, VkglTestCase_041326_1, VkglTestCase_041326_2);

#define VkglTestCase_041327_1 "dEQP-GLES3.functional.transform_feedback."
#define VkglTestCase_041327_2 "array_element.separate.points.highp_mat3x2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041327, VkglTestCase_041327_1, VkglTestCase_041327_2);

#define VkglTestCase_041328_1 "dEQP-GLES3.functional.transform_feedback"
#define VkglTestCase_041328_2 ".array_element.separate.points.lowp_mat3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041328, VkglTestCase_041328_1, VkglTestCase_041328_2);

#define VkglTestCase_041329_1 "dEQP-GLES3.functional.transform_feedback."
#define VkglTestCase_041329_2 "array_element.separate.points.mediump_mat3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041329, VkglTestCase_041329_1, VkglTestCase_041329_2);

#define VkglTestCase_041330_1 "dEQP-GLES3.functional.transform_feedback"
#define VkglTestCase_041330_2 ".array_element.separate.points.highp_mat3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041330, VkglTestCase_041330_1, VkglTestCase_041330_2);

#define VkglTestCase_041331_1 "dEQP-GLES3.functional.transform_feedback."
#define VkglTestCase_041331_2 "array_element.separate.points.lowp_mat3x4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041331, VkglTestCase_041331_1, VkglTestCase_041331_2);

#define VkglTestCase_041332_1 "dEQP-GLES3.functional.transform_feedback.a"
#define VkglTestCase_041332_2 "rray_element.separate.points.mediump_mat3x4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041332, VkglTestCase_041332_1, VkglTestCase_041332_2);

#define VkglTestCase_041333_1 "dEQP-GLES3.functional.transform_feedback."
#define VkglTestCase_041333_2 "array_element.separate.points.highp_mat3x4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041333, VkglTestCase_041333_1, VkglTestCase_041333_2);

#define VkglTestCase_041334_1 "dEQP-GLES3.functional.transform_feedback."
#define VkglTestCase_041334_2 "array_element.separate.points.lowp_mat4x2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041334, VkglTestCase_041334_1, VkglTestCase_041334_2);

#define VkglTestCase_041335_1 "dEQP-GLES3.functional.transform_feedback.a"
#define VkglTestCase_041335_2 "rray_element.separate.points.mediump_mat4x2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041335, VkglTestCase_041335_1, VkglTestCase_041335_2);

#define VkglTestCase_041336_1 "dEQP-GLES3.functional.transform_feedback."
#define VkglTestCase_041336_2 "array_element.separate.points.highp_mat4x2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041336, VkglTestCase_041336_1, VkglTestCase_041336_2);

#define VkglTestCase_041337_1 "dEQP-GLES3.functional.transform_feedback."
#define VkglTestCase_041337_2 "array_element.separate.points.lowp_mat4x3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041337, VkglTestCase_041337_1, VkglTestCase_041337_2);

#define VkglTestCase_041338_1 "dEQP-GLES3.functional.transform_feedback.a"
#define VkglTestCase_041338_2 "rray_element.separate.points.mediump_mat4x3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041338, VkglTestCase_041338_1, VkglTestCase_041338_2);

#define VkglTestCase_041339_1 "dEQP-GLES3.functional.transform_feedback."
#define VkglTestCase_041339_2 "array_element.separate.points.highp_mat4x3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041339, VkglTestCase_041339_1, VkglTestCase_041339_2);

#define VkglTestCase_041340_1 "dEQP-GLES3.functional.transform_feedback"
#define VkglTestCase_041340_2 ".array_element.separate.points.lowp_mat4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041340, VkglTestCase_041340_1, VkglTestCase_041340_2);

#define VkglTestCase_041341_1 "dEQP-GLES3.functional.transform_feedback."
#define VkglTestCase_041341_2 "array_element.separate.points.mediump_mat4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041341, VkglTestCase_041341_1, VkglTestCase_041341_2);

#define VkglTestCase_041342_1 "dEQP-GLES3.functional.transform_feedback"
#define VkglTestCase_041342_2 ".array_element.separate.points.highp_mat4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041342, VkglTestCase_041342_1, VkglTestCase_041342_2);

#define VkglTestCase_041343_1 "dEQP-GLES3.functional.transform_feedbac"
#define VkglTestCase_041343_2 "k.array_element.separate.points.lowp_int"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041343, VkglTestCase_041343_1, VkglTestCase_041343_2);

#define VkglTestCase_041344_1 "dEQP-GLES3.functional.transform_feedback."
#define VkglTestCase_041344_2 "array_element.separate.points.mediump_int"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041344, VkglTestCase_041344_1, VkglTestCase_041344_2);

#define VkglTestCase_041345_1 "dEQP-GLES3.functional.transform_feedback"
#define VkglTestCase_041345_2 ".array_element.separate.points.highp_int"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041345, VkglTestCase_041345_1, VkglTestCase_041345_2);

#define VkglTestCase_041346_1 "dEQP-GLES3.functional.transform_feedback"
#define VkglTestCase_041346_2 ".array_element.separate.points.lowp_ivec2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041346, VkglTestCase_041346_1, VkglTestCase_041346_2);

#define VkglTestCase_041347_1 "dEQP-GLES3.functional.transform_feedback.a"
#define VkglTestCase_041347_2 "rray_element.separate.points.mediump_ivec2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041347, VkglTestCase_041347_1, VkglTestCase_041347_2);

#define VkglTestCase_041348_1 "dEQP-GLES3.functional.transform_feedback."
#define VkglTestCase_041348_2 "array_element.separate.points.highp_ivec2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041348, VkglTestCase_041348_1, VkglTestCase_041348_2);

#define VkglTestCase_041349_1 "dEQP-GLES3.functional.transform_feedback"
#define VkglTestCase_041349_2 ".array_element.separate.points.lowp_ivec3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041349, VkglTestCase_041349_1, VkglTestCase_041349_2);

#define VkglTestCase_041350_1 "dEQP-GLES3.functional.transform_feedback.a"
#define VkglTestCase_041350_2 "rray_element.separate.points.mediump_ivec3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041350, VkglTestCase_041350_1, VkglTestCase_041350_2);

#define VkglTestCase_041351_1 "dEQP-GLES3.functional.transform_feedback."
#define VkglTestCase_041351_2 "array_element.separate.points.highp_ivec3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041351, VkglTestCase_041351_1, VkglTestCase_041351_2);

#define VkglTestCase_041352_1 "dEQP-GLES3.functional.transform_feedback"
#define VkglTestCase_041352_2 ".array_element.separate.points.lowp_ivec4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041352, VkglTestCase_041352_1, VkglTestCase_041352_2);

#define VkglTestCase_041353_1 "dEQP-GLES3.functional.transform_feedback.a"
#define VkglTestCase_041353_2 "rray_element.separate.points.mediump_ivec4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041353, VkglTestCase_041353_1, VkglTestCase_041353_2);

#define VkglTestCase_041354_1 "dEQP-GLES3.functional.transform_feedback."
#define VkglTestCase_041354_2 "array_element.separate.points.highp_ivec4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041354, VkglTestCase_041354_1, VkglTestCase_041354_2);

#define VkglTestCase_041355_1 "dEQP-GLES3.functional.transform_feedback"
#define VkglTestCase_041355_2 ".array_element.separate.points.lowp_uint"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041355, VkglTestCase_041355_1, VkglTestCase_041355_2);

#define VkglTestCase_041356_1 "dEQP-GLES3.functional.transform_feedback."
#define VkglTestCase_041356_2 "array_element.separate.points.mediump_uint"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041356, VkglTestCase_041356_1, VkglTestCase_041356_2);

#define VkglTestCase_041357_1 "dEQP-GLES3.functional.transform_feedback"
#define VkglTestCase_041357_2 ".array_element.separate.points.highp_uint"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041357, VkglTestCase_041357_1, VkglTestCase_041357_2);

#define VkglTestCase_041358_1 "dEQP-GLES3.functional.transform_feedback"
#define VkglTestCase_041358_2 ".array_element.separate.points.lowp_uvec2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041358, VkglTestCase_041358_1, VkglTestCase_041358_2);

#define VkglTestCase_041359_1 "dEQP-GLES3.functional.transform_feedback.a"
#define VkglTestCase_041359_2 "rray_element.separate.points.mediump_uvec2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041359, VkglTestCase_041359_1, VkglTestCase_041359_2);

#define VkglTestCase_041360_1 "dEQP-GLES3.functional.transform_feedback."
#define VkglTestCase_041360_2 "array_element.separate.points.highp_uvec2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041360, VkglTestCase_041360_1, VkglTestCase_041360_2);

#define VkglTestCase_041361_1 "dEQP-GLES3.functional.transform_feedback"
#define VkglTestCase_041361_2 ".array_element.separate.points.lowp_uvec3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041361, VkglTestCase_041361_1, VkglTestCase_041361_2);

#define VkglTestCase_041362_1 "dEQP-GLES3.functional.transform_feedback.a"
#define VkglTestCase_041362_2 "rray_element.separate.points.mediump_uvec3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041362, VkglTestCase_041362_1, VkglTestCase_041362_2);

#define VkglTestCase_041363_1 "dEQP-GLES3.functional.transform_feedback."
#define VkglTestCase_041363_2 "array_element.separate.points.highp_uvec3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041363, VkglTestCase_041363_1, VkglTestCase_041363_2);

#define VkglTestCase_041364_1 "dEQP-GLES3.functional.transform_feedback"
#define VkglTestCase_041364_2 ".array_element.separate.points.lowp_uvec4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041364, VkglTestCase_041364_1, VkglTestCase_041364_2);

#define VkglTestCase_041365_1 "dEQP-GLES3.functional.transform_feedback.a"
#define VkglTestCase_041365_2 "rray_element.separate.points.mediump_uvec4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041365, VkglTestCase_041365_1, VkglTestCase_041365_2);

#define VkglTestCase_041366_1 "dEQP-GLES3.functional.transform_feedback."
#define VkglTestCase_041366_2 "array_element.separate.points.highp_uvec4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041366, VkglTestCase_041366_1, VkglTestCase_041366_2);

#define VkglTestCase_041736_1 "dEQP-GLES3.functional.transform_"
#define VkglTestCase_041736_2 "feedback.random.separate.points.1"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041736, VkglTestCase_041736_1, VkglTestCase_041736_2);

#define VkglTestCase_041737_1 "dEQP-GLES3.functional.transform_"
#define VkglTestCase_041737_2 "feedback.random.separate.points.2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041737, VkglTestCase_041737_1, VkglTestCase_041737_2);

#define VkglTestCase_041738_1 "dEQP-GLES3.functional.transform_"
#define VkglTestCase_041738_2 "feedback.random.separate.points.3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041738, VkglTestCase_041738_1, VkglTestCase_041738_2);

#define VkglTestCase_041739_1 "dEQP-GLES3.functional.transform_"
#define VkglTestCase_041739_2 "feedback.random.separate.points.4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041739, VkglTestCase_041739_1, VkglTestCase_041739_2);

#define VkglTestCase_041740_1 "dEQP-GLES3.functional.transform_"
#define VkglTestCase_041740_2 "feedback.random.separate.points.5"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041740, VkglTestCase_041740_1, VkglTestCase_041740_2);

#define VkglTestCase_041741_1 "dEQP-GLES3.functional.transform_"
#define VkglTestCase_041741_2 "feedback.random.separate.points.6"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041741, VkglTestCase_041741_1, VkglTestCase_041741_2);

#define VkglTestCase_041742_1 "dEQP-GLES3.functional.transform_"
#define VkglTestCase_041742_2 "feedback.random.separate.points.7"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041742, VkglTestCase_041742_1, VkglTestCase_041742_2);

#define VkglTestCase_041743_1 "dEQP-GLES3.functional.transform_"
#define VkglTestCase_041743_2 "feedback.random.separate.points.8"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041743, VkglTestCase_041743_1, VkglTestCase_041743_2);

#define VkglTestCase_041744_1 "dEQP-GLES3.functional.transform_"
#define VkglTestCase_041744_2 "feedback.random.separate.points.9"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041744, VkglTestCase_041744_1, VkglTestCase_041744_2);

#define VkglTestCase_041745_1 "dEQP-GLES3.functional.transform_f"
#define VkglTestCase_041745_2 "eedback.random.separate.points.10"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041745, VkglTestCase_041745_1, VkglTestCase_041745_2);

#define VkglTestCase_041796_1 "dEQP-GLES3.functional.transform_feedback.r"
#define VkglTestCase_041796_2 "andom_full_array_capture.separate.points.1"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041796, VkglTestCase_041796_1, VkglTestCase_041796_2);

#define VkglTestCase_041797_1 "dEQP-GLES3.functional.transform_feedback.r"
#define VkglTestCase_041797_2 "andom_full_array_capture.separate.points.2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041797, VkglTestCase_041797_1, VkglTestCase_041797_2);

#define VkglTestCase_041798_1 "dEQP-GLES3.functional.transform_feedback.r"
#define VkglTestCase_041798_2 "andom_full_array_capture.separate.points.3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041798, VkglTestCase_041798_1, VkglTestCase_041798_2);

#define VkglTestCase_041799_1 "dEQP-GLES3.functional.transform_feedback.r"
#define VkglTestCase_041799_2 "andom_full_array_capture.separate.points.4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041799, VkglTestCase_041799_1, VkglTestCase_041799_2);

#define VkglTestCase_041800_1 "dEQP-GLES3.functional.transform_feedback.r"
#define VkglTestCase_041800_2 "andom_full_array_capture.separate.points.5"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041800, VkglTestCase_041800_1, VkglTestCase_041800_2);

#define VkglTestCase_041801_1 "dEQP-GLES3.functional.transform_feedback.r"
#define VkglTestCase_041801_2 "andom_full_array_capture.separate.points.6"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041801, VkglTestCase_041801_1, VkglTestCase_041801_2);

#define VkglTestCase_041802_1 "dEQP-GLES3.functional.transform_feedback.r"
#define VkglTestCase_041802_2 "andom_full_array_capture.separate.points.7"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041802, VkglTestCase_041802_1, VkglTestCase_041802_2);

#define VkglTestCase_041803_1 "dEQP-GLES3.functional.transform_feedback.r"
#define VkglTestCase_041803_2 "andom_full_array_capture.separate.points.8"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041803, VkglTestCase_041803_1, VkglTestCase_041803_2);

#define VkglTestCase_041804_1 "dEQP-GLES3.functional.transform_feedback.r"
#define VkglTestCase_041804_2 "andom_full_array_capture.separate.points.9"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041804, VkglTestCase_041804_1, VkglTestCase_041804_2);

#define VkglTestCase_041805_1 "dEQP-GLES3.functional.transform_feedback.r"
#define VkglTestCase_041805_2 "andom_full_array_capture.separate.points.10"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041805, VkglTestCase_041805_1, VkglTestCase_041805_2);
