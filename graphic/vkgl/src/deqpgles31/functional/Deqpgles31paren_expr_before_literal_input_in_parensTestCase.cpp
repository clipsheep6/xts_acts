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

#define VkglTestCase_005759_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.parenthesized_e"
#define VkglTestCase_005759_2 "xpressions.paren_expr_before_literal.input_in_parens.int_to_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005759, VkglTestCase_005759_1, VkglTestCase_005759_2);

#define VkglTestCase_005760_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.parenthesized_ex"
#define VkglTestCase_005760_2 "pressions.paren_expr_before_literal.input_in_parens.int_to_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005760, VkglTestCase_005760_1, VkglTestCase_005760_2);

#define VkglTestCase_005761_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.parenthesized_"
#define VkglTestCase_005761_2 "expressions.paren_expr_before_literal.input_in_parens.int_to_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005761, VkglTestCase_005761_1, VkglTestCase_005761_2);

#define VkglTestCase_005762_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.parenthesized_e"
#define VkglTestCase_005762_2 "xpressions.paren_expr_before_literal.input_in_parens.int_to_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005762, VkglTestCase_005762_1, VkglTestCase_005762_2);

#define VkglTestCase_005763_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.parenthesized_"
#define VkglTestCase_005763_2 "expressions.paren_expr_before_literal.input_in_parens.int_to_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005763, VkglTestCase_005763_1, VkglTestCase_005763_2);

#define VkglTestCase_005764_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.parenthesized_e"
#define VkglTestCase_005764_2 "xpressions.paren_expr_before_literal.input_in_parens.int_to_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005764, VkglTestCase_005764_1, VkglTestCase_005764_2);

#define VkglTestCase_005765_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.parenthesized_"
#define VkglTestCase_005765_2 "expressions.paren_expr_before_literal.input_in_parens.int_to_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005765, VkglTestCase_005765_1, VkglTestCase_005765_2);

#define VkglTestCase_005766_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.parenthesized_e"
#define VkglTestCase_005766_2 "xpressions.paren_expr_before_literal.input_in_parens.int_to_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005766, VkglTestCase_005766_1, VkglTestCase_005766_2);

#define VkglTestCase_005767_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.parenthesized_"
#define VkglTestCase_005767_2 "expressions.paren_expr_before_literal.input_in_parens.int_to_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005767, VkglTestCase_005767_1, VkglTestCase_005767_2);

#define VkglTestCase_005768_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.parenthesized_e"
#define VkglTestCase_005768_2 "xpressions.paren_expr_before_literal.input_in_parens.int_to_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005768, VkglTestCase_005768_1, VkglTestCase_005768_2);

#define VkglTestCase_005769_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.parenthesized_e"
#define VkglTestCase_005769_2 "xpressions.paren_expr_before_literal.input_in_parens.int_to_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005769, VkglTestCase_005769_1, VkglTestCase_005769_2);

#define VkglTestCase_005770_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.parenthesized_ex"
#define VkglTestCase_005770_2 "pressions.paren_expr_before_literal.input_in_parens.int_to_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005770, VkglTestCase_005770_1, VkglTestCase_005770_2);

#define VkglTestCase_005771_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.parenthesized_e"
#define VkglTestCase_005771_2 "xpressions.paren_expr_before_literal.input_in_parens.int_to_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005771, VkglTestCase_005771_1, VkglTestCase_005771_2);

#define VkglTestCase_005772_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.parenthesized_ex"
#define VkglTestCase_005772_2 "pressions.paren_expr_before_literal.input_in_parens.int_to_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005772, VkglTestCase_005772_1, VkglTestCase_005772_2);

#define VkglTestCase_005773_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.parenthesized_e"
#define VkglTestCase_005773_2 "xpressions.paren_expr_before_literal.input_in_parens.int_to_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005773, VkglTestCase_005773_1, VkglTestCase_005773_2);

#define VkglTestCase_005774_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.parenthesized_ex"
#define VkglTestCase_005774_2 "pressions.paren_expr_before_literal.input_in_parens.int_to_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005774, VkglTestCase_005774_1, VkglTestCase_005774_2);

