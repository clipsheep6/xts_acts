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

#define VkglTestCase_040737_1 "dEQP-GLES3.functional.transform_feedback."
#define VkglTestCase_040737_2 "basic_types.interleaved.points.lowp_float"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040737, VkglTestCase_040737_1, VkglTestCase_040737_2);

#define VkglTestCase_040738_1 "dEQP-GLES3.functional.transform_feedback.b"
#define VkglTestCase_040738_2 "asic_types.interleaved.points.mediump_float"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040738, VkglTestCase_040738_1, VkglTestCase_040738_2);

#define VkglTestCase_040739_1 "dEQP-GLES3.functional.transform_feedback."
#define VkglTestCase_040739_2 "basic_types.interleaved.points.highp_float"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040739, VkglTestCase_040739_1, VkglTestCase_040739_2);

#define VkglTestCase_040740_1 "dEQP-GLES3.functional.transform_feedback"
#define VkglTestCase_040740_2 ".basic_types.interleaved.points.lowp_vec2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040740, VkglTestCase_040740_1, VkglTestCase_040740_2);

#define VkglTestCase_040741_1 "dEQP-GLES3.functional.transform_feedback.b"
#define VkglTestCase_040741_2 "asic_types.interleaved.points.mediump_vec2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040741, VkglTestCase_040741_1, VkglTestCase_040741_2);

#define VkglTestCase_040742_1 "dEQP-GLES3.functional.transform_feedback."
#define VkglTestCase_040742_2 "basic_types.interleaved.points.highp_vec2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040742, VkglTestCase_040742_1, VkglTestCase_040742_2);

#define VkglTestCase_040743_1 "dEQP-GLES3.functional.transform_feedback"
#define VkglTestCase_040743_2 ".basic_types.interleaved.points.lowp_vec3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040743, VkglTestCase_040743_1, VkglTestCase_040743_2);

#define VkglTestCase_040744_1 "dEQP-GLES3.functional.transform_feedback.b"
#define VkglTestCase_040744_2 "asic_types.interleaved.points.mediump_vec3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040744, VkglTestCase_040744_1, VkglTestCase_040744_2);

#define VkglTestCase_040745_1 "dEQP-GLES3.functional.transform_feedback."
#define VkglTestCase_040745_2 "basic_types.interleaved.points.highp_vec3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040745, VkglTestCase_040745_1, VkglTestCase_040745_2);

#define VkglTestCase_040746_1 "dEQP-GLES3.functional.transform_feedback"
#define VkglTestCase_040746_2 ".basic_types.interleaved.points.lowp_vec4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040746, VkglTestCase_040746_1, VkglTestCase_040746_2);

#define VkglTestCase_040747_1 "dEQP-GLES3.functional.transform_feedback.b"
#define VkglTestCase_040747_2 "asic_types.interleaved.points.mediump_vec4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040747, VkglTestCase_040747_1, VkglTestCase_040747_2);

#define VkglTestCase_040748_1 "dEQP-GLES3.functional.transform_feedback."
#define VkglTestCase_040748_2 "basic_types.interleaved.points.highp_vec4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040748, VkglTestCase_040748_1, VkglTestCase_040748_2);

#define VkglTestCase_040749_1 "dEQP-GLES3.functional.transform_feedback"
#define VkglTestCase_040749_2 ".basic_types.interleaved.points.lowp_mat2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040749, VkglTestCase_040749_1, VkglTestCase_040749_2);

#define VkglTestCase_040750_1 "dEQP-GLES3.functional.transform_feedback.b"
#define VkglTestCase_040750_2 "asic_types.interleaved.points.mediump_mat2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040750, VkglTestCase_040750_1, VkglTestCase_040750_2);

#define VkglTestCase_040751_1 "dEQP-GLES3.functional.transform_feedback."
#define VkglTestCase_040751_2 "basic_types.interleaved.points.highp_mat2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040751, VkglTestCase_040751_1, VkglTestCase_040751_2);

#define VkglTestCase_040752_1 "dEQP-GLES3.functional.transform_feedback."
#define VkglTestCase_040752_2 "basic_types.interleaved.points.lowp_mat2x3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040752, VkglTestCase_040752_1, VkglTestCase_040752_2);

#define VkglTestCase_040753_1 "dEQP-GLES3.functional.transform_feedback.ba"
#define VkglTestCase_040753_2 "sic_types.interleaved.points.mediump_mat2x3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040753, VkglTestCase_040753_1, VkglTestCase_040753_2);

#define VkglTestCase_040754_1 "dEQP-GLES3.functional.transform_feedback.b"
#define VkglTestCase_040754_2 "asic_types.interleaved.points.highp_mat2x3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040754, VkglTestCase_040754_1, VkglTestCase_040754_2);

#define VkglTestCase_040755_1 "dEQP-GLES3.functional.transform_feedback."
#define VkglTestCase_040755_2 "basic_types.interleaved.points.lowp_mat2x4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040755, VkglTestCase_040755_1, VkglTestCase_040755_2);

#define VkglTestCase_040756_1 "dEQP-GLES3.functional.transform_feedback.ba"
#define VkglTestCase_040756_2 "sic_types.interleaved.points.mediump_mat2x4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040756, VkglTestCase_040756_1, VkglTestCase_040756_2);

#define VkglTestCase_040757_1 "dEQP-GLES3.functional.transform_feedback.b"
#define VkglTestCase_040757_2 "asic_types.interleaved.points.highp_mat2x4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040757, VkglTestCase_040757_1, VkglTestCase_040757_2);

#define VkglTestCase_040758_1 "dEQP-GLES3.functional.transform_feedback."
#define VkglTestCase_040758_2 "basic_types.interleaved.points.lowp_mat3x2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040758, VkglTestCase_040758_1, VkglTestCase_040758_2);

#define VkglTestCase_040759_1 "dEQP-GLES3.functional.transform_feedback.ba"
#define VkglTestCase_040759_2 "sic_types.interleaved.points.mediump_mat3x2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040759, VkglTestCase_040759_1, VkglTestCase_040759_2);

#define VkglTestCase_040760_1 "dEQP-GLES3.functional.transform_feedback.b"
#define VkglTestCase_040760_2 "asic_types.interleaved.points.highp_mat3x2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040760, VkglTestCase_040760_1, VkglTestCase_040760_2);

#define VkglTestCase_040761_1 "dEQP-GLES3.functional.transform_feedback"
#define VkglTestCase_040761_2 ".basic_types.interleaved.points.lowp_mat3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040761, VkglTestCase_040761_1, VkglTestCase_040761_2);

#define VkglTestCase_040762_1 "dEQP-GLES3.functional.transform_feedback.b"
#define VkglTestCase_040762_2 "asic_types.interleaved.points.mediump_mat3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040762, VkglTestCase_040762_1, VkglTestCase_040762_2);

