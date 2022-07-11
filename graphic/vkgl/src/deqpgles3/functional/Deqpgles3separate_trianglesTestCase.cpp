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

#define VkglTestCase_040674_1 "dEQP-GLES3.functional.transform_feedback."
#define VkglTestCase_040674_2 "basic_types.separate.triangles.lowp_float"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040674, VkglTestCase_040674_1, VkglTestCase_040674_2);

#define VkglTestCase_040675_1 "dEQP-GLES3.functional.transform_feedback.b"
#define VkglTestCase_040675_2 "asic_types.separate.triangles.mediump_float"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040675, VkglTestCase_040675_1, VkglTestCase_040675_2);

#define VkglTestCase_040676_1 "dEQP-GLES3.functional.transform_feedback."
#define VkglTestCase_040676_2 "basic_types.separate.triangles.highp_float"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040676, VkglTestCase_040676_1, VkglTestCase_040676_2);

#define VkglTestCase_040677_1 "dEQP-GLES3.functional.transform_feedback"
#define VkglTestCase_040677_2 ".basic_types.separate.triangles.lowp_vec2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040677, VkglTestCase_040677_1, VkglTestCase_040677_2);

#define VkglTestCase_040678_1 "dEQP-GLES3.functional.transform_feedback.b"
#define VkglTestCase_040678_2 "asic_types.separate.triangles.mediump_vec2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040678, VkglTestCase_040678_1, VkglTestCase_040678_2);

#define VkglTestCase_040679_1 "dEQP-GLES3.functional.transform_feedback."
#define VkglTestCase_040679_2 "basic_types.separate.triangles.highp_vec2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040679, VkglTestCase_040679_1, VkglTestCase_040679_2);

#define VkglTestCase_040680_1 "dEQP-GLES3.functional.transform_feedback"
#define VkglTestCase_040680_2 ".basic_types.separate.triangles.lowp_vec3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040680, VkglTestCase_040680_1, VkglTestCase_040680_2);

#define VkglTestCase_040681_1 "dEQP-GLES3.functional.transform_feedback.b"
#define VkglTestCase_040681_2 "asic_types.separate.triangles.mediump_vec3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040681, VkglTestCase_040681_1, VkglTestCase_040681_2);

#define VkglTestCase_040682_1 "dEQP-GLES3.functional.transform_feedback."
#define VkglTestCase_040682_2 "basic_types.separate.triangles.highp_vec3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040682, VkglTestCase_040682_1, VkglTestCase_040682_2);

#define VkglTestCase_040683_1 "dEQP-GLES3.functional.transform_feedback"
#define VkglTestCase_040683_2 ".basic_types.separate.triangles.lowp_vec4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040683, VkglTestCase_040683_1, VkglTestCase_040683_2);

#define VkglTestCase_040684_1 "dEQP-GLES3.functional.transform_feedback.b"
#define VkglTestCase_040684_2 "asic_types.separate.triangles.mediump_vec4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040684, VkglTestCase_040684_1, VkglTestCase_040684_2);

#define VkglTestCase_040685_1 "dEQP-GLES3.functional.transform_feedback."
#define VkglTestCase_040685_2 "basic_types.separate.triangles.highp_vec4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040685, VkglTestCase_040685_1, VkglTestCase_040685_2);

#define VkglTestCase_040686_1 "dEQP-GLES3.functional.transform_feedback"
#define VkglTestCase_040686_2 ".basic_types.separate.triangles.lowp_mat2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040686, VkglTestCase_040686_1, VkglTestCase_040686_2);

#define VkglTestCase_040687_1 "dEQP-GLES3.functional.transform_feedback.b"
#define VkglTestCase_040687_2 "asic_types.separate.triangles.mediump_mat2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040687, VkglTestCase_040687_1, VkglTestCase_040687_2);

#define VkglTestCase_040688_1 "dEQP-GLES3.functional.transform_feedback."
#define VkglTestCase_040688_2 "basic_types.separate.triangles.highp_mat2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040688, VkglTestCase_040688_1, VkglTestCase_040688_2);

#define VkglTestCase_040689_1 "dEQP-GLES3.functional.transform_feedback."
#define VkglTestCase_040689_2 "basic_types.separate.triangles.lowp_mat2x3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040689, VkglTestCase_040689_1, VkglTestCase_040689_2);

#define VkglTestCase_040690_1 "dEQP-GLES3.functional.transform_feedback.ba"
#define VkglTestCase_040690_2 "sic_types.separate.triangles.mediump_mat2x3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040690, VkglTestCase_040690_1, VkglTestCase_040690_2);

#define VkglTestCase_040691_1 "dEQP-GLES3.functional.transform_feedback.b"
#define VkglTestCase_040691_2 "asic_types.separate.triangles.highp_mat2x3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040691, VkglTestCase_040691_1, VkglTestCase_040691_2);

#define VkglTestCase_040692_1 "dEQP-GLES3.functional.transform_feedback."
#define VkglTestCase_040692_2 "basic_types.separate.triangles.lowp_mat2x4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040692, VkglTestCase_040692_1, VkglTestCase_040692_2);

#define VkglTestCase_040693_1 "dEQP-GLES3.functional.transform_feedback.ba"
#define VkglTestCase_040693_2 "sic_types.separate.triangles.mediump_mat2x4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040693, VkglTestCase_040693_1, VkglTestCase_040693_2);

#define VkglTestCase_040694_1 "dEQP-GLES3.functional.transform_feedback.b"
#define VkglTestCase_040694_2 "asic_types.separate.triangles.highp_mat2x4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040694, VkglTestCase_040694_1, VkglTestCase_040694_2);

#define VkglTestCase_040695_1 "dEQP-GLES3.functional.transform_feedback."
#define VkglTestCase_040695_2 "basic_types.separate.triangles.lowp_mat3x2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040695, VkglTestCase_040695_1, VkglTestCase_040695_2);

#define VkglTestCase_040696_1 "dEQP-GLES3.functional.transform_feedback.ba"
#define VkglTestCase_040696_2 "sic_types.separate.triangles.mediump_mat3x2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040696, VkglTestCase_040696_1, VkglTestCase_040696_2);

#define VkglTestCase_040697_1 "dEQP-GLES3.functional.transform_feedback.b"
#define VkglTestCase_040697_2 "asic_types.separate.triangles.highp_mat3x2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040697, VkglTestCase_040697_1, VkglTestCase_040697_2);

#define VkglTestCase_040698_1 "dEQP-GLES3.functional.transform_feedback"
#define VkglTestCase_040698_2 ".basic_types.separate.triangles.lowp_mat3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040698, VkglTestCase_040698_1, VkglTestCase_040698_2);

#define VkglTestCase_040699_1 "dEQP-GLES3.functional.transform_feedback.b"
#define VkglTestCase_040699_2 "asic_types.separate.triangles.mediump_mat3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040699, VkglTestCase_040699_1, VkglTestCase_040699_2);

