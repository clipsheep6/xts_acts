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

#define VkglTestCase_005843_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.parenthesized_e"
#define VkglTestCase_005843_2 "xpressions.literal_before_paren_expr.input_in_parens.int_to_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005843, VkglTestCase_005843_1, VkglTestCase_005843_2);

#define VkglTestCase_005844_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.parenthesized_ex"
#define VkglTestCase_005844_2 "pressions.literal_before_paren_expr.input_in_parens.int_to_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005844, VkglTestCase_005844_1, VkglTestCase_005844_2);

#define VkglTestCase_005845_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.parenthesized_"
#define VkglTestCase_005845_2 "expressions.literal_before_paren_expr.input_in_parens.int_to_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005845, VkglTestCase_005845_1, VkglTestCase_005845_2);

#define VkglTestCase_005846_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.parenthesized_e"
#define VkglTestCase_005846_2 "xpressions.literal_before_paren_expr.input_in_parens.int_to_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005846, VkglTestCase_005846_1, VkglTestCase_005846_2);

#define VkglTestCase_005847_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.parenthesized_"
#define VkglTestCase_005847_2 "expressions.literal_before_paren_expr.input_in_parens.int_to_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005847, VkglTestCase_005847_1, VkglTestCase_005847_2);

#define VkglTestCase_005848_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.parenthesized_e"
#define VkglTestCase_005848_2 "xpressions.literal_before_paren_expr.input_in_parens.int_to_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005848, VkglTestCase_005848_1, VkglTestCase_005848_2);

#define VkglTestCase_005849_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.parenthesized_"
#define VkglTestCase_005849_2 "expressions.literal_before_paren_expr.input_in_parens.int_to_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005849, VkglTestCase_005849_1, VkglTestCase_005849_2);

#define VkglTestCase_005850_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.parenthesized_e"
#define VkglTestCase_005850_2 "xpressions.literal_before_paren_expr.input_in_parens.int_to_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005850, VkglTestCase_005850_1, VkglTestCase_005850_2);

#define VkglTestCase_005851_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.parenthesized_"
#define VkglTestCase_005851_2 "expressions.literal_before_paren_expr.input_in_parens.int_to_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005851, VkglTestCase_005851_1, VkglTestCase_005851_2);

#define VkglTestCase_005852_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.parenthesized_e"
#define VkglTestCase_005852_2 "xpressions.literal_before_paren_expr.input_in_parens.int_to_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005852, VkglTestCase_005852_1, VkglTestCase_005852_2);

#define VkglTestCase_005853_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.parenthesized_e"
#define VkglTestCase_005853_2 "xpressions.literal_before_paren_expr.input_in_parens.int_to_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005853, VkglTestCase_005853_1, VkglTestCase_005853_2);

#define VkglTestCase_005854_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.parenthesized_ex"
#define VkglTestCase_005854_2 "pressions.literal_before_paren_expr.input_in_parens.int_to_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005854, VkglTestCase_005854_1, VkglTestCase_005854_2);

#define VkglTestCase_005855_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.parenthesized_e"
#define VkglTestCase_005855_2 "xpressions.literal_before_paren_expr.input_in_parens.int_to_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005855, VkglTestCase_005855_1, VkglTestCase_005855_2);

#define VkglTestCase_005856_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.parenthesized_ex"
#define VkglTestCase_005856_2 "pressions.literal_before_paren_expr.input_in_parens.int_to_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005856, VkglTestCase_005856_1, VkglTestCase_005856_2);

#define VkglTestCase_005857_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.parenthesized_e"
#define VkglTestCase_005857_2 "xpressions.literal_before_paren_expr.input_in_parens.int_to_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005857, VkglTestCase_005857_1, VkglTestCase_005857_2);

#define VkglTestCase_005858_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.parenthesized_ex"
#define VkglTestCase_005858_2 "pressions.literal_before_paren_expr.input_in_parens.int_to_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005858, VkglTestCase_005858_1, VkglTestCase_005858_2);

#define VkglTestCase_005859_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.parenthesized_e"
#define VkglTestCase_005859_2 "xpressions.literal_before_paren_expr.input_in_parens.uint_to_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005859, VkglTestCase_005859_1, VkglTestCase_005859_2);

