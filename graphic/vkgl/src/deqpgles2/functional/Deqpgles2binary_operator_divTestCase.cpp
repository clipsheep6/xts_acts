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

#define VkglTestCase_004774_1 "dEQP-GLES2.functional.shaders.operator"
#define VkglTestCase_004774_2 ".binary_operator.div.lowp_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004774, VkglTestCase_004774_1, VkglTestCase_004774_2);

#define VkglTestCase_004775_1 "dEQP-GLES2.functional.shaders.operator."
#define VkglTestCase_004775_2 "binary_operator.div.lowp_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004775, VkglTestCase_004775_1, VkglTestCase_004775_2);

#define VkglTestCase_004776_1 "dEQP-GLES2.functional.shaders.operator."
#define VkglTestCase_004776_2 "binary_operator.div.mediump_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004776, VkglTestCase_004776_1, VkglTestCase_004776_2);

#define VkglTestCase_004777_1 "dEQP-GLES2.functional.shaders.operator.b"
#define VkglTestCase_004777_2 "inary_operator.div.mediump_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004777, VkglTestCase_004777_1, VkglTestCase_004777_2);

#define VkglTestCase_004778_1 "dEQP-GLES2.functional.shaders.operator"
#define VkglTestCase_004778_2 ".binary_operator.div.highp_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004778, VkglTestCase_004778_1, VkglTestCase_004778_2);

#define VkglTestCase_004779_1 "dEQP-GLES2.functional.shaders.operator."
#define VkglTestCase_004779_2 "binary_operator.div.highp_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004779, VkglTestCase_004779_1, VkglTestCase_004779_2);

#define VkglTestCase_004780_1 "dEQP-GLES2.functional.shaders.operato"
#define VkglTestCase_004780_2 "r.binary_operator.div.lowp_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004780, VkglTestCase_004780_1, VkglTestCase_004780_2);

#define VkglTestCase_004781_1 "dEQP-GLES2.functional.shaders.operator"
#define VkglTestCase_004781_2 ".binary_operator.div.lowp_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004781, VkglTestCase_004781_1, VkglTestCase_004781_2);

#define VkglTestCase_004782_1 "dEQP-GLES2.functional.shaders.operator."
#define VkglTestCase_004782_2 "binary_operator.div.mediump_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004782, VkglTestCase_004782_1, VkglTestCase_004782_2);

#define VkglTestCase_004783_1 "dEQP-GLES2.functional.shaders.operator.b"
#define VkglTestCase_004783_2 "inary_operator.div.mediump_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004783, VkglTestCase_004783_1, VkglTestCase_004783_2);

#define VkglTestCase_004784_1 "dEQP-GLES2.functional.shaders.operator"
#define VkglTestCase_004784_2 ".binary_operator.div.highp_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004784, VkglTestCase_004784_1, VkglTestCase_004784_2);

#define VkglTestCase_004785_1 "dEQP-GLES2.functional.shaders.operator."
#define VkglTestCase_004785_2 "binary_operator.div.highp_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004785, VkglTestCase_004785_1, VkglTestCase_004785_2);

#define VkglTestCase_004786_1 "dEQP-GLES2.functional.shaders.operato"
#define VkglTestCase_004786_2 "r.binary_operator.div.lowp_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004786, VkglTestCase_004786_1, VkglTestCase_004786_2);

#define VkglTestCase_004787_1 "dEQP-GLES2.functional.shaders.operator"
#define VkglTestCase_004787_2 ".binary_operator.div.lowp_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004787, VkglTestCase_004787_1, VkglTestCase_004787_2);

#define VkglTestCase_004788_1 "dEQP-GLES2.functional.shaders.operator."
#define VkglTestCase_004788_2 "binary_operator.div.mediump_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004788, VkglTestCase_004788_1, VkglTestCase_004788_2);

#define VkglTestCase_004789_1 "dEQP-GLES2.functional.shaders.operator.b"
#define VkglTestCase_004789_2 "inary_operator.div.mediump_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004789, VkglTestCase_004789_1, VkglTestCase_004789_2);

#define VkglTestCase_004790_1 "dEQP-GLES2.functional.shaders.operator"
#define VkglTestCase_004790_2 ".binary_operator.div.highp_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004790, VkglTestCase_004790_1, VkglTestCase_004790_2);

