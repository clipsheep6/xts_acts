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
#include "../ActsDeqpgles30002TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_001915_1 "dEQP-GLES3.functional.shaders.conversio"
#define VkglTestCase_001915_2 "ns.vector_to_vector.vec4_to_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001915, VkglTestCase_001915_1, VkglTestCase_001915_2);

#define VkglTestCase_001916_1 "dEQP-GLES3.functional.shaders.conversion"
#define VkglTestCase_001916_2 "s.vector_to_vector.vec4_to_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001916, VkglTestCase_001916_1, VkglTestCase_001916_2);

#define VkglTestCase_001917_1 "dEQP-GLES3.functional.shaders.conversio"
#define VkglTestCase_001917_2 "ns.vector_to_vector.vec4_to_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001917, VkglTestCase_001917_1, VkglTestCase_001917_2);

#define VkglTestCase_001918_1 "dEQP-GLES3.functional.shaders.conversion"
#define VkglTestCase_001918_2 "s.vector_to_vector.vec4_to_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001918, VkglTestCase_001918_1, VkglTestCase_001918_2);

#define VkglTestCase_001919_1 "dEQP-GLES3.functional.shaders.conversio"
#define VkglTestCase_001919_2 "ns.vector_to_vector.vec4_to_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001919, VkglTestCase_001919_1, VkglTestCase_001919_2);

#define VkglTestCase_001920_1 "dEQP-GLES3.functional.shaders.conversion"
#define VkglTestCase_001920_2 "s.vector_to_vector.vec4_to_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001920, VkglTestCase_001920_1, VkglTestCase_001920_2);

#define VkglTestCase_001921_1 "dEQP-GLES3.functional.shaders.conversio"
#define VkglTestCase_001921_2 "ns.vector_to_vector.vec4_to_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001921, VkglTestCase_001921_1, VkglTestCase_001921_2);

#define VkglTestCase_001922_1 "dEQP-GLES3.functional.shaders.conversion"
#define VkglTestCase_001922_2 "s.vector_to_vector.vec4_to_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001922, VkglTestCase_001922_1, VkglTestCase_001922_2);

#define VkglTestCase_001923_1 "dEQP-GLES3.functional.shaders.conversio"
#define VkglTestCase_001923_2 "ns.vector_to_vector.vec4_to_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001923, VkglTestCase_001923_1, VkglTestCase_001923_2);

#define VkglTestCase_001924_1 "dEQP-GLES3.functional.shaders.conversion"
#define VkglTestCase_001924_2 "s.vector_to_vector.vec4_to_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001924, VkglTestCase_001924_1, VkglTestCase_001924_2);

#define VkglTestCase_001925_1 "dEQP-GLES3.functional.shaders.conversio"
#define VkglTestCase_001925_2 "ns.vector_to_vector.vec4_to_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001925, VkglTestCase_001925_1, VkglTestCase_001925_2);

#define VkglTestCase_001926_1 "dEQP-GLES3.functional.shaders.conversion"
#define VkglTestCase_001926_2 "s.vector_to_vector.vec4_to_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001926, VkglTestCase_001926_1, VkglTestCase_001926_2);

#define VkglTestCase_001927_1 "dEQP-GLES3.functional.shaders.conversio"
#define VkglTestCase_001927_2 "ns.vector_to_vector.vec4_to_bvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001927, VkglTestCase_001927_1, VkglTestCase_001927_2);

#define VkglTestCase_001928_1 "dEQP-GLES3.functional.shaders.conversion"
#define VkglTestCase_001928_2 "s.vector_to_vector.vec4_to_bvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001928, VkglTestCase_001928_1, VkglTestCase_001928_2);

#define VkglTestCase_001929_1 "dEQP-GLES3.functional.shaders.conversio"
#define VkglTestCase_001929_2 "ns.vector_to_vector.vec4_to_bvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001929, VkglTestCase_001929_1, VkglTestCase_001929_2);

#define VkglTestCase_001930_1 "dEQP-GLES3.functional.shaders.conversion"
#define VkglTestCase_001930_2 "s.vector_to_vector.vec4_to_bvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001930, VkglTestCase_001930_1, VkglTestCase_001930_2);

#define VkglTestCase_001931_1 "dEQP-GLES3.functional.shaders.conversio"
#define VkglTestCase_001931_2 "ns.vector_to_vector.vec4_to_bvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001931, VkglTestCase_001931_1, VkglTestCase_001931_2);

#define VkglTestCase_001932_1 "dEQP-GLES3.functional.shaders.conversion"
#define VkglTestCase_001932_2 "s.vector_to_vector.vec4_to_bvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001932, VkglTestCase_001932_1, VkglTestCase_001932_2);

#define VkglTestCase_001933_1 "dEQP-GLES3.functional.shaders.conversio"
#define VkglTestCase_001933_2 "ns.vector_to_vector.ivec4_to_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001933, VkglTestCase_001933_1, VkglTestCase_001933_2);

#define VkglTestCase_001934_1 "dEQP-GLES3.functional.shaders.conversion"
#define VkglTestCase_001934_2 "s.vector_to_vector.ivec4_to_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001934, VkglTestCase_001934_1, VkglTestCase_001934_2);

#define VkglTestCase_001935_1 "dEQP-GLES3.functional.shaders.conversio"
#define VkglTestCase_001935_2 "ns.vector_to_vector.ivec4_to_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001935, VkglTestCase_001935_1, VkglTestCase_001935_2);

#define VkglTestCase_001936_1 "dEQP-GLES3.functional.shaders.conversion"
#define VkglTestCase_001936_2 "s.vector_to_vector.ivec4_to_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001936, VkglTestCase_001936_1, VkglTestCase_001936_2);

#define VkglTestCase_001937_1 "dEQP-GLES3.functional.shaders.conversio"
#define VkglTestCase_001937_2 "ns.vector_to_vector.ivec4_to_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001937, VkglTestCase_001937_1, VkglTestCase_001937_2);

#define VkglTestCase_001938_1 "dEQP-GLES3.functional.shaders.conversion"
#define VkglTestCase_001938_2 "s.vector_to_vector.ivec4_to_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001938, VkglTestCase_001938_1, VkglTestCase_001938_2);

