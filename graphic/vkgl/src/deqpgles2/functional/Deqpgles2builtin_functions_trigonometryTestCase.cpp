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
#include "../Deqpgles2BaseFunc.h"
#include "../ActsDeqpgles20008TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_007902_1 "dEQP-GLES2.functional.shaders.constant_expressions."
#define VkglTestCase_007902_2 "builtin_functions.trigonometry.radians_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007902, VkglTestCase_007902_1, VkglTestCase_007902_2);

#define VkglTestCase_007903_1 "dEQP-GLES2.functional.shaders.constant_expressions.b"
#define VkglTestCase_007903_2 "uiltin_functions.trigonometry.radians_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007903, VkglTestCase_007903_1, VkglTestCase_007903_2);

#define VkglTestCase_007904_1 "dEQP-GLES2.functional.shaders.constant_expressions"
#define VkglTestCase_007904_2 ".builtin_functions.trigonometry.radians_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007904, VkglTestCase_007904_1, VkglTestCase_007904_2);

#define VkglTestCase_007905_1 "dEQP-GLES2.functional.shaders.constant_expressions."
#define VkglTestCase_007905_2 "builtin_functions.trigonometry.radians_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007905, VkglTestCase_007905_1, VkglTestCase_007905_2);

#define VkglTestCase_007906_1 "dEQP-GLES2.functional.shaders.constant_expressions"
#define VkglTestCase_007906_2 ".builtin_functions.trigonometry.radians_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007906, VkglTestCase_007906_1, VkglTestCase_007906_2);

#define VkglTestCase_007907_1 "dEQP-GLES2.functional.shaders.constant_expressions."
#define VkglTestCase_007907_2 "builtin_functions.trigonometry.radians_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007907, VkglTestCase_007907_1, VkglTestCase_007907_2);

#define VkglTestCase_007908_1 "dEQP-GLES2.functional.shaders.constant_expressions"
#define VkglTestCase_007908_2 ".builtin_functions.trigonometry.radians_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007908, VkglTestCase_007908_1, VkglTestCase_007908_2);

#define VkglTestCase_007909_1 "dEQP-GLES2.functional.shaders.constant_expressions."
#define VkglTestCase_007909_2 "builtin_functions.trigonometry.radians_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007909, VkglTestCase_007909_1, VkglTestCase_007909_2);

#define VkglTestCase_007910_1 "dEQP-GLES2.functional.shaders.constant_expressions."
#define VkglTestCase_007910_2 "builtin_functions.trigonometry.degrees_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007910, VkglTestCase_007910_1, VkglTestCase_007910_2);

#define VkglTestCase_007911_1 "dEQP-GLES2.functional.shaders.constant_expressions.b"
#define VkglTestCase_007911_2 "uiltin_functions.trigonometry.degrees_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007911, VkglTestCase_007911_1, VkglTestCase_007911_2);

#define VkglTestCase_007912_1 "dEQP-GLES2.functional.shaders.constant_expressions"
#define VkglTestCase_007912_2 ".builtin_functions.trigonometry.degrees_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007912, VkglTestCase_007912_1, VkglTestCase_007912_2);

#define VkglTestCase_007913_1 "dEQP-GLES2.functional.shaders.constant_expressions."
#define VkglTestCase_007913_2 "builtin_functions.trigonometry.degrees_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007913, VkglTestCase_007913_1, VkglTestCase_007913_2);

#define VkglTestCase_007914_1 "dEQP-GLES2.functional.shaders.constant_expressions"
#define VkglTestCase_007914_2 ".builtin_functions.trigonometry.degrees_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007914, VkglTestCase_007914_1, VkglTestCase_007914_2);

#define VkglTestCase_007915_1 "dEQP-GLES2.functional.shaders.constant_expressions."
#define VkglTestCase_007915_2 "builtin_functions.trigonometry.degrees_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007915, VkglTestCase_007915_1, VkglTestCase_007915_2);

