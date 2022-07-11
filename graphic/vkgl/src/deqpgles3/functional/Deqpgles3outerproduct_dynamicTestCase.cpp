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

#define VkglTestCase_015762_1 "dEQP-GLES3.functional.shaders.matrix.out"
#define VkglTestCase_015762_2 "erproduct.dynamic.lowp_mat2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015762, VkglTestCase_015762_1, VkglTestCase_015762_2);

#define VkglTestCase_015763_1 "dEQP-GLES3.functional.shaders.matrix.oute"
#define VkglTestCase_015763_2 "rproduct.dynamic.lowp_mat2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015763, VkglTestCase_015763_1, VkglTestCase_015763_2);

#define VkglTestCase_015764_1 "dEQP-GLES3.functional.shaders.matrix.oute"
#define VkglTestCase_015764_2 "rproduct.dynamic.mediump_mat2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015764, VkglTestCase_015764_1, VkglTestCase_015764_2);

#define VkglTestCase_015765_1 "dEQP-GLES3.functional.shaders.matrix.outer"
#define VkglTestCase_015765_2 "product.dynamic.mediump_mat2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015765, VkglTestCase_015765_1, VkglTestCase_015765_2);

#define VkglTestCase_015766_1 "dEQP-GLES3.functional.shaders.matrix.out"
#define VkglTestCase_015766_2 "erproduct.dynamic.highp_mat2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015766, VkglTestCase_015766_1, VkglTestCase_015766_2);

#define VkglTestCase_015767_1 "dEQP-GLES3.functional.shaders.matrix.oute"
#define VkglTestCase_015767_2 "rproduct.dynamic.highp_mat2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015767, VkglTestCase_015767_1, VkglTestCase_015767_2);

#define VkglTestCase_015768_1 "dEQP-GLES3.functional.shaders.matrix.oute"
#define VkglTestCase_015768_2 "rproduct.dynamic.lowp_mat2x3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015768, VkglTestCase_015768_1, VkglTestCase_015768_2);

#define VkglTestCase_015769_1 "dEQP-GLES3.functional.shaders.matrix.outer"
#define VkglTestCase_015769_2 "product.dynamic.lowp_mat2x3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015769, VkglTestCase_015769_1, VkglTestCase_015769_2);

#define VkglTestCase_015770_1 "dEQP-GLES3.functional.shaders.matrix.outer"
#define VkglTestCase_015770_2 "product.dynamic.mediump_mat2x3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015770, VkglTestCase_015770_1, VkglTestCase_015770_2);

#define VkglTestCase_015771_1 "dEQP-GLES3.functional.shaders.matrix.outerp"
#define VkglTestCase_015771_2 "roduct.dynamic.mediump_mat2x3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015771, VkglTestCase_015771_1, VkglTestCase_015771_2);

#define VkglTestCase_015772_1 "dEQP-GLES3.functional.shaders.matrix.oute"
#define VkglTestCase_015772_2 "rproduct.dynamic.highp_mat2x3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015772, VkglTestCase_015772_1, VkglTestCase_015772_2);

#define VkglTestCase_015773_1 "dEQP-GLES3.functional.shaders.matrix.outer"
#define VkglTestCase_015773_2 "product.dynamic.highp_mat2x3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015773, VkglTestCase_015773_1, VkglTestCase_015773_2);

#define VkglTestCase_015774_1 "dEQP-GLES3.functional.shaders.matrix.oute"
#define VkglTestCase_015774_2 "rproduct.dynamic.lowp_mat2x4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015774, VkglTestCase_015774_1, VkglTestCase_015774_2);

#define VkglTestCase_015775_1 "dEQP-GLES3.functional.shaders.matrix.outer"
#define VkglTestCase_015775_2 "product.dynamic.lowp_mat2x4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015775, VkglTestCase_015775_1, VkglTestCase_015775_2);

#define VkglTestCase_015776_1 "dEQP-GLES3.functional.shaders.matrix.outer"
#define VkglTestCase_015776_2 "product.dynamic.mediump_mat2x4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015776, VkglTestCase_015776_1, VkglTestCase_015776_2);

#define VkglTestCase_015777_1 "dEQP-GLES3.functional.shaders.matrix.outerp"
#define VkglTestCase_015777_2 "roduct.dynamic.mediump_mat2x4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015777, VkglTestCase_015777_1, VkglTestCase_015777_2);

#define VkglTestCase_015778_1 "dEQP-GLES3.functional.shaders.matrix.oute"
#define VkglTestCase_015778_2 "rproduct.dynamic.highp_mat2x4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015778, VkglTestCase_015778_1, VkglTestCase_015778_2);

#define VkglTestCase_015779_1 "dEQP-GLES3.functional.shaders.matrix.outer"
#define VkglTestCase_015779_2 "product.dynamic.highp_mat2x4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015779, VkglTestCase_015779_1, VkglTestCase_015779_2);

