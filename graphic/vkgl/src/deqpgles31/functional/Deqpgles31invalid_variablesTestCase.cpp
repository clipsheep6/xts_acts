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

#define VkglTestCase_005927_1 "dEQP-GLES31.functional.shaders.implicit_conver"
#define VkglTestCase_005927_2 "sions.es31.invalid.variables.uint_to_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005927, VkglTestCase_005927_1, VkglTestCase_005927_2);

#define VkglTestCase_005928_1 "dEQP-GLES31.functional.shaders.implicit_convers"
#define VkglTestCase_005928_2 "ions.es31.invalid.variables.uint_to_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005928, VkglTestCase_005928_1, VkglTestCase_005928_2);

#define VkglTestCase_005929_1 "dEQP-GLES31.functional.shaders.implicit_convers"
#define VkglTestCase_005929_2 "ions.es31.invalid.variables.uint_to_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005929, VkglTestCase_005929_1, VkglTestCase_005929_2);

#define VkglTestCase_005930_1 "dEQP-GLES31.functional.shaders.implicit_conversi"
#define VkglTestCase_005930_2 "ons.es31.invalid.variables.uint_to_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005930, VkglTestCase_005930_1, VkglTestCase_005930_2);

#define VkglTestCase_005931_1 "dEQP-GLES31.functional.shaders.implicit_convers"
#define VkglTestCase_005931_2 "ions.es31.invalid.variables.uint_to_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005931, VkglTestCase_005931_1, VkglTestCase_005931_2);

#define VkglTestCase_005932_1 "dEQP-GLES31.functional.shaders.implicit_conversi"
#define VkglTestCase_005932_2 "ons.es31.invalid.variables.uint_to_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005932, VkglTestCase_005932_1, VkglTestCase_005932_2);

#define VkglTestCase_005933_1 "dEQP-GLES31.functional.shaders.implicit_convers"
#define VkglTestCase_005933_2 "ions.es31.invalid.variables.uint_to_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005933, VkglTestCase_005933_1, VkglTestCase_005933_2);

#define VkglTestCase_005934_1 "dEQP-GLES31.functional.shaders.implicit_conversi"
#define VkglTestCase_005934_2 "ons.es31.invalid.variables.uint_to_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005934, VkglTestCase_005934_1, VkglTestCase_005934_2);

#define VkglTestCase_005935_1 "dEQP-GLES31.functional.shaders.implicit_convers"
#define VkglTestCase_005935_2 "ions.es31.invalid.variables.ivec2_to_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005935, VkglTestCase_005935_1, VkglTestCase_005935_2);

#define VkglTestCase_005936_1 "dEQP-GLES31.functional.shaders.implicit_conversi"
#define VkglTestCase_005936_2 "ons.es31.invalid.variables.ivec2_to_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005936, VkglTestCase_005936_1, VkglTestCase_005936_2);

#define VkglTestCase_005937_1 "dEQP-GLES31.functional.shaders.implicit_conversi"
#define VkglTestCase_005937_2 "ons.es31.invalid.variables.ivec2_to_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005937, VkglTestCase_005937_1, VkglTestCase_005937_2);

#define VkglTestCase_005938_1 "dEQP-GLES31.functional.shaders.implicit_conversio"
#define VkglTestCase_005938_2 "ns.es31.invalid.variables.ivec2_to_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005938, VkglTestCase_005938_1, VkglTestCase_005938_2);

#define VkglTestCase_005939_1 "dEQP-GLES31.functional.shaders.implicit_conversi"
#define VkglTestCase_005939_2 "ons.es31.invalid.variables.ivec2_to_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005939, VkglTestCase_005939_1, VkglTestCase_005939_2);

#define VkglTestCase_005940_1 "dEQP-GLES31.functional.shaders.implicit_conversio"
#define VkglTestCase_005940_2 "ns.es31.invalid.variables.ivec2_to_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005940, VkglTestCase_005940_1, VkglTestCase_005940_2);

#define VkglTestCase_005941_1 "dEQP-GLES31.functional.shaders.implicit_conversi"
#define VkglTestCase_005941_2 "ons.es31.invalid.variables.ivec2_to_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005941, VkglTestCase_005941_1, VkglTestCase_005941_2);

#define VkglTestCase_005942_1 "dEQP-GLES31.functional.shaders.implicit_conversio"
#define VkglTestCase_005942_2 "ns.es31.invalid.variables.ivec2_to_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005942, VkglTestCase_005942_1, VkglTestCase_005942_2);

#define VkglTestCase_005943_1 "dEQP-GLES31.functional.shaders.implicit_conversi"
#define VkglTestCase_005943_2 "ons.es31.invalid.variables.ivec2_to_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005943, VkglTestCase_005943_1, VkglTestCase_005943_2);

#define VkglTestCase_005944_1 "dEQP-GLES31.functional.shaders.implicit_conversio"
#define VkglTestCase_005944_2 "ns.es31.invalid.variables.ivec2_to_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005944, VkglTestCase_005944_1, VkglTestCase_005944_2);

#define VkglTestCase_005945_1 "dEQP-GLES31.functional.shaders.implicit_convers"
#define VkglTestCase_005945_2 "ions.es31.invalid.variables.ivec2_to_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005945, VkglTestCase_005945_1, VkglTestCase_005945_2);

#define VkglTestCase_005946_1 "dEQP-GLES31.functional.shaders.implicit_conversi"
#define VkglTestCase_005946_2 "ons.es31.invalid.variables.ivec2_to_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005946, VkglTestCase_005946_1, VkglTestCase_005946_2);

#define VkglTestCase_005947_1 "dEQP-GLES31.functional.shaders.implicit_convers"
#define VkglTestCase_005947_2 "ions.es31.invalid.variables.ivec2_to_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005947, VkglTestCase_005947_1, VkglTestCase_005947_2);

#define VkglTestCase_005948_1 "dEQP-GLES31.functional.shaders.implicit_conversi"
#define VkglTestCase_005948_2 "ons.es31.invalid.variables.ivec2_to_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005948, VkglTestCase_005948_1, VkglTestCase_005948_2);

#define VkglTestCase_005949_1 "dEQP-GLES31.functional.shaders.implicit_convers"
#define VkglTestCase_005949_2 "ions.es31.invalid.variables.uvec2_to_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005949, VkglTestCase_005949_1, VkglTestCase_005949_2);

#define VkglTestCase_005950_1 "dEQP-GLES31.functional.shaders.implicit_conversi"
#define VkglTestCase_005950_2 "ons.es31.invalid.variables.uvec2_to_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005950, VkglTestCase_005950_1, VkglTestCase_005950_2);

#define VkglTestCase_005951_1 "dEQP-GLES31.functional.shaders.implicit_conversi"
#define VkglTestCase_005951_2 "ons.es31.invalid.variables.uvec2_to_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005951, VkglTestCase_005951_1, VkglTestCase_005951_2);

#define VkglTestCase_005952_1 "dEQP-GLES31.functional.shaders.implicit_conversio"
#define VkglTestCase_005952_2 "ns.es31.invalid.variables.uvec2_to_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005952, VkglTestCase_005952_1, VkglTestCase_005952_2);

#define VkglTestCase_005953_1 "dEQP-GLES31.functional.shaders.implicit_conversi"
#define VkglTestCase_005953_2 "ons.es31.invalid.variables.uvec2_to_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005953, VkglTestCase_005953_1, VkglTestCase_005953_2);

#define VkglTestCase_005954_1 "dEQP-GLES31.functional.shaders.implicit_conversio"
#define VkglTestCase_005954_2 "ns.es31.invalid.variables.uvec2_to_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005954, VkglTestCase_005954_1, VkglTestCase_005954_2);

#define VkglTestCase_005955_1 "dEQP-GLES31.functional.shaders.implicit_conversi"
#define VkglTestCase_005955_2 "ons.es31.invalid.variables.uvec2_to_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005955, VkglTestCase_005955_1, VkglTestCase_005955_2);

#define VkglTestCase_005956_1 "dEQP-GLES31.functional.shaders.implicit_conversio"
#define VkglTestCase_005956_2 "ns.es31.invalid.variables.uvec2_to_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005956, VkglTestCase_005956_1, VkglTestCase_005956_2);

#define VkglTestCase_005957_1 "dEQP-GLES31.functional.shaders.implicit_conversi"
#define VkglTestCase_005957_2 "ons.es31.invalid.variables.uvec2_to_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005957, VkglTestCase_005957_1, VkglTestCase_005957_2);

#define VkglTestCase_005958_1 "dEQP-GLES31.functional.shaders.implicit_conversio"
#define VkglTestCase_005958_2 "ns.es31.invalid.variables.uvec2_to_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005958, VkglTestCase_005958_1, VkglTestCase_005958_2);

#define VkglTestCase_005959_1 "dEQP-GLES31.functional.shaders.implicit_conversi"
#define VkglTestCase_005959_2 "ons.es31.invalid.variables.uvec2_to_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005959, VkglTestCase_005959_1, VkglTestCase_005959_2);

#define VkglTestCase_005960_1 "dEQP-GLES31.functional.shaders.implicit_conversio"
#define VkglTestCase_005960_2 "ns.es31.invalid.variables.uvec2_to_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005960, VkglTestCase_005960_1, VkglTestCase_005960_2);

#define VkglTestCase_005961_1 "dEQP-GLES31.functional.shaders.implicit_convers"
#define VkglTestCase_005961_2 "ions.es31.invalid.variables.uvec2_to_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005961, VkglTestCase_005961_1, VkglTestCase_005961_2);

#define VkglTestCase_005962_1 "dEQP-GLES31.functional.shaders.implicit_conversi"
#define VkglTestCase_005962_2 "ons.es31.invalid.variables.uvec2_to_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005962, VkglTestCase_005962_1, VkglTestCase_005962_2);

#define VkglTestCase_005963_1 "dEQP-GLES31.functional.shaders.implicit_convers"
#define VkglTestCase_005963_2 "ions.es31.invalid.variables.uvec2_to_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005963, VkglTestCase_005963_1, VkglTestCase_005963_2);

#define VkglTestCase_005964_1 "dEQP-GLES31.functional.shaders.implicit_conversi"
#define VkglTestCase_005964_2 "ons.es31.invalid.variables.uvec2_to_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005964, VkglTestCase_005964_1, VkglTestCase_005964_2);

#define VkglTestCase_005965_1 "dEQP-GLES31.functional.shaders.implicit_convers"
#define VkglTestCase_005965_2 "ions.es31.invalid.variables.ivec3_to_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005965, VkglTestCase_005965_1, VkglTestCase_005965_2);

#define VkglTestCase_005966_1 "dEQP-GLES31.functional.shaders.implicit_conversi"
#define VkglTestCase_005966_2 "ons.es31.invalid.variables.ivec3_to_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005966, VkglTestCase_005966_1, VkglTestCase_005966_2);

#define VkglTestCase_005967_1 "dEQP-GLES31.functional.shaders.implicit_conversi"
#define VkglTestCase_005967_2 "ons.es31.invalid.variables.ivec3_to_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005967, VkglTestCase_005967_1, VkglTestCase_005967_2);

#define VkglTestCase_005968_1 "dEQP-GLES31.functional.shaders.implicit_conversio"
#define VkglTestCase_005968_2 "ns.es31.invalid.variables.ivec3_to_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005968, VkglTestCase_005968_1, VkglTestCase_005968_2);

#define VkglTestCase_005969_1 "dEQP-GLES31.functional.shaders.implicit_conversi"
#define VkglTestCase_005969_2 "ons.es31.invalid.variables.ivec3_to_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005969, VkglTestCase_005969_1, VkglTestCase_005969_2);

