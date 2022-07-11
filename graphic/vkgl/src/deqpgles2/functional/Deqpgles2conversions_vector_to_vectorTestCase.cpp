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

#define VkglTestCase_000957_1 "dEQP-GLES2.functional.shaders.conversio"
#define VkglTestCase_000957_2 "ns.vector_to_vector.vec4_to_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000957, VkglTestCase_000957_1, VkglTestCase_000957_2);

#define VkglTestCase_000958_1 "dEQP-GLES2.functional.shaders.conversion"
#define VkglTestCase_000958_2 "s.vector_to_vector.vec4_to_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000958, VkglTestCase_000958_1, VkglTestCase_000958_2);

#define VkglTestCase_000959_1 "dEQP-GLES2.functional.shaders.conversio"
#define VkglTestCase_000959_2 "ns.vector_to_vector.vec4_to_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000959, VkglTestCase_000959_1, VkglTestCase_000959_2);

#define VkglTestCase_000960_1 "dEQP-GLES2.functional.shaders.conversion"
#define VkglTestCase_000960_2 "s.vector_to_vector.vec4_to_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000960, VkglTestCase_000960_1, VkglTestCase_000960_2);

#define VkglTestCase_000961_1 "dEQP-GLES2.functional.shaders.conversio"
#define VkglTestCase_000961_2 "ns.vector_to_vector.vec4_to_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000961, VkglTestCase_000961_1, VkglTestCase_000961_2);

#define VkglTestCase_000962_1 "dEQP-GLES2.functional.shaders.conversion"
#define VkglTestCase_000962_2 "s.vector_to_vector.vec4_to_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000962, VkglTestCase_000962_1, VkglTestCase_000962_2);

#define VkglTestCase_000963_1 "dEQP-GLES2.functional.shaders.conversio"
#define VkglTestCase_000963_2 "ns.vector_to_vector.vec4_to_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000963, VkglTestCase_000963_1, VkglTestCase_000963_2);

#define VkglTestCase_000964_1 "dEQP-GLES2.functional.shaders.conversion"
#define VkglTestCase_000964_2 "s.vector_to_vector.vec4_to_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000964, VkglTestCase_000964_1, VkglTestCase_000964_2);

#define VkglTestCase_000965_1 "dEQP-GLES2.functional.shaders.conversio"
#define VkglTestCase_000965_2 "ns.vector_to_vector.vec4_to_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000965, VkglTestCase_000965_1, VkglTestCase_000965_2);

#define VkglTestCase_000966_1 "dEQP-GLES2.functional.shaders.conversion"
#define VkglTestCase_000966_2 "s.vector_to_vector.vec4_to_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000966, VkglTestCase_000966_1, VkglTestCase_000966_2);

#define VkglTestCase_000967_1 "dEQP-GLES2.functional.shaders.conversio"
#define VkglTestCase_000967_2 "ns.vector_to_vector.vec4_to_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000967, VkglTestCase_000967_1, VkglTestCase_000967_2);

#define VkglTestCase_000968_1 "dEQP-GLES2.functional.shaders.conversion"
#define VkglTestCase_000968_2 "s.vector_to_vector.vec4_to_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000968, VkglTestCase_000968_1, VkglTestCase_000968_2);

#define VkglTestCase_000969_1 "dEQP-GLES2.functional.shaders.conversio"
#define VkglTestCase_000969_2 "ns.vector_to_vector.vec4_to_bvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000969, VkglTestCase_000969_1, VkglTestCase_000969_2);

#define VkglTestCase_000970_1 "dEQP-GLES2.functional.shaders.conversion"
#define VkglTestCase_000970_2 "s.vector_to_vector.vec4_to_bvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000970, VkglTestCase_000970_1, VkglTestCase_000970_2);

#define VkglTestCase_000971_1 "dEQP-GLES2.functional.shaders.conversio"
#define VkglTestCase_000971_2 "ns.vector_to_vector.vec4_to_bvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000971, VkglTestCase_000971_1, VkglTestCase_000971_2);