#define VkglTestCase_040700_1 "dEQP-GLES3.functional.transform_feedback."
#define VkglTestCase_040700_2 "basic_types.separate.triangles.highp_mat3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040700, VkglTestCase_040700_1, VkglTestCase_040700_2);

#define VkglTestCase_040701_1 "dEQP-GLES3.functional.transform_feedback."
#define VkglTestCase_040701_2 "basic_types.separate.triangles.lowp_mat3x4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040701, VkglTestCase_040701_1, VkglTestCase_040701_2);

#define VkglTestCase_040702_1 "dEQP-GLES3.functional.transform_feedback.ba"
#define VkglTestCase_040702_2 "sic_types.separate.triangles.mediump_mat3x4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040702, VkglTestCase_040702_1, VkglTestCase_040702_2);

#define VkglTestCase_040703_1 "dEQP-GLES3.functional.transform_feedback.b"
#define VkglTestCase_040703_2 "asic_types.separate.triangles.highp_mat3x4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040703, VkglTestCase_040703_1, VkglTestCase_040703_2);

#define VkglTestCase_040704_1 "dEQP-GLES3.functional.transform_feedback."
#define VkglTestCase_040704_2 "basic_types.separate.triangles.lowp_mat4x2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040704, VkglTestCase_040704_1, VkglTestCase_040704_2);

#define VkglTestCase_040705_1 "dEQP-GLES3.functional.transform_feedback.ba"
#define VkglTestCase_040705_2 "sic_types.separate.triangles.mediump_mat4x2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040705, VkglTestCase_040705_1, VkglTestCase_040705_2);

#define VkglTestCase_040706_1 "dEQP-GLES3.functional.transform_feedback.b"
#define VkglTestCase_040706_2 "asic_types.separate.triangles.highp_mat4x2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040706, VkglTestCase_040706_1, VkglTestCase_040706_2);

#define VkglTestCase_040707_1 "dEQP-GLES3.functional.transform_feedback."
#define VkglTestCase_040707_2 "basic_types.separate.triangles.lowp_mat4x3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040707, VkglTestCase_040707_1, VkglTestCase_040707_2);

#define VkglTestCase_040708_1 "dEQP-GLES3.functional.transform_feedback.ba"
#define VkglTestCase_040708_2 "sic_types.separate.triangles.mediump_mat4x3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040708, VkglTestCase_040708_1, VkglTestCase_040708_2);

#define VkglTestCase_040709_1 "dEQP-GLES3.functional.transform_feedback.b"
#define VkglTestCase_040709_2 "asic_types.separate.triangles.highp_mat4x3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040709, VkglTestCase_040709_1, VkglTestCase_040709_2);

#define VkglTestCase_040710_1 "dEQP-GLES3.functional.transform_feedback"
#define VkglTestCase_040710_2 ".basic_types.separate.triangles.lowp_mat4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040710, VkglTestCase_040710_1, VkglTestCase_040710_2);

#define VkglTestCase_040711_1 "dEQP-GLES3.functional.transform_feedback.b"
#define VkglTestCase_040711_2 "asic_types.separate.triangles.mediump_mat4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040711, VkglTestCase_040711_1, VkglTestCase_040711_2);

#define VkglTestCase_040712_1 "dEQP-GLES3.functional.transform_feedback."
#define VkglTestCase_040712_2 "basic_types.separate.triangles.highp_mat4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040712, VkglTestCase_040712_1, VkglTestCase_040712_2);

#define VkglTestCase_040713_1 "dEQP-GLES3.functional.transform_feedback"
#define VkglTestCase_040713_2 ".basic_types.separate.triangles.lowp_int"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040713, VkglTestCase_040713_1, VkglTestCase_040713_2);

#define VkglTestCase_040714_1 "dEQP-GLES3.functional.transform_feedback."
#define VkglTestCase_040714_2 "basic_types.separate.triangles.mediump_int"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040714, VkglTestCase_040714_1, VkglTestCase_040714_2);

#define VkglTestCase_040715_1 "dEQP-GLES3.functional.transform_feedback"
#define VkglTestCase_040715_2 ".basic_types.separate.triangles.highp_int"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040715, VkglTestCase_040715_1, VkglTestCase_040715_2);

#define VkglTestCase_040716_1 "dEQP-GLES3.functional.transform_feedback."
#define VkglTestCase_040716_2 "basic_types.separate.triangles.lowp_ivec2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040716, VkglTestCase_040716_1, VkglTestCase_040716_2);

#define VkglTestCase_040717_1 "dEQP-GLES3.functional.transform_feedback.b"
#define VkglTestCase_040717_2 "asic_types.separate.triangles.mediump_ivec2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040717, VkglTestCase_040717_1, VkglTestCase_040717_2);

#define VkglTestCase_040718_1 "dEQP-GLES3.functional.transform_feedback."
#define VkglTestCase_040718_2 "basic_types.separate.triangles.highp_ivec2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040718, VkglTestCase_040718_1, VkglTestCase_040718_2);

#define VkglTestCase_040719_1 "dEQP-GLES3.functional.transform_feedback."
#define VkglTestCase_040719_2 "basic_types.separate.triangles.lowp_ivec3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040719, VkglTestCase_040719_1, VkglTestCase_040719_2);

#define VkglTestCase_040720_1 "dEQP-GLES3.functional.transform_feedback.b"
#define VkglTestCase_040720_2 "asic_types.separate.triangles.mediump_ivec3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040720, VkglTestCase_040720_1, VkglTestCase_040720_2);

#define VkglTestCase_040721_1 "dEQP-GLES3.functional.transform_feedback."
#define VkglTestCase_040721_2 "basic_types.separate.triangles.highp_ivec3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040721, VkglTestCase_040721_1, VkglTestCase_040721_2);

#define VkglTestCase_040722_1 "dEQP-GLES3.functional.transform_feedback."
#define VkglTestCase_040722_2 "basic_types.separate.triangles.lowp_ivec4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040722, VkglTestCase_040722_1, VkglTestCase_040722_2);

#define VkglTestCase_040723_1 "dEQP-GLES3.functional.transform_feedback.b"
#define VkglTestCase_040723_2 "asic_types.separate.triangles.mediump_ivec4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040723, VkglTestCase_040723_1, VkglTestCase_040723_2);

#define VkglTestCase_040724_1 "dEQP-GLES3.functional.transform_feedback."
#define VkglTestCase_040724_2 "basic_types.separate.triangles.highp_ivec4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040724, VkglTestCase_040724_1, VkglTestCase_040724_2);

#define VkglTestCase_040725_1 "dEQP-GLES3.functional.transform_feedback"
#define VkglTestCase_040725_2 ".basic_types.separate.triangles.lowp_uint"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040725, VkglTestCase_040725_1, VkglTestCase_040725_2);

