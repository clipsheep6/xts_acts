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
#include "../ActsDeqpgles30016TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_015816_1 "dEQP-GLES3.functional.shaders.matrix.t"
#define VkglTestCase_015816_2 "ranspose.dynamic.lowp_mat2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015816, VkglTestCase_015816_1, VkglTestCase_015816_2);

#define VkglTestCase_015817_1 "dEQP-GLES3.functional.shaders.matrix.tr"
#define VkglTestCase_015817_2 "anspose.dynamic.lowp_mat2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015817, VkglTestCase_015817_1, VkglTestCase_015817_2);

#define VkglTestCase_015818_1 "dEQP-GLES3.functional.shaders.matrix.tra"
#define VkglTestCase_015818_2 "nspose.dynamic.mediump_mat2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015818, VkglTestCase_015818_1, VkglTestCase_015818_2);

#define VkglTestCase_015819_1 "dEQP-GLES3.functional.shaders.matrix.tran"
#define VkglTestCase_015819_2 "spose.dynamic.mediump_mat2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015819, VkglTestCase_015819_1, VkglTestCase_015819_2);

#define VkglTestCase_015820_1 "dEQP-GLES3.functional.shaders.matrix.tr"
#define VkglTestCase_015820_2 "anspose.dynamic.highp_mat2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015820, VkglTestCase_015820_1, VkglTestCase_015820_2);

#define VkglTestCase_015821_1 "dEQP-GLES3.functional.shaders.matrix.tra"
#define VkglTestCase_015821_2 "nspose.dynamic.highp_mat2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015821, VkglTestCase_015821_1, VkglTestCase_015821_2);

#define VkglTestCase_015822_1 "dEQP-GLES3.functional.shaders.matrix.tr"
#define VkglTestCase_015822_2 "anspose.dynamic.lowp_mat2x3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015822, VkglTestCase_015822_1, VkglTestCase_015822_2);

#define VkglTestCase_015823_1 "dEQP-GLES3.functional.shaders.matrix.tra"
#define VkglTestCase_015823_2 "nspose.dynamic.lowp_mat2x3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015823, VkglTestCase_015823_1, VkglTestCase_015823_2);

#define VkglTestCase_015824_1 "dEQP-GLES3.functional.shaders.matrix.tran"
#define VkglTestCase_015824_2 "spose.dynamic.mediump_mat2x3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015824, VkglTestCase_015824_1, VkglTestCase_015824_2);

#define VkglTestCase_015825_1 "dEQP-GLES3.functional.shaders.matrix.trans"
#define VkglTestCase_015825_2 "pose.dynamic.mediump_mat2x3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015825, VkglTestCase_015825_1, VkglTestCase_015825_2);

#define VkglTestCase_015826_1 "dEQP-GLES3.functional.shaders.matrix.tra"
#define VkglTestCase_015826_2 "nspose.dynamic.highp_mat2x3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015826, VkglTestCase_015826_1, VkglTestCase_015826_2);

#define VkglTestCase_015827_1 "dEQP-GLES3.functional.shaders.matrix.tran"
#define VkglTestCase_015827_2 "spose.dynamic.highp_mat2x3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015827, VkglTestCase_015827_1, VkglTestCase_015827_2);

#define VkglTestCase_015828_1 "dEQP-GLES3.functional.shaders.matrix.tr"
#define VkglTestCase_015828_2 "anspose.dynamic.lowp_mat2x4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015828, VkglTestCase_015828_1, VkglTestCase_015828_2);

#define VkglTestCase_015829_1 "dEQP-GLES3.functional.shaders.matrix.tra"
#define VkglTestCase_015829_2 "nspose.dynamic.lowp_mat2x4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015829, VkglTestCase_015829_1, VkglTestCase_015829_2);

#define VkglTestCase_015830_1 "dEQP-GLES3.functional.shaders.matrix.tran"
#define VkglTestCase_015830_2 "spose.dynamic.mediump_mat2x4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015830, VkglTestCase_015830_1, VkglTestCase_015830_2);

#define VkglTestCase_015831_1 "dEQP-GLES3.functional.shaders.matrix.trans"
#define VkglTestCase_015831_2 "pose.dynamic.mediump_mat2x4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015831, VkglTestCase_015831_1, VkglTestCase_015831_2);

#define VkglTestCase_015832_1 "dEQP-GLES3.functional.shaders.matrix.tra"
#define VkglTestCase_015832_2 "nspose.dynamic.highp_mat2x4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015832, VkglTestCase_015832_1, VkglTestCase_015832_2);

#define VkglTestCase_015833_1 "dEQP-GLES3.functional.shaders.matrix.tran"
#define VkglTestCase_015833_2 "spose.dynamic.highp_mat2x4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015833, VkglTestCase_015833_1, VkglTestCase_015833_2);