#define VkglTestCase_000972_1 "dEQP-GLES2.functional.shaders.conversion"
#define VkglTestCase_000972_2 "s.vector_to_vector.vec4_to_bvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000972, VkglTestCase_000972_1, VkglTestCase_000972_2);

#define VkglTestCase_000973_1 "dEQP-GLES2.functional.shaders.conversio"
#define VkglTestCase_000973_2 "ns.vector_to_vector.vec4_to_bvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000973, VkglTestCase_000973_1, VkglTestCase_000973_2);

#define VkglTestCase_000974_1 "dEQP-GLES2.functional.shaders.conversion"
#define VkglTestCase_000974_2 "s.vector_to_vector.vec4_to_bvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000974, VkglTestCase_000974_1, VkglTestCase_000974_2);

#define VkglTestCase_000975_1 "dEQP-GLES2.functional.shaders.conversio"
#define VkglTestCase_000975_2 "ns.vector_to_vector.ivec4_to_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000975, VkglTestCase_000975_1, VkglTestCase_000975_2);

#define VkglTestCase_000976_1 "dEQP-GLES2.functional.shaders.conversion"
#define VkglTestCase_000976_2 "s.vector_to_vector.ivec4_to_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000976, VkglTestCase_000976_1, VkglTestCase_000976_2);

#define VkglTestCase_000977_1 "dEQP-GLES2.functional.shaders.conversio"
#define VkglTestCase_000977_2 "ns.vector_to_vector.ivec4_to_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000977, VkglTestCase_000977_1, VkglTestCase_000977_2);

#define VkglTestCase_000978_1 "dEQP-GLES2.functional.shaders.conversion"
#define VkglTestCase_000978_2 "s.vector_to_vector.ivec4_to_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000978, VkglTestCase_000978_1, VkglTestCase_000978_2);

#define VkglTestCase_000979_1 "dEQP-GLES2.functional.shaders.conversio"
#define VkglTestCase_000979_2 "ns.vector_to_vector.ivec4_to_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000979, VkglTestCase_000979_1, VkglTestCase_000979_2);

#define VkglTestCase_000980_1 "dEQP-GLES2.functional.shaders.conversion"
#define VkglTestCase_000980_2 "s.vector_to_vector.ivec4_to_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000980, VkglTestCase_000980_1, VkglTestCase_000980_2);

#define VkglTestCase_000981_1 "dEQP-GLES2.functional.shaders.conversion"
#define VkglTestCase_000981_2 "s.vector_to_vector.ivec4_to_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000981, VkglTestCase_000981_1, VkglTestCase_000981_2);

#define VkglTestCase_000982_1 "dEQP-GLES2.functional.shaders.conversions"
#define VkglTestCase_000982_2 ".vector_to_vector.ivec4_to_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000982, VkglTestCase_000982_1, VkglTestCase_000982_2);

#define VkglTestCase_000983_1 "dEQP-GLES2.functional.shaders.conversion"
#define VkglTestCase_000983_2 "s.vector_to_vector.ivec4_to_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000983, VkglTestCase_000983_1, VkglTestCase_000983_2);

#define VkglTestCase_000984_1 "dEQP-GLES2.functional.shaders.conversions"
#define VkglTestCase_000984_2 ".vector_to_vector.ivec4_to_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000984, VkglTestCase_000984_1, VkglTestCase_000984_2);

#define VkglTestCase_000985_1 "dEQP-GLES2.functional.shaders.conversion"
#define VkglTestCase_000985_2 "s.vector_to_vector.ivec4_to_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000985, VkglTestCase_000985_1, VkglTestCase_000985_2);

#define VkglTestCase_000986_1 "dEQP-GLES2.functional.shaders.conversions"
#define VkglTestCase_000986_2 ".vector_to_vector.ivec4_to_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000986, VkglTestCase_000986_1, VkglTestCase_000986_2);

#define VkglTestCase_000987_1 "dEQP-GLES2.functional.shaders.conversion"
#define VkglTestCase_000987_2 "s.vector_to_vector.ivec4_to_bvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000987, VkglTestCase_000987_1, VkglTestCase_000987_2);