#define VkglTestCase_001939_1 "dEQP-GLES3.functional.shaders.conversion"
#define VkglTestCase_001939_2 "s.vector_to_vector.ivec4_to_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001939, VkglTestCase_001939_1, VkglTestCase_001939_2);

#define VkglTestCase_001940_1 "dEQP-GLES3.functional.shaders.conversions"
#define VkglTestCase_001940_2 ".vector_to_vector.ivec4_to_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001940, VkglTestCase_001940_1, VkglTestCase_001940_2);

#define VkglTestCase_001941_1 "dEQP-GLES3.functional.shaders.conversion"
#define VkglTestCase_001941_2 "s.vector_to_vector.ivec4_to_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001941, VkglTestCase_001941_1, VkglTestCase_001941_2);

#define VkglTestCase_001942_1 "dEQP-GLES3.functional.shaders.conversions"
#define VkglTestCase_001942_2 ".vector_to_vector.ivec4_to_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001942, VkglTestCase_001942_1, VkglTestCase_001942_2);

#define VkglTestCase_001943_1 "dEQP-GLES3.functional.shaders.conversion"
#define VkglTestCase_001943_2 "s.vector_to_vector.ivec4_to_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001943, VkglTestCase_001943_1, VkglTestCase_001943_2);

#define VkglTestCase_001944_1 "dEQP-GLES3.functional.shaders.conversions"
#define VkglTestCase_001944_2 ".vector_to_vector.ivec4_to_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001944, VkglTestCase_001944_1, VkglTestCase_001944_2);

#define VkglTestCase_001945_1 "dEQP-GLES3.functional.shaders.conversion"
#define VkglTestCase_001945_2 "s.vector_to_vector.ivec4_to_bvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001945, VkglTestCase_001945_1, VkglTestCase_001945_2);

#define VkglTestCase_001946_1 "dEQP-GLES3.functional.shaders.conversions"
#define VkglTestCase_001946_2 ".vector_to_vector.ivec4_to_bvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001946, VkglTestCase_001946_1, VkglTestCase_001946_2);

#define VkglTestCase_001947_1 "dEQP-GLES3.functional.shaders.conversion"
#define VkglTestCase_001947_2 "s.vector_to_vector.ivec4_to_bvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001947, VkglTestCase_001947_1, VkglTestCase_001947_2);

#define VkglTestCase_001948_1 "dEQP-GLES3.functional.shaders.conversions"
#define VkglTestCase_001948_2 ".vector_to_vector.ivec4_to_bvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001948, VkglTestCase_001948_1, VkglTestCase_001948_2);

#define VkglTestCase_001949_1 "dEQP-GLES3.functional.shaders.conversion"
#define VkglTestCase_001949_2 "s.vector_to_vector.ivec4_to_bvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001949, VkglTestCase_001949_1, VkglTestCase_001949_2);

#define VkglTestCase_001950_1 "dEQP-GLES3.functional.shaders.conversions"
#define VkglTestCase_001950_2 ".vector_to_vector.ivec4_to_bvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001950, VkglTestCase_001950_1, VkglTestCase_001950_2);

#define VkglTestCase_001951_1 "dEQP-GLES3.functional.shaders.conversio"
#define VkglTestCase_001951_2 "ns.vector_to_vector.uvec4_to_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001951, VkglTestCase_001951_1, VkglTestCase_001951_2);

#define VkglTestCase_001952_1 "dEQP-GLES3.functional.shaders.conversion"
#define VkglTestCase_001952_2 "s.vector_to_vector.uvec4_to_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001952, VkglTestCase_001952_1, VkglTestCase_001952_2);

#define VkglTestCase_001953_1 "dEQP-GLES3.functional.shaders.conversio"
#define VkglTestCase_001953_2 "ns.vector_to_vector.uvec4_to_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001953, VkglTestCase_001953_1, VkglTestCase_001953_2);

#define VkglTestCase_001954_1 "dEQP-GLES3.functional.shaders.conversion"
#define VkglTestCase_001954_2 "s.vector_to_vector.uvec4_to_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001954, VkglTestCase_001954_1, VkglTestCase_001954_2);

#define VkglTestCase_001955_1 "dEQP-GLES3.functional.shaders.conversio"
#define VkglTestCase_001955_2 "ns.vector_to_vector.uvec4_to_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001955, VkglTestCase_001955_1, VkglTestCase_001955_2);

#define VkglTestCase_001956_1 "dEQP-GLES3.functional.shaders.conversion"
#define VkglTestCase_001956_2 "s.vector_to_vector.uvec4_to_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001956, VkglTestCase_001956_1, VkglTestCase_001956_2);

#define VkglTestCase_001957_1 "dEQP-GLES3.functional.shaders.conversion"
#define VkglTestCase_001957_2 "s.vector_to_vector.uvec4_to_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001957, VkglTestCase_001957_1, VkglTestCase_001957_2);

#define VkglTestCase_001958_1 "dEQP-GLES3.functional.shaders.conversions"
#define VkglTestCase_001958_2 ".vector_to_vector.uvec4_to_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001958, VkglTestCase_001958_1, VkglTestCase_001958_2);

#define VkglTestCase_001959_1 "dEQP-GLES3.functional.shaders.conversion"
#define VkglTestCase_001959_2 "s.vector_to_vector.uvec4_to_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001959, VkglTestCase_001959_1, VkglTestCase_001959_2);

#define VkglTestCase_001960_1 "dEQP-GLES3.functional.shaders.conversions"
#define VkglTestCase_001960_2 ".vector_to_vector.uvec4_to_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001960, VkglTestCase_001960_1, VkglTestCase_001960_2);

#define VkglTestCase_001961_1 "dEQP-GLES3.functional.shaders.conversion"
#define VkglTestCase_001961_2 "s.vector_to_vector.uvec4_to_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001961, VkglTestCase_001961_1, VkglTestCase_001961_2);

#define VkglTestCase_001962_1 "dEQP-GLES3.functional.shaders.conversions"
#define VkglTestCase_001962_2 ".vector_to_vector.uvec4_to_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001962, VkglTestCase_001962_1, VkglTestCase_001962_2);

