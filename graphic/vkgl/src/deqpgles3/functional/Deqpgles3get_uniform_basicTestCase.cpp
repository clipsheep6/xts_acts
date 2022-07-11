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
#include "../ActsDeqpgles30037TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_036901_1 "dEQP-GLES3.functional.uniform_api.value"
#define VkglTestCase_036901_2 ".initial.get_uniform.basic.float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036901, VkglTestCase_036901_1, VkglTestCase_036901_2);

#define VkglTestCase_036902_1 "dEQP-GLES3.functional.uniform_api.value."
#define VkglTestCase_036902_2 "initial.get_uniform.basic.float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036902, VkglTestCase_036902_1, VkglTestCase_036902_2);

#define VkglTestCase_036903_1 "dEQP-GLES3.functional.uniform_api.valu"
#define VkglTestCase_036903_2 "e.initial.get_uniform.basic.float_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036903, VkglTestCase_036903_1, VkglTestCase_036903_2);

#define VkglTestCase_036904_1 "dEQP-GLES3.functional.uniform_api.valu"
#define VkglTestCase_036904_2 "e.initial.get_uniform.basic.vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036904, VkglTestCase_036904_1, VkglTestCase_036904_2);

#define VkglTestCase_036905_1 "dEQP-GLES3.functional.uniform_api.value"
#define VkglTestCase_036905_2 ".initial.get_uniform.basic.vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036905, VkglTestCase_036905_1, VkglTestCase_036905_2);

#define VkglTestCase_036906_1 "dEQP-GLES3.functional.uniform_api.val"
#define VkglTestCase_036906_2 "ue.initial.get_uniform.basic.vec2_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036906, VkglTestCase_036906_1, VkglTestCase_036906_2);

#define VkglTestCase_036907_1 "dEQP-GLES3.functional.uniform_api.valu"
#define VkglTestCase_036907_2 "e.initial.get_uniform.basic.vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036907, VkglTestCase_036907_1, VkglTestCase_036907_2);

#define VkglTestCase_036908_1 "dEQP-GLES3.functional.uniform_api.value"
#define VkglTestCase_036908_2 ".initial.get_uniform.basic.vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036908, VkglTestCase_036908_1, VkglTestCase_036908_2);

#define VkglTestCase_036909_1 "dEQP-GLES3.functional.uniform_api.val"
#define VkglTestCase_036909_2 "ue.initial.get_uniform.basic.vec3_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036909, VkglTestCase_036909_1, VkglTestCase_036909_2);

#define VkglTestCase_036910_1 "dEQP-GLES3.functional.uniform_api.valu"
#define VkglTestCase_036910_2 "e.initial.get_uniform.basic.vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036910, VkglTestCase_036910_1, VkglTestCase_036910_2);

#define VkglTestCase_036911_1 "dEQP-GLES3.functional.uniform_api.value"
#define VkglTestCase_036911_2 ".initial.get_uniform.basic.vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036911, VkglTestCase_036911_1, VkglTestCase_036911_2);

#define VkglTestCase_036912_1 "dEQP-GLES3.functional.uniform_api.val"
#define VkglTestCase_036912_2 "ue.initial.get_uniform.basic.vec4_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036912, VkglTestCase_036912_1, VkglTestCase_036912_2);

#define VkglTestCase_036913_1 "dEQP-GLES3.functional.uniform_api.valu"
#define VkglTestCase_036913_2 "e.initial.get_uniform.basic.mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036913, VkglTestCase_036913_1, VkglTestCase_036913_2);

#define VkglTestCase_036914_1 "dEQP-GLES3.functional.uniform_api.value"
#define VkglTestCase_036914_2 ".initial.get_uniform.basic.mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036914, VkglTestCase_036914_1, VkglTestCase_036914_2);

#define VkglTestCase_036915_1 "dEQP-GLES3.functional.uniform_api.val"
#define VkglTestCase_036915_2 "ue.initial.get_uniform.basic.mat2_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036915, VkglTestCase_036915_1, VkglTestCase_036915_2);

#define VkglTestCase_036916_1 "dEQP-GLES3.functional.uniform_api.value"
#define VkglTestCase_036916_2 ".initial.get_uniform.basic.mat2x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036916, VkglTestCase_036916_1, VkglTestCase_036916_2);

#define VkglTestCase_036917_1 "dEQP-GLES3.functional.uniform_api.value."
#define VkglTestCase_036917_2 "initial.get_uniform.basic.mat2x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036917, VkglTestCase_036917_1, VkglTestCase_036917_2);

#define VkglTestCase_036918_1 "dEQP-GLES3.functional.uniform_api.valu"
#define VkglTestCase_036918_2 "e.initial.get_uniform.basic.mat2x3_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036918, VkglTestCase_036918_1, VkglTestCase_036918_2);

#define VkglTestCase_036919_1 "dEQP-GLES3.functional.uniform_api.value"
#define VkglTestCase_036919_2 ".initial.get_uniform.basic.mat2x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036919, VkglTestCase_036919_1, VkglTestCase_036919_2);

#define VkglTestCase_036920_1 "dEQP-GLES3.functional.uniform_api.value."
#define VkglTestCase_036920_2 "initial.get_uniform.basic.mat2x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036920, VkglTestCase_036920_1, VkglTestCase_036920_2);

#define VkglTestCase_036921_1 "dEQP-GLES3.functional.uniform_api.valu"
#define VkglTestCase_036921_2 "e.initial.get_uniform.basic.mat2x4_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036921, VkglTestCase_036921_1, VkglTestCase_036921_2);

#define VkglTestCase_036922_1 "dEQP-GLES3.functional.uniform_api.value"
#define VkglTestCase_036922_2 ".initial.get_uniform.basic.mat3x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036922, VkglTestCase_036922_1, VkglTestCase_036922_2);

#define VkglTestCase_036923_1 "dEQP-GLES3.functional.uniform_api.value."
#define VkglTestCase_036923_2 "initial.get_uniform.basic.mat3x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036923, VkglTestCase_036923_1, VkglTestCase_036923_2);

#define VkglTestCase_036924_1 "dEQP-GLES3.functional.uniform_api.valu"
#define VkglTestCase_036924_2 "e.initial.get_uniform.basic.mat3x2_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036924, VkglTestCase_036924_1, VkglTestCase_036924_2);

#define VkglTestCase_036925_1 "dEQP-GLES3.functional.uniform_api.valu"
#define VkglTestCase_036925_2 "e.initial.get_uniform.basic.mat3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036925, VkglTestCase_036925_1, VkglTestCase_036925_2);

#define VkglTestCase_036926_1 "dEQP-GLES3.functional.uniform_api.value"
#define VkglTestCase_036926_2 ".initial.get_uniform.basic.mat3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036926, VkglTestCase_036926_1, VkglTestCase_036926_2);

#define VkglTestCase_036927_1 "dEQP-GLES3.functional.uniform_api.val"
#define VkglTestCase_036927_2 "ue.initial.get_uniform.basic.mat3_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036927, VkglTestCase_036927_1, VkglTestCase_036927_2);

#define VkglTestCase_036928_1 "dEQP-GLES3.functional.uniform_api.value"
#define VkglTestCase_036928_2 ".initial.get_uniform.basic.mat3x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036928, VkglTestCase_036928_1, VkglTestCase_036928_2);

#define VkglTestCase_036929_1 "dEQP-GLES3.functional.uniform_api.value."
#define VkglTestCase_036929_2 "initial.get_uniform.basic.mat3x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036929, VkglTestCase_036929_1, VkglTestCase_036929_2);

#define VkglTestCase_036930_1 "dEQP-GLES3.functional.uniform_api.valu"
#define VkglTestCase_036930_2 "e.initial.get_uniform.basic.mat3x4_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036930, VkglTestCase_036930_1, VkglTestCase_036930_2);

#define VkglTestCase_036931_1 "dEQP-GLES3.functional.uniform_api.value"
#define VkglTestCase_036931_2 ".initial.get_uniform.basic.mat4x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036931, VkglTestCase_036931_1, VkglTestCase_036931_2);

#define VkglTestCase_036932_1 "dEQP-GLES3.functional.uniform_api.value."
#define VkglTestCase_036932_2 "initial.get_uniform.basic.mat4x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036932, VkglTestCase_036932_1, VkglTestCase_036932_2);

#define VkglTestCase_036933_1 "dEQP-GLES3.functional.uniform_api.valu"
#define VkglTestCase_036933_2 "e.initial.get_uniform.basic.mat4x2_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036933, VkglTestCase_036933_1, VkglTestCase_036933_2);

#define VkglTestCase_036934_1 "dEQP-GLES3.functional.uniform_api.value"
#define VkglTestCase_036934_2 ".initial.get_uniform.basic.mat4x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036934, VkglTestCase_036934_1, VkglTestCase_036934_2);

#define VkglTestCase_036935_1 "dEQP-GLES3.functional.uniform_api.value."
#define VkglTestCase_036935_2 "initial.get_uniform.basic.mat4x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036935, VkglTestCase_036935_1, VkglTestCase_036935_2);

#define VkglTestCase_036936_1 "dEQP-GLES3.functional.uniform_api.valu"
#define VkglTestCase_036936_2 "e.initial.get_uniform.basic.mat4x3_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036936, VkglTestCase_036936_1, VkglTestCase_036936_2);

#define VkglTestCase_036937_1 "dEQP-GLES3.functional.uniform_api.valu"
#define VkglTestCase_036937_2 "e.initial.get_uniform.basic.mat4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036937, VkglTestCase_036937_1, VkglTestCase_036937_2);

#define VkglTestCase_036938_1 "dEQP-GLES3.functional.uniform_api.value"
#define VkglTestCase_036938_2 ".initial.get_uniform.basic.mat4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036938, VkglTestCase_036938_1, VkglTestCase_036938_2);

#define VkglTestCase_036939_1 "dEQP-GLES3.functional.uniform_api.val"
#define VkglTestCase_036939_2 "ue.initial.get_uniform.basic.mat4_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036939, VkglTestCase_036939_1, VkglTestCase_036939_2);

#define VkglTestCase_036940_1 "dEQP-GLES3.functional.uniform_api.valu"
#define VkglTestCase_036940_2 "e.initial.get_uniform.basic.int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036940, VkglTestCase_036940_1, VkglTestCase_036940_2);

#define VkglTestCase_036941_1 "dEQP-GLES3.functional.uniform_api.value"
#define VkglTestCase_036941_2 ".initial.get_uniform.basic.int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036941, VkglTestCase_036941_1, VkglTestCase_036941_2);

