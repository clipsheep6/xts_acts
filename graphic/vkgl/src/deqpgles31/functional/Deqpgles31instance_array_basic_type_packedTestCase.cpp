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
#include "../Deqpgles31BaseFunc.h"
#include "../ActsDeqpgles310010TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_009803_1 "dEQP-GLES31.functional.ssbo.layout.i"
#define VkglTestCase_009803_2 "nstance_array_basic_type.packed.float"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009803, VkglTestCase_009803_1, VkglTestCase_009803_2);

#define VkglTestCase_009804_1 "dEQP-GLES31.functional.ssbo.layout.i"
#define VkglTestCase_009804_2 "nstance_array_basic_type.packed.vec2"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009804, VkglTestCase_009804_1, VkglTestCase_009804_2);

#define VkglTestCase_009805_1 "dEQP-GLES31.functional.ssbo.layout.i"
#define VkglTestCase_009805_2 "nstance_array_basic_type.packed.vec3"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009805, VkglTestCase_009805_1, VkglTestCase_009805_2);

#define VkglTestCase_009806_1 "dEQP-GLES31.functional.ssbo.layout.i"
#define VkglTestCase_009806_2 "nstance_array_basic_type.packed.vec4"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009806, VkglTestCase_009806_1, VkglTestCase_009806_2);

#define VkglTestCase_009807_1 "dEQP-GLES31.functional.ssbo.layout."
#define VkglTestCase_009807_2 "instance_array_basic_type.packed.int"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009807, VkglTestCase_009807_1, VkglTestCase_009807_2);

#define VkglTestCase_009808_1 "dEQP-GLES31.functional.ssbo.layout.i"
#define VkglTestCase_009808_2 "nstance_array_basic_type.packed.ivec2"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009808, VkglTestCase_009808_1, VkglTestCase_009808_2);

#define VkglTestCase_009809_1 "dEQP-GLES31.functional.ssbo.layout.i"
#define VkglTestCase_009809_2 "nstance_array_basic_type.packed.ivec3"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009809, VkglTestCase_009809_1, VkglTestCase_009809_2);

#define VkglTestCase_009810_1 "dEQP-GLES31.functional.ssbo.layout.i"
#define VkglTestCase_009810_2 "nstance_array_basic_type.packed.ivec4"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009810, VkglTestCase_009810_1, VkglTestCase_009810_2);

#define VkglTestCase_009811_1 "dEQP-GLES31.functional.ssbo.layout.i"
#define VkglTestCase_009811_2 "nstance_array_basic_type.packed.uint"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009811, VkglTestCase_009811_1, VkglTestCase_009811_2);

#define VkglTestCase_009812_1 "dEQP-GLES31.functional.ssbo.layout.i"
#define VkglTestCase_009812_2 "nstance_array_basic_type.packed.uvec2"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009812, VkglTestCase_009812_1, VkglTestCase_009812_2);

#define VkglTestCase_009813_1 "dEQP-GLES31.functional.ssbo.layout.i"
#define VkglTestCase_009813_2 "nstance_array_basic_type.packed.uvec3"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009813, VkglTestCase_009813_1, VkglTestCase_009813_2);

#define VkglTestCase_009814_1 "dEQP-GLES31.functional.ssbo.layout.i"
#define VkglTestCase_009814_2 "nstance_array_basic_type.packed.uvec4"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009814, VkglTestCase_009814_1, VkglTestCase_009814_2);

#define VkglTestCase_009815_1 "dEQP-GLES31.functional.ssbo.layout.i"
#define VkglTestCase_009815_2 "nstance_array_basic_type.packed.bool"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009815, VkglTestCase_009815_1, VkglTestCase_009815_2);

#define VkglTestCase_009816_1 "dEQP-GLES31.functional.ssbo.layout.i"
#define VkglTestCase_009816_2 "nstance_array_basic_type.packed.bvec2"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009816, VkglTestCase_009816_1, VkglTestCase_009816_2);