#define VkglTestCase_005860_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.parenthesized_ex"
#define VkglTestCase_005860_2 "pressions.literal_before_paren_expr.input_in_parens.uint_to_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005860, VkglTestCase_005860_1, VkglTestCase_005860_2);

#define VkglTestCase_005861_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.parenthesized_e"
#define VkglTestCase_005861_2 "xpressions.literal_before_paren_expr.input_in_parens.uint_to_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005861, VkglTestCase_005861_1, VkglTestCase_005861_2);

#define VkglTestCase_005862_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.parenthesized_ex"
#define VkglTestCase_005862_2 "pressions.literal_before_paren_expr.input_in_parens.uint_to_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005862, VkglTestCase_005862_1, VkglTestCase_005862_2);

#define VkglTestCase_005863_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.parenthesized_e"
#define VkglTestCase_005863_2 "xpressions.literal_before_paren_expr.input_in_parens.uint_to_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005863, VkglTestCase_005863_1, VkglTestCase_005863_2);

#define VkglTestCase_005864_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.parenthesized_ex"
#define VkglTestCase_005864_2 "pressions.literal_before_paren_expr.input_in_parens.uint_to_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005864, VkglTestCase_005864_1, VkglTestCase_005864_2);

#define VkglTestCase_005865_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.parenthesized_e"
#define VkglTestCase_005865_2 "xpressions.literal_before_paren_expr.input_in_parens.uint_to_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005865, VkglTestCase_005865_1, VkglTestCase_005865_2);

#define VkglTestCase_005866_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.parenthesized_ex"
#define VkglTestCase_005866_2 "pressions.literal_before_paren_expr.input_in_parens.uint_to_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005866, VkglTestCase_005866_1, VkglTestCase_005866_2);

#define VkglTestCase_005867_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.parenthesized_ex"
#define VkglTestCase_005867_2 "pressions.literal_before_paren_expr.input_in_parens.ivec2_to_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005867, VkglTestCase_005867_1, VkglTestCase_005867_2);

#define VkglTestCase_005868_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.parenthesized_exp"
#define VkglTestCase_005868_2 "ressions.literal_before_paren_expr.input_in_parens.ivec2_to_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005868, VkglTestCase_005868_1, VkglTestCase_005868_2);

#define VkglTestCase_005869_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.parenthesized_e"
#define VkglTestCase_005869_2 "xpressions.literal_before_paren_expr.input_in_parens.ivec2_to_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005869, VkglTestCase_005869_1, VkglTestCase_005869_2);

#define VkglTestCase_005870_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.parenthesized_ex"
#define VkglTestCase_005870_2 "pressions.literal_before_paren_expr.input_in_parens.ivec2_to_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005870, VkglTestCase_005870_1, VkglTestCase_005870_2);

#define VkglTestCase_005871_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.parenthesized_e"
#define VkglTestCase_005871_2 "xpressions.literal_before_paren_expr.input_in_parens.uvec2_to_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005871, VkglTestCase_005871_1, VkglTestCase_005871_2);

#define VkglTestCase_005872_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.parenthesized_ex"
#define VkglTestCase_005872_2 "pressions.literal_before_paren_expr.input_in_parens.uvec2_to_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005872, VkglTestCase_005872_1, VkglTestCase_005872_2);

#define VkglTestCase_005873_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.parenthesized_ex"
#define VkglTestCase_005873_2 "pressions.literal_before_paren_expr.input_in_parens.ivec3_to_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005873, VkglTestCase_005873_1, VkglTestCase_005873_2);

#define VkglTestCase_005874_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.parenthesized_exp"
#define VkglTestCase_005874_2 "ressions.literal_before_paren_expr.input_in_parens.ivec3_to_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005874, VkglTestCase_005874_1, VkglTestCase_005874_2);

#define VkglTestCase_005875_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.parenthesized_e"
#define VkglTestCase_005875_2 "xpressions.literal_before_paren_expr.input_in_parens.ivec3_to_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005875, VkglTestCase_005875_1, VkglTestCase_005875_2);

#define VkglTestCase_005876_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.parenthesized_ex"
#define VkglTestCase_005876_2 "pressions.literal_before_paren_expr.input_in_parens.ivec3_to_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005876, VkglTestCase_005876_1, VkglTestCase_005876_2);

