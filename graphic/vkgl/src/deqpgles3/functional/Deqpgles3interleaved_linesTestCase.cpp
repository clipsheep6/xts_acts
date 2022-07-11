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

#define VkglTestCase_040800_1 "dEQP-GLES3.functional.transform_feedback"
#define VkglTestCase_040800_2 ".basic_types.interleaved.lines.lowp_float"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040800, VkglTestCase_040800_1, VkglTestCase_040800_2);

#define VkglTestCase_040801_1 "dEQP-GLES3.functional.transform_feedback.b"
#define VkglTestCase_040801_2 "asic_types.interleaved.lines.mediump_float"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040801, VkglTestCase_040801_1, VkglTestCase_040801_2);

#define VkglTestCase_040802_1 "dEQP-GLES3.functional.transform_feedback."
#define VkglTestCase_040802_2 "basic_types.interleaved.lines.highp_float"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040802, VkglTestCase_040802_1, VkglTestCase_040802_2);

#define VkglTestCase_040803_1 "dEQP-GLES3.functional.transform_feedback"
#define VkglTestCase_040803_2 ".basic_types.interleaved.lines.lowp_vec2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040803, VkglTestCase_040803_1, VkglTestCase_040803_2);

#define VkglTestCase_040804_1 "dEQP-GLES3.functional.transform_feedback."
#define VkglTestCase_040804_2 "basic_types.interleaved.lines.mediump_vec2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040804, VkglTestCase_040804_1, VkglTestCase_040804_2);

#define VkglTestCase_040805_1 "dEQP-GLES3.functional.transform_feedback"
#define VkglTestCase_040805_2 ".basic_types.interleaved.lines.highp_vec2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040805, VkglTestCase_040805_1, VkglTestCase_040805_2);

#define VkglTestCase_040806_1 "dEQP-GLES3.functional.transform_feedback"
#define VkglTestCase_040806_2 ".basic_types.interleaved.lines.lowp_vec3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040806, VkglTestCase_040806_1, VkglTestCase_040806_2);

#define VkglTestCase_040807_1 "dEQP-GLES3.functional.transform_feedback."
#define VkglTestCase_040807_2 "basic_types.interleaved.lines.mediump_vec3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040807, VkglTestCase_040807_1, VkglTestCase_040807_2);

#define VkglTestCase_040808_1 "dEQP-GLES3.functional.transform_feedback"
#define VkglTestCase_040808_2 ".basic_types.interleaved.lines.highp_vec3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040808, VkglTestCase_040808_1, VkglTestCase_040808_2);

#define VkglTestCase_040809_1 "dEQP-GLES3.functional.transform_feedback"
#define VkglTestCase_040809_2 ".basic_types.interleaved.lines.lowp_vec4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040809, VkglTestCase_040809_1, VkglTestCase_040809_2);

#define VkglTestCase_040810_1 "dEQP-GLES3.functional.transform_feedback."
#define VkglTestCase_040810_2 "basic_types.interleaved.lines.mediump_vec4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040810, VkglTestCase_040810_1, VkglTestCase_040810_2);

#define VkglTestCase_040811_1 "dEQP-GLES3.functional.transform_feedback"
#define VkglTestCase_040811_2 ".basic_types.interleaved.lines.highp_vec4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040811, VkglTestCase_040811_1, VkglTestCase_040811_2);

#define VkglTestCase_040812_1 "dEQP-GLES3.functional.transform_feedback"
#define VkglTestCase_040812_2 ".basic_types.interleaved.lines.lowp_mat2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040812, VkglTestCase_040812_1, VkglTestCase_040812_2);

#define VkglTestCase_040813_1 "dEQP-GLES3.functional.transform_feedback."
#define VkglTestCase_040813_2 "basic_types.interleaved.lines.mediump_mat2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040813, VkglTestCase_040813_1, VkglTestCase_040813_2);

#define VkglTestCase_040814_1 "dEQP-GLES3.functional.transform_feedback"
#define VkglTestCase_040814_2 ".basic_types.interleaved.lines.highp_mat2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040814, VkglTestCase_040814_1, VkglTestCase_040814_2);

#define VkglTestCase_040815_1 "dEQP-GLES3.functional.transform_feedback."
#define VkglTestCase_040815_2 "basic_types.interleaved.lines.lowp_mat2x3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040815, VkglTestCase_040815_1, VkglTestCase_040815_2);

#define VkglTestCase_040816_1 "dEQP-GLES3.functional.transform_feedback.b"
#define VkglTestCase_040816_2 "asic_types.interleaved.lines.mediump_mat2x3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040816, VkglTestCase_040816_1, VkglTestCase_040816_2);

#define VkglTestCase_040817_1 "dEQP-GLES3.functional.transform_feedback."
#define VkglTestCase_040817_2 "basic_types.interleaved.lines.highp_mat2x3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040817, VkglTestCase_040817_1, VkglTestCase_040817_2);

#define VkglTestCase_040818_1 "dEQP-GLES3.functional.transform_feedback."
#define VkglTestCase_040818_2 "basic_types.interleaved.lines.lowp_mat2x4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040818, VkglTestCase_040818_1, VkglTestCase_040818_2);

#define VkglTestCase_040819_1 "dEQP-GLES3.functional.transform_feedback.b"
#define VkglTestCase_040819_2 "asic_types.interleaved.lines.mediump_mat2x4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040819, VkglTestCase_040819_1, VkglTestCase_040819_2);

#define VkglTestCase_040820_1 "dEQP-GLES3.functional.transform_feedback."
#define VkglTestCase_040820_2 "basic_types.interleaved.lines.highp_mat2x4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040820, VkglTestCase_040820_1, VkglTestCase_040820_2);

#define VkglTestCase_040821_1 "dEQP-GLES3.functional.transform_feedback."
#define VkglTestCase_040821_2 "basic_types.interleaved.lines.lowp_mat3x2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040821, VkglTestCase_040821_1, VkglTestCase_040821_2);

#define VkglTestCase_040822_1 "dEQP-GLES3.functional.transform_feedback.b"
#define VkglTestCase_040822_2 "asic_types.interleaved.lines.mediump_mat3x2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040822, VkglTestCase_040822_1, VkglTestCase_040822_2);

#define VkglTestCase_040823_1 "dEQP-GLES3.functional.transform_feedback."
#define VkglTestCase_040823_2 "basic_types.interleaved.lines.highp_mat3x2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040823, VkglTestCase_040823_1, VkglTestCase_040823_2);

#define VkglTestCase_040824_1 "dEQP-GLES3.functional.transform_feedback"
#define VkglTestCase_040824_2 ".basic_types.interleaved.lines.lowp_mat3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040824, VkglTestCase_040824_1, VkglTestCase_040824_2);