#define VkglTestCase_009817_1 "dEQP-GLES31.functional.ssbo.layout.i"
#define VkglTestCase_009817_2 "nstance_array_basic_type.packed.bvec3"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009817, VkglTestCase_009817_1, VkglTestCase_009817_2);

#define VkglTestCase_009818_1 "dEQP-GLES31.functional.ssbo.layout.i"
#define VkglTestCase_009818_2 "nstance_array_basic_type.packed.bvec4"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009818, VkglTestCase_009818_1, VkglTestCase_009818_2);

#define VkglTestCase_009819_1 "dEQP-GLES31.functional.ssbo.layout.i"
#define VkglTestCase_009819_2 "nstance_array_basic_type.packed.mat2"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009819, VkglTestCase_009819_1, VkglTestCase_009819_2);

#define VkglTestCase_009820_1 "dEQP-GLES31.functional.ssbo.layout.instan"
#define VkglTestCase_009820_2 "ce_array_basic_type.packed.row_major_mat2"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009820, VkglTestCase_009820_1, VkglTestCase_009820_2);

#define VkglTestCase_009821_1 "dEQP-GLES31.functional.ssbo.layout.instanc"
#define VkglTestCase_009821_2 "e_array_basic_type.packed.column_major_mat2"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009821, VkglTestCase_009821_1, VkglTestCase_009821_2);

#define VkglTestCase_009822_1 "dEQP-GLES31.functional.ssbo.layout.i"
#define VkglTestCase_009822_2 "nstance_array_basic_type.packed.mat3"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009822, VkglTestCase_009822_1, VkglTestCase_009822_2);

#define VkglTestCase_009823_1 "dEQP-GLES31.functional.ssbo.layout.instan"
#define VkglTestCase_009823_2 "ce_array_basic_type.packed.row_major_mat3"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009823, VkglTestCase_009823_1, VkglTestCase_009823_2);

#define VkglTestCase_009824_1 "dEQP-GLES31.functional.ssbo.layout.instanc"
#define VkglTestCase_009824_2 "e_array_basic_type.packed.column_major_mat3"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009824, VkglTestCase_009824_1, VkglTestCase_009824_2);

#define VkglTestCase_009825_1 "dEQP-GLES31.functional.ssbo.layout.i"
#define VkglTestCase_009825_2 "nstance_array_basic_type.packed.mat4"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009825, VkglTestCase_009825_1, VkglTestCase_009825_2);

#define VkglTestCase_009826_1 "dEQP-GLES31.functional.ssbo.layout.instan"
#define VkglTestCase_009826_2 "ce_array_basic_type.packed.row_major_mat4"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009826, VkglTestCase_009826_1, VkglTestCase_009826_2);

#define VkglTestCase_009827_1 "dEQP-GLES31.functional.ssbo.layout.instanc"
#define VkglTestCase_009827_2 "e_array_basic_type.packed.column_major_mat4"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009827, VkglTestCase_009827_1, VkglTestCase_009827_2);

#define VkglTestCase_009828_1 "dEQP-GLES31.functional.ssbo.layout.in"
#define VkglTestCase_009828_2 "stance_array_basic_type.packed.mat2x3"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009828, VkglTestCase_009828_1, VkglTestCase_009828_2);

#define VkglTestCase_009829_1 "dEQP-GLES31.functional.ssbo.layout.instanc"
#define VkglTestCase_009829_2 "e_array_basic_type.packed.row_major_mat2x3"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009829, VkglTestCase_009829_1, VkglTestCase_009829_2);

#define VkglTestCase_009830_1 "dEQP-GLES31.functional.ssbo.layout.instance"
#define VkglTestCase_009830_2 "_array_basic_type.packed.column_major_mat2x3"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009830, VkglTestCase_009830_1, VkglTestCase_009830_2);

#define VkglTestCase_009831_1 "dEQP-GLES31.functional.ssbo.layout.in"
#define VkglTestCase_009831_2 "stance_array_basic_type.packed.mat2x4"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009831, VkglTestCase_009831_1, VkglTestCase_009831_2);

