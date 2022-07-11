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
#include "../ActsDeqpgles30013TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_012896_1 "dEQP-GLES3.functional.shaders.operator"
#define VkglTestCase_012896_2 ".common_functions.max.lowp_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012896, VkglTestCase_012896_1, VkglTestCase_012896_2);

#define VkglTestCase_012897_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_012897_2 "common_functions.max.lowp_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012897, VkglTestCase_012897_1, VkglTestCase_012897_2);

#define VkglTestCase_012898_1 "dEQP-GLES3.functional.shaders.operator.c"
#define VkglTestCase_012898_2 "ommon_functions.max.mediump_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012898, VkglTestCase_012898_1, VkglTestCase_012898_2);

#define VkglTestCase_012899_1 "dEQP-GLES3.functional.shaders.operator.co"
#define VkglTestCase_012899_2 "mmon_functions.max.mediump_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012899, VkglTestCase_012899_1, VkglTestCase_012899_2);

#define VkglTestCase_012900_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_012900_2 "common_functions.max.highp_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012900, VkglTestCase_012900_1, VkglTestCase_012900_2);

#define VkglTestCase_012901_1 "dEQP-GLES3.functional.shaders.operator.c"
#define VkglTestCase_012901_2 "ommon_functions.max.highp_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012901, VkglTestCase_012901_1, VkglTestCase_012901_2);

#define VkglTestCase_012902_1 "dEQP-GLES3.functional.shaders.operator"
#define VkglTestCase_012902_2 ".common_functions.max.lowp_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012902, VkglTestCase_012902_1, VkglTestCase_012902_2);

#define VkglTestCase_012903_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_012903_2 "common_functions.max.lowp_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012903, VkglTestCase_012903_1, VkglTestCase_012903_2);

#define VkglTestCase_012904_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_012904_2 "common_functions.max.mediump_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012904, VkglTestCase_012904_1, VkglTestCase_012904_2);

#define VkglTestCase_012905_1 "dEQP-GLES3.functional.shaders.operator.c"
#define VkglTestCase_012905_2 "ommon_functions.max.mediump_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012905, VkglTestCase_012905_1, VkglTestCase_012905_2);

#define VkglTestCase_012906_1 "dEQP-GLES3.functional.shaders.operator"
#define VkglTestCase_012906_2 ".common_functions.max.highp_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012906, VkglTestCase_012906_1, VkglTestCase_012906_2);

#define VkglTestCase_012907_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_012907_2 "common_functions.max.highp_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012907, VkglTestCase_012907_1, VkglTestCase_012907_2);

#define VkglTestCase_012908_1 "dEQP-GLES3.functional.shaders.operator"
#define VkglTestCase_012908_2 ".common_functions.max.lowp_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012908, VkglTestCase_012908_1, VkglTestCase_012908_2);

#define VkglTestCase_012909_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_012909_2 "common_functions.max.lowp_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012909, VkglTestCase_012909_1, VkglTestCase_012909_2);

#define VkglTestCase_012910_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_012910_2 "common_functions.max.mediump_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012910, VkglTestCase_012910_1, VkglTestCase_012910_2);

#define VkglTestCase_012911_1 "dEQP-GLES3.functional.shaders.operator.c"
#define VkglTestCase_012911_2 "ommon_functions.max.mediump_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012911, VkglTestCase_012911_1, VkglTestCase_012911_2);

#define VkglTestCase_012912_1 "dEQP-GLES3.functional.shaders.operator"
#define VkglTestCase_012912_2 ".common_functions.max.highp_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012912, VkglTestCase_012912_1, VkglTestCase_012912_2);

#define VkglTestCase_012913_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_012913_2 "common_functions.max.highp_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012913, VkglTestCase_012913_1, VkglTestCase_012913_2);

#define VkglTestCase_012914_1 "dEQP-GLES3.functional.shaders.operator"
#define VkglTestCase_012914_2 ".common_functions.max.lowp_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012914, VkglTestCase_012914_1, VkglTestCase_012914_2);

#define VkglTestCase_012915_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_012915_2 "common_functions.max.lowp_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012915, VkglTestCase_012915_1, VkglTestCase_012915_2);