#define VkglTestCase_040825_1 "dEQP-GLES3.functional.transform_feedback."
#define VkglTestCase_040825_2 "basic_types.interleaved.lines.mediump_mat3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040825, VkglTestCase_040825_1, VkglTestCase_040825_2);

#define VkglTestCase_040826_1 "dEQP-GLES3.functional.transform_feedback"
#define VkglTestCase_040826_2 ".basic_types.interleaved.lines.highp_mat3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040826, VkglTestCase_040826_1, VkglTestCase_040826_2);

#define VkglTestCase_040827_1 "dEQP-GLES3.functional.transform_feedback."
#define VkglTestCase_040827_2 "basic_types.interleaved.lines.lowp_mat3x4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040827, VkglTestCase_040827_1, VkglTestCase_040827_2);

#define VkglTestCase_040828_1 "dEQP-GLES3.functional.transform_feedback.b"
#define VkglTestCase_040828_2 "asic_types.interleaved.lines.mediump_mat3x4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040828, VkglTestCase_040828_1, VkglTestCase_040828_2);

#define VkglTestCase_040829_1 "dEQP-GLES3.functional.transform_feedback."
#define VkglTestCase_040829_2 "basic_types.interleaved.lines.highp_mat3x4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040829, VkglTestCase_040829_1, VkglTestCase_040829_2);

#define VkglTestCase_040830_1 "dEQP-GLES3.functional.transform_feedback."
#define VkglTestCase_040830_2 "basic_types.interleaved.lines.lowp_mat4x2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040830, VkglTestCase_040830_1, VkglTestCase_040830_2);

#define VkglTestCase_040831_1 "dEQP-GLES3.functional.transform_feedback.b"
#define VkglTestCase_040831_2 "asic_types.interleaved.lines.mediump_mat4x2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040831, VkglTestCase_040831_1, VkglTestCase_040831_2);

#define VkglTestCase_040832_1 "dEQP-GLES3.functional.transform_feedback."
#define VkglTestCase_040832_2 "basic_types.interleaved.lines.highp_mat4x2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040832, VkglTestCase_040832_1, VkglTestCase_040832_2);

#define VkglTestCase_040833_1 "dEQP-GLES3.functional.transform_feedback."
#define VkglTestCase_040833_2 "basic_types.interleaved.lines.lowp_mat4x3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040833, VkglTestCase_040833_1, VkglTestCase_040833_2);

#define VkglTestCase_040834_1 "dEQP-GLES3.functional.transform_feedback.b"
#define VkglTestCase_040834_2 "asic_types.interleaved.lines.mediump_mat4x3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040834, VkglTestCase_040834_1, VkglTestCase_040834_2);

#define VkglTestCase_040835_1 "dEQP-GLES3.functional.transform_feedback."
#define VkglTestCase_040835_2 "basic_types.interleaved.lines.highp_mat4x3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040835, VkglTestCase_040835_1, VkglTestCase_040835_2);

#define VkglTestCase_040836_1 "dEQP-GLES3.functional.transform_feedback"
#define VkglTestCase_040836_2 ".basic_types.interleaved.lines.lowp_mat4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040836, VkglTestCase_040836_1, VkglTestCase_040836_2);

#define VkglTestCase_040837_1 "dEQP-GLES3.functional.transform_feedback."
#define VkglTestCase_040837_2 "basic_types.interleaved.lines.mediump_mat4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040837, VkglTestCase_040837_1, VkglTestCase_040837_2);

#define VkglTestCase_040838_1 "dEQP-GLES3.functional.transform_feedback"
#define VkglTestCase_040838_2 ".basic_types.interleaved.lines.highp_mat4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040838, VkglTestCase_040838_1, VkglTestCase_040838_2);

#define VkglTestCase_040839_1 "dEQP-GLES3.functional.transform_feedbac"
#define VkglTestCase_040839_2 "k.basic_types.interleaved.lines.lowp_int"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040839, VkglTestCase_040839_1, VkglTestCase_040839_2);

#define VkglTestCase_040840_1 "dEQP-GLES3.functional.transform_feedback."
#define VkglTestCase_040840_2 "basic_types.interleaved.lines.mediump_int"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040840, VkglTestCase_040840_1, VkglTestCase_040840_2);

#define VkglTestCase_040841_1 "dEQP-GLES3.functional.transform_feedback"
#define VkglTestCase_040841_2 ".basic_types.interleaved.lines.highp_int"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040841, VkglTestCase_040841_1, VkglTestCase_040841_2);

#define VkglTestCase_040842_1 "dEQP-GLES3.functional.transform_feedback"
#define VkglTestCase_040842_2 ".basic_types.interleaved.lines.lowp_ivec2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040842, VkglTestCase_040842_1, VkglTestCase_040842_2);

#define VkglTestCase_040843_1 "dEQP-GLES3.functional.transform_feedback.b"
#define VkglTestCase_040843_2 "asic_types.interleaved.lines.mediump_ivec2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040843, VkglTestCase_040843_1, VkglTestCase_040843_2);

#define VkglTestCase_040844_1 "dEQP-GLES3.functional.transform_feedback."
#define VkglTestCase_040844_2 "basic_types.interleaved.lines.highp_ivec2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040844, VkglTestCase_040844_1, VkglTestCase_040844_2);

#define VkglTestCase_040845_1 "dEQP-GLES3.functional.transform_feedback"
#define VkglTestCase_040845_2 ".basic_types.interleaved.lines.lowp_ivec3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040845, VkglTestCase_040845_1, VkglTestCase_040845_2);

#define VkglTestCase_040846_1 "dEQP-GLES3.functional.transform_feedback.b"
#define VkglTestCase_040846_2 "asic_types.interleaved.lines.mediump_ivec3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040846, VkglTestCase_040846_1, VkglTestCase_040846_2);

#define VkglTestCase_040847_1 "dEQP-GLES3.functional.transform_feedback."
#define VkglTestCase_040847_2 "basic_types.interleaved.lines.highp_ivec3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040847, VkglTestCase_040847_1, VkglTestCase_040847_2);

#define VkglTestCase_040848_1 "dEQP-GLES3.functional.transform_feedback"
#define VkglTestCase_040848_2 ".basic_types.interleaved.lines.lowp_ivec4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040848, VkglTestCase_040848_1, VkglTestCase_040848_2);

#define VkglTestCase_040849_1 "dEQP-GLES3.functional.transform_feedback.b"
#define VkglTestCase_040849_2 "asic_types.interleaved.lines.mediump_ivec4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040849, VkglTestCase_040849_1, VkglTestCase_040849_2);

#define VkglTestCase_040850_1 "dEQP-GLES3.functional.transform_feedback."
#define VkglTestCase_040850_2 "basic_types.interleaved.lines.highp_ivec4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040850, VkglTestCase_040850_1, VkglTestCase_040850_2);

#define VkglTestCase_040851_1 "dEQP-GLES3.functional.transform_feedback"
#define VkglTestCase_040851_2 ".basic_types.interleaved.lines.lowp_uint"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040851, VkglTestCase_040851_1, VkglTestCase_040851_2);

