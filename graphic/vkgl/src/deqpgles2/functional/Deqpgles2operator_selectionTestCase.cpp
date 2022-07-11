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
#include "../ActsDeqpgles20007TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_006774_1 "dEQP-GLES2.functional.shaders.ope"
#define VkglTestCase_006774_2 "rator.selection.lowp_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006774, VkglTestCase_006774_1, VkglTestCase_006774_2);

#define VkglTestCase_006775_1 "dEQP-GLES2.functional.shaders.oper"
#define VkglTestCase_006775_2 "ator.selection.lowp_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006775, VkglTestCase_006775_1, VkglTestCase_006775_2);

#define VkglTestCase_006776_1 "dEQP-GLES2.functional.shaders.oper"
#define VkglTestCase_006776_2 "ator.selection.mediump_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006776, VkglTestCase_006776_1, VkglTestCase_006776_2);

#define VkglTestCase_006777_1 "dEQP-GLES2.functional.shaders.opera"
#define VkglTestCase_006777_2 "tor.selection.mediump_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006777, VkglTestCase_006777_1, VkglTestCase_006777_2);

#define VkglTestCase_006778_1 "dEQP-GLES2.functional.shaders.ope"
#define VkglTestCase_006778_2 "rator.selection.highp_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006778, VkglTestCase_006778_1, VkglTestCase_006778_2);

#define VkglTestCase_006779_1 "dEQP-GLES2.functional.shaders.oper"
#define VkglTestCase_006779_2 "ator.selection.highp_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006779, VkglTestCase_006779_1, VkglTestCase_006779_2);

#define VkglTestCase_006780_1 "dEQP-GLES2.functional.shaders.op"
#define VkglTestCase_006780_2 "erator.selection.lowp_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006780, VkglTestCase_006780_1, VkglTestCase_006780_2);

#define VkglTestCase_006781_1 "dEQP-GLES2.functional.shaders.ope"
#define VkglTestCase_006781_2 "rator.selection.lowp_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006781, VkglTestCase_006781_1, VkglTestCase_006781_2);

#define VkglTestCase_006782_1 "dEQP-GLES2.functional.shaders.oper"
#define VkglTestCase_006782_2 "ator.selection.mediump_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006782, VkglTestCase_006782_1, VkglTestCase_006782_2);

#define VkglTestCase_006783_1 "dEQP-GLES2.functional.shaders.opera"
#define VkglTestCase_006783_2 "tor.selection.mediump_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006783, VkglTestCase_006783_1, VkglTestCase_006783_2);

#define VkglTestCase_006784_1 "dEQP-GLES2.functional.shaders.ope"
#define VkglTestCase_006784_2 "rator.selection.highp_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006784, VkglTestCase_006784_1, VkglTestCase_006784_2);

#define VkglTestCase_006785_1 "dEQP-GLES2.functional.shaders.oper"
#define VkglTestCase_006785_2 "ator.selection.highp_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006785, VkglTestCase_006785_1, VkglTestCase_006785_2);

#define VkglTestCase_006786_1 "dEQP-GLES2.functional.shaders.op"
#define VkglTestCase_006786_2 "erator.selection.lowp_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006786, VkglTestCase_006786_1, VkglTestCase_006786_2);

#define VkglTestCase_006787_1 "dEQP-GLES2.functional.shaders.ope"
#define VkglTestCase_006787_2 "rator.selection.lowp_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006787, VkglTestCase_006787_1, VkglTestCase_006787_2);

#define VkglTestCase_006788_1 "dEQP-GLES2.functional.shaders.oper"
#define VkglTestCase_006788_2 "ator.selection.mediump_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006788, VkglTestCase_006788_1, VkglTestCase_006788_2);

#define VkglTestCase_006789_1 "dEQP-GLES2.functional.shaders.opera"
#define VkglTestCase_006789_2 "tor.selection.mediump_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006789, VkglTestCase_006789_1, VkglTestCase_006789_2);

#define VkglTestCase_006790_1 "dEQP-GLES2.functional.shaders.ope"
#define VkglTestCase_006790_2 "rator.selection.highp_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006790, VkglTestCase_006790_1, VkglTestCase_006790_2);

#define VkglTestCase_006791_1 "dEQP-GLES2.functional.shaders.oper"
#define VkglTestCase_006791_2 "ator.selection.highp_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006791, VkglTestCase_006791_1, VkglTestCase_006791_2);

