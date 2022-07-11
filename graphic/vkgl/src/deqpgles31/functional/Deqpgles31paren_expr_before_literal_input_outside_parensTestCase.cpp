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
#include "../ActsDeqpgles310006TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_005801_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.parenthesized_exp"
#define VkglTestCase_005801_2 "ressions.paren_expr_before_literal.input_outside_parens.int_to_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005801, VkglTestCase_005801_1, VkglTestCase_005801_2);

#define VkglTestCase_005802_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.parenthesized_expr"
#define VkglTestCase_005802_2 "essions.paren_expr_before_literal.input_outside_parens.int_to_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005802, VkglTestCase_005802_1, VkglTestCase_005802_2);

#define VkglTestCase_005803_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.parenthesized_exp"
#define VkglTestCase_005803_2 "ressions.paren_expr_before_literal.input_outside_parens.int_to_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005803, VkglTestCase_005803_1, VkglTestCase_005803_2);

#define VkglTestCase_005804_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.parenthesized_expr"
#define VkglTestCase_005804_2 "essions.paren_expr_before_literal.input_outside_parens.int_to_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005804, VkglTestCase_005804_1, VkglTestCase_005804_2);

#define VkglTestCase_005805_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.parenthesized_exp"
#define VkglTestCase_005805_2 "ressions.paren_expr_before_literal.input_outside_parens.int_to_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005805, VkglTestCase_005805_1, VkglTestCase_005805_2);

#define VkglTestCase_005806_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.parenthesized_expr"
#define VkglTestCase_005806_2 "essions.paren_expr_before_literal.input_outside_parens.int_to_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005806, VkglTestCase_005806_1, VkglTestCase_005806_2);

#define VkglTestCase_005807_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.parenthesized_exp"
#define VkglTestCase_005807_2 "ressions.paren_expr_before_literal.input_outside_parens.int_to_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005807, VkglTestCase_005807_1, VkglTestCase_005807_2);

#define VkglTestCase_005808_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.parenthesized_expr"
#define VkglTestCase_005808_2 "essions.paren_expr_before_literal.input_outside_parens.int_to_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005808, VkglTestCase_005808_1, VkglTestCase_005808_2);

#define VkglTestCase_005809_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.parenthesized_exp"
#define VkglTestCase_005809_2 "ressions.paren_expr_before_literal.input_outside_parens.int_to_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005809, VkglTestCase_005809_1, VkglTestCase_005809_2);

#define VkglTestCase_005810_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.parenthesized_expr"
#define VkglTestCase_005810_2 "essions.paren_expr_before_literal.input_outside_parens.int_to_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005810, VkglTestCase_005810_1, VkglTestCase_005810_2);

#define VkglTestCase_005811_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.parenthesized_exp"
#define VkglTestCase_005811_2 "ressions.paren_expr_before_literal.input_outside_parens.int_to_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005811, VkglTestCase_005811_1, VkglTestCase_005811_2);

#define VkglTestCase_005812_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.parenthesized_expr"
#define VkglTestCase_005812_2 "essions.paren_expr_before_literal.input_outside_parens.int_to_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005812, VkglTestCase_005812_1, VkglTestCase_005812_2);

#define VkglTestCase_005813_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.parenthesized_exp"
#define VkglTestCase_005813_2 "ressions.paren_expr_before_literal.input_outside_parens.int_to_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005813, VkglTestCase_005813_1, VkglTestCase_005813_2);

#define VkglTestCase_005814_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.parenthesized_expr"
#define VkglTestCase_005814_2 "essions.paren_expr_before_literal.input_outside_parens.int_to_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005814, VkglTestCase_005814_1, VkglTestCase_005814_2);

#define VkglTestCase_005815_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.parenthesized_exp"
#define VkglTestCase_005815_2 "ressions.paren_expr_before_literal.input_outside_parens.int_to_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005815, VkglTestCase_005815_1, VkglTestCase_005815_2);

#define VkglTestCase_005816_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.parenthesized_expr"
#define VkglTestCase_005816_2 "essions.paren_expr_before_literal.input_outside_parens.int_to_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005816, VkglTestCase_005816_1, VkglTestCase_005816_2);

