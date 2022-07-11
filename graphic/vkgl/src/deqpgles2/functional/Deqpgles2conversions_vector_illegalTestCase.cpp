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
#include "../ActsDeqpgles20001TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_000903_1 "dEQP-GLES2.functional.shaders.conversi"
#define VkglTestCase_000903_2 "ons.vector_illegal.vec2_to_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000903, VkglTestCase_000903_1, VkglTestCase_000903_2);

#define VkglTestCase_000904_1 "dEQP-GLES2.functional.shaders.conversio"
#define VkglTestCase_000904_2 "ns.vector_illegal.vec2_to_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000904, VkglTestCase_000904_1, VkglTestCase_000904_2);

#define VkglTestCase_000905_1 "dEQP-GLES2.functional.shaders.conversi"
#define VkglTestCase_000905_2 "ons.vector_illegal.vec2_to_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000905, VkglTestCase_000905_1, VkglTestCase_000905_2);

#define VkglTestCase_000906_1 "dEQP-GLES2.functional.shaders.conversio"
#define VkglTestCase_000906_2 "ns.vector_illegal.vec2_to_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000906, VkglTestCase_000906_1, VkglTestCase_000906_2);

#define VkglTestCase_000907_1 "dEQP-GLES2.functional.shaders.conversi"
#define VkglTestCase_000907_2 "ons.vector_illegal.vec2_to_bvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000907, VkglTestCase_000907_1, VkglTestCase_000907_2);

#define VkglTestCase_000908_1 "dEQP-GLES2.functional.shaders.conversio"
#define VkglTestCase_000908_2 "ns.vector_illegal.vec2_to_bvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000908, VkglTestCase_000908_1, VkglTestCase_000908_2);

#define VkglTestCase_000909_1 "dEQP-GLES2.functional.shaders.conversi"
#define VkglTestCase_000909_2 "ons.vector_illegal.vec2_to_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000909, VkglTestCase_000909_1, VkglTestCase_000909_2);

#define VkglTestCase_000910_1 "dEQP-GLES2.functional.shaders.conversio"
#define VkglTestCase_000910_2 "ns.vector_illegal.vec2_to_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000910, VkglTestCase_000910_1, VkglTestCase_000910_2);

#define VkglTestCase_000911_1 "dEQP-GLES2.functional.shaders.conversi"
#define VkglTestCase_000911_2 "ons.vector_illegal.vec2_to_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000911, VkglTestCase_000911_1, VkglTestCase_000911_2);

#define VkglTestCase_000912_1 "dEQP-GLES2.functional.shaders.conversio"
#define VkglTestCase_000912_2 "ns.vector_illegal.vec2_to_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000912, VkglTestCase_000912_1, VkglTestCase_000912_2);

#define VkglTestCase_000913_1 "dEQP-GLES2.functional.shaders.conversi"
#define VkglTestCase_000913_2 "ons.vector_illegal.vec2_to_bvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000913, VkglTestCase_000913_1, VkglTestCase_000913_2);

#define VkglTestCase_000914_1 "dEQP-GLES2.functional.shaders.conversio"
#define VkglTestCase_000914_2 "ns.vector_illegal.vec2_to_bvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000914, VkglTestCase_000914_1, VkglTestCase_000914_2);

#define VkglTestCase_000915_1 "dEQP-GLES2.functional.shaders.conversi"
#define VkglTestCase_000915_2 "ons.vector_illegal.ivec2_to_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000915, VkglTestCase_000915_1, VkglTestCase_000915_2);

#define VkglTestCase_000916_1 "dEQP-GLES2.functional.shaders.conversio"
#define VkglTestCase_000916_2 "ns.vector_illegal.ivec2_to_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000916, VkglTestCase_000916_1, VkglTestCase_000916_2);

#define VkglTestCase_000917_1 "dEQP-GLES2.functional.shaders.conversio"
#define VkglTestCase_000917_2 "ns.vector_illegal.ivec2_to_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000917, VkglTestCase_000917_1, VkglTestCase_000917_2);

#define VkglTestCase_000918_1 "dEQP-GLES2.functional.shaders.conversion"
#define VkglTestCase_000918_2 "s.vector_illegal.ivec2_to_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000918, VkglTestCase_000918_1, VkglTestCase_000918_2);

#define VkglTestCase_000919_1 "dEQP-GLES2.functional.shaders.conversio"
#define VkglTestCase_000919_2 "ns.vector_illegal.ivec2_to_bvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000919, VkglTestCase_000919_1, VkglTestCase_000919_2);

#define VkglTestCase_000920_1 "dEQP-GLES2.functional.shaders.conversion"
#define VkglTestCase_000920_2 "s.vector_illegal.ivec2_to_bvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000920, VkglTestCase_000920_1, VkglTestCase_000920_2);