#define VkglTestCase_005970_1 "dEQP-GLES31.functional.shaders.implicit_conversio"
#define VkglTestCase_005970_2 "ns.es31.invalid.variables.ivec3_to_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005970, VkglTestCase_005970_1, VkglTestCase_005970_2);

#define VkglTestCase_005971_1 "dEQP-GLES31.functional.shaders.implicit_conversi"
#define VkglTestCase_005971_2 "ons.es31.invalid.variables.ivec3_to_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005971, VkglTestCase_005971_1, VkglTestCase_005971_2);

#define VkglTestCase_005972_1 "dEQP-GLES31.functional.shaders.implicit_conversio"
#define VkglTestCase_005972_2 "ns.es31.invalid.variables.ivec3_to_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005972, VkglTestCase_005972_1, VkglTestCase_005972_2);

#define VkglTestCase_005973_1 "dEQP-GLES31.functional.shaders.implicit_conversi"
#define VkglTestCase_005973_2 "ons.es31.invalid.variables.ivec3_to_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005973, VkglTestCase_005973_1, VkglTestCase_005973_2);

#define VkglTestCase_005974_1 "dEQP-GLES31.functional.shaders.implicit_conversio"
#define VkglTestCase_005974_2 "ns.es31.invalid.variables.ivec3_to_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005974, VkglTestCase_005974_1, VkglTestCase_005974_2);

#define VkglTestCase_005975_1 "dEQP-GLES31.functional.shaders.implicit_convers"
#define VkglTestCase_005975_2 "ions.es31.invalid.variables.ivec3_to_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005975, VkglTestCase_005975_1, VkglTestCase_005975_2);

#define VkglTestCase_005976_1 "dEQP-GLES31.functional.shaders.implicit_conversi"
#define VkglTestCase_005976_2 "ons.es31.invalid.variables.ivec3_to_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005976, VkglTestCase_005976_1, VkglTestCase_005976_2);

#define VkglTestCase_005977_1 "dEQP-GLES31.functional.shaders.implicit_convers"
#define VkglTestCase_005977_2 "ions.es31.invalid.variables.ivec3_to_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005977, VkglTestCase_005977_1, VkglTestCase_005977_2);

#define VkglTestCase_005978_1 "dEQP-GLES31.functional.shaders.implicit_conversi"
#define VkglTestCase_005978_2 "ons.es31.invalid.variables.ivec3_to_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005978, VkglTestCase_005978_1, VkglTestCase_005978_2);

#define VkglTestCase_005979_1 "dEQP-GLES31.functional.shaders.implicit_convers"
#define VkglTestCase_005979_2 "ions.es31.invalid.variables.uvec3_to_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005979, VkglTestCase_005979_1, VkglTestCase_005979_2);

#define VkglTestCase_005980_1 "dEQP-GLES31.functional.shaders.implicit_conversi"
#define VkglTestCase_005980_2 "ons.es31.invalid.variables.uvec3_to_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005980, VkglTestCase_005980_1, VkglTestCase_005980_2);

#define VkglTestCase_005981_1 "dEQP-GLES31.functional.shaders.implicit_conversi"
#define VkglTestCase_005981_2 "ons.es31.invalid.variables.uvec3_to_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005981, VkglTestCase_005981_1, VkglTestCase_005981_2);

#define VkglTestCase_005982_1 "dEQP-GLES31.functional.shaders.implicit_conversio"
#define VkglTestCase_005982_2 "ns.es31.invalid.variables.uvec3_to_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005982, VkglTestCase_005982_1, VkglTestCase_005982_2);

#define VkglTestCase_005983_1 "dEQP-GLES31.functional.shaders.implicit_conversi"
#define VkglTestCase_005983_2 "ons.es31.invalid.variables.uvec3_to_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005983, VkglTestCase_005983_1, VkglTestCase_005983_2);

#define VkglTestCase_005984_1 "dEQP-GLES31.functional.shaders.implicit_conversio"
#define VkglTestCase_005984_2 "ns.es31.invalid.variables.uvec3_to_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005984, VkglTestCase_005984_1, VkglTestCase_005984_2);

#define VkglTestCase_005985_1 "dEQP-GLES31.functional.shaders.implicit_conversi"
#define VkglTestCase_005985_2 "ons.es31.invalid.variables.uvec3_to_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005985, VkglTestCase_005985_1, VkglTestCase_005985_2);

#define VkglTestCase_005986_1 "dEQP-GLES31.functional.shaders.implicit_conversio"
#define VkglTestCase_005986_2 "ns.es31.invalid.variables.uvec3_to_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005986, VkglTestCase_005986_1, VkglTestCase_005986_2);

#define VkglTestCase_005987_1 "dEQP-GLES31.functional.shaders.implicit_conversi"
#define VkglTestCase_005987_2 "ons.es31.invalid.variables.uvec3_to_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005987, VkglTestCase_005987_1, VkglTestCase_005987_2);

#define VkglTestCase_005988_1 "dEQP-GLES31.functional.shaders.implicit_conversio"
#define VkglTestCase_005988_2 "ns.es31.invalid.variables.uvec3_to_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005988, VkglTestCase_005988_1, VkglTestCase_005988_2);

#define VkglTestCase_005989_1 "dEQP-GLES31.functional.shaders.implicit_conversi"
#define VkglTestCase_005989_2 "ons.es31.invalid.variables.uvec3_to_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005989, VkglTestCase_005989_1, VkglTestCase_005989_2);

#define VkglTestCase_005990_1 "dEQP-GLES31.functional.shaders.implicit_conversio"
#define VkglTestCase_005990_2 "ns.es31.invalid.variables.uvec3_to_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005990, VkglTestCase_005990_1, VkglTestCase_005990_2);

#define VkglTestCase_005991_1 "dEQP-GLES31.functional.shaders.implicit_convers"
#define VkglTestCase_005991_2 "ions.es31.invalid.variables.uvec3_to_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005991, VkglTestCase_005991_1, VkglTestCase_005991_2);

#define VkglTestCase_005992_1 "dEQP-GLES31.functional.shaders.implicit_conversi"
#define VkglTestCase_005992_2 "ons.es31.invalid.variables.uvec3_to_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005992, VkglTestCase_005992_1, VkglTestCase_005992_2);

#define VkglTestCase_005993_1 "dEQP-GLES31.functional.shaders.implicit_convers"
#define VkglTestCase_005993_2 "ions.es31.invalid.variables.uvec3_to_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005993, VkglTestCase_005993_1, VkglTestCase_005993_2);

#define VkglTestCase_005994_1 "dEQP-GLES31.functional.shaders.implicit_conversi"
#define VkglTestCase_005994_2 "ons.es31.invalid.variables.uvec3_to_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005994, VkglTestCase_005994_1, VkglTestCase_005994_2);

#define VkglTestCase_005995_1 "dEQP-GLES31.functional.shaders.implicit_convers"
#define VkglTestCase_005995_2 "ions.es31.invalid.variables.ivec4_to_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005995, VkglTestCase_005995_1, VkglTestCase_005995_2);

#define VkglTestCase_005996_1 "dEQP-GLES31.functional.shaders.implicit_conversi"
#define VkglTestCase_005996_2 "ons.es31.invalid.variables.ivec4_to_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005996, VkglTestCase_005996_1, VkglTestCase_005996_2);

#define VkglTestCase_005997_1 "dEQP-GLES31.functional.shaders.implicit_conversi"
#define VkglTestCase_005997_2 "ons.es31.invalid.variables.ivec4_to_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005997, VkglTestCase_005997_1, VkglTestCase_005997_2);

#define VkglTestCase_005998_1 "dEQP-GLES31.functional.shaders.implicit_conversio"
#define VkglTestCase_005998_2 "ns.es31.invalid.variables.ivec4_to_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005998, VkglTestCase_005998_1, VkglTestCase_005998_2);

#define VkglTestCase_005999_1 "dEQP-GLES31.functional.shaders.implicit_conversi"
#define VkglTestCase_005999_2 "ons.es31.invalid.variables.ivec4_to_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005999, VkglTestCase_005999_1, VkglTestCase_005999_2);

#define VkglTestCase_006000_1 "dEQP-GLES31.functional.shaders.implicit_conversio"
#define VkglTestCase_006000_2 "ns.es31.invalid.variables.ivec4_to_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006000, VkglTestCase_006000_1, VkglTestCase_006000_2);

#define VkglTestCase_006001_1 "dEQP-GLES31.functional.shaders.implicit_conversi"
#define VkglTestCase_006001_2 "ons.es31.invalid.variables.ivec4_to_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006001, VkglTestCase_006001_1, VkglTestCase_006001_2);

#define VkglTestCase_006002_1 "dEQP-GLES31.functional.shaders.implicit_conversio"
#define VkglTestCase_006002_2 "ns.es31.invalid.variables.ivec4_to_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006002, VkglTestCase_006002_1, VkglTestCase_006002_2);

#define VkglTestCase_006003_1 "dEQP-GLES31.functional.shaders.implicit_conversi"
#define VkglTestCase_006003_2 "ons.es31.invalid.variables.ivec4_to_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006003, VkglTestCase_006003_1, VkglTestCase_006003_2);

#define VkglTestCase_006004_1 "dEQP-GLES31.functional.shaders.implicit_conversio"
#define VkglTestCase_006004_2 "ns.es31.invalid.variables.ivec4_to_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006004, VkglTestCase_006004_1, VkglTestCase_006004_2);

#define VkglTestCase_006005_1 "dEQP-GLES31.functional.shaders.implicit_convers"
#define VkglTestCase_006005_2 "ions.es31.invalid.variables.ivec4_to_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006005, VkglTestCase_006005_1, VkglTestCase_006005_2);

#define VkglTestCase_006006_1 "dEQP-GLES31.functional.shaders.implicit_conversi"
#define VkglTestCase_006006_2 "ons.es31.invalid.variables.ivec4_to_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006006, VkglTestCase_006006_1, VkglTestCase_006006_2);

#define VkglTestCase_006007_1 "dEQP-GLES31.functional.shaders.implicit_convers"
#define VkglTestCase_006007_2 "ions.es31.invalid.variables.ivec4_to_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006007, VkglTestCase_006007_1, VkglTestCase_006007_2);

#define VkglTestCase_006008_1 "dEQP-GLES31.functional.shaders.implicit_conversi"
#define VkglTestCase_006008_2 "ons.es31.invalid.variables.ivec4_to_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006008, VkglTestCase_006008_1, VkglTestCase_006008_2);

#define VkglTestCase_006009_1 "dEQP-GLES31.functional.shaders.implicit_convers"
#define VkglTestCase_006009_2 "ions.es31.invalid.variables.uvec4_to_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006009, VkglTestCase_006009_1, VkglTestCase_006009_2);

#define VkglTestCase_006010_1 "dEQP-GLES31.functional.shaders.implicit_conversi"
#define VkglTestCase_006010_2 "ons.es31.invalid.variables.uvec4_to_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006010, VkglTestCase_006010_1, VkglTestCase_006010_2);

#define VkglTestCase_006011_1 "dEQP-GLES31.functional.shaders.implicit_conversi"
#define VkglTestCase_006011_2 "ons.es31.invalid.variables.uvec4_to_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006011, VkglTestCase_006011_1, VkglTestCase_006011_2);

#define VkglTestCase_006012_1 "dEQP-GLES31.functional.shaders.implicit_conversio"
#define VkglTestCase_006012_2 "ns.es31.invalid.variables.uvec4_to_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006012, VkglTestCase_006012_1, VkglTestCase_006012_2);