#define VkglTestCase_004791_1 "dEQP-GLES2.functional.shaders.operator."
#define VkglTestCase_004791_2 "binary_operator.div.highp_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004791, VkglTestCase_004791_1, VkglTestCase_004791_2);

#define VkglTestCase_004792_1 "dEQP-GLES2.functional.shaders.operato"
#define VkglTestCase_004792_2 "r.binary_operator.div.lowp_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004792, VkglTestCase_004792_1, VkglTestCase_004792_2);

#define VkglTestCase_004793_1 "dEQP-GLES2.functional.shaders.operator"
#define VkglTestCase_004793_2 ".binary_operator.div.lowp_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004793, VkglTestCase_004793_1, VkglTestCase_004793_2);

#define VkglTestCase_004794_1 "dEQP-GLES2.functional.shaders.operator."
#define VkglTestCase_004794_2 "binary_operator.div.mediump_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004794, VkglTestCase_004794_1, VkglTestCase_004794_2);

#define VkglTestCase_004795_1 "dEQP-GLES2.functional.shaders.operator.b"
#define VkglTestCase_004795_2 "inary_operator.div.mediump_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004795, VkglTestCase_004795_1, VkglTestCase_004795_2);

#define VkglTestCase_004796_1 "dEQP-GLES2.functional.shaders.operator"
#define VkglTestCase_004796_2 ".binary_operator.div.highp_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004796, VkglTestCase_004796_1, VkglTestCase_004796_2);

#define VkglTestCase_004797_1 "dEQP-GLES2.functional.shaders.operator."
#define VkglTestCase_004797_2 "binary_operator.div.highp_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004797, VkglTestCase_004797_1, VkglTestCase_004797_2);

#define VkglTestCase_004798_1 "dEQP-GLES2.functional.shaders.operato"
#define VkglTestCase_004798_2 "r.binary_operator.div.lowp_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004798, VkglTestCase_004798_1, VkglTestCase_004798_2);

#define VkglTestCase_004799_1 "dEQP-GLES2.functional.shaders.operator"
#define VkglTestCase_004799_2 ".binary_operator.div.lowp_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004799, VkglTestCase_004799_1, VkglTestCase_004799_2);

#define VkglTestCase_004800_1 "dEQP-GLES2.functional.shaders.operator"
#define VkglTestCase_004800_2 ".binary_operator.div.mediump_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004800, VkglTestCase_004800_1, VkglTestCase_004800_2);

#define VkglTestCase_004801_1 "dEQP-GLES2.functional.shaders.operator."
#define VkglTestCase_004801_2 "binary_operator.div.mediump_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004801, VkglTestCase_004801_1, VkglTestCase_004801_2);

#define VkglTestCase_004802_1 "dEQP-GLES2.functional.shaders.operato"
#define VkglTestCase_004802_2 "r.binary_operator.div.highp_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004802, VkglTestCase_004802_1, VkglTestCase_004802_2);

#define VkglTestCase_004803_1 "dEQP-GLES2.functional.shaders.operator"
#define VkglTestCase_004803_2 ".binary_operator.div.highp_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004803, VkglTestCase_004803_1, VkglTestCase_004803_2);

#define VkglTestCase_004804_1 "dEQP-GLES2.functional.shaders.operator"
#define VkglTestCase_004804_2 ".binary_operator.div.lowp_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004804, VkglTestCase_004804_1, VkglTestCase_004804_2);

#define VkglTestCase_004805_1 "dEQP-GLES2.functional.shaders.operator."
#define VkglTestCase_004805_2 "binary_operator.div.lowp_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004805, VkglTestCase_004805_1, VkglTestCase_004805_2);

#define VkglTestCase_004806_1 "dEQP-GLES2.functional.shaders.operator."
#define VkglTestCase_004806_2 "binary_operator.div.mediump_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004806, VkglTestCase_004806_1, VkglTestCase_004806_2);

#define VkglTestCase_004807_1 "dEQP-GLES2.functional.shaders.operator.b"
#define VkglTestCase_004807_2 "inary_operator.div.mediump_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004807, VkglTestCase_004807_1, VkglTestCase_004807_2);

#define VkglTestCase_004808_1 "dEQP-GLES2.functional.shaders.operator"
#define VkglTestCase_004808_2 ".binary_operator.div.highp_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004808, VkglTestCase_004808_1, VkglTestCase_004808_2);