#define VkglTestCase_040852_1 "dEQP-GLES3.functional.transform_feedback."
#define VkglTestCase_040852_2 "basic_types.interleaved.lines.mediump_uint"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040852, VkglTestCase_040852_1, VkglTestCase_040852_2);

#define VkglTestCase_040853_1 "dEQP-GLES3.functional.transform_feedback"
#define VkglTestCase_040853_2 ".basic_types.interleaved.lines.highp_uint"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040853, VkglTestCase_040853_1, VkglTestCase_040853_2);

#define VkglTestCase_040854_1 "dEQP-GLES3.functional.transform_feedback"
#define VkglTestCase_040854_2 ".basic_types.interleaved.lines.lowp_uvec2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040854, VkglTestCase_040854_1, VkglTestCase_040854_2);

#define VkglTestCase_040855_1 "dEQP-GLES3.functional.transform_feedback.b"
#define VkglTestCase_040855_2 "asic_types.interleaved.lines.mediump_uvec2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040855, VkglTestCase_040855_1, VkglTestCase_040855_2);

#define VkglTestCase_040856_1 "dEQP-GLES3.functional.transform_feedback."
#define VkglTestCase_040856_2 "basic_types.interleaved.lines.highp_uvec2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040856, VkglTestCase_040856_1, VkglTestCase_040856_2);

#define VkglTestCase_040857_1 "dEQP-GLES3.functional.transform_feedback"
#define VkglTestCase_040857_2 ".basic_types.interleaved.lines.lowp_uvec3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040857, VkglTestCase_040857_1, VkglTestCase_040857_2);

#define VkglTestCase_040858_1 "dEQP-GLES3.functional.transform_feedback.b"
#define VkglTestCase_040858_2 "asic_types.interleaved.lines.mediump_uvec3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040858, VkglTestCase_040858_1, VkglTestCase_040858_2);

#define VkglTestCase_040859_1 "dEQP-GLES3.functional.transform_feedback."
#define VkglTestCase_040859_2 "basic_types.interleaved.lines.highp_uvec3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040859, VkglTestCase_040859_1, VkglTestCase_040859_2);

#define VkglTestCase_040860_1 "dEQP-GLES3.functional.transform_feedback"
#define VkglTestCase_040860_2 ".basic_types.interleaved.lines.lowp_uvec4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040860, VkglTestCase_040860_1, VkglTestCase_040860_2);

#define VkglTestCase_040861_1 "dEQP-GLES3.functional.transform_feedback.b"
#define VkglTestCase_040861_2 "asic_types.interleaved.lines.mediump_uvec4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040861, VkglTestCase_040861_1, VkglTestCase_040861_2);

#define VkglTestCase_040862_1 "dEQP-GLES3.functional.transform_feedback."
#define VkglTestCase_040862_2 "basic_types.interleaved.lines.highp_uvec4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040862, VkglTestCase_040862_1, VkglTestCase_040862_2);

#define VkglTestCase_041178_1 "dEQP-GLES3.functional.transform_feedb"
#define VkglTestCase_041178_2 "ack.array.interleaved.lines.lowp_float"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041178, VkglTestCase_041178_1, VkglTestCase_041178_2);

#define VkglTestCase_041179_1 "dEQP-GLES3.functional.transform_feedbac"
#define VkglTestCase_041179_2 "k.array.interleaved.lines.mediump_float"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041179, VkglTestCase_041179_1, VkglTestCase_041179_2);

#define VkglTestCase_041180_1 "dEQP-GLES3.functional.transform_feedba"
#define VkglTestCase_041180_2 "ck.array.interleaved.lines.highp_float"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041180, VkglTestCase_041180_1, VkglTestCase_041180_2);

#define VkglTestCase_041181_1 "dEQP-GLES3.functional.transform_feedb"
#define VkglTestCase_041181_2 "ack.array.interleaved.lines.lowp_vec2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041181, VkglTestCase_041181_1, VkglTestCase_041181_2);

#define VkglTestCase_041182_1 "dEQP-GLES3.functional.transform_feedba"
#define VkglTestCase_041182_2 "ck.array.interleaved.lines.mediump_vec2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041182, VkglTestCase_041182_1, VkglTestCase_041182_2);

#define VkglTestCase_041183_1 "dEQP-GLES3.functional.transform_feedb"
#define VkglTestCase_041183_2 "ack.array.interleaved.lines.highp_vec2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041183, VkglTestCase_041183_1, VkglTestCase_041183_2);

#define VkglTestCase_041184_1 "dEQP-GLES3.functional.transform_feedb"
#define VkglTestCase_041184_2 "ack.array.interleaved.lines.lowp_vec3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041184, VkglTestCase_041184_1, VkglTestCase_041184_2);

#define VkglTestCase_041185_1 "dEQP-GLES3.functional.transform_feedba"
#define VkglTestCase_041185_2 "ck.array.interleaved.lines.mediump_vec3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041185, VkglTestCase_041185_1, VkglTestCase_041185_2);

#define VkglTestCase_041186_1 "dEQP-GLES3.functional.transform_feedb"
#define VkglTestCase_041186_2 "ack.array.interleaved.lines.highp_vec3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041186, VkglTestCase_041186_1, VkglTestCase_041186_2);

#define VkglTestCase_041187_1 "dEQP-GLES3.functional.transform_feedb"
#define VkglTestCase_041187_2 "ack.array.interleaved.lines.lowp_vec4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041187, VkglTestCase_041187_1, VkglTestCase_041187_2);

#define VkglTestCase_041188_1 "dEQP-GLES3.functional.transform_feedba"
#define VkglTestCase_041188_2 "ck.array.interleaved.lines.mediump_vec4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041188, VkglTestCase_041188_1, VkglTestCase_041188_2);

#define VkglTestCase_041189_1 "dEQP-GLES3.functional.transform_feedb"
#define VkglTestCase_041189_2 "ack.array.interleaved.lines.highp_vec4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041189, VkglTestCase_041189_1, VkglTestCase_041189_2);

#define VkglTestCase_041190_1 "dEQP-GLES3.functional.transform_feedb"
#define VkglTestCase_041190_2 "ack.array.interleaved.lines.lowp_mat2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041190, VkglTestCase_041190_1, VkglTestCase_041190_2);

#define VkglTestCase_041191_1 "dEQP-GLES3.functional.transform_feedba"
#define VkglTestCase_041191_2 "ck.array.interleaved.lines.mediump_mat2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041191, VkglTestCase_041191_1, VkglTestCase_041191_2);

#define VkglTestCase_041192_1 "dEQP-GLES3.functional.transform_feedb"
#define VkglTestCase_041192_2 "ack.array.interleaved.lines.highp_mat2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041192, VkglTestCase_041192_1, VkglTestCase_041192_2);