#define VkglTestCase_040763_1 "dEQP-GLES3.functional.transform_feedback."
#define VkglTestCase_040763_2 "basic_types.interleaved.points.highp_mat3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040763, VkglTestCase_040763_1, VkglTestCase_040763_2);

#define VkglTestCase_040764_1 "dEQP-GLES3.functional.transform_feedback."
#define VkglTestCase_040764_2 "basic_types.interleaved.points.lowp_mat3x4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040764, VkglTestCase_040764_1, VkglTestCase_040764_2);

#define VkglTestCase_040765_1 "dEQP-GLES3.functional.transform_feedback.ba"
#define VkglTestCase_040765_2 "sic_types.interleaved.points.mediump_mat3x4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040765, VkglTestCase_040765_1, VkglTestCase_040765_2);

#define VkglTestCase_040766_1 "dEQP-GLES3.functional.transform_feedback.b"
#define VkglTestCase_040766_2 "asic_types.interleaved.points.highp_mat3x4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040766, VkglTestCase_040766_1, VkglTestCase_040766_2);

#define VkglTestCase_040767_1 "dEQP-GLES3.functional.transform_feedback."
#define VkglTestCase_040767_2 "basic_types.interleaved.points.lowp_mat4x2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040767, VkglTestCase_040767_1, VkglTestCase_040767_2);

#define VkglTestCase_040768_1 "dEQP-GLES3.functional.transform_feedback.ba"
#define VkglTestCase_040768_2 "sic_types.interleaved.points.mediump_mat4x2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040768, VkglTestCase_040768_1, VkglTestCase_040768_2);

#define VkglTestCase_040769_1 "dEQP-GLES3.functional.transform_feedback.b"
#define VkglTestCase_040769_2 "asic_types.interleaved.points.highp_mat4x2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040769, VkglTestCase_040769_1, VkglTestCase_040769_2);

#define VkglTestCase_040770_1 "dEQP-GLES3.functional.transform_feedback."
#define VkglTestCase_040770_2 "basic_types.interleaved.points.lowp_mat4x3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040770, VkglTestCase_040770_1, VkglTestCase_040770_2);

#define VkglTestCase_040771_1 "dEQP-GLES3.functional.transform_feedback.ba"
#define VkglTestCase_040771_2 "sic_types.interleaved.points.mediump_mat4x3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040771, VkglTestCase_040771_1, VkglTestCase_040771_2);

#define VkglTestCase_040772_1 "dEQP-GLES3.functional.transform_feedback.b"
#define VkglTestCase_040772_2 "asic_types.interleaved.points.highp_mat4x3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040772, VkglTestCase_040772_1, VkglTestCase_040772_2);

#define VkglTestCase_040773_1 "dEQP-GLES3.functional.transform_feedback"
#define VkglTestCase_040773_2 ".basic_types.interleaved.points.lowp_mat4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040773, VkglTestCase_040773_1, VkglTestCase_040773_2);

#define VkglTestCase_040774_1 "dEQP-GLES3.functional.transform_feedback.b"
#define VkglTestCase_040774_2 "asic_types.interleaved.points.mediump_mat4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040774, VkglTestCase_040774_1, VkglTestCase_040774_2);

#define VkglTestCase_040775_1 "dEQP-GLES3.functional.transform_feedback."
#define VkglTestCase_040775_2 "basic_types.interleaved.points.highp_mat4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040775, VkglTestCase_040775_1, VkglTestCase_040775_2);

#define VkglTestCase_040776_1 "dEQP-GLES3.functional.transform_feedback"
#define VkglTestCase_040776_2 ".basic_types.interleaved.points.lowp_int"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040776, VkglTestCase_040776_1, VkglTestCase_040776_2);

#define VkglTestCase_040777_1 "dEQP-GLES3.functional.transform_feedback."
#define VkglTestCase_040777_2 "basic_types.interleaved.points.mediump_int"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040777, VkglTestCase_040777_1, VkglTestCase_040777_2);

#define VkglTestCase_040778_1 "dEQP-GLES3.functional.transform_feedback"
#define VkglTestCase_040778_2 ".basic_types.interleaved.points.highp_int"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040778, VkglTestCase_040778_1, VkglTestCase_040778_2);

#define VkglTestCase_040779_1 "dEQP-GLES3.functional.transform_feedback."
#define VkglTestCase_040779_2 "basic_types.interleaved.points.lowp_ivec2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040779, VkglTestCase_040779_1, VkglTestCase_040779_2);

#define VkglTestCase_040780_1 "dEQP-GLES3.functional.transform_feedback.b"
#define VkglTestCase_040780_2 "asic_types.interleaved.points.mediump_ivec2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040780, VkglTestCase_040780_1, VkglTestCase_040780_2);

#define VkglTestCase_040781_1 "dEQP-GLES3.functional.transform_feedback."
#define VkglTestCase_040781_2 "basic_types.interleaved.points.highp_ivec2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040781, VkglTestCase_040781_1, VkglTestCase_040781_2);

#define VkglTestCase_040782_1 "dEQP-GLES3.functional.transform_feedback."
#define VkglTestCase_040782_2 "basic_types.interleaved.points.lowp_ivec3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040782, VkglTestCase_040782_1, VkglTestCase_040782_2);

#define VkglTestCase_040783_1 "dEQP-GLES3.functional.transform_feedback.b"
#define VkglTestCase_040783_2 "asic_types.interleaved.points.mediump_ivec3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040783, VkglTestCase_040783_1, VkglTestCase_040783_2);

#define VkglTestCase_040784_1 "dEQP-GLES3.functional.transform_feedback."
#define VkglTestCase_040784_2 "basic_types.interleaved.points.highp_ivec3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040784, VkglTestCase_040784_1, VkglTestCase_040784_2);

#define VkglTestCase_040785_1 "dEQP-GLES3.functional.transform_feedback."
#define VkglTestCase_040785_2 "basic_types.interleaved.points.lowp_ivec4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040785, VkglTestCase_040785_1, VkglTestCase_040785_2);

#define VkglTestCase_040786_1 "dEQP-GLES3.functional.transform_feedback.b"
#define VkglTestCase_040786_2 "asic_types.interleaved.points.mediump_ivec4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040786, VkglTestCase_040786_1, VkglTestCase_040786_2);

#define VkglTestCase_040787_1 "dEQP-GLES3.functional.transform_feedback."
#define VkglTestCase_040787_2 "basic_types.interleaved.points.highp_ivec4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040787, VkglTestCase_040787_1, VkglTestCase_040787_2);

#define VkglTestCase_040788_1 "dEQP-GLES3.functional.transform_feedback"
#define VkglTestCase_040788_2 ".basic_types.interleaved.points.lowp_uint"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040788, VkglTestCase_040788_1, VkglTestCase_040788_2);