#define VkglTestCase_015780_1 "dEQP-GLES3.functional.shaders.matrix.oute"
#define VkglTestCase_015780_2 "rproduct.dynamic.lowp_mat3x2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015780, VkglTestCase_015780_1, VkglTestCase_015780_2);

#define VkglTestCase_015781_1 "dEQP-GLES3.functional.shaders.matrix.outer"
#define VkglTestCase_015781_2 "product.dynamic.lowp_mat3x2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015781, VkglTestCase_015781_1, VkglTestCase_015781_2);

#define VkglTestCase_015782_1 "dEQP-GLES3.functional.shaders.matrix.outer"
#define VkglTestCase_015782_2 "product.dynamic.mediump_mat3x2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015782, VkglTestCase_015782_1, VkglTestCase_015782_2);

#define VkglTestCase_015783_1 "dEQP-GLES3.functional.shaders.matrix.outerp"
#define VkglTestCase_015783_2 "roduct.dynamic.mediump_mat3x2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015783, VkglTestCase_015783_1, VkglTestCase_015783_2);

#define VkglTestCase_015784_1 "dEQP-GLES3.functional.shaders.matrix.oute"
#define VkglTestCase_015784_2 "rproduct.dynamic.highp_mat3x2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015784, VkglTestCase_015784_1, VkglTestCase_015784_2);

#define VkglTestCase_015785_1 "dEQP-GLES3.functional.shaders.matrix.outer"
#define VkglTestCase_015785_2 "product.dynamic.highp_mat3x2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015785, VkglTestCase_015785_1, VkglTestCase_015785_2);

#define VkglTestCase_015786_1 "dEQP-GLES3.functional.shaders.matrix.out"
#define VkglTestCase_015786_2 "erproduct.dynamic.lowp_mat3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015786, VkglTestCase_015786_1, VkglTestCase_015786_2);

#define VkglTestCase_015787_1 "dEQP-GLES3.functional.shaders.matrix.oute"
#define VkglTestCase_015787_2 "rproduct.dynamic.lowp_mat3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015787, VkglTestCase_015787_1, VkglTestCase_015787_2);

#define VkglTestCase_015788_1 "dEQP-GLES3.functional.shaders.matrix.oute"
#define VkglTestCase_015788_2 "rproduct.dynamic.mediump_mat3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015788, VkglTestCase_015788_1, VkglTestCase_015788_2);

#define VkglTestCase_015789_1 "dEQP-GLES3.functional.shaders.matrix.outer"
#define VkglTestCase_015789_2 "product.dynamic.mediump_mat3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015789, VkglTestCase_015789_1, VkglTestCase_015789_2);

#define VkglTestCase_015790_1 "dEQP-GLES3.functional.shaders.matrix.out"
#define VkglTestCase_015790_2 "erproduct.dynamic.highp_mat3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015790, VkglTestCase_015790_1, VkglTestCase_015790_2);

#define VkglTestCase_015791_1 "dEQP-GLES3.functional.shaders.matrix.oute"
#define VkglTestCase_015791_2 "rproduct.dynamic.highp_mat3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015791, VkglTestCase_015791_1, VkglTestCase_015791_2);

#define VkglTestCase_015792_1 "dEQP-GLES3.functional.shaders.matrix.oute"
#define VkglTestCase_015792_2 "rproduct.dynamic.lowp_mat3x4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015792, VkglTestCase_015792_1, VkglTestCase_015792_2);

#define VkglTestCase_015793_1 "dEQP-GLES3.functional.shaders.matrix.outer"
#define VkglTestCase_015793_2 "product.dynamic.lowp_mat3x4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015793, VkglTestCase_015793_1, VkglTestCase_015793_2);

#define VkglTestCase_015794_1 "dEQP-GLES3.functional.shaders.matrix.outer"
#define VkglTestCase_015794_2 "product.dynamic.mediump_mat3x4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015794, VkglTestCase_015794_1, VkglTestCase_015794_2);

#define VkglTestCase_015795_1 "dEQP-GLES3.functional.shaders.matrix.outerp"
#define VkglTestCase_015795_2 "roduct.dynamic.mediump_mat3x4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015795, VkglTestCase_015795_1, VkglTestCase_015795_2);

#define VkglTestCase_015796_1 "dEQP-GLES3.functional.shaders.matrix.oute"
#define VkglTestCase_015796_2 "rproduct.dynamic.highp_mat3x4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015796, VkglTestCase_015796_1, VkglTestCase_015796_2);

#define VkglTestCase_015797_1 "dEQP-GLES3.functional.shaders.matrix.outer"
#define VkglTestCase_015797_2 "product.dynamic.highp_mat3x4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015797, VkglTestCase_015797_1, VkglTestCase_015797_2);