#define VkglTestCase_006013_1 "dEQP-GLES31.functional.shaders.implicit_conversi"
#define VkglTestCase_006013_2 "ons.es31.invalid.variables.uvec4_to_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006013, VkglTestCase_006013_1, VkglTestCase_006013_2);

#define VkglTestCase_006014_1 "dEQP-GLES31.functional.shaders.implicit_conversio"
#define VkglTestCase_006014_2 "ns.es31.invalid.variables.uvec4_to_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006014, VkglTestCase_006014_1, VkglTestCase_006014_2);

#define VkglTestCase_006015_1 "dEQP-GLES31.functional.shaders.implicit_conversi"
#define VkglTestCase_006015_2 "ons.es31.invalid.variables.uvec4_to_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006015, VkglTestCase_006015_1, VkglTestCase_006015_2);

#define VkglTestCase_006016_1 "dEQP-GLES31.functional.shaders.implicit_conversio"
#define VkglTestCase_006016_2 "ns.es31.invalid.variables.uvec4_to_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006016, VkglTestCase_006016_1, VkglTestCase_006016_2);

#define VkglTestCase_006017_1 "dEQP-GLES31.functional.shaders.implicit_conversi"
#define VkglTestCase_006017_2 "ons.es31.invalid.variables.uvec4_to_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006017, VkglTestCase_006017_1, VkglTestCase_006017_2);

#define VkglTestCase_006018_1 "dEQP-GLES31.functional.shaders.implicit_conversio"
#define VkglTestCase_006018_2 "ns.es31.invalid.variables.uvec4_to_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006018, VkglTestCase_006018_1, VkglTestCase_006018_2);

#define VkglTestCase_006019_1 "dEQP-GLES31.functional.shaders.implicit_conversi"
#define VkglTestCase_006019_2 "ons.es31.invalid.variables.uvec4_to_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006019, VkglTestCase_006019_1, VkglTestCase_006019_2);

#define VkglTestCase_006020_1 "dEQP-GLES31.functional.shaders.implicit_conversio"
#define VkglTestCase_006020_2 "ns.es31.invalid.variables.uvec4_to_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006020, VkglTestCase_006020_1, VkglTestCase_006020_2);

#define VkglTestCase_006021_1 "dEQP-GLES31.functional.shaders.implicit_convers"
#define VkglTestCase_006021_2 "ions.es31.invalid.variables.uvec4_to_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006021, VkglTestCase_006021_1, VkglTestCase_006021_2);

#define VkglTestCase_006022_1 "dEQP-GLES31.functional.shaders.implicit_conversi"
#define VkglTestCase_006022_2 "ons.es31.invalid.variables.uvec4_to_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006022, VkglTestCase_006022_1, VkglTestCase_006022_2);

#define VkglTestCase_006023_1 "dEQP-GLES31.functional.shaders.implicit_convers"
#define VkglTestCase_006023_2 "ions.es31.invalid.variables.uvec4_to_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006023, VkglTestCase_006023_1, VkglTestCase_006023_2);

#define VkglTestCase_006024_1 "dEQP-GLES31.functional.shaders.implicit_conversi"
#define VkglTestCase_006024_2 "ons.es31.invalid.variables.uvec4_to_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006024, VkglTestCase_006024_1, VkglTestCase_006024_2);

#define VkglTestCase_006025_1 "dEQP-GLES31.functional.shaders.implicit_convers"
#define VkglTestCase_006025_2 "ions.es31.invalid.variables.float_to_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006025, VkglTestCase_006025_1, VkglTestCase_006025_2);

#define VkglTestCase_006026_1 "dEQP-GLES31.functional.shaders.implicit_conversi"
#define VkglTestCase_006026_2 "ons.es31.invalid.variables.float_to_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006026, VkglTestCase_006026_1, VkglTestCase_006026_2);

#define VkglTestCase_006027_1 "dEQP-GLES31.functional.shaders.implicit_convers"
#define VkglTestCase_006027_2 "ions.es31.invalid.variables.float_to_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006027, VkglTestCase_006027_1, VkglTestCase_006027_2);

#define VkglTestCase_006028_1 "dEQP-GLES31.functional.shaders.implicit_conversi"
#define VkglTestCase_006028_2 "ons.es31.invalid.variables.float_to_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006028, VkglTestCase_006028_1, VkglTestCase_006028_2);

#define VkglTestCase_006029_1 "dEQP-GLES31.functional.shaders.implicit_conversi"
#define VkglTestCase_006029_2 "ons.es31.invalid.variables.float_to_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006029, VkglTestCase_006029_1, VkglTestCase_006029_2);

#define VkglTestCase_006030_1 "dEQP-GLES31.functional.shaders.implicit_conversio"
#define VkglTestCase_006030_2 "ns.es31.invalid.variables.float_to_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006030, VkglTestCase_006030_1, VkglTestCase_006030_2);

#define VkglTestCase_006031_1 "dEQP-GLES31.functional.shaders.implicit_conversi"
#define VkglTestCase_006031_2 "ons.es31.invalid.variables.float_to_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006031, VkglTestCase_006031_1, VkglTestCase_006031_2);

#define VkglTestCase_006032_1 "dEQP-GLES31.functional.shaders.implicit_conversio"
#define VkglTestCase_006032_2 "ns.es31.invalid.variables.float_to_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006032, VkglTestCase_006032_1, VkglTestCase_006032_2);

#define VkglTestCase_006033_1 "dEQP-GLES31.functional.shaders.implicit_conversi"
#define VkglTestCase_006033_2 "ons.es31.invalid.variables.float_to_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006033, VkglTestCase_006033_1, VkglTestCase_006033_2);

#define VkglTestCase_006034_1 "dEQP-GLES31.functional.shaders.implicit_conversio"
#define VkglTestCase_006034_2 "ns.es31.invalid.variables.float_to_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006034, VkglTestCase_006034_1, VkglTestCase_006034_2);

#define VkglTestCase_006035_1 "dEQP-GLES31.functional.shaders.implicit_conversi"
#define VkglTestCase_006035_2 "ons.es31.invalid.variables.float_to_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006035, VkglTestCase_006035_1, VkglTestCase_006035_2);

#define VkglTestCase_006036_1 "dEQP-GLES31.functional.shaders.implicit_conversio"
#define VkglTestCase_006036_2 "ns.es31.invalid.variables.float_to_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006036, VkglTestCase_006036_1, VkglTestCase_006036_2);

#define VkglTestCase_006037_1 "dEQP-GLES31.functional.shaders.implicit_conversi"
#define VkglTestCase_006037_2 "ons.es31.invalid.variables.float_to_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006037, VkglTestCase_006037_1, VkglTestCase_006037_2);

#define VkglTestCase_006038_1 "dEQP-GLES31.functional.shaders.implicit_conversio"
#define VkglTestCase_006038_2 "ns.es31.invalid.variables.float_to_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006038, VkglTestCase_006038_1, VkglTestCase_006038_2);

#define VkglTestCase_006039_1 "dEQP-GLES31.functional.shaders.implicit_conversi"
#define VkglTestCase_006039_2 "ons.es31.invalid.variables.float_to_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006039, VkglTestCase_006039_1, VkglTestCase_006039_2);

#define VkglTestCase_006040_1 "dEQP-GLES31.functional.shaders.implicit_conversio"
#define VkglTestCase_006040_2 "ns.es31.invalid.variables.float_to_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006040, VkglTestCase_006040_1, VkglTestCase_006040_2);

#define VkglTestCase_006041_1 "dEQP-GLES31.functional.shaders.implicit_conver"
#define VkglTestCase_006041_2 "sions.es31.invalid.variables.vec2_to_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006041, VkglTestCase_006041_1, VkglTestCase_006041_2);

#define VkglTestCase_006042_1 "dEQP-GLES31.functional.shaders.implicit_convers"
#define VkglTestCase_006042_2 "ions.es31.invalid.variables.vec2_to_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006042, VkglTestCase_006042_1, VkglTestCase_006042_2);

#define VkglTestCase_006043_1 "dEQP-GLES31.functional.shaders.implicit_convers"
#define VkglTestCase_006043_2 "ions.es31.invalid.variables.vec2_to_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006043, VkglTestCase_006043_1, VkglTestCase_006043_2);

#define VkglTestCase_006044_1 "dEQP-GLES31.functional.shaders.implicit_conversi"
#define VkglTestCase_006044_2 "ons.es31.invalid.variables.vec2_to_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006044, VkglTestCase_006044_1, VkglTestCase_006044_2);

#define VkglTestCase_006045_1 "dEQP-GLES31.functional.shaders.implicit_convers"
#define VkglTestCase_006045_2 "ions.es31.invalid.variables.vec2_to_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006045, VkglTestCase_006045_1, VkglTestCase_006045_2);

#define VkglTestCase_006046_1 "dEQP-GLES31.functional.shaders.implicit_conversi"
#define VkglTestCase_006046_2 "ons.es31.invalid.variables.vec2_to_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006046, VkglTestCase_006046_1, VkglTestCase_006046_2);

#define VkglTestCase_006047_1 "dEQP-GLES31.functional.shaders.implicit_convers"
#define VkglTestCase_006047_2 "ions.es31.invalid.variables.vec2_to_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006047, VkglTestCase_006047_1, VkglTestCase_006047_2);

#define VkglTestCase_006048_1 "dEQP-GLES31.functional.shaders.implicit_conversi"
#define VkglTestCase_006048_2 "ons.es31.invalid.variables.vec2_to_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006048, VkglTestCase_006048_1, VkglTestCase_006048_2);

#define VkglTestCase_006049_1 "dEQP-GLES31.functional.shaders.implicit_convers"
#define VkglTestCase_006049_2 "ions.es31.invalid.variables.vec2_to_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006049, VkglTestCase_006049_1, VkglTestCase_006049_2);

#define VkglTestCase_006050_1 "dEQP-GLES31.functional.shaders.implicit_conversi"
#define VkglTestCase_006050_2 "ons.es31.invalid.variables.vec2_to_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006050, VkglTestCase_006050_1, VkglTestCase_006050_2);

#define VkglTestCase_006051_1 "dEQP-GLES31.functional.shaders.implicit_convers"
#define VkglTestCase_006051_2 "ions.es31.invalid.variables.vec2_to_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006051, VkglTestCase_006051_1, VkglTestCase_006051_2);

#define VkglTestCase_006052_1 "dEQP-GLES31.functional.shaders.implicit_conversi"
#define VkglTestCase_006052_2 "ons.es31.invalid.variables.vec2_to_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006052, VkglTestCase_006052_1, VkglTestCase_006052_2);

#define VkglTestCase_006053_1 "dEQP-GLES31.functional.shaders.implicit_convers"
#define VkglTestCase_006053_2 "ions.es31.invalid.variables.vec2_to_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006053, VkglTestCase_006053_1, VkglTestCase_006053_2);

#define VkglTestCase_006054_1 "dEQP-GLES31.functional.shaders.implicit_conversi"
#define VkglTestCase_006054_2 "ons.es31.invalid.variables.vec2_to_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006054, VkglTestCase_006054_1, VkglTestCase_006054_2);

#define VkglTestCase_006055_1 "dEQP-GLES31.functional.shaders.implicit_convers"
#define VkglTestCase_006055_2 "ions.es31.invalid.variables.vec2_to_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006055, VkglTestCase_006055_1, VkglTestCase_006055_2);

#define VkglTestCase_006056_1 "dEQP-GLES31.functional.shaders.implicit_conversi"
#define VkglTestCase_006056_2 "ons.es31.invalid.variables.vec2_to_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006056, VkglTestCase_006056_1, VkglTestCase_006056_2);