#define VkglTestCase_009832_1 "dEQP-GLES31.functional.ssbo.layout.instanc"
#define VkglTestCase_009832_2 "e_array_basic_type.packed.row_major_mat2x4"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009832, VkglTestCase_009832_1, VkglTestCase_009832_2);

#define VkglTestCase_009833_1 "dEQP-GLES31.functional.ssbo.layout.instance"
#define VkglTestCase_009833_2 "_array_basic_type.packed.column_major_mat2x4"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009833, VkglTestCase_009833_1, VkglTestCase_009833_2);

#define VkglTestCase_009834_1 "dEQP-GLES31.functional.ssbo.layout.in"
#define VkglTestCase_009834_2 "stance_array_basic_type.packed.mat3x2"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009834, VkglTestCase_009834_1, VkglTestCase_009834_2);

#define VkglTestCase_009835_1 "dEQP-GLES31.functional.ssbo.layout.instanc"
#define VkglTestCase_009835_2 "e_array_basic_type.packed.row_major_mat3x2"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009835, VkglTestCase_009835_1, VkglTestCase_009835_2);

#define VkglTestCase_009836_1 "dEQP-GLES31.functional.ssbo.layout.instance"
#define VkglTestCase_009836_2 "_array_basic_type.packed.column_major_mat3x2"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009836, VkglTestCase_009836_1, VkglTestCase_009836_2);

#define VkglTestCase_009837_1 "dEQP-GLES31.functional.ssbo.layout.in"
#define VkglTestCase_009837_2 "stance_array_basic_type.packed.mat3x4"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009837, VkglTestCase_009837_1, VkglTestCase_009837_2);

#define VkglTestCase_009838_1 "dEQP-GLES31.functional.ssbo.layout.instanc"
#define VkglTestCase_009838_2 "e_array_basic_type.packed.row_major_mat3x4"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009838, VkglTestCase_009838_1, VkglTestCase_009838_2);

#define VkglTestCase_009839_1 "dEQP-GLES31.functional.ssbo.layout.instance"
#define VkglTestCase_009839_2 "_array_basic_type.packed.column_major_mat3x4"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009839, VkglTestCase_009839_1, VkglTestCase_009839_2);

#define VkglTestCase_009840_1 "dEQP-GLES31.functional.ssbo.layout.in"
#define VkglTestCase_009840_2 "stance_array_basic_type.packed.mat4x2"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009840, VkglTestCase_009840_1, VkglTestCase_009840_2);

#define VkglTestCase_009841_1 "dEQP-GLES31.functional.ssbo.layout.instanc"
#define VkglTestCase_009841_2 "e_array_basic_type.packed.row_major_mat4x2"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009841, VkglTestCase_009841_1, VkglTestCase_009841_2);

#define VkglTestCase_009842_1 "dEQP-GLES31.functional.ssbo.layout.instance"
#define VkglTestCase_009842_2 "_array_basic_type.packed.column_major_mat4x2"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009842, VkglTestCase_009842_1, VkglTestCase_009842_2);

#define VkglTestCase_009843_1 "dEQP-GLES31.functional.ssbo.layout.in"
#define VkglTestCase_009843_2 "stance_array_basic_type.packed.mat4x3"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009843, VkglTestCase_009843_1, VkglTestCase_009843_2);

#define VkglTestCase_009844_1 "dEQP-GLES31.functional.ssbo.layout.instanc"
#define VkglTestCase_009844_2 "e_array_basic_type.packed.row_major_mat4x3"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009844, VkglTestCase_009844_1, VkglTestCase_009844_2);

#define VkglTestCase_009845_1 "dEQP-GLES31.functional.ssbo.layout.instance"
#define VkglTestCase_009845_2 "_array_basic_type.packed.column_major_mat4x3"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009845, VkglTestCase_009845_1, VkglTestCase_009845_2);
