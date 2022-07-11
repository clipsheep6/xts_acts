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

#define VkglTestCase_005885_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.parenthesized_exp"
#define VkglTestCase_005885_2 "ressions.literal_before_paren_expr.input_outside_parens.int_to_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005885, VkglTestCase_005885_1, VkglTestCase_005885_2);

#define VkglTestCase_005886_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.parenthesized_expr"
#define VkglTestCase_005886_2 "essions.literal_before_paren_expr.input_outside_parens.int_to_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005886, VkglTestCase_005886_1, VkglTestCase_005886_2);

#define VkglTestCase_005887_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.parenthesized_exp"
#define VkglTestCase_005887_2 "ressions.literal_before_paren_expr.input_outside_parens.int_to_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005887, VkglTestCase_005887_1, VkglTestCase_005887_2);

#define VkglTestCase_005888_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.parenthesized_expr"
#define VkglTestCase_005888_2 "essions.literal_before_paren_expr.input_outside_parens.int_to_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005888, VkglTestCase_005888_1, VkglTestCase_005888_2);

#define VkglTestCase_005889_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.parenthesized_exp"
#define VkglTestCase_005889_2 "ressions.literal_before_paren_expr.input_outside_parens.int_to_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005889, VkglTestCase_005889_1, VkglTestCase_005889_2);

#define VkglTestCase_005890_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.parenthesized_expr"
#define VkglTestCase_005890_2 "essions.literal_before_paren_expr.input_outside_parens.int_to_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005890, VkglTestCase_005890_1, VkglTestCase_005890_2);

#define VkglTestCase_005891_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.parenthesized_exp"
#define VkglTestCase_005891_2 "ressions.literal_before_paren_expr.input_outside_parens.int_to_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005891, VkglTestCase_005891_1, VkglTestCase_005891_2);

#define VkglTestCase_005892_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.parenthesized_expr"
#define VkglTestCase_005892_2 "essions.literal_before_paren_expr.input_outside_parens.int_to_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005892, VkglTestCase_005892_1, VkglTestCase_005892_2);

#define VkglTestCase_005893_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.parenthesized_exp"
#define VkglTestCase_005893_2 "ressions.literal_before_paren_expr.input_outside_parens.int_to_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005893, VkglTestCase_005893_1, VkglTestCase_005893_2);

#define VkglTestCase_005894_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.parenthesized_expr"
#define VkglTestCase_005894_2 "essions.literal_before_paren_expr.input_outside_parens.int_to_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005894, VkglTestCase_005894_1, VkglTestCase_005894_2);

#define VkglTestCase_005895_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.parenthesized_exp"
#define VkglTestCase_005895_2 "ressions.literal_before_paren_expr.input_outside_parens.int_to_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005895, VkglTestCase_005895_1, VkglTestCase_005895_2);

#define VkglTestCase_005896_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.parenthesized_expr"
#define VkglTestCase_005896_2 "essions.literal_before_paren_expr.input_outside_parens.int_to_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005896, VkglTestCase_005896_1, VkglTestCase_005896_2);

#define VkglTestCase_005897_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.parenthesized_exp"
#define VkglTestCase_005897_2 "ressions.literal_before_paren_expr.input_outside_parens.int_to_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005897, VkglTestCase_005897_1, VkglTestCase_005897_2);

#define VkglTestCase_005898_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.parenthesized_expr"
#define VkglTestCase_005898_2 "essions.literal_before_paren_expr.input_outside_parens.int_to_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005898, VkglTestCase_005898_1, VkglTestCase_005898_2);

#define VkglTestCase_005899_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.parenthesized_exp"
#define VkglTestCase_005899_2 "ressions.literal_before_paren_expr.input_outside_parens.int_to_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005899, VkglTestCase_005899_1, VkglTestCase_005899_2);

#define VkglTestCase_005900_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.parenthesized_expr"
#define VkglTestCase_005900_2 "essions.literal_before_paren_expr.input_outside_parens.int_to_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005900, VkglTestCase_005900_1, VkglTestCase_005900_2);

#define VkglTestCase_005901_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.parenthesized_expr"
#define VkglTestCase_005901_2 "essions.literal_before_paren_expr.input_outside_parens.uint_to_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005901, VkglTestCase_005901_1, VkglTestCase_005901_2);