#define VkglTestCase_004809_1 "dEQP-GLES2.functional.shaders.operator."
#define VkglTestCase_004809_2 "binary_operator.div.highp_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004809, VkglTestCase_004809_1, VkglTestCase_004809_2);

#define VkglTestCase_004810_1 "dEQP-GLES2.functional.shaders.operator"
#define VkglTestCase_004810_2 ".binary_operator.div.lowp_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004810, VkglTestCase_004810_1, VkglTestCase_004810_2);

#define VkglTestCase_004811_1 "dEQP-GLES2.functional.shaders.operator."
#define VkglTestCase_004811_2 "binary_operator.div.lowp_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004811, VkglTestCase_004811_1, VkglTestCase_004811_2);

#define VkglTestCase_004812_1 "dEQP-GLES2.functional.shaders.operator."
#define VkglTestCase_004812_2 "binary_operator.div.mediump_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004812, VkglTestCase_004812_1, VkglTestCase_004812_2);

#define VkglTestCase_004813_1 "dEQP-GLES2.functional.shaders.operator.b"
#define VkglTestCase_004813_2 "inary_operator.div.mediump_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004813, VkglTestCase_004813_1, VkglTestCase_004813_2);

#define VkglTestCase_004814_1 "dEQP-GLES2.functional.shaders.operator"
#define VkglTestCase_004814_2 ".binary_operator.div.highp_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004814, VkglTestCase_004814_1, VkglTestCase_004814_2);

#define VkglTestCase_004815_1 "dEQP-GLES2.functional.shaders.operator."
#define VkglTestCase_004815_2 "binary_operator.div.highp_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004815, VkglTestCase_004815_1, VkglTestCase_004815_2);

#define VkglTestCase_004816_1 "dEQP-GLES2.functional.shaders.operator"
#define VkglTestCase_004816_2 ".binary_operator.div.lowp_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004816, VkglTestCase_004816_1, VkglTestCase_004816_2);

#define VkglTestCase_004817_1 "dEQP-GLES2.functional.shaders.operator."
#define VkglTestCase_004817_2 "binary_operator.div.lowp_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004817, VkglTestCase_004817_1, VkglTestCase_004817_2);

#define VkglTestCase_004818_1 "dEQP-GLES2.functional.shaders.operator."
#define VkglTestCase_004818_2 "binary_operator.div.mediump_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004818, VkglTestCase_004818_1, VkglTestCase_004818_2);

#define VkglTestCase_004819_1 "dEQP-GLES2.functional.shaders.operator.b"
#define VkglTestCase_004819_2 "inary_operator.div.mediump_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004819, VkglTestCase_004819_1, VkglTestCase_004819_2);

#define VkglTestCase_004820_1 "dEQP-GLES2.functional.shaders.operator"
#define VkglTestCase_004820_2 ".binary_operator.div.highp_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004820, VkglTestCase_004820_1, VkglTestCase_004820_2);

#define VkglTestCase_004821_1 "dEQP-GLES2.functional.shaders.operator."
#define VkglTestCase_004821_2 "binary_operator.div.highp_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004821, VkglTestCase_004821_1, VkglTestCase_004821_2);

#define VkglTestCase_004822_1 "dEQP-GLES2.functional.shaders.operator.b"
#define VkglTestCase_004822_2 "inary_operator.div.lowp_vec2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004822, VkglTestCase_004822_1, VkglTestCase_004822_2);

#define VkglTestCase_004823_1 "dEQP-GLES2.functional.shaders.operator.bi"
#define VkglTestCase_004823_2 "nary_operator.div.lowp_vec2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004823, VkglTestCase_004823_1, VkglTestCase_004823_2);

#define VkglTestCase_004824_1 "dEQP-GLES2.functional.shaders.operator.bin"
#define VkglTestCase_004824_2 "ary_operator.div.mediump_vec2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004824, VkglTestCase_004824_1, VkglTestCase_004824_2);

#define VkglTestCase_004825_1 "dEQP-GLES2.functional.shaders.operator.bina"
#define VkglTestCase_004825_2 "ry_operator.div.mediump_vec2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004825, VkglTestCase_004825_1, VkglTestCase_004825_2);