#define VkglTestCase_007916_1 "dEQP-GLES2.functional.shaders.constant_expressions"
#define VkglTestCase_007916_2 ".builtin_functions.trigonometry.degrees_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007916, VkglTestCase_007916_1, VkglTestCase_007916_2);

#define VkglTestCase_007917_1 "dEQP-GLES2.functional.shaders.constant_expressions."
#define VkglTestCase_007917_2 "builtin_functions.trigonometry.degrees_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007917, VkglTestCase_007917_1, VkglTestCase_007917_2);

#define VkglTestCase_007918_1 "dEQP-GLES2.functional.shaders.constant_expression"
#define VkglTestCase_007918_2 "s.builtin_functions.trigonometry.sin_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007918, VkglTestCase_007918_1, VkglTestCase_007918_2);

#define VkglTestCase_007919_1 "dEQP-GLES2.functional.shaders.constant_expressions"
#define VkglTestCase_007919_2 ".builtin_functions.trigonometry.sin_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007919, VkglTestCase_007919_1, VkglTestCase_007919_2);

#define VkglTestCase_007920_1 "dEQP-GLES2.functional.shaders.constant_expressio"
#define VkglTestCase_007920_2 "ns.builtin_functions.trigonometry.sin_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007920, VkglTestCase_007920_1, VkglTestCase_007920_2);

#define VkglTestCase_007921_1 "dEQP-GLES2.functional.shaders.constant_expression"
#define VkglTestCase_007921_2 "s.builtin_functions.trigonometry.sin_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007921, VkglTestCase_007921_1, VkglTestCase_007921_2);

#define VkglTestCase_007922_1 "dEQP-GLES2.functional.shaders.constant_expressio"
#define VkglTestCase_007922_2 "ns.builtin_functions.trigonometry.sin_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007922, VkglTestCase_007922_1, VkglTestCase_007922_2);

#define VkglTestCase_007923_1 "dEQP-GLES2.functional.shaders.constant_expression"
#define VkglTestCase_007923_2 "s.builtin_functions.trigonometry.sin_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007923, VkglTestCase_007923_1, VkglTestCase_007923_2);

#define VkglTestCase_007924_1 "dEQP-GLES2.functional.shaders.constant_expressio"
#define VkglTestCase_007924_2 "ns.builtin_functions.trigonometry.sin_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007924, VkglTestCase_007924_1, VkglTestCase_007924_2);

#define VkglTestCase_007925_1 "dEQP-GLES2.functional.shaders.constant_expression"
#define VkglTestCase_007925_2 "s.builtin_functions.trigonometry.sin_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007925, VkglTestCase_007925_1, VkglTestCase_007925_2);

#define VkglTestCase_007926_1 "dEQP-GLES2.functional.shaders.constant_expression"
#define VkglTestCase_007926_2 "s.builtin_functions.trigonometry.cos_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007926, VkglTestCase_007926_1, VkglTestCase_007926_2);

#define VkglTestCase_007927_1 "dEQP-GLES2.functional.shaders.constant_expressions"
#define VkglTestCase_007927_2 ".builtin_functions.trigonometry.cos_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007927, VkglTestCase_007927_1, VkglTestCase_007927_2);

#define VkglTestCase_007928_1 "dEQP-GLES2.functional.shaders.constant_expressio"
#define VkglTestCase_007928_2 "ns.builtin_functions.trigonometry.cos_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007928, VkglTestCase_007928_1, VkglTestCase_007928_2);

#define VkglTestCase_007929_1 "dEQP-GLES2.functional.shaders.constant_expression"
#define VkglTestCase_007929_2 "s.builtin_functions.trigonometry.cos_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007929, VkglTestCase_007929_1, VkglTestCase_007929_2);

#define VkglTestCase_007930_1 "dEQP-GLES2.functional.shaders.constant_expressio"
#define VkglTestCase_007930_2 "ns.builtin_functions.trigonometry.cos_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007930, VkglTestCase_007930_1, VkglTestCase_007930_2);