#define VkglTestCase_040789_1 "dEQP-GLES3.functional.transform_feedback.b"
#define VkglTestCase_040789_2 "asic_types.interleaved.points.mediump_uint"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040789, VkglTestCase_040789_1, VkglTestCase_040789_2);

#define VkglTestCase_040790_1 "dEQP-GLES3.functional.transform_feedback."
#define VkglTestCase_040790_2 "basic_types.interleaved.points.highp_uint"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040790, VkglTestCase_040790_1, VkglTestCase_040790_2);

#define VkglTestCase_040791_1 "dEQP-GLES3.functional.transform_feedback."
#define VkglTestCase_040791_2 "basic_types.interleaved.points.lowp_uvec2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040791, VkglTestCase_040791_1, VkglTestCase_040791_2);

#define VkglTestCase_040792_1 "dEQP-GLES3.functional.transform_feedback.b"
#define VkglTestCase_040792_2 "asic_types.interleaved.points.mediump_uvec2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040792, VkglTestCase_040792_1, VkglTestCase_040792_2);

#define VkglTestCase_040793_1 "dEQP-GLES3.functional.transform_feedback."
#define VkglTestCase_040793_2 "basic_types.interleaved.points.highp_uvec2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040793, VkglTestCase_040793_1, VkglTestCase_040793_2);

#define VkglTestCase_040794_1 "dEQP-GLES3.functional.transform_feedback."
#define VkglTestCase_040794_2 "basic_types.interleaved.points.lowp_uvec3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040794, VkglTestCase_040794_1, VkglTestCase_040794_2);

#define VkglTestCase_040795_1 "dEQP-GLES3.functional.transform_feedback.b"
#define VkglTestCase_040795_2 "asic_types.interleaved.points.mediump_uvec3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040795, VkglTestCase_040795_1, VkglTestCase_040795_2);

#define VkglTestCase_040796_1 "dEQP-GLES3.functional.transform_feedback."
#define VkglTestCase_040796_2 "basic_types.interleaved.points.highp_uvec3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040796, VkglTestCase_040796_1, VkglTestCase_040796_2);

#define VkglTestCase_040797_1 "dEQP-GLES3.functional.transform_feedback."
#define VkglTestCase_040797_2 "basic_types.interleaved.points.lowp_uvec4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040797, VkglTestCase_040797_1, VkglTestCase_040797_2);

#define VkglTestCase_040798_1 "dEQP-GLES3.functional.transform_feedback.b"
#define VkglTestCase_040798_2 "asic_types.interleaved.points.mediump_uvec4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040798, VkglTestCase_040798_1, VkglTestCase_040798_2);

#define VkglTestCase_040799_1 "dEQP-GLES3.functional.transform_feedback."
#define VkglTestCase_040799_2 "basic_types.interleaved.points.highp_uvec4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040799, VkglTestCase_040799_1, VkglTestCase_040799_2);

#define VkglTestCase_041115_1 "dEQP-GLES3.functional.transform_feedba"
#define VkglTestCase_041115_2 "ck.array.interleaved.points.lowp_float"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041115, VkglTestCase_041115_1, VkglTestCase_041115_2);

#define VkglTestCase_041116_1 "dEQP-GLES3.functional.transform_feedbac"
#define VkglTestCase_041116_2 "k.array.interleaved.points.mediump_float"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041116, VkglTestCase_041116_1, VkglTestCase_041116_2);

#define VkglTestCase_041117_1 "dEQP-GLES3.functional.transform_feedba"
#define VkglTestCase_041117_2 "ck.array.interleaved.points.highp_float"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041117, VkglTestCase_041117_1, VkglTestCase_041117_2);

#define VkglTestCase_041118_1 "dEQP-GLES3.functional.transform_feedb"
#define VkglTestCase_041118_2 "ack.array.interleaved.points.lowp_vec2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041118, VkglTestCase_041118_1, VkglTestCase_041118_2);

#define VkglTestCase_041119_1 "dEQP-GLES3.functional.transform_feedbac"
#define VkglTestCase_041119_2 "k.array.interleaved.points.mediump_vec2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041119, VkglTestCase_041119_1, VkglTestCase_041119_2);

#define VkglTestCase_041120_1 "dEQP-GLES3.functional.transform_feedba"
#define VkglTestCase_041120_2 "ck.array.interleaved.points.highp_vec2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041120, VkglTestCase_041120_1, VkglTestCase_041120_2);

#define VkglTestCase_041121_1 "dEQP-GLES3.functional.transform_feedb"
#define VkglTestCase_041121_2 "ack.array.interleaved.points.lowp_vec3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041121, VkglTestCase_041121_1, VkglTestCase_041121_2);

#define VkglTestCase_041122_1 "dEQP-GLES3.functional.transform_feedbac"
#define VkglTestCase_041122_2 "k.array.interleaved.points.mediump_vec3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041122, VkglTestCase_041122_1, VkglTestCase_041122_2);

#define VkglTestCase_041123_1 "dEQP-GLES3.functional.transform_feedba"
#define VkglTestCase_041123_2 "ck.array.interleaved.points.highp_vec3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041123, VkglTestCase_041123_1, VkglTestCase_041123_2);

#define VkglTestCase_041124_1 "dEQP-GLES3.functional.transform_feedb"
#define VkglTestCase_041124_2 "ack.array.interleaved.points.lowp_vec4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041124, VkglTestCase_041124_1, VkglTestCase_041124_2);

#define VkglTestCase_041125_1 "dEQP-GLES3.functional.transform_feedbac"
#define VkglTestCase_041125_2 "k.array.interleaved.points.mediump_vec4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041125, VkglTestCase_041125_1, VkglTestCase_041125_2);

#define VkglTestCase_041126_1 "dEQP-GLES3.functional.transform_feedba"
#define VkglTestCase_041126_2 "ck.array.interleaved.points.highp_vec4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041126, VkglTestCase_041126_1, VkglTestCase_041126_2);

#define VkglTestCase_041127_1 "dEQP-GLES3.functional.transform_feedb"
#define VkglTestCase_041127_2 "ack.array.interleaved.points.lowp_mat2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041127, VkglTestCase_041127_1, VkglTestCase_041127_2);

#define VkglTestCase_041128_1 "dEQP-GLES3.functional.transform_feedbac"
#define VkglTestCase_041128_2 "k.array.interleaved.points.mediump_mat2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041128, VkglTestCase_041128_1, VkglTestCase_041128_2);

#define VkglTestCase_041129_1 "dEQP-GLES3.functional.transform_feedba"
#define VkglTestCase_041129_2 "ck.array.interleaved.points.highp_mat2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041129, VkglTestCase_041129_1, VkglTestCase_041129_2);

