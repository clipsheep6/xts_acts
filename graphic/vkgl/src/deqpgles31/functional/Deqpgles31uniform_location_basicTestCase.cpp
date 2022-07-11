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
#include "../ActsDeqpgles310018TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_017922_1 "dEQP-GLES31.functional.unifor"
#define VkglTestCase_017922_2 "m_location.basic.float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017922, VkglTestCase_017922_1, VkglTestCase_017922_2);

#define VkglTestCase_017923_1 "dEQP-GLES31.functional.uniform"
#define VkglTestCase_017923_2 "_location.basic.float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017923, VkglTestCase_017923_1, VkglTestCase_017923_2);

#define VkglTestCase_017924_1 "dEQP-GLES31.functional.unifo"
#define VkglTestCase_017924_2 "rm_location.basic.vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017924, VkglTestCase_017924_1, VkglTestCase_017924_2);

#define VkglTestCase_017925_1 "dEQP-GLES31.functional.unifor"
#define VkglTestCase_017925_2 "m_location.basic.vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017925, VkglTestCase_017925_1, VkglTestCase_017925_2);

#define VkglTestCase_017926_1 "dEQP-GLES31.functional.unifo"
#define VkglTestCase_017926_2 "rm_location.basic.vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017926, VkglTestCase_017926_1, VkglTestCase_017926_2);

#define VkglTestCase_017927_1 "dEQP-GLES31.functional.unifor"
#define VkglTestCase_017927_2 "m_location.basic.vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017927, VkglTestCase_017927_1, VkglTestCase_017927_2);

#define VkglTestCase_017928_1 "dEQP-GLES31.functional.unifo"
#define VkglTestCase_017928_2 "rm_location.basic.vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017928, VkglTestCase_017928_1, VkglTestCase_017928_2);

#define VkglTestCase_017929_1 "dEQP-GLES31.functional.unifor"
#define VkglTestCase_017929_2 "m_location.basic.vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017929, VkglTestCase_017929_1, VkglTestCase_017929_2);

#define VkglTestCase_017930_1 "dEQP-GLES31.functional.unifo"
#define VkglTestCase_017930_2 "rm_location.basic.int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017930, VkglTestCase_017930_1, VkglTestCase_017930_2);

#define VkglTestCase_017931_1 "dEQP-GLES31.functional.unifor"
#define VkglTestCase_017931_2 "m_location.basic.int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017931, VkglTestCase_017931_1, VkglTestCase_017931_2);

#define VkglTestCase_017932_1 "dEQP-GLES31.functional.unifor"
#define VkglTestCase_017932_2 "m_location.basic.ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017932, VkglTestCase_017932_1, VkglTestCase_017932_2);

#define VkglTestCase_017933_1 "dEQP-GLES31.functional.uniform"
#define VkglTestCase_017933_2 "_location.basic.ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017933, VkglTestCase_017933_1, VkglTestCase_017933_2);

#define VkglTestCase_017934_1 "dEQP-GLES31.functional.unifor"
#define VkglTestCase_017934_2 "m_location.basic.ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017934, VkglTestCase_017934_1, VkglTestCase_017934_2);

#define VkglTestCase_017935_1 "dEQP-GLES31.functional.uniform"
#define VkglTestCase_017935_2 "_location.basic.ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017935, VkglTestCase_017935_1, VkglTestCase_017935_2);

#define VkglTestCase_017936_1 "dEQP-GLES31.functional.unifor"
#define VkglTestCase_017936_2 "m_location.basic.ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017936, VkglTestCase_017936_1, VkglTestCase_017936_2);

#define VkglTestCase_017937_1 "dEQP-GLES31.functional.uniform"
#define VkglTestCase_017937_2 "_location.basic.ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017937, VkglTestCase_017937_1, VkglTestCase_017937_2);

#define VkglTestCase_017938_1 "dEQP-GLES31.functional.unifo"
#define VkglTestCase_017938_2 "rm_location.basic.uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017938, VkglTestCase_017938_1, VkglTestCase_017938_2);

#define VkglTestCase_017939_1 "dEQP-GLES31.functional.unifor"
#define VkglTestCase_017939_2 "m_location.basic.uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017939, VkglTestCase_017939_1, VkglTestCase_017939_2);