#define VkglTestCase_006057_1 "dEQP-GLES31.functional.shaders.implicit_convers"
#define VkglTestCase_006057_2 "ions.es31.invalid.variables.vec2_to_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006057, VkglTestCase_006057_1, VkglTestCase_006057_2);

#define VkglTestCase_006058_1 "dEQP-GLES31.functional.shaders.implicit_conversi"
#define VkglTestCase_006058_2 "ons.es31.invalid.variables.vec2_to_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006058, VkglTestCase_006058_1, VkglTestCase_006058_2);

#define VkglTestCase_006059_1 "dEQP-GLES31.functional.shaders.implicit_convers"
#define VkglTestCase_006059_2 "ions.es31.invalid.variables.vec2_to_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006059, VkglTestCase_006059_1, VkglTestCase_006059_2);

#define VkglTestCase_006060_1 "dEQP-GLES31.functional.shaders.implicit_conversi"
#define VkglTestCase_006060_2 "ons.es31.invalid.variables.vec2_to_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006060, VkglTestCase_006060_1, VkglTestCase_006060_2);

#define VkglTestCase_006061_1 "dEQP-GLES31.functional.shaders.implicit_conver"
#define VkglTestCase_006061_2 "sions.es31.invalid.variables.vec3_to_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006061, VkglTestCase_006061_1, VkglTestCase_006061_2);

#define VkglTestCase_006062_1 "dEQP-GLES31.functional.shaders.implicit_convers"
#define VkglTestCase_006062_2 "ions.es31.invalid.variables.vec3_to_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006062, VkglTestCase_006062_1, VkglTestCase_006062_2);

#define VkglTestCase_006063_1 "dEQP-GLES31.functional.shaders.implicit_convers"
#define VkglTestCase_006063_2 "ions.es31.invalid.variables.vec3_to_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006063, VkglTestCase_006063_1, VkglTestCase_006063_2);

#define VkglTestCase_006064_1 "dEQP-GLES31.functional.shaders.implicit_conversi"
#define VkglTestCase_006064_2 "ons.es31.invalid.variables.vec3_to_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006064, VkglTestCase_006064_1, VkglTestCase_006064_2);

#define VkglTestCase_006065_1 "dEQP-GLES31.functional.shaders.implicit_convers"
#define VkglTestCase_006065_2 "ions.es31.invalid.variables.vec3_to_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006065, VkglTestCase_006065_1, VkglTestCase_006065_2);

#define VkglTestCase_006066_1 "dEQP-GLES31.functional.shaders.implicit_conversi"
#define VkglTestCase_006066_2 "ons.es31.invalid.variables.vec3_to_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006066, VkglTestCase_006066_1, VkglTestCase_006066_2);

#define VkglTestCase_006067_1 "dEQP-GLES31.functional.shaders.implicit_convers"
#define VkglTestCase_006067_2 "ions.es31.invalid.variables.vec3_to_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006067, VkglTestCase_006067_1, VkglTestCase_006067_2);

#define VkglTestCase_006068_1 "dEQP-GLES31.functional.shaders.implicit_conversi"
#define VkglTestCase_006068_2 "ons.es31.invalid.variables.vec3_to_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006068, VkglTestCase_006068_1, VkglTestCase_006068_2);

#define VkglTestCase_006069_1 "dEQP-GLES31.functional.shaders.implicit_convers"
#define VkglTestCase_006069_2 "ions.es31.invalid.variables.vec3_to_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006069, VkglTestCase_006069_1, VkglTestCase_006069_2);

#define VkglTestCase_006070_1 "dEQP-GLES31.functional.shaders.implicit_conversi"
#define VkglTestCase_006070_2 "ons.es31.invalid.variables.vec3_to_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006070, VkglTestCase_006070_1, VkglTestCase_006070_2);

#define VkglTestCase_006071_1 "dEQP-GLES31.functional.shaders.implicit_convers"
#define VkglTestCase_006071_2 "ions.es31.invalid.variables.vec3_to_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006071, VkglTestCase_006071_1, VkglTestCase_006071_2);

#define VkglTestCase_006072_1 "dEQP-GLES31.functional.shaders.implicit_conversi"
#define VkglTestCase_006072_2 "ons.es31.invalid.variables.vec3_to_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006072, VkglTestCase_006072_1, VkglTestCase_006072_2);

#define VkglTestCase_006073_1 "dEQP-GLES31.functional.shaders.implicit_convers"
#define VkglTestCase_006073_2 "ions.es31.invalid.variables.vec3_to_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006073, VkglTestCase_006073_1, VkglTestCase_006073_2);

#define VkglTestCase_006074_1 "dEQP-GLES31.functional.shaders.implicit_conversi"
#define VkglTestCase_006074_2 "ons.es31.invalid.variables.vec3_to_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006074, VkglTestCase_006074_1, VkglTestCase_006074_2);

#define VkglTestCase_006075_1 "dEQP-GLES31.functional.shaders.implicit_convers"
#define VkglTestCase_006075_2 "ions.es31.invalid.variables.vec3_to_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006075, VkglTestCase_006075_1, VkglTestCase_006075_2);

#define VkglTestCase_006076_1 "dEQP-GLES31.functional.shaders.implicit_conversi"
#define VkglTestCase_006076_2 "ons.es31.invalid.variables.vec3_to_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006076, VkglTestCase_006076_1, VkglTestCase_006076_2);

#define VkglTestCase_006077_1 "dEQP-GLES31.functional.shaders.implicit_convers"
#define VkglTestCase_006077_2 "ions.es31.invalid.variables.vec3_to_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006077, VkglTestCase_006077_1, VkglTestCase_006077_2);

#define VkglTestCase_006078_1 "dEQP-GLES31.functional.shaders.implicit_conversi"
#define VkglTestCase_006078_2 "ons.es31.invalid.variables.vec3_to_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006078, VkglTestCase_006078_1, VkglTestCase_006078_2);

#define VkglTestCase_006079_1 "dEQP-GLES31.functional.shaders.implicit_convers"
#define VkglTestCase_006079_2 "ions.es31.invalid.variables.vec3_to_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006079, VkglTestCase_006079_1, VkglTestCase_006079_2);

#define VkglTestCase_006080_1 "dEQP-GLES31.functional.shaders.implicit_conversi"
#define VkglTestCase_006080_2 "ons.es31.invalid.variables.vec3_to_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006080, VkglTestCase_006080_1, VkglTestCase_006080_2);

#define VkglTestCase_006081_1 "dEQP-GLES31.functional.shaders.implicit_conver"
#define VkglTestCase_006081_2 "sions.es31.invalid.variables.vec4_to_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006081, VkglTestCase_006081_1, VkglTestCase_006081_2);

#define VkglTestCase_006082_1 "dEQP-GLES31.functional.shaders.implicit_convers"
#define VkglTestCase_006082_2 "ions.es31.invalid.variables.vec4_to_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006082, VkglTestCase_006082_1, VkglTestCase_006082_2);

#define VkglTestCase_006083_1 "dEQP-GLES31.functional.shaders.implicit_convers"
#define VkglTestCase_006083_2 "ions.es31.invalid.variables.vec4_to_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006083, VkglTestCase_006083_1, VkglTestCase_006083_2);

#define VkglTestCase_006084_1 "dEQP-GLES31.functional.shaders.implicit_conversi"
#define VkglTestCase_006084_2 "ons.es31.invalid.variables.vec4_to_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006084, VkglTestCase_006084_1, VkglTestCase_006084_2);

#define VkglTestCase_006085_1 "dEQP-GLES31.functional.shaders.implicit_convers"
#define VkglTestCase_006085_2 "ions.es31.invalid.variables.vec4_to_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006085, VkglTestCase_006085_1, VkglTestCase_006085_2);

#define VkglTestCase_006086_1 "dEQP-GLES31.functional.shaders.implicit_conversi"
#define VkglTestCase_006086_2 "ons.es31.invalid.variables.vec4_to_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006086, VkglTestCase_006086_1, VkglTestCase_006086_2);

#define VkglTestCase_006087_1 "dEQP-GLES31.functional.shaders.implicit_convers"
#define VkglTestCase_006087_2 "ions.es31.invalid.variables.vec4_to_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006087, VkglTestCase_006087_1, VkglTestCase_006087_2);

#define VkglTestCase_006088_1 "dEQP-GLES31.functional.shaders.implicit_conversi"
#define VkglTestCase_006088_2 "ons.es31.invalid.variables.vec4_to_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006088, VkglTestCase_006088_1, VkglTestCase_006088_2);

#define VkglTestCase_006089_1 "dEQP-GLES31.functional.shaders.implicit_convers"
#define VkglTestCase_006089_2 "ions.es31.invalid.variables.vec4_to_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006089, VkglTestCase_006089_1, VkglTestCase_006089_2);

#define VkglTestCase_006090_1 "dEQP-GLES31.functional.shaders.implicit_conversi"
#define VkglTestCase_006090_2 "ons.es31.invalid.variables.vec4_to_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006090, VkglTestCase_006090_1, VkglTestCase_006090_2);

#define VkglTestCase_006091_1 "dEQP-GLES31.functional.shaders.implicit_convers"
#define VkglTestCase_006091_2 "ions.es31.invalid.variables.vec4_to_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006091, VkglTestCase_006091_1, VkglTestCase_006091_2);

#define VkglTestCase_006092_1 "dEQP-GLES31.functional.shaders.implicit_conversi"
#define VkglTestCase_006092_2 "ons.es31.invalid.variables.vec4_to_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006092, VkglTestCase_006092_1, VkglTestCase_006092_2);

#define VkglTestCase_006093_1 "dEQP-GLES31.functional.shaders.implicit_convers"
#define VkglTestCase_006093_2 "ions.es31.invalid.variables.vec4_to_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006093, VkglTestCase_006093_1, VkglTestCase_006093_2);

#define VkglTestCase_006094_1 "dEQP-GLES31.functional.shaders.implicit_conversi"
#define VkglTestCase_006094_2 "ons.es31.invalid.variables.vec4_to_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006094, VkglTestCase_006094_1, VkglTestCase_006094_2);

#define VkglTestCase_006095_1 "dEQP-GLES31.functional.shaders.implicit_convers"
#define VkglTestCase_006095_2 "ions.es31.invalid.variables.vec4_to_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006095, VkglTestCase_006095_1, VkglTestCase_006095_2);

#define VkglTestCase_006096_1 "dEQP-GLES31.functional.shaders.implicit_conversi"
#define VkglTestCase_006096_2 "ons.es31.invalid.variables.vec4_to_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006096, VkglTestCase_006096_1, VkglTestCase_006096_2);

#define VkglTestCase_006097_1 "dEQP-GLES31.functional.shaders.implicit_convers"
#define VkglTestCase_006097_2 "ions.es31.invalid.variables.vec4_to_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006097, VkglTestCase_006097_1, VkglTestCase_006097_2);

#define VkglTestCase_006098_1 "dEQP-GLES31.functional.shaders.implicit_conversi"
#define VkglTestCase_006098_2 "ons.es31.invalid.variables.vec4_to_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006098, VkglTestCase_006098_1, VkglTestCase_006098_2);

#define VkglTestCase_006099_1 "dEQP-GLES31.functional.shaders.implicit_convers"
#define VkglTestCase_006099_2 "ions.es31.invalid.variables.vec4_to_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006099, VkglTestCase_006099_1, VkglTestCase_006099_2);

#define VkglTestCase_006100_1 "dEQP-GLES31.functional.shaders.implicit_conversi"
#define VkglTestCase_006100_2 "ons.es31.invalid.variables.vec4_to_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006100, VkglTestCase_006100_1, VkglTestCase_006100_2);