#define VkglTestCase_041130_1 "dEQP-GLES3.functional.transform_feedba"
#define VkglTestCase_041130_2 "ck.array.interleaved.points.lowp_mat2x3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041130, VkglTestCase_041130_1, VkglTestCase_041130_2);

#define VkglTestCase_041131_1 "dEQP-GLES3.functional.transform_feedback"
#define VkglTestCase_041131_2 ".array.interleaved.points.mediump_mat2x3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041131, VkglTestCase_041131_1, VkglTestCase_041131_2);

#define VkglTestCase_041132_1 "dEQP-GLES3.functional.transform_feedbac"
#define VkglTestCase_041132_2 "k.array.interleaved.points.highp_mat2x3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041132, VkglTestCase_041132_1, VkglTestCase_041132_2);

#define VkglTestCase_041133_1 "dEQP-GLES3.functional.transform_feedba"
#define VkglTestCase_041133_2 "ck.array.interleaved.points.lowp_mat2x4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041133, VkglTestCase_041133_1, VkglTestCase_041133_2);

#define VkglTestCase_041134_1 "dEQP-GLES3.functional.transform_feedback"
#define VkglTestCase_041134_2 ".array.interleaved.points.mediump_mat2x4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041134, VkglTestCase_041134_1, VkglTestCase_041134_2);

#define VkglTestCase_041135_1 "dEQP-GLES3.functional.transform_feedbac"
#define VkglTestCase_041135_2 "k.array.interleaved.points.highp_mat2x4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041135, VkglTestCase_041135_1, VkglTestCase_041135_2);

#define VkglTestCase_041136_1 "dEQP-GLES3.functional.transform_feedba"
#define VkglTestCase_041136_2 "ck.array.interleaved.points.lowp_mat3x2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041136, VkglTestCase_041136_1, VkglTestCase_041136_2);

#define VkglTestCase_041137_1 "dEQP-GLES3.functional.transform_feedback"
#define VkglTestCase_041137_2 ".array.interleaved.points.mediump_mat3x2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041137, VkglTestCase_041137_1, VkglTestCase_041137_2);

#define VkglTestCase_041138_1 "dEQP-GLES3.functional.transform_feedbac"
#define VkglTestCase_041138_2 "k.array.interleaved.points.highp_mat3x2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041138, VkglTestCase_041138_1, VkglTestCase_041138_2);

#define VkglTestCase_041139_1 "dEQP-GLES3.functional.transform_feedb"
#define VkglTestCase_041139_2 "ack.array.interleaved.points.lowp_mat3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041139, VkglTestCase_041139_1, VkglTestCase_041139_2);

#define VkglTestCase_041140_1 "dEQP-GLES3.functional.transform_feedbac"
#define VkglTestCase_041140_2 "k.array.interleaved.points.mediump_mat3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041140, VkglTestCase_041140_1, VkglTestCase_041140_2);

#define VkglTestCase_041141_1 "dEQP-GLES3.functional.transform_feedba"
#define VkglTestCase_041141_2 "ck.array.interleaved.points.highp_mat3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041141, VkglTestCase_041141_1, VkglTestCase_041141_2);

#define VkglTestCase_041142_1 "dEQP-GLES3.functional.transform_feedba"
#define VkglTestCase_041142_2 "ck.array.interleaved.points.lowp_mat3x4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041142, VkglTestCase_041142_1, VkglTestCase_041142_2);

#define VkglTestCase_041143_1 "dEQP-GLES3.functional.transform_feedback"
#define VkglTestCase_041143_2 ".array.interleaved.points.mediump_mat3x4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041143, VkglTestCase_041143_1, VkglTestCase_041143_2);

#define VkglTestCase_041144_1 "dEQP-GLES3.functional.transform_feedbac"
#define VkglTestCase_041144_2 "k.array.interleaved.points.highp_mat3x4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041144, VkglTestCase_041144_1, VkglTestCase_041144_2);

#define VkglTestCase_041145_1 "dEQP-GLES3.functional.transform_feedba"
#define VkglTestCase_041145_2 "ck.array.interleaved.points.lowp_mat4x2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041145, VkglTestCase_041145_1, VkglTestCase_041145_2);

#define VkglTestCase_041146_1 "dEQP-GLES3.functional.transform_feedback"
#define VkglTestCase_041146_2 ".array.interleaved.points.mediump_mat4x2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041146, VkglTestCase_041146_1, VkglTestCase_041146_2);

#define VkglTestCase_041147_1 "dEQP-GLES3.functional.transform_feedbac"
#define VkglTestCase_041147_2 "k.array.interleaved.points.highp_mat4x2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041147, VkglTestCase_041147_1, VkglTestCase_041147_2);

#define VkglTestCase_041148_1 "dEQP-GLES3.functional.transform_feedba"
#define VkglTestCase_041148_2 "ck.array.interleaved.points.lowp_mat4x3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041148, VkglTestCase_041148_1, VkglTestCase_041148_2);

#define VkglTestCase_041149_1 "dEQP-GLES3.functional.transform_feedback"
#define VkglTestCase_041149_2 ".array.interleaved.points.mediump_mat4x3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041149, VkglTestCase_041149_1, VkglTestCase_041149_2);

#define VkglTestCase_041150_1 "dEQP-GLES3.functional.transform_feedbac"
#define VkglTestCase_041150_2 "k.array.interleaved.points.highp_mat4x3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041150, VkglTestCase_041150_1, VkglTestCase_041150_2);

#define VkglTestCase_041151_1 "dEQP-GLES3.functional.transform_feedb"
#define VkglTestCase_041151_2 "ack.array.interleaved.points.lowp_mat4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041151, VkglTestCase_041151_1, VkglTestCase_041151_2);

#define VkglTestCase_041152_1 "dEQP-GLES3.functional.transform_feedbac"
#define VkglTestCase_041152_2 "k.array.interleaved.points.mediump_mat4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041152, VkglTestCase_041152_1, VkglTestCase_041152_2);

#define VkglTestCase_041153_1 "dEQP-GLES3.functional.transform_feedba"
#define VkglTestCase_041153_2 "ck.array.interleaved.points.highp_mat4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041153, VkglTestCase_041153_1, VkglTestCase_041153_2);

#define VkglTestCase_041154_1 "dEQP-GLES3.functional.transform_feedb"
#define VkglTestCase_041154_2 "ack.array.interleaved.points.lowp_int"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041154, VkglTestCase_041154_1, VkglTestCase_041154_2);

#define VkglTestCase_041155_1 "dEQP-GLES3.functional.transform_feedba"
#define VkglTestCase_041155_2 "ck.array.interleaved.points.mediump_int"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041155, VkglTestCase_041155_1, VkglTestCase_041155_2);

#define VkglTestCase_041156_1 "dEQP-GLES3.functional.transform_feedb"
#define VkglTestCase_041156_2 "ack.array.interleaved.points.highp_int"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041156, VkglTestCase_041156_1, VkglTestCase_041156_2);

