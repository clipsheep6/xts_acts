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
#include "../ActsDeqpgles30014TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_013764_1 "dEQP-GLES3.functional.shaders.matr"
#define VkglTestCase_013764_2 "ix.add.const.lowp_mat2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013764, VkglTestCase_013764_1, VkglTestCase_013764_2);

#define VkglTestCase_013765_1 "dEQP-GLES3.functional.shaders.matri"
#define VkglTestCase_013765_2 "x.add.const.lowp_mat2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013765, VkglTestCase_013765_1, VkglTestCase_013765_2);

#define VkglTestCase_013766_1 "dEQP-GLES3.functional.shaders.matr"
#define VkglTestCase_013766_2 "ix.add.const.lowp_mat2_mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013766, VkglTestCase_013766_1, VkglTestCase_013766_2);

#define VkglTestCase_013767_1 "dEQP-GLES3.functional.shaders.matri"
#define VkglTestCase_013767_2 "x.add.const.lowp_mat2_mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013767, VkglTestCase_013767_1, VkglTestCase_013767_2);

#define VkglTestCase_013768_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_013768_2 ".add.const.mediump_mat2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013768, VkglTestCase_013768_1, VkglTestCase_013768_2);

#define VkglTestCase_013769_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_013769_2 "add.const.mediump_mat2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013769, VkglTestCase_013769_1, VkglTestCase_013769_2);

#define VkglTestCase_013770_1 "dEQP-GLES3.functional.shaders.matri"
#define VkglTestCase_013770_2 "x.add.const.mediump_mat2_mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013770, VkglTestCase_013770_1, VkglTestCase_013770_2);

#define VkglTestCase_013771_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_013771_2 ".add.const.mediump_mat2_mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013771, VkglTestCase_013771_1, VkglTestCase_013771_2);

#define VkglTestCase_013772_1 "dEQP-GLES3.functional.shaders.matri"
#define VkglTestCase_013772_2 "x.add.const.highp_mat2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013772, VkglTestCase_013772_1, VkglTestCase_013772_2);

#define VkglTestCase_013773_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_013773_2 ".add.const.highp_mat2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013773, VkglTestCase_013773_1, VkglTestCase_013773_2);

#define VkglTestCase_013774_1 "dEQP-GLES3.functional.shaders.matr"
#define VkglTestCase_013774_2 "ix.add.const.highp_mat2_mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013774, VkglTestCase_013774_1, VkglTestCase_013774_2);

#define VkglTestCase_013775_1 "dEQP-GLES3.functional.shaders.matri"
#define VkglTestCase_013775_2 "x.add.const.highp_mat2_mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013775, VkglTestCase_013775_1, VkglTestCase_013775_2);

#define VkglTestCase_013776_1 "dEQP-GLES3.functional.shaders.matri"
#define VkglTestCase_013776_2 "x.add.const.lowp_mat2x3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013776, VkglTestCase_013776_1, VkglTestCase_013776_2);

#define VkglTestCase_013777_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_013777_2 ".add.const.lowp_mat2x3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013777, VkglTestCase_013777_1, VkglTestCase_013777_2);

#define VkglTestCase_013778_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_013778_2 ".add.const.lowp_mat2x3_mat2x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013778, VkglTestCase_013778_1, VkglTestCase_013778_2);

#define VkglTestCase_013779_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_013779_2 "add.const.lowp_mat2x3_mat2x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013779, VkglTestCase_013779_1, VkglTestCase_013779_2);

#define VkglTestCase_013780_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_013780_2 "add.const.mediump_mat2x3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013780, VkglTestCase_013780_1, VkglTestCase_013780_2);

#define VkglTestCase_013781_1 "dEQP-GLES3.functional.shaders.matrix.a"
#define VkglTestCase_013781_2 "dd.const.mediump_mat2x3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013781, VkglTestCase_013781_1, VkglTestCase_013781_2);

#define VkglTestCase_013782_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_013782_2 "add.const.mediump_mat2x3_mat2x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013782, VkglTestCase_013782_1, VkglTestCase_013782_2);

#define VkglTestCase_013783_1 "dEQP-GLES3.functional.shaders.matrix.a"
#define VkglTestCase_013783_2 "dd.const.mediump_mat2x3_mat2x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013783, VkglTestCase_013783_1, VkglTestCase_013783_2);