#define VkglTestCase_006961_1 "dEQP-GLES31.functional.shaders.implicit_conver"
#define VkglTestCase_006961_2 "sions.es32.invalid.variables.uint_to_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006961, VkglTestCase_006961_1, VkglTestCase_006961_2);

#define VkglTestCase_006962_1 "dEQP-GLES31.functional.shaders.implicit_convers"
#define VkglTestCase_006962_2 "ions.es32.invalid.variables.uint_to_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006962, VkglTestCase_006962_1, VkglTestCase_006962_2);

#define VkglTestCase_006963_1 "dEQP-GLES31.functional.shaders.implicit_convers"
#define VkglTestCase_006963_2 "ions.es32.invalid.variables.uint_to_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006963, VkglTestCase_006963_1, VkglTestCase_006963_2);

#define VkglTestCase_006964_1 "dEQP-GLES31.functional.shaders.implicit_conversi"
#define VkglTestCase_006964_2 "ons.es32.invalid.variables.uint_to_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006964, VkglTestCase_006964_1, VkglTestCase_006964_2);

#define VkglTestCase_006965_1 "dEQP-GLES31.functional.shaders.implicit_convers"
#define VkglTestCase_006965_2 "ions.es32.invalid.variables.uint_to_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006965, VkglTestCase_006965_1, VkglTestCase_006965_2);

#define VkglTestCase_006966_1 "dEQP-GLES31.functional.shaders.implicit_conversi"
#define VkglTestCase_006966_2 "ons.es32.invalid.variables.uint_to_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006966, VkglTestCase_006966_1, VkglTestCase_006966_2);

#define VkglTestCase_006967_1 "dEQP-GLES31.functional.shaders.implicit_convers"
#define VkglTestCase_006967_2 "ions.es32.invalid.variables.uint_to_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006967, VkglTestCase_006967_1, VkglTestCase_006967_2);

#define VkglTestCase_006968_1 "dEQP-GLES31.functional.shaders.implicit_conversi"
#define VkglTestCase_006968_2 "ons.es32.invalid.variables.uint_to_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006968, VkglTestCase_006968_1, VkglTestCase_006968_2);

#define VkglTestCase_006969_1 "dEQP-GLES31.functional.shaders.implicit_convers"
#define VkglTestCase_006969_2 "ions.es32.invalid.variables.ivec2_to_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006969, VkglTestCase_006969_1, VkglTestCase_006969_2);

#define VkglTestCase_006970_1 "dEQP-GLES31.functional.shaders.implicit_conversi"
#define VkglTestCase_006970_2 "ons.es32.invalid.variables.ivec2_to_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006970, VkglTestCase_006970_1, VkglTestCase_006970_2);

#define VkglTestCase_006971_1 "dEQP-GLES31.functional.shaders.implicit_conversi"
#define VkglTestCase_006971_2 "ons.es32.invalid.variables.ivec2_to_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006971, VkglTestCase_006971_1, VkglTestCase_006971_2);

#define VkglTestCase_006972_1 "dEQP-GLES31.functional.shaders.implicit_conversio"
#define VkglTestCase_006972_2 "ns.es32.invalid.variables.ivec2_to_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006972, VkglTestCase_006972_1, VkglTestCase_006972_2);

#define VkglTestCase_006973_1 "dEQP-GLES31.functional.shaders.implicit_conversi"
#define VkglTestCase_006973_2 "ons.es32.invalid.variables.ivec2_to_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006973, VkglTestCase_006973_1, VkglTestCase_006973_2);

#define VkglTestCase_006974_1 "dEQP-GLES31.functional.shaders.implicit_conversio"
#define VkglTestCase_006974_2 "ns.es32.invalid.variables.ivec2_to_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006974, VkglTestCase_006974_1, VkglTestCase_006974_2);

#define VkglTestCase_006975_1 "dEQP-GLES31.functional.shaders.implicit_conversi"
#define VkglTestCase_006975_2 "ons.es32.invalid.variables.ivec2_to_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006975, VkglTestCase_006975_1, VkglTestCase_006975_2);

#define VkglTestCase_006976_1 "dEQP-GLES31.functional.shaders.implicit_conversio"
#define VkglTestCase_006976_2 "ns.es32.invalid.variables.ivec2_to_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006976, VkglTestCase_006976_1, VkglTestCase_006976_2);

#define VkglTestCase_006977_1 "dEQP-GLES31.functional.shaders.implicit_conversi"
#define VkglTestCase_006977_2 "ons.es32.invalid.variables.ivec2_to_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006977, VkglTestCase_006977_1, VkglTestCase_006977_2);

#define VkglTestCase_006978_1 "dEQP-GLES31.functional.shaders.implicit_conversio"
#define VkglTestCase_006978_2 "ns.es32.invalid.variables.ivec2_to_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006978, VkglTestCase_006978_1, VkglTestCase_006978_2);

#define VkglTestCase_006979_1 "dEQP-GLES31.functional.shaders.implicit_convers"
#define VkglTestCase_006979_2 "ions.es32.invalid.variables.ivec2_to_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006979, VkglTestCase_006979_1, VkglTestCase_006979_2);

#define VkglTestCase_006980_1 "dEQP-GLES31.functional.shaders.implicit_conversi"
#define VkglTestCase_006980_2 "ons.es32.invalid.variables.ivec2_to_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006980, VkglTestCase_006980_1, VkglTestCase_006980_2);

#define VkglTestCase_006981_1 "dEQP-GLES31.functional.shaders.implicit_convers"
#define VkglTestCase_006981_2 "ions.es32.invalid.variables.ivec2_to_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006981, VkglTestCase_006981_1, VkglTestCase_006981_2);

#define VkglTestCase_006982_1 "dEQP-GLES31.functional.shaders.implicit_conversi"
#define VkglTestCase_006982_2 "ons.es32.invalid.variables.ivec2_to_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006982, VkglTestCase_006982_1, VkglTestCase_006982_2);

#define VkglTestCase_006983_1 "dEQP-GLES31.functional.shaders.implicit_convers"
#define VkglTestCase_006983_2 "ions.es32.invalid.variables.uvec2_to_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006983, VkglTestCase_006983_1, VkglTestCase_006983_2);

#define VkglTestCase_006984_1 "dEQP-GLES31.functional.shaders.implicit_conversi"
#define VkglTestCase_006984_2 "ons.es32.invalid.variables.uvec2_to_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006984, VkglTestCase_006984_1, VkglTestCase_006984_2);

#define VkglTestCase_006985_1 "dEQP-GLES31.functional.shaders.implicit_conversi"
#define VkglTestCase_006985_2 "ons.es32.invalid.variables.uvec2_to_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006985, VkglTestCase_006985_1, VkglTestCase_006985_2);

#define VkglTestCase_006986_1 "dEQP-GLES31.functional.shaders.implicit_conversio"
#define VkglTestCase_006986_2 "ns.es32.invalid.variables.uvec2_to_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006986, VkglTestCase_006986_1, VkglTestCase_006986_2);

#define VkglTestCase_006987_1 "dEQP-GLES31.functional.shaders.implicit_conversi"
#define VkglTestCase_006987_2 "ons.es32.invalid.variables.uvec2_to_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006987, VkglTestCase_006987_1, VkglTestCase_006987_2);

#define VkglTestCase_006988_1 "dEQP-GLES31.functional.shaders.implicit_conversio"
#define VkglTestCase_006988_2 "ns.es32.invalid.variables.uvec2_to_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006988, VkglTestCase_006988_1, VkglTestCase_006988_2);

#define VkglTestCase_006989_1 "dEQP-GLES31.functional.shaders.implicit_conversi"
#define VkglTestCase_006989_2 "ons.es32.invalid.variables.uvec2_to_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006989, VkglTestCase_006989_1, VkglTestCase_006989_2);

#define VkglTestCase_006990_1 "dEQP-GLES31.functional.shaders.implicit_conversio"
#define VkglTestCase_006990_2 "ns.es32.invalid.variables.uvec2_to_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006990, VkglTestCase_006990_1, VkglTestCase_006990_2);

#define VkglTestCase_006991_1 "dEQP-GLES31.functional.shaders.implicit_conversi"
#define VkglTestCase_006991_2 "ons.es32.invalid.variables.uvec2_to_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006991, VkglTestCase_006991_1, VkglTestCase_006991_2);

#define VkglTestCase_006992_1 "dEQP-GLES31.functional.shaders.implicit_conversio"
#define VkglTestCase_006992_2 "ns.es32.invalid.variables.uvec2_to_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006992, VkglTestCase_006992_1, VkglTestCase_006992_2);

#define VkglTestCase_006993_1 "dEQP-GLES31.functional.shaders.implicit_conversi"
#define VkglTestCase_006993_2 "ons.es32.invalid.variables.uvec2_to_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006993, VkglTestCase_006993_1, VkglTestCase_006993_2);

#define VkglTestCase_006994_1 "dEQP-GLES31.functional.shaders.implicit_conversio"
#define VkglTestCase_006994_2 "ns.es32.invalid.variables.uvec2_to_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006994, VkglTestCase_006994_1, VkglTestCase_006994_2);

#define VkglTestCase_006995_1 "dEQP-GLES31.functional.shaders.implicit_convers"
#define VkglTestCase_006995_2 "ions.es32.invalid.variables.uvec2_to_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006995, VkglTestCase_006995_1, VkglTestCase_006995_2);

#define VkglTestCase_006996_1 "dEQP-GLES31.functional.shaders.implicit_conversi"
#define VkglTestCase_006996_2 "ons.es32.invalid.variables.uvec2_to_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006996, VkglTestCase_006996_1, VkglTestCase_006996_2);

#define VkglTestCase_006997_1 "dEQP-GLES31.functional.shaders.implicit_convers"
#define VkglTestCase_006997_2 "ions.es32.invalid.variables.uvec2_to_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006997, VkglTestCase_006997_1, VkglTestCase_006997_2);

#define VkglTestCase_006998_1 "dEQP-GLES31.functional.shaders.implicit_conversi"
#define VkglTestCase_006998_2 "ons.es32.invalid.variables.uvec2_to_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006998, VkglTestCase_006998_1, VkglTestCase_006998_2);

#define VkglTestCase_006999_1 "dEQP-GLES31.functional.shaders.implicit_convers"
#define VkglTestCase_006999_2 "ions.es32.invalid.variables.ivec3_to_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006999, VkglTestCase_006999_1, VkglTestCase_006999_2);

#define VkglTestCase_007000_1 "dEQP-GLES31.functional.shaders.implicit_conversi"
#define VkglTestCase_007000_2 "ons.es32.invalid.variables.ivec3_to_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_007000, VkglTestCase_007000_1, VkglTestCase_007000_2);

#define VkglTestCase_007001_1 "dEQP-GLES31.functional.shaders.implicit_conversi"
#define VkglTestCase_007001_2 "ons.es32.invalid.variables.ivec3_to_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_007001, VkglTestCase_007001_1, VkglTestCase_007001_2);

#define VkglTestCase_007002_1 "dEQP-GLES31.functional.shaders.implicit_conversio"
#define VkglTestCase_007002_2 "ns.es32.invalid.variables.ivec3_to_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_007002, VkglTestCase_007002_1, VkglTestCase_007002_2);

#define VkglTestCase_007003_1 "dEQP-GLES31.functional.shaders.implicit_conversi"
#define VkglTestCase_007003_2 "ons.es32.invalid.variables.ivec3_to_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_007003, VkglTestCase_007003_1, VkglTestCase_007003_2);

#define VkglTestCase_007004_1 "dEQP-GLES31.functional.shaders.implicit_conversio"
#define VkglTestCase_007004_2 "ns.es32.invalid.variables.ivec3_to_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_007004, VkglTestCase_007004_1, VkglTestCase_007004_2);