#define VkglTestCase_036942_1 "dEQP-GLES3.functional.uniform_api.val"
#define VkglTestCase_036942_2 "ue.initial.get_uniform.basic.int_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036942, VkglTestCase_036942_1, VkglTestCase_036942_2);

#define VkglTestCase_036943_1 "dEQP-GLES3.functional.uniform_api.value"
#define VkglTestCase_036943_2 ".initial.get_uniform.basic.ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036943, VkglTestCase_036943_1, VkglTestCase_036943_2);

#define VkglTestCase_036944_1 "dEQP-GLES3.functional.uniform_api.value."
#define VkglTestCase_036944_2 "initial.get_uniform.basic.ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036944, VkglTestCase_036944_1, VkglTestCase_036944_2);

#define VkglTestCase_036945_1 "dEQP-GLES3.functional.uniform_api.valu"
#define VkglTestCase_036945_2 "e.initial.get_uniform.basic.ivec2_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036945, VkglTestCase_036945_1, VkglTestCase_036945_2);

#define VkglTestCase_036946_1 "dEQP-GLES3.functional.uniform_api.value"
#define VkglTestCase_036946_2 ".initial.get_uniform.basic.ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036946, VkglTestCase_036946_1, VkglTestCase_036946_2);

#define VkglTestCase_036947_1 "dEQP-GLES3.functional.uniform_api.value."
#define VkglTestCase_036947_2 "initial.get_uniform.basic.ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036947, VkglTestCase_036947_1, VkglTestCase_036947_2);

#define VkglTestCase_036948_1 "dEQP-GLES3.functional.uniform_api.valu"
#define VkglTestCase_036948_2 "e.initial.get_uniform.basic.ivec3_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036948, VkglTestCase_036948_1, VkglTestCase_036948_2);

#define VkglTestCase_036949_1 "dEQP-GLES3.functional.uniform_api.value"
#define VkglTestCase_036949_2 ".initial.get_uniform.basic.ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036949, VkglTestCase_036949_1, VkglTestCase_036949_2);

#define VkglTestCase_036950_1 "dEQP-GLES3.functional.uniform_api.value."
#define VkglTestCase_036950_2 "initial.get_uniform.basic.ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036950, VkglTestCase_036950_1, VkglTestCase_036950_2);

#define VkglTestCase_036951_1 "dEQP-GLES3.functional.uniform_api.valu"
#define VkglTestCase_036951_2 "e.initial.get_uniform.basic.ivec4_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036951, VkglTestCase_036951_1, VkglTestCase_036951_2);

#define VkglTestCase_036952_1 "dEQP-GLES3.functional.uniform_api.valu"
#define VkglTestCase_036952_2 "e.initial.get_uniform.basic.uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036952, VkglTestCase_036952_1, VkglTestCase_036952_2);

#define VkglTestCase_036953_1 "dEQP-GLES3.functional.uniform_api.value"
#define VkglTestCase_036953_2 ".initial.get_uniform.basic.uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036953, VkglTestCase_036953_1, VkglTestCase_036953_2);

#define VkglTestCase_036954_1 "dEQP-GLES3.functional.uniform_api.val"
#define VkglTestCase_036954_2 "ue.initial.get_uniform.basic.uint_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036954, VkglTestCase_036954_1, VkglTestCase_036954_2);

#define VkglTestCase_036955_1 "dEQP-GLES3.functional.uniform_api.value"
#define VkglTestCase_036955_2 ".initial.get_uniform.basic.uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036955, VkglTestCase_036955_1, VkglTestCase_036955_2);

#define VkglTestCase_036956_1 "dEQP-GLES3.functional.uniform_api.value."
#define VkglTestCase_036956_2 "initial.get_uniform.basic.uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036956, VkglTestCase_036956_1, VkglTestCase_036956_2);

#define VkglTestCase_036957_1 "dEQP-GLES3.functional.uniform_api.valu"
#define VkglTestCase_036957_2 "e.initial.get_uniform.basic.uvec2_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036957, VkglTestCase_036957_1, VkglTestCase_036957_2);

#define VkglTestCase_036958_1 "dEQP-GLES3.functional.uniform_api.value"
#define VkglTestCase_036958_2 ".initial.get_uniform.basic.uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036958, VkglTestCase_036958_1, VkglTestCase_036958_2);

#define VkglTestCase_036959_1 "dEQP-GLES3.functional.uniform_api.value."
#define VkglTestCase_036959_2 "initial.get_uniform.basic.uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036959, VkglTestCase_036959_1, VkglTestCase_036959_2);

#define VkglTestCase_036960_1 "dEQP-GLES3.functional.uniform_api.valu"
#define VkglTestCase_036960_2 "e.initial.get_uniform.basic.uvec3_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036960, VkglTestCase_036960_1, VkglTestCase_036960_2);

#define VkglTestCase_036961_1 "dEQP-GLES3.functional.uniform_api.value"
#define VkglTestCase_036961_2 ".initial.get_uniform.basic.uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036961, VkglTestCase_036961_1, VkglTestCase_036961_2);

#define VkglTestCase_036962_1 "dEQP-GLES3.functional.uniform_api.value."
#define VkglTestCase_036962_2 "initial.get_uniform.basic.uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036962, VkglTestCase_036962_1, VkglTestCase_036962_2);

#define VkglTestCase_036963_1 "dEQP-GLES3.functional.uniform_api.valu"
#define VkglTestCase_036963_2 "e.initial.get_uniform.basic.uvec4_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036963, VkglTestCase_036963_1, VkglTestCase_036963_2);

#define VkglTestCase_036964_1 "dEQP-GLES3.functional.uniform_api.value.ini"
#define VkglTestCase_036964_2 "tial.get_uniform.basic.bool_api_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036964, VkglTestCase_036964_1, VkglTestCase_036964_2);

#define VkglTestCase_036965_1 "dEQP-GLES3.functional.uniform_api.value.init"
#define VkglTestCase_036965_2 "ial.get_uniform.basic.bool_api_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036965, VkglTestCase_036965_1, VkglTestCase_036965_2);

#define VkglTestCase_036966_1 "dEQP-GLES3.functional.uniform_api.value.in"
#define VkglTestCase_036966_2 "itial.get_uniform.basic.bool_api_float_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036966, VkglTestCase_036966_1, VkglTestCase_036966_2);

#define VkglTestCase_036967_1 "dEQP-GLES3.functional.uniform_api.value.in"
#define VkglTestCase_036967_2 "itial.get_uniform.basic.bool_api_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036967, VkglTestCase_036967_1, VkglTestCase_036967_2);

#define VkglTestCase_036968_1 "dEQP-GLES3.functional.uniform_api.value.ini"
#define VkglTestCase_036968_2 "tial.get_uniform.basic.bool_api_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036968, VkglTestCase_036968_1, VkglTestCase_036968_2);

#define VkglTestCase_036969_1 "dEQP-GLES3.functional.uniform_api.value.i"
#define VkglTestCase_036969_2 "nitial.get_uniform.basic.bool_api_int_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036969, VkglTestCase_036969_1, VkglTestCase_036969_2);

#define VkglTestCase_036970_1 "dEQP-GLES3.functional.uniform_api.value.ini"
#define VkglTestCase_036970_2 "tial.get_uniform.basic.bool_api_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036970, VkglTestCase_036970_1, VkglTestCase_036970_2);

#define VkglTestCase_036971_1 "dEQP-GLES3.functional.uniform_api.value.init"
#define VkglTestCase_036971_2 "ial.get_uniform.basic.bool_api_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036971, VkglTestCase_036971_1, VkglTestCase_036971_2);

#define VkglTestCase_036972_1 "dEQP-GLES3.functional.uniform_api.value.in"
#define VkglTestCase_036972_2 "itial.get_uniform.basic.bool_api_uint_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036972, VkglTestCase_036972_1, VkglTestCase_036972_2);

#define VkglTestCase_036973_1 "dEQP-GLES3.functional.uniform_api.value.init"
#define VkglTestCase_036973_2 "ial.get_uniform.basic.bvec2_api_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036973, VkglTestCase_036973_1, VkglTestCase_036973_2);

#define VkglTestCase_036974_1 "dEQP-GLES3.functional.uniform_api.value.initi"
#define VkglTestCase_036974_2 "al.get_uniform.basic.bvec2_api_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036974, VkglTestCase_036974_1, VkglTestCase_036974_2);

#define VkglTestCase_036975_1 "dEQP-GLES3.functional.uniform_api.value.ini"
#define VkglTestCase_036975_2 "tial.get_uniform.basic.bvec2_api_float_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036975, VkglTestCase_036975_1, VkglTestCase_036975_2);

#define VkglTestCase_036976_1 "dEQP-GLES3.functional.uniform_api.value.ini"
#define VkglTestCase_036976_2 "tial.get_uniform.basic.bvec2_api_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036976, VkglTestCase_036976_1, VkglTestCase_036976_2);

#define VkglTestCase_036977_1 "dEQP-GLES3.functional.uniform_api.value.init"
#define VkglTestCase_036977_2 "ial.get_uniform.basic.bvec2_api_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036977, VkglTestCase_036977_1, VkglTestCase_036977_2);

#define VkglTestCase_036978_1 "dEQP-GLES3.functional.uniform_api.value.in"
#define VkglTestCase_036978_2 "itial.get_uniform.basic.bvec2_api_int_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036978, VkglTestCase_036978_1, VkglTestCase_036978_2);

#define VkglTestCase_036979_1 "dEQP-GLES3.functional.uniform_api.value.ini"
#define VkglTestCase_036979_2 "tial.get_uniform.basic.bvec2_api_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036979, VkglTestCase_036979_1, VkglTestCase_036979_2);

#define VkglTestCase_036980_1 "dEQP-GLES3.functional.uniform_api.value.init"
#define VkglTestCase_036980_2 "ial.get_uniform.basic.bvec2_api_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036980, VkglTestCase_036980_1, VkglTestCase_036980_2);

#define VkglTestCase_036981_1 "dEQP-GLES3.functional.uniform_api.value.in"
#define VkglTestCase_036981_2 "itial.get_uniform.basic.bvec2_api_uint_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036981, VkglTestCase_036981_1, VkglTestCase_036981_2);

#define VkglTestCase_036982_1 "dEQP-GLES3.functional.uniform_api.value.init"
#define VkglTestCase_036982_2 "ial.get_uniform.basic.bvec3_api_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036982, VkglTestCase_036982_1, VkglTestCase_036982_2);