#define VkglTestCase_041193_1 "dEQP-GLES3.functional.transform_feedba"
#define VkglTestCase_041193_2 "ck.array.interleaved.lines.lowp_mat2x3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041193, VkglTestCase_041193_1, VkglTestCase_041193_2);

#define VkglTestCase_041194_1 "dEQP-GLES3.functional.transform_feedbac"
#define VkglTestCase_041194_2 "k.array.interleaved.lines.mediump_mat2x3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041194, VkglTestCase_041194_1, VkglTestCase_041194_2);

#define VkglTestCase_041195_1 "dEQP-GLES3.functional.transform_feedba"
#define VkglTestCase_041195_2 "ck.array.interleaved.lines.highp_mat2x3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041195, VkglTestCase_041195_1, VkglTestCase_041195_2);

#define VkglTestCase_041196_1 "dEQP-GLES3.functional.transform_feedba"
#define VkglTestCase_041196_2 "ck.array.interleaved.lines.lowp_mat2x4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041196, VkglTestCase_041196_1, VkglTestCase_041196_2);

#define VkglTestCase_041197_1 "dEQP-GLES3.functional.transform_feedbac"
#define VkglTestCase_041197_2 "k.array.interleaved.lines.mediump_mat2x4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041197, VkglTestCase_041197_1, VkglTestCase_041197_2);

#define VkglTestCase_041198_1 "dEQP-GLES3.functional.transform_feedba"
#define VkglTestCase_041198_2 "ck.array.interleaved.lines.highp_mat2x4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041198, VkglTestCase_041198_1, VkglTestCase_041198_2);

#define VkglTestCase_041199_1 "dEQP-GLES3.functional.transform_feedba"
#define VkglTestCase_041199_2 "ck.array.interleaved.lines.lowp_mat3x2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041199, VkglTestCase_041199_1, VkglTestCase_041199_2);

#define VkglTestCase_041200_1 "dEQP-GLES3.functional.transform_feedbac"
#define VkglTestCase_041200_2 "k.array.interleaved.lines.mediump_mat3x2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041200, VkglTestCase_041200_1, VkglTestCase_041200_2);

#define VkglTestCase_041201_1 "dEQP-GLES3.functional.transform_feedba"
#define VkglTestCase_041201_2 "ck.array.interleaved.lines.highp_mat3x2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041201, VkglTestCase_041201_1, VkglTestCase_041201_2);

#define VkglTestCase_041202_1 "dEQP-GLES3.functional.transform_feedb"
#define VkglTestCase_041202_2 "ack.array.interleaved.lines.lowp_mat3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041202, VkglTestCase_041202_1, VkglTestCase_041202_2);

#define VkglTestCase_041203_1 "dEQP-GLES3.functional.transform_feedba"
#define VkglTestCase_041203_2 "ck.array.interleaved.lines.mediump_mat3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041203, VkglTestCase_041203_1, VkglTestCase_041203_2);

#define VkglTestCase_041204_1 "dEQP-GLES3.functional.transform_feedb"
#define VkglTestCase_041204_2 "ack.array.interleaved.lines.highp_mat3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041204, VkglTestCase_041204_1, VkglTestCase_041204_2);

#define VkglTestCase_041205_1 "dEQP-GLES3.functional.transform_feedba"
#define VkglTestCase_041205_2 "ck.array.interleaved.lines.lowp_mat3x4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041205, VkglTestCase_041205_1, VkglTestCase_041205_2);

#define VkglTestCase_041206_1 "dEQP-GLES3.functional.transform_feedbac"
#define VkglTestCase_041206_2 "k.array.interleaved.lines.mediump_mat3x4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041206, VkglTestCase_041206_1, VkglTestCase_041206_2);

#define VkglTestCase_041207_1 "dEQP-GLES3.functional.transform_feedba"
#define VkglTestCase_041207_2 "ck.array.interleaved.lines.highp_mat3x4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041207, VkglTestCase_041207_1, VkglTestCase_041207_2);

#define VkglTestCase_041208_1 "dEQP-GLES3.functional.transform_feedba"
#define VkglTestCase_041208_2 "ck.array.interleaved.lines.lowp_mat4x2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041208, VkglTestCase_041208_1, VkglTestCase_041208_2);

#define VkglTestCase_041209_1 "dEQP-GLES3.functional.transform_feedbac"
#define VkglTestCase_041209_2 "k.array.interleaved.lines.mediump_mat4x2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041209, VkglTestCase_041209_1, VkglTestCase_041209_2);

#define VkglTestCase_041210_1 "dEQP-GLES3.functional.transform_feedba"
#define VkglTestCase_041210_2 "ck.array.interleaved.lines.highp_mat4x2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041210, VkglTestCase_041210_1, VkglTestCase_041210_2);

#define VkglTestCase_041211_1 "dEQP-GLES3.functional.transform_feedba"
#define VkglTestCase_041211_2 "ck.array.interleaved.lines.lowp_mat4x3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041211, VkglTestCase_041211_1, VkglTestCase_041211_2);

#define VkglTestCase_041212_1 "dEQP-GLES3.functional.transform_feedbac"
#define VkglTestCase_041212_2 "k.array.interleaved.lines.mediump_mat4x3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041212, VkglTestCase_041212_1, VkglTestCase_041212_2);

#define VkglTestCase_041213_1 "dEQP-GLES3.functional.transform_feedba"
#define VkglTestCase_041213_2 "ck.array.interleaved.lines.highp_mat4x3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041213, VkglTestCase_041213_1, VkglTestCase_041213_2);

#define VkglTestCase_041214_1 "dEQP-GLES3.functional.transform_feedb"
#define VkglTestCase_041214_2 "ack.array.interleaved.lines.lowp_mat4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041214, VkglTestCase_041214_1, VkglTestCase_041214_2);

#define VkglTestCase_041215_1 "dEQP-GLES3.functional.transform_feedba"
#define VkglTestCase_041215_2 "ck.array.interleaved.lines.mediump_mat4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041215, VkglTestCase_041215_1, VkglTestCase_041215_2);

#define VkglTestCase_041216_1 "dEQP-GLES3.functional.transform_feedb"
#define VkglTestCase_041216_2 "ack.array.interleaved.lines.highp_mat4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041216, VkglTestCase_041216_1, VkglTestCase_041216_2);

#define VkglTestCase_041217_1 "dEQP-GLES3.functional.transform_feed"
#define VkglTestCase_041217_2 "back.array.interleaved.lines.lowp_int"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041217, VkglTestCase_041217_1, VkglTestCase_041217_2);

#define VkglTestCase_041218_1 "dEQP-GLES3.functional.transform_feedba"
#define VkglTestCase_041218_2 "ck.array.interleaved.lines.mediump_int"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041218, VkglTestCase_041218_1, VkglTestCase_041218_2);