#define VkglTestCase_007005_1 "dEQP-GLES31.functional.shaders.implicit_conversi"
#define VkglTestCase_007005_2 "ons.es32.invalid.variables.ivec3_to_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_007005, VkglTestCase_007005_1, VkglTestCase_007005_2);

#define VkglTestCase_007006_1 "dEQP-GLES31.functional.shaders.implicit_conversio"
#define VkglTestCase_007006_2 "ns.es32.invalid.variables.ivec3_to_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_007006, VkglTestCase_007006_1, VkglTestCase_007006_2);

#define VkglTestCase_007007_1 "dEQP-GLES31.functional.shaders.implicit_conversi"
#define VkglTestCase_007007_2 "ons.es32.invalid.variables.ivec3_to_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_007007, VkglTestCase_007007_1, VkglTestCase_007007_2);

#define VkglTestCase_007008_1 "dEQP-GLES31.functional.shaders.implicit_conversio"
#define VkglTestCase_007008_2 "ns.es32.invalid.variables.ivec3_to_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_007008, VkglTestCase_007008_1, VkglTestCase_007008_2);

#define VkglTestCase_007009_1 "dEQP-GLES31.functional.shaders.implicit_convers"
#define VkglTestCase_007009_2 "ions.es32.invalid.variables.ivec3_to_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_007009, VkglTestCase_007009_1, VkglTestCase_007009_2);

#define VkglTestCase_007010_1 "dEQP-GLES31.functional.shaders.implicit_conversi"
#define VkglTestCase_007010_2 "ons.es32.invalid.variables.ivec3_to_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_007010, VkglTestCase_007010_1, VkglTestCase_007010_2);

#define VkglTestCase_007011_1 "dEQP-GLES31.functional.shaders.implicit_convers"
#define VkglTestCase_007011_2 "ions.es32.invalid.variables.ivec3_to_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_007011, VkglTestCase_007011_1, VkglTestCase_007011_2);

#define VkglTestCase_007012_1 "dEQP-GLES31.functional.shaders.implicit_conversi"
#define VkglTestCase_007012_2 "ons.es32.invalid.variables.ivec3_to_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_007012, VkglTestCase_007012_1, VkglTestCase_007012_2);

#define VkglTestCase_007013_1 "dEQP-GLES31.functional.shaders.implicit_convers"
#define VkglTestCase_007013_2 "ions.es32.invalid.variables.uvec3_to_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_007013, VkglTestCase_007013_1, VkglTestCase_007013_2);

#define VkglTestCase_007014_1 "dEQP-GLES31.functional.shaders.implicit_conversi"
#define VkglTestCase_007014_2 "ons.es32.invalid.variables.uvec3_to_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_007014, VkglTestCase_007014_1, VkglTestCase_007014_2);

#define VkglTestCase_007015_1 "dEQP-GLES31.functional.shaders.implicit_conversi"
#define VkglTestCase_007015_2 "ons.es32.invalid.variables.uvec3_to_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_007015, VkglTestCase_007015_1, VkglTestCase_007015_2);

#define VkglTestCase_007016_1 "dEQP-GLES31.functional.shaders.implicit_conversio"
#define VkglTestCase_007016_2 "ns.es32.invalid.variables.uvec3_to_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_007016, VkglTestCase_007016_1, VkglTestCase_007016_2);

#define VkglTestCase_007017_1 "dEQP-GLES31.functional.shaders.implicit_conversi"
#define VkglTestCase_007017_2 "ons.es32.invalid.variables.uvec3_to_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_007017, VkglTestCase_007017_1, VkglTestCase_007017_2);

#define VkglTestCase_007018_1 "dEQP-GLES31.functional.shaders.implicit_conversio"
#define VkglTestCase_007018_2 "ns.es32.invalid.variables.uvec3_to_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_007018, VkglTestCase_007018_1, VkglTestCase_007018_2);

#define VkglTestCase_007019_1 "dEQP-GLES31.functional.shaders.implicit_conversi"
#define VkglTestCase_007019_2 "ons.es32.invalid.variables.uvec3_to_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_007019, VkglTestCase_007019_1, VkglTestCase_007019_2);

#define VkglTestCase_007020_1 "dEQP-GLES31.functional.shaders.implicit_conversio"
#define VkglTestCase_007020_2 "ns.es32.invalid.variables.uvec3_to_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_007020, VkglTestCase_007020_1, VkglTestCase_007020_2);

#define VkglTestCase_007021_1 "dEQP-GLES31.functional.shaders.implicit_conversi"
#define VkglTestCase_007021_2 "ons.es32.invalid.variables.uvec3_to_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_007021, VkglTestCase_007021_1, VkglTestCase_007021_2);

#define VkglTestCase_007022_1 "dEQP-GLES31.functional.shaders.implicit_conversio"
#define VkglTestCase_007022_2 "ns.es32.invalid.variables.uvec3_to_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_007022, VkglTestCase_007022_1, VkglTestCase_007022_2);

#define VkglTestCase_007023_1 "dEQP-GLES31.functional.shaders.implicit_conversi"
#define VkglTestCase_007023_2 "ons.es32.invalid.variables.uvec3_to_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_007023, VkglTestCase_007023_1, VkglTestCase_007023_2);

#define VkglTestCase_007024_1 "dEQP-GLES31.functional.shaders.implicit_conversio"
#define VkglTestCase_007024_2 "ns.es32.invalid.variables.uvec3_to_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_007024, VkglTestCase_007024_1, VkglTestCase_007024_2);

#define VkglTestCase_007025_1 "dEQP-GLES31.functional.shaders.implicit_convers"
#define VkglTestCase_007025_2 "ions.es32.invalid.variables.uvec3_to_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_007025, VkglTestCase_007025_1, VkglTestCase_007025_2);

#define VkglTestCase_007026_1 "dEQP-GLES31.functional.shaders.implicit_conversi"
#define VkglTestCase_007026_2 "ons.es32.invalid.variables.uvec3_to_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_007026, VkglTestCase_007026_1, VkglTestCase_007026_2);

#define VkglTestCase_007027_1 "dEQP-GLES31.functional.shaders.implicit_convers"
#define VkglTestCase_007027_2 "ions.es32.invalid.variables.uvec3_to_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_007027, VkglTestCase_007027_1, VkglTestCase_007027_2);

#define VkglTestCase_007028_1 "dEQP-GLES31.functional.shaders.implicit_conversi"
#define VkglTestCase_007028_2 "ons.es32.invalid.variables.uvec3_to_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_007028, VkglTestCase_007028_1, VkglTestCase_007028_2);

#define VkglTestCase_007029_1 "dEQP-GLES31.functional.shaders.implicit_convers"
#define VkglTestCase_007029_2 "ions.es32.invalid.variables.ivec4_to_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_007029, VkglTestCase_007029_1, VkglTestCase_007029_2);

#define VkglTestCase_007030_1 "dEQP-GLES31.functional.shaders.implicit_conversi"
#define VkglTestCase_007030_2 "ons.es32.invalid.variables.ivec4_to_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_007030, VkglTestCase_007030_1, VkglTestCase_007030_2);

#define VkglTestCase_007031_1 "dEQP-GLES31.functional.shaders.implicit_conversi"
#define VkglTestCase_007031_2 "ons.es32.invalid.variables.ivec4_to_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_007031, VkglTestCase_007031_1, VkglTestCase_007031_2);

#define VkglTestCase_007032_1 "dEQP-GLES31.functional.shaders.implicit_conversio"
#define VkglTestCase_007032_2 "ns.es32.invalid.variables.ivec4_to_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_007032, VkglTestCase_007032_1, VkglTestCase_007032_2);

#define VkglTestCase_007033_1 "dEQP-GLES31.functional.shaders.implicit_conversi"
#define VkglTestCase_007033_2 "ons.es32.invalid.variables.ivec4_to_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_007033, VkglTestCase_007033_1, VkglTestCase_007033_2);

#define VkglTestCase_007034_1 "dEQP-GLES31.functional.shaders.implicit_conversio"
#define VkglTestCase_007034_2 "ns.es32.invalid.variables.ivec4_to_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_007034, VkglTestCase_007034_1, VkglTestCase_007034_2);

#define VkglTestCase_007035_1 "dEQP-GLES31.functional.shaders.implicit_conversi"
#define VkglTestCase_007035_2 "ons.es32.invalid.variables.ivec4_to_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_007035, VkglTestCase_007035_1, VkglTestCase_007035_2);

#define VkglTestCase_007036_1 "dEQP-GLES31.functional.shaders.implicit_conversio"
#define VkglTestCase_007036_2 "ns.es32.invalid.variables.ivec4_to_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_007036, VkglTestCase_007036_1, VkglTestCase_007036_2);

#define VkglTestCase_007037_1 "dEQP-GLES31.functional.shaders.implicit_conversi"
#define VkglTestCase_007037_2 "ons.es32.invalid.variables.ivec4_to_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_007037, VkglTestCase_007037_1, VkglTestCase_007037_2);

#define VkglTestCase_007038_1 "dEQP-GLES31.functional.shaders.implicit_conversio"
#define VkglTestCase_007038_2 "ns.es32.invalid.variables.ivec4_to_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_007038, VkglTestCase_007038_1, VkglTestCase_007038_2);

#define VkglTestCase_007039_1 "dEQP-GLES31.functional.shaders.implicit_convers"
#define VkglTestCase_007039_2 "ions.es32.invalid.variables.ivec4_to_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_007039, VkglTestCase_007039_1, VkglTestCase_007039_2);

#define VkglTestCase_007040_1 "dEQP-GLES31.functional.shaders.implicit_conversi"
#define VkglTestCase_007040_2 "ons.es32.invalid.variables.ivec4_to_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_007040, VkglTestCase_007040_1, VkglTestCase_007040_2);

#define VkglTestCase_007041_1 "dEQP-GLES31.functional.shaders.implicit_convers"
#define VkglTestCase_007041_2 "ions.es32.invalid.variables.ivec4_to_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_007041, VkglTestCase_007041_1, VkglTestCase_007041_2);

#define VkglTestCase_007042_1 "dEQP-GLES31.functional.shaders.implicit_conversi"
#define VkglTestCase_007042_2 "ons.es32.invalid.variables.ivec4_to_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_007042, VkglTestCase_007042_1, VkglTestCase_007042_2);

#define VkglTestCase_007043_1 "dEQP-GLES31.functional.shaders.implicit_convers"
#define VkglTestCase_007043_2 "ions.es32.invalid.variables.uvec4_to_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_007043, VkglTestCase_007043_1, VkglTestCase_007043_2);

#define VkglTestCase_007044_1 "dEQP-GLES31.functional.shaders.implicit_conversi"
#define VkglTestCase_007044_2 "ons.es32.invalid.variables.uvec4_to_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_007044, VkglTestCase_007044_1, VkglTestCase_007044_2);

#define VkglTestCase_007045_1 "dEQP-GLES31.functional.shaders.implicit_conversi"
#define VkglTestCase_007045_2 "ons.es32.invalid.variables.uvec4_to_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_007045, VkglTestCase_007045_1, VkglTestCase_007045_2);

#define VkglTestCase_007046_1 "dEQP-GLES31.functional.shaders.implicit_conversio"
#define VkglTestCase_007046_2 "ns.es32.invalid.variables.uvec4_to_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_007046, VkglTestCase_007046_1, VkglTestCase_007046_2);

#define VkglTestCase_007047_1 "dEQP-GLES31.functional.shaders.implicit_conversi"
#define VkglTestCase_007047_2 "ons.es32.invalid.variables.uvec4_to_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_007047, VkglTestCase_007047_1, VkglTestCase_007047_2);