#define VkglTestCase_012916_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_012916_2 "common_functions.max.mediump_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012916, VkglTestCase_012916_1, VkglTestCase_012916_2);

#define VkglTestCase_012917_1 "dEQP-GLES3.functional.shaders.operator.c"
#define VkglTestCase_012917_2 "ommon_functions.max.mediump_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012917, VkglTestCase_012917_1, VkglTestCase_012917_2);

#define VkglTestCase_012918_1 "dEQP-GLES3.functional.shaders.operator"
#define VkglTestCase_012918_2 ".common_functions.max.highp_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012918, VkglTestCase_012918_1, VkglTestCase_012918_2);

#define VkglTestCase_012919_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_012919_2 "common_functions.max.highp_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012919, VkglTestCase_012919_1, VkglTestCase_012919_2);

#define VkglTestCase_012920_1 "dEQP-GLES3.functional.shaders.operator.co"
#define VkglTestCase_012920_2 "mmon_functions.max.lowp_vec2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012920, VkglTestCase_012920_1, VkglTestCase_012920_2);

#define VkglTestCase_012921_1 "dEQP-GLES3.functional.shaders.operator.com"
#define VkglTestCase_012921_2 "mon_functions.max.lowp_vec2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012921, VkglTestCase_012921_1, VkglTestCase_012921_2);

#define VkglTestCase_012922_1 "dEQP-GLES3.functional.shaders.operator.com"
#define VkglTestCase_012922_2 "mon_functions.max.mediump_vec2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012922, VkglTestCase_012922_1, VkglTestCase_012922_2);

#define VkglTestCase_012923_1 "dEQP-GLES3.functional.shaders.operator.comm"
#define VkglTestCase_012923_2 "on_functions.max.mediump_vec2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012923, VkglTestCase_012923_1, VkglTestCase_012923_2);

#define VkglTestCase_012924_1 "dEQP-GLES3.functional.shaders.operator.co"
#define VkglTestCase_012924_2 "mmon_functions.max.highp_vec2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012924, VkglTestCase_012924_1, VkglTestCase_012924_2);

#define VkglTestCase_012925_1 "dEQP-GLES3.functional.shaders.operator.com"
#define VkglTestCase_012925_2 "mon_functions.max.highp_vec2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012925, VkglTestCase_012925_1, VkglTestCase_012925_2);

#define VkglTestCase_012926_1 "dEQP-GLES3.functional.shaders.operator.co"
#define VkglTestCase_012926_2 "mmon_functions.max.lowp_vec3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012926, VkglTestCase_012926_1, VkglTestCase_012926_2);

#define VkglTestCase_012927_1 "dEQP-GLES3.functional.shaders.operator.com"
#define VkglTestCase_012927_2 "mon_functions.max.lowp_vec3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012927, VkglTestCase_012927_1, VkglTestCase_012927_2);

#define VkglTestCase_012928_1 "dEQP-GLES3.functional.shaders.operator.com"
#define VkglTestCase_012928_2 "mon_functions.max.mediump_vec3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012928, VkglTestCase_012928_1, VkglTestCase_012928_2);

#define VkglTestCase_012929_1 "dEQP-GLES3.functional.shaders.operator.comm"
#define VkglTestCase_012929_2 "on_functions.max.mediump_vec3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012929, VkglTestCase_012929_1, VkglTestCase_012929_2);

#define VkglTestCase_012930_1 "dEQP-GLES3.functional.shaders.operator.co"
#define VkglTestCase_012930_2 "mmon_functions.max.highp_vec3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012930, VkglTestCase_012930_1, VkglTestCase_012930_2);

#define VkglTestCase_012931_1 "dEQP-GLES3.functional.shaders.operator.com"
#define VkglTestCase_012931_2 "mon_functions.max.highp_vec3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012931, VkglTestCase_012931_1, VkglTestCase_012931_2);

#define VkglTestCase_012932_1 "dEQP-GLES3.functional.shaders.operator.co"
#define VkglTestCase_012932_2 "mmon_functions.max.lowp_vec4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012932, VkglTestCase_012932_1, VkglTestCase_012932_2);