#define VkglTestCase_041219_1 "dEQP-GLES3.functional.transform_feedb"
#define VkglTestCase_041219_2 "ack.array.interleaved.lines.highp_int"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041219, VkglTestCase_041219_1, VkglTestCase_041219_2);

#define VkglTestCase_041220_1 "dEQP-GLES3.functional.transform_feedb"
#define VkglTestCase_041220_2 "ack.array.interleaved.lines.lowp_ivec2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041220, VkglTestCase_041220_1, VkglTestCase_041220_2);

#define VkglTestCase_041221_1 "dEQP-GLES3.functional.transform_feedbac"
#define VkglTestCase_041221_2 "k.array.interleaved.lines.mediump_ivec2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041221, VkglTestCase_041221_1, VkglTestCase_041221_2);

#define VkglTestCase_041222_1 "dEQP-GLES3.functional.transform_feedba"
#define VkglTestCase_041222_2 "ck.array.interleaved.lines.highp_ivec2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041222, VkglTestCase_041222_1, VkglTestCase_041222_2);

#define VkglTestCase_041223_1 "dEQP-GLES3.functional.transform_feedb"
#define VkglTestCase_041223_2 "ack.array.interleaved.lines.lowp_ivec3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041223, VkglTestCase_041223_1, VkglTestCase_041223_2);

#define VkglTestCase_041224_1 "dEQP-GLES3.functional.transform_feedbac"
#define VkglTestCase_041224_2 "k.array.interleaved.lines.mediump_ivec3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041224, VkglTestCase_041224_1, VkglTestCase_041224_2);

#define VkglTestCase_041225_1 "dEQP-GLES3.functional.transform_feedba"
#define VkglTestCase_041225_2 "ck.array.interleaved.lines.highp_ivec3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041225, VkglTestCase_041225_1, VkglTestCase_041225_2);

#define VkglTestCase_041226_1 "dEQP-GLES3.functional.transform_feedb"
#define VkglTestCase_041226_2 "ack.array.interleaved.lines.lowp_ivec4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041226, VkglTestCase_041226_1, VkglTestCase_041226_2);

#define VkglTestCase_041227_1 "dEQP-GLES3.functional.transform_feedbac"
#define VkglTestCase_041227_2 "k.array.interleaved.lines.mediump_ivec4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041227, VkglTestCase_041227_1, VkglTestCase_041227_2);

#define VkglTestCase_041228_1 "dEQP-GLES3.functional.transform_feedba"
#define VkglTestCase_041228_2 "ck.array.interleaved.lines.highp_ivec4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041228, VkglTestCase_041228_1, VkglTestCase_041228_2);

#define VkglTestCase_041229_1 "dEQP-GLES3.functional.transform_feedb"
#define VkglTestCase_041229_2 "ack.array.interleaved.lines.lowp_uint"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041229, VkglTestCase_041229_1, VkglTestCase_041229_2);

#define VkglTestCase_041230_1 "dEQP-GLES3.functional.transform_feedba"
#define VkglTestCase_041230_2 "ck.array.interleaved.lines.mediump_uint"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041230, VkglTestCase_041230_1, VkglTestCase_041230_2);

#define VkglTestCase_041231_1 "dEQP-GLES3.functional.transform_feedb"
#define VkglTestCase_041231_2 "ack.array.interleaved.lines.highp_uint"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041231, VkglTestCase_041231_1, VkglTestCase_041231_2);

#define VkglTestCase_041232_1 "dEQP-GLES3.functional.transform_feedb"
#define VkglTestCase_041232_2 "ack.array.interleaved.lines.lowp_uvec2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041232, VkglTestCase_041232_1, VkglTestCase_041232_2);

#define VkglTestCase_041233_1 "dEQP-GLES3.functional.transform_feedbac"
#define VkglTestCase_041233_2 "k.array.interleaved.lines.mediump_uvec2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041233, VkglTestCase_041233_1, VkglTestCase_041233_2);

#define VkglTestCase_041234_1 "dEQP-GLES3.functional.transform_feedba"
#define VkglTestCase_041234_2 "ck.array.interleaved.lines.highp_uvec2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041234, VkglTestCase_041234_1, VkglTestCase_041234_2);

#define VkglTestCase_041235_1 "dEQP-GLES3.functional.transform_feedb"
#define VkglTestCase_041235_2 "ack.array.interleaved.lines.lowp_uvec3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041235, VkglTestCase_041235_1, VkglTestCase_041235_2);

#define VkglTestCase_041236_1 "dEQP-GLES3.functional.transform_feedbac"
#define VkglTestCase_041236_2 "k.array.interleaved.lines.mediump_uvec3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041236, VkglTestCase_041236_1, VkglTestCase_041236_2);

#define VkglTestCase_041237_1 "dEQP-GLES3.functional.transform_feedba"
#define VkglTestCase_041237_2 "ck.array.interleaved.lines.highp_uvec3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041237, VkglTestCase_041237_1, VkglTestCase_041237_2);

#define VkglTestCase_041238_1 "dEQP-GLES3.functional.transform_feedb"
#define VkglTestCase_041238_2 "ack.array.interleaved.lines.lowp_uvec4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041238, VkglTestCase_041238_1, VkglTestCase_041238_2);

#define VkglTestCase_041239_1 "dEQP-GLES3.functional.transform_feedbac"
#define VkglTestCase_041239_2 "k.array.interleaved.lines.mediump_uvec4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041239, VkglTestCase_041239_1, VkglTestCase_041239_2);

#define VkglTestCase_041240_1 "dEQP-GLES3.functional.transform_feedba"
#define VkglTestCase_041240_2 "ck.array.interleaved.lines.highp_uvec4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041240, VkglTestCase_041240_1, VkglTestCase_041240_2);

#define VkglTestCase_041556_1 "dEQP-GLES3.functional.transform_feedback."
#define VkglTestCase_041556_2 "array_element.interleaved.lines.lowp_float"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041556, VkglTestCase_041556_1, VkglTestCase_041556_2);

#define VkglTestCase_041557_1 "dEQP-GLES3.functional.transform_feedback.ar"
#define VkglTestCase_041557_2 "ray_element.interleaved.lines.mediump_float"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041557, VkglTestCase_041557_1, VkglTestCase_041557_2);

#define VkglTestCase_041558_1 "dEQP-GLES3.functional.transform_feedback.a"
#define VkglTestCase_041558_2 "rray_element.interleaved.lines.highp_float"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041558, VkglTestCase_041558_1, VkglTestCase_041558_2);

#define VkglTestCase_041559_1 "dEQP-GLES3.functional.transform_feedback."
#define VkglTestCase_041559_2 "array_element.interleaved.lines.lowp_vec2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041559, VkglTestCase_041559_1, VkglTestCase_041559_2);