#define VkglTestCase_036983_1 "dEQP-GLES3.functional.uniform_api.value.initi"
#define VkglTestCase_036983_2 "al.get_uniform.basic.bvec3_api_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036983, VkglTestCase_036983_1, VkglTestCase_036983_2);

#define VkglTestCase_036984_1 "dEQP-GLES3.functional.uniform_api.value.ini"
#define VkglTestCase_036984_2 "tial.get_uniform.basic.bvec3_api_float_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036984, VkglTestCase_036984_1, VkglTestCase_036984_2);

#define VkglTestCase_036985_1 "dEQP-GLES3.functional.uniform_api.value.ini"
#define VkglTestCase_036985_2 "tial.get_uniform.basic.bvec3_api_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036985, VkglTestCase_036985_1, VkglTestCase_036985_2);

#define VkglTestCase_036986_1 "dEQP-GLES3.functional.uniform_api.value.init"
#define VkglTestCase_036986_2 "ial.get_uniform.basic.bvec3_api_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036986, VkglTestCase_036986_1, VkglTestCase_036986_2);

#define VkglTestCase_036987_1 "dEQP-GLES3.functional.uniform_api.value.in"
#define VkglTestCase_036987_2 "itial.get_uniform.basic.bvec3_api_int_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036987, VkglTestCase_036987_1, VkglTestCase_036987_2);

#define VkglTestCase_036988_1 "dEQP-GLES3.functional.uniform_api.value.ini"
#define VkglTestCase_036988_2 "tial.get_uniform.basic.bvec3_api_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036988, VkglTestCase_036988_1, VkglTestCase_036988_2);

#define VkglTestCase_036989_1 "dEQP-GLES3.functional.uniform_api.value.init"
#define VkglTestCase_036989_2 "ial.get_uniform.basic.bvec3_api_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036989, VkglTestCase_036989_1, VkglTestCase_036989_2);

#define VkglTestCase_036990_1 "dEQP-GLES3.functional.uniform_api.value.in"
#define VkglTestCase_036990_2 "itial.get_uniform.basic.bvec3_api_uint_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036990, VkglTestCase_036990_1, VkglTestCase_036990_2);

#define VkglTestCase_036991_1 "dEQP-GLES3.functional.uniform_api.value.init"
#define VkglTestCase_036991_2 "ial.get_uniform.basic.bvec4_api_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036991, VkglTestCase_036991_1, VkglTestCase_036991_2);

#define VkglTestCase_036992_1 "dEQP-GLES3.functional.uniform_api.value.initi"
#define VkglTestCase_036992_2 "al.get_uniform.basic.bvec4_api_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036992, VkglTestCase_036992_1, VkglTestCase_036992_2);

#define VkglTestCase_036993_1 "dEQP-GLES3.functional.uniform_api.value.ini"
#define VkglTestCase_036993_2 "tial.get_uniform.basic.bvec4_api_float_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036993, VkglTestCase_036993_1, VkglTestCase_036993_2);

#define VkglTestCase_036994_1 "dEQP-GLES3.functional.uniform_api.value.ini"
#define VkglTestCase_036994_2 "tial.get_uniform.basic.bvec4_api_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036994, VkglTestCase_036994_1, VkglTestCase_036994_2);

#define VkglTestCase_036995_1 "dEQP-GLES3.functional.uniform_api.value.init"
#define VkglTestCase_036995_2 "ial.get_uniform.basic.bvec4_api_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036995, VkglTestCase_036995_1, VkglTestCase_036995_2);

#define VkglTestCase_036996_1 "dEQP-GLES3.functional.uniform_api.value.in"
#define VkglTestCase_036996_2 "itial.get_uniform.basic.bvec4_api_int_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036996, VkglTestCase_036996_1, VkglTestCase_036996_2);

#define VkglTestCase_036997_1 "dEQP-GLES3.functional.uniform_api.value.ini"
#define VkglTestCase_036997_2 "tial.get_uniform.basic.bvec4_api_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036997, VkglTestCase_036997_1, VkglTestCase_036997_2);

#define VkglTestCase_036998_1 "dEQP-GLES3.functional.uniform_api.value.init"
#define VkglTestCase_036998_2 "ial.get_uniform.basic.bvec4_api_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036998, VkglTestCase_036998_1, VkglTestCase_036998_2);

#define VkglTestCase_036999_1 "dEQP-GLES3.functional.uniform_api.value.in"
#define VkglTestCase_036999_2 "itial.get_uniform.basic.bvec4_api_uint_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036999, VkglTestCase_036999_1, VkglTestCase_036999_2);

#define VkglTestCase_037000_1 "dEQP-GLES3.functional.uniform_api.value.i"
#define VkglTestCase_037000_2 "nitial.get_uniform.basic.sampler2D_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037000, VkglTestCase_037000_1, VkglTestCase_037000_2);

#define VkglTestCase_037001_1 "dEQP-GLES3.functional.uniform_api.value.in"
#define VkglTestCase_037001_2 "itial.get_uniform.basic.sampler2D_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037001, VkglTestCase_037001_1, VkglTestCase_037001_2);

#define VkglTestCase_037002_1 "dEQP-GLES3.functional.uniform_api.value."
#define VkglTestCase_037002_2 "initial.get_uniform.basic.sampler2D_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037002, VkglTestCase_037002_1, VkglTestCase_037002_2);

#define VkglTestCase_037003_1 "dEQP-GLES3.functional.uniform_api.value.in"
#define VkglTestCase_037003_2 "itial.get_uniform.basic.samplerCube_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037003, VkglTestCase_037003_1, VkglTestCase_037003_2);

#define VkglTestCase_037004_1 "dEQP-GLES3.functional.uniform_api.value.ini"
#define VkglTestCase_037004_2 "tial.get_uniform.basic.samplerCube_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037004, VkglTestCase_037004_1, VkglTestCase_037004_2);

#define VkglTestCase_037005_1 "dEQP-GLES3.functional.uniform_api.value.i"
#define VkglTestCase_037005_2 "nitial.get_uniform.basic.samplerCube_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037005, VkglTestCase_037005_1, VkglTestCase_037005_2);

#define VkglTestCase_037309_1 "dEQP-GLES3.functional.uniform_api.value.assig"
#define VkglTestCase_037309_2 "ned.by_pointer.get_uniform.basic.float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037309, VkglTestCase_037309_1, VkglTestCase_037309_2);

#define VkglTestCase_037310_1 "dEQP-GLES3.functional.uniform_api.value.assign"
#define VkglTestCase_037310_2 "ed.by_pointer.get_uniform.basic.float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037310, VkglTestCase_037310_1, VkglTestCase_037310_2);

#define VkglTestCase_037311_1 "dEQP-GLES3.functional.uniform_api.value.assi"
#define VkglTestCase_037311_2 "gned.by_pointer.get_uniform.basic.float_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037311, VkglTestCase_037311_1, VkglTestCase_037311_2);

#define VkglTestCase_037312_1 "dEQP-GLES3.functional.uniform_api.value.assi"
#define VkglTestCase_037312_2 "gned.by_pointer.get_uniform.basic.vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037312, VkglTestCase_037312_1, VkglTestCase_037312_2);

#define VkglTestCase_037313_1 "dEQP-GLES3.functional.uniform_api.value.assig"
#define VkglTestCase_037313_2 "ned.by_pointer.get_uniform.basic.vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037313, VkglTestCase_037313_1, VkglTestCase_037313_2);

#define VkglTestCase_037314_1 "dEQP-GLES3.functional.uniform_api.value.ass"
#define VkglTestCase_037314_2 "igned.by_pointer.get_uniform.basic.vec2_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037314, VkglTestCase_037314_1, VkglTestCase_037314_2);

#define VkglTestCase_037315_1 "dEQP-GLES3.functional.uniform_api.value.assi"
#define VkglTestCase_037315_2 "gned.by_pointer.get_uniform.basic.vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037315, VkglTestCase_037315_1, VkglTestCase_037315_2);

#define VkglTestCase_037316_1 "dEQP-GLES3.functional.uniform_api.value.assig"
#define VkglTestCase_037316_2 "ned.by_pointer.get_uniform.basic.vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037316, VkglTestCase_037316_1, VkglTestCase_037316_2);

#define VkglTestCase_037317_1 "dEQP-GLES3.functional.uniform_api.value.ass"
#define VkglTestCase_037317_2 "igned.by_pointer.get_uniform.basic.vec3_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037317, VkglTestCase_037317_1, VkglTestCase_037317_2);

#define VkglTestCase_037318_1 "dEQP-GLES3.functional.uniform_api.value.assi"
#define VkglTestCase_037318_2 "gned.by_pointer.get_uniform.basic.vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037318, VkglTestCase_037318_1, VkglTestCase_037318_2);

#define VkglTestCase_037319_1 "dEQP-GLES3.functional.uniform_api.value.assig"
#define VkglTestCase_037319_2 "ned.by_pointer.get_uniform.basic.vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037319, VkglTestCase_037319_1, VkglTestCase_037319_2);

#define VkglTestCase_037320_1 "dEQP-GLES3.functional.uniform_api.value.ass"
#define VkglTestCase_037320_2 "igned.by_pointer.get_uniform.basic.vec4_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037320, VkglTestCase_037320_1, VkglTestCase_037320_2);

#define VkglTestCase_037321_1 "dEQP-GLES3.functional.uniform_api.value.assi"
#define VkglTestCase_037321_2 "gned.by_pointer.get_uniform.basic.mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037321, VkglTestCase_037321_1, VkglTestCase_037321_2);

#define VkglTestCase_037322_1 "dEQP-GLES3.functional.uniform_api.value.assig"
#define VkglTestCase_037322_2 "ned.by_pointer.get_uniform.basic.mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037322, VkglTestCase_037322_1, VkglTestCase_037322_2);

#define VkglTestCase_037323_1 "dEQP-GLES3.functional.uniform_api.value.ass"
#define VkglTestCase_037323_2 "igned.by_pointer.get_uniform.basic.mat2_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037323, VkglTestCase_037323_1, VkglTestCase_037323_2);

#define VkglTestCase_037324_1 "dEQP-GLES3.functional.uniform_api.value.assigned."
#define VkglTestCase_037324_2 "by_pointer.get_uniform.basic.mat2_row_major_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037324, VkglTestCase_037324_1, VkglTestCase_037324_2);

#define VkglTestCase_037325_1 "dEQP-GLES3.functional.uniform_api.value.assigned.b"
#define VkglTestCase_037325_2 "y_pointer.get_uniform.basic.mat2_row_major_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037325, VkglTestCase_037325_1, VkglTestCase_037325_2);