#define VkglTestCase_012933_1 "dEQP-GLES3.functional.shaders.operator.com"
#define VkglTestCase_012933_2 "mon_functions.max.lowp_vec4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012933, VkglTestCase_012933_1, VkglTestCase_012933_2);

#define VkglTestCase_012934_1 "dEQP-GLES3.functional.shaders.operator.com"
#define VkglTestCase_012934_2 "mon_functions.max.mediump_vec4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012934, VkglTestCase_012934_1, VkglTestCase_012934_2);

#define VkglTestCase_012935_1 "dEQP-GLES3.functional.shaders.operator.comm"
#define VkglTestCase_012935_2 "on_functions.max.mediump_vec4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012935, VkglTestCase_012935_1, VkglTestCase_012935_2);

#define VkglTestCase_012936_1 "dEQP-GLES3.functional.shaders.operator.co"
#define VkglTestCase_012936_2 "mmon_functions.max.highp_vec4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012936, VkglTestCase_012936_1, VkglTestCase_012936_2);

#define VkglTestCase_012937_1 "dEQP-GLES3.functional.shaders.operator.com"
#define VkglTestCase_012937_2 "mon_functions.max.highp_vec4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012937, VkglTestCase_012937_1, VkglTestCase_012937_2);

#define VkglTestCase_012938_1 "dEQP-GLES3.functional.shaders.operato"
#define VkglTestCase_012938_2 "r.common_functions.max.lowp_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012938, VkglTestCase_012938_1, VkglTestCase_012938_2);

#define VkglTestCase_012939_1 "dEQP-GLES3.functional.shaders.operator"
#define VkglTestCase_012939_2 ".common_functions.max.lowp_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012939, VkglTestCase_012939_1, VkglTestCase_012939_2);

#define VkglTestCase_012940_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_012940_2 "common_functions.max.mediump_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012940, VkglTestCase_012940_1, VkglTestCase_012940_2);

#define VkglTestCase_012941_1 "dEQP-GLES3.functional.shaders.operator.c"
#define VkglTestCase_012941_2 "ommon_functions.max.mediump_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012941, VkglTestCase_012941_1, VkglTestCase_012941_2);

#define VkglTestCase_012942_1 "dEQP-GLES3.functional.shaders.operator"
#define VkglTestCase_012942_2 ".common_functions.max.highp_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012942, VkglTestCase_012942_1, VkglTestCase_012942_2);

#define VkglTestCase_012943_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_012943_2 "common_functions.max.highp_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012943, VkglTestCase_012943_1, VkglTestCase_012943_2);

#define VkglTestCase_012944_1 "dEQP-GLES3.functional.shaders.operator"
#define VkglTestCase_012944_2 ".common_functions.max.lowp_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012944, VkglTestCase_012944_1, VkglTestCase_012944_2);

#define VkglTestCase_012945_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_012945_2 "common_functions.max.lowp_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012945, VkglTestCase_012945_1, VkglTestCase_012945_2);

#define VkglTestCase_012946_1 "dEQP-GLES3.functional.shaders.operator.c"
#define VkglTestCase_012946_2 "ommon_functions.max.mediump_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012946, VkglTestCase_012946_1, VkglTestCase_012946_2);

#define VkglTestCase_012947_1 "dEQP-GLES3.functional.shaders.operator.co"
#define VkglTestCase_012947_2 "mmon_functions.max.mediump_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012947, VkglTestCase_012947_1, VkglTestCase_012947_2);

#define VkglTestCase_012948_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_012948_2 "common_functions.max.highp_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012948, VkglTestCase_012948_1, VkglTestCase_012948_2);

#define VkglTestCase_012949_1 "dEQP-GLES3.functional.shaders.operator.c"
#define VkglTestCase_012949_2 "ommon_functions.max.highp_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012949, VkglTestCase_012949_1, VkglTestCase_012949_2);

#define VkglTestCase_012950_1 "dEQP-GLES3.functional.shaders.operator"
#define VkglTestCase_012950_2 ".common_functions.max.lowp_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012950, VkglTestCase_012950_1, VkglTestCase_012950_2);

#define VkglTestCase_012951_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_012951_2 "common_functions.max.lowp_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012951, VkglTestCase_012951_1, VkglTestCase_012951_2);