#define VkglTestCase_015834_1 "dEQP-GLES3.functional.shaders.matrix.tr"
#define VkglTestCase_015834_2 "anspose.dynamic.lowp_mat3x2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015834, VkglTestCase_015834_1, VkglTestCase_015834_2);

#define VkglTestCase_015835_1 "dEQP-GLES3.functional.shaders.matrix.tra"
#define VkglTestCase_015835_2 "nspose.dynamic.lowp_mat3x2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015835, VkglTestCase_015835_1, VkglTestCase_015835_2);

#define VkglTestCase_015836_1 "dEQP-GLES3.functional.shaders.matrix.tran"
#define VkglTestCase_015836_2 "spose.dynamic.mediump_mat3x2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015836, VkglTestCase_015836_1, VkglTestCase_015836_2);

#define VkglTestCase_015837_1 "dEQP-GLES3.functional.shaders.matrix.trans"
#define VkglTestCase_015837_2 "pose.dynamic.mediump_mat3x2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015837, VkglTestCase_015837_1, VkglTestCase_015837_2);

#define VkglTestCase_015838_1 "dEQP-GLES3.functional.shaders.matrix.tra"
#define VkglTestCase_015838_2 "nspose.dynamic.highp_mat3x2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015838, VkglTestCase_015838_1, VkglTestCase_015838_2);

#define VkglTestCase_015839_1 "dEQP-GLES3.functional.shaders.matrix.tran"
#define VkglTestCase_015839_2 "spose.dynamic.highp_mat3x2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015839, VkglTestCase_015839_1, VkglTestCase_015839_2);

#define VkglTestCase_015840_1 "dEQP-GLES3.functional.shaders.matrix.t"
#define VkglTestCase_015840_2 "ranspose.dynamic.lowp_mat3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015840, VkglTestCase_015840_1, VkglTestCase_015840_2);

#define VkglTestCase_015841_1 "dEQP-GLES3.functional.shaders.matrix.tr"
#define VkglTestCase_015841_2 "anspose.dynamic.lowp_mat3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015841, VkglTestCase_015841_1, VkglTestCase_015841_2);

#define VkglTestCase_015842_1 "dEQP-GLES3.functional.shaders.matrix.tra"
#define VkglTestCase_015842_2 "nspose.dynamic.mediump_mat3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015842, VkglTestCase_015842_1, VkglTestCase_015842_2);

#define VkglTestCase_015843_1 "dEQP-GLES3.functional.shaders.matrix.tran"
#define VkglTestCase_015843_2 "spose.dynamic.mediump_mat3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015843, VkglTestCase_015843_1, VkglTestCase_015843_2);

#define VkglTestCase_015844_1 "dEQP-GLES3.functional.shaders.matrix.tr"
#define VkglTestCase_015844_2 "anspose.dynamic.highp_mat3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015844, VkglTestCase_015844_1, VkglTestCase_015844_2);

#define VkglTestCase_015845_1 "dEQP-GLES3.functional.shaders.matrix.tra"
#define VkglTestCase_015845_2 "nspose.dynamic.highp_mat3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015845, VkglTestCase_015845_1, VkglTestCase_015845_2);

#define VkglTestCase_015846_1 "dEQP-GLES3.functional.shaders.matrix.tr"
#define VkglTestCase_015846_2 "anspose.dynamic.lowp_mat3x4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015846, VkglTestCase_015846_1, VkglTestCase_015846_2);

#define VkglTestCase_015847_1 "dEQP-GLES3.functional.shaders.matrix.tra"
#define VkglTestCase_015847_2 "nspose.dynamic.lowp_mat3x4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015847, VkglTestCase_015847_1, VkglTestCase_015847_2);

#define VkglTestCase_015848_1 "dEQP-GLES3.functional.shaders.matrix.tran"
#define VkglTestCase_015848_2 "spose.dynamic.mediump_mat3x4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015848, VkglTestCase_015848_1, VkglTestCase_015848_2);

#define VkglTestCase_015849_1 "dEQP-GLES3.functional.shaders.matrix.trans"
#define VkglTestCase_015849_2 "pose.dynamic.mediump_mat3x4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015849, VkglTestCase_015849_1, VkglTestCase_015849_2);

#define VkglTestCase_015850_1 "dEQP-GLES3.functional.shaders.matrix.tra"
#define VkglTestCase_015850_2 "nspose.dynamic.highp_mat3x4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015850, VkglTestCase_015850_1, VkglTestCase_015850_2);

#define VkglTestCase_015851_1 "dEQP-GLES3.functional.shaders.matrix.tran"
#define VkglTestCase_015851_2 "spose.dynamic.highp_mat3x4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015851, VkglTestCase_015851_1, VkglTestCase_015851_2);