#define VkglTestCase_041157_1 "dEQP-GLES3.functional.transform_feedba"
#define VkglTestCase_041157_2 "ck.array.interleaved.points.lowp_ivec2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041157, VkglTestCase_041157_1, VkglTestCase_041157_2);

#define VkglTestCase_041158_1 "dEQP-GLES3.functional.transform_feedbac"
#define VkglTestCase_041158_2 "k.array.interleaved.points.mediump_ivec2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041158, VkglTestCase_041158_1, VkglTestCase_041158_2);

#define VkglTestCase_041159_1 "dEQP-GLES3.functional.transform_feedba"
#define VkglTestCase_041159_2 "ck.array.interleaved.points.highp_ivec2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041159, VkglTestCase_041159_1, VkglTestCase_041159_2);

#define VkglTestCase_041160_1 "dEQP-GLES3.functional.transform_feedba"
#define VkglTestCase_041160_2 "ck.array.interleaved.points.lowp_ivec3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041160, VkglTestCase_041160_1, VkglTestCase_041160_2);

#define VkglTestCase_041161_1 "dEQP-GLES3.functional.transform_feedbac"
#define VkglTestCase_041161_2 "k.array.interleaved.points.mediump_ivec3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041161, VkglTestCase_041161_1, VkglTestCase_041161_2);

#define VkglTestCase_041162_1 "dEQP-GLES3.functional.transform_feedba"
#define VkglTestCase_041162_2 "ck.array.interleaved.points.highp_ivec3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041162, VkglTestCase_041162_1, VkglTestCase_041162_2);

#define VkglTestCase_041163_1 "dEQP-GLES3.functional.transform_feedba"
#define VkglTestCase_041163_2 "ck.array.interleaved.points.lowp_ivec4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041163, VkglTestCase_041163_1, VkglTestCase_041163_2);

#define VkglTestCase_041164_1 "dEQP-GLES3.functional.transform_feedbac"
#define VkglTestCase_041164_2 "k.array.interleaved.points.mediump_ivec4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041164, VkglTestCase_041164_1, VkglTestCase_041164_2);

#define VkglTestCase_041165_1 "dEQP-GLES3.functional.transform_feedba"
#define VkglTestCase_041165_2 "ck.array.interleaved.points.highp_ivec4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041165, VkglTestCase_041165_1, VkglTestCase_041165_2);

#define VkglTestCase_041166_1 "dEQP-GLES3.functional.transform_feedb"
#define VkglTestCase_041166_2 "ack.array.interleaved.points.lowp_uint"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041166, VkglTestCase_041166_1, VkglTestCase_041166_2);

#define VkglTestCase_041167_1 "dEQP-GLES3.functional.transform_feedbac"
#define VkglTestCase_041167_2 "k.array.interleaved.points.mediump_uint"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041167, VkglTestCase_041167_1, VkglTestCase_041167_2);

#define VkglTestCase_041168_1 "dEQP-GLES3.functional.transform_feedba"
#define VkglTestCase_041168_2 "ck.array.interleaved.points.highp_uint"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041168, VkglTestCase_041168_1, VkglTestCase_041168_2);

#define VkglTestCase_041169_1 "dEQP-GLES3.functional.transform_feedba"
#define VkglTestCase_041169_2 "ck.array.interleaved.points.lowp_uvec2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041169, VkglTestCase_041169_1, VkglTestCase_041169_2);

#define VkglTestCase_041170_1 "dEQP-GLES3.functional.transform_feedbac"
#define VkglTestCase_041170_2 "k.array.interleaved.points.mediump_uvec2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041170, VkglTestCase_041170_1, VkglTestCase_041170_2);

#define VkglTestCase_041171_1 "dEQP-GLES3.functional.transform_feedba"
#define VkglTestCase_041171_2 "ck.array.interleaved.points.highp_uvec2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041171, VkglTestCase_041171_1, VkglTestCase_041171_2);

#define VkglTestCase_041172_1 "dEQP-GLES3.functional.transform_feedba"
#define VkglTestCase_041172_2 "ck.array.interleaved.points.lowp_uvec3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041172, VkglTestCase_041172_1, VkglTestCase_041172_2);

#define VkglTestCase_041173_1 "dEQP-GLES3.functional.transform_feedbac"
#define VkglTestCase_041173_2 "k.array.interleaved.points.mediump_uvec3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041173, VkglTestCase_041173_1, VkglTestCase_041173_2);

#define VkglTestCase_041174_1 "dEQP-GLES3.functional.transform_feedba"
#define VkglTestCase_041174_2 "ck.array.interleaved.points.highp_uvec3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041174, VkglTestCase_041174_1, VkglTestCase_041174_2);

#define VkglTestCase_041175_1 "dEQP-GLES3.functional.transform_feedba"
#define VkglTestCase_041175_2 "ck.array.interleaved.points.lowp_uvec4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041175, VkglTestCase_041175_1, VkglTestCase_041175_2);

#define VkglTestCase_041176_1 "dEQP-GLES3.functional.transform_feedbac"
#define VkglTestCase_041176_2 "k.array.interleaved.points.mediump_uvec4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041176, VkglTestCase_041176_1, VkglTestCase_041176_2);

#define VkglTestCase_041177_1 "dEQP-GLES3.functional.transform_feedba"
#define VkglTestCase_041177_2 "ck.array.interleaved.points.highp_uvec4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041177, VkglTestCase_041177_1, VkglTestCase_041177_2);

#define VkglTestCase_041493_1 "dEQP-GLES3.functional.transform_feedback.a"
#define VkglTestCase_041493_2 "rray_element.interleaved.points.lowp_float"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041493, VkglTestCase_041493_1, VkglTestCase_041493_2);

#define VkglTestCase_041494_1 "dEQP-GLES3.functional.transform_feedback.ar"
#define VkglTestCase_041494_2 "ray_element.interleaved.points.mediump_float"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041494, VkglTestCase_041494_1, VkglTestCase_041494_2);

#define VkglTestCase_041495_1 "dEQP-GLES3.functional.transform_feedback.a"
#define VkglTestCase_041495_2 "rray_element.interleaved.points.highp_float"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041495, VkglTestCase_041495_1, VkglTestCase_041495_2);

#define VkglTestCase_041496_1 "dEQP-GLES3.functional.transform_feedback."
#define VkglTestCase_041496_2 "array_element.interleaved.points.lowp_vec2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041496, VkglTestCase_041496_1, VkglTestCase_041496_2);

#define VkglTestCase_041497_1 "dEQP-GLES3.functional.transform_feedback.ar"
#define VkglTestCase_041497_2 "ray_element.interleaved.points.mediump_vec2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041497, VkglTestCase_041497_1, VkglTestCase_041497_2);