#define VkglTestCase_007931_1 "dEQP-GLES2.functional.shaders.constant_expression"
#define VkglTestCase_007931_2 "s.builtin_functions.trigonometry.cos_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007931, VkglTestCase_007931_1, VkglTestCase_007931_2);

#define VkglTestCase_007932_1 "dEQP-GLES2.functional.shaders.constant_expressio"
#define VkglTestCase_007932_2 "ns.builtin_functions.trigonometry.cos_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007932, VkglTestCase_007932_1, VkglTestCase_007932_2);

#define VkglTestCase_007933_1 "dEQP-GLES2.functional.shaders.constant_expression"
#define VkglTestCase_007933_2 "s.builtin_functions.trigonometry.cos_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007933, VkglTestCase_007933_1, VkglTestCase_007933_2);

#define VkglTestCase_007934_1 "dEQP-GLES2.functional.shaders.constant_expression"
#define VkglTestCase_007934_2 "s.builtin_functions.trigonometry.tan_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007934, VkglTestCase_007934_1, VkglTestCase_007934_2);

#define VkglTestCase_007935_1 "dEQP-GLES2.functional.shaders.constant_expressions"
#define VkglTestCase_007935_2 ".builtin_functions.trigonometry.tan_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007935, VkglTestCase_007935_1, VkglTestCase_007935_2);

#define VkglTestCase_007936_1 "dEQP-GLES2.functional.shaders.constant_expressio"
#define VkglTestCase_007936_2 "ns.builtin_functions.trigonometry.tan_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007936, VkglTestCase_007936_1, VkglTestCase_007936_2);

#define VkglTestCase_007937_1 "dEQP-GLES2.functional.shaders.constant_expression"
#define VkglTestCase_007937_2 "s.builtin_functions.trigonometry.tan_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007937, VkglTestCase_007937_1, VkglTestCase_007937_2);

#define VkglTestCase_007938_1 "dEQP-GLES2.functional.shaders.constant_expressio"
#define VkglTestCase_007938_2 "ns.builtin_functions.trigonometry.tan_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007938, VkglTestCase_007938_1, VkglTestCase_007938_2);

#define VkglTestCase_007939_1 "dEQP-GLES2.functional.shaders.constant_expression"
#define VkglTestCase_007939_2 "s.builtin_functions.trigonometry.tan_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007939, VkglTestCase_007939_1, VkglTestCase_007939_2);

#define VkglTestCase_007940_1 "dEQP-GLES2.functional.shaders.constant_expressio"
#define VkglTestCase_007940_2 "ns.builtin_functions.trigonometry.tan_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007940, VkglTestCase_007940_1, VkglTestCase_007940_2);

#define VkglTestCase_007941_1 "dEQP-GLES2.functional.shaders.constant_expression"
#define VkglTestCase_007941_2 "s.builtin_functions.trigonometry.tan_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007941, VkglTestCase_007941_1, VkglTestCase_007941_2);

#define VkglTestCase_007942_1 "dEQP-GLES2.functional.shaders.constant_expression"
#define VkglTestCase_007942_2 "s.builtin_functions.trigonometry.asin_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007942, VkglTestCase_007942_1, VkglTestCase_007942_2);

#define VkglTestCase_007943_1 "dEQP-GLES2.functional.shaders.constant_expressions"
#define VkglTestCase_007943_2 ".builtin_functions.trigonometry.asin_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007943, VkglTestCase_007943_1, VkglTestCase_007943_2);

#define VkglTestCase_007944_1 "dEQP-GLES2.functional.shaders.constant_expression"
#define VkglTestCase_007944_2 "s.builtin_functions.trigonometry.asin_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007944, VkglTestCase_007944_1, VkglTestCase_007944_2);

