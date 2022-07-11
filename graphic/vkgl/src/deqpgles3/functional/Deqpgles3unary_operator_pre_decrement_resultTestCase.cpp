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
#include "../ActsDeqpgles30008TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_007808_1 "dEQP-GLES3.functional.shaders.operator.unary_o"
#define VkglTestCase_007808_2 "perator.pre_decrement_result.lowp_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007808, VkglTestCase_007808_1, VkglTestCase_007808_2);

#define VkglTestCase_007809_1 "dEQP-GLES3.functional.shaders.operator.unary_op"
#define VkglTestCase_007809_2 "erator.pre_decrement_result.lowp_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007809, VkglTestCase_007809_1, VkglTestCase_007809_2);

#define VkglTestCase_007810_1 "dEQP-GLES3.functional.shaders.operator.unary_op"
#define VkglTestCase_007810_2 "erator.pre_decrement_result.mediump_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007810, VkglTestCase_007810_1, VkglTestCase_007810_2);

#define VkglTestCase_007811_1 "dEQP-GLES3.functional.shaders.operator.unary_ope"
#define VkglTestCase_007811_2 "rator.pre_decrement_result.mediump_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007811, VkglTestCase_007811_1, VkglTestCase_007811_2);

#define VkglTestCase_007812_1 "dEQP-GLES3.functional.shaders.operator.unary_o"
#define VkglTestCase_007812_2 "perator.pre_decrement_result.highp_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007812, VkglTestCase_007812_1, VkglTestCase_007812_2);

#define VkglTestCase_007813_1 "dEQP-GLES3.functional.shaders.operator.unary_op"
#define VkglTestCase_007813_2 "erator.pre_decrement_result.highp_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007813, VkglTestCase_007813_1, VkglTestCase_007813_2);

#define VkglTestCase_007814_1 "dEQP-GLES3.functional.shaders.operator.unary_"
#define VkglTestCase_007814_2 "operator.pre_decrement_result.lowp_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007814, VkglTestCase_007814_1, VkglTestCase_007814_2);

#define VkglTestCase_007815_1 "dEQP-GLES3.functional.shaders.operator.unary_o"
#define VkglTestCase_007815_2 "perator.pre_decrement_result.lowp_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007815, VkglTestCase_007815_1, VkglTestCase_007815_2);

#define VkglTestCase_007816_1 "dEQP-GLES3.functional.shaders.operator.unary_op"
#define VkglTestCase_007816_2 "erator.pre_decrement_result.mediump_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007816, VkglTestCase_007816_1, VkglTestCase_007816_2);

#define VkglTestCase_007817_1 "dEQP-GLES3.functional.shaders.operator.unary_ope"
#define VkglTestCase_007817_2 "rator.pre_decrement_result.mediump_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007817, VkglTestCase_007817_1, VkglTestCase_007817_2);

#define VkglTestCase_007818_1 "dEQP-GLES3.functional.shaders.operator.unary_o"
#define VkglTestCase_007818_2 "perator.pre_decrement_result.highp_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007818, VkglTestCase_007818_1, VkglTestCase_007818_2);

#define VkglTestCase_007819_1 "dEQP-GLES3.functional.shaders.operator.unary_op"
#define VkglTestCase_007819_2 "erator.pre_decrement_result.highp_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007819, VkglTestCase_007819_1, VkglTestCase_007819_2);

#define VkglTestCase_007820_1 "dEQP-GLES3.functional.shaders.operator.unary_"
#define VkglTestCase_007820_2 "operator.pre_decrement_result.lowp_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007820, VkglTestCase_007820_1, VkglTestCase_007820_2);

#define VkglTestCase_007821_1 "dEQP-GLES3.functional.shaders.operator.unary_o"
#define VkglTestCase_007821_2 "perator.pre_decrement_result.lowp_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007821, VkglTestCase_007821_1, VkglTestCase_007821_2);

#define VkglTestCase_007822_1 "dEQP-GLES3.functional.shaders.operator.unary_op"
#define VkglTestCase_007822_2 "erator.pre_decrement_result.mediump_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007822, VkglTestCase_007822_1, VkglTestCase_007822_2);

#define VkglTestCase_007823_1 "dEQP-GLES3.functional.shaders.operator.unary_ope"
#define VkglTestCase_007823_2 "rator.pre_decrement_result.mediump_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007823, VkglTestCase_007823_1, VkglTestCase_007823_2);

#define VkglTestCase_007824_1 "dEQP-GLES3.functional.shaders.operator.unary_o"
#define VkglTestCase_007824_2 "perator.pre_decrement_result.highp_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007824, VkglTestCase_007824_1, VkglTestCase_007824_2);