#define VkglTestCase_005775_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.parenthesized_e"
#define VkglTestCase_005775_2 "xpressions.paren_expr_before_literal.input_in_parens.uint_to_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005775, VkglTestCase_005775_1, VkglTestCase_005775_2);

#define VkglTestCase_005776_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.parenthesized_ex"
#define VkglTestCase_005776_2 "pressions.paren_expr_before_literal.input_in_parens.uint_to_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005776, VkglTestCase_005776_1, VkglTestCase_005776_2);

#define VkglTestCase_005777_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.parenthesized_e"
#define VkglTestCase_005777_2 "xpressions.paren_expr_before_literal.input_in_parens.uint_to_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005777, VkglTestCase_005777_1, VkglTestCase_005777_2);

#define VkglTestCase_005778_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.parenthesized_ex"
#define VkglTestCase_005778_2 "pressions.paren_expr_before_literal.input_in_parens.uint_to_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005778, VkglTestCase_005778_1, VkglTestCase_005778_2);

#define VkglTestCase_005779_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.parenthesized_e"
#define VkglTestCase_005779_2 "xpressions.paren_expr_before_literal.input_in_parens.uint_to_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005779, VkglTestCase_005779_1, VkglTestCase_005779_2);

#define VkglTestCase_005780_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.parenthesized_ex"
#define VkglTestCase_005780_2 "pressions.paren_expr_before_literal.input_in_parens.uint_to_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005780, VkglTestCase_005780_1, VkglTestCase_005780_2);

#define VkglTestCase_005781_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.parenthesized_e"
#define VkglTestCase_005781_2 "xpressions.paren_expr_before_literal.input_in_parens.uint_to_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005781, VkglTestCase_005781_1, VkglTestCase_005781_2);

#define VkglTestCase_005782_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.parenthesized_ex"
#define VkglTestCase_005782_2 "pressions.paren_expr_before_literal.input_in_parens.uint_to_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005782, VkglTestCase_005782_1, VkglTestCase_005782_2);

#define VkglTestCase_005783_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.parenthesized_ex"
#define VkglTestCase_005783_2 "pressions.paren_expr_before_literal.input_in_parens.ivec2_to_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005783, VkglTestCase_005783_1, VkglTestCase_005783_2);

#define VkglTestCase_005784_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.parenthesized_exp"
#define VkglTestCase_005784_2 "ressions.paren_expr_before_literal.input_in_parens.ivec2_to_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005784, VkglTestCase_005784_1, VkglTestCase_005784_2);

#define VkglTestCase_005785_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.parenthesized_e"
#define VkglTestCase_005785_2 "xpressions.paren_expr_before_literal.input_in_parens.ivec2_to_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005785, VkglTestCase_005785_1, VkglTestCase_005785_2);

#define VkglTestCase_005786_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.parenthesized_ex"
#define VkglTestCase_005786_2 "pressions.paren_expr_before_literal.input_in_parens.ivec2_to_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005786, VkglTestCase_005786_1, VkglTestCase_005786_2);

#define VkglTestCase_005787_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.parenthesized_e"
#define VkglTestCase_005787_2 "xpressions.paren_expr_before_literal.input_in_parens.uvec2_to_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005787, VkglTestCase_005787_1, VkglTestCase_005787_2);

#define VkglTestCase_005788_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.parenthesized_ex"
#define VkglTestCase_005788_2 "pressions.paren_expr_before_literal.input_in_parens.uvec2_to_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005788, VkglTestCase_005788_1, VkglTestCase_005788_2);

#define VkglTestCase_005789_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.parenthesized_ex"
#define VkglTestCase_005789_2 "pressions.paren_expr_before_literal.input_in_parens.ivec3_to_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005789, VkglTestCase_005789_1, VkglTestCase_005789_2);

#define VkglTestCase_005790_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.parenthesized_exp"
#define VkglTestCase_005790_2 "ressions.paren_expr_before_literal.input_in_parens.ivec3_to_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005790, VkglTestCase_005790_1, VkglTestCase_005790_2);

#define VkglTestCase_005791_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.parenthesized_e"
#define VkglTestCase_005791_2 "xpressions.paren_expr_before_literal.input_in_parens.ivec3_to_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005791, VkglTestCase_005791_1, VkglTestCase_005791_2);