#define VkglTestCase_007945_1 "dEQP-GLES2.functional.shaders.constant_expressions"
#define VkglTestCase_007945_2 ".builtin_functions.trigonometry.asin_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007945, VkglTestCase_007945_1, VkglTestCase_007945_2);

#define VkglTestCase_007946_1 "dEQP-GLES2.functional.shaders.constant_expression"
#define VkglTestCase_007946_2 "s.builtin_functions.trigonometry.asin_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007946, VkglTestCase_007946_1, VkglTestCase_007946_2);

#define VkglTestCase_007947_1 "dEQP-GLES2.functional.shaders.constant_expressions"
#define VkglTestCase_007947_2 ".builtin_functions.trigonometry.asin_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007947, VkglTestCase_007947_1, VkglTestCase_007947_2);

#define VkglTestCase_007948_1 "dEQP-GLES2.functional.shaders.constant_expression"
#define VkglTestCase_007948_2 "s.builtin_functions.trigonometry.asin_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007948, VkglTestCase_007948_1, VkglTestCase_007948_2);

#define VkglTestCase_007949_1 "dEQP-GLES2.functional.shaders.constant_expressions"
#define VkglTestCase_007949_2 ".builtin_functions.trigonometry.asin_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007949, VkglTestCase_007949_1, VkglTestCase_007949_2);

#define VkglTestCase_007950_1 "dEQP-GLES2.functional.shaders.constant_expression"
#define VkglTestCase_007950_2 "s.builtin_functions.trigonometry.acos_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007950, VkglTestCase_007950_1, VkglTestCase_007950_2);

#define VkglTestCase_007951_1 "dEQP-GLES2.functional.shaders.constant_expressions"
#define VkglTestCase_007951_2 ".builtin_functions.trigonometry.acos_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007951, VkglTestCase_007951_1, VkglTestCase_007951_2);

#define VkglTestCase_007952_1 "dEQP-GLES2.functional.shaders.constant_expression"
#define VkglTestCase_007952_2 "s.builtin_functions.trigonometry.acos_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007952, VkglTestCase_007952_1, VkglTestCase_007952_2);

#define VkglTestCase_007953_1 "dEQP-GLES2.functional.shaders.constant_expressions"
#define VkglTestCase_007953_2 ".builtin_functions.trigonometry.acos_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007953, VkglTestCase_007953_1, VkglTestCase_007953_2);

#define VkglTestCase_007954_1 "dEQP-GLES2.functional.shaders.constant_expression"
#define VkglTestCase_007954_2 "s.builtin_functions.trigonometry.acos_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007954, VkglTestCase_007954_1, VkglTestCase_007954_2);

#define VkglTestCase_007955_1 "dEQP-GLES2.functional.shaders.constant_expressions"
#define VkglTestCase_007955_2 ".builtin_functions.trigonometry.acos_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007955, VkglTestCase_007955_1, VkglTestCase_007955_2);

#define VkglTestCase_007956_1 "dEQP-GLES2.functional.shaders.constant_expression"
#define VkglTestCase_007956_2 "s.builtin_functions.trigonometry.acos_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007956, VkglTestCase_007956_1, VkglTestCase_007956_2);

#define VkglTestCase_007957_1 "dEQP-GLES2.functional.shaders.constant_expressions"
#define VkglTestCase_007957_2 ".builtin_functions.trigonometry.acos_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007957, VkglTestCase_007957_1, VkglTestCase_007957_2);

#define VkglTestCase_007958_1 "dEQP-GLES2.functional.shaders.constant_expressions.bui"
#define VkglTestCase_007958_2 "ltin_functions.trigonometry.atan_separate_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007958, VkglTestCase_007958_1, VkglTestCase_007958_2);

#define VkglTestCase_007959_1 "dEQP-GLES2.functional.shaders.constant_expressions.buil"
#define VkglTestCase_007959_2 "tin_functions.trigonometry.atan_separate_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007959, VkglTestCase_007959_1, VkglTestCase_007959_2);