#define VkglTestCase_037326_1 "dEQP-GLES3.functional.uniform_api.value.assigned"
#define VkglTestCase_037326_2 ".by_pointer.get_uniform.basic.mat2_row_major_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037326, VkglTestCase_037326_1, VkglTestCase_037326_2);

#define VkglTestCase_037327_1 "dEQP-GLES3.functional.uniform_api.value.assig"
#define VkglTestCase_037327_2 "ned.by_pointer.get_uniform.basic.mat2x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037327, VkglTestCase_037327_1, VkglTestCase_037327_2);

#define VkglTestCase_037328_1 "dEQP-GLES3.functional.uniform_api.value.assign"
#define VkglTestCase_037328_2 "ed.by_pointer.get_uniform.basic.mat2x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037328, VkglTestCase_037328_1, VkglTestCase_037328_2);

#define VkglTestCase_037329_1 "dEQP-GLES3.functional.uniform_api.value.assi"
#define VkglTestCase_037329_2 "gned.by_pointer.get_uniform.basic.mat2x3_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037329, VkglTestCase_037329_1, VkglTestCase_037329_2);

#define VkglTestCase_037330_1 "dEQP-GLES3.functional.uniform_api.value.assigned.b"
#define VkglTestCase_037330_2 "y_pointer.get_uniform.basic.mat2x3_row_major_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037330, VkglTestCase_037330_1, VkglTestCase_037330_2);

#define VkglTestCase_037331_1 "dEQP-GLES3.functional.uniform_api.value.assigned.by"
#define VkglTestCase_037331_2 "_pointer.get_uniform.basic.mat2x3_row_major_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037331, VkglTestCase_037331_1, VkglTestCase_037331_2);

#define VkglTestCase_037332_1 "dEQP-GLES3.functional.uniform_api.value.assigned."
#define VkglTestCase_037332_2 "by_pointer.get_uniform.basic.mat2x3_row_major_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037332, VkglTestCase_037332_1, VkglTestCase_037332_2);

#define VkglTestCase_037333_1 "dEQP-GLES3.functional.uniform_api.value.assig"
#define VkglTestCase_037333_2 "ned.by_pointer.get_uniform.basic.mat2x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037333, VkglTestCase_037333_1, VkglTestCase_037333_2);

#define VkglTestCase_037334_1 "dEQP-GLES3.functional.uniform_api.value.assign"
#define VkglTestCase_037334_2 "ed.by_pointer.get_uniform.basic.mat2x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037334, VkglTestCase_037334_1, VkglTestCase_037334_2);

#define VkglTestCase_037335_1 "dEQP-GLES3.functional.uniform_api.value.assi"
#define VkglTestCase_037335_2 "gned.by_pointer.get_uniform.basic.mat2x4_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037335, VkglTestCase_037335_1, VkglTestCase_037335_2);

#define VkglTestCase_037336_1 "dEQP-GLES3.functional.uniform_api.value.assigned.b"
#define VkglTestCase_037336_2 "y_pointer.get_uniform.basic.mat2x4_row_major_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037336, VkglTestCase_037336_1, VkglTestCase_037336_2);

#define VkglTestCase_037337_1 "dEQP-GLES3.functional.uniform_api.value.assigned.by"
#define VkglTestCase_037337_2 "_pointer.get_uniform.basic.mat2x4_row_major_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037337, VkglTestCase_037337_1, VkglTestCase_037337_2);

#define VkglTestCase_037338_1 "dEQP-GLES3.functional.uniform_api.value.assigned."
#define VkglTestCase_037338_2 "by_pointer.get_uniform.basic.mat2x4_row_major_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037338, VkglTestCase_037338_1, VkglTestCase_037338_2);

#define VkglTestCase_037339_1 "dEQP-GLES3.functional.uniform_api.value.assig"
#define VkglTestCase_037339_2 "ned.by_pointer.get_uniform.basic.mat3x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037339, VkglTestCase_037339_1, VkglTestCase_037339_2);

#define VkglTestCase_037340_1 "dEQP-GLES3.functional.uniform_api.value.assign"
#define VkglTestCase_037340_2 "ed.by_pointer.get_uniform.basic.mat3x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037340, VkglTestCase_037340_1, VkglTestCase_037340_2);

#define VkglTestCase_037341_1 "dEQP-GLES3.functional.uniform_api.value.assi"
#define VkglTestCase_037341_2 "gned.by_pointer.get_uniform.basic.mat3x2_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037341, VkglTestCase_037341_1, VkglTestCase_037341_2);

#define VkglTestCase_037342_1 "dEQP-GLES3.functional.uniform_api.value.assigned.b"
#define VkglTestCase_037342_2 "y_pointer.get_uniform.basic.mat3x2_row_major_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037342, VkglTestCase_037342_1, VkglTestCase_037342_2);

#define VkglTestCase_037343_1 "dEQP-GLES3.functional.uniform_api.value.assigned.by"
#define VkglTestCase_037343_2 "_pointer.get_uniform.basic.mat3x2_row_major_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037343, VkglTestCase_037343_1, VkglTestCase_037343_2);

#define VkglTestCase_037344_1 "dEQP-GLES3.functional.uniform_api.value.assigned."
#define VkglTestCase_037344_2 "by_pointer.get_uniform.basic.mat3x2_row_major_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037344, VkglTestCase_037344_1, VkglTestCase_037344_2);

#define VkglTestCase_037345_1 "dEQP-GLES3.functional.uniform_api.value.assi"
#define VkglTestCase_037345_2 "gned.by_pointer.get_uniform.basic.mat3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037345, VkglTestCase_037345_1, VkglTestCase_037345_2);

#define VkglTestCase_037346_1 "dEQP-GLES3.functional.uniform_api.value.assig"
#define VkglTestCase_037346_2 "ned.by_pointer.get_uniform.basic.mat3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037346, VkglTestCase_037346_1, VkglTestCase_037346_2);

#define VkglTestCase_037347_1 "dEQP-GLES3.functional.uniform_api.value.ass"
#define VkglTestCase_037347_2 "igned.by_pointer.get_uniform.basic.mat3_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037347, VkglTestCase_037347_1, VkglTestCase_037347_2);

#define VkglTestCase_037348_1 "dEQP-GLES3.functional.uniform_api.value.assigned."
#define VkglTestCase_037348_2 "by_pointer.get_uniform.basic.mat3_row_major_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037348, VkglTestCase_037348_1, VkglTestCase_037348_2);

#define VkglTestCase_037349_1 "dEQP-GLES3.functional.uniform_api.value.assigned.b"
#define VkglTestCase_037349_2 "y_pointer.get_uniform.basic.mat3_row_major_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037349, VkglTestCase_037349_1, VkglTestCase_037349_2);

#define VkglTestCase_037350_1 "dEQP-GLES3.functional.uniform_api.value.assigned"
#define VkglTestCase_037350_2 ".by_pointer.get_uniform.basic.mat3_row_major_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037350, VkglTestCase_037350_1, VkglTestCase_037350_2);

#define VkglTestCase_037351_1 "dEQP-GLES3.functional.uniform_api.value.assig"
#define VkglTestCase_037351_2 "ned.by_pointer.get_uniform.basic.mat3x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037351, VkglTestCase_037351_1, VkglTestCase_037351_2);

#define VkglTestCase_037352_1 "dEQP-GLES3.functional.uniform_api.value.assign"
#define VkglTestCase_037352_2 "ed.by_pointer.get_uniform.basic.mat3x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037352, VkglTestCase_037352_1, VkglTestCase_037352_2);

#define VkglTestCase_037353_1 "dEQP-GLES3.functional.uniform_api.value.assi"
#define VkglTestCase_037353_2 "gned.by_pointer.get_uniform.basic.mat3x4_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037353, VkglTestCase_037353_1, VkglTestCase_037353_2);

#define VkglTestCase_037354_1 "dEQP-GLES3.functional.uniform_api.value.assigned.b"
#define VkglTestCase_037354_2 "y_pointer.get_uniform.basic.mat3x4_row_major_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037354, VkglTestCase_037354_1, VkglTestCase_037354_2);

#define VkglTestCase_037355_1 "dEQP-GLES3.functional.uniform_api.value.assigned.by"
#define VkglTestCase_037355_2 "_pointer.get_uniform.basic.mat3x4_row_major_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037355, VkglTestCase_037355_1, VkglTestCase_037355_2);

#define VkglTestCase_037356_1 "dEQP-GLES3.functional.uniform_api.value.assigned."
#define VkglTestCase_037356_2 "by_pointer.get_uniform.basic.mat3x4_row_major_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037356, VkglTestCase_037356_1, VkglTestCase_037356_2);

#define VkglTestCase_037357_1 "dEQP-GLES3.functional.uniform_api.value.assig"
#define VkglTestCase_037357_2 "ned.by_pointer.get_uniform.basic.mat4x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037357, VkglTestCase_037357_1, VkglTestCase_037357_2);

#define VkglTestCase_037358_1 "dEQP-GLES3.functional.uniform_api.value.assign"
#define VkglTestCase_037358_2 "ed.by_pointer.get_uniform.basic.mat4x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037358, VkglTestCase_037358_1, VkglTestCase_037358_2);

#define VkglTestCase_037359_1 "dEQP-GLES3.functional.uniform_api.value.assi"
#define VkglTestCase_037359_2 "gned.by_pointer.get_uniform.basic.mat4x2_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037359, VkglTestCase_037359_1, VkglTestCase_037359_2);

#define VkglTestCase_037360_1 "dEQP-GLES3.functional.uniform_api.value.assigned.b"
#define VkglTestCase_037360_2 "y_pointer.get_uniform.basic.mat4x2_row_major_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037360, VkglTestCase_037360_1, VkglTestCase_037360_2);

#define VkglTestCase_037361_1 "dEQP-GLES3.functional.uniform_api.value.assigned.by"
#define VkglTestCase_037361_2 "_pointer.get_uniform.basic.mat4x2_row_major_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037361, VkglTestCase_037361_1, VkglTestCase_037361_2);

#define VkglTestCase_037362_1 "dEQP-GLES3.functional.uniform_api.value.assigned."
#define VkglTestCase_037362_2 "by_pointer.get_uniform.basic.mat4x2_row_major_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037362, VkglTestCase_037362_1, VkglTestCase_037362_2);

#define VkglTestCase_037363_1 "dEQP-GLES3.functional.uniform_api.value.assig"
#define VkglTestCase_037363_2 "ned.by_pointer.get_uniform.basic.mat4x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037363, VkglTestCase_037363_1, VkglTestCase_037363_2);