#define VkglTestCase_007825_1 "dEQP-GLES3.functional.shaders.operator.unary_op"
#define VkglTestCase_007825_2 "erator.pre_decrement_result.highp_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007825, VkglTestCase_007825_1, VkglTestCase_007825_2);

#define VkglTestCase_007826_1 "dEQP-GLES3.functional.shaders.operator.unary_"
#define VkglTestCase_007826_2 "operator.pre_decrement_result.lowp_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007826, VkglTestCase_007826_1, VkglTestCase_007826_2);

#define VkglTestCase_007827_1 "dEQP-GLES3.functional.shaders.operator.unary_o"
#define VkglTestCase_007827_2 "perator.pre_decrement_result.lowp_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007827, VkglTestCase_007827_1, VkglTestCase_007827_2);

#define VkglTestCase_007828_1 "dEQP-GLES3.functional.shaders.operator.unary_op"
#define VkglTestCase_007828_2 "erator.pre_decrement_result.mediump_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007828, VkglTestCase_007828_1, VkglTestCase_007828_2);

#define VkglTestCase_007829_1 "dEQP-GLES3.functional.shaders.operator.unary_ope"
#define VkglTestCase_007829_2 "rator.pre_decrement_result.mediump_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007829, VkglTestCase_007829_1, VkglTestCase_007829_2);

#define VkglTestCase_007830_1 "dEQP-GLES3.functional.shaders.operator.unary_o"
#define VkglTestCase_007830_2 "perator.pre_decrement_result.highp_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007830, VkglTestCase_007830_1, VkglTestCase_007830_2);

#define VkglTestCase_007831_1 "dEQP-GLES3.functional.shaders.operator.unary_op"
#define VkglTestCase_007831_2 "erator.pre_decrement_result.highp_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007831, VkglTestCase_007831_1, VkglTestCase_007831_2);

#define VkglTestCase_007832_1 "dEQP-GLES3.functional.shaders.operator.unary_"
#define VkglTestCase_007832_2 "operator.pre_decrement_result.lowp_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007832, VkglTestCase_007832_1, VkglTestCase_007832_2);

#define VkglTestCase_007833_1 "dEQP-GLES3.functional.shaders.operator.unary_o"
#define VkglTestCase_007833_2 "perator.pre_decrement_result.lowp_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007833, VkglTestCase_007833_1, VkglTestCase_007833_2);

#define VkglTestCase_007834_1 "dEQP-GLES3.functional.shaders.operator.unary_o"
#define VkglTestCase_007834_2 "perator.pre_decrement_result.mediump_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007834, VkglTestCase_007834_1, VkglTestCase_007834_2);

#define VkglTestCase_007835_1 "dEQP-GLES3.functional.shaders.operator.unary_op"
#define VkglTestCase_007835_2 "erator.pre_decrement_result.mediump_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007835, VkglTestCase_007835_1, VkglTestCase_007835_2);

#define VkglTestCase_007836_1 "dEQP-GLES3.functional.shaders.operator.unary_"
#define VkglTestCase_007836_2 "operator.pre_decrement_result.highp_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007836, VkglTestCase_007836_1, VkglTestCase_007836_2);

#define VkglTestCase_007837_1 "dEQP-GLES3.functional.shaders.operator.unary_o"
#define VkglTestCase_007837_2 "perator.pre_decrement_result.highp_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007837, VkglTestCase_007837_1, VkglTestCase_007837_2);

#define VkglTestCase_007838_1 "dEQP-GLES3.functional.shaders.operator.unary_o"
#define VkglTestCase_007838_2 "perator.pre_decrement_result.lowp_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007838, VkglTestCase_007838_1, VkglTestCase_007838_2);

#define VkglTestCase_007839_1 "dEQP-GLES3.functional.shaders.operator.unary_op"
#define VkglTestCase_007839_2 "erator.pre_decrement_result.lowp_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007839, VkglTestCase_007839_1, VkglTestCase_007839_2);

#define VkglTestCase_007840_1 "dEQP-GLES3.functional.shaders.operator.unary_op"
#define VkglTestCase_007840_2 "erator.pre_decrement_result.mediump_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007840, VkglTestCase_007840_1, VkglTestCase_007840_2);

#define VkglTestCase_007841_1 "dEQP-GLES3.functional.shaders.operator.unary_ope"
#define VkglTestCase_007841_2 "rator.pre_decrement_result.mediump_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007841, VkglTestCase_007841_1, VkglTestCase_007841_2);

#define VkglTestCase_007842_1 "dEQP-GLES3.functional.shaders.operator.unary_o"
#define VkglTestCase_007842_2 "perator.pre_decrement_result.highp_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007842, VkglTestCase_007842_1, VkglTestCase_007842_2);

#define VkglTestCase_007843_1 "dEQP-GLES3.functional.shaders.operator.unary_op"
#define VkglTestCase_007843_2 "erator.pre_decrement_result.highp_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007843, VkglTestCase_007843_1, VkglTestCase_007843_2);