#define VkglTestCase_007048_1 "dEQP-GLES31.functional.shaders.implicit_conversio"
#define VkglTestCase_007048_2 "ns.es32.invalid.variables.uvec4_to_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_007048, VkglTestCase_007048_1, VkglTestCase_007048_2);

#define VkglTestCase_007049_1 "dEQP-GLES31.functional.shaders.implicit_conversi"
#define VkglTestCase_007049_2 "ons.es32.invalid.variables.uvec4_to_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_007049, VkglTestCase_007049_1, VkglTestCase_007049_2);

#define VkglTestCase_007050_1 "dEQP-GLES31.functional.shaders.implicit_conversio"
#define VkglTestCase_007050_2 "ns.es32.invalid.variables.uvec4_to_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_007050, VkglTestCase_007050_1, VkglTestCase_007050_2);

#define VkglTestCase_007051_1 "dEQP-GLES31.functional.shaders.implicit_conversi"
#define VkglTestCase_007051_2 "ons.es32.invalid.variables.uvec4_to_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_007051, VkglTestCase_007051_1, VkglTestCase_007051_2);

#define VkglTestCase_007052_1 "dEQP-GLES31.functional.shaders.implicit_conversio"
#define VkglTestCase_007052_2 "ns.es32.invalid.variables.uvec4_to_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_007052, VkglTestCase_007052_1, VkglTestCase_007052_2);

#define VkglTestCase_007053_1 "dEQP-GLES31.functional.shaders.implicit_conversi"
#define VkglTestCase_007053_2 "ons.es32.invalid.variables.uvec4_to_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_007053, VkglTestCase_007053_1, VkglTestCase_007053_2);

#define VkglTestCase_007054_1 "dEQP-GLES31.functional.shaders.implicit_conversio"
#define VkglTestCase_007054_2 "ns.es32.invalid.variables.uvec4_to_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_007054, VkglTestCase_007054_1, VkglTestCase_007054_2);

#define VkglTestCase_007055_1 "dEQP-GLES31.functional.shaders.implicit_convers"
#define VkglTestCase_007055_2 "ions.es32.invalid.variables.uvec4_to_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_007055, VkglTestCase_007055_1, VkglTestCase_007055_2);

#define VkglTestCase_007056_1 "dEQP-GLES31.functional.shaders.implicit_conversi"
#define VkglTestCase_007056_2 "ons.es32.invalid.variables.uvec4_to_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_007056, VkglTestCase_007056_1, VkglTestCase_007056_2);

#define VkglTestCase_007057_1 "dEQP-GLES31.functional.shaders.implicit_convers"
#define VkglTestCase_007057_2 "ions.es32.invalid.variables.uvec4_to_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_007057, VkglTestCase_007057_1, VkglTestCase_007057_2);

#define VkglTestCase_007058_1 "dEQP-GLES31.functional.shaders.implicit_conversi"
#define VkglTestCase_007058_2 "ons.es32.invalid.variables.uvec4_to_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_007058, VkglTestCase_007058_1, VkglTestCase_007058_2);

#define VkglTestCase_007059_1 "dEQP-GLES31.functional.shaders.implicit_convers"
#define VkglTestCase_007059_2 "ions.es32.invalid.variables.float_to_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_007059, VkglTestCase_007059_1, VkglTestCase_007059_2);

#define VkglTestCase_007060_1 "dEQP-GLES31.functional.shaders.implicit_conversi"
#define VkglTestCase_007060_2 "ons.es32.invalid.variables.float_to_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_007060, VkglTestCase_007060_1, VkglTestCase_007060_2);

#define VkglTestCase_007061_1 "dEQP-GLES31.functional.shaders.implicit_convers"
#define VkglTestCase_007061_2 "ions.es32.invalid.variables.float_to_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_007061, VkglTestCase_007061_1, VkglTestCase_007061_2);

#define VkglTestCase_007062_1 "dEQP-GLES31.functional.shaders.implicit_conversi"
#define VkglTestCase_007062_2 "ons.es32.invalid.variables.float_to_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_007062, VkglTestCase_007062_1, VkglTestCase_007062_2);

#define VkglTestCase_007063_1 "dEQP-GLES31.functional.shaders.implicit_conversi"
#define VkglTestCase_007063_2 "ons.es32.invalid.variables.float_to_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_007063, VkglTestCase_007063_1, VkglTestCase_007063_2);

#define VkglTestCase_007064_1 "dEQP-GLES31.functional.shaders.implicit_conversio"
#define VkglTestCase_007064_2 "ns.es32.invalid.variables.float_to_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_007064, VkglTestCase_007064_1, VkglTestCase_007064_2);

#define VkglTestCase_007065_1 "dEQP-GLES31.functional.shaders.implicit_conversi"
#define VkglTestCase_007065_2 "ons.es32.invalid.variables.float_to_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_007065, VkglTestCase_007065_1, VkglTestCase_007065_2);

#define VkglTestCase_007066_1 "dEQP-GLES31.functional.shaders.implicit_conversio"
#define VkglTestCase_007066_2 "ns.es32.invalid.variables.float_to_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_007066, VkglTestCase_007066_1, VkglTestCase_007066_2);

#define VkglTestCase_007067_1 "dEQP-GLES31.functional.shaders.implicit_conversi"
#define VkglTestCase_007067_2 "ons.es32.invalid.variables.float_to_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_007067, VkglTestCase_007067_1, VkglTestCase_007067_2);

#define VkglTestCase_007068_1 "dEQP-GLES31.functional.shaders.implicit_conversio"
#define VkglTestCase_007068_2 "ns.es32.invalid.variables.float_to_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_007068, VkglTestCase_007068_1, VkglTestCase_007068_2);

#define VkglTestCase_007069_1 "dEQP-GLES31.functional.shaders.implicit_conversi"
#define VkglTestCase_007069_2 "ons.es32.invalid.variables.float_to_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_007069, VkglTestCase_007069_1, VkglTestCase_007069_2);

#define VkglTestCase_007070_1 "dEQP-GLES31.functional.shaders.implicit_conversio"
#define VkglTestCase_007070_2 "ns.es32.invalid.variables.float_to_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_007070, VkglTestCase_007070_1, VkglTestCase_007070_2);

#define VkglTestCase_007071_1 "dEQP-GLES31.functional.shaders.implicit_conversi"
#define VkglTestCase_007071_2 "ons.es32.invalid.variables.float_to_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_007071, VkglTestCase_007071_1, VkglTestCase_007071_2);

#define VkglTestCase_007072_1 "dEQP-GLES31.functional.shaders.implicit_conversio"
#define VkglTestCase_007072_2 "ns.es32.invalid.variables.float_to_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_007072, VkglTestCase_007072_1, VkglTestCase_007072_2);

#define VkglTestCase_007073_1 "dEQP-GLES31.functional.shaders.implicit_conversi"
#define VkglTestCase_007073_2 "ons.es32.invalid.variables.float_to_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_007073, VkglTestCase_007073_1, VkglTestCase_007073_2);

#define VkglTestCase_007074_1 "dEQP-GLES31.functional.shaders.implicit_conversio"
#define VkglTestCase_007074_2 "ns.es32.invalid.variables.float_to_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_007074, VkglTestCase_007074_1, VkglTestCase_007074_2);

#define VkglTestCase_007075_1 "dEQP-GLES31.functional.shaders.implicit_conver"
#define VkglTestCase_007075_2 "sions.es32.invalid.variables.vec2_to_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_007075, VkglTestCase_007075_1, VkglTestCase_007075_2);

#define VkglTestCase_007076_1 "dEQP-GLES31.functional.shaders.implicit_convers"
#define VkglTestCase_007076_2 "ions.es32.invalid.variables.vec2_to_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_007076, VkglTestCase_007076_1, VkglTestCase_007076_2);

#define VkglTestCase_007077_1 "dEQP-GLES31.functional.shaders.implicit_convers"
#define VkglTestCase_007077_2 "ions.es32.invalid.variables.vec2_to_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_007077, VkglTestCase_007077_1, VkglTestCase_007077_2);

#define VkglTestCase_007078_1 "dEQP-GLES31.functional.shaders.implicit_conversi"
#define VkglTestCase_007078_2 "ons.es32.invalid.variables.vec2_to_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_007078, VkglTestCase_007078_1, VkglTestCase_007078_2);

#define VkglTestCase_007079_1 "dEQP-GLES31.functional.shaders.implicit_convers"
#define VkglTestCase_007079_2 "ions.es32.invalid.variables.vec2_to_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_007079, VkglTestCase_007079_1, VkglTestCase_007079_2);

#define VkglTestCase_007080_1 "dEQP-GLES31.functional.shaders.implicit_conversi"
#define VkglTestCase_007080_2 "ons.es32.invalid.variables.vec2_to_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_007080, VkglTestCase_007080_1, VkglTestCase_007080_2);

#define VkglTestCase_007081_1 "dEQP-GLES31.functional.shaders.implicit_convers"
#define VkglTestCase_007081_2 "ions.es32.invalid.variables.vec2_to_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_007081, VkglTestCase_007081_1, VkglTestCase_007081_2);

#define VkglTestCase_007082_1 "dEQP-GLES31.functional.shaders.implicit_conversi"
#define VkglTestCase_007082_2 "ons.es32.invalid.variables.vec2_to_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_007082, VkglTestCase_007082_1, VkglTestCase_007082_2);

#define VkglTestCase_007083_1 "dEQP-GLES31.functional.shaders.implicit_convers"
#define VkglTestCase_007083_2 "ions.es32.invalid.variables.vec2_to_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_007083, VkglTestCase_007083_1, VkglTestCase_007083_2);

#define VkglTestCase_007084_1 "dEQP-GLES31.functional.shaders.implicit_conversi"
#define VkglTestCase_007084_2 "ons.es32.invalid.variables.vec2_to_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_007084, VkglTestCase_007084_1, VkglTestCase_007084_2);

#define VkglTestCase_007085_1 "dEQP-GLES31.functional.shaders.implicit_convers"
#define VkglTestCase_007085_2 "ions.es32.invalid.variables.vec2_to_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_007085, VkglTestCase_007085_1, VkglTestCase_007085_2);

#define VkglTestCase_007086_1 "dEQP-GLES31.functional.shaders.implicit_conversi"
#define VkglTestCase_007086_2 "ons.es32.invalid.variables.vec2_to_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_007086, VkglTestCase_007086_1, VkglTestCase_007086_2);

#define VkglTestCase_007087_1 "dEQP-GLES31.functional.shaders.implicit_convers"
#define VkglTestCase_007087_2 "ions.es32.invalid.variables.vec2_to_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_007087, VkglTestCase_007087_1, VkglTestCase_007087_2);

#define VkglTestCase_007088_1 "dEQP-GLES31.functional.shaders.implicit_conversi"
#define VkglTestCase_007088_2 "ons.es32.invalid.variables.vec2_to_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_007088, VkglTestCase_007088_1, VkglTestCase_007088_2);

#define VkglTestCase_007089_1 "dEQP-GLES31.functional.shaders.implicit_convers"
#define VkglTestCase_007089_2 "ions.es32.invalid.variables.vec2_to_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_007089, VkglTestCase_007089_1, VkglTestCase_007089_2);

#define VkglTestCase_007090_1 "dEQP-GLES31.functional.shaders.implicit_conversi"
#define VkglTestCase_007090_2 "ons.es32.invalid.variables.vec2_to_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_007090, VkglTestCase_007090_1, VkglTestCase_007090_2);