#define VkglTestCase_005817_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.parenthesized_expr"
#define VkglTestCase_005817_2 "essions.paren_expr_before_literal.input_outside_parens.uint_to_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005817, VkglTestCase_005817_1, VkglTestCase_005817_2);

#define VkglTestCase_005818_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.parenthesized_expre"
#define VkglTestCase_005818_2 "ssions.paren_expr_before_literal.input_outside_parens.uint_to_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005818, VkglTestCase_005818_1, VkglTestCase_005818_2);

#define VkglTestCase_005819_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.parenthesized_exp"
#define VkglTestCase_005819_2 "ressions.paren_expr_before_literal.input_outside_parens.uint_to_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005819, VkglTestCase_005819_1, VkglTestCase_005819_2);

#define VkglTestCase_005820_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.parenthesized_expr"
#define VkglTestCase_005820_2 "essions.paren_expr_before_literal.input_outside_parens.uint_to_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005820, VkglTestCase_005820_1, VkglTestCase_005820_2);

#define VkglTestCase_005821_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.parenthesized_exp"
#define VkglTestCase_005821_2 "ressions.paren_expr_before_literal.input_outside_parens.uint_to_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005821, VkglTestCase_005821_1, VkglTestCase_005821_2);

#define VkglTestCase_005822_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.parenthesized_expr"
#define VkglTestCase_005822_2 "essions.paren_expr_before_literal.input_outside_parens.uint_to_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005822, VkglTestCase_005822_1, VkglTestCase_005822_2);

#define VkglTestCase_005823_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.parenthesized_exp"
#define VkglTestCase_005823_2 "ressions.paren_expr_before_literal.input_outside_parens.uint_to_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005823, VkglTestCase_005823_1, VkglTestCase_005823_2);

#define VkglTestCase_005824_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.parenthesized_expr"
#define VkglTestCase_005824_2 "essions.paren_expr_before_literal.input_outside_parens.uint_to_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005824, VkglTestCase_005824_1, VkglTestCase_005824_2);

#define VkglTestCase_005825_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.parenthesized_expr"
#define VkglTestCase_005825_2 "essions.paren_expr_before_literal.input_outside_parens.ivec2_to_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005825, VkglTestCase_005825_1, VkglTestCase_005825_2);

#define VkglTestCase_005826_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.parenthesized_expre"
#define VkglTestCase_005826_2 "ssions.paren_expr_before_literal.input_outside_parens.ivec2_to_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005826, VkglTestCase_005826_1, VkglTestCase_005826_2);

#define VkglTestCase_005827_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.parenthesized_expr"
#define VkglTestCase_005827_2 "essions.paren_expr_before_literal.input_outside_parens.ivec2_to_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005827, VkglTestCase_005827_1, VkglTestCase_005827_2);

#define VkglTestCase_005828_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.parenthesized_expre"
#define VkglTestCase_005828_2 "ssions.paren_expr_before_literal.input_outside_parens.ivec2_to_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005828, VkglTestCase_005828_1, VkglTestCase_005828_2);

#define VkglTestCase_005829_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.parenthesized_expr"
#define VkglTestCase_005829_2 "essions.paren_expr_before_literal.input_outside_parens.uvec2_to_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005829, VkglTestCase_005829_1, VkglTestCase_005829_2);

#define VkglTestCase_005830_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.parenthesized_expre"
#define VkglTestCase_005830_2 "ssions.paren_expr_before_literal.input_outside_parens.uvec2_to_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005830, VkglTestCase_005830_1, VkglTestCase_005830_2);

#define VkglTestCase_005831_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.parenthesized_expr"
#define VkglTestCase_005831_2 "essions.paren_expr_before_literal.input_outside_parens.ivec3_to_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005831, VkglTestCase_005831_1, VkglTestCase_005831_2);

#define VkglTestCase_005832_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.parenthesized_expre"
#define VkglTestCase_005832_2 "ssions.paren_expr_before_literal.input_outside_parens.ivec3_to_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005832, VkglTestCase_005832_1, VkglTestCase_005832_2);

#define VkglTestCase_005833_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.parenthesized_expr"
#define VkglTestCase_005833_2 "essions.paren_expr_before_literal.input_outside_parens.ivec3_to_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005833, VkglTestCase_005833_1, VkglTestCase_005833_2);