#define VkglTestCase_037364_1 "dEQP-GLES3.functional.uniform_api.value.assign"
#define VkglTestCase_037364_2 "ed.by_pointer.get_uniform.basic.mat4x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037364, VkglTestCase_037364_1, VkglTestCase_037364_2);

#define VkglTestCase_037365_1 "dEQP-GLES3.functional.uniform_api.value.assi"
#define VkglTestCase_037365_2 "gned.by_pointer.get_uniform.basic.mat4x3_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037365, VkglTestCase_037365_1, VkglTestCase_037365_2);

#define VkglTestCase_037366_1 "dEQP-GLES3.functional.uniform_api.value.assigned.b"
#define VkglTestCase_037366_2 "y_pointer.get_uniform.basic.mat4x3_row_major_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037366, VkglTestCase_037366_1, VkglTestCase_037366_2);

#define VkglTestCase_037367_1 "dEQP-GLES3.functional.uniform_api.value.assigned.by"
#define VkglTestCase_037367_2 "_pointer.get_uniform.basic.mat4x3_row_major_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037367, VkglTestCase_037367_1, VkglTestCase_037367_2);

#define VkglTestCase_037368_1 "dEQP-GLES3.functional.uniform_api.value.assigned."
#define VkglTestCase_037368_2 "by_pointer.get_uniform.basic.mat4x3_row_major_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037368, VkglTestCase_037368_1, VkglTestCase_037368_2);

#define VkglTestCase_037369_1 "dEQP-GLES3.functional.uniform_api.value.assi"
#define VkglTestCase_037369_2 "gned.by_pointer.get_uniform.basic.mat4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037369, VkglTestCase_037369_1, VkglTestCase_037369_2);

#define VkglTestCase_037370_1 "dEQP-GLES3.functional.uniform_api.value.assig"
#define VkglTestCase_037370_2 "ned.by_pointer.get_uniform.basic.mat4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037370, VkglTestCase_037370_1, VkglTestCase_037370_2);

#define VkglTestCase_037371_1 "dEQP-GLES3.functional.uniform_api.value.ass"
#define VkglTestCase_037371_2 "igned.by_pointer.get_uniform.basic.mat4_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037371, VkglTestCase_037371_1, VkglTestCase_037371_2);

#define VkglTestCase_037372_1 "dEQP-GLES3.functional.uniform_api.value.assigned."
#define VkglTestCase_037372_2 "by_pointer.get_uniform.basic.mat4_row_major_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037372, VkglTestCase_037372_1, VkglTestCase_037372_2);

#define VkglTestCase_037373_1 "dEQP-GLES3.functional.uniform_api.value.assigned.b"
#define VkglTestCase_037373_2 "y_pointer.get_uniform.basic.mat4_row_major_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037373, VkglTestCase_037373_1, VkglTestCase_037373_2);

#define VkglTestCase_037374_1 "dEQP-GLES3.functional.uniform_api.value.assigned"
#define VkglTestCase_037374_2 ".by_pointer.get_uniform.basic.mat4_row_major_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037374, VkglTestCase_037374_1, VkglTestCase_037374_2);

#define VkglTestCase_037375_1 "dEQP-GLES3.functional.uniform_api.value.assi"
#define VkglTestCase_037375_2 "gned.by_pointer.get_uniform.basic.int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037375, VkglTestCase_037375_1, VkglTestCase_037375_2);

#define VkglTestCase_037376_1 "dEQP-GLES3.functional.uniform_api.value.assig"
#define VkglTestCase_037376_2 "ned.by_pointer.get_uniform.basic.int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037376, VkglTestCase_037376_1, VkglTestCase_037376_2);

#define VkglTestCase_037377_1 "dEQP-GLES3.functional.uniform_api.value.ass"
#define VkglTestCase_037377_2 "igned.by_pointer.get_uniform.basic.int_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037377, VkglTestCase_037377_1, VkglTestCase_037377_2);

#define VkglTestCase_037378_1 "dEQP-GLES3.functional.uniform_api.value.assig"
#define VkglTestCase_037378_2 "ned.by_pointer.get_uniform.basic.ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037378, VkglTestCase_037378_1, VkglTestCase_037378_2);

#define VkglTestCase_037379_1 "dEQP-GLES3.functional.uniform_api.value.assign"
#define VkglTestCase_037379_2 "ed.by_pointer.get_uniform.basic.ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037379, VkglTestCase_037379_1, VkglTestCase_037379_2);

#define VkglTestCase_037380_1 "dEQP-GLES3.functional.uniform_api.value.assi"
#define VkglTestCase_037380_2 "gned.by_pointer.get_uniform.basic.ivec2_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037380, VkglTestCase_037380_1, VkglTestCase_037380_2);

#define VkglTestCase_037381_1 "dEQP-GLES3.functional.uniform_api.value.assig"
#define VkglTestCase_037381_2 "ned.by_pointer.get_uniform.basic.ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037381, VkglTestCase_037381_1, VkglTestCase_037381_2);

#define VkglTestCase_037382_1 "dEQP-GLES3.functional.uniform_api.value.assign"
#define VkglTestCase_037382_2 "ed.by_pointer.get_uniform.basic.ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037382, VkglTestCase_037382_1, VkglTestCase_037382_2);

#define VkglTestCase_037383_1 "dEQP-GLES3.functional.uniform_api.value.assi"
#define VkglTestCase_037383_2 "gned.by_pointer.get_uniform.basic.ivec3_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037383, VkglTestCase_037383_1, VkglTestCase_037383_2);

#define VkglTestCase_037384_1 "dEQP-GLES3.functional.uniform_api.value.assig"
#define VkglTestCase_037384_2 "ned.by_pointer.get_uniform.basic.ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037384, VkglTestCase_037384_1, VkglTestCase_037384_2);

#define VkglTestCase_037385_1 "dEQP-GLES3.functional.uniform_api.value.assign"
#define VkglTestCase_037385_2 "ed.by_pointer.get_uniform.basic.ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037385, VkglTestCase_037385_1, VkglTestCase_037385_2);

#define VkglTestCase_037386_1 "dEQP-GLES3.functional.uniform_api.value.assi"
#define VkglTestCase_037386_2 "gned.by_pointer.get_uniform.basic.ivec4_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037386, VkglTestCase_037386_1, VkglTestCase_037386_2);

#define VkglTestCase_037387_1 "dEQP-GLES3.functional.uniform_api.value.assi"
#define VkglTestCase_037387_2 "gned.by_pointer.get_uniform.basic.uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037387, VkglTestCase_037387_1, VkglTestCase_037387_2);

#define VkglTestCase_037388_1 "dEQP-GLES3.functional.uniform_api.value.assig"
#define VkglTestCase_037388_2 "ned.by_pointer.get_uniform.basic.uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037388, VkglTestCase_037388_1, VkglTestCase_037388_2);

#define VkglTestCase_037389_1 "dEQP-GLES3.functional.uniform_api.value.ass"
#define VkglTestCase_037389_2 "igned.by_pointer.get_uniform.basic.uint_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037389, VkglTestCase_037389_1, VkglTestCase_037389_2);

#define VkglTestCase_037390_1 "dEQP-GLES3.functional.uniform_api.value.assig"
#define VkglTestCase_037390_2 "ned.by_pointer.get_uniform.basic.uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037390, VkglTestCase_037390_1, VkglTestCase_037390_2);

#define VkglTestCase_037391_1 "dEQP-GLES3.functional.uniform_api.value.assign"
#define VkglTestCase_037391_2 "ed.by_pointer.get_uniform.basic.uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037391, VkglTestCase_037391_1, VkglTestCase_037391_2);

#define VkglTestCase_037392_1 "dEQP-GLES3.functional.uniform_api.value.assi"
#define VkglTestCase_037392_2 "gned.by_pointer.get_uniform.basic.uvec2_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037392, VkglTestCase_037392_1, VkglTestCase_037392_2);

#define VkglTestCase_037393_1 "dEQP-GLES3.functional.uniform_api.value.assig"
#define VkglTestCase_037393_2 "ned.by_pointer.get_uniform.basic.uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037393, VkglTestCase_037393_1, VkglTestCase_037393_2);

#define VkglTestCase_037394_1 "dEQP-GLES3.functional.uniform_api.value.assign"
#define VkglTestCase_037394_2 "ed.by_pointer.get_uniform.basic.uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037394, VkglTestCase_037394_1, VkglTestCase_037394_2);

#define VkglTestCase_037395_1 "dEQP-GLES3.functional.uniform_api.value.assi"
#define VkglTestCase_037395_2 "gned.by_pointer.get_uniform.basic.uvec3_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037395, VkglTestCase_037395_1, VkglTestCase_037395_2);

#define VkglTestCase_037396_1 "dEQP-GLES3.functional.uniform_api.value.assig"
#define VkglTestCase_037396_2 "ned.by_pointer.get_uniform.basic.uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037396, VkglTestCase_037396_1, VkglTestCase_037396_2);

#define VkglTestCase_037397_1 "dEQP-GLES3.functional.uniform_api.value.assign"
#define VkglTestCase_037397_2 "ed.by_pointer.get_uniform.basic.uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037397, VkglTestCase_037397_1, VkglTestCase_037397_2);

#define VkglTestCase_037398_1 "dEQP-GLES3.functional.uniform_api.value.assi"
#define VkglTestCase_037398_2 "gned.by_pointer.get_uniform.basic.uvec4_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037398, VkglTestCase_037398_1, VkglTestCase_037398_2);

#define VkglTestCase_037399_1 "dEQP-GLES3.functional.uniform_api.value.assigned."
#define VkglTestCase_037399_2 "by_pointer.get_uniform.basic.bool_api_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037399, VkglTestCase_037399_1, VkglTestCase_037399_2);

#define VkglTestCase_037400_1 "dEQP-GLES3.functional.uniform_api.value.assigned.b"
#define VkglTestCase_037400_2 "y_pointer.get_uniform.basic.bool_api_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037400, VkglTestCase_037400_1, VkglTestCase_037400_2);

#define VkglTestCase_037401_1 "dEQP-GLES3.functional.uniform_api.value.assigned"
#define VkglTestCase_037401_2 ".by_pointer.get_uniform.basic.bool_api_float_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037401, VkglTestCase_037401_1, VkglTestCase_037401_2);