#define VkglTestCase_004826_1 "dEQP-GLES2.functional.shaders.operator.bi"
#define VkglTestCase_004826_2 "nary_operator.div.highp_vec2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004826, VkglTestCase_004826_1, VkglTestCase_004826_2);

#define VkglTestCase_004827_1 "dEQP-GLES2.functional.shaders.operator.bin"
#define VkglTestCase_004827_2 "ary_operator.div.highp_vec2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004827, VkglTestCase_004827_1, VkglTestCase_004827_2);

#define VkglTestCase_004828_1 "dEQP-GLES2.functional.shaders.operator.b"
#define VkglTestCase_004828_2 "inary_operator.div.lowp_vec3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004828, VkglTestCase_004828_1, VkglTestCase_004828_2);

#define VkglTestCase_004829_1 "dEQP-GLES2.functional.shaders.operator.bi"
#define VkglTestCase_004829_2 "nary_operator.div.lowp_vec3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004829, VkglTestCase_004829_1, VkglTestCase_004829_2);

#define VkglTestCase_004830_1 "dEQP-GLES2.functional.shaders.operator.bin"
#define VkglTestCase_004830_2 "ary_operator.div.mediump_vec3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004830, VkglTestCase_004830_1, VkglTestCase_004830_2);

#define VkglTestCase_004831_1 "dEQP-GLES2.functional.shaders.operator.bina"
#define VkglTestCase_004831_2 "ry_operator.div.mediump_vec3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004831, VkglTestCase_004831_1, VkglTestCase_004831_2);

#define VkglTestCase_004832_1 "dEQP-GLES2.functional.shaders.operator.bi"
#define VkglTestCase_004832_2 "nary_operator.div.highp_vec3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004832, VkglTestCase_004832_1, VkglTestCase_004832_2);

#define VkglTestCase_004833_1 "dEQP-GLES2.functional.shaders.operator.bin"
#define VkglTestCase_004833_2 "ary_operator.div.highp_vec3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004833, VkglTestCase_004833_1, VkglTestCase_004833_2);

#define VkglTestCase_004834_1 "dEQP-GLES2.functional.shaders.operator.b"
#define VkglTestCase_004834_2 "inary_operator.div.lowp_vec4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004834, VkglTestCase_004834_1, VkglTestCase_004834_2);

#define VkglTestCase_004835_1 "dEQP-GLES2.functional.shaders.operator.bi"
#define VkglTestCase_004835_2 "nary_operator.div.lowp_vec4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004835, VkglTestCase_004835_1, VkglTestCase_004835_2);

#define VkglTestCase_004836_1 "dEQP-GLES2.functional.shaders.operator.bin"
#define VkglTestCase_004836_2 "ary_operator.div.mediump_vec4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004836, VkglTestCase_004836_1, VkglTestCase_004836_2);

#define VkglTestCase_004837_1 "dEQP-GLES2.functional.shaders.operator.bina"
#define VkglTestCase_004837_2 "ry_operator.div.mediump_vec4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004837, VkglTestCase_004837_1, VkglTestCase_004837_2);

#define VkglTestCase_004838_1 "dEQP-GLES2.functional.shaders.operator.bi"
#define VkglTestCase_004838_2 "nary_operator.div.highp_vec4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004838, VkglTestCase_004838_1, VkglTestCase_004838_2);

#define VkglTestCase_004839_1 "dEQP-GLES2.functional.shaders.operator.bin"
#define VkglTestCase_004839_2 "ary_operator.div.highp_vec4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004839, VkglTestCase_004839_1, VkglTestCase_004839_2);

#define VkglTestCase_004840_1 "dEQP-GLES2.functional.shaders.operator.b"
#define VkglTestCase_004840_2 "inary_operator.div.lowp_ivec2_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004840, VkglTestCase_004840_1, VkglTestCase_004840_2);

#define VkglTestCase_004841_1 "dEQP-GLES2.functional.shaders.operator.bi"
#define VkglTestCase_004841_2 "nary_operator.div.lowp_ivec2_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004841, VkglTestCase_004841_1, VkglTestCase_004841_2);

#define VkglTestCase_004842_1 "dEQP-GLES2.functional.shaders.operator.bi"
#define VkglTestCase_004842_2 "nary_operator.div.mediump_ivec2_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004842, VkglTestCase_004842_1, VkglTestCase_004842_2);