#define VkglTestCase_005902_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.parenthesized_expre"
#define VkglTestCase_005902_2 "ssions.literal_before_paren_expr.input_outside_parens.uint_to_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005902, VkglTestCase_005902_1, VkglTestCase_005902_2);

#define VkglTestCase_005903_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.parenthesized_exp"
#define VkglTestCase_005903_2 "ressions.literal_before_paren_expr.input_outside_parens.uint_to_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005903, VkglTestCase_005903_1, VkglTestCase_005903_2);

#define VkglTestCase_005904_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.parenthesized_expr"
#define VkglTestCase_005904_2 "essions.literal_before_paren_expr.input_outside_parens.uint_to_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005904, VkglTestCase_005904_1, VkglTestCase_005904_2);

#define VkglTestCase_005905_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.parenthesized_exp"
#define VkglTestCase_005905_2 "ressions.literal_before_paren_expr.input_outside_parens.uint_to_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005905, VkglTestCase_005905_1, VkglTestCase_005905_2);

#define VkglTestCase_005906_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.parenthesized_expr"
#define VkglTestCase_005906_2 "essions.literal_before_paren_expr.input_outside_parens.uint_to_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005906, VkglTestCase_005906_1, VkglTestCase_005906_2);

#define VkglTestCase_005907_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.parenthesized_exp"
#define VkglTestCase_005907_2 "ressions.literal_before_paren_expr.input_outside_parens.uint_to_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005907, VkglTestCase_005907_1, VkglTestCase_005907_2);

#define VkglTestCase_005908_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.parenthesized_expr"
#define VkglTestCase_005908_2 "essions.literal_before_paren_expr.input_outside_parens.uint_to_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005908, VkglTestCase_005908_1, VkglTestCase_005908_2);

#define VkglTestCase_005909_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.parenthesized_expr"
#define VkglTestCase_005909_2 "essions.literal_before_paren_expr.input_outside_parens.ivec2_to_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005909, VkglTestCase_005909_1, VkglTestCase_005909_2);

#define VkglTestCase_005910_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.parenthesized_expre"
#define VkglTestCase_005910_2 "ssions.literal_before_paren_expr.input_outside_parens.ivec2_to_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005910, VkglTestCase_005910_1, VkglTestCase_005910_2);

#define VkglTestCase_005911_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.parenthesized_expr"
#define VkglTestCase_005911_2 "essions.literal_before_paren_expr.input_outside_parens.ivec2_to_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005911, VkglTestCase_005911_1, VkglTestCase_005911_2);

#define VkglTestCase_005912_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.parenthesized_expre"
#define VkglTestCase_005912_2 "ssions.literal_before_paren_expr.input_outside_parens.ivec2_to_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005912, VkglTestCase_005912_1, VkglTestCase_005912_2);

#define VkglTestCase_005913_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.parenthesized_expr"
#define VkglTestCase_005913_2 "essions.literal_before_paren_expr.input_outside_parens.uvec2_to_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005913, VkglTestCase_005913_1, VkglTestCase_005913_2);

#define VkglTestCase_005914_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.parenthesized_expre"
#define VkglTestCase_005914_2 "ssions.literal_before_paren_expr.input_outside_parens.uvec2_to_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005914, VkglTestCase_005914_1, VkglTestCase_005914_2);

#define VkglTestCase_005915_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.parenthesized_expr"
#define VkglTestCase_005915_2 "essions.literal_before_paren_expr.input_outside_parens.ivec3_to_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005915, VkglTestCase_005915_1, VkglTestCase_005915_2);

#define VkglTestCase_005916_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.parenthesized_expre"
#define VkglTestCase_005916_2 "ssions.literal_before_paren_expr.input_outside_parens.ivec3_to_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005916, VkglTestCase_005916_1, VkglTestCase_005916_2);

#define VkglTestCase_005917_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.parenthesized_expr"
#define VkglTestCase_005917_2 "essions.literal_before_paren_expr.input_outside_parens.ivec3_to_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005917, VkglTestCase_005917_1, VkglTestCase_005917_2);

#define VkglTestCase_005918_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.parenthesized_expre"
#define VkglTestCase_005918_2 "ssions.literal_before_paren_expr.input_outside_parens.ivec3_to_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005918, VkglTestCase_005918_1, VkglTestCase_005918_2);