#define VkglTestCase_041498_1 "dEQP-GLES3.functional.transform_feedback.a"
#define VkglTestCase_041498_2 "rray_element.interleaved.points.highp_vec2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041498, VkglTestCase_041498_1, VkglTestCase_041498_2);

#define VkglTestCase_041499_1 "dEQP-GLES3.functional.transform_feedback."
#define VkglTestCase_041499_2 "array_element.interleaved.points.lowp_vec3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041499, VkglTestCase_041499_1, VkglTestCase_041499_2);

#define VkglTestCase_041500_1 "dEQP-GLES3.functional.transform_feedback.ar"
#define VkglTestCase_041500_2 "ray_element.interleaved.points.mediump_vec3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041500, VkglTestCase_041500_1, VkglTestCase_041500_2);

#define VkglTestCase_041501_1 "dEQP-GLES3.functional.transform_feedback.a"
#define VkglTestCase_041501_2 "rray_element.interleaved.points.highp_vec3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041501, VkglTestCase_041501_1, VkglTestCase_041501_2);

#define VkglTestCase_041502_1 "dEQP-GLES3.functional.transform_feedback."
#define VkglTestCase_041502_2 "array_element.interleaved.points.lowp_vec4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041502, VkglTestCase_041502_1, VkglTestCase_041502_2);

#define VkglTestCase_041503_1 "dEQP-GLES3.functional.transform_feedback.ar"
#define VkglTestCase_041503_2 "ray_element.interleaved.points.mediump_vec4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041503, VkglTestCase_041503_1, VkglTestCase_041503_2);

#define VkglTestCase_041504_1 "dEQP-GLES3.functional.transform_feedback.a"
#define VkglTestCase_041504_2 "rray_element.interleaved.points.highp_vec4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041504, VkglTestCase_041504_1, VkglTestCase_041504_2);

#define VkglTestCase_041505_1 "dEQP-GLES3.functional.transform_feedback."
#define VkglTestCase_041505_2 "array_element.interleaved.points.lowp_mat2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041505, VkglTestCase_041505_1, VkglTestCase_041505_2);

#define VkglTestCase_041506_1 "dEQP-GLES3.functional.transform_feedback.ar"
#define VkglTestCase_041506_2 "ray_element.interleaved.points.mediump_mat2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041506, VkglTestCase_041506_1, VkglTestCase_041506_2);

#define VkglTestCase_041507_1 "dEQP-GLES3.functional.transform_feedback.a"
#define VkglTestCase_041507_2 "rray_element.interleaved.points.highp_mat2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041507, VkglTestCase_041507_1, VkglTestCase_041507_2);

#define VkglTestCase_041508_1 "dEQP-GLES3.functional.transform_feedback.a"
#define VkglTestCase_041508_2 "rray_element.interleaved.points.lowp_mat2x3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041508, VkglTestCase_041508_1, VkglTestCase_041508_2);

#define VkglTestCase_041509_1 "dEQP-GLES3.functional.transform_feedback.arr"
#define VkglTestCase_041509_2 "ay_element.interleaved.points.mediump_mat2x3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041509, VkglTestCase_041509_1, VkglTestCase_041509_2);

#define VkglTestCase_041510_1 "dEQP-GLES3.functional.transform_feedback.ar"
#define VkglTestCase_041510_2 "ray_element.interleaved.points.highp_mat2x3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041510, VkglTestCase_041510_1, VkglTestCase_041510_2);

#define VkglTestCase_041511_1 "dEQP-GLES3.functional.transform_feedback.a"
#define VkglTestCase_041511_2 "rray_element.interleaved.points.lowp_mat2x4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041511, VkglTestCase_041511_1, VkglTestCase_041511_2);

#define VkglTestCase_041512_1 "dEQP-GLES3.functional.transform_feedback.arr"
#define VkglTestCase_041512_2 "ay_element.interleaved.points.mediump_mat2x4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041512, VkglTestCase_041512_1, VkglTestCase_041512_2);

#define VkglTestCase_041513_1 "dEQP-GLES3.functional.transform_feedback.ar"
#define VkglTestCase_041513_2 "ray_element.interleaved.points.highp_mat2x4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041513, VkglTestCase_041513_1, VkglTestCase_041513_2);

#define VkglTestCase_041514_1 "dEQP-GLES3.functional.transform_feedback.a"
#define VkglTestCase_041514_2 "rray_element.interleaved.points.lowp_mat3x2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041514, VkglTestCase_041514_1, VkglTestCase_041514_2);

#define VkglTestCase_041515_1 "dEQP-GLES3.functional.transform_feedback.arr"
#define VkglTestCase_041515_2 "ay_element.interleaved.points.mediump_mat3x2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041515, VkglTestCase_041515_1, VkglTestCase_041515_2);

#define VkglTestCase_041516_1 "dEQP-GLES3.functional.transform_feedback.ar"
#define VkglTestCase_041516_2 "ray_element.interleaved.points.highp_mat3x2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041516, VkglTestCase_041516_1, VkglTestCase_041516_2);

#define VkglTestCase_041517_1 "dEQP-GLES3.functional.transform_feedback."
#define VkglTestCase_041517_2 "array_element.interleaved.points.lowp_mat3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041517, VkglTestCase_041517_1, VkglTestCase_041517_2);

#define VkglTestCase_041518_1 "dEQP-GLES3.functional.transform_feedback.ar"
#define VkglTestCase_041518_2 "ray_element.interleaved.points.mediump_mat3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041518, VkglTestCase_041518_1, VkglTestCase_041518_2);

#define VkglTestCase_041519_1 "dEQP-GLES3.functional.transform_feedback.a"
#define VkglTestCase_041519_2 "rray_element.interleaved.points.highp_mat3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041519, VkglTestCase_041519_1, VkglTestCase_041519_2);

#define VkglTestCase_041520_1 "dEQP-GLES3.functional.transform_feedback.a"
#define VkglTestCase_041520_2 "rray_element.interleaved.points.lowp_mat3x4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041520, VkglTestCase_041520_1, VkglTestCase_041520_2);

#define VkglTestCase_041521_1 "dEQP-GLES3.functional.transform_feedback.arr"
#define VkglTestCase_041521_2 "ay_element.interleaved.points.mediump_mat3x4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041521, VkglTestCase_041521_1, VkglTestCase_041521_2);

#define VkglTestCase_041522_1 "dEQP-GLES3.functional.transform_feedback.ar"
#define VkglTestCase_041522_2 "ray_element.interleaved.points.highp_mat3x4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041522, VkglTestCase_041522_1, VkglTestCase_041522_2);

#define VkglTestCase_041523_1 "dEQP-GLES3.functional.transform_feedback.a"
#define VkglTestCase_041523_2 "rray_element.interleaved.points.lowp_mat4x2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041523, VkglTestCase_041523_1, VkglTestCase_041523_2);