#define VkglTestCase_005877_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.parenthesized_e"
#define VkglTestCase_005877_2 "xpressions.literal_before_paren_expr.input_in_parens.uvec3_to_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005877, VkglTestCase_005877_1, VkglTestCase_005877_2);

#define VkglTestCase_005878_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.parenthesized_ex"
#define VkglTestCase_005878_2 "pressions.literal_before_paren_expr.input_in_parens.uvec3_to_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005878, VkglTestCase_005878_1, VkglTestCase_005878_2);

#define VkglTestCase_005879_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.parenthesized_ex"
#define VkglTestCase_005879_2 "pressions.literal_before_paren_expr.input_in_parens.ivec4_to_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005879, VkglTestCase_005879_1, VkglTestCase_005879_2);

#define VkglTestCase_005880_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.parenthesized_exp"
#define VkglTestCase_005880_2 "ressions.literal_before_paren_expr.input_in_parens.ivec4_to_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005880, VkglTestCase_005880_1, VkglTestCase_005880_2);

#define VkglTestCase_005881_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.parenthesized_e"
#define VkglTestCase_005881_2 "xpressions.literal_before_paren_expr.input_in_parens.ivec4_to_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005881, VkglTestCase_005881_1, VkglTestCase_005881_2);

#define VkglTestCase_005882_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.parenthesized_ex"
#define VkglTestCase_005882_2 "pressions.literal_before_paren_expr.input_in_parens.ivec4_to_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005882, VkglTestCase_005882_1, VkglTestCase_005882_2);

#define VkglTestCase_005883_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.parenthesized_e"
#define VkglTestCase_005883_2 "xpressions.literal_before_paren_expr.input_in_parens.uvec4_to_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005883, VkglTestCase_005883_1, VkglTestCase_005883_2);

#define VkglTestCase_005884_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.parenthesized_ex"
#define VkglTestCase_005884_2 "pressions.literal_before_paren_expr.input_in_parens.uvec4_to_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005884, VkglTestCase_005884_1, VkglTestCase_005884_2);

#define VkglTestCase_006877_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.parenthesized_e"
#define VkglTestCase_006877_2 "xpressions.literal_before_paren_expr.input_in_parens.int_to_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006877, VkglTestCase_006877_1, VkglTestCase_006877_2);

#define VkglTestCase_006878_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.parenthesized_ex"
#define VkglTestCase_006878_2 "pressions.literal_before_paren_expr.input_in_parens.int_to_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006878, VkglTestCase_006878_1, VkglTestCase_006878_2);

#define VkglTestCase_006879_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.parenthesized_"
#define VkglTestCase_006879_2 "expressions.literal_before_paren_expr.input_in_parens.int_to_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006879, VkglTestCase_006879_1, VkglTestCase_006879_2);

#define VkglTestCase_006880_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.parenthesized_e"
#define VkglTestCase_006880_2 "xpressions.literal_before_paren_expr.input_in_parens.int_to_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006880, VkglTestCase_006880_1, VkglTestCase_006880_2);

#define VkglTestCase_006881_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.parenthesized_"
#define VkglTestCase_006881_2 "expressions.literal_before_paren_expr.input_in_parens.int_to_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006881, VkglTestCase_006881_1, VkglTestCase_006881_2);

#define VkglTestCase_006882_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.parenthesized_e"
#define VkglTestCase_006882_2 "xpressions.literal_before_paren_expr.input_in_parens.int_to_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006882, VkglTestCase_006882_1, VkglTestCase_006882_2);

#define VkglTestCase_006883_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.parenthesized_"
#define VkglTestCase_006883_2 "expressions.literal_before_paren_expr.input_in_parens.int_to_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006883, VkglTestCase_006883_1, VkglTestCase_006883_2);

#define VkglTestCase_006884_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.parenthesized_e"
#define VkglTestCase_006884_2 "xpressions.literal_before_paren_expr.input_in_parens.int_to_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006884, VkglTestCase_006884_1, VkglTestCase_006884_2);

#define VkglTestCase_006885_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.parenthesized_"
#define VkglTestCase_006885_2 "expressions.literal_before_paren_expr.input_in_parens.int_to_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006885, VkglTestCase_006885_1, VkglTestCase_006885_2);