#define VkglTestCase_005792_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.parenthesized_ex"
#define VkglTestCase_005792_2 "pressions.paren_expr_before_literal.input_in_parens.ivec3_to_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005792, VkglTestCase_005792_1, VkglTestCase_005792_2);

#define VkglTestCase_005793_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.parenthesized_e"
#define VkglTestCase_005793_2 "xpressions.paren_expr_before_literal.input_in_parens.uvec3_to_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005793, VkglTestCase_005793_1, VkglTestCase_005793_2);

#define VkglTestCase_005794_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.parenthesized_ex"
#define VkglTestCase_005794_2 "pressions.paren_expr_before_literal.input_in_parens.uvec3_to_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005794, VkglTestCase_005794_1, VkglTestCase_005794_2);

#define VkglTestCase_005795_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.parenthesized_ex"
#define VkglTestCase_005795_2 "pressions.paren_expr_before_literal.input_in_parens.ivec4_to_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005795, VkglTestCase_005795_1, VkglTestCase_005795_2);

#define VkglTestCase_005796_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.parenthesized_exp"
#define VkglTestCase_005796_2 "ressions.paren_expr_before_literal.input_in_parens.ivec4_to_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005796, VkglTestCase_005796_1, VkglTestCase_005796_2);

#define VkglTestCase_005797_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.parenthesized_e"
#define VkglTestCase_005797_2 "xpressions.paren_expr_before_literal.input_in_parens.ivec4_to_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005797, VkglTestCase_005797_1, VkglTestCase_005797_2);

#define VkglTestCase_005798_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.parenthesized_ex"
#define VkglTestCase_005798_2 "pressions.paren_expr_before_literal.input_in_parens.ivec4_to_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005798, VkglTestCase_005798_1, VkglTestCase_005798_2);

#define VkglTestCase_005799_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.parenthesized_e"
#define VkglTestCase_005799_2 "xpressions.paren_expr_before_literal.input_in_parens.uvec4_to_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005799, VkglTestCase_005799_1, VkglTestCase_005799_2);

#define VkglTestCase_005800_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.parenthesized_ex"
#define VkglTestCase_005800_2 "pressions.paren_expr_before_literal.input_in_parens.uvec4_to_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005800, VkglTestCase_005800_1, VkglTestCase_005800_2);

#define VkglTestCase_006793_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.parenthesized_e"
#define VkglTestCase_006793_2 "xpressions.paren_expr_before_literal.input_in_parens.int_to_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006793, VkglTestCase_006793_1, VkglTestCase_006793_2);

#define VkglTestCase_006794_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.parenthesized_ex"
#define VkglTestCase_006794_2 "pressions.paren_expr_before_literal.input_in_parens.int_to_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006794, VkglTestCase_006794_1, VkglTestCase_006794_2);

#define VkglTestCase_006795_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.parenthesized_"
#define VkglTestCase_006795_2 "expressions.paren_expr_before_literal.input_in_parens.int_to_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006795, VkglTestCase_006795_1, VkglTestCase_006795_2);

#define VkglTestCase_006796_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.parenthesized_e"
#define VkglTestCase_006796_2 "xpressions.paren_expr_before_literal.input_in_parens.int_to_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006796, VkglTestCase_006796_1, VkglTestCase_006796_2);

#define VkglTestCase_006797_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.parenthesized_"
#define VkglTestCase_006797_2 "expressions.paren_expr_before_literal.input_in_parens.int_to_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006797, VkglTestCase_006797_1, VkglTestCase_006797_2);

#define VkglTestCase_006798_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.parenthesized_e"
#define VkglTestCase_006798_2 "xpressions.paren_expr_before_literal.input_in_parens.int_to_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006798, VkglTestCase_006798_1, VkglTestCase_006798_2);

#define VkglTestCase_006799_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.parenthesized_"
#define VkglTestCase_006799_2 "expressions.paren_expr_before_literal.input_in_parens.int_to_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006799, VkglTestCase_006799_1, VkglTestCase_006799_2);

#define VkglTestCase_006800_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.parenthesized_e"
#define VkglTestCase_006800_2 "xpressions.paren_expr_before_literal.input_in_parens.int_to_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006800, VkglTestCase_006800_1, VkglTestCase_006800_2);