#define VkglTestCase_037402_1 "dEQP-GLES3.functional.uniform_api.value.assigned"
#define VkglTestCase_037402_2 ".by_pointer.get_uniform.basic.bool_api_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037402, VkglTestCase_037402_1, VkglTestCase_037402_2);

#define VkglTestCase_037403_1 "dEQP-GLES3.functional.uniform_api.value.assigned."
#define VkglTestCase_037403_2 "by_pointer.get_uniform.basic.bool_api_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037403, VkglTestCase_037403_1, VkglTestCase_037403_2);

#define VkglTestCase_037404_1 "dEQP-GLES3.functional.uniform_api.value.assigne"
#define VkglTestCase_037404_2 "d.by_pointer.get_uniform.basic.bool_api_int_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037404, VkglTestCase_037404_1, VkglTestCase_037404_2);

#define VkglTestCase_037405_1 "dEQP-GLES3.functional.uniform_api.value.assigned."
#define VkglTestCase_037405_2 "by_pointer.get_uniform.basic.bool_api_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037405, VkglTestCase_037405_1, VkglTestCase_037405_2);

#define VkglTestCase_037406_1 "dEQP-GLES3.functional.uniform_api.value.assigned.b"
#define VkglTestCase_037406_2 "y_pointer.get_uniform.basic.bool_api_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037406, VkglTestCase_037406_1, VkglTestCase_037406_2);

#define VkglTestCase_037407_1 "dEQP-GLES3.functional.uniform_api.value.assigned"
#define VkglTestCase_037407_2 ".by_pointer.get_uniform.basic.bool_api_uint_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037407, VkglTestCase_037407_1, VkglTestCase_037407_2);

#define VkglTestCase_037408_1 "dEQP-GLES3.functional.uniform_api.value.assigned.b"
#define VkglTestCase_037408_2 "y_pointer.get_uniform.basic.bvec2_api_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037408, VkglTestCase_037408_1, VkglTestCase_037408_2);

#define VkglTestCase_037409_1 "dEQP-GLES3.functional.uniform_api.value.assigned.by"
#define VkglTestCase_037409_2 "_pointer.get_uniform.basic.bvec2_api_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037409, VkglTestCase_037409_1, VkglTestCase_037409_2);

#define VkglTestCase_037410_1 "dEQP-GLES3.functional.uniform_api.value.assigned."
#define VkglTestCase_037410_2 "by_pointer.get_uniform.basic.bvec2_api_float_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037410, VkglTestCase_037410_1, VkglTestCase_037410_2);

#define VkglTestCase_037411_1 "dEQP-GLES3.functional.uniform_api.value.assigned."
#define VkglTestCase_037411_2 "by_pointer.get_uniform.basic.bvec2_api_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037411, VkglTestCase_037411_1, VkglTestCase_037411_2);

#define VkglTestCase_037412_1 "dEQP-GLES3.functional.uniform_api.value.assigned.b"
#define VkglTestCase_037412_2 "y_pointer.get_uniform.basic.bvec2_api_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037412, VkglTestCase_037412_1, VkglTestCase_037412_2);

#define VkglTestCase_037413_1 "dEQP-GLES3.functional.uniform_api.value.assigned"
#define VkglTestCase_037413_2 ".by_pointer.get_uniform.basic.bvec2_api_int_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037413, VkglTestCase_037413_1, VkglTestCase_037413_2);

#define VkglTestCase_037414_1 "dEQP-GLES3.functional.uniform_api.value.assigned."
#define VkglTestCase_037414_2 "by_pointer.get_uniform.basic.bvec2_api_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037414, VkglTestCase_037414_1, VkglTestCase_037414_2);

#define VkglTestCase_037415_1 "dEQP-GLES3.functional.uniform_api.value.assigned.b"
#define VkglTestCase_037415_2 "y_pointer.get_uniform.basic.bvec2_api_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037415, VkglTestCase_037415_1, VkglTestCase_037415_2);

#define VkglTestCase_037416_1 "dEQP-GLES3.functional.uniform_api.value.assigned"
#define VkglTestCase_037416_2 ".by_pointer.get_uniform.basic.bvec2_api_uint_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037416, VkglTestCase_037416_1, VkglTestCase_037416_2);

#define VkglTestCase_037417_1 "dEQP-GLES3.functional.uniform_api.value.assigned.b"
#define VkglTestCase_037417_2 "y_pointer.get_uniform.basic.bvec3_api_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037417, VkglTestCase_037417_1, VkglTestCase_037417_2);

#define VkglTestCase_037418_1 "dEQP-GLES3.functional.uniform_api.value.assigned.by"
#define VkglTestCase_037418_2 "_pointer.get_uniform.basic.bvec3_api_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037418, VkglTestCase_037418_1, VkglTestCase_037418_2);

#define VkglTestCase_037419_1 "dEQP-GLES3.functional.uniform_api.value.assigned."
#define VkglTestCase_037419_2 "by_pointer.get_uniform.basic.bvec3_api_float_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037419, VkglTestCase_037419_1, VkglTestCase_037419_2);

#define VkglTestCase_037420_1 "dEQP-GLES3.functional.uniform_api.value.assigned."
#define VkglTestCase_037420_2 "by_pointer.get_uniform.basic.bvec3_api_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037420, VkglTestCase_037420_1, VkglTestCase_037420_2);

#define VkglTestCase_037421_1 "dEQP-GLES3.functional.uniform_api.value.assigned.b"
#define VkglTestCase_037421_2 "y_pointer.get_uniform.basic.bvec3_api_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037421, VkglTestCase_037421_1, VkglTestCase_037421_2);

#define VkglTestCase_037422_1 "dEQP-GLES3.functional.uniform_api.value.assigned"
#define VkglTestCase_037422_2 ".by_pointer.get_uniform.basic.bvec3_api_int_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037422, VkglTestCase_037422_1, VkglTestCase_037422_2);

#define VkglTestCase_037423_1 "dEQP-GLES3.functional.uniform_api.value.assigned."
#define VkglTestCase_037423_2 "by_pointer.get_uniform.basic.bvec3_api_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037423, VkglTestCase_037423_1, VkglTestCase_037423_2);

#define VkglTestCase_037424_1 "dEQP-GLES3.functional.uniform_api.value.assigned.b"
#define VkglTestCase_037424_2 "y_pointer.get_uniform.basic.bvec3_api_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037424, VkglTestCase_037424_1, VkglTestCase_037424_2);

#define VkglTestCase_037425_1 "dEQP-GLES3.functional.uniform_api.value.assigned"
#define VkglTestCase_037425_2 ".by_pointer.get_uniform.basic.bvec3_api_uint_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037425, VkglTestCase_037425_1, VkglTestCase_037425_2);

#define VkglTestCase_037426_1 "dEQP-GLES3.functional.uniform_api.value.assigned.b"
#define VkglTestCase_037426_2 "y_pointer.get_uniform.basic.bvec4_api_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037426, VkglTestCase_037426_1, VkglTestCase_037426_2);

#define VkglTestCase_037427_1 "dEQP-GLES3.functional.uniform_api.value.assigned.by"
#define VkglTestCase_037427_2 "_pointer.get_uniform.basic.bvec4_api_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037427, VkglTestCase_037427_1, VkglTestCase_037427_2);

#define VkglTestCase_037428_1 "dEQP-GLES3.functional.uniform_api.value.assigned."
#define VkglTestCase_037428_2 "by_pointer.get_uniform.basic.bvec4_api_float_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037428, VkglTestCase_037428_1, VkglTestCase_037428_2);

#define VkglTestCase_037429_1 "dEQP-GLES3.functional.uniform_api.value.assigned."
#define VkglTestCase_037429_2 "by_pointer.get_uniform.basic.bvec4_api_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037429, VkglTestCase_037429_1, VkglTestCase_037429_2);

#define VkglTestCase_037430_1 "dEQP-GLES3.functional.uniform_api.value.assigned.b"
#define VkglTestCase_037430_2 "y_pointer.get_uniform.basic.bvec4_api_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037430, VkglTestCase_037430_1, VkglTestCase_037430_2);

#define VkglTestCase_037431_1 "dEQP-GLES3.functional.uniform_api.value.assigned"
#define VkglTestCase_037431_2 ".by_pointer.get_uniform.basic.bvec4_api_int_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037431, VkglTestCase_037431_1, VkglTestCase_037431_2);

#define VkglTestCase_037432_1 "dEQP-GLES3.functional.uniform_api.value.assigned."
#define VkglTestCase_037432_2 "by_pointer.get_uniform.basic.bvec4_api_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037432, VkglTestCase_037432_1, VkglTestCase_037432_2);

#define VkglTestCase_037433_1 "dEQP-GLES3.functional.uniform_api.value.assigned.b"
#define VkglTestCase_037433_2 "y_pointer.get_uniform.basic.bvec4_api_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037433, VkglTestCase_037433_1, VkglTestCase_037433_2);

#define VkglTestCase_037434_1 "dEQP-GLES3.functional.uniform_api.value.assigned"
#define VkglTestCase_037434_2 ".by_pointer.get_uniform.basic.bvec4_api_uint_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037434, VkglTestCase_037434_1, VkglTestCase_037434_2);

#define VkglTestCase_037435_1 "dEQP-GLES3.functional.uniform_api.value.assigne"
#define VkglTestCase_037435_2 "d.by_pointer.get_uniform.basic.sampler2D_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037435, VkglTestCase_037435_1, VkglTestCase_037435_2);

#define VkglTestCase_037436_1 "dEQP-GLES3.functional.uniform_api.value.assigned"
#define VkglTestCase_037436_2 ".by_pointer.get_uniform.basic.sampler2D_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037436, VkglTestCase_037436_1, VkglTestCase_037436_2);

#define VkglTestCase_037437_1 "dEQP-GLES3.functional.uniform_api.value.assign"
#define VkglTestCase_037437_2 "ed.by_pointer.get_uniform.basic.sampler2D_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037437, VkglTestCase_037437_1, VkglTestCase_037437_2);

#define VkglTestCase_037438_1 "dEQP-GLES3.functional.uniform_api.value.assigned"
#define VkglTestCase_037438_2 ".by_pointer.get_uniform.basic.samplerCube_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037438, VkglTestCase_037438_1, VkglTestCase_037438_2);

#define VkglTestCase_037439_1 "dEQP-GLES3.functional.uniform_api.value.assigned."
#define VkglTestCase_037439_2 "by_pointer.get_uniform.basic.samplerCube_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037439, VkglTestCase_037439_1, VkglTestCase_037439_2);