#define VkglTestCase_000921_1 "dEQP-GLES2.functional.shaders.conversi"
#define VkglTestCase_000921_2 "ons.vector_illegal.ivec2_to_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000921, VkglTestCase_000921_1, VkglTestCase_000921_2);

#define VkglTestCase_000922_1 "dEQP-GLES2.functional.shaders.conversio"
#define VkglTestCase_000922_2 "ns.vector_illegal.ivec2_to_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000922, VkglTestCase_000922_1, VkglTestCase_000922_2);

#define VkglTestCase_000923_1 "dEQP-GLES2.functional.shaders.conversio"
#define VkglTestCase_000923_2 "ns.vector_illegal.ivec2_to_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000923, VkglTestCase_000923_1, VkglTestCase_000923_2);

#define VkglTestCase_000924_1 "dEQP-GLES2.functional.shaders.conversion"
#define VkglTestCase_000924_2 "s.vector_illegal.ivec2_to_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000924, VkglTestCase_000924_1, VkglTestCase_000924_2);

#define VkglTestCase_000925_1 "dEQP-GLES2.functional.shaders.conversio"
#define VkglTestCase_000925_2 "ns.vector_illegal.ivec2_to_bvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000925, VkglTestCase_000925_1, VkglTestCase_000925_2);

#define VkglTestCase_000926_1 "dEQP-GLES2.functional.shaders.conversion"
#define VkglTestCase_000926_2 "s.vector_illegal.ivec2_to_bvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000926, VkglTestCase_000926_1, VkglTestCase_000926_2);

#define VkglTestCase_000927_1 "dEQP-GLES2.functional.shaders.conversi"
#define VkglTestCase_000927_2 "ons.vector_illegal.bvec2_to_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000927, VkglTestCase_000927_1, VkglTestCase_000927_2);

#define VkglTestCase_000928_1 "dEQP-GLES2.functional.shaders.conversio"
#define VkglTestCase_000928_2 "ns.vector_illegal.bvec2_to_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000928, VkglTestCase_000928_1, VkglTestCase_000928_2);

#define VkglTestCase_000929_1 "dEQP-GLES2.functional.shaders.conversio"
#define VkglTestCase_000929_2 "ns.vector_illegal.bvec2_to_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000929, VkglTestCase_000929_1, VkglTestCase_000929_2);

#define VkglTestCase_000930_1 "dEQP-GLES2.functional.shaders.conversion"
#define VkglTestCase_000930_2 "s.vector_illegal.bvec2_to_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000930, VkglTestCase_000930_1, VkglTestCase_000930_2);

#define VkglTestCase_000931_1 "dEQP-GLES2.functional.shaders.conversio"
#define VkglTestCase_000931_2 "ns.vector_illegal.bvec2_to_bvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000931, VkglTestCase_000931_1, VkglTestCase_000931_2);

#define VkglTestCase_000932_1 "dEQP-GLES2.functional.shaders.conversion"
#define VkglTestCase_000932_2 "s.vector_illegal.bvec2_to_bvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000932, VkglTestCase_000932_1, VkglTestCase_000932_2);

#define VkglTestCase_000933_1 "dEQP-GLES2.functional.shaders.conversi"
#define VkglTestCase_000933_2 "ons.vector_illegal.bvec2_to_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000933, VkglTestCase_000933_1, VkglTestCase_000933_2);

#define VkglTestCase_000934_1 "dEQP-GLES2.functional.shaders.conversio"
#define VkglTestCase_000934_2 "ns.vector_illegal.bvec2_to_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000934, VkglTestCase_000934_1, VkglTestCase_000934_2);

#define VkglTestCase_000935_1 "dEQP-GLES2.functional.shaders.conversio"
#define VkglTestCase_000935_2 "ns.vector_illegal.bvec2_to_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000935, VkglTestCase_000935_1, VkglTestCase_000935_2);

#define VkglTestCase_000936_1 "dEQP-GLES2.functional.shaders.conversion"
#define VkglTestCase_000936_2 "s.vector_illegal.bvec2_to_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000936, VkglTestCase_000936_1, VkglTestCase_000936_2);

#define VkglTestCase_000937_1 "dEQP-GLES2.functional.shaders.conversio"
#define VkglTestCase_000937_2 "ns.vector_illegal.bvec2_to_bvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000937, VkglTestCase_000937_1, VkglTestCase_000937_2);

#define VkglTestCase_000938_1 "dEQP-GLES2.functional.shaders.conversion"
#define VkglTestCase_000938_2 "s.vector_illegal.bvec2_to_bvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000938, VkglTestCase_000938_1, VkglTestCase_000938_2);

