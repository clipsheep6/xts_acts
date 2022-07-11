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
#include "../ActsDeqpgles30010TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_009812_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_009812_2 "_operator.mul_assign_effect.lowp_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009812, VkglTestCase_009812_1, VkglTestCase_009812_2);

#define VkglTestCase_009813_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_009813_2 "operator.mul_assign_effect.lowp_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009813, VkglTestCase_009813_1, VkglTestCase_009813_2);

#define VkglTestCase_009814_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_009814_2 "operator.mul_assign_effect.mediump_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009814, VkglTestCase_009814_1, VkglTestCase_009814_2);

#define VkglTestCase_009815_1 "dEQP-GLES3.functional.shaders.operator.binary_o"
#define VkglTestCase_009815_2 "perator.mul_assign_effect.mediump_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009815, VkglTestCase_009815_1, VkglTestCase_009815_2);

#define VkglTestCase_009816_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_009816_2 "_operator.mul_assign_effect.highp_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009816, VkglTestCase_009816_1, VkglTestCase_009816_2);

#define VkglTestCase_009817_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_009817_2 "operator.mul_assign_effect.highp_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009817, VkglTestCase_009817_1, VkglTestCase_009817_2);

#define VkglTestCase_009818_1 "dEQP-GLES3.functional.shaders.operator.binar"
#define VkglTestCase_009818_2 "y_operator.mul_assign_effect.lowp_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009818, VkglTestCase_009818_1, VkglTestCase_009818_2);

#define VkglTestCase_009819_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_009819_2 "_operator.mul_assign_effect.lowp_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009819, VkglTestCase_009819_1, VkglTestCase_009819_2);

#define VkglTestCase_009820_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_009820_2 "operator.mul_assign_effect.mediump_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009820, VkglTestCase_009820_1, VkglTestCase_009820_2);

#define VkglTestCase_009821_1 "dEQP-GLES3.functional.shaders.operator.binary_o"
#define VkglTestCase_009821_2 "perator.mul_assign_effect.mediump_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009821, VkglTestCase_009821_1, VkglTestCase_009821_2);

#define VkglTestCase_009822_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_009822_2 "_operator.mul_assign_effect.highp_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009822, VkglTestCase_009822_1, VkglTestCase_009822_2);

#define VkglTestCase_009823_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_009823_2 "operator.mul_assign_effect.highp_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009823, VkglTestCase_009823_1, VkglTestCase_009823_2);

#define VkglTestCase_009824_1 "dEQP-GLES3.functional.shaders.operator.binar"
#define VkglTestCase_009824_2 "y_operator.mul_assign_effect.lowp_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009824, VkglTestCase_009824_1, VkglTestCase_009824_2);

#define VkglTestCase_009825_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_009825_2 "_operator.mul_assign_effect.lowp_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009825, VkglTestCase_009825_1, VkglTestCase_009825_2);

#define VkglTestCase_009826_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_009826_2 "operator.mul_assign_effect.mediump_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009826, VkglTestCase_009826_1, VkglTestCase_009826_2);

#define VkglTestCase_009827_1 "dEQP-GLES3.functional.shaders.operator.binary_o"
#define VkglTestCase_009827_2 "perator.mul_assign_effect.mediump_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009827, VkglTestCase_009827_1, VkglTestCase_009827_2);

#define VkglTestCase_009828_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_009828_2 "_operator.mul_assign_effect.highp_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009828, VkglTestCase_009828_1, VkglTestCase_009828_2);

#define VkglTestCase_009829_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_009829_2 "operator.mul_assign_effect.highp_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009829, VkglTestCase_009829_1, VkglTestCase_009829_2);

#define VkglTestCase_009830_1 "dEQP-GLES3.functional.shaders.operator.binar"
#define VkglTestCase_009830_2 "y_operator.mul_assign_effect.lowp_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009830, VkglTestCase_009830_1, VkglTestCase_009830_2);

#define VkglTestCase_009831_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_009831_2 "_operator.mul_assign_effect.lowp_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009831, VkglTestCase_009831_1, VkglTestCase_009831_2);