#define VkglTestCase_040726_1 "dEQP-GLES3.functional.transform_feedback.b"
#define VkglTestCase_040726_2 "asic_types.separate.triangles.mediump_uint"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040726, VkglTestCase_040726_1, VkglTestCase_040726_2);

#define VkglTestCase_040727_1 "dEQP-GLES3.functional.transform_feedback."
#define VkglTestCase_040727_2 "basic_types.separate.triangles.highp_uint"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040727, VkglTestCase_040727_1, VkglTestCase_040727_2);

#define VkglTestCase_040728_1 "dEQP-GLES3.functional.transform_feedback."
#define VkglTestCase_040728_2 "basic_types.separate.triangles.lowp_uvec2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040728, VkglTestCase_040728_1, VkglTestCase_040728_2);

#define VkglTestCase_040729_1 "dEQP-GLES3.functional.transform_feedback.b"
#define VkglTestCase_040729_2 "asic_types.separate.triangles.mediump_uvec2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040729, VkglTestCase_040729_1, VkglTestCase_040729_2);

#define VkglTestCase_040730_1 "dEQP-GLES3.functional.transform_feedback."
#define VkglTestCase_040730_2 "basic_types.separate.triangles.highp_uvec2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040730, VkglTestCase_040730_1, VkglTestCase_040730_2);

#define VkglTestCase_040731_1 "dEQP-GLES3.functional.transform_feedback."
#define VkglTestCase_040731_2 "basic_types.separate.triangles.lowp_uvec3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040731, VkglTestCase_040731_1, VkglTestCase_040731_2);

#define VkglTestCase_040732_1 "dEQP-GLES3.functional.transform_feedback.b"
#define VkglTestCase_040732_2 "asic_types.separate.triangles.mediump_uvec3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040732, VkglTestCase_040732_1, VkglTestCase_040732_2);

#define VkglTestCase_040733_1 "dEQP-GLES3.functional.transform_feedback."
#define VkglTestCase_040733_2 "basic_types.separate.triangles.highp_uvec3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040733, VkglTestCase_040733_1, VkglTestCase_040733_2);

#define VkglTestCase_040734_1 "dEQP-GLES3.functional.transform_feedback."
#define VkglTestCase_040734_2 "basic_types.separate.triangles.lowp_uvec4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040734, VkglTestCase_040734_1, VkglTestCase_040734_2);

#define VkglTestCase_040735_1 "dEQP-GLES3.functional.transform_feedback.b"
#define VkglTestCase_040735_2 "asic_types.separate.triangles.mediump_uvec4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040735, VkglTestCase_040735_1, VkglTestCase_040735_2);

#define VkglTestCase_040736_1 "dEQP-GLES3.functional.transform_feedback."
#define VkglTestCase_040736_2 "basic_types.separate.triangles.highp_uvec4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040736, VkglTestCase_040736_1, VkglTestCase_040736_2);

#define VkglTestCase_041052_1 "dEQP-GLES3.functional.transform_feedba"
#define VkglTestCase_041052_2 "ck.array.separate.triangles.lowp_float"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041052, VkglTestCase_041052_1, VkglTestCase_041052_2);

#define VkglTestCase_041053_1 "dEQP-GLES3.functional.transform_feedbac"
#define VkglTestCase_041053_2 "k.array.separate.triangles.mediump_float"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041053, VkglTestCase_041053_1, VkglTestCase_041053_2);

#define VkglTestCase_041054_1 "dEQP-GLES3.functional.transform_feedba"
#define VkglTestCase_041054_2 "ck.array.separate.triangles.highp_float"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041054, VkglTestCase_041054_1, VkglTestCase_041054_2);

#define VkglTestCase_041055_1 "dEQP-GLES3.functional.transform_feedb"
#define VkglTestCase_041055_2 "ack.array.separate.triangles.lowp_vec2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041055, VkglTestCase_041055_1, VkglTestCase_041055_2);

#define VkglTestCase_041056_1 "dEQP-GLES3.functional.transform_feedbac"
#define VkglTestCase_041056_2 "k.array.separate.triangles.mediump_vec2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041056, VkglTestCase_041056_1, VkglTestCase_041056_2);

#define VkglTestCase_041057_1 "dEQP-GLES3.functional.transform_feedba"
#define VkglTestCase_041057_2 "ck.array.separate.triangles.highp_vec2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041057, VkglTestCase_041057_1, VkglTestCase_041057_2);

#define VkglTestCase_041058_1 "dEQP-GLES3.functional.transform_feedb"
#define VkglTestCase_041058_2 "ack.array.separate.triangles.lowp_vec3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041058, VkglTestCase_041058_1, VkglTestCase_041058_2);

#define VkglTestCase_041059_1 "dEQP-GLES3.functional.transform_feedbac"
#define VkglTestCase_041059_2 "k.array.separate.triangles.mediump_vec3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041059, VkglTestCase_041059_1, VkglTestCase_041059_2);

#define VkglTestCase_041060_1 "dEQP-GLES3.functional.transform_feedba"
#define VkglTestCase_041060_2 "ck.array.separate.triangles.highp_vec3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041060, VkglTestCase_041060_1, VkglTestCase_041060_2);

#define VkglTestCase_041061_1 "dEQP-GLES3.functional.transform_feedb"
#define VkglTestCase_041061_2 "ack.array.separate.triangles.lowp_vec4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041061, VkglTestCase_041061_1, VkglTestCase_041061_2);

#define VkglTestCase_041062_1 "dEQP-GLES3.functional.transform_feedbac"
#define VkglTestCase_041062_2 "k.array.separate.triangles.mediump_vec4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041062, VkglTestCase_041062_1, VkglTestCase_041062_2);

#define VkglTestCase_041063_1 "dEQP-GLES3.functional.transform_feedba"
#define VkglTestCase_041063_2 "ck.array.separate.triangles.highp_vec4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041063, VkglTestCase_041063_1, VkglTestCase_041063_2);

#define VkglTestCase_041064_1 "dEQP-GLES3.functional.transform_feedb"
#define VkglTestCase_041064_2 "ack.array.separate.triangles.lowp_mat2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041064, VkglTestCase_041064_1, VkglTestCase_041064_2);

#define VkglTestCase_041065_1 "dEQP-GLES3.functional.transform_feedbac"
#define VkglTestCase_041065_2 "k.array.separate.triangles.mediump_mat2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041065, VkglTestCase_041065_1, VkglTestCase_041065_2);

#define VkglTestCase_041066_1 "dEQP-GLES3.functional.transform_feedba"
#define VkglTestCase_041066_2 "ck.array.separate.triangles.highp_mat2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041066, VkglTestCase_041066_1, VkglTestCase_041066_2);