#define VkglTestCase_001963_1 "dEQP-GLES3.functional.shaders.conversion"
#define VkglTestCase_001963_2 "s.vector_to_vector.uvec4_to_bvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001963, VkglTestCase_001963_1, VkglTestCase_001963_2);

#define VkglTestCase_001964_1 "dEQP-GLES3.functional.shaders.conversions"
#define VkglTestCase_001964_2 ".vector_to_vector.uvec4_to_bvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001964, VkglTestCase_001964_1, VkglTestCase_001964_2);

#define VkglTestCase_001965_1 "dEQP-GLES3.functional.shaders.conversion"
#define VkglTestCase_001965_2 "s.vector_to_vector.uvec4_to_bvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001965, VkglTestCase_001965_1, VkglTestCase_001965_2);

#define VkglTestCase_001966_1 "dEQP-GLES3.functional.shaders.conversions"
#define VkglTestCase_001966_2 ".vector_to_vector.uvec4_to_bvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001966, VkglTestCase_001966_1, VkglTestCase_001966_2);

#define VkglTestCase_001967_1 "dEQP-GLES3.functional.shaders.conversion"
#define VkglTestCase_001967_2 "s.vector_to_vector.uvec4_to_bvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001967, VkglTestCase_001967_1, VkglTestCase_001967_2);

#define VkglTestCase_001968_1 "dEQP-GLES3.functional.shaders.conversions"
#define VkglTestCase_001968_2 ".vector_to_vector.uvec4_to_bvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001968, VkglTestCase_001968_1, VkglTestCase_001968_2);

#define VkglTestCase_001969_1 "dEQP-GLES3.functional.shaders.conversio"
#define VkglTestCase_001969_2 "ns.vector_to_vector.bvec4_to_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001969, VkglTestCase_001969_1, VkglTestCase_001969_2);

#define VkglTestCase_001970_1 "dEQP-GLES3.functional.shaders.conversion"
#define VkglTestCase_001970_2 "s.vector_to_vector.bvec4_to_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001970, VkglTestCase_001970_1, VkglTestCase_001970_2);

#define VkglTestCase_001971_1 "dEQP-GLES3.functional.shaders.conversio"
#define VkglTestCase_001971_2 "ns.vector_to_vector.bvec4_to_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001971, VkglTestCase_001971_1, VkglTestCase_001971_2);

#define VkglTestCase_001972_1 "dEQP-GLES3.functional.shaders.conversion"
#define VkglTestCase_001972_2 "s.vector_to_vector.bvec4_to_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001972, VkglTestCase_001972_1, VkglTestCase_001972_2);

#define VkglTestCase_001973_1 "dEQP-GLES3.functional.shaders.conversio"
#define VkglTestCase_001973_2 "ns.vector_to_vector.bvec4_to_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001973, VkglTestCase_001973_1, VkglTestCase_001973_2);

#define VkglTestCase_001974_1 "dEQP-GLES3.functional.shaders.conversion"
#define VkglTestCase_001974_2 "s.vector_to_vector.bvec4_to_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001974, VkglTestCase_001974_1, VkglTestCase_001974_2);

#define VkglTestCase_001975_1 "dEQP-GLES3.functional.shaders.conversion"
#define VkglTestCase_001975_2 "s.vector_to_vector.bvec4_to_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001975, VkglTestCase_001975_1, VkglTestCase_001975_2);

#define VkglTestCase_001976_1 "dEQP-GLES3.functional.shaders.conversions"
#define VkglTestCase_001976_2 ".vector_to_vector.bvec4_to_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001976, VkglTestCase_001976_1, VkglTestCase_001976_2);

#define VkglTestCase_001977_1 "dEQP-GLES3.functional.shaders.conversion"
#define VkglTestCase_001977_2 "s.vector_to_vector.bvec4_to_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001977, VkglTestCase_001977_1, VkglTestCase_001977_2);

#define VkglTestCase_001978_1 "dEQP-GLES3.functional.shaders.conversions"
#define VkglTestCase_001978_2 ".vector_to_vector.bvec4_to_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001978, VkglTestCase_001978_1, VkglTestCase_001978_2);

#define VkglTestCase_001979_1 "dEQP-GLES3.functional.shaders.conversion"
#define VkglTestCase_001979_2 "s.vector_to_vector.bvec4_to_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001979, VkglTestCase_001979_1, VkglTestCase_001979_2);

#define VkglTestCase_001980_1 "dEQP-GLES3.functional.shaders.conversions"
#define VkglTestCase_001980_2 ".vector_to_vector.bvec4_to_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001980, VkglTestCase_001980_1, VkglTestCase_001980_2);

#define VkglTestCase_001981_1 "dEQP-GLES3.functional.shaders.conversion"
#define VkglTestCase_001981_2 "s.vector_to_vector.bvec4_to_bvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001981, VkglTestCase_001981_1, VkglTestCase_001981_2);

#define VkglTestCase_001982_1 "dEQP-GLES3.functional.shaders.conversions"
#define VkglTestCase_001982_2 ".vector_to_vector.bvec4_to_bvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001982, VkglTestCase_001982_1, VkglTestCase_001982_2);

#define VkglTestCase_001983_1 "dEQP-GLES3.functional.shaders.conversion"
#define VkglTestCase_001983_2 "s.vector_to_vector.bvec4_to_bvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001983, VkglTestCase_001983_1, VkglTestCase_001983_2);

#define VkglTestCase_001984_1 "dEQP-GLES3.functional.shaders.conversions"
#define VkglTestCase_001984_2 ".vector_to_vector.bvec4_to_bvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001984, VkglTestCase_001984_1, VkglTestCase_001984_2);

#define VkglTestCase_001985_1 "dEQP-GLES3.functional.shaders.conversion"
#define VkglTestCase_001985_2 "s.vector_to_vector.bvec4_to_bvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001985, VkglTestCase_001985_1, VkglTestCase_001985_2);

#define VkglTestCase_001986_1 "dEQP-GLES3.functional.shaders.conversions"
#define VkglTestCase_001986_2 ".vector_to_vector.bvec4_to_bvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001986, VkglTestCase_001986_1, VkglTestCase_001986_2);