#define VkglTestCase_005834_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.parenthesized_expre"
#define VkglTestCase_005834_2 "ssions.paren_expr_before_literal.input_outside_parens.ivec3_to_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005834, VkglTestCase_005834_1, VkglTestCase_005834_2);

#define VkglTestCase_005835_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.parenthesized_expr"
#define VkglTestCase_005835_2 "essions.paren_expr_before_literal.input_outside_parens.uvec3_to_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005835, VkglTestCase_005835_1, VkglTestCase_005835_2);

#define VkglTestCase_005836_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.parenthesized_expre"
#define VkglTestCase_005836_2 "ssions.paren_expr_before_literal.input_outside_parens.uvec3_to_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005836, VkglTestCase_005836_1, VkglTestCase_005836_2);

#define VkglTestCase_005837_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.parenthesized_expr"
#define VkglTestCase_005837_2 "essions.paren_expr_before_literal.input_outside_parens.ivec4_to_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005837, VkglTestCase_005837_1, VkglTestCase_005837_2);

#define VkglTestCase_005838_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.parenthesized_expre"
#define VkglTestCase_005838_2 "ssions.paren_expr_before_literal.input_outside_parens.ivec4_to_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005838, VkglTestCase_005838_1, VkglTestCase_005838_2);

#define VkglTestCase_005839_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.parenthesized_expr"
#define VkglTestCase_005839_2 "essions.paren_expr_before_literal.input_outside_parens.ivec4_to_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005839, VkglTestCase_005839_1, VkglTestCase_005839_2);

#define VkglTestCase_005840_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.parenthesized_expre"
#define VkglTestCase_005840_2 "ssions.paren_expr_before_literal.input_outside_parens.ivec4_to_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005840, VkglTestCase_005840_1, VkglTestCase_005840_2);

#define VkglTestCase_005841_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.parenthesized_expr"
#define VkglTestCase_005841_2 "essions.paren_expr_before_literal.input_outside_parens.uvec4_to_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005841, VkglTestCase_005841_1, VkglTestCase_005841_2);

#define VkglTestCase_005842_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.parenthesized_expre"
#define VkglTestCase_005842_2 "ssions.paren_expr_before_literal.input_outside_parens.uvec4_to_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005842, VkglTestCase_005842_1, VkglTestCase_005842_2);

#define VkglTestCase_006835_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.parenthesized_exp"
#define VkglTestCase_006835_2 "ressions.paren_expr_before_literal.input_outside_parens.int_to_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006835, VkglTestCase_006835_1, VkglTestCase_006835_2);

#define VkglTestCase_006836_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.parenthesized_expr"
#define VkglTestCase_006836_2 "essions.paren_expr_before_literal.input_outside_parens.int_to_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006836, VkglTestCase_006836_1, VkglTestCase_006836_2);

#define VkglTestCase_006837_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.parenthesized_exp"
#define VkglTestCase_006837_2 "ressions.paren_expr_before_literal.input_outside_parens.int_to_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006837, VkglTestCase_006837_1, VkglTestCase_006837_2);

#define VkglTestCase_006838_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.parenthesized_expr"
#define VkglTestCase_006838_2 "essions.paren_expr_before_literal.input_outside_parens.int_to_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006838, VkglTestCase_006838_1, VkglTestCase_006838_2);

#define VkglTestCase_006839_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.parenthesized_exp"
#define VkglTestCase_006839_2 "ressions.paren_expr_before_literal.input_outside_parens.int_to_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006839, VkglTestCase_006839_1, VkglTestCase_006839_2);

#define VkglTestCase_006840_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.parenthesized_expr"
#define VkglTestCase_006840_2 "essions.paren_expr_before_literal.input_outside_parens.int_to_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006840, VkglTestCase_006840_1, VkglTestCase_006840_2);

#define VkglTestCase_006841_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.parenthesized_exp"
#define VkglTestCase_006841_2 "ressions.paren_expr_before_literal.input_outside_parens.int_to_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006841, VkglTestCase_006841_1, VkglTestCase_006841_2);

#define VkglTestCase_006842_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.parenthesized_expr"
#define VkglTestCase_006842_2 "essions.paren_expr_before_literal.input_outside_parens.int_to_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006842, VkglTestCase_006842_1, VkglTestCase_006842_2);