#define VkglTestCase_013784_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_013784_2 ".add.const.highp_mat2x3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013784, VkglTestCase_013784_1, VkglTestCase_013784_2);

#define VkglTestCase_013785_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_013785_2 "add.const.highp_mat2x3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013785, VkglTestCase_013785_1, VkglTestCase_013785_2);

#define VkglTestCase_013786_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_013786_2 ".add.const.highp_mat2x3_mat2x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013786, VkglTestCase_013786_1, VkglTestCase_013786_2);

#define VkglTestCase_013787_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_013787_2 "add.const.highp_mat2x3_mat2x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013787, VkglTestCase_013787_1, VkglTestCase_013787_2);

#define VkglTestCase_013788_1 "dEQP-GLES3.functional.shaders.matri"
#define VkglTestCase_013788_2 "x.add.const.lowp_mat2x4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013788, VkglTestCase_013788_1, VkglTestCase_013788_2);

#define VkglTestCase_013789_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_013789_2 ".add.const.lowp_mat2x4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013789, VkglTestCase_013789_1, VkglTestCase_013789_2);

#define VkglTestCase_013790_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_013790_2 ".add.const.lowp_mat2x4_mat2x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013790, VkglTestCase_013790_1, VkglTestCase_013790_2);

#define VkglTestCase_013791_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_013791_2 "add.const.lowp_mat2x4_mat2x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013791, VkglTestCase_013791_1, VkglTestCase_013791_2);

#define VkglTestCase_013792_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_013792_2 "add.const.mediump_mat2x4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013792, VkglTestCase_013792_1, VkglTestCase_013792_2);

#define VkglTestCase_013793_1 "dEQP-GLES3.functional.shaders.matrix.a"
#define VkglTestCase_013793_2 "dd.const.mediump_mat2x4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013793, VkglTestCase_013793_1, VkglTestCase_013793_2);

#define VkglTestCase_013794_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_013794_2 "add.const.mediump_mat2x4_mat2x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013794, VkglTestCase_013794_1, VkglTestCase_013794_2);

#define VkglTestCase_013795_1 "dEQP-GLES3.functional.shaders.matrix.a"
#define VkglTestCase_013795_2 "dd.const.mediump_mat2x4_mat2x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013795, VkglTestCase_013795_1, VkglTestCase_013795_2);

#define VkglTestCase_013796_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_013796_2 ".add.const.highp_mat2x4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013796, VkglTestCase_013796_1, VkglTestCase_013796_2);

#define VkglTestCase_013797_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_013797_2 "add.const.highp_mat2x4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013797, VkglTestCase_013797_1, VkglTestCase_013797_2);

#define VkglTestCase_013798_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_013798_2 ".add.const.highp_mat2x4_mat2x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013798, VkglTestCase_013798_1, VkglTestCase_013798_2);

#define VkglTestCase_013799_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_013799_2 "add.const.highp_mat2x4_mat2x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013799, VkglTestCase_013799_1, VkglTestCase_013799_2);

#define VkglTestCase_013800_1 "dEQP-GLES3.functional.shaders.matri"
#define VkglTestCase_013800_2 "x.add.const.lowp_mat3x2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013800, VkglTestCase_013800_1, VkglTestCase_013800_2);

#define VkglTestCase_013801_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_013801_2 ".add.const.lowp_mat3x2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013801, VkglTestCase_013801_1, VkglTestCase_013801_2);

#define VkglTestCase_013802_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_013802_2 ".add.const.lowp_mat3x2_mat3x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013802, VkglTestCase_013802_1, VkglTestCase_013802_2);

#define VkglTestCase_013803_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_013803_2 "add.const.lowp_mat3x2_mat3x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013803, VkglTestCase_013803_1, VkglTestCase_013803_2);

#define VkglTestCase_013804_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_013804_2 "add.const.mediump_mat3x2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013804, VkglTestCase_013804_1, VkglTestCase_013804_2);

#define VkglTestCase_013805_1 "dEQP-GLES3.functional.shaders.matrix.a"
#define VkglTestCase_013805_2 "dd.const.mediump_mat3x2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013805, VkglTestCase_013805_1, VkglTestCase_013805_2);

#define VkglTestCase_013806_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_013806_2 "add.const.mediump_mat3x2_mat3x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013806, VkglTestCase_013806_1, VkglTestCase_013806_2);