#define VkglTestCase_007960_1 "dEQP-GLES2.functional.shaders.constant_expressions.bu"
#define VkglTestCase_007960_2 "iltin_functions.trigonometry.atan_separate_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007960, VkglTestCase_007960_1, VkglTestCase_007960_2);

#define VkglTestCase_007961_1 "dEQP-GLES2.functional.shaders.constant_expressions.bui"
#define VkglTestCase_007961_2 "ltin_functions.trigonometry.atan_separate_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007961, VkglTestCase_007961_1, VkglTestCase_007961_2);

#define VkglTestCase_007962_1 "dEQP-GLES2.functional.shaders.constant_expressions.bu"
#define VkglTestCase_007962_2 "iltin_functions.trigonometry.atan_separate_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007962, VkglTestCase_007962_1, VkglTestCase_007962_2);

#define VkglTestCase_007963_1 "dEQP-GLES2.functional.shaders.constant_expressions.bui"
#define VkglTestCase_007963_2 "ltin_functions.trigonometry.atan_separate_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007963, VkglTestCase_007963_1, VkglTestCase_007963_2);

#define VkglTestCase_007964_1 "dEQP-GLES2.functional.shaders.constant_expressions.bu"
#define VkglTestCase_007964_2 "iltin_functions.trigonometry.atan_separate_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007964, VkglTestCase_007964_1, VkglTestCase_007964_2);

#define VkglTestCase_007965_1 "dEQP-GLES2.functional.shaders.constant_expressions.bui"
#define VkglTestCase_007965_2 "ltin_functions.trigonometry.atan_separate_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007965, VkglTestCase_007965_1, VkglTestCase_007965_2);

#define VkglTestCase_007966_1 "dEQP-GLES2.functional.shaders.constant_expressions.bui"
#define VkglTestCase_007966_2 "ltin_functions.trigonometry.atan_combined_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007966, VkglTestCase_007966_1, VkglTestCase_007966_2);

#define VkglTestCase_007967_1 "dEQP-GLES2.functional.shaders.constant_expressions.buil"
#define VkglTestCase_007967_2 "tin_functions.trigonometry.atan_combined_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007967, VkglTestCase_007967_1, VkglTestCase_007967_2);

#define VkglTestCase_007968_1 "dEQP-GLES2.functional.shaders.constant_expressions.bu"
#define VkglTestCase_007968_2 "iltin_functions.trigonometry.atan_combined_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007968, VkglTestCase_007968_1, VkglTestCase_007968_2);

#define VkglTestCase_007969_1 "dEQP-GLES2.functional.shaders.constant_expressions.bui"
#define VkglTestCase_007969_2 "ltin_functions.trigonometry.atan_combined_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007969, VkglTestCase_007969_1, VkglTestCase_007969_2);

#define VkglTestCase_007970_1 "dEQP-GLES2.functional.shaders.constant_expressions.bu"
#define VkglTestCase_007970_2 "iltin_functions.trigonometry.atan_combined_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007970, VkglTestCase_007970_1, VkglTestCase_007970_2);

#define VkglTestCase_007971_1 "dEQP-GLES2.functional.shaders.constant_expressions.bui"
#define VkglTestCase_007971_2 "ltin_functions.trigonometry.atan_combined_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007971, VkglTestCase_007971_1, VkglTestCase_007971_2);

#define VkglTestCase_007972_1 "dEQP-GLES2.functional.shaders.constant_expressions.bu"
#define VkglTestCase_007972_2 "iltin_functions.trigonometry.atan_combined_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007972, VkglTestCase_007972_1, VkglTestCase_007972_2);

#define VkglTestCase_007973_1 "dEQP-GLES2.functional.shaders.constant_expressions.bui"
#define VkglTestCase_007973_2 "ltin_functions.trigonometry.atan_combined_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007973, VkglTestCase_007973_1, VkglTestCase_007973_2);