#define VkglTestCase_006843_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.parenthesized_exp"
#define VkglTestCase_006843_2 "ressions.paren_expr_before_literal.input_outside_parens.int_to_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006843, VkglTestCase_006843_1, VkglTestCase_006843_2);

#define VkglTestCase_006844_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.parenthesized_expr"
#define VkglTestCase_006844_2 "essions.paren_expr_before_literal.input_outside_parens.int_to_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006844, VkglTestCase_006844_1, VkglTestCase_006844_2);

#define VkglTestCase_006845_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.parenthesized_exp"
#define VkglTestCase_006845_2 "ressions.paren_expr_before_literal.input_outside_parens.int_to_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006845, VkglTestCase_006845_1, VkglTestCase_006845_2);

#define VkglTestCase_006846_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.parenthesized_expr"
#define VkglTestCase_006846_2 "essions.paren_expr_before_literal.input_outside_parens.int_to_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006846, VkglTestCase_006846_1, VkglTestCase_006846_2);

#define VkglTestCase_006847_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.parenthesized_exp"
#define VkglTestCase_006847_2 "ressions.paren_expr_before_literal.input_outside_parens.int_to_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006847, VkglTestCase_006847_1, VkglTestCase_006847_2);

#define VkglTestCase_006848_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.parenthesized_expr"
#define VkglTestCase_006848_2 "essions.paren_expr_before_literal.input_outside_parens.int_to_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006848, VkglTestCase_006848_1, VkglTestCase_006848_2);

#define VkglTestCase_006849_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.parenthesized_exp"
#define VkglTestCase_006849_2 "ressions.paren_expr_before_literal.input_outside_parens.int_to_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006849, VkglTestCase_006849_1, VkglTestCase_006849_2);

#define VkglTestCase_006850_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.parenthesized_expr"
#define VkglTestCase_006850_2 "essions.paren_expr_before_literal.input_outside_parens.int_to_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006850, VkglTestCase_006850_1, VkglTestCase_006850_2);

#define VkglTestCase_006851_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.parenthesized_expr"
#define VkglTestCase_006851_2 "essions.paren_expr_before_literal.input_outside_parens.uint_to_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006851, VkglTestCase_006851_1, VkglTestCase_006851_2);

#define VkglTestCase_006852_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.parenthesized_expre"
#define VkglTestCase_006852_2 "ssions.paren_expr_before_literal.input_outside_parens.uint_to_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006852, VkglTestCase_006852_1, VkglTestCase_006852_2);

#define VkglTestCase_006853_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.parenthesized_exp"
#define VkglTestCase_006853_2 "ressions.paren_expr_before_literal.input_outside_parens.uint_to_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006853, VkglTestCase_006853_1, VkglTestCase_006853_2);

#define VkglTestCase_006854_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.parenthesized_expr"
#define VkglTestCase_006854_2 "essions.paren_expr_before_literal.input_outside_parens.uint_to_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006854, VkglTestCase_006854_1, VkglTestCase_006854_2);

#define VkglTestCase_006855_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.parenthesized_exp"
#define VkglTestCase_006855_2 "ressions.paren_expr_before_literal.input_outside_parens.uint_to_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006855, VkglTestCase_006855_1, VkglTestCase_006855_2);

#define VkglTestCase_006856_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.parenthesized_expr"
#define VkglTestCase_006856_2 "essions.paren_expr_before_literal.input_outside_parens.uint_to_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006856, VkglTestCase_006856_1, VkglTestCase_006856_2);

#define VkglTestCase_006857_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.parenthesized_exp"
#define VkglTestCase_006857_2 "ressions.paren_expr_before_literal.input_outside_parens.uint_to_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006857, VkglTestCase_006857_1, VkglTestCase_006857_2);

#define VkglTestCase_006858_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.parenthesized_expr"
#define VkglTestCase_006858_2 "essions.paren_expr_before_literal.input_outside_parens.uint_to_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006858, VkglTestCase_006858_1, VkglTestCase_006858_2);

#define VkglTestCase_006859_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.parenthesized_expr"
#define VkglTestCase_006859_2 "essions.paren_expr_before_literal.input_outside_parens.ivec2_to_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006859, VkglTestCase_006859_1, VkglTestCase_006859_2);