#define VkglTestCase_013807_1 "dEQP-GLES3.functional.shaders.matrix.a"
#define VkglTestCase_013807_2 "dd.const.mediump_mat3x2_mat3x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013807, VkglTestCase_013807_1, VkglTestCase_013807_2);

#define VkglTestCase_013808_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_013808_2 ".add.const.highp_mat3x2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013808, VkglTestCase_013808_1, VkglTestCase_013808_2);

#define VkglTestCase_013809_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_013809_2 "add.const.highp_mat3x2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013809, VkglTestCase_013809_1, VkglTestCase_013809_2);

#define VkglTestCase_013810_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_013810_2 ".add.const.highp_mat3x2_mat3x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013810, VkglTestCase_013810_1, VkglTestCase_013810_2);

#define VkglTestCase_013811_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_013811_2 "add.const.highp_mat3x2_mat3x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013811, VkglTestCase_013811_1, VkglTestCase_013811_2);

#define VkglTestCase_013812_1 "dEQP-GLES3.functional.shaders.matr"
#define VkglTestCase_013812_2 "ix.add.const.lowp_mat3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013812, VkglTestCase_013812_1, VkglTestCase_013812_2);

#define VkglTestCase_013813_1 "dEQP-GLES3.functional.shaders.matri"
#define VkglTestCase_013813_2 "x.add.const.lowp_mat3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013813, VkglTestCase_013813_1, VkglTestCase_013813_2);

#define VkglTestCase_013814_1 "dEQP-GLES3.functional.shaders.matr"
#define VkglTestCase_013814_2 "ix.add.const.lowp_mat3_mat3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013814, VkglTestCase_013814_1, VkglTestCase_013814_2);

#define VkglTestCase_013815_1 "dEQP-GLES3.functional.shaders.matri"
#define VkglTestCase_013815_2 "x.add.const.lowp_mat3_mat3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013815, VkglTestCase_013815_1, VkglTestCase_013815_2);

#define VkglTestCase_013816_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_013816_2 ".add.const.mediump_mat3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013816, VkglTestCase_013816_1, VkglTestCase_013816_2);

#define VkglTestCase_013817_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_013817_2 "add.const.mediump_mat3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013817, VkglTestCase_013817_1, VkglTestCase_013817_2);

#define VkglTestCase_013818_1 "dEQP-GLES3.functional.shaders.matri"
#define VkglTestCase_013818_2 "x.add.const.mediump_mat3_mat3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013818, VkglTestCase_013818_1, VkglTestCase_013818_2);

#define VkglTestCase_013819_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_013819_2 ".add.const.mediump_mat3_mat3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013819, VkglTestCase_013819_1, VkglTestCase_013819_2);

#define VkglTestCase_013820_1 "dEQP-GLES3.functional.shaders.matri"
#define VkglTestCase_013820_2 "x.add.const.highp_mat3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013820, VkglTestCase_013820_1, VkglTestCase_013820_2);

#define VkglTestCase_013821_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_013821_2 ".add.const.highp_mat3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013821, VkglTestCase_013821_1, VkglTestCase_013821_2);

#define VkglTestCase_013822_1 "dEQP-GLES3.functional.shaders.matr"
#define VkglTestCase_013822_2 "ix.add.const.highp_mat3_mat3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013822, VkglTestCase_013822_1, VkglTestCase_013822_2);

#define VkglTestCase_013823_1 "dEQP-GLES3.functional.shaders.matri"
#define VkglTestCase_013823_2 "x.add.const.highp_mat3_mat3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013823, VkglTestCase_013823_1, VkglTestCase_013823_2);

#define VkglTestCase_013824_1 "dEQP-GLES3.functional.shaders.matri"
#define VkglTestCase_013824_2 "x.add.const.lowp_mat3x4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013824, VkglTestCase_013824_1, VkglTestCase_013824_2);

#define VkglTestCase_013825_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_013825_2 ".add.const.lowp_mat3x4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013825, VkglTestCase_013825_1, VkglTestCase_013825_2);

#define VkglTestCase_013826_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_013826_2 ".add.const.lowp_mat3x4_mat3x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013826, VkglTestCase_013826_1, VkglTestCase_013826_2);

#define VkglTestCase_013827_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_013827_2 "add.const.lowp_mat3x4_mat3x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013827, VkglTestCase_013827_1, VkglTestCase_013827_2);