#define VkglTestCase_000939_1 "dEQP-GLES2.functional.shaders.conversi"
#define VkglTestCase_000939_2 "ons.vector_illegal.vec3_to_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000939, VkglTestCase_000939_1, VkglTestCase_000939_2);

#define VkglTestCase_000940_1 "dEQP-GLES2.functional.shaders.conversio"
#define VkglTestCase_000940_2 "ns.vector_illegal.vec3_to_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000940, VkglTestCase_000940_1, VkglTestCase_000940_2);

#define VkglTestCase_000941_1 "dEQP-GLES2.functional.shaders.conversi"
#define VkglTestCase_000941_2 "ons.vector_illegal.vec3_to_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000941, VkglTestCase_000941_1, VkglTestCase_000941_2);

#define VkglTestCase_000942_1 "dEQP-GLES2.functional.shaders.conversio"
#define VkglTestCase_000942_2 "ns.vector_illegal.vec3_to_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000942, VkglTestCase_000942_1, VkglTestCase_000942_2);

#define VkglTestCase_000943_1 "dEQP-GLES2.functional.shaders.conversi"
#define VkglTestCase_000943_2 "ons.vector_illegal.vec3_to_bvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000943, VkglTestCase_000943_1, VkglTestCase_000943_2);

#define VkglTestCase_000944_1 "dEQP-GLES2.functional.shaders.conversio"
#define VkglTestCase_000944_2 "ns.vector_illegal.vec3_to_bvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000944, VkglTestCase_000944_1, VkglTestCase_000944_2);

#define VkglTestCase_000945_1 "dEQP-GLES2.functional.shaders.conversi"
#define VkglTestCase_000945_2 "ons.vector_illegal.ivec3_to_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000945, VkglTestCase_000945_1, VkglTestCase_000945_2);

#define VkglTestCase_000946_1 "dEQP-GLES2.functional.shaders.conversio"
#define VkglTestCase_000946_2 "ns.vector_illegal.ivec3_to_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000946, VkglTestCase_000946_1, VkglTestCase_000946_2);

#define VkglTestCase_000947_1 "dEQP-GLES2.functional.shaders.conversio"
#define VkglTestCase_000947_2 "ns.vector_illegal.ivec3_to_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000947, VkglTestCase_000947_1, VkglTestCase_000947_2);

#define VkglTestCase_000948_1 "dEQP-GLES2.functional.shaders.conversion"
#define VkglTestCase_000948_2 "s.vector_illegal.ivec3_to_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000948, VkglTestCase_000948_1, VkglTestCase_000948_2);

#define VkglTestCase_000949_1 "dEQP-GLES2.functional.shaders.conversio"
#define VkglTestCase_000949_2 "ns.vector_illegal.ivec3_to_bvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000949, VkglTestCase_000949_1, VkglTestCase_000949_2);

#define VkglTestCase_000950_1 "dEQP-GLES2.functional.shaders.conversion"
#define VkglTestCase_000950_2 "s.vector_illegal.ivec3_to_bvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000950, VkglTestCase_000950_1, VkglTestCase_000950_2);

#define VkglTestCase_000951_1 "dEQP-GLES2.functional.shaders.conversi"
#define VkglTestCase_000951_2 "ons.vector_illegal.bvec3_to_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000951, VkglTestCase_000951_1, VkglTestCase_000951_2);

#define VkglTestCase_000952_1 "dEQP-GLES2.functional.shaders.conversio"
#define VkglTestCase_000952_2 "ns.vector_illegal.bvec3_to_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000952, VkglTestCase_000952_1, VkglTestCase_000952_2);

#define VkglTestCase_000953_1 "dEQP-GLES2.functional.shaders.conversio"
#define VkglTestCase_000953_2 "ns.vector_illegal.bvec3_to_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000953, VkglTestCase_000953_1, VkglTestCase_000953_2);

#define VkglTestCase_000954_1 "dEQP-GLES2.functional.shaders.conversion"
#define VkglTestCase_000954_2 "s.vector_illegal.bvec3_to_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000954, VkglTestCase_000954_1, VkglTestCase_000954_2);

#define VkglTestCase_000955_1 "dEQP-GLES2.functional.shaders.conversio"
#define VkglTestCase_000955_2 "ns.vector_illegal.bvec3_to_bvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000955, VkglTestCase_000955_1, VkglTestCase_000955_2);

#define VkglTestCase_000956_1 "dEQP-GLES2.functional.shaders.conversion"
#define VkglTestCase_000956_2 "s.vector_illegal.bvec3_to_bvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000956, VkglTestCase_000956_1, VkglTestCase_000956_2);