#define VkglTestCase_009832_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_009832_2 "operator.mul_assign_effect.mediump_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009832, VkglTestCase_009832_1, VkglTestCase_009832_2);

#define VkglTestCase_009833_1 "dEQP-GLES3.functional.shaders.operator.binary_o"
#define VkglTestCase_009833_2 "perator.mul_assign_effect.mediump_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009833, VkglTestCase_009833_1, VkglTestCase_009833_2);

#define VkglTestCase_009834_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_009834_2 "_operator.mul_assign_effect.highp_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009834, VkglTestCase_009834_1, VkglTestCase_009834_2);

#define VkglTestCase_009835_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_009835_2 "operator.mul_assign_effect.highp_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009835, VkglTestCase_009835_1, VkglTestCase_009835_2);

#define VkglTestCase_009836_1 "dEQP-GLES3.functional.shaders.operator.binar"
#define VkglTestCase_009836_2 "y_operator.mul_assign_effect.lowp_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009836, VkglTestCase_009836_1, VkglTestCase_009836_2);

#define VkglTestCase_009837_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_009837_2 "_operator.mul_assign_effect.lowp_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009837, VkglTestCase_009837_1, VkglTestCase_009837_2);

#define VkglTestCase_009838_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_009838_2 "_operator.mul_assign_effect.mediump_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009838, VkglTestCase_009838_1, VkglTestCase_009838_2);

#define VkglTestCase_009839_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_009839_2 "operator.mul_assign_effect.mediump_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009839, VkglTestCase_009839_1, VkglTestCase_009839_2);

#define VkglTestCase_009840_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_009840_2 "_operator.mul_assign_effect.lowp_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009840, VkglTestCase_009840_1, VkglTestCase_009840_2);

#define VkglTestCase_009841_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_009841_2 "operator.mul_assign_effect.lowp_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009841, VkglTestCase_009841_1, VkglTestCase_009841_2);

#define VkglTestCase_009842_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_009842_2 "operator.mul_assign_effect.mediump_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009842, VkglTestCase_009842_1, VkglTestCase_009842_2);

#define VkglTestCase_009843_1 "dEQP-GLES3.functional.shaders.operator.binary_o"
#define VkglTestCase_009843_2 "perator.mul_assign_effect.mediump_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009843, VkglTestCase_009843_1, VkglTestCase_009843_2);

#define VkglTestCase_009844_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_009844_2 "_operator.mul_assign_effect.lowp_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009844, VkglTestCase_009844_1, VkglTestCase_009844_2);

#define VkglTestCase_009845_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_009845_2 "operator.mul_assign_effect.lowp_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009845, VkglTestCase_009845_1, VkglTestCase_009845_2);

#define VkglTestCase_009846_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_009846_2 "operator.mul_assign_effect.mediump_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009846, VkglTestCase_009846_1, VkglTestCase_009846_2);

#define VkglTestCase_009847_1 "dEQP-GLES3.functional.shaders.operator.binary_o"
#define VkglTestCase_009847_2 "perator.mul_assign_effect.mediump_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009847, VkglTestCase_009847_1, VkglTestCase_009847_2);

#define VkglTestCase_009848_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_009848_2 "_operator.mul_assign_effect.lowp_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009848, VkglTestCase_009848_1, VkglTestCase_009848_2);

#define VkglTestCase_009849_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_009849_2 "operator.mul_assign_effect.lowp_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009849, VkglTestCase_009849_1, VkglTestCase_009849_2);

#define VkglTestCase_009850_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_009850_2 "operator.mul_assign_effect.mediump_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009850, VkglTestCase_009850_1, VkglTestCase_009850_2);

#define VkglTestCase_009851_1 "dEQP-GLES3.functional.shaders.operator.binary_o"
#define VkglTestCase_009851_2 "perator.mul_assign_effect.mediump_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009851, VkglTestCase_009851_1, VkglTestCase_009851_2);

#define VkglTestCase_009852_1 "dEQP-GLES3.functional.shaders.operator.binar"
#define VkglTestCase_009852_2 "y_operator.mul_assign_effect.highp_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009852, VkglTestCase_009852_1, VkglTestCase_009852_2);