#define VkglTestCase_000988_1 "dEQP-GLES2.functional.shaders.conversions"
#define VkglTestCase_000988_2 ".vector_to_vector.ivec4_to_bvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000988, VkglTestCase_000988_1, VkglTestCase_000988_2);

#define VkglTestCase_000989_1 "dEQP-GLES2.functional.shaders.conversion"
#define VkglTestCase_000989_2 "s.vector_to_vector.ivec4_to_bvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000989, VkglTestCase_000989_1, VkglTestCase_000989_2);

#define VkglTestCase_000990_1 "dEQP-GLES2.functional.shaders.conversions"
#define VkglTestCase_000990_2 ".vector_to_vector.ivec4_to_bvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000990, VkglTestCase_000990_1, VkglTestCase_000990_2);

#define VkglTestCase_000991_1 "dEQP-GLES2.functional.shaders.conversion"
#define VkglTestCase_000991_2 "s.vector_to_vector.ivec4_to_bvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000991, VkglTestCase_000991_1, VkglTestCase_000991_2);

#define VkglTestCase_000992_1 "dEQP-GLES2.functional.shaders.conversions"
#define VkglTestCase_000992_2 ".vector_to_vector.ivec4_to_bvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000992, VkglTestCase_000992_1, VkglTestCase_000992_2);

#define VkglTestCase_000993_1 "dEQP-GLES2.functional.shaders.conversio"
#define VkglTestCase_000993_2 "ns.vector_to_vector.bvec4_to_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000993, VkglTestCase_000993_1, VkglTestCase_000993_2);

#define VkglTestCase_000994_1 "dEQP-GLES2.functional.shaders.conversion"
#define VkglTestCase_000994_2 "s.vector_to_vector.bvec4_to_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000994, VkglTestCase_000994_1, VkglTestCase_000994_2);

#define VkglTestCase_000995_1 "dEQP-GLES2.functional.shaders.conversio"
#define VkglTestCase_000995_2 "ns.vector_to_vector.bvec4_to_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000995, VkglTestCase_000995_1, VkglTestCase_000995_2);

#define VkglTestCase_000996_1 "dEQP-GLES2.functional.shaders.conversion"
#define VkglTestCase_000996_2 "s.vector_to_vector.bvec4_to_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000996, VkglTestCase_000996_1, VkglTestCase_000996_2);

#define VkglTestCase_000997_1 "dEQP-GLES2.functional.shaders.conversio"
#define VkglTestCase_000997_2 "ns.vector_to_vector.bvec4_to_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000997, VkglTestCase_000997_1, VkglTestCase_000997_2);

#define VkglTestCase_000998_1 "dEQP-GLES2.functional.shaders.conversion"
#define VkglTestCase_000998_2 "s.vector_to_vector.bvec4_to_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000998, VkglTestCase_000998_1, VkglTestCase_000998_2);

#define VkglTestCase_000999_1 "dEQP-GLES2.functional.shaders.conversion"
#define VkglTestCase_000999_2 "s.vector_to_vector.bvec4_to_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000999, VkglTestCase_000999_1, VkglTestCase_000999_2);

#define VkglTestCase_001000_1 "dEQP-GLES2.functional.shaders.conversions"
#define VkglTestCase_001000_2 ".vector_to_vector.bvec4_to_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_001000, VkglTestCase_001000_1, VkglTestCase_001000_2);

#define VkglTestCase_001001_1 "dEQP-GLES2.functional.shaders.conversion"
#define VkglTestCase_001001_2 "s.vector_to_vector.bvec4_to_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_001001, VkglTestCase_001001_1, VkglTestCase_001001_2);

#define VkglTestCase_001002_1 "dEQP-GLES2.functional.shaders.conversions"
#define VkglTestCase_001002_2 ".vector_to_vector.bvec4_to_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_001002, VkglTestCase_001002_1, VkglTestCase_001002_2);