#define VkglTestCase_004843_1 "dEQP-GLES2.functional.shaders.operator.bin"
#define VkglTestCase_004843_2 "ary_operator.div.mediump_ivec2_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004843, VkglTestCase_004843_1, VkglTestCase_004843_2);

#define VkglTestCase_004844_1 "dEQP-GLES2.functional.shaders.operator.b"
#define VkglTestCase_004844_2 "inary_operator.div.highp_ivec2_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004844, VkglTestCase_004844_1, VkglTestCase_004844_2);

#define VkglTestCase_004845_1 "dEQP-GLES2.functional.shaders.operator.bi"
#define VkglTestCase_004845_2 "nary_operator.div.highp_ivec2_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004845, VkglTestCase_004845_1, VkglTestCase_004845_2);

#define VkglTestCase_004846_1 "dEQP-GLES2.functional.shaders.operator.b"
#define VkglTestCase_004846_2 "inary_operator.div.lowp_ivec3_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004846, VkglTestCase_004846_1, VkglTestCase_004846_2);

#define VkglTestCase_004847_1 "dEQP-GLES2.functional.shaders.operator.bi"
#define VkglTestCase_004847_2 "nary_operator.div.lowp_ivec3_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004847, VkglTestCase_004847_1, VkglTestCase_004847_2);

#define VkglTestCase_004848_1 "dEQP-GLES2.functional.shaders.operator.bi"
#define VkglTestCase_004848_2 "nary_operator.div.mediump_ivec3_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004848, VkglTestCase_004848_1, VkglTestCase_004848_2);

#define VkglTestCase_004849_1 "dEQP-GLES2.functional.shaders.operator.bin"
#define VkglTestCase_004849_2 "ary_operator.div.mediump_ivec3_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004849, VkglTestCase_004849_1, VkglTestCase_004849_2);

#define VkglTestCase_004850_1 "dEQP-GLES2.functional.shaders.operator.b"
#define VkglTestCase_004850_2 "inary_operator.div.highp_ivec3_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004850, VkglTestCase_004850_1, VkglTestCase_004850_2);

#define VkglTestCase_004851_1 "dEQP-GLES2.functional.shaders.operator.bi"
#define VkglTestCase_004851_2 "nary_operator.div.highp_ivec3_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004851, VkglTestCase_004851_1, VkglTestCase_004851_2);

#define VkglTestCase_004852_1 "dEQP-GLES2.functional.shaders.operator.b"
#define VkglTestCase_004852_2 "inary_operator.div.lowp_ivec4_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004852, VkglTestCase_004852_1, VkglTestCase_004852_2);

#define VkglTestCase_004853_1 "dEQP-GLES2.functional.shaders.operator.bi"
#define VkglTestCase_004853_2 "nary_operator.div.lowp_ivec4_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004853, VkglTestCase_004853_1, VkglTestCase_004853_2);

#define VkglTestCase_004854_1 "dEQP-GLES2.functional.shaders.operator.bi"
#define VkglTestCase_004854_2 "nary_operator.div.mediump_ivec4_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004854, VkglTestCase_004854_1, VkglTestCase_004854_2);

#define VkglTestCase_004855_1 "dEQP-GLES2.functional.shaders.operator.bin"
#define VkglTestCase_004855_2 "ary_operator.div.mediump_ivec4_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004855, VkglTestCase_004855_1, VkglTestCase_004855_2);

#define VkglTestCase_004856_1 "dEQP-GLES2.functional.shaders.operator.b"
#define VkglTestCase_004856_2 "inary_operator.div.highp_ivec4_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004856, VkglTestCase_004856_1, VkglTestCase_004856_2);

#define VkglTestCase_004857_1 "dEQP-GLES2.functional.shaders.operator.bi"
#define VkglTestCase_004857_2 "nary_operator.div.highp_ivec4_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004857, VkglTestCase_004857_1, VkglTestCase_004857_2);

#define VkglTestCase_004858_1 "dEQP-GLES2.functional.shaders.operator.b"
#define VkglTestCase_004858_2 "inary_operator.div.lowp_float_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004858, VkglTestCase_004858_1, VkglTestCase_004858_2);

#define VkglTestCase_004859_1 "dEQP-GLES2.functional.shaders.operator.bi"
#define VkglTestCase_004859_2 "nary_operator.div.lowp_float_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004859, VkglTestCase_004859_1, VkglTestCase_004859_2);