#define VkglTestCase_007844_1 "dEQP-GLES3.functional.shaders.operator.unary_o"
#define VkglTestCase_007844_2 "perator.pre_decrement_result.lowp_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007844, VkglTestCase_007844_1, VkglTestCase_007844_2);

#define VkglTestCase_007845_1 "dEQP-GLES3.functional.shaders.operator.unary_op"
#define VkglTestCase_007845_2 "erator.pre_decrement_result.lowp_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007845, VkglTestCase_007845_1, VkglTestCase_007845_2);

#define VkglTestCase_007846_1 "dEQP-GLES3.functional.shaders.operator.unary_op"
#define VkglTestCase_007846_2 "erator.pre_decrement_result.mediump_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007846, VkglTestCase_007846_1, VkglTestCase_007846_2);

#define VkglTestCase_007847_1 "dEQP-GLES3.functional.shaders.operator.unary_ope"
#define VkglTestCase_007847_2 "rator.pre_decrement_result.mediump_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007847, VkglTestCase_007847_1, VkglTestCase_007847_2);

#define VkglTestCase_007848_1 "dEQP-GLES3.functional.shaders.operator.unary_o"
#define VkglTestCase_007848_2 "perator.pre_decrement_result.highp_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007848, VkglTestCase_007848_1, VkglTestCase_007848_2);

#define VkglTestCase_007849_1 "dEQP-GLES3.functional.shaders.operator.unary_op"
#define VkglTestCase_007849_2 "erator.pre_decrement_result.highp_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007849, VkglTestCase_007849_1, VkglTestCase_007849_2);

#define VkglTestCase_007850_1 "dEQP-GLES3.functional.shaders.operator.unary_o"
#define VkglTestCase_007850_2 "perator.pre_decrement_result.lowp_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007850, VkglTestCase_007850_1, VkglTestCase_007850_2);

#define VkglTestCase_007851_1 "dEQP-GLES3.functional.shaders.operator.unary_op"
#define VkglTestCase_007851_2 "erator.pre_decrement_result.lowp_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007851, VkglTestCase_007851_1, VkglTestCase_007851_2);

#define VkglTestCase_007852_1 "dEQP-GLES3.functional.shaders.operator.unary_op"
#define VkglTestCase_007852_2 "erator.pre_decrement_result.mediump_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007852, VkglTestCase_007852_1, VkglTestCase_007852_2);

#define VkglTestCase_007853_1 "dEQP-GLES3.functional.shaders.operator.unary_ope"
#define VkglTestCase_007853_2 "rator.pre_decrement_result.mediump_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007853, VkglTestCase_007853_1, VkglTestCase_007853_2);

#define VkglTestCase_007854_1 "dEQP-GLES3.functional.shaders.operator.unary_o"
#define VkglTestCase_007854_2 "perator.pre_decrement_result.highp_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007854, VkglTestCase_007854_1, VkglTestCase_007854_2);

#define VkglTestCase_007855_1 "dEQP-GLES3.functional.shaders.operator.unary_op"
#define VkglTestCase_007855_2 "erator.pre_decrement_result.highp_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007855, VkglTestCase_007855_1, VkglTestCase_007855_2);

#define VkglTestCase_007856_1 "dEQP-GLES3.functional.shaders.operator.unary_"
#define VkglTestCase_007856_2 "operator.pre_decrement_result.lowp_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007856, VkglTestCase_007856_1, VkglTestCase_007856_2);

#define VkglTestCase_007857_1 "dEQP-GLES3.functional.shaders.operator.unary_o"
#define VkglTestCase_007857_2 "perator.pre_decrement_result.lowp_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007857, VkglTestCase_007857_1, VkglTestCase_007857_2);

#define VkglTestCase_007858_1 "dEQP-GLES3.functional.shaders.operator.unary_op"
#define VkglTestCase_007858_2 "erator.pre_decrement_result.mediump_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007858, VkglTestCase_007858_1, VkglTestCase_007858_2);

#define VkglTestCase_007859_1 "dEQP-GLES3.functional.shaders.operator.unary_ope"
#define VkglTestCase_007859_2 "rator.pre_decrement_result.mediump_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007859, VkglTestCase_007859_1, VkglTestCase_007859_2);

#define VkglTestCase_007860_1 "dEQP-GLES3.functional.shaders.operator.unary_o"
#define VkglTestCase_007860_2 "perator.pre_decrement_result.highp_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007860, VkglTestCase_007860_1, VkglTestCase_007860_2);

#define VkglTestCase_007861_1 "dEQP-GLES3.functional.shaders.operator.unary_op"
#define VkglTestCase_007861_2 "erator.pre_decrement_result.highp_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007861, VkglTestCase_007861_1, VkglTestCase_007861_2);