#define VkglTestCase_041560_1 "dEQP-GLES3.functional.transform_feedback.a"
#define VkglTestCase_041560_2 "rray_element.interleaved.lines.mediump_vec2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041560, VkglTestCase_041560_1, VkglTestCase_041560_2);

#define VkglTestCase_041561_1 "dEQP-GLES3.functional.transform_feedback."
#define VkglTestCase_041561_2 "array_element.interleaved.lines.highp_vec2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041561, VkglTestCase_041561_1, VkglTestCase_041561_2);

#define VkglTestCase_041562_1 "dEQP-GLES3.functional.transform_feedback."
#define VkglTestCase_041562_2 "array_element.interleaved.lines.lowp_vec3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041562, VkglTestCase_041562_1, VkglTestCase_041562_2);

#define VkglTestCase_041563_1 "dEQP-GLES3.functional.transform_feedback.a"
#define VkglTestCase_041563_2 "rray_element.interleaved.lines.mediump_vec3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041563, VkglTestCase_041563_1, VkglTestCase_041563_2);

#define VkglTestCase_041564_1 "dEQP-GLES3.functional.transform_feedback."
#define VkglTestCase_041564_2 "array_element.interleaved.lines.highp_vec3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041564, VkglTestCase_041564_1, VkglTestCase_041564_2);

#define VkglTestCase_041565_1 "dEQP-GLES3.functional.transform_feedback."
#define VkglTestCase_041565_2 "array_element.interleaved.lines.lowp_vec4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041565, VkglTestCase_041565_1, VkglTestCase_041565_2);

#define VkglTestCase_041566_1 "dEQP-GLES3.functional.transform_feedback.a"
#define VkglTestCase_041566_2 "rray_element.interleaved.lines.mediump_vec4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041566, VkglTestCase_041566_1, VkglTestCase_041566_2);

#define VkglTestCase_041567_1 "dEQP-GLES3.functional.transform_feedback."
#define VkglTestCase_041567_2 "array_element.interleaved.lines.highp_vec4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041567, VkglTestCase_041567_1, VkglTestCase_041567_2);

#define VkglTestCase_041568_1 "dEQP-GLES3.functional.transform_feedback."
#define VkglTestCase_041568_2 "array_element.interleaved.lines.lowp_mat2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041568, VkglTestCase_041568_1, VkglTestCase_041568_2);

#define VkglTestCase_041569_1 "dEQP-GLES3.functional.transform_feedback.a"
#define VkglTestCase_041569_2 "rray_element.interleaved.lines.mediump_mat2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041569, VkglTestCase_041569_1, VkglTestCase_041569_2);

#define VkglTestCase_041570_1 "dEQP-GLES3.functional.transform_feedback."
#define VkglTestCase_041570_2 "array_element.interleaved.lines.highp_mat2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041570, VkglTestCase_041570_1, VkglTestCase_041570_2);

#define VkglTestCase_041571_1 "dEQP-GLES3.functional.transform_feedback.a"
#define VkglTestCase_041571_2 "rray_element.interleaved.lines.lowp_mat2x3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041571, VkglTestCase_041571_1, VkglTestCase_041571_2);

#define VkglTestCase_041572_1 "dEQP-GLES3.functional.transform_feedback.ar"
#define VkglTestCase_041572_2 "ray_element.interleaved.lines.mediump_mat2x3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041572, VkglTestCase_041572_1, VkglTestCase_041572_2);

#define VkglTestCase_041573_1 "dEQP-GLES3.functional.transform_feedback.a"
#define VkglTestCase_041573_2 "rray_element.interleaved.lines.highp_mat2x3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041573, VkglTestCase_041573_1, VkglTestCase_041573_2);

#define VkglTestCase_041574_1 "dEQP-GLES3.functional.transform_feedback.a"
#define VkglTestCase_041574_2 "rray_element.interleaved.lines.lowp_mat2x4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041574, VkglTestCase_041574_1, VkglTestCase_041574_2);

#define VkglTestCase_041575_1 "dEQP-GLES3.functional.transform_feedback.ar"
#define VkglTestCase_041575_2 "ray_element.interleaved.lines.mediump_mat2x4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041575, VkglTestCase_041575_1, VkglTestCase_041575_2);

#define VkglTestCase_041576_1 "dEQP-GLES3.functional.transform_feedback.a"
#define VkglTestCase_041576_2 "rray_element.interleaved.lines.highp_mat2x4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041576, VkglTestCase_041576_1, VkglTestCase_041576_2);

#define VkglTestCase_041577_1 "dEQP-GLES3.functional.transform_feedback.a"
#define VkglTestCase_041577_2 "rray_element.interleaved.lines.lowp_mat3x2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041577, VkglTestCase_041577_1, VkglTestCase_041577_2);

#define VkglTestCase_041578_1 "dEQP-GLES3.functional.transform_feedback.ar"
#define VkglTestCase_041578_2 "ray_element.interleaved.lines.mediump_mat3x2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041578, VkglTestCase_041578_1, VkglTestCase_041578_2);

#define VkglTestCase_041579_1 "dEQP-GLES3.functional.transform_feedback.a"
#define VkglTestCase_041579_2 "rray_element.interleaved.lines.highp_mat3x2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041579, VkglTestCase_041579_1, VkglTestCase_041579_2);

#define VkglTestCase_041580_1 "dEQP-GLES3.functional.transform_feedback."
#define VkglTestCase_041580_2 "array_element.interleaved.lines.lowp_mat3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041580, VkglTestCase_041580_1, VkglTestCase_041580_2);

#define VkglTestCase_041581_1 "dEQP-GLES3.functional.transform_feedback.a"
#define VkglTestCase_041581_2 "rray_element.interleaved.lines.mediump_mat3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041581, VkglTestCase_041581_1, VkglTestCase_041581_2);

#define VkglTestCase_041582_1 "dEQP-GLES3.functional.transform_feedback."
#define VkglTestCase_041582_2 "array_element.interleaved.lines.highp_mat3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041582, VkglTestCase_041582_1, VkglTestCase_041582_2);

#define VkglTestCase_041583_1 "dEQP-GLES3.functional.transform_feedback.a"
#define VkglTestCase_041583_2 "rray_element.interleaved.lines.lowp_mat3x4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041583, VkglTestCase_041583_1, VkglTestCase_041583_2);

#define VkglTestCase_041584_1 "dEQP-GLES3.functional.transform_feedback.ar"
#define VkglTestCase_041584_2 "ray_element.interleaved.lines.mediump_mat3x4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041584, VkglTestCase_041584_1, VkglTestCase_041584_2);

#define VkglTestCase_041585_1 "dEQP-GLES3.functional.transform_feedback.a"
#define VkglTestCase_041585_2 "rray_element.interleaved.lines.highp_mat3x4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041585, VkglTestCase_041585_1, VkglTestCase_041585_2);