#define VkglTestCase_041524_1 "dEQP-GLES3.functional.transform_feedback.arr"
#define VkglTestCase_041524_2 "ay_element.interleaved.points.mediump_mat4x2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041524, VkglTestCase_041524_1, VkglTestCase_041524_2);

#define VkglTestCase_041525_1 "dEQP-GLES3.functional.transform_feedback.ar"
#define VkglTestCase_041525_2 "ray_element.interleaved.points.highp_mat4x2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041525, VkglTestCase_041525_1, VkglTestCase_041525_2);

#define VkglTestCase_041526_1 "dEQP-GLES3.functional.transform_feedback.a"
#define VkglTestCase_041526_2 "rray_element.interleaved.points.lowp_mat4x3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041526, VkglTestCase_041526_1, VkglTestCase_041526_2);

#define VkglTestCase_041527_1 "dEQP-GLES3.functional.transform_feedback.arr"
#define VkglTestCase_041527_2 "ay_element.interleaved.points.mediump_mat4x3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041527, VkglTestCase_041527_1, VkglTestCase_041527_2);

#define VkglTestCase_041528_1 "dEQP-GLES3.functional.transform_feedback.ar"
#define VkglTestCase_041528_2 "ray_element.interleaved.points.highp_mat4x3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041528, VkglTestCase_041528_1, VkglTestCase_041528_2);

#define VkglTestCase_041529_1 "dEQP-GLES3.functional.transform_feedback."
#define VkglTestCase_041529_2 "array_element.interleaved.points.lowp_mat4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041529, VkglTestCase_041529_1, VkglTestCase_041529_2);

#define VkglTestCase_041530_1 "dEQP-GLES3.functional.transform_feedback.ar"
#define VkglTestCase_041530_2 "ray_element.interleaved.points.mediump_mat4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041530, VkglTestCase_041530_1, VkglTestCase_041530_2);

#define VkglTestCase_041531_1 "dEQP-GLES3.functional.transform_feedback.a"
#define VkglTestCase_041531_2 "rray_element.interleaved.points.highp_mat4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041531, VkglTestCase_041531_1, VkglTestCase_041531_2);

#define VkglTestCase_041532_1 "dEQP-GLES3.functional.transform_feedback."
#define VkglTestCase_041532_2 "array_element.interleaved.points.lowp_int"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041532, VkglTestCase_041532_1, VkglTestCase_041532_2);

#define VkglTestCase_041533_1 "dEQP-GLES3.functional.transform_feedback.a"
#define VkglTestCase_041533_2 "rray_element.interleaved.points.mediump_int"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041533, VkglTestCase_041533_1, VkglTestCase_041533_2);

#define VkglTestCase_041534_1 "dEQP-GLES3.functional.transform_feedback."
#define VkglTestCase_041534_2 "array_element.interleaved.points.highp_int"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041534, VkglTestCase_041534_1, VkglTestCase_041534_2);

#define VkglTestCase_041535_1 "dEQP-GLES3.functional.transform_feedback.a"
#define VkglTestCase_041535_2 "rray_element.interleaved.points.lowp_ivec2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041535, VkglTestCase_041535_1, VkglTestCase_041535_2);

#define VkglTestCase_041536_1 "dEQP-GLES3.functional.transform_feedback.ar"
#define VkglTestCase_041536_2 "ray_element.interleaved.points.mediump_ivec2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041536, VkglTestCase_041536_1, VkglTestCase_041536_2);

#define VkglTestCase_041537_1 "dEQP-GLES3.functional.transform_feedback.a"
#define VkglTestCase_041537_2 "rray_element.interleaved.points.highp_ivec2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041537, VkglTestCase_041537_1, VkglTestCase_041537_2);

#define VkglTestCase_041538_1 "dEQP-GLES3.functional.transform_feedback.a"
#define VkglTestCase_041538_2 "rray_element.interleaved.points.lowp_ivec3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041538, VkglTestCase_041538_1, VkglTestCase_041538_2);

#define VkglTestCase_041539_1 "dEQP-GLES3.functional.transform_feedback.ar"
#define VkglTestCase_041539_2 "ray_element.interleaved.points.mediump_ivec3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041539, VkglTestCase_041539_1, VkglTestCase_041539_2);

#define VkglTestCase_041540_1 "dEQP-GLES3.functional.transform_feedback.a"
#define VkglTestCase_041540_2 "rray_element.interleaved.points.highp_ivec3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041540, VkglTestCase_041540_1, VkglTestCase_041540_2);

#define VkglTestCase_041541_1 "dEQP-GLES3.functional.transform_feedback.a"
#define VkglTestCase_041541_2 "rray_element.interleaved.points.lowp_ivec4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041541, VkglTestCase_041541_1, VkglTestCase_041541_2);

#define VkglTestCase_041542_1 "dEQP-GLES3.functional.transform_feedback.ar"
#define VkglTestCase_041542_2 "ray_element.interleaved.points.mediump_ivec4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041542, VkglTestCase_041542_1, VkglTestCase_041542_2);

#define VkglTestCase_041543_1 "dEQP-GLES3.functional.transform_feedback.a"
#define VkglTestCase_041543_2 "rray_element.interleaved.points.highp_ivec4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041543, VkglTestCase_041543_1, VkglTestCase_041543_2);

#define VkglTestCase_041544_1 "dEQP-GLES3.functional.transform_feedback."
#define VkglTestCase_041544_2 "array_element.interleaved.points.lowp_uint"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041544, VkglTestCase_041544_1, VkglTestCase_041544_2);

#define VkglTestCase_041545_1 "dEQP-GLES3.functional.transform_feedback.ar"
#define VkglTestCase_041545_2 "ray_element.interleaved.points.mediump_uint"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041545, VkglTestCase_041545_1, VkglTestCase_041545_2);

#define VkglTestCase_041546_1 "dEQP-GLES3.functional.transform_feedback.a"
#define VkglTestCase_041546_2 "rray_element.interleaved.points.highp_uint"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041546, VkglTestCase_041546_1, VkglTestCase_041546_2);

#define VkglTestCase_041547_1 "dEQP-GLES3.functional.transform_feedback.a"
#define VkglTestCase_041547_2 "rray_element.interleaved.points.lowp_uvec2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041547, VkglTestCase_041547_1, VkglTestCase_041547_2);

#define VkglTestCase_041548_1 "dEQP-GLES3.functional.transform_feedback.ar"
#define VkglTestCase_041548_2 "ray_element.interleaved.points.mediump_uvec2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041548, VkglTestCase_041548_1, VkglTestCase_041548_2);