#define VkglTestCase_006886_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.parenthesized_e"
#define VkglTestCase_006886_2 "xpressions.literal_before_paren_expr.input_in_parens.int_to_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006886, VkglTestCase_006886_1, VkglTestCase_006886_2);

#define VkglTestCase_006887_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.parenthesized_e"
#define VkglTestCase_006887_2 "xpressions.literal_before_paren_expr.input_in_parens.int_to_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006887, VkglTestCase_006887_1, VkglTestCase_006887_2);

#define VkglTestCase_006888_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.parenthesized_ex"
#define VkglTestCase_006888_2 "pressions.literal_before_paren_expr.input_in_parens.int_to_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006888, VkglTestCase_006888_1, VkglTestCase_006888_2);

#define VkglTestCase_006889_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.parenthesized_e"
#define VkglTestCase_006889_2 "xpressions.literal_before_paren_expr.input_in_parens.int_to_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006889, VkglTestCase_006889_1, VkglTestCase_006889_2);

#define VkglTestCase_006890_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.parenthesized_ex"
#define VkglTestCase_006890_2 "pressions.literal_before_paren_expr.input_in_parens.int_to_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006890, VkglTestCase_006890_1, VkglTestCase_006890_2);

#define VkglTestCase_006891_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.parenthesized_e"
#define VkglTestCase_006891_2 "xpressions.literal_before_paren_expr.input_in_parens.int_to_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006891, VkglTestCase_006891_1, VkglTestCase_006891_2);

#define VkglTestCase_006892_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.parenthesized_ex"
#define VkglTestCase_006892_2 "pressions.literal_before_paren_expr.input_in_parens.int_to_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006892, VkglTestCase_006892_1, VkglTestCase_006892_2);

#define VkglTestCase_006893_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.parenthesized_e"
#define VkglTestCase_006893_2 "xpressions.literal_before_paren_expr.input_in_parens.uint_to_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006893, VkglTestCase_006893_1, VkglTestCase_006893_2);

#define VkglTestCase_006894_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.parenthesized_ex"
#define VkglTestCase_006894_2 "pressions.literal_before_paren_expr.input_in_parens.uint_to_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006894, VkglTestCase_006894_1, VkglTestCase_006894_2);

#define VkglTestCase_006895_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.parenthesized_e"
#define VkglTestCase_006895_2 "xpressions.literal_before_paren_expr.input_in_parens.uint_to_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006895, VkglTestCase_006895_1, VkglTestCase_006895_2);

#define VkglTestCase_006896_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.parenthesized_ex"
#define VkglTestCase_006896_2 "pressions.literal_before_paren_expr.input_in_parens.uint_to_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006896, VkglTestCase_006896_1, VkglTestCase_006896_2);

#define VkglTestCase_006897_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.parenthesized_e"
#define VkglTestCase_006897_2 "xpressions.literal_before_paren_expr.input_in_parens.uint_to_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006897, VkglTestCase_006897_1, VkglTestCase_006897_2);

#define VkglTestCase_006898_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.parenthesized_ex"
#define VkglTestCase_006898_2 "pressions.literal_before_paren_expr.input_in_parens.uint_to_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006898, VkglTestCase_006898_1, VkglTestCase_006898_2);

#define VkglTestCase_006899_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.parenthesized_e"
#define VkglTestCase_006899_2 "xpressions.literal_before_paren_expr.input_in_parens.uint_to_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006899, VkglTestCase_006899_1, VkglTestCase_006899_2);

#define VkglTestCase_006900_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.parenthesized_ex"
#define VkglTestCase_006900_2 "pressions.literal_before_paren_expr.input_in_parens.uint_to_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006900, VkglTestCase_006900_1, VkglTestCase_006900_2);

#define VkglTestCase_006901_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.parenthesized_ex"
#define VkglTestCase_006901_2 "pressions.literal_before_paren_expr.input_in_parens.ivec2_to_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006901, VkglTestCase_006901_1, VkglTestCase_006901_2);