#define VkglTestCase_012952_1 "dEQP-GLES3.functional.shaders.operator.c"
#define VkglTestCase_012952_2 "ommon_functions.max.mediump_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012952, VkglTestCase_012952_1, VkglTestCase_012952_2);

#define VkglTestCase_012953_1 "dEQP-GLES3.functional.shaders.operator.co"
#define VkglTestCase_012953_2 "mmon_functions.max.mediump_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012953, VkglTestCase_012953_1, VkglTestCase_012953_2);

#define VkglTestCase_012954_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_012954_2 "common_functions.max.highp_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012954, VkglTestCase_012954_1, VkglTestCase_012954_2);

#define VkglTestCase_012955_1 "dEQP-GLES3.functional.shaders.operator.c"
#define VkglTestCase_012955_2 "ommon_functions.max.highp_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012955, VkglTestCase_012955_1, VkglTestCase_012955_2);

#define VkglTestCase_012956_1 "dEQP-GLES3.functional.shaders.operator"
#define VkglTestCase_012956_2 ".common_functions.max.lowp_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012956, VkglTestCase_012956_1, VkglTestCase_012956_2);

#define VkglTestCase_012957_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_012957_2 "common_functions.max.lowp_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012957, VkglTestCase_012957_1, VkglTestCase_012957_2);

#define VkglTestCase_012958_1 "dEQP-GLES3.functional.shaders.operator.c"
#define VkglTestCase_012958_2 "ommon_functions.max.mediump_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012958, VkglTestCase_012958_1, VkglTestCase_012958_2);

#define VkglTestCase_012959_1 "dEQP-GLES3.functional.shaders.operator.co"
#define VkglTestCase_012959_2 "mmon_functions.max.mediump_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012959, VkglTestCase_012959_1, VkglTestCase_012959_2);

#define VkglTestCase_012960_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_012960_2 "common_functions.max.highp_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012960, VkglTestCase_012960_1, VkglTestCase_012960_2);

#define VkglTestCase_012961_1 "dEQP-GLES3.functional.shaders.operator.c"
#define VkglTestCase_012961_2 "ommon_functions.max.highp_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012961, VkglTestCase_012961_1, VkglTestCase_012961_2);

#define VkglTestCase_012962_1 "dEQP-GLES3.functional.shaders.operator.c"
#define VkglTestCase_012962_2 "ommon_functions.max.lowp_ivec2_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012962, VkglTestCase_012962_1, VkglTestCase_012962_2);

#define VkglTestCase_012963_1 "dEQP-GLES3.functional.shaders.operator.co"
#define VkglTestCase_012963_2 "mmon_functions.max.lowp_ivec2_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012963, VkglTestCase_012963_1, VkglTestCase_012963_2);

#define VkglTestCase_012964_1 "dEQP-GLES3.functional.shaders.operator.com"
#define VkglTestCase_012964_2 "mon_functions.max.mediump_ivec2_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012964, VkglTestCase_012964_1, VkglTestCase_012964_2);

#define VkglTestCase_012965_1 "dEQP-GLES3.functional.shaders.operator.comm"
#define VkglTestCase_012965_2 "on_functions.max.mediump_ivec2_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012965, VkglTestCase_012965_1, VkglTestCase_012965_2);

#define VkglTestCase_012966_1 "dEQP-GLES3.functional.shaders.operator.co"
#define VkglTestCase_012966_2 "mmon_functions.max.highp_ivec2_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012966, VkglTestCase_012966_1, VkglTestCase_012966_2);

#define VkglTestCase_012967_1 "dEQP-GLES3.functional.shaders.operator.com"
#define VkglTestCase_012967_2 "mon_functions.max.highp_ivec2_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012967, VkglTestCase_012967_1, VkglTestCase_012967_2);

#define VkglTestCase_012968_1 "dEQP-GLES3.functional.shaders.operator.c"
#define VkglTestCase_012968_2 "ommon_functions.max.lowp_ivec3_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012968, VkglTestCase_012968_1, VkglTestCase_012968_2);

#define VkglTestCase_012969_1 "dEQP-GLES3.functional.shaders.operator.co"
#define VkglTestCase_012969_2 "mmon_functions.max.lowp_ivec3_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012969, VkglTestCase_012969_1, VkglTestCase_012969_2);