#define VkglTestCase_001987_1 "dEQP-GLES3.functional.shaders.conversio"
#define VkglTestCase_001987_2 "ns.vector_to_vector.vec4_to_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001987, VkglTestCase_001987_1, VkglTestCase_001987_2);

#define VkglTestCase_001988_1 "dEQP-GLES3.functional.shaders.conversion"
#define VkglTestCase_001988_2 "s.vector_to_vector.vec4_to_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001988, VkglTestCase_001988_1, VkglTestCase_001988_2);

#define VkglTestCase_001989_1 "dEQP-GLES3.functional.shaders.conversio"
#define VkglTestCase_001989_2 "ns.vector_to_vector.vec4_to_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001989, VkglTestCase_001989_1, VkglTestCase_001989_2);

#define VkglTestCase_001990_1 "dEQP-GLES3.functional.shaders.conversion"
#define VkglTestCase_001990_2 "s.vector_to_vector.vec4_to_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001990, VkglTestCase_001990_1, VkglTestCase_001990_2);

#define VkglTestCase_001991_1 "dEQP-GLES3.functional.shaders.conversio"
#define VkglTestCase_001991_2 "ns.vector_to_vector.vec4_to_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001991, VkglTestCase_001991_1, VkglTestCase_001991_2);

#define VkglTestCase_001992_1 "dEQP-GLES3.functional.shaders.conversion"
#define VkglTestCase_001992_2 "s.vector_to_vector.vec4_to_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001992, VkglTestCase_001992_1, VkglTestCase_001992_2);

#define VkglTestCase_001993_1 "dEQP-GLES3.functional.shaders.conversion"
#define VkglTestCase_001993_2 "s.vector_to_vector.ivec4_to_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001993, VkglTestCase_001993_1, VkglTestCase_001993_2);

#define VkglTestCase_001994_1 "dEQP-GLES3.functional.shaders.conversions"
#define VkglTestCase_001994_2 ".vector_to_vector.ivec4_to_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001994, VkglTestCase_001994_1, VkglTestCase_001994_2);

#define VkglTestCase_001995_1 "dEQP-GLES3.functional.shaders.conversion"
#define VkglTestCase_001995_2 "s.vector_to_vector.ivec4_to_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001995, VkglTestCase_001995_1, VkglTestCase_001995_2);

#define VkglTestCase_001996_1 "dEQP-GLES3.functional.shaders.conversions"
#define VkglTestCase_001996_2 ".vector_to_vector.ivec4_to_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001996, VkglTestCase_001996_1, VkglTestCase_001996_2);

#define VkglTestCase_001997_1 "dEQP-GLES3.functional.shaders.conversion"
#define VkglTestCase_001997_2 "s.vector_to_vector.ivec4_to_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001997, VkglTestCase_001997_1, VkglTestCase_001997_2);

#define VkglTestCase_001998_1 "dEQP-GLES3.functional.shaders.conversions"
#define VkglTestCase_001998_2 ".vector_to_vector.ivec4_to_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001998, VkglTestCase_001998_1, VkglTestCase_001998_2);

#define VkglTestCase_001999_1 "dEQP-GLES3.functional.shaders.conversion"
#define VkglTestCase_001999_2 "s.vector_to_vector.uvec4_to_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001999, VkglTestCase_001999_1, VkglTestCase_001999_2);

#define VkglTestCase_002000_1 "dEQP-GLES3.functional.shaders.conversions"
#define VkglTestCase_002000_2 ".vector_to_vector.uvec4_to_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_002000, VkglTestCase_002000_1, VkglTestCase_002000_2);

#define VkglTestCase_002001_1 "dEQP-GLES3.functional.shaders.conversion"
#define VkglTestCase_002001_2 "s.vector_to_vector.uvec4_to_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_002001, VkglTestCase_002001_1, VkglTestCase_002001_2);

#define VkglTestCase_002002_1 "dEQP-GLES3.functional.shaders.conversions"
#define VkglTestCase_002002_2 ".vector_to_vector.uvec4_to_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_002002, VkglTestCase_002002_1, VkglTestCase_002002_2);

#define VkglTestCase_002003_1 "dEQP-GLES3.functional.shaders.conversion"
#define VkglTestCase_002003_2 "s.vector_to_vector.uvec4_to_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_002003, VkglTestCase_002003_1, VkglTestCase_002003_2);

#define VkglTestCase_002004_1 "dEQP-GLES3.functional.shaders.conversions"
#define VkglTestCase_002004_2 ".vector_to_vector.uvec4_to_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_002004, VkglTestCase_002004_1, VkglTestCase_002004_2);

#define VkglTestCase_002005_1 "dEQP-GLES3.functional.shaders.conversion"
#define VkglTestCase_002005_2 "s.vector_to_vector.bvec4_to_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_002005, VkglTestCase_002005_1, VkglTestCase_002005_2);

#define VkglTestCase_002006_1 "dEQP-GLES3.functional.shaders.conversions"
#define VkglTestCase_002006_2 ".vector_to_vector.bvec4_to_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_002006, VkglTestCase_002006_1, VkglTestCase_002006_2);

#define VkglTestCase_002007_1 "dEQP-GLES3.functional.shaders.conversion"
#define VkglTestCase_002007_2 "s.vector_to_vector.bvec4_to_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_002007, VkglTestCase_002007_1, VkglTestCase_002007_2);

#define VkglTestCase_002008_1 "dEQP-GLES3.functional.shaders.conversions"
#define VkglTestCase_002008_2 ".vector_to_vector.bvec4_to_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_002008, VkglTestCase_002008_1, VkglTestCase_002008_2);

#define VkglTestCase_002009_1 "dEQP-GLES3.functional.shaders.conversion"
#define VkglTestCase_002009_2 "s.vector_to_vector.bvec4_to_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_002009, VkglTestCase_002009_1, VkglTestCase_002009_2);

#define VkglTestCase_002010_1 "dEQP-GLES3.functional.shaders.conversions"
#define VkglTestCase_002010_2 ".vector_to_vector.bvec4_to_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_002010, VkglTestCase_002010_1, VkglTestCase_002010_2);