#define VkglTestCase_005919_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.parenthesized_expr"
#define VkglTestCase_005919_2 "essions.literal_before_paren_expr.input_outside_parens.uvec3_to_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005919, VkglTestCase_005919_1, VkglTestCase_005919_2);

#define VkglTestCase_005920_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.parenthesized_expre"
#define VkglTestCase_005920_2 "ssions.literal_before_paren_expr.input_outside_parens.uvec3_to_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005920, VkglTestCase_005920_1, VkglTestCase_005920_2);

#define VkglTestCase_005921_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.parenthesized_expr"
#define VkglTestCase_005921_2 "essions.literal_before_paren_expr.input_outside_parens.ivec4_to_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005921, VkglTestCase_005921_1, VkglTestCase_005921_2);

#define VkglTestCase_005922_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.parenthesized_expre"
#define VkglTestCase_005922_2 "ssions.literal_before_paren_expr.input_outside_parens.ivec4_to_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005922, VkglTestCase_005922_1, VkglTestCase_005922_2);

#define VkglTestCase_005923_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.parenthesized_expr"
#define VkglTestCase_005923_2 "essions.literal_before_paren_expr.input_outside_parens.ivec4_to_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005923, VkglTestCase_005923_1, VkglTestCase_005923_2);

#define VkglTestCase_005924_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.parenthesized_expre"
#define VkglTestCase_005924_2 "ssions.literal_before_paren_expr.input_outside_parens.ivec4_to_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005924, VkglTestCase_005924_1, VkglTestCase_005924_2);

#define VkglTestCase_005925_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.parenthesized_expr"
#define VkglTestCase_005925_2 "essions.literal_before_paren_expr.input_outside_parens.uvec4_to_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005925, VkglTestCase_005925_1, VkglTestCase_005925_2);

#define VkglTestCase_005926_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es31.parenthesized_expre"
#define VkglTestCase_005926_2 "ssions.literal_before_paren_expr.input_outside_parens.uvec4_to_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005926, VkglTestCase_005926_1, VkglTestCase_005926_2);

#define VkglTestCase_006919_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.parenthesized_exp"
#define VkglTestCase_006919_2 "ressions.literal_before_paren_expr.input_outside_parens.int_to_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006919, VkglTestCase_006919_1, VkglTestCase_006919_2);

#define VkglTestCase_006920_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.parenthesized_expr"
#define VkglTestCase_006920_2 "essions.literal_before_paren_expr.input_outside_parens.int_to_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006920, VkglTestCase_006920_1, VkglTestCase_006920_2);

#define VkglTestCase_006921_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.parenthesized_exp"
#define VkglTestCase_006921_2 "ressions.literal_before_paren_expr.input_outside_parens.int_to_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006921, VkglTestCase_006921_1, VkglTestCase_006921_2);

#define VkglTestCase_006922_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.parenthesized_expr"
#define VkglTestCase_006922_2 "essions.literal_before_paren_expr.input_outside_parens.int_to_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006922, VkglTestCase_006922_1, VkglTestCase_006922_2);

#define VkglTestCase_006923_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.parenthesized_exp"
#define VkglTestCase_006923_2 "ressions.literal_before_paren_expr.input_outside_parens.int_to_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006923, VkglTestCase_006923_1, VkglTestCase_006923_2);

#define VkglTestCase_006924_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.parenthesized_expr"
#define VkglTestCase_006924_2 "essions.literal_before_paren_expr.input_outside_parens.int_to_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006924, VkglTestCase_006924_1, VkglTestCase_006924_2);

#define VkglTestCase_006925_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.parenthesized_exp"
#define VkglTestCase_006925_2 "ressions.literal_before_paren_expr.input_outside_parens.int_to_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006925, VkglTestCase_006925_1, VkglTestCase_006925_2);

#define VkglTestCase_006926_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.parenthesized_expr"
#define VkglTestCase_006926_2 "essions.literal_before_paren_expr.input_outside_parens.int_to_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006926, VkglTestCase_006926_1, VkglTestCase_006926_2);

#define VkglTestCase_006927_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.parenthesized_exp"
#define VkglTestCase_006927_2 "ressions.literal_before_paren_expr.input_outside_parens.int_to_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006927, VkglTestCase_006927_1, VkglTestCase_006927_2);