#define VkglTestCase_006792_1 "dEQP-GLES2.functional.shaders.op"
#define VkglTestCase_006792_2 "erator.selection.lowp_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006792, VkglTestCase_006792_1, VkglTestCase_006792_2);

#define VkglTestCase_006793_1 "dEQP-GLES2.functional.shaders.ope"
#define VkglTestCase_006793_2 "rator.selection.lowp_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006793, VkglTestCase_006793_1, VkglTestCase_006793_2);

#define VkglTestCase_006794_1 "dEQP-GLES2.functional.shaders.oper"
#define VkglTestCase_006794_2 "ator.selection.mediump_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006794, VkglTestCase_006794_1, VkglTestCase_006794_2);

#define VkglTestCase_006795_1 "dEQP-GLES2.functional.shaders.opera"
#define VkglTestCase_006795_2 "tor.selection.mediump_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006795, VkglTestCase_006795_1, VkglTestCase_006795_2);

#define VkglTestCase_006796_1 "dEQP-GLES2.functional.shaders.ope"
#define VkglTestCase_006796_2 "rator.selection.highp_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006796, VkglTestCase_006796_1, VkglTestCase_006796_2);

#define VkglTestCase_006797_1 "dEQP-GLES2.functional.shaders.oper"
#define VkglTestCase_006797_2 "ator.selection.highp_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006797, VkglTestCase_006797_1, VkglTestCase_006797_2);

#define VkglTestCase_006798_1 "dEQP-GLES2.functional.shaders.op"
#define VkglTestCase_006798_2 "erator.selection.lowp_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006798, VkglTestCase_006798_1, VkglTestCase_006798_2);

#define VkglTestCase_006799_1 "dEQP-GLES2.functional.shaders.ope"
#define VkglTestCase_006799_2 "rator.selection.lowp_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006799, VkglTestCase_006799_1, VkglTestCase_006799_2);

#define VkglTestCase_006800_1 "dEQP-GLES2.functional.shaders.ope"
#define VkglTestCase_006800_2 "rator.selection.mediump_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006800, VkglTestCase_006800_1, VkglTestCase_006800_2);

#define VkglTestCase_006801_1 "dEQP-GLES2.functional.shaders.oper"
#define VkglTestCase_006801_2 "ator.selection.mediump_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006801, VkglTestCase_006801_1, VkglTestCase_006801_2);

#define VkglTestCase_006802_1 "dEQP-GLES2.functional.shaders.op"
#define VkglTestCase_006802_2 "erator.selection.highp_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006802, VkglTestCase_006802_1, VkglTestCase_006802_2);

#define VkglTestCase_006803_1 "dEQP-GLES2.functional.shaders.ope"
#define VkglTestCase_006803_2 "rator.selection.highp_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006803, VkglTestCase_006803_1, VkglTestCase_006803_2);

#define VkglTestCase_006804_1 "dEQP-GLES2.functional.shaders.ope"
#define VkglTestCase_006804_2 "rator.selection.lowp_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006804, VkglTestCase_006804_1, VkglTestCase_006804_2);

#define VkglTestCase_006805_1 "dEQP-GLES2.functional.shaders.oper"
#define VkglTestCase_006805_2 "ator.selection.lowp_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006805, VkglTestCase_006805_1, VkglTestCase_006805_2);

#define VkglTestCase_006806_1 "dEQP-GLES2.functional.shaders.oper"
#define VkglTestCase_006806_2 "ator.selection.mediump_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006806, VkglTestCase_006806_1, VkglTestCase_006806_2);

#define VkglTestCase_006807_1 "dEQP-GLES2.functional.shaders.opera"
#define VkglTestCase_006807_2 "tor.selection.mediump_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006807, VkglTestCase_006807_1, VkglTestCase_006807_2);

#define VkglTestCase_006808_1 "dEQP-GLES2.functional.shaders.ope"
#define VkglTestCase_006808_2 "rator.selection.highp_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006808, VkglTestCase_006808_1, VkglTestCase_006808_2);

#define VkglTestCase_006809_1 "dEQP-GLES2.functional.shaders.oper"
#define VkglTestCase_006809_2 "ator.selection.highp_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006809, VkglTestCase_006809_1, VkglTestCase_006809_2);