#define VkglTestCase_002011_1 "dEQP-GLES3.functional.shaders.conversio"
#define VkglTestCase_002011_2 "ns.vector_to_vector.vec3_to_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_002011, VkglTestCase_002011_1, VkglTestCase_002011_2);

#define VkglTestCase_002012_1 "dEQP-GLES3.functional.shaders.conversion"
#define VkglTestCase_002012_2 "s.vector_to_vector.vec3_to_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_002012, VkglTestCase_002012_1, VkglTestCase_002012_2);

#define VkglTestCase_002013_1 "dEQP-GLES3.functional.shaders.conversio"
#define VkglTestCase_002013_2 "ns.vector_to_vector.vec3_to_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_002013, VkglTestCase_002013_1, VkglTestCase_002013_2);

#define VkglTestCase_002014_1 "dEQP-GLES3.functional.shaders.conversion"
#define VkglTestCase_002014_2 "s.vector_to_vector.vec3_to_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_002014, VkglTestCase_002014_1, VkglTestCase_002014_2);

#define VkglTestCase_002015_1 "dEQP-GLES3.functional.shaders.conversio"
#define VkglTestCase_002015_2 "ns.vector_to_vector.vec3_to_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_002015, VkglTestCase_002015_1, VkglTestCase_002015_2);

#define VkglTestCase_002016_1 "dEQP-GLES3.functional.shaders.conversion"
#define VkglTestCase_002016_2 "s.vector_to_vector.vec3_to_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_002016, VkglTestCase_002016_1, VkglTestCase_002016_2);

#define VkglTestCase_002017_1 "dEQP-GLES3.functional.shaders.conversio"
#define VkglTestCase_002017_2 "ns.vector_to_vector.vec3_to_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_002017, VkglTestCase_002017_1, VkglTestCase_002017_2);

#define VkglTestCase_002018_1 "dEQP-GLES3.functional.shaders.conversion"
#define VkglTestCase_002018_2 "s.vector_to_vector.vec3_to_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_002018, VkglTestCase_002018_1, VkglTestCase_002018_2);

#define VkglTestCase_002019_1 "dEQP-GLES3.functional.shaders.conversio"
#define VkglTestCase_002019_2 "ns.vector_to_vector.vec3_to_bvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_002019, VkglTestCase_002019_1, VkglTestCase_002019_2);

#define VkglTestCase_002020_1 "dEQP-GLES3.functional.shaders.conversion"
#define VkglTestCase_002020_2 "s.vector_to_vector.vec3_to_bvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_002020, VkglTestCase_002020_1, VkglTestCase_002020_2);

#define VkglTestCase_002021_1 "dEQP-GLES3.functional.shaders.conversio"
#define VkglTestCase_002021_2 "ns.vector_to_vector.vec3_to_bvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_002021, VkglTestCase_002021_1, VkglTestCase_002021_2);

#define VkglTestCase_002022_1 "dEQP-GLES3.functional.shaders.conversion"
#define VkglTestCase_002022_2 "s.vector_to_vector.vec3_to_bvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_002022, VkglTestCase_002022_1, VkglTestCase_002022_2);

#define VkglTestCase_002023_1 "dEQP-GLES3.functional.shaders.conversio"
#define VkglTestCase_002023_2 "ns.vector_to_vector.ivec3_to_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_002023, VkglTestCase_002023_1, VkglTestCase_002023_2);

#define VkglTestCase_002024_1 "dEQP-GLES3.functional.shaders.conversion"
#define VkglTestCase_002024_2 "s.vector_to_vector.ivec3_to_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_002024, VkglTestCase_002024_1, VkglTestCase_002024_2);

#define VkglTestCase_002025_1 "dEQP-GLES3.functional.shaders.conversio"
#define VkglTestCase_002025_2 "ns.vector_to_vector.ivec3_to_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_002025, VkglTestCase_002025_1, VkglTestCase_002025_2);

#define VkglTestCase_002026_1 "dEQP-GLES3.functional.shaders.conversion"
#define VkglTestCase_002026_2 "s.vector_to_vector.ivec3_to_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_002026, VkglTestCase_002026_1, VkglTestCase_002026_2);

#define VkglTestCase_002027_1 "dEQP-GLES3.functional.shaders.conversion"
#define VkglTestCase_002027_2 "s.vector_to_vector.ivec3_to_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_002027, VkglTestCase_002027_1, VkglTestCase_002027_2);

#define VkglTestCase_002028_1 "dEQP-GLES3.functional.shaders.conversions"
#define VkglTestCase_002028_2 ".vector_to_vector.ivec3_to_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_002028, VkglTestCase_002028_1, VkglTestCase_002028_2);

#define VkglTestCase_002029_1 "dEQP-GLES3.functional.shaders.conversion"
#define VkglTestCase_002029_2 "s.vector_to_vector.ivec3_to_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_002029, VkglTestCase_002029_1, VkglTestCase_002029_2);

#define VkglTestCase_002030_1 "dEQP-GLES3.functional.shaders.conversions"
#define VkglTestCase_002030_2 ".vector_to_vector.ivec3_to_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_002030, VkglTestCase_002030_1, VkglTestCase_002030_2);

#define VkglTestCase_002031_1 "dEQP-GLES3.functional.shaders.conversion"
#define VkglTestCase_002031_2 "s.vector_to_vector.ivec3_to_bvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_002031, VkglTestCase_002031_1, VkglTestCase_002031_2);

#define VkglTestCase_002032_1 "dEQP-GLES3.functional.shaders.conversions"
#define VkglTestCase_002032_2 ".vector_to_vector.ivec3_to_bvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_002032, VkglTestCase_002032_1, VkglTestCase_002032_2);

#define VkglTestCase_002033_1 "dEQP-GLES3.functional.shaders.conversion"
#define VkglTestCase_002033_2 "s.vector_to_vector.ivec3_to_bvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_002033, VkglTestCase_002033_1, VkglTestCase_002033_2);

#define VkglTestCase_002034_1 "dEQP-GLES3.functional.shaders.conversions"
#define VkglTestCase_002034_2 ".vector_to_vector.ivec3_to_bvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_002034, VkglTestCase_002034_1, VkglTestCase_002034_2);