#define VkglTestCase_006801_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.parenthesized_"
#define VkglTestCase_006801_2 "expressions.paren_expr_before_literal.input_in_parens.int_to_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006801, VkglTestCase_006801_1, VkglTestCase_006801_2);

#define VkglTestCase_006802_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.parenthesized_e"
#define VkglTestCase_006802_2 "xpressions.paren_expr_before_literal.input_in_parens.int_to_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006802, VkglTestCase_006802_1, VkglTestCase_006802_2);

#define VkglTestCase_006803_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.parenthesized_e"
#define VkglTestCase_006803_2 "xpressions.paren_expr_before_literal.input_in_parens.int_to_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006803, VkglTestCase_006803_1, VkglTestCase_006803_2);

#define VkglTestCase_006804_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.parenthesized_ex"
#define VkglTestCase_006804_2 "pressions.paren_expr_before_literal.input_in_parens.int_to_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006804, VkglTestCase_006804_1, VkglTestCase_006804_2);

#define VkglTestCase_006805_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.parenthesized_e"
#define VkglTestCase_006805_2 "xpressions.paren_expr_before_literal.input_in_parens.int_to_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006805, VkglTestCase_006805_1, VkglTestCase_006805_2);

#define VkglTestCase_006806_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.parenthesized_ex"
#define VkglTestCase_006806_2 "pressions.paren_expr_before_literal.input_in_parens.int_to_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006806, VkglTestCase_006806_1, VkglTestCase_006806_2);

#define VkglTestCase_006807_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.parenthesized_e"
#define VkglTestCase_006807_2 "xpressions.paren_expr_before_literal.input_in_parens.int_to_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006807, VkglTestCase_006807_1, VkglTestCase_006807_2);

#define VkglTestCase_006808_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.parenthesized_ex"
#define VkglTestCase_006808_2 "pressions.paren_expr_before_literal.input_in_parens.int_to_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006808, VkglTestCase_006808_1, VkglTestCase_006808_2);

#define VkglTestCase_006809_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.parenthesized_e"
#define VkglTestCase_006809_2 "xpressions.paren_expr_before_literal.input_in_parens.uint_to_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006809, VkglTestCase_006809_1, VkglTestCase_006809_2);

#define VkglTestCase_006810_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.parenthesized_ex"
#define VkglTestCase_006810_2 "pressions.paren_expr_before_literal.input_in_parens.uint_to_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006810, VkglTestCase_006810_1, VkglTestCase_006810_2);

#define VkglTestCase_006811_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.parenthesized_e"
#define VkglTestCase_006811_2 "xpressions.paren_expr_before_literal.input_in_parens.uint_to_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006811, VkglTestCase_006811_1, VkglTestCase_006811_2);

#define VkglTestCase_006812_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.parenthesized_ex"
#define VkglTestCase_006812_2 "pressions.paren_expr_before_literal.input_in_parens.uint_to_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006812, VkglTestCase_006812_1, VkglTestCase_006812_2);

#define VkglTestCase_006813_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.parenthesized_e"
#define VkglTestCase_006813_2 "xpressions.paren_expr_before_literal.input_in_parens.uint_to_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006813, VkglTestCase_006813_1, VkglTestCase_006813_2);

#define VkglTestCase_006814_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.parenthesized_ex"
#define VkglTestCase_006814_2 "pressions.paren_expr_before_literal.input_in_parens.uint_to_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006814, VkglTestCase_006814_1, VkglTestCase_006814_2);

#define VkglTestCase_006815_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.parenthesized_e"
#define VkglTestCase_006815_2 "xpressions.paren_expr_before_literal.input_in_parens.uint_to_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006815, VkglTestCase_006815_1, VkglTestCase_006815_2);

#define VkglTestCase_006816_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.parenthesized_ex"
#define VkglTestCase_006816_2 "pressions.paren_expr_before_literal.input_in_parens.uint_to_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006816, VkglTestCase_006816_1, VkglTestCase_006816_2);

#define VkglTestCase_006817_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.parenthesized_ex"
#define VkglTestCase_006817_2 "pressions.paren_expr_before_literal.input_in_parens.ivec2_to_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006817, VkglTestCase_006817_1, VkglTestCase_006817_2);