#define VkglTestCase_006928_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.parenthesized_expr"
#define VkglTestCase_006928_2 "essions.literal_before_paren_expr.input_outside_parens.int_to_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006928, VkglTestCase_006928_1, VkglTestCase_006928_2);

#define VkglTestCase_006929_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.parenthesized_exp"
#define VkglTestCase_006929_2 "ressions.literal_before_paren_expr.input_outside_parens.int_to_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006929, VkglTestCase_006929_1, VkglTestCase_006929_2);

#define VkglTestCase_006930_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.parenthesized_expr"
#define VkglTestCase_006930_2 "essions.literal_before_paren_expr.input_outside_parens.int_to_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006930, VkglTestCase_006930_1, VkglTestCase_006930_2);

#define VkglTestCase_006931_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.parenthesized_exp"
#define VkglTestCase_006931_2 "ressions.literal_before_paren_expr.input_outside_parens.int_to_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006931, VkglTestCase_006931_1, VkglTestCase_006931_2);

#define VkglTestCase_006932_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.parenthesized_expr"
#define VkglTestCase_006932_2 "essions.literal_before_paren_expr.input_outside_parens.int_to_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006932, VkglTestCase_006932_1, VkglTestCase_006932_2);

#define VkglTestCase_006933_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.parenthesized_exp"
#define VkglTestCase_006933_2 "ressions.literal_before_paren_expr.input_outside_parens.int_to_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006933, VkglTestCase_006933_1, VkglTestCase_006933_2);

#define VkglTestCase_006934_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.parenthesized_expr"
#define VkglTestCase_006934_2 "essions.literal_before_paren_expr.input_outside_parens.int_to_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006934, VkglTestCase_006934_1, VkglTestCase_006934_2);

#define VkglTestCase_006935_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.parenthesized_expr"
#define VkglTestCase_006935_2 "essions.literal_before_paren_expr.input_outside_parens.uint_to_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006935, VkglTestCase_006935_1, VkglTestCase_006935_2);

#define VkglTestCase_006936_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.parenthesized_expre"
#define VkglTestCase_006936_2 "ssions.literal_before_paren_expr.input_outside_parens.uint_to_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006936, VkglTestCase_006936_1, VkglTestCase_006936_2);

#define VkglTestCase_006937_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.parenthesized_exp"
#define VkglTestCase_006937_2 "ressions.literal_before_paren_expr.input_outside_parens.uint_to_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006937, VkglTestCase_006937_1, VkglTestCase_006937_2);

#define VkglTestCase_006938_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.parenthesized_expr"
#define VkglTestCase_006938_2 "essions.literal_before_paren_expr.input_outside_parens.uint_to_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006938, VkglTestCase_006938_1, VkglTestCase_006938_2);

#define VkglTestCase_006939_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.parenthesized_exp"
#define VkglTestCase_006939_2 "ressions.literal_before_paren_expr.input_outside_parens.uint_to_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006939, VkglTestCase_006939_1, VkglTestCase_006939_2);

#define VkglTestCase_006940_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.parenthesized_expr"
#define VkglTestCase_006940_2 "essions.literal_before_paren_expr.input_outside_parens.uint_to_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006940, VkglTestCase_006940_1, VkglTestCase_006940_2);

#define VkglTestCase_006941_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.parenthesized_exp"
#define VkglTestCase_006941_2 "ressions.literal_before_paren_expr.input_outside_parens.uint_to_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006941, VkglTestCase_006941_1, VkglTestCase_006941_2);

#define VkglTestCase_006942_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.parenthesized_expr"
#define VkglTestCase_006942_2 "essions.literal_before_paren_expr.input_outside_parens.uint_to_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006942, VkglTestCase_006942_1, VkglTestCase_006942_2);

#define VkglTestCase_006943_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.parenthesized_expr"
#define VkglTestCase_006943_2 "essions.literal_before_paren_expr.input_outside_parens.ivec2_to_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006943, VkglTestCase_006943_1, VkglTestCase_006943_2);

#define VkglTestCase_006944_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.parenthesized_expre"
#define VkglTestCase_006944_2 "ssions.literal_before_paren_expr.input_outside_parens.ivec2_to_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006944, VkglTestCase_006944_1, VkglTestCase_006944_2);