#define VkglTestCase_013828_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_013828_2 "add.const.mediump_mat3x4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013828, VkglTestCase_013828_1, VkglTestCase_013828_2);

#define VkglTestCase_013829_1 "dEQP-GLES3.functional.shaders.matrix.a"
#define VkglTestCase_013829_2 "dd.const.mediump_mat3x4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013829, VkglTestCase_013829_1, VkglTestCase_013829_2);

#define VkglTestCase_013830_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_013830_2 "add.const.mediump_mat3x4_mat3x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013830, VkglTestCase_013830_1, VkglTestCase_013830_2);

#define VkglTestCase_013831_1 "dEQP-GLES3.functional.shaders.matrix.a"
#define VkglTestCase_013831_2 "dd.const.mediump_mat3x4_mat3x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013831, VkglTestCase_013831_1, VkglTestCase_013831_2);

#define VkglTestCase_013832_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_013832_2 ".add.const.highp_mat3x4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013832, VkglTestCase_013832_1, VkglTestCase_013832_2);

#define VkglTestCase_013833_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_013833_2 "add.const.highp_mat3x4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013833, VkglTestCase_013833_1, VkglTestCase_013833_2);

#define VkglTestCase_013834_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_013834_2 ".add.const.highp_mat3x4_mat3x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013834, VkglTestCase_013834_1, VkglTestCase_013834_2);

#define VkglTestCase_013835_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_013835_2 "add.const.highp_mat3x4_mat3x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013835, VkglTestCase_013835_1, VkglTestCase_013835_2);

#define VkglTestCase_013836_1 "dEQP-GLES3.functional.shaders.matri"
#define VkglTestCase_013836_2 "x.add.const.lowp_mat4x2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013836, VkglTestCase_013836_1, VkglTestCase_013836_2);

#define VkglTestCase_013837_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_013837_2 ".add.const.lowp_mat4x2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013837, VkglTestCase_013837_1, VkglTestCase_013837_2);

#define VkglTestCase_013838_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_013838_2 ".add.const.lowp_mat4x2_mat4x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013838, VkglTestCase_013838_1, VkglTestCase_013838_2);

#define VkglTestCase_013839_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_013839_2 "add.const.lowp_mat4x2_mat4x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013839, VkglTestCase_013839_1, VkglTestCase_013839_2);

#define VkglTestCase_013840_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_013840_2 "add.const.mediump_mat4x2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013840, VkglTestCase_013840_1, VkglTestCase_013840_2);

#define VkglTestCase_013841_1 "dEQP-GLES3.functional.shaders.matrix.a"
#define VkglTestCase_013841_2 "dd.const.mediump_mat4x2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013841, VkglTestCase_013841_1, VkglTestCase_013841_2);

#define VkglTestCase_013842_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_013842_2 "add.const.mediump_mat4x2_mat4x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013842, VkglTestCase_013842_1, VkglTestCase_013842_2);

#define VkglTestCase_013843_1 "dEQP-GLES3.functional.shaders.matrix.a"
#define VkglTestCase_013843_2 "dd.const.mediump_mat4x2_mat4x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013843, VkglTestCase_013843_1, VkglTestCase_013843_2);

#define VkglTestCase_013844_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_013844_2 ".add.const.highp_mat4x2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013844, VkglTestCase_013844_1, VkglTestCase_013844_2);

#define VkglTestCase_013845_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_013845_2 "add.const.highp_mat4x2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013845, VkglTestCase_013845_1, VkglTestCase_013845_2);

#define VkglTestCase_013846_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_013846_2 ".add.const.highp_mat4x2_mat4x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013846, VkglTestCase_013846_1, VkglTestCase_013846_2);

#define VkglTestCase_013847_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_013847_2 "add.const.highp_mat4x2_mat4x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013847, VkglTestCase_013847_1, VkglTestCase_013847_2);

#define VkglTestCase_013848_1 "dEQP-GLES3.functional.shaders.matri"
#define VkglTestCase_013848_2 "x.add.const.lowp_mat4x3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013848, VkglTestCase_013848_1, VkglTestCase_013848_2);

#define VkglTestCase_013849_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_013849_2 ".add.const.lowp_mat4x3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013849, VkglTestCase_013849_1, VkglTestCase_013849_2);

#define VkglTestCase_013850_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_013850_2 ".add.const.lowp_mat4x3_mat4x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013850, VkglTestCase_013850_1, VkglTestCase_013850_2);