#define VkglTestCase_012970_1 "dEQP-GLES3.functional.shaders.operator.com"
#define VkglTestCase_012970_2 "mon_functions.max.mediump_ivec3_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012970, VkglTestCase_012970_1, VkglTestCase_012970_2);

#define VkglTestCase_012971_1 "dEQP-GLES3.functional.shaders.operator.comm"
#define VkglTestCase_012971_2 "on_functions.max.mediump_ivec3_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012971, VkglTestCase_012971_1, VkglTestCase_012971_2);

#define VkglTestCase_012972_1 "dEQP-GLES3.functional.shaders.operator.co"
#define VkglTestCase_012972_2 "mmon_functions.max.highp_ivec3_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012972, VkglTestCase_012972_1, VkglTestCase_012972_2);

#define VkglTestCase_012973_1 "dEQP-GLES3.functional.shaders.operator.com"
#define VkglTestCase_012973_2 "mon_functions.max.highp_ivec3_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012973, VkglTestCase_012973_1, VkglTestCase_012973_2);

#define VkglTestCase_012974_1 "dEQP-GLES3.functional.shaders.operator.c"
#define VkglTestCase_012974_2 "ommon_functions.max.lowp_ivec4_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012974, VkglTestCase_012974_1, VkglTestCase_012974_2);

#define VkglTestCase_012975_1 "dEQP-GLES3.functional.shaders.operator.co"
#define VkglTestCase_012975_2 "mmon_functions.max.lowp_ivec4_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012975, VkglTestCase_012975_1, VkglTestCase_012975_2);

#define VkglTestCase_012976_1 "dEQP-GLES3.functional.shaders.operator.com"
#define VkglTestCase_012976_2 "mon_functions.max.mediump_ivec4_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012976, VkglTestCase_012976_1, VkglTestCase_012976_2);

#define VkglTestCase_012977_1 "dEQP-GLES3.functional.shaders.operator.comm"
#define VkglTestCase_012977_2 "on_functions.max.mediump_ivec4_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012977, VkglTestCase_012977_1, VkglTestCase_012977_2);

#define VkglTestCase_012978_1 "dEQP-GLES3.functional.shaders.operator.co"
#define VkglTestCase_012978_2 "mmon_functions.max.highp_ivec4_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012978, VkglTestCase_012978_1, VkglTestCase_012978_2);

#define VkglTestCase_012979_1 "dEQP-GLES3.functional.shaders.operator.com"
#define VkglTestCase_012979_2 "mon_functions.max.highp_ivec4_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012979, VkglTestCase_012979_1, VkglTestCase_012979_2);

#define VkglTestCase_012980_1 "dEQP-GLES3.functional.shaders.operator"
#define VkglTestCase_012980_2 ".common_functions.max.lowp_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012980, VkglTestCase_012980_1, VkglTestCase_012980_2);

#define VkglTestCase_012981_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_012981_2 "common_functions.max.lowp_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012981, VkglTestCase_012981_1, VkglTestCase_012981_2);

#define VkglTestCase_012982_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_012982_2 "common_functions.max.mediump_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012982, VkglTestCase_012982_1, VkglTestCase_012982_2);

#define VkglTestCase_012983_1 "dEQP-GLES3.functional.shaders.operator.c"
#define VkglTestCase_012983_2 "ommon_functions.max.mediump_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012983, VkglTestCase_012983_1, VkglTestCase_012983_2);

#define VkglTestCase_012984_1 "dEQP-GLES3.functional.shaders.operator"
#define VkglTestCase_012984_2 ".common_functions.max.highp_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012984, VkglTestCase_012984_1, VkglTestCase_012984_2);

#define VkglTestCase_012985_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_012985_2 "common_functions.max.highp_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012985, VkglTestCase_012985_1, VkglTestCase_012985_2);

#define VkglTestCase_012986_1 "dEQP-GLES3.functional.shaders.operator"
#define VkglTestCase_012986_2 ".common_functions.max.lowp_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012986, VkglTestCase_012986_1, VkglTestCase_012986_2);