#define VkglTestCase_007862_1 "dEQP-GLES3.functional.shaders.operator.unary_o"
#define VkglTestCase_007862_2 "perator.pre_decrement_result.lowp_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007862, VkglTestCase_007862_1, VkglTestCase_007862_2);

#define VkglTestCase_007863_1 "dEQP-GLES3.functional.shaders.operator.unary_op"
#define VkglTestCase_007863_2 "erator.pre_decrement_result.lowp_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007863, VkglTestCase_007863_1, VkglTestCase_007863_2);

#define VkglTestCase_007864_1 "dEQP-GLES3.functional.shaders.operator.unary_op"
#define VkglTestCase_007864_2 "erator.pre_decrement_result.mediump_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007864, VkglTestCase_007864_1, VkglTestCase_007864_2);

#define VkglTestCase_007865_1 "dEQP-GLES3.functional.shaders.operator.unary_ope"
#define VkglTestCase_007865_2 "rator.pre_decrement_result.mediump_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007865, VkglTestCase_007865_1, VkglTestCase_007865_2);

#define VkglTestCase_007866_1 "dEQP-GLES3.functional.shaders.operator.unary_o"
#define VkglTestCase_007866_2 "perator.pre_decrement_result.highp_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007866, VkglTestCase_007866_1, VkglTestCase_007866_2);

#define VkglTestCase_007867_1 "dEQP-GLES3.functional.shaders.operator.unary_op"
#define VkglTestCase_007867_2 "erator.pre_decrement_result.highp_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007867, VkglTestCase_007867_1, VkglTestCase_007867_2);

#define VkglTestCase_007868_1 "dEQP-GLES3.functional.shaders.operator.unary_o"
#define VkglTestCase_007868_2 "perator.pre_decrement_result.lowp_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007868, VkglTestCase_007868_1, VkglTestCase_007868_2);

#define VkglTestCase_007869_1 "dEQP-GLES3.functional.shaders.operator.unary_op"
#define VkglTestCase_007869_2 "erator.pre_decrement_result.lowp_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007869, VkglTestCase_007869_1, VkglTestCase_007869_2);

#define VkglTestCase_007870_1 "dEQP-GLES3.functional.shaders.operator.unary_op"
#define VkglTestCase_007870_2 "erator.pre_decrement_result.mediump_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007870, VkglTestCase_007870_1, VkglTestCase_007870_2);

#define VkglTestCase_007871_1 "dEQP-GLES3.functional.shaders.operator.unary_ope"
#define VkglTestCase_007871_2 "rator.pre_decrement_result.mediump_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007871, VkglTestCase_007871_1, VkglTestCase_007871_2);

#define VkglTestCase_007872_1 "dEQP-GLES3.functional.shaders.operator.unary_o"
#define VkglTestCase_007872_2 "perator.pre_decrement_result.highp_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007872, VkglTestCase_007872_1, VkglTestCase_007872_2);

#define VkglTestCase_007873_1 "dEQP-GLES3.functional.shaders.operator.unary_op"
#define VkglTestCase_007873_2 "erator.pre_decrement_result.highp_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007873, VkglTestCase_007873_1, VkglTestCase_007873_2);

#define VkglTestCase_007874_1 "dEQP-GLES3.functional.shaders.operator.unary_o"
#define VkglTestCase_007874_2 "perator.pre_decrement_result.lowp_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007874, VkglTestCase_007874_1, VkglTestCase_007874_2);

#define VkglTestCase_007875_1 "dEQP-GLES3.functional.shaders.operator.unary_op"
#define VkglTestCase_007875_2 "erator.pre_decrement_result.lowp_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007875, VkglTestCase_007875_1, VkglTestCase_007875_2);

#define VkglTestCase_007876_1 "dEQP-GLES3.functional.shaders.operator.unary_op"
#define VkglTestCase_007876_2 "erator.pre_decrement_result.mediump_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007876, VkglTestCase_007876_1, VkglTestCase_007876_2);

#define VkglTestCase_007877_1 "dEQP-GLES3.functional.shaders.operator.unary_ope"
#define VkglTestCase_007877_2 "rator.pre_decrement_result.mediump_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007877, VkglTestCase_007877_1, VkglTestCase_007877_2);

#define VkglTestCase_007878_1 "dEQP-GLES3.functional.shaders.operator.unary_o"
#define VkglTestCase_007878_2 "perator.pre_decrement_result.highp_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007878, VkglTestCase_007878_1, VkglTestCase_007878_2);

#define VkglTestCase_007879_1 "dEQP-GLES3.functional.shaders.operator.unary_op"
#define VkglTestCase_007879_2 "erator.pre_decrement_result.highp_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007879, VkglTestCase_007879_1, VkglTestCase_007879_2);