#define VkglTestCase_006810_1 "dEQP-GLES2.functional.shaders.ope"
#define VkglTestCase_006810_2 "rator.selection.lowp_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006810, VkglTestCase_006810_1, VkglTestCase_006810_2);

#define VkglTestCase_006811_1 "dEQP-GLES2.functional.shaders.oper"
#define VkglTestCase_006811_2 "ator.selection.lowp_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006811, VkglTestCase_006811_1, VkglTestCase_006811_2);

#define VkglTestCase_006812_1 "dEQP-GLES2.functional.shaders.oper"
#define VkglTestCase_006812_2 "ator.selection.mediump_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006812, VkglTestCase_006812_1, VkglTestCase_006812_2);

#define VkglTestCase_006813_1 "dEQP-GLES2.functional.shaders.opera"
#define VkglTestCase_006813_2 "tor.selection.mediump_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006813, VkglTestCase_006813_1, VkglTestCase_006813_2);

#define VkglTestCase_006814_1 "dEQP-GLES2.functional.shaders.ope"
#define VkglTestCase_006814_2 "rator.selection.highp_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006814, VkglTestCase_006814_1, VkglTestCase_006814_2);

#define VkglTestCase_006815_1 "dEQP-GLES2.functional.shaders.oper"
#define VkglTestCase_006815_2 "ator.selection.highp_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006815, VkglTestCase_006815_1, VkglTestCase_006815_2);

#define VkglTestCase_006816_1 "dEQP-GLES2.functional.shaders.ope"
#define VkglTestCase_006816_2 "rator.selection.lowp_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006816, VkglTestCase_006816_1, VkglTestCase_006816_2);

#define VkglTestCase_006817_1 "dEQP-GLES2.functional.shaders.oper"
#define VkglTestCase_006817_2 "ator.selection.lowp_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006817, VkglTestCase_006817_1, VkglTestCase_006817_2);

#define VkglTestCase_006818_1 "dEQP-GLES2.functional.shaders.oper"
#define VkglTestCase_006818_2 "ator.selection.mediump_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006818, VkglTestCase_006818_1, VkglTestCase_006818_2);

#define VkglTestCase_006819_1 "dEQP-GLES2.functional.shaders.opera"
#define VkglTestCase_006819_2 "tor.selection.mediump_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006819, VkglTestCase_006819_1, VkglTestCase_006819_2);

#define VkglTestCase_006820_1 "dEQP-GLES2.functional.shaders.ope"
#define VkglTestCase_006820_2 "rator.selection.highp_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006820, VkglTestCase_006820_1, VkglTestCase_006820_2);

#define VkglTestCase_006821_1 "dEQP-GLES2.functional.shaders.oper"
#define VkglTestCase_006821_2 "ator.selection.highp_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006821, VkglTestCase_006821_1, VkglTestCase_006821_2);

#define VkglTestCase_006822_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_006822_2 "operator.selection.bool_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006822, VkglTestCase_006822_1, VkglTestCase_006822_2);

#define VkglTestCase_006823_1 "dEQP-GLES2.functional.shaders.o"
#define VkglTestCase_006823_2 "perator.selection.bool_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006823, VkglTestCase_006823_1, VkglTestCase_006823_2);

#define VkglTestCase_006824_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_006824_2 "operator.selection.bvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006824, VkglTestCase_006824_1, VkglTestCase_006824_2);

#define VkglTestCase_006825_1 "dEQP-GLES2.functional.shaders.o"
#define VkglTestCase_006825_2 "perator.selection.bvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006825, VkglTestCase_006825_1, VkglTestCase_006825_2);

#define VkglTestCase_006826_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_006826_2 "operator.selection.bvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006826, VkglTestCase_006826_1, VkglTestCase_006826_2);

#define VkglTestCase_006827_1 "dEQP-GLES2.functional.shaders.o"
#define VkglTestCase_006827_2 "perator.selection.bvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006827, VkglTestCase_006827_1, VkglTestCase_006827_2);

#define VkglTestCase_006828_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_006828_2 "operator.selection.bvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006828, VkglTestCase_006828_1, VkglTestCase_006828_2);

#define VkglTestCase_006829_1 "dEQP-GLES2.functional.shaders.o"
#define VkglTestCase_006829_2 "perator.selection.bvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006829, VkglTestCase_006829_1, VkglTestCase_006829_2);