#define VkglTestCase_041067_1 "dEQP-GLES3.functional.transform_feedba"
#define VkglTestCase_041067_2 "ck.array.separate.triangles.lowp_mat2x3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041067, VkglTestCase_041067_1, VkglTestCase_041067_2);

#define VkglTestCase_041068_1 "dEQP-GLES3.functional.transform_feedback"
#define VkglTestCase_041068_2 ".array.separate.triangles.mediump_mat2x3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041068, VkglTestCase_041068_1, VkglTestCase_041068_2);

#define VkglTestCase_041069_1 "dEQP-GLES3.functional.transform_feedbac"
#define VkglTestCase_041069_2 "k.array.separate.triangles.highp_mat2x3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041069, VkglTestCase_041069_1, VkglTestCase_041069_2);

#define VkglTestCase_041070_1 "dEQP-GLES3.functional.transform_feedba"
#define VkglTestCase_041070_2 "ck.array.separate.triangles.lowp_mat2x4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041070, VkglTestCase_041070_1, VkglTestCase_041070_2);

#define VkglTestCase_041071_1 "dEQP-GLES3.functional.transform_feedback"
#define VkglTestCase_041071_2 ".array.separate.triangles.mediump_mat2x4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041071, VkglTestCase_041071_1, VkglTestCase_041071_2);

#define VkglTestCase_041072_1 "dEQP-GLES3.functional.transform_feedbac"
#define VkglTestCase_041072_2 "k.array.separate.triangles.highp_mat2x4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041072, VkglTestCase_041072_1, VkglTestCase_041072_2);

#define VkglTestCase_041073_1 "dEQP-GLES3.functional.transform_feedba"
#define VkglTestCase_041073_2 "ck.array.separate.triangles.lowp_mat3x2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041073, VkglTestCase_041073_1, VkglTestCase_041073_2);

#define VkglTestCase_041074_1 "dEQP-GLES3.functional.transform_feedback"
#define VkglTestCase_041074_2 ".array.separate.triangles.mediump_mat3x2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041074, VkglTestCase_041074_1, VkglTestCase_041074_2);

#define VkglTestCase_041075_1 "dEQP-GLES3.functional.transform_feedbac"
#define VkglTestCase_041075_2 "k.array.separate.triangles.highp_mat3x2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041075, VkglTestCase_041075_1, VkglTestCase_041075_2);

#define VkglTestCase_041076_1 "dEQP-GLES3.functional.transform_feedb"
#define VkglTestCase_041076_2 "ack.array.separate.triangles.lowp_mat3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041076, VkglTestCase_041076_1, VkglTestCase_041076_2);

#define VkglTestCase_041077_1 "dEQP-GLES3.functional.transform_feedbac"
#define VkglTestCase_041077_2 "k.array.separate.triangles.mediump_mat3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041077, VkglTestCase_041077_1, VkglTestCase_041077_2);

#define VkglTestCase_041078_1 "dEQP-GLES3.functional.transform_feedba"
#define VkglTestCase_041078_2 "ck.array.separate.triangles.highp_mat3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041078, VkglTestCase_041078_1, VkglTestCase_041078_2);

#define VkglTestCase_041079_1 "dEQP-GLES3.functional.transform_feedba"
#define VkglTestCase_041079_2 "ck.array.separate.triangles.lowp_mat3x4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041079, VkglTestCase_041079_1, VkglTestCase_041079_2);

#define VkglTestCase_041080_1 "dEQP-GLES3.functional.transform_feedback"
#define VkglTestCase_041080_2 ".array.separate.triangles.mediump_mat3x4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041080, VkglTestCase_041080_1, VkglTestCase_041080_2);

#define VkglTestCase_041081_1 "dEQP-GLES3.functional.transform_feedbac"
#define VkglTestCase_041081_2 "k.array.separate.triangles.highp_mat3x4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041081, VkglTestCase_041081_1, VkglTestCase_041081_2);

#define VkglTestCase_041082_1 "dEQP-GLES3.functional.transform_feedba"
#define VkglTestCase_041082_2 "ck.array.separate.triangles.lowp_mat4x2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041082, VkglTestCase_041082_1, VkglTestCase_041082_2);

#define VkglTestCase_041083_1 "dEQP-GLES3.functional.transform_feedback"
#define VkglTestCase_041083_2 ".array.separate.triangles.mediump_mat4x2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041083, VkglTestCase_041083_1, VkglTestCase_041083_2);

#define VkglTestCase_041084_1 "dEQP-GLES3.functional.transform_feedbac"
#define VkglTestCase_041084_2 "k.array.separate.triangles.highp_mat4x2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041084, VkglTestCase_041084_1, VkglTestCase_041084_2);

#define VkglTestCase_041085_1 "dEQP-GLES3.functional.transform_feedba"
#define VkglTestCase_041085_2 "ck.array.separate.triangles.lowp_mat4x3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041085, VkglTestCase_041085_1, VkglTestCase_041085_2);

#define VkglTestCase_041086_1 "dEQP-GLES3.functional.transform_feedback"
#define VkglTestCase_041086_2 ".array.separate.triangles.mediump_mat4x3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041086, VkglTestCase_041086_1, VkglTestCase_041086_2);

#define VkglTestCase_041087_1 "dEQP-GLES3.functional.transform_feedbac"
#define VkglTestCase_041087_2 "k.array.separate.triangles.highp_mat4x3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041087, VkglTestCase_041087_1, VkglTestCase_041087_2);

#define VkglTestCase_041088_1 "dEQP-GLES3.functional.transform_feedb"
#define VkglTestCase_041088_2 "ack.array.separate.triangles.lowp_mat4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041088, VkglTestCase_041088_1, VkglTestCase_041088_2);

#define VkglTestCase_041089_1 "dEQP-GLES3.functional.transform_feedbac"
#define VkglTestCase_041089_2 "k.array.separate.triangles.mediump_mat4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041089, VkglTestCase_041089_1, VkglTestCase_041089_2);

#define VkglTestCase_041090_1 "dEQP-GLES3.functional.transform_feedba"
#define VkglTestCase_041090_2 "ck.array.separate.triangles.highp_mat4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041090, VkglTestCase_041090_1, VkglTestCase_041090_2);

#define VkglTestCase_041091_1 "dEQP-GLES3.functional.transform_feedb"
#define VkglTestCase_041091_2 "ack.array.separate.triangles.lowp_int"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041091, VkglTestCase_041091_1, VkglTestCase_041091_2);

#define VkglTestCase_041092_1 "dEQP-GLES3.functional.transform_feedba"
#define VkglTestCase_041092_2 "ck.array.separate.triangles.mediump_int"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041092, VkglTestCase_041092_1, VkglTestCase_041092_2);