#define VkglTestCase_012987_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_012987_2 "common_functions.max.lowp_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012987, VkglTestCase_012987_1, VkglTestCase_012987_2);

#define VkglTestCase_012988_1 "dEQP-GLES3.functional.shaders.operator.c"
#define VkglTestCase_012988_2 "ommon_functions.max.mediump_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012988, VkglTestCase_012988_1, VkglTestCase_012988_2);

#define VkglTestCase_012989_1 "dEQP-GLES3.functional.shaders.operator.co"
#define VkglTestCase_012989_2 "mmon_functions.max.mediump_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012989, VkglTestCase_012989_1, VkglTestCase_012989_2);

#define VkglTestCase_012990_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_012990_2 "common_functions.max.highp_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012990, VkglTestCase_012990_1, VkglTestCase_012990_2);

#define VkglTestCase_012991_1 "dEQP-GLES3.functional.shaders.operator.c"
#define VkglTestCase_012991_2 "ommon_functions.max.highp_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012991, VkglTestCase_012991_1, VkglTestCase_012991_2);

#define VkglTestCase_012992_1 "dEQP-GLES3.functional.shaders.operator"
#define VkglTestCase_012992_2 ".common_functions.max.lowp_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012992, VkglTestCase_012992_1, VkglTestCase_012992_2);

#define VkglTestCase_012993_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_012993_2 "common_functions.max.lowp_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012993, VkglTestCase_012993_1, VkglTestCase_012993_2);

#define VkglTestCase_012994_1 "dEQP-GLES3.functional.shaders.operator.c"
#define VkglTestCase_012994_2 "ommon_functions.max.mediump_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012994, VkglTestCase_012994_1, VkglTestCase_012994_2);

#define VkglTestCase_012995_1 "dEQP-GLES3.functional.shaders.operator.co"
#define VkglTestCase_012995_2 "mmon_functions.max.mediump_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012995, VkglTestCase_012995_1, VkglTestCase_012995_2);

#define VkglTestCase_012996_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_012996_2 "common_functions.max.highp_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012996, VkglTestCase_012996_1, VkglTestCase_012996_2);

#define VkglTestCase_012997_1 "dEQP-GLES3.functional.shaders.operator.c"
#define VkglTestCase_012997_2 "ommon_functions.max.highp_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012997, VkglTestCase_012997_1, VkglTestCase_012997_2);

#define VkglTestCase_012998_1 "dEQP-GLES3.functional.shaders.operator"
#define VkglTestCase_012998_2 ".common_functions.max.lowp_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012998, VkglTestCase_012998_1, VkglTestCase_012998_2);

#define VkglTestCase_012999_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_012999_2 "common_functions.max.lowp_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012999, VkglTestCase_012999_1, VkglTestCase_012999_2);

#define VkglTestCase_013000_1 "dEQP-GLES3.functional.shaders.operator.c"
#define VkglTestCase_013000_2 "ommon_functions.max.mediump_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_013000, VkglTestCase_013000_1, VkglTestCase_013000_2);

#define VkglTestCase_013001_1 "dEQP-GLES3.functional.shaders.operator.co"
#define VkglTestCase_013001_2 "mmon_functions.max.mediump_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_013001, VkglTestCase_013001_1, VkglTestCase_013001_2);

#define VkglTestCase_013002_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_013002_2 "common_functions.max.highp_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_013002, VkglTestCase_013002_1, VkglTestCase_013002_2);

#define VkglTestCase_013003_1 "dEQP-GLES3.functional.shaders.operator.c"
#define VkglTestCase_013003_2 "ommon_functions.max.highp_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_013003, VkglTestCase_013003_1, VkglTestCase_013003_2);

#define VkglTestCase_013004_1 "dEQP-GLES3.functional.shaders.operator.co"
#define VkglTestCase_013004_2 "mmon_functions.max.lowp_uvec2_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_013004, VkglTestCase_013004_1, VkglTestCase_013004_2);

#define VkglTestCase_013005_1 "dEQP-GLES3.functional.shaders.operator.com"
#define VkglTestCase_013005_2 "mon_functions.max.lowp_uvec2_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_013005, VkglTestCase_013005_1, VkglTestCase_013005_2);