#define VkglTestCase_009853_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_009853_2 "_operator.mul_assign_effect.highp_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009853, VkglTestCase_009853_1, VkglTestCase_009853_2);

#define VkglTestCase_009854_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_009854_2 "_operator.mul_assign_effect.highp_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009854, VkglTestCase_009854_1, VkglTestCase_009854_2);

#define VkglTestCase_009855_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_009855_2 "operator.mul_assign_effect.highp_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009855, VkglTestCase_009855_1, VkglTestCase_009855_2);

#define VkglTestCase_009856_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_009856_2 "_operator.mul_assign_effect.highp_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009856, VkglTestCase_009856_1, VkglTestCase_009856_2);

#define VkglTestCase_009857_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_009857_2 "operator.mul_assign_effect.highp_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009857, VkglTestCase_009857_1, VkglTestCase_009857_2);

#define VkglTestCase_009858_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_009858_2 "_operator.mul_assign_effect.highp_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009858, VkglTestCase_009858_1, VkglTestCase_009858_2);

#define VkglTestCase_009859_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_009859_2 "operator.mul_assign_effect.highp_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009859, VkglTestCase_009859_1, VkglTestCase_009859_2);

#define VkglTestCase_009860_1 "dEQP-GLES3.functional.shaders.operator.binar"
#define VkglTestCase_009860_2 "y_operator.mul_assign_effect.lowp_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009860, VkglTestCase_009860_1, VkglTestCase_009860_2);

#define VkglTestCase_009861_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_009861_2 "_operator.mul_assign_effect.lowp_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009861, VkglTestCase_009861_1, VkglTestCase_009861_2);

#define VkglTestCase_009862_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_009862_2 "operator.mul_assign_effect.mediump_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009862, VkglTestCase_009862_1, VkglTestCase_009862_2);

#define VkglTestCase_009863_1 "dEQP-GLES3.functional.shaders.operator.binary_o"
#define VkglTestCase_009863_2 "perator.mul_assign_effect.mediump_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009863, VkglTestCase_009863_1, VkglTestCase_009863_2);

#define VkglTestCase_009864_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_009864_2 "_operator.mul_assign_effect.lowp_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009864, VkglTestCase_009864_1, VkglTestCase_009864_2);

#define VkglTestCase_009865_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_009865_2 "operator.mul_assign_effect.lowp_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009865, VkglTestCase_009865_1, VkglTestCase_009865_2);

#define VkglTestCase_009866_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_009866_2 "operator.mul_assign_effect.mediump_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009866, VkglTestCase_009866_1, VkglTestCase_009866_2);

#define VkglTestCase_009867_1 "dEQP-GLES3.functional.shaders.operator.binary_o"
#define VkglTestCase_009867_2 "perator.mul_assign_effect.mediump_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009867, VkglTestCase_009867_1, VkglTestCase_009867_2);

#define VkglTestCase_009868_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_009868_2 "_operator.mul_assign_effect.lowp_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009868, VkglTestCase_009868_1, VkglTestCase_009868_2);

#define VkglTestCase_009869_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_009869_2 "operator.mul_assign_effect.lowp_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009869, VkglTestCase_009869_1, VkglTestCase_009869_2);

#define VkglTestCase_009870_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_009870_2 "operator.mul_assign_effect.mediump_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009870, VkglTestCase_009870_1, VkglTestCase_009870_2);

#define VkglTestCase_009871_1 "dEQP-GLES3.functional.shaders.operator.binary_o"
#define VkglTestCase_009871_2 "perator.mul_assign_effect.mediump_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009871, VkglTestCase_009871_1, VkglTestCase_009871_2);

#define VkglTestCase_009872_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_009872_2 "_operator.mul_assign_effect.lowp_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009872, VkglTestCase_009872_1, VkglTestCase_009872_2);

#define VkglTestCase_009873_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_009873_2 "operator.mul_assign_effect.lowp_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009873, VkglTestCase_009873_1, VkglTestCase_009873_2);

#define VkglTestCase_009874_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_009874_2 "operator.mul_assign_effect.mediump_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009874, VkglTestCase_009874_1, VkglTestCase_009874_2);