#define VkglTestCase_041093_1 "dEQP-GLES3.functional.transform_feedb"
#define VkglTestCase_041093_2 "ack.array.separate.triangles.highp_int"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041093, VkglTestCase_041093_1, VkglTestCase_041093_2);

#define VkglTestCase_041094_1 "dEQP-GLES3.functional.transform_feedba"
#define VkglTestCase_041094_2 "ck.array.separate.triangles.lowp_ivec2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041094, VkglTestCase_041094_1, VkglTestCase_041094_2);

#define VkglTestCase_041095_1 "dEQP-GLES3.functional.transform_feedbac"
#define VkglTestCase_041095_2 "k.array.separate.triangles.mediump_ivec2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041095, VkglTestCase_041095_1, VkglTestCase_041095_2);

#define VkglTestCase_041096_1 "dEQP-GLES3.functional.transform_feedba"
#define VkglTestCase_041096_2 "ck.array.separate.triangles.highp_ivec2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041096, VkglTestCase_041096_1, VkglTestCase_041096_2);

#define VkglTestCase_041097_1 "dEQP-GLES3.functional.transform_feedba"
#define VkglTestCase_041097_2 "ck.array.separate.triangles.lowp_ivec3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041097, VkglTestCase_041097_1, VkglTestCase_041097_2);

#define VkglTestCase_041098_1 "dEQP-GLES3.functional.transform_feedbac"
#define VkglTestCase_041098_2 "k.array.separate.triangles.mediump_ivec3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041098, VkglTestCase_041098_1, VkglTestCase_041098_2);

#define VkglTestCase_041099_1 "dEQP-GLES3.functional.transform_feedba"
#define VkglTestCase_041099_2 "ck.array.separate.triangles.highp_ivec3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041099, VkglTestCase_041099_1, VkglTestCase_041099_2);

#define VkglTestCase_041100_1 "dEQP-GLES3.functional.transform_feedba"
#define VkglTestCase_041100_2 "ck.array.separate.triangles.lowp_ivec4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041100, VkglTestCase_041100_1, VkglTestCase_041100_2);

#define VkglTestCase_041101_1 "dEQP-GLES3.functional.transform_feedbac"
#define VkglTestCase_041101_2 "k.array.separate.triangles.mediump_ivec4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041101, VkglTestCase_041101_1, VkglTestCase_041101_2);

#define VkglTestCase_041102_1 "dEQP-GLES3.functional.transform_feedba"
#define VkglTestCase_041102_2 "ck.array.separate.triangles.highp_ivec4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041102, VkglTestCase_041102_1, VkglTestCase_041102_2);

#define VkglTestCase_041103_1 "dEQP-GLES3.functional.transform_feedb"
#define VkglTestCase_041103_2 "ack.array.separate.triangles.lowp_uint"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041103, VkglTestCase_041103_1, VkglTestCase_041103_2);

#define VkglTestCase_041104_1 "dEQP-GLES3.functional.transform_feedbac"
#define VkglTestCase_041104_2 "k.array.separate.triangles.mediump_uint"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041104, VkglTestCase_041104_1, VkglTestCase_041104_2);

#define VkglTestCase_041105_1 "dEQP-GLES3.functional.transform_feedba"
#define VkglTestCase_041105_2 "ck.array.separate.triangles.highp_uint"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041105, VkglTestCase_041105_1, VkglTestCase_041105_2);

#define VkglTestCase_041106_1 "dEQP-GLES3.functional.transform_feedba"
#define VkglTestCase_041106_2 "ck.array.separate.triangles.lowp_uvec2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041106, VkglTestCase_041106_1, VkglTestCase_041106_2);

#define VkglTestCase_041107_1 "dEQP-GLES3.functional.transform_feedbac"
#define VkglTestCase_041107_2 "k.array.separate.triangles.mediump_uvec2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041107, VkglTestCase_041107_1, VkglTestCase_041107_2);

#define VkglTestCase_041108_1 "dEQP-GLES3.functional.transform_feedba"
#define VkglTestCase_041108_2 "ck.array.separate.triangles.highp_uvec2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041108, VkglTestCase_041108_1, VkglTestCase_041108_2);

#define VkglTestCase_041109_1 "dEQP-GLES3.functional.transform_feedba"
#define VkglTestCase_041109_2 "ck.array.separate.triangles.lowp_uvec3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041109, VkglTestCase_041109_1, VkglTestCase_041109_2);

#define VkglTestCase_041110_1 "dEQP-GLES3.functional.transform_feedbac"
#define VkglTestCase_041110_2 "k.array.separate.triangles.mediump_uvec3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041110, VkglTestCase_041110_1, VkglTestCase_041110_2);

#define VkglTestCase_041111_1 "dEQP-GLES3.functional.transform_feedba"
#define VkglTestCase_041111_2 "ck.array.separate.triangles.highp_uvec3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041111, VkglTestCase_041111_1, VkglTestCase_041111_2);

#define VkglTestCase_041112_1 "dEQP-GLES3.functional.transform_feedba"
#define VkglTestCase_041112_2 "ck.array.separate.triangles.lowp_uvec4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041112, VkglTestCase_041112_1, VkglTestCase_041112_2);

#define VkglTestCase_041113_1 "dEQP-GLES3.functional.transform_feedbac"
#define VkglTestCase_041113_2 "k.array.separate.triangles.mediump_uvec4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041113, VkglTestCase_041113_1, VkglTestCase_041113_2);

#define VkglTestCase_041114_1 "dEQP-GLES3.functional.transform_feedba"
#define VkglTestCase_041114_2 "ck.array.separate.triangles.highp_uvec4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041114, VkglTestCase_041114_1, VkglTestCase_041114_2);

#define VkglTestCase_041430_1 "dEQP-GLES3.functional.transform_feedback.a"
#define VkglTestCase_041430_2 "rray_element.separate.triangles.lowp_float"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041430, VkglTestCase_041430_1, VkglTestCase_041430_2);

#define VkglTestCase_041431_1 "dEQP-GLES3.functional.transform_feedback.ar"
#define VkglTestCase_041431_2 "ray_element.separate.triangles.mediump_float"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041431, VkglTestCase_041431_1, VkglTestCase_041431_2);

#define VkglTestCase_041432_1 "dEQP-GLES3.functional.transform_feedback.a"
#define VkglTestCase_041432_2 "rray_element.separate.triangles.highp_float"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041432, VkglTestCase_041432_1, VkglTestCase_041432_2);

#define VkglTestCase_041433_1 "dEQP-GLES3.functional.transform_feedback."
#define VkglTestCase_041433_2 "array_element.separate.triangles.lowp_vec2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041433, VkglTestCase_041433_1, VkglTestCase_041433_2);

#define VkglTestCase_041434_1 "dEQP-GLES3.functional.transform_feedback.ar"
#define VkglTestCase_041434_2 "ray_element.separate.triangles.mediump_vec2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041434, VkglTestCase_041434_1, VkglTestCase_041434_2);