#define VkglTestCase_006902_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.parenthesized_exp"
#define VkglTestCase_006902_2 "ressions.literal_before_paren_expr.input_in_parens.ivec2_to_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006902, VkglTestCase_006902_1, VkglTestCase_006902_2);

#define VkglTestCase_006903_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.parenthesized_e"
#define VkglTestCase_006903_2 "xpressions.literal_before_paren_expr.input_in_parens.ivec2_to_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006903, VkglTestCase_006903_1, VkglTestCase_006903_2);

#define VkglTestCase_006904_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.parenthesized_ex"
#define VkglTestCase_006904_2 "pressions.literal_before_paren_expr.input_in_parens.ivec2_to_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006904, VkglTestCase_006904_1, VkglTestCase_006904_2);

#define VkglTestCase_006905_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.parenthesized_e"
#define VkglTestCase_006905_2 "xpressions.literal_before_paren_expr.input_in_parens.uvec2_to_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006905, VkglTestCase_006905_1, VkglTestCase_006905_2);

#define VkglTestCase_006906_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.parenthesized_ex"
#define VkglTestCase_006906_2 "pressions.literal_before_paren_expr.input_in_parens.uvec2_to_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006906, VkglTestCase_006906_1, VkglTestCase_006906_2);

#define VkglTestCase_006907_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.parenthesized_ex"
#define VkglTestCase_006907_2 "pressions.literal_before_paren_expr.input_in_parens.ivec3_to_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006907, VkglTestCase_006907_1, VkglTestCase_006907_2);

#define VkglTestCase_006908_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.parenthesized_exp"
#define VkglTestCase_006908_2 "ressions.literal_before_paren_expr.input_in_parens.ivec3_to_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006908, VkglTestCase_006908_1, VkglTestCase_006908_2);

#define VkglTestCase_006909_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.parenthesized_e"
#define VkglTestCase_006909_2 "xpressions.literal_before_paren_expr.input_in_parens.ivec3_to_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006909, VkglTestCase_006909_1, VkglTestCase_006909_2);

#define VkglTestCase_006910_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.parenthesized_ex"
#define VkglTestCase_006910_2 "pressions.literal_before_paren_expr.input_in_parens.ivec3_to_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006910, VkglTestCase_006910_1, VkglTestCase_006910_2);

#define VkglTestCase_006911_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.parenthesized_e"
#define VkglTestCase_006911_2 "xpressions.literal_before_paren_expr.input_in_parens.uvec3_to_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006911, VkglTestCase_006911_1, VkglTestCase_006911_2);

#define VkglTestCase_006912_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.parenthesized_ex"
#define VkglTestCase_006912_2 "pressions.literal_before_paren_expr.input_in_parens.uvec3_to_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006912, VkglTestCase_006912_1, VkglTestCase_006912_2);

#define VkglTestCase_006913_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.parenthesized_ex"
#define VkglTestCase_006913_2 "pressions.literal_before_paren_expr.input_in_parens.ivec4_to_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006913, VkglTestCase_006913_1, VkglTestCase_006913_2);

#define VkglTestCase_006914_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.parenthesized_exp"
#define VkglTestCase_006914_2 "ressions.literal_before_paren_expr.input_in_parens.ivec4_to_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006914, VkglTestCase_006914_1, VkglTestCase_006914_2);

#define VkglTestCase_006915_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.parenthesized_e"
#define VkglTestCase_006915_2 "xpressions.literal_before_paren_expr.input_in_parens.ivec4_to_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006915, VkglTestCase_006915_1, VkglTestCase_006915_2);

#define VkglTestCase_006916_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.parenthesized_ex"
#define VkglTestCase_006916_2 "pressions.literal_before_paren_expr.input_in_parens.ivec4_to_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006916, VkglTestCase_006916_1, VkglTestCase_006916_2);

#define VkglTestCase_006917_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.parenthesized_e"
#define VkglTestCase_006917_2 "xpressions.literal_before_paren_expr.input_in_parens.uvec4_to_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006917, VkglTestCase_006917_1, VkglTestCase_006917_2);

#define VkglTestCase_006918_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.parenthesized_ex"
#define VkglTestCase_006918_2 "pressions.literal_before_paren_expr.input_in_parens.uvec4_to_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006918, VkglTestCase_006918_1, VkglTestCase_006918_2);