#define VkglTestCase_002035_1 "dEQP-GLES3.functional.shaders.conversio"
#define VkglTestCase_002035_2 "ns.vector_to_vector.uvec3_to_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_002035, VkglTestCase_002035_1, VkglTestCase_002035_2);

#define VkglTestCase_002036_1 "dEQP-GLES3.functional.shaders.conversion"
#define VkglTestCase_002036_2 "s.vector_to_vector.uvec3_to_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_002036, VkglTestCase_002036_1, VkglTestCase_002036_2);

#define VkglTestCase_002037_1 "dEQP-GLES3.functional.shaders.conversio"
#define VkglTestCase_002037_2 "ns.vector_to_vector.uvec3_to_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_002037, VkglTestCase_002037_1, VkglTestCase_002037_2);

#define VkglTestCase_002038_1 "dEQP-GLES3.functional.shaders.conversion"
#define VkglTestCase_002038_2 "s.vector_to_vector.uvec3_to_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_002038, VkglTestCase_002038_1, VkglTestCase_002038_2);

#define VkglTestCase_002039_1 "dEQP-GLES3.functional.shaders.conversion"
#define VkglTestCase_002039_2 "s.vector_to_vector.uvec3_to_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_002039, VkglTestCase_002039_1, VkglTestCase_002039_2);

#define VkglTestCase_002040_1 "dEQP-GLES3.functional.shaders.conversions"
#define VkglTestCase_002040_2 ".vector_to_vector.uvec3_to_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_002040, VkglTestCase_002040_1, VkglTestCase_002040_2);

#define VkglTestCase_002041_1 "dEQP-GLES3.functional.shaders.conversion"
#define VkglTestCase_002041_2 "s.vector_to_vector.uvec3_to_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_002041, VkglTestCase_002041_1, VkglTestCase_002041_2);

#define VkglTestCase_002042_1 "dEQP-GLES3.functional.shaders.conversions"
#define VkglTestCase_002042_2 ".vector_to_vector.uvec3_to_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_002042, VkglTestCase_002042_1, VkglTestCase_002042_2);

#define VkglTestCase_002043_1 "dEQP-GLES3.functional.shaders.conversion"
#define VkglTestCase_002043_2 "s.vector_to_vector.uvec3_to_bvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_002043, VkglTestCase_002043_1, VkglTestCase_002043_2);

#define VkglTestCase_002044_1 "dEQP-GLES3.functional.shaders.conversions"
#define VkglTestCase_002044_2 ".vector_to_vector.uvec3_to_bvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_002044, VkglTestCase_002044_1, VkglTestCase_002044_2);

#define VkglTestCase_002045_1 "dEQP-GLES3.functional.shaders.conversion"
#define VkglTestCase_002045_2 "s.vector_to_vector.uvec3_to_bvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_002045, VkglTestCase_002045_1, VkglTestCase_002045_2);

#define VkglTestCase_002046_1 "dEQP-GLES3.functional.shaders.conversions"
#define VkglTestCase_002046_2 ".vector_to_vector.uvec3_to_bvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_002046, VkglTestCase_002046_1, VkglTestCase_002046_2);

#define VkglTestCase_002047_1 "dEQP-GLES3.functional.shaders.conversio"
#define VkglTestCase_002047_2 "ns.vector_to_vector.bvec3_to_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_002047, VkglTestCase_002047_1, VkglTestCase_002047_2);

#define VkglTestCase_002048_1 "dEQP-GLES3.functional.shaders.conversion"
#define VkglTestCase_002048_2 "s.vector_to_vector.bvec3_to_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_002048, VkglTestCase_002048_1, VkglTestCase_002048_2);

#define VkglTestCase_002049_1 "dEQP-GLES3.functional.shaders.conversio"
#define VkglTestCase_002049_2 "ns.vector_to_vector.bvec3_to_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_002049, VkglTestCase_002049_1, VkglTestCase_002049_2);

#define VkglTestCase_002050_1 "dEQP-GLES3.functional.shaders.conversion"
#define VkglTestCase_002050_2 "s.vector_to_vector.bvec3_to_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_002050, VkglTestCase_002050_1, VkglTestCase_002050_2);

#define VkglTestCase_002051_1 "dEQP-GLES3.functional.shaders.conversion"
#define VkglTestCase_002051_2 "s.vector_to_vector.bvec3_to_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_002051, VkglTestCase_002051_1, VkglTestCase_002051_2);

#define VkglTestCase_002052_1 "dEQP-GLES3.functional.shaders.conversions"
#define VkglTestCase_002052_2 ".vector_to_vector.bvec3_to_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_002052, VkglTestCase_002052_1, VkglTestCase_002052_2);

#define VkglTestCase_002053_1 "dEQP-GLES3.functional.shaders.conversion"
#define VkglTestCase_002053_2 "s.vector_to_vector.bvec3_to_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_002053, VkglTestCase_002053_1, VkglTestCase_002053_2);

#define VkglTestCase_002054_1 "dEQP-GLES3.functional.shaders.conversions"
#define VkglTestCase_002054_2 ".vector_to_vector.bvec3_to_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_002054, VkglTestCase_002054_1, VkglTestCase_002054_2);

#define VkglTestCase_002055_1 "dEQP-GLES3.functional.shaders.conversion"
#define VkglTestCase_002055_2 "s.vector_to_vector.bvec3_to_bvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_002055, VkglTestCase_002055_1, VkglTestCase_002055_2);

#define VkglTestCase_002056_1 "dEQP-GLES3.functional.shaders.conversions"
#define VkglTestCase_002056_2 ".vector_to_vector.bvec3_to_bvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_002056, VkglTestCase_002056_1, VkglTestCase_002056_2);

#define VkglTestCase_002057_1 "dEQP-GLES3.functional.shaders.conversion"
#define VkglTestCase_002057_2 "s.vector_to_vector.bvec3_to_bvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_002057, VkglTestCase_002057_1, VkglTestCase_002057_2);

#define VkglTestCase_002058_1 "dEQP-GLES3.functional.shaders.conversions"
#define VkglTestCase_002058_2 ".vector_to_vector.bvec3_to_bvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_002058, VkglTestCase_002058_1, VkglTestCase_002058_2);