#define VkglTestCase_041435_1 "dEQP-GLES3.functional.transform_feedback.a"
#define VkglTestCase_041435_2 "rray_element.separate.triangles.highp_vec2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041435, VkglTestCase_041435_1, VkglTestCase_041435_2);

#define VkglTestCase_041436_1 "dEQP-GLES3.functional.transform_feedback."
#define VkglTestCase_041436_2 "array_element.separate.triangles.lowp_vec3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041436, VkglTestCase_041436_1, VkglTestCase_041436_2);

#define VkglTestCase_041437_1 "dEQP-GLES3.functional.transform_feedback.ar"
#define VkglTestCase_041437_2 "ray_element.separate.triangles.mediump_vec3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041437, VkglTestCase_041437_1, VkglTestCase_041437_2);

#define VkglTestCase_041438_1 "dEQP-GLES3.functional.transform_feedback.a"
#define VkglTestCase_041438_2 "rray_element.separate.triangles.highp_vec3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041438, VkglTestCase_041438_1, VkglTestCase_041438_2);

#define VkglTestCase_041439_1 "dEQP-GLES3.functional.transform_feedback."
#define VkglTestCase_041439_2 "array_element.separate.triangles.lowp_vec4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041439, VkglTestCase_041439_1, VkglTestCase_041439_2);

#define VkglTestCase_041440_1 "dEQP-GLES3.functional.transform_feedback.ar"
#define VkglTestCase_041440_2 "ray_element.separate.triangles.mediump_vec4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041440, VkglTestCase_041440_1, VkglTestCase_041440_2);

#define VkglTestCase_041441_1 "dEQP-GLES3.functional.transform_feedback.a"
#define VkglTestCase_041441_2 "rray_element.separate.triangles.highp_vec4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041441, VkglTestCase_041441_1, VkglTestCase_041441_2);

#define VkglTestCase_041442_1 "dEQP-GLES3.functional.transform_feedback."
#define VkglTestCase_041442_2 "array_element.separate.triangles.lowp_mat2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041442, VkglTestCase_041442_1, VkglTestCase_041442_2);

#define VkglTestCase_041443_1 "dEQP-GLES3.functional.transform_feedback.ar"
#define VkglTestCase_041443_2 "ray_element.separate.triangles.mediump_mat2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041443, VkglTestCase_041443_1, VkglTestCase_041443_2);

#define VkglTestCase_041444_1 "dEQP-GLES3.functional.transform_feedback.a"
#define VkglTestCase_041444_2 "rray_element.separate.triangles.highp_mat2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041444, VkglTestCase_041444_1, VkglTestCase_041444_2);

#define VkglTestCase_041445_1 "dEQP-GLES3.functional.transform_feedback.a"
#define VkglTestCase_041445_2 "rray_element.separate.triangles.lowp_mat2x3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041445, VkglTestCase_041445_1, VkglTestCase_041445_2);

#define VkglTestCase_041446_1 "dEQP-GLES3.functional.transform_feedback.arr"
#define VkglTestCase_041446_2 "ay_element.separate.triangles.mediump_mat2x3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041446, VkglTestCase_041446_1, VkglTestCase_041446_2);

#define VkglTestCase_041447_1 "dEQP-GLES3.functional.transform_feedback.ar"
#define VkglTestCase_041447_2 "ray_element.separate.triangles.highp_mat2x3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041447, VkglTestCase_041447_1, VkglTestCase_041447_2);

#define VkglTestCase_041448_1 "dEQP-GLES3.functional.transform_feedback.a"
#define VkglTestCase_041448_2 "rray_element.separate.triangles.lowp_mat2x4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041448, VkglTestCase_041448_1, VkglTestCase_041448_2);

#define VkglTestCase_041449_1 "dEQP-GLES3.functional.transform_feedback.arr"
#define VkglTestCase_041449_2 "ay_element.separate.triangles.mediump_mat2x4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041449, VkglTestCase_041449_1, VkglTestCase_041449_2);

#define VkglTestCase_041450_1 "dEQP-GLES3.functional.transform_feedback.ar"
#define VkglTestCase_041450_2 "ray_element.separate.triangles.highp_mat2x4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041450, VkglTestCase_041450_1, VkglTestCase_041450_2);

#define VkglTestCase_041451_1 "dEQP-GLES3.functional.transform_feedback.a"
#define VkglTestCase_041451_2 "rray_element.separate.triangles.lowp_mat3x2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041451, VkglTestCase_041451_1, VkglTestCase_041451_2);

#define VkglTestCase_041452_1 "dEQP-GLES3.functional.transform_feedback.arr"
#define VkglTestCase_041452_2 "ay_element.separate.triangles.mediump_mat3x2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041452, VkglTestCase_041452_1, VkglTestCase_041452_2);

#define VkglTestCase_041453_1 "dEQP-GLES3.functional.transform_feedback.ar"
#define VkglTestCase_041453_2 "ray_element.separate.triangles.highp_mat3x2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041453, VkglTestCase_041453_1, VkglTestCase_041453_2);

#define VkglTestCase_041454_1 "dEQP-GLES3.functional.transform_feedback."
#define VkglTestCase_041454_2 "array_element.separate.triangles.lowp_mat3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041454, VkglTestCase_041454_1, VkglTestCase_041454_2);

#define VkglTestCase_041455_1 "dEQP-GLES3.functional.transform_feedback.ar"
#define VkglTestCase_041455_2 "ray_element.separate.triangles.mediump_mat3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041455, VkglTestCase_041455_1, VkglTestCase_041455_2);

#define VkglTestCase_041456_1 "dEQP-GLES3.functional.transform_feedback.a"
#define VkglTestCase_041456_2 "rray_element.separate.triangles.highp_mat3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041456, VkglTestCase_041456_1, VkglTestCase_041456_2);

#define VkglTestCase_041457_1 "dEQP-GLES3.functional.transform_feedback.a"
#define VkglTestCase_041457_2 "rray_element.separate.triangles.lowp_mat3x4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041457, VkglTestCase_041457_1, VkglTestCase_041457_2);

#define VkglTestCase_041458_1 "dEQP-GLES3.functional.transform_feedback.arr"
#define VkglTestCase_041458_2 "ay_element.separate.triangles.mediump_mat3x4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041458, VkglTestCase_041458_1, VkglTestCase_041458_2);

#define VkglTestCase_041459_1 "dEQP-GLES3.functional.transform_feedback.ar"
#define VkglTestCase_041459_2 "ray_element.separate.triangles.highp_mat3x4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041459, VkglTestCase_041459_1, VkglTestCase_041459_2);

#define VkglTestCase_041460_1 "dEQP-GLES3.functional.transform_feedback.a"
#define VkglTestCase_041460_2 "rray_element.separate.triangles.lowp_mat4x2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041460, VkglTestCase_041460_1, VkglTestCase_041460_2);