#define VkglTestCase_015852_1 "dEQP-GLES3.functional.shaders.matrix.tr"
#define VkglTestCase_015852_2 "anspose.dynamic.lowp_mat4x2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015852, VkglTestCase_015852_1, VkglTestCase_015852_2);

#define VkglTestCase_015853_1 "dEQP-GLES3.functional.shaders.matrix.tra"
#define VkglTestCase_015853_2 "nspose.dynamic.lowp_mat4x2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015853, VkglTestCase_015853_1, VkglTestCase_015853_2);

#define VkglTestCase_015854_1 "dEQP-GLES3.functional.shaders.matrix.tran"
#define VkglTestCase_015854_2 "spose.dynamic.mediump_mat4x2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015854, VkglTestCase_015854_1, VkglTestCase_015854_2);

#define VkglTestCase_015855_1 "dEQP-GLES3.functional.shaders.matrix.trans"
#define VkglTestCase_015855_2 "pose.dynamic.mediump_mat4x2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015855, VkglTestCase_015855_1, VkglTestCase_015855_2);

#define VkglTestCase_015856_1 "dEQP-GLES3.functional.shaders.matrix.tra"
#define VkglTestCase_015856_2 "nspose.dynamic.highp_mat4x2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015856, VkglTestCase_015856_1, VkglTestCase_015856_2);

#define VkglTestCase_015857_1 "dEQP-GLES3.functional.shaders.matrix.tran"
#define VkglTestCase_015857_2 "spose.dynamic.highp_mat4x2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015857, VkglTestCase_015857_1, VkglTestCase_015857_2);

#define VkglTestCase_015858_1 "dEQP-GLES3.functional.shaders.matrix.tr"
#define VkglTestCase_015858_2 "anspose.dynamic.lowp_mat4x3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015858, VkglTestCase_015858_1, VkglTestCase_015858_2);

#define VkglTestCase_015859_1 "dEQP-GLES3.functional.shaders.matrix.tra"
#define VkglTestCase_015859_2 "nspose.dynamic.lowp_mat4x3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015859, VkglTestCase_015859_1, VkglTestCase_015859_2);

#define VkglTestCase_015860_1 "dEQP-GLES3.functional.shaders.matrix.tran"
#define VkglTestCase_015860_2 "spose.dynamic.mediump_mat4x3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015860, VkglTestCase_015860_1, VkglTestCase_015860_2);

#define VkglTestCase_015861_1 "dEQP-GLES3.functional.shaders.matrix.trans"
#define VkglTestCase_015861_2 "pose.dynamic.mediump_mat4x3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015861, VkglTestCase_015861_1, VkglTestCase_015861_2);

#define VkglTestCase_015862_1 "dEQP-GLES3.functional.shaders.matrix.tra"
#define VkglTestCase_015862_2 "nspose.dynamic.highp_mat4x3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015862, VkglTestCase_015862_1, VkglTestCase_015862_2);

#define VkglTestCase_015863_1 "dEQP-GLES3.functional.shaders.matrix.tran"
#define VkglTestCase_015863_2 "spose.dynamic.highp_mat4x3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015863, VkglTestCase_015863_1, VkglTestCase_015863_2);

#define VkglTestCase_015864_1 "dEQP-GLES3.functional.shaders.matrix.t"
#define VkglTestCase_015864_2 "ranspose.dynamic.lowp_mat4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015864, VkglTestCase_015864_1, VkglTestCase_015864_2);

#define VkglTestCase_015865_1 "dEQP-GLES3.functional.shaders.matrix.tr"
#define VkglTestCase_015865_2 "anspose.dynamic.lowp_mat4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015865, VkglTestCase_015865_1, VkglTestCase_015865_2);

#define VkglTestCase_015866_1 "dEQP-GLES3.functional.shaders.matrix.tra"
#define VkglTestCase_015866_2 "nspose.dynamic.mediump_mat4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015866, VkglTestCase_015866_1, VkglTestCase_015866_2);

#define VkglTestCase_015867_1 "dEQP-GLES3.functional.shaders.matrix.tran"
#define VkglTestCase_015867_2 "spose.dynamic.mediump_mat4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015867, VkglTestCase_015867_1, VkglTestCase_015867_2);

#define VkglTestCase_015868_1 "dEQP-GLES3.functional.shaders.matrix.tr"
#define VkglTestCase_015868_2 "anspose.dynamic.highp_mat4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015868, VkglTestCase_015868_1, VkglTestCase_015868_2);

#define VkglTestCase_015869_1 "dEQP-GLES3.functional.shaders.matrix.tra"
#define VkglTestCase_015869_2 "nspose.dynamic.highp_mat4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015869, VkglTestCase_015869_1, VkglTestCase_015869_2);