#define VkglTestCase_001003_1 "dEQP-GLES2.functional.shaders.conversion"
#define VkglTestCase_001003_2 "s.vector_to_vector.bvec4_to_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_001003, VkglTestCase_001003_1, VkglTestCase_001003_2);

#define VkglTestCase_001004_1 "dEQP-GLES2.functional.shaders.conversions"
#define VkglTestCase_001004_2 ".vector_to_vector.bvec4_to_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_001004, VkglTestCase_001004_1, VkglTestCase_001004_2);

#define VkglTestCase_001005_1 "dEQP-GLES2.functional.shaders.conversion"
#define VkglTestCase_001005_2 "s.vector_to_vector.bvec4_to_bvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_001005, VkglTestCase_001005_1, VkglTestCase_001005_2);

#define VkglTestCase_001006_1 "dEQP-GLES2.functional.shaders.conversions"
#define VkglTestCase_001006_2 ".vector_to_vector.bvec4_to_bvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_001006, VkglTestCase_001006_1, VkglTestCase_001006_2);

#define VkglTestCase_001007_1 "dEQP-GLES2.functional.shaders.conversion"
#define VkglTestCase_001007_2 "s.vector_to_vector.bvec4_to_bvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_001007, VkglTestCase_001007_1, VkglTestCase_001007_2);

#define VkglTestCase_001008_1 "dEQP-GLES2.functional.shaders.conversions"
#define VkglTestCase_001008_2 ".vector_to_vector.bvec4_to_bvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_001008, VkglTestCase_001008_1, VkglTestCase_001008_2);

#define VkglTestCase_001009_1 "dEQP-GLES2.functional.shaders.conversion"
#define VkglTestCase_001009_2 "s.vector_to_vector.bvec4_to_bvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_001009, VkglTestCase_001009_1, VkglTestCase_001009_2);

#define VkglTestCase_001010_1 "dEQP-GLES2.functional.shaders.conversions"
#define VkglTestCase_001010_2 ".vector_to_vector.bvec4_to_bvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_001010, VkglTestCase_001010_1, VkglTestCase_001010_2);

#define VkglTestCase_001011_1 "dEQP-GLES2.functional.shaders.conversio"
#define VkglTestCase_001011_2 "ns.vector_to_vector.vec3_to_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_001011, VkglTestCase_001011_1, VkglTestCase_001011_2);

#define VkglTestCase_001012_1 "dEQP-GLES2.functional.shaders.conversion"
#define VkglTestCase_001012_2 "s.vector_to_vector.vec3_to_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_001012, VkglTestCase_001012_1, VkglTestCase_001012_2);

#define VkglTestCase_001013_1 "dEQP-GLES2.functional.shaders.conversio"
#define VkglTestCase_001013_2 "ns.vector_to_vector.vec3_to_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_001013, VkglTestCase_001013_1, VkglTestCase_001013_2);

#define VkglTestCase_001014_1 "dEQP-GLES2.functional.shaders.conversion"
#define VkglTestCase_001014_2 "s.vector_to_vector.vec3_to_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_001014, VkglTestCase_001014_1, VkglTestCase_001014_2);

#define VkglTestCase_001015_1 "dEQP-GLES2.functional.shaders.conversio"
#define VkglTestCase_001015_2 "ns.vector_to_vector.vec3_to_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_001015, VkglTestCase_001015_1, VkglTestCase_001015_2);

#define VkglTestCase_001016_1 "dEQP-GLES2.functional.shaders.conversion"
#define VkglTestCase_001016_2 "s.vector_to_vector.vec3_to_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_001016, VkglTestCase_001016_1, VkglTestCase_001016_2);

#define VkglTestCase_001017_1 "dEQP-GLES2.functional.shaders.conversio"
#define VkglTestCase_001017_2 "ns.vector_to_vector.vec3_to_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_001017, VkglTestCase_001017_1, VkglTestCase_001017_2);

#define VkglTestCase_001018_1 "dEQP-GLES2.functional.shaders.conversion"
#define VkglTestCase_001018_2 "s.vector_to_vector.vec3_to_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_001018, VkglTestCase_001018_1, VkglTestCase_001018_2);