#define VkglTestCase_004860_1 "dEQP-GLES2.functional.shaders.operator.bin"
#define VkglTestCase_004860_2 "ary_operator.div.mediump_float_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004860, VkglTestCase_004860_1, VkglTestCase_004860_2);

#define VkglTestCase_004861_1 "dEQP-GLES2.functional.shaders.operator.bina"
#define VkglTestCase_004861_2 "ry_operator.div.mediump_float_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004861, VkglTestCase_004861_1, VkglTestCase_004861_2);

#define VkglTestCase_004862_1 "dEQP-GLES2.functional.shaders.operator.bi"
#define VkglTestCase_004862_2 "nary_operator.div.highp_float_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004862, VkglTestCase_004862_1, VkglTestCase_004862_2);

#define VkglTestCase_004863_1 "dEQP-GLES2.functional.shaders.operator.bin"
#define VkglTestCase_004863_2 "ary_operator.div.highp_float_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004863, VkglTestCase_004863_1, VkglTestCase_004863_2);

#define VkglTestCase_004864_1 "dEQP-GLES2.functional.shaders.operator.b"
#define VkglTestCase_004864_2 "inary_operator.div.lowp_float_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004864, VkglTestCase_004864_1, VkglTestCase_004864_2);

#define VkglTestCase_004865_1 "dEQP-GLES2.functional.shaders.operator.bi"
#define VkglTestCase_004865_2 "nary_operator.div.lowp_float_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004865, VkglTestCase_004865_1, VkglTestCase_004865_2);

#define VkglTestCase_004866_1 "dEQP-GLES2.functional.shaders.operator.bin"
#define VkglTestCase_004866_2 "ary_operator.div.mediump_float_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004866, VkglTestCase_004866_1, VkglTestCase_004866_2);

#define VkglTestCase_004867_1 "dEQP-GLES2.functional.shaders.operator.bina"
#define VkglTestCase_004867_2 "ry_operator.div.mediump_float_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004867, VkglTestCase_004867_1, VkglTestCase_004867_2);

#define VkglTestCase_004868_1 "dEQP-GLES2.functional.shaders.operator.bi"
#define VkglTestCase_004868_2 "nary_operator.div.highp_float_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004868, VkglTestCase_004868_1, VkglTestCase_004868_2);

#define VkglTestCase_004869_1 "dEQP-GLES2.functional.shaders.operator.bin"
#define VkglTestCase_004869_2 "ary_operator.div.highp_float_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004869, VkglTestCase_004869_1, VkglTestCase_004869_2);

#define VkglTestCase_004870_1 "dEQP-GLES2.functional.shaders.operator.b"
#define VkglTestCase_004870_2 "inary_operator.div.lowp_float_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004870, VkglTestCase_004870_1, VkglTestCase_004870_2);

#define VkglTestCase_004871_1 "dEQP-GLES2.functional.shaders.operator.bi"
#define VkglTestCase_004871_2 "nary_operator.div.lowp_float_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004871, VkglTestCase_004871_1, VkglTestCase_004871_2);

#define VkglTestCase_004872_1 "dEQP-GLES2.functional.shaders.operator.bin"
#define VkglTestCase_004872_2 "ary_operator.div.mediump_float_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004872, VkglTestCase_004872_1, VkglTestCase_004872_2);

#define VkglTestCase_004873_1 "dEQP-GLES2.functional.shaders.operator.bina"
#define VkglTestCase_004873_2 "ry_operator.div.mediump_float_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004873, VkglTestCase_004873_1, VkglTestCase_004873_2);

#define VkglTestCase_004874_1 "dEQP-GLES2.functional.shaders.operator.bi"
#define VkglTestCase_004874_2 "nary_operator.div.highp_float_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004874, VkglTestCase_004874_1, VkglTestCase_004874_2);

#define VkglTestCase_004875_1 "dEQP-GLES2.functional.shaders.operator.bin"
#define VkglTestCase_004875_2 "ary_operator.div.highp_float_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004875, VkglTestCase_004875_1, VkglTestCase_004875_2);

#define VkglTestCase_004876_1 "dEQP-GLES2.functional.shaders.operator.b"
#define VkglTestCase_004876_2 "inary_operator.div.lowp_int_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004876, VkglTestCase_004876_1, VkglTestCase_004876_2);