#define VkglTestCase_009875_1 "dEQP-GLES3.functional.shaders.operator.binary_o"
#define VkglTestCase_009875_2 "perator.mul_assign_effect.mediump_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009875, VkglTestCase_009875_1, VkglTestCase_009875_2);

#define VkglTestCase_009876_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_009876_2 "_operator.mul_assign_effect.highp_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009876, VkglTestCase_009876_1, VkglTestCase_009876_2);

#define VkglTestCase_009877_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_009877_2 "operator.mul_assign_effect.highp_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009877, VkglTestCase_009877_1, VkglTestCase_009877_2);

#define VkglTestCase_009878_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_009878_2 "_operator.mul_assign_effect.highp_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009878, VkglTestCase_009878_1, VkglTestCase_009878_2);

#define VkglTestCase_009879_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_009879_2 "operator.mul_assign_effect.highp_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009879, VkglTestCase_009879_1, VkglTestCase_009879_2);

#define VkglTestCase_009880_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_009880_2 "_operator.mul_assign_effect.highp_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009880, VkglTestCase_009880_1, VkglTestCase_009880_2);

#define VkglTestCase_009881_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_009881_2 "operator.mul_assign_effect.highp_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009881, VkglTestCase_009881_1, VkglTestCase_009881_2);

#define VkglTestCase_009882_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_009882_2 "_operator.mul_assign_effect.highp_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009882, VkglTestCase_009882_1, VkglTestCase_009882_2);

#define VkglTestCase_009883_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_009883_2 "operator.mul_assign_effect.highp_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009883, VkglTestCase_009883_1, VkglTestCase_009883_2);

#define VkglTestCase_009884_1 "dEQP-GLES3.functional.shaders.operator.binary_o"
#define VkglTestCase_009884_2 "perator.mul_assign_effect.lowp_vec2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009884, VkglTestCase_009884_1, VkglTestCase_009884_2);

#define VkglTestCase_009885_1 "dEQP-GLES3.functional.shaders.operator.binary_op"
#define VkglTestCase_009885_2 "erator.mul_assign_effect.lowp_vec2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009885, VkglTestCase_009885_1, VkglTestCase_009885_2);

#define VkglTestCase_009886_1 "dEQP-GLES3.functional.shaders.operator.binary_ope"
#define VkglTestCase_009886_2 "rator.mul_assign_effect.mediump_vec2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009886, VkglTestCase_009886_1, VkglTestCase_009886_2);

#define VkglTestCase_009887_1 "dEQP-GLES3.functional.shaders.operator.binary_oper"
#define VkglTestCase_009887_2 "ator.mul_assign_effect.mediump_vec2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009887, VkglTestCase_009887_1, VkglTestCase_009887_2);

#define VkglTestCase_009888_1 "dEQP-GLES3.functional.shaders.operator.binary_op"
#define VkglTestCase_009888_2 "erator.mul_assign_effect.highp_vec2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009888, VkglTestCase_009888_1, VkglTestCase_009888_2);

#define VkglTestCase_009889_1 "dEQP-GLES3.functional.shaders.operator.binary_ope"
#define VkglTestCase_009889_2 "rator.mul_assign_effect.highp_vec2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009889, VkglTestCase_009889_1, VkglTestCase_009889_2);

#define VkglTestCase_009890_1 "dEQP-GLES3.functional.shaders.operator.binary_o"
#define VkglTestCase_009890_2 "perator.mul_assign_effect.lowp_vec3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009890, VkglTestCase_009890_1, VkglTestCase_009890_2);

#define VkglTestCase_009891_1 "dEQP-GLES3.functional.shaders.operator.binary_op"
#define VkglTestCase_009891_2 "erator.mul_assign_effect.lowp_vec3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009891, VkglTestCase_009891_1, VkglTestCase_009891_2);

#define VkglTestCase_009892_1 "dEQP-GLES3.functional.shaders.operator.binary_ope"
#define VkglTestCase_009892_2 "rator.mul_assign_effect.mediump_vec3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009892, VkglTestCase_009892_1, VkglTestCase_009892_2);