#define VkglTestCase_013006_1 "dEQP-GLES3.functional.shaders.operator.com"
#define VkglTestCase_013006_2 "mon_functions.max.mediump_uvec2_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_013006, VkglTestCase_013006_1, VkglTestCase_013006_2);

#define VkglTestCase_013007_1 "dEQP-GLES3.functional.shaders.operator.comm"
#define VkglTestCase_013007_2 "on_functions.max.mediump_uvec2_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_013007, VkglTestCase_013007_1, VkglTestCase_013007_2);

#define VkglTestCase_013008_1 "dEQP-GLES3.functional.shaders.operator.co"
#define VkglTestCase_013008_2 "mmon_functions.max.highp_uvec2_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_013008, VkglTestCase_013008_1, VkglTestCase_013008_2);

#define VkglTestCase_013009_1 "dEQP-GLES3.functional.shaders.operator.com"
#define VkglTestCase_013009_2 "mon_functions.max.highp_uvec2_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_013009, VkglTestCase_013009_1, VkglTestCase_013009_2);

#define VkglTestCase_013010_1 "dEQP-GLES3.functional.shaders.operator.co"
#define VkglTestCase_013010_2 "mmon_functions.max.lowp_uvec3_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_013010, VkglTestCase_013010_1, VkglTestCase_013010_2);

#define VkglTestCase_013011_1 "dEQP-GLES3.functional.shaders.operator.com"
#define VkglTestCase_013011_2 "mon_functions.max.lowp_uvec3_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_013011, VkglTestCase_013011_1, VkglTestCase_013011_2);

#define VkglTestCase_013012_1 "dEQP-GLES3.functional.shaders.operator.com"
#define VkglTestCase_013012_2 "mon_functions.max.mediump_uvec3_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_013012, VkglTestCase_013012_1, VkglTestCase_013012_2);

#define VkglTestCase_013013_1 "dEQP-GLES3.functional.shaders.operator.comm"
#define VkglTestCase_013013_2 "on_functions.max.mediump_uvec3_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_013013, VkglTestCase_013013_1, VkglTestCase_013013_2);

#define VkglTestCase_013014_1 "dEQP-GLES3.functional.shaders.operator.co"
#define VkglTestCase_013014_2 "mmon_functions.max.highp_uvec3_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_013014, VkglTestCase_013014_1, VkglTestCase_013014_2);

#define VkglTestCase_013015_1 "dEQP-GLES3.functional.shaders.operator.com"
#define VkglTestCase_013015_2 "mon_functions.max.highp_uvec3_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_013015, VkglTestCase_013015_1, VkglTestCase_013015_2);

#define VkglTestCase_013016_1 "dEQP-GLES3.functional.shaders.operator.co"
#define VkglTestCase_013016_2 "mmon_functions.max.lowp_uvec4_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_013016, VkglTestCase_013016_1, VkglTestCase_013016_2);

#define VkglTestCase_013017_1 "dEQP-GLES3.functional.shaders.operator.com"
#define VkglTestCase_013017_2 "mon_functions.max.lowp_uvec4_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_013017, VkglTestCase_013017_1, VkglTestCase_013017_2);

#define VkglTestCase_013018_1 "dEQP-GLES3.functional.shaders.operator.com"
#define VkglTestCase_013018_2 "mon_functions.max.mediump_uvec4_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_013018, VkglTestCase_013018_1, VkglTestCase_013018_2);

#define VkglTestCase_013019_1 "dEQP-GLES3.functional.shaders.operator.comm"
#define VkglTestCase_013019_2 "on_functions.max.mediump_uvec4_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_013019, VkglTestCase_013019_1, VkglTestCase_013019_2);

#define VkglTestCase_013020_1 "dEQP-GLES3.functional.shaders.operator.co"
#define VkglTestCase_013020_2 "mmon_functions.max.highp_uvec4_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_013020, VkglTestCase_013020_1, VkglTestCase_013020_2);

#define VkglTestCase_013021_1 "dEQP-GLES3.functional.shaders.operator.com"
#define VkglTestCase_013021_2 "mon_functions.max.highp_uvec4_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_013021, VkglTestCase_013021_1, VkglTestCase_013021_2);