#define VkglTestCase_041586_1 "dEQP-GLES3.functional.transform_feedback.a"
#define VkglTestCase_041586_2 "rray_element.interleaved.lines.lowp_mat4x2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041586, VkglTestCase_041586_1, VkglTestCase_041586_2);

#define VkglTestCase_041587_1 "dEQP-GLES3.functional.transform_feedback.ar"
#define VkglTestCase_041587_2 "ray_element.interleaved.lines.mediump_mat4x2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041587, VkglTestCase_041587_1, VkglTestCase_041587_2);

#define VkglTestCase_041588_1 "dEQP-GLES3.functional.transform_feedback.a"
#define VkglTestCase_041588_2 "rray_element.interleaved.lines.highp_mat4x2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041588, VkglTestCase_041588_1, VkglTestCase_041588_2);

#define VkglTestCase_041589_1 "dEQP-GLES3.functional.transform_feedback.a"
#define VkglTestCase_041589_2 "rray_element.interleaved.lines.lowp_mat4x3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041589, VkglTestCase_041589_1, VkglTestCase_041589_2);

#define VkglTestCase_041590_1 "dEQP-GLES3.functional.transform_feedback.ar"
#define VkglTestCase_041590_2 "ray_element.interleaved.lines.mediump_mat4x3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041590, VkglTestCase_041590_1, VkglTestCase_041590_2);

#define VkglTestCase_041591_1 "dEQP-GLES3.functional.transform_feedback.a"
#define VkglTestCase_041591_2 "rray_element.interleaved.lines.highp_mat4x3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041591, VkglTestCase_041591_1, VkglTestCase_041591_2);

#define VkglTestCase_041592_1 "dEQP-GLES3.functional.transform_feedback."
#define VkglTestCase_041592_2 "array_element.interleaved.lines.lowp_mat4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041592, VkglTestCase_041592_1, VkglTestCase_041592_2);

#define VkglTestCase_041593_1 "dEQP-GLES3.functional.transform_feedback.a"
#define VkglTestCase_041593_2 "rray_element.interleaved.lines.mediump_mat4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041593, VkglTestCase_041593_1, VkglTestCase_041593_2);

#define VkglTestCase_041594_1 "dEQP-GLES3.functional.transform_feedback."
#define VkglTestCase_041594_2 "array_element.interleaved.lines.highp_mat4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041594, VkglTestCase_041594_1, VkglTestCase_041594_2);

#define VkglTestCase_041595_1 "dEQP-GLES3.functional.transform_feedback"
#define VkglTestCase_041595_2 ".array_element.interleaved.lines.lowp_int"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041595, VkglTestCase_041595_1, VkglTestCase_041595_2);

#define VkglTestCase_041596_1 "dEQP-GLES3.functional.transform_feedback.a"
#define VkglTestCase_041596_2 "rray_element.interleaved.lines.mediump_int"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041596, VkglTestCase_041596_1, VkglTestCase_041596_2);

#define VkglTestCase_041597_1 "dEQP-GLES3.functional.transform_feedback."
#define VkglTestCase_041597_2 "array_element.interleaved.lines.highp_int"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041597, VkglTestCase_041597_1, VkglTestCase_041597_2);

#define VkglTestCase_041598_1 "dEQP-GLES3.functional.transform_feedback."
#define VkglTestCase_041598_2 "array_element.interleaved.lines.lowp_ivec2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041598, VkglTestCase_041598_1, VkglTestCase_041598_2);

#define VkglTestCase_041599_1 "dEQP-GLES3.functional.transform_feedback.ar"
#define VkglTestCase_041599_2 "ray_element.interleaved.lines.mediump_ivec2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041599, VkglTestCase_041599_1, VkglTestCase_041599_2);

#define VkglTestCase_041600_1 "dEQP-GLES3.functional.transform_feedback.a"
#define VkglTestCase_041600_2 "rray_element.interleaved.lines.highp_ivec2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041600, VkglTestCase_041600_1, VkglTestCase_041600_2);

#define VkglTestCase_041601_1 "dEQP-GLES3.functional.transform_feedback."
#define VkglTestCase_041601_2 "array_element.interleaved.lines.lowp_ivec3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041601, VkglTestCase_041601_1, VkglTestCase_041601_2);

#define VkglTestCase_041602_1 "dEQP-GLES3.functional.transform_feedback.ar"
#define VkglTestCase_041602_2 "ray_element.interleaved.lines.mediump_ivec3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041602, VkglTestCase_041602_1, VkglTestCase_041602_2);

#define VkglTestCase_041603_1 "dEQP-GLES3.functional.transform_feedback.a"
#define VkglTestCase_041603_2 "rray_element.interleaved.lines.highp_ivec3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041603, VkglTestCase_041603_1, VkglTestCase_041603_2);

#define VkglTestCase_041604_1 "dEQP-GLES3.functional.transform_feedback."
#define VkglTestCase_041604_2 "array_element.interleaved.lines.lowp_ivec4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041604, VkglTestCase_041604_1, VkglTestCase_041604_2);

#define VkglTestCase_041605_1 "dEQP-GLES3.functional.transform_feedback.ar"
#define VkglTestCase_041605_2 "ray_element.interleaved.lines.mediump_ivec4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041605, VkglTestCase_041605_1, VkglTestCase_041605_2);

#define VkglTestCase_041606_1 "dEQP-GLES3.functional.transform_feedback.a"
#define VkglTestCase_041606_2 "rray_element.interleaved.lines.highp_ivec4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041606, VkglTestCase_041606_1, VkglTestCase_041606_2);

#define VkglTestCase_041607_1 "dEQP-GLES3.functional.transform_feedback."
#define VkglTestCase_041607_2 "array_element.interleaved.lines.lowp_uint"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041607, VkglTestCase_041607_1, VkglTestCase_041607_2);

#define VkglTestCase_041608_1 "dEQP-GLES3.functional.transform_feedback.a"
#define VkglTestCase_041608_2 "rray_element.interleaved.lines.mediump_uint"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041608, VkglTestCase_041608_1, VkglTestCase_041608_2);

#define VkglTestCase_041609_1 "dEQP-GLES3.functional.transform_feedback."
#define VkglTestCase_041609_2 "array_element.interleaved.lines.highp_uint"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041609, VkglTestCase_041609_1, VkglTestCase_041609_2);

#define VkglTestCase_041610_1 "dEQP-GLES3.functional.transform_feedback."
#define VkglTestCase_041610_2 "array_element.interleaved.lines.lowp_uvec2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041610, VkglTestCase_041610_1, VkglTestCase_041610_2);

#define VkglTestCase_041611_1 "dEQP-GLES3.functional.transform_feedback.ar"
#define VkglTestCase_041611_2 "ray_element.interleaved.lines.mediump_uvec2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041611, VkglTestCase_041611_1, VkglTestCase_041611_2);