#define VkglTestCase_041549_1 "dEQP-GLES3.functional.transform_feedback.a"
#define VkglTestCase_041549_2 "rray_element.interleaved.points.highp_uvec2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041549, VkglTestCase_041549_1, VkglTestCase_041549_2);

#define VkglTestCase_041550_1 "dEQP-GLES3.functional.transform_feedback.a"
#define VkglTestCase_041550_2 "rray_element.interleaved.points.lowp_uvec3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041550, VkglTestCase_041550_1, VkglTestCase_041550_2);

#define VkglTestCase_041551_1 "dEQP-GLES3.functional.transform_feedback.ar"
#define VkglTestCase_041551_2 "ray_element.interleaved.points.mediump_uvec3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041551, VkglTestCase_041551_1, VkglTestCase_041551_2);

#define VkglTestCase_041552_1 "dEQP-GLES3.functional.transform_feedback.a"
#define VkglTestCase_041552_2 "rray_element.interleaved.points.highp_uvec3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041552, VkglTestCase_041552_1, VkglTestCase_041552_2);

#define VkglTestCase_041553_1 "dEQP-GLES3.functional.transform_feedback.a"
#define VkglTestCase_041553_2 "rray_element.interleaved.points.lowp_uvec4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041553, VkglTestCase_041553_1, VkglTestCase_041553_2);

#define VkglTestCase_041554_1 "dEQP-GLES3.functional.transform_feedback.ar"
#define VkglTestCase_041554_2 "ray_element.interleaved.points.mediump_uvec4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041554, VkglTestCase_041554_1, VkglTestCase_041554_2);

#define VkglTestCase_041555_1 "dEQP-GLES3.functional.transform_feedback.a"
#define VkglTestCase_041555_2 "rray_element.interleaved.points.highp_uvec4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041555, VkglTestCase_041555_1, VkglTestCase_041555_2);

#define VkglTestCase_041766_1 "dEQP-GLES3.functional.transform_fe"
#define VkglTestCase_041766_2 "edback.random.interleaved.points.1"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041766, VkglTestCase_041766_1, VkglTestCase_041766_2);

#define VkglTestCase_041767_1 "dEQP-GLES3.functional.transform_fe"
#define VkglTestCase_041767_2 "edback.random.interleaved.points.2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041767, VkglTestCase_041767_1, VkglTestCase_041767_2);

#define VkglTestCase_041768_1 "dEQP-GLES3.functional.transform_fe"
#define VkglTestCase_041768_2 "edback.random.interleaved.points.3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041768, VkglTestCase_041768_1, VkglTestCase_041768_2);

#define VkglTestCase_041769_1 "dEQP-GLES3.functional.transform_fe"
#define VkglTestCase_041769_2 "edback.random.interleaved.points.4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041769, VkglTestCase_041769_1, VkglTestCase_041769_2);

#define VkglTestCase_041770_1 "dEQP-GLES3.functional.transform_fe"
#define VkglTestCase_041770_2 "edback.random.interleaved.points.5"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041770, VkglTestCase_041770_1, VkglTestCase_041770_2);

#define VkglTestCase_041771_1 "dEQP-GLES3.functional.transform_fe"
#define VkglTestCase_041771_2 "edback.random.interleaved.points.6"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041771, VkglTestCase_041771_1, VkglTestCase_041771_2);

#define VkglTestCase_041772_1 "dEQP-GLES3.functional.transform_fe"
#define VkglTestCase_041772_2 "edback.random.interleaved.points.7"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041772, VkglTestCase_041772_1, VkglTestCase_041772_2);

#define VkglTestCase_041773_1 "dEQP-GLES3.functional.transform_fe"
#define VkglTestCase_041773_2 "edback.random.interleaved.points.8"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041773, VkglTestCase_041773_1, VkglTestCase_041773_2);

#define VkglTestCase_041774_1 "dEQP-GLES3.functional.transform_fe"
#define VkglTestCase_041774_2 "edback.random.interleaved.points.9"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041774, VkglTestCase_041774_1, VkglTestCase_041774_2);

#define VkglTestCase_041775_1 "dEQP-GLES3.functional.transform_fe"
#define VkglTestCase_041775_2 "edback.random.interleaved.points.10"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041775, VkglTestCase_041775_1, VkglTestCase_041775_2);

#define VkglTestCase_041826_1 "dEQP-GLES3.functional.transform_feedback.ra"
#define VkglTestCase_041826_2 "ndom_full_array_capture.interleaved.points.1"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041826, VkglTestCase_041826_1, VkglTestCase_041826_2);

#define VkglTestCase_041827_1 "dEQP-GLES3.functional.transform_feedback.ra"
#define VkglTestCase_041827_2 "ndom_full_array_capture.interleaved.points.2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041827, VkglTestCase_041827_1, VkglTestCase_041827_2);

#define VkglTestCase_041828_1 "dEQP-GLES3.functional.transform_feedback.ra"
#define VkglTestCase_041828_2 "ndom_full_array_capture.interleaved.points.3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041828, VkglTestCase_041828_1, VkglTestCase_041828_2);

#define VkglTestCase_041829_1 "dEQP-GLES3.functional.transform_feedback.ra"
#define VkglTestCase_041829_2 "ndom_full_array_capture.interleaved.points.4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041829, VkglTestCase_041829_1, VkglTestCase_041829_2);

#define VkglTestCase_041830_1 "dEQP-GLES3.functional.transform_feedback.ra"
#define VkglTestCase_041830_2 "ndom_full_array_capture.interleaved.points.5"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041830, VkglTestCase_041830_1, VkglTestCase_041830_2);

#define VkglTestCase_041831_1 "dEQP-GLES3.functional.transform_feedback.ra"
#define VkglTestCase_041831_2 "ndom_full_array_capture.interleaved.points.6"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041831, VkglTestCase_041831_1, VkglTestCase_041831_2);

#define VkglTestCase_041832_1 "dEQP-GLES3.functional.transform_feedback.ra"
#define VkglTestCase_041832_2 "ndom_full_array_capture.interleaved.points.7"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041832, VkglTestCase_041832_1, VkglTestCase_041832_2);

#define VkglTestCase_041833_1 "dEQP-GLES3.functional.transform_feedback.ra"
#define VkglTestCase_041833_2 "ndom_full_array_capture.interleaved.points.8"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041833, VkglTestCase_041833_1, VkglTestCase_041833_2);

#define VkglTestCase_041834_1 "dEQP-GLES3.functional.transform_feedback.ra"
#define VkglTestCase_041834_2 "ndom_full_array_capture.interleaved.points.9"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041834, VkglTestCase_041834_1, VkglTestCase_041834_2);

#define VkglTestCase_041835_1 "dEQP-GLES3.functional.transform_feedback.ran"
#define VkglTestCase_041835_2 "dom_full_array_capture.interleaved.points.10"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041835, VkglTestCase_041835_1, VkglTestCase_041835_2);