#define VkglTestCase_001019_1 "dEQP-GLES2.functional.shaders.conversio"
#define VkglTestCase_001019_2 "ns.vector_to_vector.vec3_to_bvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_001019, VkglTestCase_001019_1, VkglTestCase_001019_2);

#define VkglTestCase_001020_1 "dEQP-GLES2.functional.shaders.conversion"
#define VkglTestCase_001020_2 "s.vector_to_vector.vec3_to_bvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_001020, VkglTestCase_001020_1, VkglTestCase_001020_2);

#define VkglTestCase_001021_1 "dEQP-GLES2.functional.shaders.conversio"
#define VkglTestCase_001021_2 "ns.vector_to_vector.vec3_to_bvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_001021, VkglTestCase_001021_1, VkglTestCase_001021_2);

#define VkglTestCase_001022_1 "dEQP-GLES2.functional.shaders.conversion"
#define VkglTestCase_001022_2 "s.vector_to_vector.vec3_to_bvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_001022, VkglTestCase_001022_1, VkglTestCase_001022_2);

#define VkglTestCase_001023_1 "dEQP-GLES2.functional.shaders.conversio"
#define VkglTestCase_001023_2 "ns.vector_to_vector.ivec3_to_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_001023, VkglTestCase_001023_1, VkglTestCase_001023_2);

#define VkglTestCase_001024_1 "dEQP-GLES2.functional.shaders.conversion"
#define VkglTestCase_001024_2 "s.vector_to_vector.ivec3_to_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_001024, VkglTestCase_001024_1, VkglTestCase_001024_2);

#define VkglTestCase_001025_1 "dEQP-GLES2.functional.shaders.conversio"
#define VkglTestCase_001025_2 "ns.vector_to_vector.ivec3_to_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_001025, VkglTestCase_001025_1, VkglTestCase_001025_2);

#define VkglTestCase_001026_1 "dEQP-GLES2.functional.shaders.conversion"
#define VkglTestCase_001026_2 "s.vector_to_vector.ivec3_to_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_001026, VkglTestCase_001026_1, VkglTestCase_001026_2);

#define VkglTestCase_001027_1 "dEQP-GLES2.functional.shaders.conversion"
#define VkglTestCase_001027_2 "s.vector_to_vector.ivec3_to_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_001027, VkglTestCase_001027_1, VkglTestCase_001027_2);

#define VkglTestCase_001028_1 "dEQP-GLES2.functional.shaders.conversions"
#define VkglTestCase_001028_2 ".vector_to_vector.ivec3_to_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_001028, VkglTestCase_001028_1, VkglTestCase_001028_2);

#define VkglTestCase_001029_1 "dEQP-GLES2.functional.shaders.conversion"
#define VkglTestCase_001029_2 "s.vector_to_vector.ivec3_to_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_001029, VkglTestCase_001029_1, VkglTestCase_001029_2);

#define VkglTestCase_001030_1 "dEQP-GLES2.functional.shaders.conversions"
#define VkglTestCase_001030_2 ".vector_to_vector.ivec3_to_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_001030, VkglTestCase_001030_1, VkglTestCase_001030_2);

#define VkglTestCase_001031_1 "dEQP-GLES2.functional.shaders.conversion"
#define VkglTestCase_001031_2 "s.vector_to_vector.ivec3_to_bvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_001031, VkglTestCase_001031_1, VkglTestCase_001031_2);

#define VkglTestCase_001032_1 "dEQP-GLES2.functional.shaders.conversions"
#define VkglTestCase_001032_2 ".vector_to_vector.ivec3_to_bvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_001032, VkglTestCase_001032_1, VkglTestCase_001032_2);

#define VkglTestCase_001033_1 "dEQP-GLES2.functional.shaders.conversion"
#define VkglTestCase_001033_2 "s.vector_to_vector.ivec3_to_bvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_001033, VkglTestCase_001033_1, VkglTestCase_001033_2);