#define VkglTestCase_037440_1 "dEQP-GLES3.functional.uniform_api.value.assigne"
#define VkglTestCase_037440_2 "d.by_pointer.get_uniform.basic.samplerCube_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037440, VkglTestCase_037440_1, VkglTestCase_037440_2);

#define VkglTestCase_037834_1 "dEQP-GLES3.functional.uniform_api.value.assi"
#define VkglTestCase_037834_2 "gned.by_value.get_uniform.basic.float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037834, VkglTestCase_037834_1, VkglTestCase_037834_2);

#define VkglTestCase_037835_1 "dEQP-GLES3.functional.uniform_api.value.assig"
#define VkglTestCase_037835_2 "ned.by_value.get_uniform.basic.float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037835, VkglTestCase_037835_1, VkglTestCase_037835_2);

#define VkglTestCase_037836_1 "dEQP-GLES3.functional.uniform_api.value.ass"
#define VkglTestCase_037836_2 "igned.by_value.get_uniform.basic.float_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037836, VkglTestCase_037836_1, VkglTestCase_037836_2);

#define VkglTestCase_037837_1 "dEQP-GLES3.functional.uniform_api.value.ass"
#define VkglTestCase_037837_2 "igned.by_value.get_uniform.basic.vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037837, VkglTestCase_037837_1, VkglTestCase_037837_2);

#define VkglTestCase_037838_1 "dEQP-GLES3.functional.uniform_api.value.assi"
#define VkglTestCase_037838_2 "gned.by_value.get_uniform.basic.vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037838, VkglTestCase_037838_1, VkglTestCase_037838_2);

#define VkglTestCase_037839_1 "dEQP-GLES3.functional.uniform_api.value.as"
#define VkglTestCase_037839_2 "signed.by_value.get_uniform.basic.vec2_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037839, VkglTestCase_037839_1, VkglTestCase_037839_2);

#define VkglTestCase_037840_1 "dEQP-GLES3.functional.uniform_api.value.ass"
#define VkglTestCase_037840_2 "igned.by_value.get_uniform.basic.vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037840, VkglTestCase_037840_1, VkglTestCase_037840_2);

#define VkglTestCase_037841_1 "dEQP-GLES3.functional.uniform_api.value.assi"
#define VkglTestCase_037841_2 "gned.by_value.get_uniform.basic.vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037841, VkglTestCase_037841_1, VkglTestCase_037841_2);

#define VkglTestCase_037842_1 "dEQP-GLES3.functional.uniform_api.value.as"
#define VkglTestCase_037842_2 "signed.by_value.get_uniform.basic.vec3_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037842, VkglTestCase_037842_1, VkglTestCase_037842_2);

#define VkglTestCase_037843_1 "dEQP-GLES3.functional.uniform_api.value.ass"
#define VkglTestCase_037843_2 "igned.by_value.get_uniform.basic.vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037843, VkglTestCase_037843_1, VkglTestCase_037843_2);

#define VkglTestCase_037844_1 "dEQP-GLES3.functional.uniform_api.value.assi"
#define VkglTestCase_037844_2 "gned.by_value.get_uniform.basic.vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037844, VkglTestCase_037844_1, VkglTestCase_037844_2);

#define VkglTestCase_037845_1 "dEQP-GLES3.functional.uniform_api.value.as"
#define VkglTestCase_037845_2 "signed.by_value.get_uniform.basic.vec4_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037845, VkglTestCase_037845_1, VkglTestCase_037845_2);

#define VkglTestCase_037846_1 "dEQP-GLES3.functional.uniform_api.value.ass"
#define VkglTestCase_037846_2 "igned.by_value.get_uniform.basic.int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037846, VkglTestCase_037846_1, VkglTestCase_037846_2);

#define VkglTestCase_037847_1 "dEQP-GLES3.functional.uniform_api.value.assi"
#define VkglTestCase_037847_2 "gned.by_value.get_uniform.basic.int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037847, VkglTestCase_037847_1, VkglTestCase_037847_2);

#define VkglTestCase_037848_1 "dEQP-GLES3.functional.uniform_api.value.as"
#define VkglTestCase_037848_2 "signed.by_value.get_uniform.basic.int_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037848, VkglTestCase_037848_1, VkglTestCase_037848_2);

#define VkglTestCase_037849_1 "dEQP-GLES3.functional.uniform_api.value.assi"
#define VkglTestCase_037849_2 "gned.by_value.get_uniform.basic.ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037849, VkglTestCase_037849_1, VkglTestCase_037849_2);

#define VkglTestCase_037850_1 "dEQP-GLES3.functional.uniform_api.value.assig"
#define VkglTestCase_037850_2 "ned.by_value.get_uniform.basic.ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037850, VkglTestCase_037850_1, VkglTestCase_037850_2);

#define VkglTestCase_037851_1 "dEQP-GLES3.functional.uniform_api.value.ass"
#define VkglTestCase_037851_2 "igned.by_value.get_uniform.basic.ivec2_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037851, VkglTestCase_037851_1, VkglTestCase_037851_2);

#define VkglTestCase_037852_1 "dEQP-GLES3.functional.uniform_api.value.assi"
#define VkglTestCase_037852_2 "gned.by_value.get_uniform.basic.ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037852, VkglTestCase_037852_1, VkglTestCase_037852_2);

#define VkglTestCase_037853_1 "dEQP-GLES3.functional.uniform_api.value.assig"
#define VkglTestCase_037853_2 "ned.by_value.get_uniform.basic.ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037853, VkglTestCase_037853_1, VkglTestCase_037853_2);

#define VkglTestCase_037854_1 "dEQP-GLES3.functional.uniform_api.value.ass"
#define VkglTestCase_037854_2 "igned.by_value.get_uniform.basic.ivec3_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037854, VkglTestCase_037854_1, VkglTestCase_037854_2);

#define VkglTestCase_037855_1 "dEQP-GLES3.functional.uniform_api.value.assi"
#define VkglTestCase_037855_2 "gned.by_value.get_uniform.basic.ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037855, VkglTestCase_037855_1, VkglTestCase_037855_2);

#define VkglTestCase_037856_1 "dEQP-GLES3.functional.uniform_api.value.assig"
#define VkglTestCase_037856_2 "ned.by_value.get_uniform.basic.ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037856, VkglTestCase_037856_1, VkglTestCase_037856_2);

#define VkglTestCase_037857_1 "dEQP-GLES3.functional.uniform_api.value.ass"
#define VkglTestCase_037857_2 "igned.by_value.get_uniform.basic.ivec4_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037857, VkglTestCase_037857_1, VkglTestCase_037857_2);

#define VkglTestCase_037858_1 "dEQP-GLES3.functional.uniform_api.value.ass"
#define VkglTestCase_037858_2 "igned.by_value.get_uniform.basic.uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037858, VkglTestCase_037858_1, VkglTestCase_037858_2);

#define VkglTestCase_037859_1 "dEQP-GLES3.functional.uniform_api.value.assi"
#define VkglTestCase_037859_2 "gned.by_value.get_uniform.basic.uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037859, VkglTestCase_037859_1, VkglTestCase_037859_2);

#define VkglTestCase_037860_1 "dEQP-GLES3.functional.uniform_api.value.as"
#define VkglTestCase_037860_2 "signed.by_value.get_uniform.basic.uint_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037860, VkglTestCase_037860_1, VkglTestCase_037860_2);

#define VkglTestCase_037861_1 "dEQP-GLES3.functional.uniform_api.value.assi"
#define VkglTestCase_037861_2 "gned.by_value.get_uniform.basic.uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037861, VkglTestCase_037861_1, VkglTestCase_037861_2);

#define VkglTestCase_037862_1 "dEQP-GLES3.functional.uniform_api.value.assig"
#define VkglTestCase_037862_2 "ned.by_value.get_uniform.basic.uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037862, VkglTestCase_037862_1, VkglTestCase_037862_2);

#define VkglTestCase_037863_1 "dEQP-GLES3.functional.uniform_api.value.ass"
#define VkglTestCase_037863_2 "igned.by_value.get_uniform.basic.uvec2_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037863, VkglTestCase_037863_1, VkglTestCase_037863_2);

#define VkglTestCase_037864_1 "dEQP-GLES3.functional.uniform_api.value.assi"
#define VkglTestCase_037864_2 "gned.by_value.get_uniform.basic.uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037864, VkglTestCase_037864_1, VkglTestCase_037864_2);

#define VkglTestCase_037865_1 "dEQP-GLES3.functional.uniform_api.value.assig"
#define VkglTestCase_037865_2 "ned.by_value.get_uniform.basic.uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037865, VkglTestCase_037865_1, VkglTestCase_037865_2);

#define VkglTestCase_037866_1 "dEQP-GLES3.functional.uniform_api.value.ass"
#define VkglTestCase_037866_2 "igned.by_value.get_uniform.basic.uvec3_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037866, VkglTestCase_037866_1, VkglTestCase_037866_2);

#define VkglTestCase_037867_1 "dEQP-GLES3.functional.uniform_api.value.assi"
#define VkglTestCase_037867_2 "gned.by_value.get_uniform.basic.uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037867, VkglTestCase_037867_1, VkglTestCase_037867_2);

#define VkglTestCase_037868_1 "dEQP-GLES3.functional.uniform_api.value.assig"
#define VkglTestCase_037868_2 "ned.by_value.get_uniform.basic.uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037868, VkglTestCase_037868_1, VkglTestCase_037868_2);

#define VkglTestCase_037869_1 "dEQP-GLES3.functional.uniform_api.value.ass"
#define VkglTestCase_037869_2 "igned.by_value.get_uniform.basic.uvec4_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037869, VkglTestCase_037869_1, VkglTestCase_037869_2);

#define VkglTestCase_037870_1 "dEQP-GLES3.functional.uniform_api.value.assigned"
#define VkglTestCase_037870_2 ".by_value.get_uniform.basic.bool_api_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037870, VkglTestCase_037870_1, VkglTestCase_037870_2);

#define VkglTestCase_037871_1 "dEQP-GLES3.functional.uniform_api.value.assigned."
#define VkglTestCase_037871_2 "by_value.get_uniform.basic.bool_api_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037871, VkglTestCase_037871_1, VkglTestCase_037871_2);

#define VkglTestCase_037872_1 "dEQP-GLES3.functional.uniform_api.value.assigne"
#define VkglTestCase_037872_2 "d.by_value.get_uniform.basic.bool_api_float_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037872, VkglTestCase_037872_1, VkglTestCase_037872_2);