#define VkglTestCase_004877_1 "dEQP-GLES2.functional.shaders.operator.bi"
#define VkglTestCase_004877_2 "nary_operator.div.lowp_int_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004877, VkglTestCase_004877_1, VkglTestCase_004877_2);

#define VkglTestCase_004878_1 "dEQP-GLES2.functional.shaders.operator.bi"
#define VkglTestCase_004878_2 "nary_operator.div.mediump_int_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004878, VkglTestCase_004878_1, VkglTestCase_004878_2);

#define VkglTestCase_004879_1 "dEQP-GLES2.functional.shaders.operator.bin"
#define VkglTestCase_004879_2 "ary_operator.div.mediump_int_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004879, VkglTestCase_004879_1, VkglTestCase_004879_2);

#define VkglTestCase_004880_1 "dEQP-GLES2.functional.shaders.operator.b"
#define VkglTestCase_004880_2 "inary_operator.div.highp_int_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004880, VkglTestCase_004880_1, VkglTestCase_004880_2);

#define VkglTestCase_004881_1 "dEQP-GLES2.functional.shaders.operator.bi"
#define VkglTestCase_004881_2 "nary_operator.div.highp_int_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004881, VkglTestCase_004881_1, VkglTestCase_004881_2);

#define VkglTestCase_004882_1 "dEQP-GLES2.functional.shaders.operator.b"
#define VkglTestCase_004882_2 "inary_operator.div.lowp_int_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004882, VkglTestCase_004882_1, VkglTestCase_004882_2);

#define VkglTestCase_004883_1 "dEQP-GLES2.functional.shaders.operator.bi"
#define VkglTestCase_004883_2 "nary_operator.div.lowp_int_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004883, VkglTestCase_004883_1, VkglTestCase_004883_2);

#define VkglTestCase_004884_1 "dEQP-GLES2.functional.shaders.operator.bi"
#define VkglTestCase_004884_2 "nary_operator.div.mediump_int_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004884, VkglTestCase_004884_1, VkglTestCase_004884_2);

#define VkglTestCase_004885_1 "dEQP-GLES2.functional.shaders.operator.bin"
#define VkglTestCase_004885_2 "ary_operator.div.mediump_int_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004885, VkglTestCase_004885_1, VkglTestCase_004885_2);

#define VkglTestCase_004886_1 "dEQP-GLES2.functional.shaders.operator.b"
#define VkglTestCase_004886_2 "inary_operator.div.highp_int_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004886, VkglTestCase_004886_1, VkglTestCase_004886_2);

#define VkglTestCase_004887_1 "dEQP-GLES2.functional.shaders.operator.bi"
#define VkglTestCase_004887_2 "nary_operator.div.highp_int_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004887, VkglTestCase_004887_1, VkglTestCase_004887_2);

#define VkglTestCase_004888_1 "dEQP-GLES2.functional.shaders.operator.b"
#define VkglTestCase_004888_2 "inary_operator.div.lowp_int_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004888, VkglTestCase_004888_1, VkglTestCase_004888_2);

#define VkglTestCase_004889_1 "dEQP-GLES2.functional.shaders.operator.bi"
#define VkglTestCase_004889_2 "nary_operator.div.lowp_int_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004889, VkglTestCase_004889_1, VkglTestCase_004889_2);

#define VkglTestCase_004890_1 "dEQP-GLES2.functional.shaders.operator.bi"
#define VkglTestCase_004890_2 "nary_operator.div.mediump_int_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004890, VkglTestCase_004890_1, VkglTestCase_004890_2);

#define VkglTestCase_004891_1 "dEQP-GLES2.functional.shaders.operator.bin"
#define VkglTestCase_004891_2 "ary_operator.div.mediump_int_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004891, VkglTestCase_004891_1, VkglTestCase_004891_2);

#define VkglTestCase_004892_1 "dEQP-GLES2.functional.shaders.operator.b"
#define VkglTestCase_004892_2 "inary_operator.div.highp_int_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004892, VkglTestCase_004892_1, VkglTestCase_004892_2);

#define VkglTestCase_004893_1 "dEQP-GLES2.functional.shaders.operator.bi"
#define VkglTestCase_004893_2 "nary_operator.div.highp_int_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004893, VkglTestCase_004893_1, VkglTestCase_004893_2);