#define VkglTestCase_041612_1 "dEQP-GLES3.functional.transform_feedback.a"
#define VkglTestCase_041612_2 "rray_element.interleaved.lines.highp_uvec2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041612, VkglTestCase_041612_1, VkglTestCase_041612_2);

#define VkglTestCase_041613_1 "dEQP-GLES3.functional.transform_feedback."
#define VkglTestCase_041613_2 "array_element.interleaved.lines.lowp_uvec3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041613, VkglTestCase_041613_1, VkglTestCase_041613_2);

#define VkglTestCase_041614_1 "dEQP-GLES3.functional.transform_feedback.ar"
#define VkglTestCase_041614_2 "ray_element.interleaved.lines.mediump_uvec3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041614, VkglTestCase_041614_1, VkglTestCase_041614_2);

#define VkglTestCase_041615_1 "dEQP-GLES3.functional.transform_feedback.a"
#define VkglTestCase_041615_2 "rray_element.interleaved.lines.highp_uvec3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041615, VkglTestCase_041615_1, VkglTestCase_041615_2);

#define VkglTestCase_041616_1 "dEQP-GLES3.functional.transform_feedback."
#define VkglTestCase_041616_2 "array_element.interleaved.lines.lowp_uvec4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041616, VkglTestCase_041616_1, VkglTestCase_041616_2);

#define VkglTestCase_041617_1 "dEQP-GLES3.functional.transform_feedback.ar"
#define VkglTestCase_041617_2 "ray_element.interleaved.lines.mediump_uvec4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041617, VkglTestCase_041617_1, VkglTestCase_041617_2);

#define VkglTestCase_041618_1 "dEQP-GLES3.functional.transform_feedback.a"
#define VkglTestCase_041618_2 "rray_element.interleaved.lines.highp_uvec4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041618, VkglTestCase_041618_1, VkglTestCase_041618_2);

#define VkglTestCase_041776_1 "dEQP-GLES3.functional.transform_f"
#define VkglTestCase_041776_2 "eedback.random.interleaved.lines.1"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041776, VkglTestCase_041776_1, VkglTestCase_041776_2);

#define VkglTestCase_041777_1 "dEQP-GLES3.functional.transform_f"
#define VkglTestCase_041777_2 "eedback.random.interleaved.lines.2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041777, VkglTestCase_041777_1, VkglTestCase_041777_2);

#define VkglTestCase_041778_1 "dEQP-GLES3.functional.transform_f"
#define VkglTestCase_041778_2 "eedback.random.interleaved.lines.3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041778, VkglTestCase_041778_1, VkglTestCase_041778_2);

#define VkglTestCase_041779_1 "dEQP-GLES3.functional.transform_f"
#define VkglTestCase_041779_2 "eedback.random.interleaved.lines.4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041779, VkglTestCase_041779_1, VkglTestCase_041779_2);

#define VkglTestCase_041780_1 "dEQP-GLES3.functional.transform_f"
#define VkglTestCase_041780_2 "eedback.random.interleaved.lines.5"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041780, VkglTestCase_041780_1, VkglTestCase_041780_2);

#define VkglTestCase_041781_1 "dEQP-GLES3.functional.transform_f"
#define VkglTestCase_041781_2 "eedback.random.interleaved.lines.6"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041781, VkglTestCase_041781_1, VkglTestCase_041781_2);

#define VkglTestCase_041782_1 "dEQP-GLES3.functional.transform_f"
#define VkglTestCase_041782_2 "eedback.random.interleaved.lines.7"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041782, VkglTestCase_041782_1, VkglTestCase_041782_2);

#define VkglTestCase_041783_1 "dEQP-GLES3.functional.transform_f"
#define VkglTestCase_041783_2 "eedback.random.interleaved.lines.8"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041783, VkglTestCase_041783_1, VkglTestCase_041783_2);

#define VkglTestCase_041784_1 "dEQP-GLES3.functional.transform_f"
#define VkglTestCase_041784_2 "eedback.random.interleaved.lines.9"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041784, VkglTestCase_041784_1, VkglTestCase_041784_2);

#define VkglTestCase_041785_1 "dEQP-GLES3.functional.transform_fe"
#define VkglTestCase_041785_2 "edback.random.interleaved.lines.10"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041785, VkglTestCase_041785_1, VkglTestCase_041785_2);

#define VkglTestCase_041836_1 "dEQP-GLES3.functional.transform_feedback.ra"
#define VkglTestCase_041836_2 "ndom_full_array_capture.interleaved.lines.1"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041836, VkglTestCase_041836_1, VkglTestCase_041836_2);

#define VkglTestCase_041837_1 "dEQP-GLES3.functional.transform_feedback.ra"
#define VkglTestCase_041837_2 "ndom_full_array_capture.interleaved.lines.2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041837, VkglTestCase_041837_1, VkglTestCase_041837_2);

#define VkglTestCase_041838_1 "dEQP-GLES3.functional.transform_feedback.ra"
#define VkglTestCase_041838_2 "ndom_full_array_capture.interleaved.lines.3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041838, VkglTestCase_041838_1, VkglTestCase_041838_2);

#define VkglTestCase_041839_1 "dEQP-GLES3.functional.transform_feedback.ra"
#define VkglTestCase_041839_2 "ndom_full_array_capture.interleaved.lines.4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041839, VkglTestCase_041839_1, VkglTestCase_041839_2);

#define VkglTestCase_041840_1 "dEQP-GLES3.functional.transform_feedback.ra"
#define VkglTestCase_041840_2 "ndom_full_array_capture.interleaved.lines.5"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041840, VkglTestCase_041840_1, VkglTestCase_041840_2);

#define VkglTestCase_041841_1 "dEQP-GLES3.functional.transform_feedback.ra"
#define VkglTestCase_041841_2 "ndom_full_array_capture.interleaved.lines.6"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041841, VkglTestCase_041841_1, VkglTestCase_041841_2);

#define VkglTestCase_041842_1 "dEQP-GLES3.functional.transform_feedback.ra"
#define VkglTestCase_041842_2 "ndom_full_array_capture.interleaved.lines.7"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041842, VkglTestCase_041842_1, VkglTestCase_041842_2);

#define VkglTestCase_041843_1 "dEQP-GLES3.functional.transform_feedback.ra"
#define VkglTestCase_041843_2 "ndom_full_array_capture.interleaved.lines.8"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041843, VkglTestCase_041843_1, VkglTestCase_041843_2);

#define VkglTestCase_041844_1 "dEQP-GLES3.functional.transform_feedback.ra"
#define VkglTestCase_041844_2 "ndom_full_array_capture.interleaved.lines.9"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041844, VkglTestCase_041844_1, VkglTestCase_041844_2);

#define VkglTestCase_041845_1 "dEQP-GLES3.functional.transform_feedback.ra"
#define VkglTestCase_041845_2 "ndom_full_array_capture.interleaved.lines.10"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041845, VkglTestCase_041845_1, VkglTestCase_041845_2);