#define VkglTestCase_006818_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.parenthesized_exp"
#define VkglTestCase_006818_2 "ressions.paren_expr_before_literal.input_in_parens.ivec2_to_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006818, VkglTestCase_006818_1, VkglTestCase_006818_2);

#define VkglTestCase_006819_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.parenthesized_e"
#define VkglTestCase_006819_2 "xpressions.paren_expr_before_literal.input_in_parens.ivec2_to_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006819, VkglTestCase_006819_1, VkglTestCase_006819_2);

#define VkglTestCase_006820_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.parenthesized_ex"
#define VkglTestCase_006820_2 "pressions.paren_expr_before_literal.input_in_parens.ivec2_to_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006820, VkglTestCase_006820_1, VkglTestCase_006820_2);

#define VkglTestCase_006821_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.parenthesized_e"
#define VkglTestCase_006821_2 "xpressions.paren_expr_before_literal.input_in_parens.uvec2_to_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006821, VkglTestCase_006821_1, VkglTestCase_006821_2);

#define VkglTestCase_006822_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.parenthesized_ex"
#define VkglTestCase_006822_2 "pressions.paren_expr_before_literal.input_in_parens.uvec2_to_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006822, VkglTestCase_006822_1, VkglTestCase_006822_2);

#define VkglTestCase_006823_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.parenthesized_ex"
#define VkglTestCase_006823_2 "pressions.paren_expr_before_literal.input_in_parens.ivec3_to_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006823, VkglTestCase_006823_1, VkglTestCase_006823_2);

#define VkglTestCase_006824_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.parenthesized_exp"
#define VkglTestCase_006824_2 "ressions.paren_expr_before_literal.input_in_parens.ivec3_to_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006824, VkglTestCase_006824_1, VkglTestCase_006824_2);

#define VkglTestCase_006825_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.parenthesized_e"
#define VkglTestCase_006825_2 "xpressions.paren_expr_before_literal.input_in_parens.ivec3_to_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006825, VkglTestCase_006825_1, VkglTestCase_006825_2);

#define VkglTestCase_006826_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.parenthesized_ex"
#define VkglTestCase_006826_2 "pressions.paren_expr_before_literal.input_in_parens.ivec3_to_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006826, VkglTestCase_006826_1, VkglTestCase_006826_2);

#define VkglTestCase_006827_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.parenthesized_e"
#define VkglTestCase_006827_2 "xpressions.paren_expr_before_literal.input_in_parens.uvec3_to_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006827, VkglTestCase_006827_1, VkglTestCase_006827_2);

#define VkglTestCase_006828_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.parenthesized_ex"
#define VkglTestCase_006828_2 "pressions.paren_expr_before_literal.input_in_parens.uvec3_to_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006828, VkglTestCase_006828_1, VkglTestCase_006828_2);

#define VkglTestCase_006829_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.parenthesized_ex"
#define VkglTestCase_006829_2 "pressions.paren_expr_before_literal.input_in_parens.ivec4_to_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006829, VkglTestCase_006829_1, VkglTestCase_006829_2);

#define VkglTestCase_006830_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.parenthesized_exp"
#define VkglTestCase_006830_2 "ressions.paren_expr_before_literal.input_in_parens.ivec4_to_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006830, VkglTestCase_006830_1, VkglTestCase_006830_2);

#define VkglTestCase_006831_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.parenthesized_e"
#define VkglTestCase_006831_2 "xpressions.paren_expr_before_literal.input_in_parens.ivec4_to_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006831, VkglTestCase_006831_1, VkglTestCase_006831_2);

#define VkglTestCase_006832_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.parenthesized_ex"
#define VkglTestCase_006832_2 "pressions.paren_expr_before_literal.input_in_parens.ivec4_to_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006832, VkglTestCase_006832_1, VkglTestCase_006832_2);

#define VkglTestCase_006833_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.parenthesized_e"
#define VkglTestCase_006833_2 "xpressions.paren_expr_before_literal.input_in_parens.uvec4_to_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006833, VkglTestCase_006833_1, VkglTestCase_006833_2);

#define VkglTestCase_006834_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.parenthesized_ex"
#define VkglTestCase_006834_2 "pressions.paren_expr_before_literal.input_in_parens.uvec4_to_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006834, VkglTestCase_006834_1, VkglTestCase_006834_2);