#define VkglTestCase_015798_1 "dEQP-GLES3.functional.shaders.matrix.oute"
#define VkglTestCase_015798_2 "rproduct.dynamic.lowp_mat4x2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015798, VkglTestCase_015798_1, VkglTestCase_015798_2);

#define VkglTestCase_015799_1 "dEQP-GLES3.functional.shaders.matrix.outer"
#define VkglTestCase_015799_2 "product.dynamic.lowp_mat4x2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015799, VkglTestCase_015799_1, VkglTestCase_015799_2);

#define VkglTestCase_015800_1 "dEQP-GLES3.functional.shaders.matrix.outer"
#define VkglTestCase_015800_2 "product.dynamic.mediump_mat4x2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015800, VkglTestCase_015800_1, VkglTestCase_015800_2);

#define VkglTestCase_015801_1 "dEQP-GLES3.functional.shaders.matrix.outerp"
#define VkglTestCase_015801_2 "roduct.dynamic.mediump_mat4x2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015801, VkglTestCase_015801_1, VkglTestCase_015801_2);

#define VkglTestCase_015802_1 "dEQP-GLES3.functional.shaders.matrix.oute"
#define VkglTestCase_015802_2 "rproduct.dynamic.highp_mat4x2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015802, VkglTestCase_015802_1, VkglTestCase_015802_2);

#define VkglTestCase_015803_1 "dEQP-GLES3.functional.shaders.matrix.outer"
#define VkglTestCase_015803_2 "product.dynamic.highp_mat4x2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015803, VkglTestCase_015803_1, VkglTestCase_015803_2);

#define VkglTestCase_015804_1 "dEQP-GLES3.functional.shaders.matrix.oute"
#define VkglTestCase_015804_2 "rproduct.dynamic.lowp_mat4x3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015804, VkglTestCase_015804_1, VkglTestCase_015804_2);

#define VkglTestCase_015805_1 "dEQP-GLES3.functional.shaders.matrix.outer"
#define VkglTestCase_015805_2 "product.dynamic.lowp_mat4x3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015805, VkglTestCase_015805_1, VkglTestCase_015805_2);

#define VkglTestCase_015806_1 "dEQP-GLES3.functional.shaders.matrix.outer"
#define VkglTestCase_015806_2 "product.dynamic.mediump_mat4x3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015806, VkglTestCase_015806_1, VkglTestCase_015806_2);

#define VkglTestCase_015807_1 "dEQP-GLES3.functional.shaders.matrix.outerp"
#define VkglTestCase_015807_2 "roduct.dynamic.mediump_mat4x3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015807, VkglTestCase_015807_1, VkglTestCase_015807_2);

#define VkglTestCase_015808_1 "dEQP-GLES3.functional.shaders.matrix.oute"
#define VkglTestCase_015808_2 "rproduct.dynamic.highp_mat4x3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015808, VkglTestCase_015808_1, VkglTestCase_015808_2);

#define VkglTestCase_015809_1 "dEQP-GLES3.functional.shaders.matrix.outer"
#define VkglTestCase_015809_2 "product.dynamic.highp_mat4x3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015809, VkglTestCase_015809_1, VkglTestCase_015809_2);

#define VkglTestCase_015810_1 "dEQP-GLES3.functional.shaders.matrix.out"
#define VkglTestCase_015810_2 "erproduct.dynamic.lowp_mat4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015810, VkglTestCase_015810_1, VkglTestCase_015810_2);

#define VkglTestCase_015811_1 "dEQP-GLES3.functional.shaders.matrix.oute"
#define VkglTestCase_015811_2 "rproduct.dynamic.lowp_mat4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015811, VkglTestCase_015811_1, VkglTestCase_015811_2);

#define VkglTestCase_015812_1 "dEQP-GLES3.functional.shaders.matrix.oute"
#define VkglTestCase_015812_2 "rproduct.dynamic.mediump_mat4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015812, VkglTestCase_015812_1, VkglTestCase_015812_2);

#define VkglTestCase_015813_1 "dEQP-GLES3.functional.shaders.matrix.outer"
#define VkglTestCase_015813_2 "product.dynamic.mediump_mat4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015813, VkglTestCase_015813_1, VkglTestCase_015813_2);

#define VkglTestCase_015814_1 "dEQP-GLES3.functional.shaders.matrix.out"
#define VkglTestCase_015814_2 "erproduct.dynamic.highp_mat4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015814, VkglTestCase_015814_1, VkglTestCase_015814_2);

#define VkglTestCase_015815_1 "dEQP-GLES3.functional.shaders.matrix.oute"
#define VkglTestCase_015815_2 "rproduct.dynamic.highp_mat4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015815, VkglTestCase_015815_1, VkglTestCase_015815_2);