#define VkglTestCase_007091_1 "dEQP-GLES31.functional.shaders.implicit_convers"
#define VkglTestCase_007091_2 "ions.es32.invalid.variables.vec2_to_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_007091, VkglTestCase_007091_1, VkglTestCase_007091_2);

#define VkglTestCase_007092_1 "dEQP-GLES31.functional.shaders.implicit_conversi"
#define VkglTestCase_007092_2 "ons.es32.invalid.variables.vec2_to_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_007092, VkglTestCase_007092_1, VkglTestCase_007092_2);

#define VkglTestCase_007093_1 "dEQP-GLES31.functional.shaders.implicit_convers"
#define VkglTestCase_007093_2 "ions.es32.invalid.variables.vec2_to_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_007093, VkglTestCase_007093_1, VkglTestCase_007093_2);

#define VkglTestCase_007094_1 "dEQP-GLES31.functional.shaders.implicit_conversi"
#define VkglTestCase_007094_2 "ons.es32.invalid.variables.vec2_to_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_007094, VkglTestCase_007094_1, VkglTestCase_007094_2);

#define VkglTestCase_007095_1 "dEQP-GLES31.functional.shaders.implicit_conver"
#define VkglTestCase_007095_2 "sions.es32.invalid.variables.vec3_to_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_007095, VkglTestCase_007095_1, VkglTestCase_007095_2);

#define VkglTestCase_007096_1 "dEQP-GLES31.functional.shaders.implicit_convers"
#define VkglTestCase_007096_2 "ions.es32.invalid.variables.vec3_to_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_007096, VkglTestCase_007096_1, VkglTestCase_007096_2);

#define VkglTestCase_007097_1 "dEQP-GLES31.functional.shaders.implicit_convers"
#define VkglTestCase_007097_2 "ions.es32.invalid.variables.vec3_to_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_007097, VkglTestCase_007097_1, VkglTestCase_007097_2);

#define VkglTestCase_007098_1 "dEQP-GLES31.functional.shaders.implicit_conversi"
#define VkglTestCase_007098_2 "ons.es32.invalid.variables.vec3_to_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_007098, VkglTestCase_007098_1, VkglTestCase_007098_2);

#define VkglTestCase_007099_1 "dEQP-GLES31.functional.shaders.implicit_convers"
#define VkglTestCase_007099_2 "ions.es32.invalid.variables.vec3_to_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_007099, VkglTestCase_007099_1, VkglTestCase_007099_2);

#define VkglTestCase_007100_1 "dEQP-GLES31.functional.shaders.implicit_conversi"
#define VkglTestCase_007100_2 "ons.es32.invalid.variables.vec3_to_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_007100, VkglTestCase_007100_1, VkglTestCase_007100_2);

#define VkglTestCase_007101_1 "dEQP-GLES31.functional.shaders.implicit_convers"
#define VkglTestCase_007101_2 "ions.es32.invalid.variables.vec3_to_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_007101, VkglTestCase_007101_1, VkglTestCase_007101_2);

#define VkglTestCase_007102_1 "dEQP-GLES31.functional.shaders.implicit_conversi"
#define VkglTestCase_007102_2 "ons.es32.invalid.variables.vec3_to_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_007102, VkglTestCase_007102_1, VkglTestCase_007102_2);

#define VkglTestCase_007103_1 "dEQP-GLES31.functional.shaders.implicit_convers"
#define VkglTestCase_007103_2 "ions.es32.invalid.variables.vec3_to_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_007103, VkglTestCase_007103_1, VkglTestCase_007103_2);

#define VkglTestCase_007104_1 "dEQP-GLES31.functional.shaders.implicit_conversi"
#define VkglTestCase_007104_2 "ons.es32.invalid.variables.vec3_to_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_007104, VkglTestCase_007104_1, VkglTestCase_007104_2);

#define VkglTestCase_007105_1 "dEQP-GLES31.functional.shaders.implicit_convers"
#define VkglTestCase_007105_2 "ions.es32.invalid.variables.vec3_to_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_007105, VkglTestCase_007105_1, VkglTestCase_007105_2);

#define VkglTestCase_007106_1 "dEQP-GLES31.functional.shaders.implicit_conversi"
#define VkglTestCase_007106_2 "ons.es32.invalid.variables.vec3_to_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_007106, VkglTestCase_007106_1, VkglTestCase_007106_2);

#define VkglTestCase_007107_1 "dEQP-GLES31.functional.shaders.implicit_convers"
#define VkglTestCase_007107_2 "ions.es32.invalid.variables.vec3_to_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_007107, VkglTestCase_007107_1, VkglTestCase_007107_2);

#define VkglTestCase_007108_1 "dEQP-GLES31.functional.shaders.implicit_conversi"
#define VkglTestCase_007108_2 "ons.es32.invalid.variables.vec3_to_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_007108, VkglTestCase_007108_1, VkglTestCase_007108_2);

#define VkglTestCase_007109_1 "dEQP-GLES31.functional.shaders.implicit_convers"
#define VkglTestCase_007109_2 "ions.es32.invalid.variables.vec3_to_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_007109, VkglTestCase_007109_1, VkglTestCase_007109_2);

#define VkglTestCase_007110_1 "dEQP-GLES31.functional.shaders.implicit_conversi"
#define VkglTestCase_007110_2 "ons.es32.invalid.variables.vec3_to_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_007110, VkglTestCase_007110_1, VkglTestCase_007110_2);

#define VkglTestCase_007111_1 "dEQP-GLES31.functional.shaders.implicit_convers"
#define VkglTestCase_007111_2 "ions.es32.invalid.variables.vec3_to_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_007111, VkglTestCase_007111_1, VkglTestCase_007111_2);

#define VkglTestCase_007112_1 "dEQP-GLES31.functional.shaders.implicit_conversi"
#define VkglTestCase_007112_2 "ons.es32.invalid.variables.vec3_to_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_007112, VkglTestCase_007112_1, VkglTestCase_007112_2);

#define VkglTestCase_007113_1 "dEQP-GLES31.functional.shaders.implicit_convers"
#define VkglTestCase_007113_2 "ions.es32.invalid.variables.vec3_to_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_007113, VkglTestCase_007113_1, VkglTestCase_007113_2);

#define VkglTestCase_007114_1 "dEQP-GLES31.functional.shaders.implicit_conversi"
#define VkglTestCase_007114_2 "ons.es32.invalid.variables.vec3_to_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_007114, VkglTestCase_007114_1, VkglTestCase_007114_2);

#define VkglTestCase_007115_1 "dEQP-GLES31.functional.shaders.implicit_conver"
#define VkglTestCase_007115_2 "sions.es32.invalid.variables.vec4_to_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_007115, VkglTestCase_007115_1, VkglTestCase_007115_2);

#define VkglTestCase_007116_1 "dEQP-GLES31.functional.shaders.implicit_convers"
#define VkglTestCase_007116_2 "ions.es32.invalid.variables.vec4_to_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_007116, VkglTestCase_007116_1, VkglTestCase_007116_2);

#define VkglTestCase_007117_1 "dEQP-GLES31.functional.shaders.implicit_convers"
#define VkglTestCase_007117_2 "ions.es32.invalid.variables.vec4_to_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_007117, VkglTestCase_007117_1, VkglTestCase_007117_2);

#define VkglTestCase_007118_1 "dEQP-GLES31.functional.shaders.implicit_conversi"
#define VkglTestCase_007118_2 "ons.es32.invalid.variables.vec4_to_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_007118, VkglTestCase_007118_1, VkglTestCase_007118_2);

#define VkglTestCase_007119_1 "dEQP-GLES31.functional.shaders.implicit_convers"
#define VkglTestCase_007119_2 "ions.es32.invalid.variables.vec4_to_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_007119, VkglTestCase_007119_1, VkglTestCase_007119_2);

#define VkglTestCase_007120_1 "dEQP-GLES31.functional.shaders.implicit_conversi"
#define VkglTestCase_007120_2 "ons.es32.invalid.variables.vec4_to_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_007120, VkglTestCase_007120_1, VkglTestCase_007120_2);

#define VkglTestCase_007121_1 "dEQP-GLES31.functional.shaders.implicit_convers"
#define VkglTestCase_007121_2 "ions.es32.invalid.variables.vec4_to_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_007121, VkglTestCase_007121_1, VkglTestCase_007121_2);

#define VkglTestCase_007122_1 "dEQP-GLES31.functional.shaders.implicit_conversi"
#define VkglTestCase_007122_2 "ons.es32.invalid.variables.vec4_to_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_007122, VkglTestCase_007122_1, VkglTestCase_007122_2);

#define VkglTestCase_007123_1 "dEQP-GLES31.functional.shaders.implicit_convers"
#define VkglTestCase_007123_2 "ions.es32.invalid.variables.vec4_to_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_007123, VkglTestCase_007123_1, VkglTestCase_007123_2);

#define VkglTestCase_007124_1 "dEQP-GLES31.functional.shaders.implicit_conversi"
#define VkglTestCase_007124_2 "ons.es32.invalid.variables.vec4_to_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_007124, VkglTestCase_007124_1, VkglTestCase_007124_2);

#define VkglTestCase_007125_1 "dEQP-GLES31.functional.shaders.implicit_convers"
#define VkglTestCase_007125_2 "ions.es32.invalid.variables.vec4_to_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_007125, VkglTestCase_007125_1, VkglTestCase_007125_2);

#define VkglTestCase_007126_1 "dEQP-GLES31.functional.shaders.implicit_conversi"
#define VkglTestCase_007126_2 "ons.es32.invalid.variables.vec4_to_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_007126, VkglTestCase_007126_1, VkglTestCase_007126_2);

#define VkglTestCase_007127_1 "dEQP-GLES31.functional.shaders.implicit_convers"
#define VkglTestCase_007127_2 "ions.es32.invalid.variables.vec4_to_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_007127, VkglTestCase_007127_1, VkglTestCase_007127_2);

#define VkglTestCase_007128_1 "dEQP-GLES31.functional.shaders.implicit_conversi"
#define VkglTestCase_007128_2 "ons.es32.invalid.variables.vec4_to_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_007128, VkglTestCase_007128_1, VkglTestCase_007128_2);

#define VkglTestCase_007129_1 "dEQP-GLES31.functional.shaders.implicit_convers"
#define VkglTestCase_007129_2 "ions.es32.invalid.variables.vec4_to_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_007129, VkglTestCase_007129_1, VkglTestCase_007129_2);

#define VkglTestCase_007130_1 "dEQP-GLES31.functional.shaders.implicit_conversi"
#define VkglTestCase_007130_2 "ons.es32.invalid.variables.vec4_to_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_007130, VkglTestCase_007130_1, VkglTestCase_007130_2);

#define VkglTestCase_007131_1 "dEQP-GLES31.functional.shaders.implicit_convers"
#define VkglTestCase_007131_2 "ions.es32.invalid.variables.vec4_to_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_007131, VkglTestCase_007131_1, VkglTestCase_007131_2);

#define VkglTestCase_007132_1 "dEQP-GLES31.functional.shaders.implicit_conversi"
#define VkglTestCase_007132_2 "ons.es32.invalid.variables.vec4_to_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_007132, VkglTestCase_007132_1, VkglTestCase_007132_2);

#define VkglTestCase_007133_1 "dEQP-GLES31.functional.shaders.implicit_convers"
#define VkglTestCase_007133_2 "ions.es32.invalid.variables.vec4_to_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_007133, VkglTestCase_007133_1, VkglTestCase_007133_2);

#define VkglTestCase_007134_1 "dEQP-GLES31.functional.shaders.implicit_conversi"
#define VkglTestCase_007134_2 "ons.es32.invalid.variables.vec4_to_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_007134, VkglTestCase_007134_1, VkglTestCase_007134_2);