#define VkglTestCase_006860_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.parenthesized_expre"
#define VkglTestCase_006860_2 "ssions.paren_expr_before_literal.input_outside_parens.ivec2_to_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006860, VkglTestCase_006860_1, VkglTestCase_006860_2);

#define VkglTestCase_006861_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.parenthesized_expr"
#define VkglTestCase_006861_2 "essions.paren_expr_before_literal.input_outside_parens.ivec2_to_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006861, VkglTestCase_006861_1, VkglTestCase_006861_2);

#define VkglTestCase_006862_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.parenthesized_expre"
#define VkglTestCase_006862_2 "ssions.paren_expr_before_literal.input_outside_parens.ivec2_to_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006862, VkglTestCase_006862_1, VkglTestCase_006862_2);

#define VkglTestCase_006863_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.parenthesized_expr"
#define VkglTestCase_006863_2 "essions.paren_expr_before_literal.input_outside_parens.uvec2_to_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006863, VkglTestCase_006863_1, VkglTestCase_006863_2);

#define VkglTestCase_006864_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.parenthesized_expre"
#define VkglTestCase_006864_2 "ssions.paren_expr_before_literal.input_outside_parens.uvec2_to_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006864, VkglTestCase_006864_1, VkglTestCase_006864_2);

#define VkglTestCase_006865_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.parenthesized_expr"
#define VkglTestCase_006865_2 "essions.paren_expr_before_literal.input_outside_parens.ivec3_to_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006865, VkglTestCase_006865_1, VkglTestCase_006865_2);

#define VkglTestCase_006866_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.parenthesized_expre"
#define VkglTestCase_006866_2 "ssions.paren_expr_before_literal.input_outside_parens.ivec3_to_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006866, VkglTestCase_006866_1, VkglTestCase_006866_2);

#define VkglTestCase_006867_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.parenthesized_expr"
#define VkglTestCase_006867_2 "essions.paren_expr_before_literal.input_outside_parens.ivec3_to_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006867, VkglTestCase_006867_1, VkglTestCase_006867_2);

#define VkglTestCase_006868_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.parenthesized_expre"
#define VkglTestCase_006868_2 "ssions.paren_expr_before_literal.input_outside_parens.ivec3_to_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006868, VkglTestCase_006868_1, VkglTestCase_006868_2);

#define VkglTestCase_006869_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.parenthesized_expr"
#define VkglTestCase_006869_2 "essions.paren_expr_before_literal.input_outside_parens.uvec3_to_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006869, VkglTestCase_006869_1, VkglTestCase_006869_2);

#define VkglTestCase_006870_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.parenthesized_expre"
#define VkglTestCase_006870_2 "ssions.paren_expr_before_literal.input_outside_parens.uvec3_to_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006870, VkglTestCase_006870_1, VkglTestCase_006870_2);

#define VkglTestCase_006871_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.parenthesized_expr"
#define VkglTestCase_006871_2 "essions.paren_expr_before_literal.input_outside_parens.ivec4_to_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006871, VkglTestCase_006871_1, VkglTestCase_006871_2);

#define VkglTestCase_006872_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.parenthesized_expre"
#define VkglTestCase_006872_2 "ssions.paren_expr_before_literal.input_outside_parens.ivec4_to_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006872, VkglTestCase_006872_1, VkglTestCase_006872_2);

#define VkglTestCase_006873_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.parenthesized_expr"
#define VkglTestCase_006873_2 "essions.paren_expr_before_literal.input_outside_parens.ivec4_to_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006873, VkglTestCase_006873_1, VkglTestCase_006873_2);

#define VkglTestCase_006874_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.parenthesized_expre"
#define VkglTestCase_006874_2 "ssions.paren_expr_before_literal.input_outside_parens.ivec4_to_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006874, VkglTestCase_006874_1, VkglTestCase_006874_2);

#define VkglTestCase_006875_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.parenthesized_expr"
#define VkglTestCase_006875_2 "essions.paren_expr_before_literal.input_outside_parens.uvec4_to_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006875, VkglTestCase_006875_1, VkglTestCase_006875_2);

#define VkglTestCase_006876_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.parenthesized_expre"
#define VkglTestCase_006876_2 "ssions.paren_expr_before_literal.input_outside_parens.uvec4_to_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006876, VkglTestCase_006876_1, VkglTestCase_006876_2);