#define VkglTestCase_009893_1 "dEQP-GLES3.functional.shaders.operator.binary_oper"
#define VkglTestCase_009893_2 "ator.mul_assign_effect.mediump_vec3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009893, VkglTestCase_009893_1, VkglTestCase_009893_2);

#define VkglTestCase_009894_1 "dEQP-GLES3.functional.shaders.operator.binary_op"
#define VkglTestCase_009894_2 "erator.mul_assign_effect.highp_vec3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009894, VkglTestCase_009894_1, VkglTestCase_009894_2);

#define VkglTestCase_009895_1 "dEQP-GLES3.functional.shaders.operator.binary_ope"
#define VkglTestCase_009895_2 "rator.mul_assign_effect.highp_vec3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009895, VkglTestCase_009895_1, VkglTestCase_009895_2);

#define VkglTestCase_009896_1 "dEQP-GLES3.functional.shaders.operator.binary_o"
#define VkglTestCase_009896_2 "perator.mul_assign_effect.lowp_vec4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009896, VkglTestCase_009896_1, VkglTestCase_009896_2);

#define VkglTestCase_009897_1 "dEQP-GLES3.functional.shaders.operator.binary_op"
#define VkglTestCase_009897_2 "erator.mul_assign_effect.lowp_vec4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009897, VkglTestCase_009897_1, VkglTestCase_009897_2);

#define VkglTestCase_009898_1 "dEQP-GLES3.functional.shaders.operator.binary_ope"
#define VkglTestCase_009898_2 "rator.mul_assign_effect.mediump_vec4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009898, VkglTestCase_009898_1, VkglTestCase_009898_2);

#define VkglTestCase_009899_1 "dEQP-GLES3.functional.shaders.operator.binary_oper"
#define VkglTestCase_009899_2 "ator.mul_assign_effect.mediump_vec4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009899, VkglTestCase_009899_1, VkglTestCase_009899_2);

#define VkglTestCase_009900_1 "dEQP-GLES3.functional.shaders.operator.binary_op"
#define VkglTestCase_009900_2 "erator.mul_assign_effect.highp_vec4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009900, VkglTestCase_009900_1, VkglTestCase_009900_2);

#define VkglTestCase_009901_1 "dEQP-GLES3.functional.shaders.operator.binary_ope"
#define VkglTestCase_009901_2 "rator.mul_assign_effect.highp_vec4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009901, VkglTestCase_009901_1, VkglTestCase_009901_2);

#define VkglTestCase_009902_1 "dEQP-GLES3.functional.shaders.operator.binary_o"
#define VkglTestCase_009902_2 "perator.mul_assign_effect.lowp_ivec2_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009902, VkglTestCase_009902_1, VkglTestCase_009902_2);

#define VkglTestCase_009903_1 "dEQP-GLES3.functional.shaders.operator.binary_op"
#define VkglTestCase_009903_2 "erator.mul_assign_effect.lowp_ivec2_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009903, VkglTestCase_009903_1, VkglTestCase_009903_2);

#define VkglTestCase_009904_1 "dEQP-GLES3.functional.shaders.operator.binary_op"
#define VkglTestCase_009904_2 "erator.mul_assign_effect.mediump_ivec2_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009904, VkglTestCase_009904_1, VkglTestCase_009904_2);

#define VkglTestCase_009905_1 "dEQP-GLES3.functional.shaders.operator.binary_ope"
#define VkglTestCase_009905_2 "rator.mul_assign_effect.mediump_ivec2_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009905, VkglTestCase_009905_1, VkglTestCase_009905_2);

#define VkglTestCase_009906_1 "dEQP-GLES3.functional.shaders.operator.binary_o"
#define VkglTestCase_009906_2 "perator.mul_assign_effect.lowp_ivec3_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009906, VkglTestCase_009906_1, VkglTestCase_009906_2);

#define VkglTestCase_009907_1 "dEQP-GLES3.functional.shaders.operator.binary_op"
#define VkglTestCase_009907_2 "erator.mul_assign_effect.lowp_ivec3_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009907, VkglTestCase_009907_1, VkglTestCase_009907_2);