#define VkglTestCase_017940_1 "dEQP-GLES31.functional.unifor"
#define VkglTestCase_017940_2 "m_location.basic.uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017940, VkglTestCase_017940_1, VkglTestCase_017940_2);

#define VkglTestCase_017941_1 "dEQP-GLES31.functional.uniform"
#define VkglTestCase_017941_2 "_location.basic.uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017941, VkglTestCase_017941_1, VkglTestCase_017941_2);

#define VkglTestCase_017942_1 "dEQP-GLES31.functional.unifor"
#define VkglTestCase_017942_2 "m_location.basic.uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017942, VkglTestCase_017942_1, VkglTestCase_017942_2);

#define VkglTestCase_017943_1 "dEQP-GLES31.functional.uniform"
#define VkglTestCase_017943_2 "_location.basic.uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017943, VkglTestCase_017943_1, VkglTestCase_017943_2);

#define VkglTestCase_017944_1 "dEQP-GLES31.functional.unifor"
#define VkglTestCase_017944_2 "m_location.basic.uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017944, VkglTestCase_017944_1, VkglTestCase_017944_2);

#define VkglTestCase_017945_1 "dEQP-GLES31.functional.uniform"
#define VkglTestCase_017945_2 "_location.basic.uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017945, VkglTestCase_017945_1, VkglTestCase_017945_2);

#define VkglTestCase_017946_1 "dEQP-GLES31.functional.unifo"
#define VkglTestCase_017946_2 "rm_location.basic.bool_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017946, VkglTestCase_017946_1, VkglTestCase_017946_2);

#define VkglTestCase_017947_1 "dEQP-GLES31.functional.unifor"
#define VkglTestCase_017947_2 "m_location.basic.bool_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017947, VkglTestCase_017947_1, VkglTestCase_017947_2);

#define VkglTestCase_017948_1 "dEQP-GLES31.functional.unifor"
#define VkglTestCase_017948_2 "m_location.basic.bvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017948, VkglTestCase_017948_1, VkglTestCase_017948_2);

#define VkglTestCase_017949_1 "dEQP-GLES31.functional.uniform"
#define VkglTestCase_017949_2 "_location.basic.bvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017949, VkglTestCase_017949_1, VkglTestCase_017949_2);

#define VkglTestCase_017950_1 "dEQP-GLES31.functional.unifor"
#define VkglTestCase_017950_2 "m_location.basic.bvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017950, VkglTestCase_017950_1, VkglTestCase_017950_2);

#define VkglTestCase_017951_1 "dEQP-GLES31.functional.uniform"
#define VkglTestCase_017951_2 "_location.basic.bvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017951, VkglTestCase_017951_1, VkglTestCase_017951_2);

#define VkglTestCase_017952_1 "dEQP-GLES31.functional.unifor"
#define VkglTestCase_017952_2 "m_location.basic.bvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017952, VkglTestCase_017952_1, VkglTestCase_017952_2);

#define VkglTestCase_017953_1 "dEQP-GLES31.functional.uniform"
#define VkglTestCase_017953_2 "_location.basic.bvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017953, VkglTestCase_017953_1, VkglTestCase_017953_2);

#define VkglTestCase_017954_1 "dEQP-GLES31.functional.unifo"
#define VkglTestCase_017954_2 "rm_location.basic.mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017954, VkglTestCase_017954_1, VkglTestCase_017954_2);

#define VkglTestCase_017955_1 "dEQP-GLES31.functional.unifor"
#define VkglTestCase_017955_2 "m_location.basic.mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017955, VkglTestCase_017955_1, VkglTestCase_017955_2);

#define VkglTestCase_017956_1 "dEQP-GLES31.functional.unifor"
#define VkglTestCase_017956_2 "m_location.basic.mat2x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017956, VkglTestCase_017956_1, VkglTestCase_017956_2);

#define VkglTestCase_017957_1 "dEQP-GLES31.functional.uniform"
#define VkglTestCase_017957_2 "_location.basic.mat2x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017957, VkglTestCase_017957_1, VkglTestCase_017957_2);

#define VkglTestCase_017958_1 "dEQP-GLES31.functional.unifor"
#define VkglTestCase_017958_2 "m_location.basic.mat2x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017958, VkglTestCase_017958_1, VkglTestCase_017958_2);