#define VkglTestCase_001034_1 "dEQP-GLES2.functional.shaders.conversions"
#define VkglTestCase_001034_2 ".vector_to_vector.ivec3_to_bvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_001034, VkglTestCase_001034_1, VkglTestCase_001034_2);

#define VkglTestCase_001035_1 "dEQP-GLES2.functional.shaders.conversio"
#define VkglTestCase_001035_2 "ns.vector_to_vector.bvec3_to_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_001035, VkglTestCase_001035_1, VkglTestCase_001035_2);

#define VkglTestCase_001036_1 "dEQP-GLES2.functional.shaders.conversion"
#define VkglTestCase_001036_2 "s.vector_to_vector.bvec3_to_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_001036, VkglTestCase_001036_1, VkglTestCase_001036_2);

#define VkglTestCase_001037_1 "dEQP-GLES2.functional.shaders.conversio"
#define VkglTestCase_001037_2 "ns.vector_to_vector.bvec3_to_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_001037, VkglTestCase_001037_1, VkglTestCase_001037_2);

#define VkglTestCase_001038_1 "dEQP-GLES2.functional.shaders.conversion"
#define VkglTestCase_001038_2 "s.vector_to_vector.bvec3_to_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_001038, VkglTestCase_001038_1, VkglTestCase_001038_2);

#define VkglTestCase_001039_1 "dEQP-GLES2.functional.shaders.conversion"
#define VkglTestCase_001039_2 "s.vector_to_vector.bvec3_to_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_001039, VkglTestCase_001039_1, VkglTestCase_001039_2);

#define VkglTestCase_001040_1 "dEQP-GLES2.functional.shaders.conversions"
#define VkglTestCase_001040_2 ".vector_to_vector.bvec3_to_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_001040, VkglTestCase_001040_1, VkglTestCase_001040_2);

#define VkglTestCase_001041_1 "dEQP-GLES2.functional.shaders.conversion"
#define VkglTestCase_001041_2 "s.vector_to_vector.bvec3_to_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_001041, VkglTestCase_001041_1, VkglTestCase_001041_2);

#define VkglTestCase_001042_1 "dEQP-GLES2.functional.shaders.conversions"
#define VkglTestCase_001042_2 ".vector_to_vector.bvec3_to_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_001042, VkglTestCase_001042_1, VkglTestCase_001042_2);

#define VkglTestCase_001043_1 "dEQP-GLES2.functional.shaders.conversion"
#define VkglTestCase_001043_2 "s.vector_to_vector.bvec3_to_bvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_001043, VkglTestCase_001043_1, VkglTestCase_001043_2);

#define VkglTestCase_001044_1 "dEQP-GLES2.functional.shaders.conversions"
#define VkglTestCase_001044_2 ".vector_to_vector.bvec3_to_bvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_001044, VkglTestCase_001044_1, VkglTestCase_001044_2);

#define VkglTestCase_001045_1 "dEQP-GLES2.functional.shaders.conversion"
#define VkglTestCase_001045_2 "s.vector_to_vector.bvec3_to_bvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_001045, VkglTestCase_001045_1, VkglTestCase_001045_2);

#define VkglTestCase_001046_1 "dEQP-GLES2.functional.shaders.conversions"
#define VkglTestCase_001046_2 ".vector_to_vector.bvec3_to_bvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_001046, VkglTestCase_001046_1, VkglTestCase_001046_2);

#define VkglTestCase_001047_1 "dEQP-GLES2.functional.shaders.conversio"
#define VkglTestCase_001047_2 "ns.vector_to_vector.vec2_to_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_001047, VkglTestCase_001047_1, VkglTestCase_001047_2);

#define VkglTestCase_001048_1 "dEQP-GLES2.functional.shaders.conversion"
#define VkglTestCase_001048_2 "s.vector_to_vector.vec2_to_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_001048, VkglTestCase_001048_1, VkglTestCase_001048_2);

#define VkglTestCase_001049_1 "dEQP-GLES2.functional.shaders.conversio"
#define VkglTestCase_001049_2 "ns.vector_to_vector.vec2_to_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_001049, VkglTestCase_001049_1, VkglTestCase_001049_2);