#define VkglTestCase_009908_1 "dEQP-GLES3.functional.shaders.operator.binary_op"
#define VkglTestCase_009908_2 "erator.mul_assign_effect.mediump_ivec3_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009908, VkglTestCase_009908_1, VkglTestCase_009908_2);

#define VkglTestCase_009909_1 "dEQP-GLES3.functional.shaders.operator.binary_ope"
#define VkglTestCase_009909_2 "rator.mul_assign_effect.mediump_ivec3_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009909, VkglTestCase_009909_1, VkglTestCase_009909_2);

#define VkglTestCase_009910_1 "dEQP-GLES3.functional.shaders.operator.binary_o"
#define VkglTestCase_009910_2 "perator.mul_assign_effect.lowp_ivec4_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009910, VkglTestCase_009910_1, VkglTestCase_009910_2);

#define VkglTestCase_009911_1 "dEQP-GLES3.functional.shaders.operator.binary_op"
#define VkglTestCase_009911_2 "erator.mul_assign_effect.lowp_ivec4_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009911, VkglTestCase_009911_1, VkglTestCase_009911_2);

#define VkglTestCase_009912_1 "dEQP-GLES3.functional.shaders.operator.binary_op"
#define VkglTestCase_009912_2 "erator.mul_assign_effect.mediump_ivec4_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009912, VkglTestCase_009912_1, VkglTestCase_009912_2);

#define VkglTestCase_009913_1 "dEQP-GLES3.functional.shaders.operator.binary_ope"
#define VkglTestCase_009913_2 "rator.mul_assign_effect.mediump_ivec4_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009913, VkglTestCase_009913_1, VkglTestCase_009913_2);

#define VkglTestCase_009914_1 "dEQP-GLES3.functional.shaders.operator.binary_o"
#define VkglTestCase_009914_2 "perator.mul_assign_effect.highp_ivec2_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009914, VkglTestCase_009914_1, VkglTestCase_009914_2);

#define VkglTestCase_009915_1 "dEQP-GLES3.functional.shaders.operator.binary_op"
#define VkglTestCase_009915_2 "erator.mul_assign_effect.highp_ivec2_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009915, VkglTestCase_009915_1, VkglTestCase_009915_2);

#define VkglTestCase_009916_1 "dEQP-GLES3.functional.shaders.operator.binary_o"
#define VkglTestCase_009916_2 "perator.mul_assign_effect.highp_ivec3_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009916, VkglTestCase_009916_1, VkglTestCase_009916_2);

#define VkglTestCase_009917_1 "dEQP-GLES3.functional.shaders.operator.binary_op"
#define VkglTestCase_009917_2 "erator.mul_assign_effect.highp_ivec3_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009917, VkglTestCase_009917_1, VkglTestCase_009917_2);

#define VkglTestCase_009918_1 "dEQP-GLES3.functional.shaders.operator.binary_o"
#define VkglTestCase_009918_2 "perator.mul_assign_effect.highp_ivec4_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009918, VkglTestCase_009918_1, VkglTestCase_009918_2);

#define VkglTestCase_009919_1 "dEQP-GLES3.functional.shaders.operator.binary_op"
#define VkglTestCase_009919_2 "erator.mul_assign_effect.highp_ivec4_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009919, VkglTestCase_009919_1, VkglTestCase_009919_2);

#define VkglTestCase_009920_1 "dEQP-GLES3.functional.shaders.operator.binary_o"
#define VkglTestCase_009920_2 "perator.mul_assign_effect.lowp_uvec2_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009920, VkglTestCase_009920_1, VkglTestCase_009920_2);

#define VkglTestCase_009921_1 "dEQP-GLES3.functional.shaders.operator.binary_op"
#define VkglTestCase_009921_2 "erator.mul_assign_effect.lowp_uvec2_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009921, VkglTestCase_009921_1, VkglTestCase_009921_2);

#define VkglTestCase_009922_1 "dEQP-GLES3.functional.shaders.operator.binary_ope"
#define VkglTestCase_009922_2 "rator.mul_assign_effect.mediump_uvec2_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009922, VkglTestCase_009922_1, VkglTestCase_009922_2);