#define VkglTestCase_037873_1 "dEQP-GLES3.functional.uniform_api.value.assigne"
#define VkglTestCase_037873_2 "d.by_value.get_uniform.basic.bool_api_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037873, VkglTestCase_037873_1, VkglTestCase_037873_2);

#define VkglTestCase_037874_1 "dEQP-GLES3.functional.uniform_api.value.assigned"
#define VkglTestCase_037874_2 ".by_value.get_uniform.basic.bool_api_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037874, VkglTestCase_037874_1, VkglTestCase_037874_2);

#define VkglTestCase_037875_1 "dEQP-GLES3.functional.uniform_api.value.assign"
#define VkglTestCase_037875_2 "ed.by_value.get_uniform.basic.bool_api_int_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037875, VkglTestCase_037875_1, VkglTestCase_037875_2);

#define VkglTestCase_037876_1 "dEQP-GLES3.functional.uniform_api.value.assigned"
#define VkglTestCase_037876_2 ".by_value.get_uniform.basic.bool_api_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037876, VkglTestCase_037876_1, VkglTestCase_037876_2);

#define VkglTestCase_037877_1 "dEQP-GLES3.functional.uniform_api.value.assigned."
#define VkglTestCase_037877_2 "by_value.get_uniform.basic.bool_api_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037877, VkglTestCase_037877_1, VkglTestCase_037877_2);

#define VkglTestCase_037878_1 "dEQP-GLES3.functional.uniform_api.value.assigne"
#define VkglTestCase_037878_2 "d.by_value.get_uniform.basic.bool_api_uint_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037878, VkglTestCase_037878_1, VkglTestCase_037878_2);

#define VkglTestCase_037879_1 "dEQP-GLES3.functional.uniform_api.value.assigned."
#define VkglTestCase_037879_2 "by_value.get_uniform.basic.bvec2_api_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037879, VkglTestCase_037879_1, VkglTestCase_037879_2);

#define VkglTestCase_037880_1 "dEQP-GLES3.functional.uniform_api.value.assigned.b"
#define VkglTestCase_037880_2 "y_value.get_uniform.basic.bvec2_api_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037880, VkglTestCase_037880_1, VkglTestCase_037880_2);

#define VkglTestCase_037881_1 "dEQP-GLES3.functional.uniform_api.value.assigned"
#define VkglTestCase_037881_2 ".by_value.get_uniform.basic.bvec2_api_float_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037881, VkglTestCase_037881_1, VkglTestCase_037881_2);

#define VkglTestCase_037882_1 "dEQP-GLES3.functional.uniform_api.value.assigned"
#define VkglTestCase_037882_2 ".by_value.get_uniform.basic.bvec2_api_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037882, VkglTestCase_037882_1, VkglTestCase_037882_2);

#define VkglTestCase_037883_1 "dEQP-GLES3.functional.uniform_api.value.assigned."
#define VkglTestCase_037883_2 "by_value.get_uniform.basic.bvec2_api_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037883, VkglTestCase_037883_1, VkglTestCase_037883_2);

#define VkglTestCase_037884_1 "dEQP-GLES3.functional.uniform_api.value.assigne"
#define VkglTestCase_037884_2 "d.by_value.get_uniform.basic.bvec2_api_int_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037884, VkglTestCase_037884_1, VkglTestCase_037884_2);

#define VkglTestCase_037885_1 "dEQP-GLES3.functional.uniform_api.value.assigned"
#define VkglTestCase_037885_2 ".by_value.get_uniform.basic.bvec2_api_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037885, VkglTestCase_037885_1, VkglTestCase_037885_2);

#define VkglTestCase_037886_1 "dEQP-GLES3.functional.uniform_api.value.assigned."
#define VkglTestCase_037886_2 "by_value.get_uniform.basic.bvec2_api_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037886, VkglTestCase_037886_1, VkglTestCase_037886_2);

#define VkglTestCase_037887_1 "dEQP-GLES3.functional.uniform_api.value.assigne"
#define VkglTestCase_037887_2 "d.by_value.get_uniform.basic.bvec2_api_uint_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037887, VkglTestCase_037887_1, VkglTestCase_037887_2);

#define VkglTestCase_037888_1 "dEQP-GLES3.functional.uniform_api.value.assigned."
#define VkglTestCase_037888_2 "by_value.get_uniform.basic.bvec3_api_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037888, VkglTestCase_037888_1, VkglTestCase_037888_2);

#define VkglTestCase_037889_1 "dEQP-GLES3.functional.uniform_api.value.assigned.b"
#define VkglTestCase_037889_2 "y_value.get_uniform.basic.bvec3_api_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037889, VkglTestCase_037889_1, VkglTestCase_037889_2);

#define VkglTestCase_037890_1 "dEQP-GLES3.functional.uniform_api.value.assigned"
#define VkglTestCase_037890_2 ".by_value.get_uniform.basic.bvec3_api_float_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037890, VkglTestCase_037890_1, VkglTestCase_037890_2);

#define VkglTestCase_037891_1 "dEQP-GLES3.functional.uniform_api.value.assigned"
#define VkglTestCase_037891_2 ".by_value.get_uniform.basic.bvec3_api_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037891, VkglTestCase_037891_1, VkglTestCase_037891_2);

#define VkglTestCase_037892_1 "dEQP-GLES3.functional.uniform_api.value.assigned."
#define VkglTestCase_037892_2 "by_value.get_uniform.basic.bvec3_api_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037892, VkglTestCase_037892_1, VkglTestCase_037892_2);

#define VkglTestCase_037893_1 "dEQP-GLES3.functional.uniform_api.value.assigne"
#define VkglTestCase_037893_2 "d.by_value.get_uniform.basic.bvec3_api_int_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037893, VkglTestCase_037893_1, VkglTestCase_037893_2);

#define VkglTestCase_037894_1 "dEQP-GLES3.functional.uniform_api.value.assigned"
#define VkglTestCase_037894_2 ".by_value.get_uniform.basic.bvec3_api_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037894, VkglTestCase_037894_1, VkglTestCase_037894_2);

#define VkglTestCase_037895_1 "dEQP-GLES3.functional.uniform_api.value.assigned."
#define VkglTestCase_037895_2 "by_value.get_uniform.basic.bvec3_api_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037895, VkglTestCase_037895_1, VkglTestCase_037895_2);

#define VkglTestCase_037896_1 "dEQP-GLES3.functional.uniform_api.value.assigne"
#define VkglTestCase_037896_2 "d.by_value.get_uniform.basic.bvec3_api_uint_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037896, VkglTestCase_037896_1, VkglTestCase_037896_2);

#define VkglTestCase_037897_1 "dEQP-GLES3.functional.uniform_api.value.assigned."
#define VkglTestCase_037897_2 "by_value.get_uniform.basic.bvec4_api_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037897, VkglTestCase_037897_1, VkglTestCase_037897_2);

#define VkglTestCase_037898_1 "dEQP-GLES3.functional.uniform_api.value.assigned.b"
#define VkglTestCase_037898_2 "y_value.get_uniform.basic.bvec4_api_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037898, VkglTestCase_037898_1, VkglTestCase_037898_2);

#define VkglTestCase_037899_1 "dEQP-GLES3.functional.uniform_api.value.assigned"
#define VkglTestCase_037899_2 ".by_value.get_uniform.basic.bvec4_api_float_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037899, VkglTestCase_037899_1, VkglTestCase_037899_2);

#define VkglTestCase_037900_1 "dEQP-GLES3.functional.uniform_api.value.assigned"
#define VkglTestCase_037900_2 ".by_value.get_uniform.basic.bvec4_api_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037900, VkglTestCase_037900_1, VkglTestCase_037900_2);

#define VkglTestCase_037901_1 "dEQP-GLES3.functional.uniform_api.value.assigned."
#define VkglTestCase_037901_2 "by_value.get_uniform.basic.bvec4_api_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037901, VkglTestCase_037901_1, VkglTestCase_037901_2);

#define VkglTestCase_037902_1 "dEQP-GLES3.functional.uniform_api.value.assigne"
#define VkglTestCase_037902_2 "d.by_value.get_uniform.basic.bvec4_api_int_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037902, VkglTestCase_037902_1, VkglTestCase_037902_2);

#define VkglTestCase_037903_1 "dEQP-GLES3.functional.uniform_api.value.assigned"
#define VkglTestCase_037903_2 ".by_value.get_uniform.basic.bvec4_api_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037903, VkglTestCase_037903_1, VkglTestCase_037903_2);

#define VkglTestCase_037904_1 "dEQP-GLES3.functional.uniform_api.value.assigned."
#define VkglTestCase_037904_2 "by_value.get_uniform.basic.bvec4_api_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037904, VkglTestCase_037904_1, VkglTestCase_037904_2);

#define VkglTestCase_037905_1 "dEQP-GLES3.functional.uniform_api.value.assigne"
#define VkglTestCase_037905_2 "d.by_value.get_uniform.basic.bvec4_api_uint_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037905, VkglTestCase_037905_1, VkglTestCase_037905_2);

#define VkglTestCase_037906_1 "dEQP-GLES3.functional.uniform_api.value.assign"
#define VkglTestCase_037906_2 "ed.by_value.get_uniform.basic.sampler2D_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037906, VkglTestCase_037906_1, VkglTestCase_037906_2);

#define VkglTestCase_037907_1 "dEQP-GLES3.functional.uniform_api.value.assigne"
#define VkglTestCase_037907_2 "d.by_value.get_uniform.basic.sampler2D_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037907, VkglTestCase_037907_1, VkglTestCase_037907_2);

#define VkglTestCase_037908_1 "dEQP-GLES3.functional.uniform_api.value.assig"
#define VkglTestCase_037908_2 "ned.by_value.get_uniform.basic.sampler2D_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037908, VkglTestCase_037908_1, VkglTestCase_037908_2);

#define VkglTestCase_037909_1 "dEQP-GLES3.functional.uniform_api.value.assigne"
#define VkglTestCase_037909_2 "d.by_value.get_uniform.basic.samplerCube_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037909, VkglTestCase_037909_1, VkglTestCase_037909_2);

#define VkglTestCase_037910_1 "dEQP-GLES3.functional.uniform_api.value.assigned"
#define VkglTestCase_037910_2 ".by_value.get_uniform.basic.samplerCube_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037910, VkglTestCase_037910_1, VkglTestCase_037910_2);

#define VkglTestCase_037911_1 "dEQP-GLES3.functional.uniform_api.value.assign"
#define VkglTestCase_037911_2 "ed.by_value.get_uniform.basic.samplerCube_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_037911, VkglTestCase_037911_1, VkglTestCase_037911_2);