#define VkglTestCase_001050_1 "dEQP-GLES2.functional.shaders.conversion"
#define VkglTestCase_001050_2 "s.vector_to_vector.vec2_to_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_001050, VkglTestCase_001050_1, VkglTestCase_001050_2);

#define VkglTestCase_001051_1 "dEQP-GLES2.functional.shaders.conversio"
#define VkglTestCase_001051_2 "ns.vector_to_vector.vec2_to_bvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_001051, VkglTestCase_001051_1, VkglTestCase_001051_2);

#define VkglTestCase_001052_1 "dEQP-GLES2.functional.shaders.conversion"
#define VkglTestCase_001052_2 "s.vector_to_vector.vec2_to_bvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_001052, VkglTestCase_001052_1, VkglTestCase_001052_2);

#define VkglTestCase_001053_1 "dEQP-GLES2.functional.shaders.conversio"
#define VkglTestCase_001053_2 "ns.vector_to_vector.ivec2_to_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_001053, VkglTestCase_001053_1, VkglTestCase_001053_2);

#define VkglTestCase_001054_1 "dEQP-GLES2.functional.shaders.conversion"
#define VkglTestCase_001054_2 "s.vector_to_vector.ivec2_to_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_001054, VkglTestCase_001054_1, VkglTestCase_001054_2);

#define VkglTestCase_001055_1 "dEQP-GLES2.functional.shaders.conversion"
#define VkglTestCase_001055_2 "s.vector_to_vector.ivec2_to_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_001055, VkglTestCase_001055_1, VkglTestCase_001055_2);

#define VkglTestCase_001056_1 "dEQP-GLES2.functional.shaders.conversions"
#define VkglTestCase_001056_2 ".vector_to_vector.ivec2_to_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_001056, VkglTestCase_001056_1, VkglTestCase_001056_2);

#define VkglTestCase_001057_1 "dEQP-GLES2.functional.shaders.conversion"
#define VkglTestCase_001057_2 "s.vector_to_vector.ivec2_to_bvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_001057, VkglTestCase_001057_1, VkglTestCase_001057_2);

#define VkglTestCase_001058_1 "dEQP-GLES2.functional.shaders.conversions"
#define VkglTestCase_001058_2 ".vector_to_vector.ivec2_to_bvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_001058, VkglTestCase_001058_1, VkglTestCase_001058_2);

#define VkglTestCase_001059_1 "dEQP-GLES2.functional.shaders.conversio"
#define VkglTestCase_001059_2 "ns.vector_to_vector.bvec2_to_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_001059, VkglTestCase_001059_1, VkglTestCase_001059_2);

#define VkglTestCase_001060_1 "dEQP-GLES2.functional.shaders.conversion"
#define VkglTestCase_001060_2 "s.vector_to_vector.bvec2_to_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_001060, VkglTestCase_001060_1, VkglTestCase_001060_2);

#define VkglTestCase_001061_1 "dEQP-GLES2.functional.shaders.conversion"
#define VkglTestCase_001061_2 "s.vector_to_vector.bvec2_to_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_001061, VkglTestCase_001061_1, VkglTestCase_001061_2);

#define VkglTestCase_001062_1 "dEQP-GLES2.functional.shaders.conversions"
#define VkglTestCase_001062_2 ".vector_to_vector.bvec2_to_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_001062, VkglTestCase_001062_1, VkglTestCase_001062_2);

#define VkglTestCase_001063_1 "dEQP-GLES2.functional.shaders.conversion"
#define VkglTestCase_001063_2 "s.vector_to_vector.bvec2_to_bvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_001063, VkglTestCase_001063_1, VkglTestCase_001063_2);

#define VkglTestCase_001064_1 "dEQP-GLES2.functional.shaders.conversions"
#define VkglTestCase_001064_2 ".vector_to_vector.bvec2_to_bvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_001064, VkglTestCase_001064_1, VkglTestCase_001064_2);