#define VkglTestCase_041461_1 "dEQP-GLES3.functional.transform_feedback.arr"
#define VkglTestCase_041461_2 "ay_element.separate.triangles.mediump_mat4x2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041461, VkglTestCase_041461_1, VkglTestCase_041461_2);

#define VkglTestCase_041462_1 "dEQP-GLES3.functional.transform_feedback.ar"
#define VkglTestCase_041462_2 "ray_element.separate.triangles.highp_mat4x2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041462, VkglTestCase_041462_1, VkglTestCase_041462_2);

#define VkglTestCase_041463_1 "dEQP-GLES3.functional.transform_feedback.a"
#define VkglTestCase_041463_2 "rray_element.separate.triangles.lowp_mat4x3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041463, VkglTestCase_041463_1, VkglTestCase_041463_2);

#define VkglTestCase_041464_1 "dEQP-GLES3.functional.transform_feedback.arr"
#define VkglTestCase_041464_2 "ay_element.separate.triangles.mediump_mat4x3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041464, VkglTestCase_041464_1, VkglTestCase_041464_2);

#define VkglTestCase_041465_1 "dEQP-GLES3.functional.transform_feedback.ar"
#define VkglTestCase_041465_2 "ray_element.separate.triangles.highp_mat4x3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041465, VkglTestCase_041465_1, VkglTestCase_041465_2);

#define VkglTestCase_041466_1 "dEQP-GLES3.functional.transform_feedback."
#define VkglTestCase_041466_2 "array_element.separate.triangles.lowp_mat4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041466, VkglTestCase_041466_1, VkglTestCase_041466_2);

#define VkglTestCase_041467_1 "dEQP-GLES3.functional.transform_feedback.ar"
#define VkglTestCase_041467_2 "ray_element.separate.triangles.mediump_mat4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041467, VkglTestCase_041467_1, VkglTestCase_041467_2);

#define VkglTestCase_041468_1 "dEQP-GLES3.functional.transform_feedback.a"
#define VkglTestCase_041468_2 "rray_element.separate.triangles.highp_mat4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041468, VkglTestCase_041468_1, VkglTestCase_041468_2);

#define VkglTestCase_041469_1 "dEQP-GLES3.functional.transform_feedback."
#define VkglTestCase_041469_2 "array_element.separate.triangles.lowp_int"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041469, VkglTestCase_041469_1, VkglTestCase_041469_2);

#define VkglTestCase_041470_1 "dEQP-GLES3.functional.transform_feedback.a"
#define VkglTestCase_041470_2 "rray_element.separate.triangles.mediump_int"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041470, VkglTestCase_041470_1, VkglTestCase_041470_2);

#define VkglTestCase_041471_1 "dEQP-GLES3.functional.transform_feedback."
#define VkglTestCase_041471_2 "array_element.separate.triangles.highp_int"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041471, VkglTestCase_041471_1, VkglTestCase_041471_2);

#define VkglTestCase_041472_1 "dEQP-GLES3.functional.transform_feedback.a"
#define VkglTestCase_041472_2 "rray_element.separate.triangles.lowp_ivec2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041472, VkglTestCase_041472_1, VkglTestCase_041472_2);

#define VkglTestCase_041473_1 "dEQP-GLES3.functional.transform_feedback.ar"
#define VkglTestCase_041473_2 "ray_element.separate.triangles.mediump_ivec2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041473, VkglTestCase_041473_1, VkglTestCase_041473_2);

#define VkglTestCase_041474_1 "dEQP-GLES3.functional.transform_feedback.a"
#define VkglTestCase_041474_2 "rray_element.separate.triangles.highp_ivec2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041474, VkglTestCase_041474_1, VkglTestCase_041474_2);

#define VkglTestCase_041475_1 "dEQP-GLES3.functional.transform_feedback.a"
#define VkglTestCase_041475_2 "rray_element.separate.triangles.lowp_ivec3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041475, VkglTestCase_041475_1, VkglTestCase_041475_2);

#define VkglTestCase_041476_1 "dEQP-GLES3.functional.transform_feedback.ar"
#define VkglTestCase_041476_2 "ray_element.separate.triangles.mediump_ivec3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041476, VkglTestCase_041476_1, VkglTestCase_041476_2);

#define VkglTestCase_041477_1 "dEQP-GLES3.functional.transform_feedback.a"
#define VkglTestCase_041477_2 "rray_element.separate.triangles.highp_ivec3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041477, VkglTestCase_041477_1, VkglTestCase_041477_2);

#define VkglTestCase_041478_1 "dEQP-GLES3.functional.transform_feedback.a"
#define VkglTestCase_041478_2 "rray_element.separate.triangles.lowp_ivec4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041478, VkglTestCase_041478_1, VkglTestCase_041478_2);

#define VkglTestCase_041479_1 "dEQP-GLES3.functional.transform_feedback.ar"
#define VkglTestCase_041479_2 "ray_element.separate.triangles.mediump_ivec4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041479, VkglTestCase_041479_1, VkglTestCase_041479_2);

#define VkglTestCase_041480_1 "dEQP-GLES3.functional.transform_feedback.a"
#define VkglTestCase_041480_2 "rray_element.separate.triangles.highp_ivec4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041480, VkglTestCase_041480_1, VkglTestCase_041480_2);

#define VkglTestCase_041481_1 "dEQP-GLES3.functional.transform_feedback."
#define VkglTestCase_041481_2 "array_element.separate.triangles.lowp_uint"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041481, VkglTestCase_041481_1, VkglTestCase_041481_2);

#define VkglTestCase_041482_1 "dEQP-GLES3.functional.transform_feedback.ar"
#define VkglTestCase_041482_2 "ray_element.separate.triangles.mediump_uint"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041482, VkglTestCase_041482_1, VkglTestCase_041482_2);

#define VkglTestCase_041483_1 "dEQP-GLES3.functional.transform_feedback.a"
#define VkglTestCase_041483_2 "rray_element.separate.triangles.highp_uint"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041483, VkglTestCase_041483_1, VkglTestCase_041483_2);

#define VkglTestCase_041484_1 "dEQP-GLES3.functional.transform_feedback.a"
#define VkglTestCase_041484_2 "rray_element.separate.triangles.lowp_uvec2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041484, VkglTestCase_041484_1, VkglTestCase_041484_2);

#define VkglTestCase_041485_1 "dEQP-GLES3.functional.transform_feedback.ar"
#define VkglTestCase_041485_2 "ray_element.separate.triangles.mediump_uvec2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041485, VkglTestCase_041485_1, VkglTestCase_041485_2);