#define VkglTestCase_013851_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_013851_2 "add.const.lowp_mat4x3_mat4x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013851, VkglTestCase_013851_1, VkglTestCase_013851_2);

#define VkglTestCase_013852_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_013852_2 "add.const.mediump_mat4x3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013852, VkglTestCase_013852_1, VkglTestCase_013852_2);

#define VkglTestCase_013853_1 "dEQP-GLES3.functional.shaders.matrix.a"
#define VkglTestCase_013853_2 "dd.const.mediump_mat4x3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013853, VkglTestCase_013853_1, VkglTestCase_013853_2);

#define VkglTestCase_013854_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_013854_2 "add.const.mediump_mat4x3_mat4x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013854, VkglTestCase_013854_1, VkglTestCase_013854_2);

#define VkglTestCase_013855_1 "dEQP-GLES3.functional.shaders.matrix.a"
#define VkglTestCase_013855_2 "dd.const.mediump_mat4x3_mat4x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013855, VkglTestCase_013855_1, VkglTestCase_013855_2);

#define VkglTestCase_013856_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_013856_2 ".add.const.highp_mat4x3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013856, VkglTestCase_013856_1, VkglTestCase_013856_2);

#define VkglTestCase_013857_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_013857_2 "add.const.highp_mat4x3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013857, VkglTestCase_013857_1, VkglTestCase_013857_2);

#define VkglTestCase_013858_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_013858_2 ".add.const.highp_mat4x3_mat4x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013858, VkglTestCase_013858_1, VkglTestCase_013858_2);

#define VkglTestCase_013859_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_013859_2 "add.const.highp_mat4x3_mat4x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013859, VkglTestCase_013859_1, VkglTestCase_013859_2);

#define VkglTestCase_013860_1 "dEQP-GLES3.functional.shaders.matr"
#define VkglTestCase_013860_2 "ix.add.const.lowp_mat4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013860, VkglTestCase_013860_1, VkglTestCase_013860_2);

#define VkglTestCase_013861_1 "dEQP-GLES3.functional.shaders.matri"
#define VkglTestCase_013861_2 "x.add.const.lowp_mat4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013861, VkglTestCase_013861_1, VkglTestCase_013861_2);

#define VkglTestCase_013862_1 "dEQP-GLES3.functional.shaders.matr"
#define VkglTestCase_013862_2 "ix.add.const.lowp_mat4_mat4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013862, VkglTestCase_013862_1, VkglTestCase_013862_2);

#define VkglTestCase_013863_1 "dEQP-GLES3.functional.shaders.matri"
#define VkglTestCase_013863_2 "x.add.const.lowp_mat4_mat4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013863, VkglTestCase_013863_1, VkglTestCase_013863_2);

#define VkglTestCase_013864_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_013864_2 ".add.const.mediump_mat4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013864, VkglTestCase_013864_1, VkglTestCase_013864_2);

#define VkglTestCase_013865_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_013865_2 "add.const.mediump_mat4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013865, VkglTestCase_013865_1, VkglTestCase_013865_2);

#define VkglTestCase_013866_1 "dEQP-GLES3.functional.shaders.matri"
#define VkglTestCase_013866_2 "x.add.const.mediump_mat4_mat4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013866, VkglTestCase_013866_1, VkglTestCase_013866_2);

#define VkglTestCase_013867_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_013867_2 ".add.const.mediump_mat4_mat4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013867, VkglTestCase_013867_1, VkglTestCase_013867_2);

#define VkglTestCase_013868_1 "dEQP-GLES3.functional.shaders.matri"
#define VkglTestCase_013868_2 "x.add.const.highp_mat4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013868, VkglTestCase_013868_1, VkglTestCase_013868_2);

#define VkglTestCase_013869_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_013869_2 ".add.const.highp_mat4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013869, VkglTestCase_013869_1, VkglTestCase_013869_2);

#define VkglTestCase_013870_1 "dEQP-GLES3.functional.shaders.matr"
#define VkglTestCase_013870_2 "ix.add.const.highp_mat4_mat4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013870, VkglTestCase_013870_1, VkglTestCase_013870_2);

#define VkglTestCase_013871_1 "dEQP-GLES3.functional.shaders.matri"
#define VkglTestCase_013871_2 "x.add.const.highp_mat4_mat4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013871, VkglTestCase_013871_1, VkglTestCase_013871_2);