#define VkglTestCase_009923_1 "dEQP-GLES3.functional.shaders.operator.binary_oper"
#define VkglTestCase_009923_2 "ator.mul_assign_effect.mediump_uvec2_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009923, VkglTestCase_009923_1, VkglTestCase_009923_2);

#define VkglTestCase_009924_1 "dEQP-GLES3.functional.shaders.operator.binary_o"
#define VkglTestCase_009924_2 "perator.mul_assign_effect.lowp_uvec3_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009924, VkglTestCase_009924_1, VkglTestCase_009924_2);

#define VkglTestCase_009925_1 "dEQP-GLES3.functional.shaders.operator.binary_op"
#define VkglTestCase_009925_2 "erator.mul_assign_effect.lowp_uvec3_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009925, VkglTestCase_009925_1, VkglTestCase_009925_2);

#define VkglTestCase_009926_1 "dEQP-GLES3.functional.shaders.operator.binary_ope"
#define VkglTestCase_009926_2 "rator.mul_assign_effect.mediump_uvec3_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009926, VkglTestCase_009926_1, VkglTestCase_009926_2);

#define VkglTestCase_009927_1 "dEQP-GLES3.functional.shaders.operator.binary_oper"
#define VkglTestCase_009927_2 "ator.mul_assign_effect.mediump_uvec3_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009927, VkglTestCase_009927_1, VkglTestCase_009927_2);

#define VkglTestCase_009928_1 "dEQP-GLES3.functional.shaders.operator.binary_o"
#define VkglTestCase_009928_2 "perator.mul_assign_effect.lowp_uvec4_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009928, VkglTestCase_009928_1, VkglTestCase_009928_2);

#define VkglTestCase_009929_1 "dEQP-GLES3.functional.shaders.operator.binary_op"
#define VkglTestCase_009929_2 "erator.mul_assign_effect.lowp_uvec4_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009929, VkglTestCase_009929_1, VkglTestCase_009929_2);

#define VkglTestCase_009930_1 "dEQP-GLES3.functional.shaders.operator.binary_ope"
#define VkglTestCase_009930_2 "rator.mul_assign_effect.mediump_uvec4_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009930, VkglTestCase_009930_1, VkglTestCase_009930_2);

#define VkglTestCase_009931_1 "dEQP-GLES3.functional.shaders.operator.binary_oper"
#define VkglTestCase_009931_2 "ator.mul_assign_effect.mediump_uvec4_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009931, VkglTestCase_009931_1, VkglTestCase_009931_2);

#define VkglTestCase_009932_1 "dEQP-GLES3.functional.shaders.operator.binary_op"
#define VkglTestCase_009932_2 "erator.mul_assign_effect.highp_uvec2_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009932, VkglTestCase_009932_1, VkglTestCase_009932_2);

#define VkglTestCase_009933_1 "dEQP-GLES3.functional.shaders.operator.binary_ope"
#define VkglTestCase_009933_2 "rator.mul_assign_effect.highp_uvec2_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009933, VkglTestCase_009933_1, VkglTestCase_009933_2);

#define VkglTestCase_009934_1 "dEQP-GLES3.functional.shaders.operator.binary_op"
#define VkglTestCase_009934_2 "erator.mul_assign_effect.highp_uvec3_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009934, VkglTestCase_009934_1, VkglTestCase_009934_2);

#define VkglTestCase_009935_1 "dEQP-GLES3.functional.shaders.operator.binary_ope"
#define VkglTestCase_009935_2 "rator.mul_assign_effect.highp_uvec3_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009935, VkglTestCase_009935_1, VkglTestCase_009935_2);

#define VkglTestCase_009936_1 "dEQP-GLES3.functional.shaders.operator.binary_op"
#define VkglTestCase_009936_2 "erator.mul_assign_effect.highp_uvec4_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009936, VkglTestCase_009936_1, VkglTestCase_009936_2);

#define VkglTestCase_009937_1 "dEQP-GLES3.functional.shaders.operator.binary_ope"
#define VkglTestCase_009937_2 "rator.mul_assign_effect.highp_uvec4_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009937, VkglTestCase_009937_1, VkglTestCase_009937_2);