#define VkglTestCase_002059_1 "dEQP-GLES3.functional.shaders.conversio"
#define VkglTestCase_002059_2 "ns.vector_to_vector.vec3_to_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_002059, VkglTestCase_002059_1, VkglTestCase_002059_2);

#define VkglTestCase_002060_1 "dEQP-GLES3.functional.shaders.conversion"
#define VkglTestCase_002060_2 "s.vector_to_vector.vec3_to_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_002060, VkglTestCase_002060_1, VkglTestCase_002060_2);

#define VkglTestCase_002061_1 "dEQP-GLES3.functional.shaders.conversio"
#define VkglTestCase_002061_2 "ns.vector_to_vector.vec3_to_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_002061, VkglTestCase_002061_1, VkglTestCase_002061_2);

#define VkglTestCase_002062_1 "dEQP-GLES3.functional.shaders.conversion"
#define VkglTestCase_002062_2 "s.vector_to_vector.vec3_to_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_002062, VkglTestCase_002062_1, VkglTestCase_002062_2);

#define VkglTestCase_002063_1 "dEQP-GLES3.functional.shaders.conversion"
#define VkglTestCase_002063_2 "s.vector_to_vector.ivec3_to_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_002063, VkglTestCase_002063_1, VkglTestCase_002063_2);

#define VkglTestCase_002064_1 "dEQP-GLES3.functional.shaders.conversions"
#define VkglTestCase_002064_2 ".vector_to_vector.ivec3_to_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_002064, VkglTestCase_002064_1, VkglTestCase_002064_2);

#define VkglTestCase_002065_1 "dEQP-GLES3.functional.shaders.conversion"
#define VkglTestCase_002065_2 "s.vector_to_vector.ivec3_to_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_002065, VkglTestCase_002065_1, VkglTestCase_002065_2);

#define VkglTestCase_002066_1 "dEQP-GLES3.functional.shaders.conversions"
#define VkglTestCase_002066_2 ".vector_to_vector.ivec3_to_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_002066, VkglTestCase_002066_1, VkglTestCase_002066_2);

#define VkglTestCase_002067_1 "dEQP-GLES3.functional.shaders.conversion"
#define VkglTestCase_002067_2 "s.vector_to_vector.uvec3_to_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_002067, VkglTestCase_002067_1, VkglTestCase_002067_2);

#define VkglTestCase_002068_1 "dEQP-GLES3.functional.shaders.conversions"
#define VkglTestCase_002068_2 ".vector_to_vector.uvec3_to_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_002068, VkglTestCase_002068_1, VkglTestCase_002068_2);

#define VkglTestCase_002069_1 "dEQP-GLES3.functional.shaders.conversion"
#define VkglTestCase_002069_2 "s.vector_to_vector.uvec3_to_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_002069, VkglTestCase_002069_1, VkglTestCase_002069_2);

#define VkglTestCase_002070_1 "dEQP-GLES3.functional.shaders.conversions"
#define VkglTestCase_002070_2 ".vector_to_vector.uvec3_to_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_002070, VkglTestCase_002070_1, VkglTestCase_002070_2);

#define VkglTestCase_002071_1 "dEQP-GLES3.functional.shaders.conversion"
#define VkglTestCase_002071_2 "s.vector_to_vector.bvec3_to_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_002071, VkglTestCase_002071_1, VkglTestCase_002071_2);

#define VkglTestCase_002072_1 "dEQP-GLES3.functional.shaders.conversions"
#define VkglTestCase_002072_2 ".vector_to_vector.bvec3_to_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_002072, VkglTestCase_002072_1, VkglTestCase_002072_2);

#define VkglTestCase_002073_1 "dEQP-GLES3.functional.shaders.conversion"
#define VkglTestCase_002073_2 "s.vector_to_vector.bvec3_to_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_002073, VkglTestCase_002073_1, VkglTestCase_002073_2);

#define VkglTestCase_002074_1 "dEQP-GLES3.functional.shaders.conversions"
#define VkglTestCase_002074_2 ".vector_to_vector.bvec3_to_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_002074, VkglTestCase_002074_1, VkglTestCase_002074_2);

#define VkglTestCase_002075_1 "dEQP-GLES3.functional.shaders.conversio"
#define VkglTestCase_002075_2 "ns.vector_to_vector.vec2_to_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_002075, VkglTestCase_002075_1, VkglTestCase_002075_2);

#define VkglTestCase_002076_1 "dEQP-GLES3.functional.shaders.conversion"
#define VkglTestCase_002076_2 "s.vector_to_vector.vec2_to_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_002076, VkglTestCase_002076_1, VkglTestCase_002076_2);

#define VkglTestCase_002077_1 "dEQP-GLES3.functional.shaders.conversio"
#define VkglTestCase_002077_2 "ns.vector_to_vector.vec2_to_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_002077, VkglTestCase_002077_1, VkglTestCase_002077_2);

#define VkglTestCase_002078_1 "dEQP-GLES3.functional.shaders.conversion"
#define VkglTestCase_002078_2 "s.vector_to_vector.vec2_to_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_002078, VkglTestCase_002078_1, VkglTestCase_002078_2);

#define VkglTestCase_002079_1 "dEQP-GLES3.functional.shaders.conversio"
#define VkglTestCase_002079_2 "ns.vector_to_vector.vec2_to_bvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_002079, VkglTestCase_002079_1, VkglTestCase_002079_2);

#define VkglTestCase_002080_1 "dEQP-GLES3.functional.shaders.conversion"
#define VkglTestCase_002080_2 "s.vector_to_vector.vec2_to_bvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_002080, VkglTestCase_002080_1, VkglTestCase_002080_2);

#define VkglTestCase_002081_1 "dEQP-GLES3.functional.shaders.conversio"
#define VkglTestCase_002081_2 "ns.vector_to_vector.ivec2_to_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_002081, VkglTestCase_002081_1, VkglTestCase_002081_2);

#define VkglTestCase_002082_1 "dEQP-GLES3.functional.shaders.conversion"
#define VkglTestCase_002082_2 "s.vector_to_vector.ivec2_to_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_002082, VkglTestCase_002082_1, VkglTestCase_002082_2);