#define VkglTestCase_017959_1 "dEQP-GLES31.functional.uniform"
#define VkglTestCase_017959_2 "_location.basic.mat2x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017959, VkglTestCase_017959_1, VkglTestCase_017959_2);

#define VkglTestCase_017960_1 "dEQP-GLES31.functional.unifor"
#define VkglTestCase_017960_2 "m_location.basic.mat3x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017960, VkglTestCase_017960_1, VkglTestCase_017960_2);

#define VkglTestCase_017961_1 "dEQP-GLES31.functional.uniform"
#define VkglTestCase_017961_2 "_location.basic.mat3x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017961, VkglTestCase_017961_1, VkglTestCase_017961_2);

#define VkglTestCase_017962_1 "dEQP-GLES31.functional.unifo"
#define VkglTestCase_017962_2 "rm_location.basic.mat3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017962, VkglTestCase_017962_1, VkglTestCase_017962_2);

#define VkglTestCase_017963_1 "dEQP-GLES31.functional.unifor"
#define VkglTestCase_017963_2 "m_location.basic.mat3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017963, VkglTestCase_017963_1, VkglTestCase_017963_2);

#define VkglTestCase_017964_1 "dEQP-GLES31.functional.unifor"
#define VkglTestCase_017964_2 "m_location.basic.mat3x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017964, VkglTestCase_017964_1, VkglTestCase_017964_2);

#define VkglTestCase_017965_1 "dEQP-GLES31.functional.uniform"
#define VkglTestCase_017965_2 "_location.basic.mat3x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017965, VkglTestCase_017965_1, VkglTestCase_017965_2);

#define VkglTestCase_017966_1 "dEQP-GLES31.functional.unifor"
#define VkglTestCase_017966_2 "m_location.basic.mat4x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017966, VkglTestCase_017966_1, VkglTestCase_017966_2);

#define VkglTestCase_017967_1 "dEQP-GLES31.functional.uniform"
#define VkglTestCase_017967_2 "_location.basic.mat4x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017967, VkglTestCase_017967_1, VkglTestCase_017967_2);

#define VkglTestCase_017968_1 "dEQP-GLES31.functional.unifor"
#define VkglTestCase_017968_2 "m_location.basic.mat4x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017968, VkglTestCase_017968_1, VkglTestCase_017968_2);

#define VkglTestCase_017969_1 "dEQP-GLES31.functional.uniform"
#define VkglTestCase_017969_2 "_location.basic.mat4x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017969, VkglTestCase_017969_1, VkglTestCase_017969_2);

#define VkglTestCase_017970_1 "dEQP-GLES31.functional.unifo"
#define VkglTestCase_017970_2 "rm_location.basic.mat4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017970, VkglTestCase_017970_1, VkglTestCase_017970_2);

#define VkglTestCase_017971_1 "dEQP-GLES31.functional.unifor"
#define VkglTestCase_017971_2 "m_location.basic.mat4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017971, VkglTestCase_017971_1, VkglTestCase_017971_2);

#define VkglTestCase_017972_1 "dEQP-GLES31.functional.uniform_"
#define VkglTestCase_017972_2 "location.basic.sampler2D_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017972, VkglTestCase_017972_1, VkglTestCase_017972_2);

#define VkglTestCase_017973_1 "dEQP-GLES31.functional.uniform_l"
#define VkglTestCase_017973_2 "ocation.basic.sampler2D_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017973, VkglTestCase_017973_1, VkglTestCase_017973_2);

#define VkglTestCase_017974_1 "dEQP-GLES31.functional.uniform_"
#define VkglTestCase_017974_2 "location.basic.isampler2D_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017974, VkglTestCase_017974_1, VkglTestCase_017974_2);

#define VkglTestCase_017975_1 "dEQP-GLES31.functional.uniform_l"
#define VkglTestCase_017975_2 "ocation.basic.isampler2D_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017975, VkglTestCase_017975_1, VkglTestCase_017975_2);

#define VkglTestCase_017976_1 "dEQP-GLES31.functional.uniform_"
#define VkglTestCase_017976_2 "location.basic.usampler2D_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017976, VkglTestCase_017976_1, VkglTestCase_017976_2);

#define VkglTestCase_017977_1 "dEQP-GLES31.functional.uniform_l"
#define VkglTestCase_017977_2 "ocation.basic.usampler2D_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017977, VkglTestCase_017977_1, VkglTestCase_017977_2);