#define VkglTestCase_041486_1 "dEQP-GLES3.functional.transform_feedback.a"
#define VkglTestCase_041486_2 "rray_element.separate.triangles.highp_uvec2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041486, VkglTestCase_041486_1, VkglTestCase_041486_2);

#define VkglTestCase_041487_1 "dEQP-GLES3.functional.transform_feedback.a"
#define VkglTestCase_041487_2 "rray_element.separate.triangles.lowp_uvec3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041487, VkglTestCase_041487_1, VkglTestCase_041487_2);

#define VkglTestCase_041488_1 "dEQP-GLES3.functional.transform_feedback.ar"
#define VkglTestCase_041488_2 "ray_element.separate.triangles.mediump_uvec3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041488, VkglTestCase_041488_1, VkglTestCase_041488_2);

#define VkglTestCase_041489_1 "dEQP-GLES3.functional.transform_feedback.a"
#define VkglTestCase_041489_2 "rray_element.separate.triangles.highp_uvec3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041489, VkglTestCase_041489_1, VkglTestCase_041489_2);

#define VkglTestCase_041490_1 "dEQP-GLES3.functional.transform_feedback.a"
#define VkglTestCase_041490_2 "rray_element.separate.triangles.lowp_uvec4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041490, VkglTestCase_041490_1, VkglTestCase_041490_2);

#define VkglTestCase_041491_1 "dEQP-GLES3.functional.transform_feedback.ar"
#define VkglTestCase_041491_2 "ray_element.separate.triangles.mediump_uvec4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041491, VkglTestCase_041491_1, VkglTestCase_041491_2);

#define VkglTestCase_041492_1 "dEQP-GLES3.functional.transform_feedback.a"
#define VkglTestCase_041492_2 "rray_element.separate.triangles.highp_uvec4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041492, VkglTestCase_041492_1, VkglTestCase_041492_2);

#define VkglTestCase_041756_1 "dEQP-GLES3.functional.transform_fe"
#define VkglTestCase_041756_2 "edback.random.separate.triangles.1"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041756, VkglTestCase_041756_1, VkglTestCase_041756_2);

#define VkglTestCase_041757_1 "dEQP-GLES3.functional.transform_fe"
#define VkglTestCase_041757_2 "edback.random.separate.triangles.2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041757, VkglTestCase_041757_1, VkglTestCase_041757_2);

#define VkglTestCase_041758_1 "dEQP-GLES3.functional.transform_fe"
#define VkglTestCase_041758_2 "edback.random.separate.triangles.3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041758, VkglTestCase_041758_1, VkglTestCase_041758_2);

#define VkglTestCase_041759_1 "dEQP-GLES3.functional.transform_fe"
#define VkglTestCase_041759_2 "edback.random.separate.triangles.4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041759, VkglTestCase_041759_1, VkglTestCase_041759_2);

#define VkglTestCase_041760_1 "dEQP-GLES3.functional.transform_fe"
#define VkglTestCase_041760_2 "edback.random.separate.triangles.5"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041760, VkglTestCase_041760_1, VkglTestCase_041760_2);

#define VkglTestCase_041761_1 "dEQP-GLES3.functional.transform_fe"
#define VkglTestCase_041761_2 "edback.random.separate.triangles.6"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041761, VkglTestCase_041761_1, VkglTestCase_041761_2);

#define VkglTestCase_041762_1 "dEQP-GLES3.functional.transform_fe"
#define VkglTestCase_041762_2 "edback.random.separate.triangles.7"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041762, VkglTestCase_041762_1, VkglTestCase_041762_2);

#define VkglTestCase_041763_1 "dEQP-GLES3.functional.transform_fe"
#define VkglTestCase_041763_2 "edback.random.separate.triangles.8"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041763, VkglTestCase_041763_1, VkglTestCase_041763_2);

#define VkglTestCase_041764_1 "dEQP-GLES3.functional.transform_fe"
#define VkglTestCase_041764_2 "edback.random.separate.triangles.9"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041764, VkglTestCase_041764_1, VkglTestCase_041764_2);

#define VkglTestCase_041765_1 "dEQP-GLES3.functional.transform_fe"
#define VkglTestCase_041765_2 "edback.random.separate.triangles.10"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041765, VkglTestCase_041765_1, VkglTestCase_041765_2);

#define VkglTestCase_041816_1 "dEQP-GLES3.functional.transform_feedback.ra"
#define VkglTestCase_041816_2 "ndom_full_array_capture.separate.triangles.1"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041816, VkglTestCase_041816_1, VkglTestCase_041816_2);

#define VkglTestCase_041817_1 "dEQP-GLES3.functional.transform_feedback.ra"
#define VkglTestCase_041817_2 "ndom_full_array_capture.separate.triangles.2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041817, VkglTestCase_041817_1, VkglTestCase_041817_2);

#define VkglTestCase_041818_1 "dEQP-GLES3.functional.transform_feedback.ra"
#define VkglTestCase_041818_2 "ndom_full_array_capture.separate.triangles.3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041818, VkglTestCase_041818_1, VkglTestCase_041818_2);

#define VkglTestCase_041819_1 "dEQP-GLES3.functional.transform_feedback.ra"
#define VkglTestCase_041819_2 "ndom_full_array_capture.separate.triangles.4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041819, VkglTestCase_041819_1, VkglTestCase_041819_2);

#define VkglTestCase_041820_1 "dEQP-GLES3.functional.transform_feedback.ra"
#define VkglTestCase_041820_2 "ndom_full_array_capture.separate.triangles.5"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041820, VkglTestCase_041820_1, VkglTestCase_041820_2);

#define VkglTestCase_041821_1 "dEQP-GLES3.functional.transform_feedback.ra"
#define VkglTestCase_041821_2 "ndom_full_array_capture.separate.triangles.6"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041821, VkglTestCase_041821_1, VkglTestCase_041821_2);

#define VkglTestCase_041822_1 "dEQP-GLES3.functional.transform_feedback.ra"
#define VkglTestCase_041822_2 "ndom_full_array_capture.separate.triangles.7"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041822, VkglTestCase_041822_1, VkglTestCase_041822_2);

#define VkglTestCase_041823_1 "dEQP-GLES3.functional.transform_feedback.ra"
#define VkglTestCase_041823_2 "ndom_full_array_capture.separate.triangles.8"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041823, VkglTestCase_041823_1, VkglTestCase_041823_2);

#define VkglTestCase_041824_1 "dEQP-GLES3.functional.transform_feedback.ra"
#define VkglTestCase_041824_2 "ndom_full_array_capture.separate.triangles.9"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041824, VkglTestCase_041824_1, VkglTestCase_041824_2);

#define VkglTestCase_041825_1 "dEQP-GLES3.functional.transform_feedback.ran"
#define VkglTestCase_041825_2 "dom_full_array_capture.separate.triangles.10"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041825, VkglTestCase_041825_1, VkglTestCase_041825_2);