#define VkglTestCase_002083_1 "dEQP-GLES3.functional.shaders.conversion"
#define VkglTestCase_002083_2 "s.vector_to_vector.ivec2_to_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_002083, VkglTestCase_002083_1, VkglTestCase_002083_2);

#define VkglTestCase_002084_1 "dEQP-GLES3.functional.shaders.conversions"
#define VkglTestCase_002084_2 ".vector_to_vector.ivec2_to_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_002084, VkglTestCase_002084_1, VkglTestCase_002084_2);

#define VkglTestCase_002085_1 "dEQP-GLES3.functional.shaders.conversion"
#define VkglTestCase_002085_2 "s.vector_to_vector.ivec2_to_bvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_002085, VkglTestCase_002085_1, VkglTestCase_002085_2);

#define VkglTestCase_002086_1 "dEQP-GLES3.functional.shaders.conversions"
#define VkglTestCase_002086_2 ".vector_to_vector.ivec2_to_bvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_002086, VkglTestCase_002086_1, VkglTestCase_002086_2);

#define VkglTestCase_002087_1 "dEQP-GLES3.functional.shaders.conversio"
#define VkglTestCase_002087_2 "ns.vector_to_vector.uvec2_to_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_002087, VkglTestCase_002087_1, VkglTestCase_002087_2);

#define VkglTestCase_002088_1 "dEQP-GLES3.functional.shaders.conversion"
#define VkglTestCase_002088_2 "s.vector_to_vector.uvec2_to_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_002088, VkglTestCase_002088_1, VkglTestCase_002088_2);

#define VkglTestCase_002089_1 "dEQP-GLES3.functional.shaders.conversion"
#define VkglTestCase_002089_2 "s.vector_to_vector.uvec2_to_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_002089, VkglTestCase_002089_1, VkglTestCase_002089_2);

#define VkglTestCase_002090_1 "dEQP-GLES3.functional.shaders.conversions"
#define VkglTestCase_002090_2 ".vector_to_vector.uvec2_to_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_002090, VkglTestCase_002090_1, VkglTestCase_002090_2);

#define VkglTestCase_002091_1 "dEQP-GLES3.functional.shaders.conversion"
#define VkglTestCase_002091_2 "s.vector_to_vector.uvec2_to_bvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_002091, VkglTestCase_002091_1, VkglTestCase_002091_2);

#define VkglTestCase_002092_1 "dEQP-GLES3.functional.shaders.conversions"
#define VkglTestCase_002092_2 ".vector_to_vector.uvec2_to_bvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_002092, VkglTestCase_002092_1, VkglTestCase_002092_2);

#define VkglTestCase_002093_1 "dEQP-GLES3.functional.shaders.conversio"
#define VkglTestCase_002093_2 "ns.vector_to_vector.bvec2_to_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_002093, VkglTestCase_002093_1, VkglTestCase_002093_2);

#define VkglTestCase_002094_1 "dEQP-GLES3.functional.shaders.conversion"
#define VkglTestCase_002094_2 "s.vector_to_vector.bvec2_to_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_002094, VkglTestCase_002094_1, VkglTestCase_002094_2);

#define VkglTestCase_002095_1 "dEQP-GLES3.functional.shaders.conversion"
#define VkglTestCase_002095_2 "s.vector_to_vector.bvec2_to_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_002095, VkglTestCase_002095_1, VkglTestCase_002095_2);

#define VkglTestCase_002096_1 "dEQP-GLES3.functional.shaders.conversions"
#define VkglTestCase_002096_2 ".vector_to_vector.bvec2_to_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_002096, VkglTestCase_002096_1, VkglTestCase_002096_2);

#define VkglTestCase_002097_1 "dEQP-GLES3.functional.shaders.conversion"
#define VkglTestCase_002097_2 "s.vector_to_vector.bvec2_to_bvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_002097, VkglTestCase_002097_1, VkglTestCase_002097_2);

#define VkglTestCase_002098_1 "dEQP-GLES3.functional.shaders.conversions"
#define VkglTestCase_002098_2 ".vector_to_vector.bvec2_to_bvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_002098, VkglTestCase_002098_1, VkglTestCase_002098_2);

#define VkglTestCase_002099_1 "dEQP-GLES3.functional.shaders.conversio"
#define VkglTestCase_002099_2 "ns.vector_to_vector.vec2_to_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_002099, VkglTestCase_002099_1, VkglTestCase_002099_2);

#define VkglTestCase_002100_1 "dEQP-GLES3.functional.shaders.conversion"
#define VkglTestCase_002100_2 "s.vector_to_vector.vec2_to_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_002100, VkglTestCase_002100_1, VkglTestCase_002100_2);

#define VkglTestCase_002101_1 "dEQP-GLES3.functional.shaders.conversion"
#define VkglTestCase_002101_2 "s.vector_to_vector.ivec2_to_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_002101, VkglTestCase_002101_1, VkglTestCase_002101_2);

#define VkglTestCase_002102_1 "dEQP-GLES3.functional.shaders.conversions"
#define VkglTestCase_002102_2 ".vector_to_vector.ivec2_to_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_002102, VkglTestCase_002102_1, VkglTestCase_002102_2);

#define VkglTestCase_002103_1 "dEQP-GLES3.functional.shaders.conversion"
#define VkglTestCase_002103_2 "s.vector_to_vector.uvec2_to_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_002103, VkglTestCase_002103_1, VkglTestCase_002103_2);

#define VkglTestCase_002104_1 "dEQP-GLES3.functional.shaders.conversions"
#define VkglTestCase_002104_2 ".vector_to_vector.uvec2_to_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_002104, VkglTestCase_002104_1, VkglTestCase_002104_2);

#define VkglTestCase_002105_1 "dEQP-GLES3.functional.shaders.conversion"
#define VkglTestCase_002105_2 "s.vector_to_vector.bvec2_to_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_002105, VkglTestCase_002105_1, VkglTestCase_002105_2);

#define VkglTestCase_002106_1 "dEQP-GLES3.functional.shaders.conversions"
#define VkglTestCase_002106_2 ".vector_to_vector.bvec2_to_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_002106, VkglTestCase_002106_1, VkglTestCase_002106_2);