#define VkglTestCase_006945_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.parenthesized_expr"
#define VkglTestCase_006945_2 "essions.literal_before_paren_expr.input_outside_parens.ivec2_to_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006945, VkglTestCase_006945_1, VkglTestCase_006945_2);

#define VkglTestCase_006946_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.parenthesized_expre"
#define VkglTestCase_006946_2 "ssions.literal_before_paren_expr.input_outside_parens.ivec2_to_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006946, VkglTestCase_006946_1, VkglTestCase_006946_2);

#define VkglTestCase_006947_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.parenthesized_expr"
#define VkglTestCase_006947_2 "essions.literal_before_paren_expr.input_outside_parens.uvec2_to_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006947, VkglTestCase_006947_1, VkglTestCase_006947_2);

#define VkglTestCase_006948_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.parenthesized_expre"
#define VkglTestCase_006948_2 "ssions.literal_before_paren_expr.input_outside_parens.uvec2_to_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006948, VkglTestCase_006948_1, VkglTestCase_006948_2);

#define VkglTestCase_006949_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.parenthesized_expr"
#define VkglTestCase_006949_2 "essions.literal_before_paren_expr.input_outside_parens.ivec3_to_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006949, VkglTestCase_006949_1, VkglTestCase_006949_2);

#define VkglTestCase_006950_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.parenthesized_expre"
#define VkglTestCase_006950_2 "ssions.literal_before_paren_expr.input_outside_parens.ivec3_to_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006950, VkglTestCase_006950_1, VkglTestCase_006950_2);

#define VkglTestCase_006951_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.parenthesized_expr"
#define VkglTestCase_006951_2 "essions.literal_before_paren_expr.input_outside_parens.ivec3_to_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006951, VkglTestCase_006951_1, VkglTestCase_006951_2);

#define VkglTestCase_006952_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.parenthesized_expre"
#define VkglTestCase_006952_2 "ssions.literal_before_paren_expr.input_outside_parens.ivec3_to_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006952, VkglTestCase_006952_1, VkglTestCase_006952_2);

#define VkglTestCase_006953_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.parenthesized_expr"
#define VkglTestCase_006953_2 "essions.literal_before_paren_expr.input_outside_parens.uvec3_to_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006953, VkglTestCase_006953_1, VkglTestCase_006953_2);

#define VkglTestCase_006954_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.parenthesized_expre"
#define VkglTestCase_006954_2 "ssions.literal_before_paren_expr.input_outside_parens.uvec3_to_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006954, VkglTestCase_006954_1, VkglTestCase_006954_2);

#define VkglTestCase_006955_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.parenthesized_expr"
#define VkglTestCase_006955_2 "essions.literal_before_paren_expr.input_outside_parens.ivec4_to_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006955, VkglTestCase_006955_1, VkglTestCase_006955_2);

#define VkglTestCase_006956_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.parenthesized_expre"
#define VkglTestCase_006956_2 "ssions.literal_before_paren_expr.input_outside_parens.ivec4_to_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006956, VkglTestCase_006956_1, VkglTestCase_006956_2);

#define VkglTestCase_006957_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.parenthesized_expr"
#define VkglTestCase_006957_2 "essions.literal_before_paren_expr.input_outside_parens.ivec4_to_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006957, VkglTestCase_006957_1, VkglTestCase_006957_2);

#define VkglTestCase_006958_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.parenthesized_expre"
#define VkglTestCase_006958_2 "ssions.literal_before_paren_expr.input_outside_parens.ivec4_to_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006958, VkglTestCase_006958_1, VkglTestCase_006958_2);

#define VkglTestCase_006959_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.parenthesized_expr"
#define VkglTestCase_006959_2 "essions.literal_before_paren_expr.input_outside_parens.uvec4_to_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006959, VkglTestCase_006959_1, VkglTestCase_006959_2);

#define VkglTestCase_006960_1 "dEQP-GLES31.functional.shaders.implicit_conversions.es32.parenthesized_expre"
#define VkglTestCase_006960_2 "ssions.literal_before_paren_expr.input_outside_parens.uvec4_to_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006960, VkglTestCase_006960_1, VkglTestCase_006960_2);
