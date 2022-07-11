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

#define VkglTestCase_017978_1 "dEQP-GLES31.functional.unifor"
#define VkglTestCase_017978_2 "m_location.array.float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017978, VkglTestCase_017978_1, VkglTestCase_017978_2);

#define VkglTestCase_017979_1 "dEQP-GLES31.functional.uniform"
#define VkglTestCase_017979_2 "_location.array.float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017979, VkglTestCase_017979_1, VkglTestCase_017979_2);

#define VkglTestCase_017980_1 "dEQP-GLES31.functional.unifo"
#define VkglTestCase_017980_2 "rm_location.array.vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017980, VkglTestCase_017980_1, VkglTestCase_017980_2);

#define VkglTestCase_017981_1 "dEQP-GLES31.functional.unifor"
#define VkglTestCase_017981_2 "m_location.array.vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017981, VkglTestCase_017981_1, VkglTestCase_017981_2);

#define VkglTestCase_017982_1 "dEQP-GLES31.functional.unifo"
#define VkglTestCase_017982_2 "rm_location.array.vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017982, VkglTestCase_017982_1, VkglTestCase_017982_2);

#define VkglTestCase_017983_1 "dEQP-GLES31.functional.unifor"
#define VkglTestCase_017983_2 "m_location.array.vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017983, VkglTestCase_017983_1, VkglTestCase_017983_2);

#define VkglTestCase_017984_1 "dEQP-GLES31.functional.unifo"
#define VkglTestCase_017984_2 "rm_location.array.vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017984, VkglTestCase_017984_1, VkglTestCase_017984_2);

#define VkglTestCase_017985_1 "dEQP-GLES31.functional.unifor"
#define VkglTestCase_017985_2 "m_location.array.vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017985, VkglTestCase_017985_1, VkglTestCase_017985_2);

#define VkglTestCase_017986_1 "dEQP-GLES31.functional.unifo"
#define VkglTestCase_017986_2 "rm_location.array.int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017986, VkglTestCase_017986_1, VkglTestCase_017986_2);

#define VkglTestCase_017987_1 "dEQP-GLES31.functional.unifor"
#define VkglTestCase_017987_2 "m_location.array.int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017987, VkglTestCase_017987_1, VkglTestCase_017987_2);

#define VkglTestCase_017988_1 "dEQP-GLES31.functional.unifor"
#define VkglTestCase_017988_2 "m_location.array.ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017988, VkglTestCase_017988_1, VkglTestCase_017988_2);

#define VkglTestCase_017989_1 "dEQP-GLES31.functional.uniform"
#define VkglTestCase_017989_2 "_location.array.ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017989, VkglTestCase_017989_1, VkglTestCase_017989_2);

#define VkglTestCase_017990_1 "dEQP-GLES31.functional.unifor"
#define VkglTestCase_017990_2 "m_location.array.ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017990, VkglTestCase_017990_1, VkglTestCase_017990_2);

#define VkglTestCase_017991_1 "dEQP-GLES31.functional.uniform"
#define VkglTestCase_017991_2 "_location.array.ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017991, VkglTestCase_017991_1, VkglTestCase_017991_2);

#define VkglTestCase_017992_1 "dEQP-GLES31.functional.unifor"
#define VkglTestCase_017992_2 "m_location.array.ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017992, VkglTestCase_017992_1, VkglTestCase_017992_2);

#define VkglTestCase_017993_1 "dEQP-GLES31.functional.uniform"
#define VkglTestCase_017993_2 "_location.array.ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017993, VkglTestCase_017993_1, VkglTestCase_017993_2);

#define VkglTestCase_017994_1 "dEQP-GLES31.functional.unifo"
#define VkglTestCase_017994_2 "rm_location.array.uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017994, VkglTestCase_017994_1, VkglTestCase_017994_2);

#define VkglTestCase_017995_1 "dEQP-GLES31.functional.unifor"
#define VkglTestCase_017995_2 "m_location.array.uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017995, VkglTestCase_017995_1, VkglTestCase_017995_2);

#define VkglTestCase_017996_1 "dEQP-GLES31.functional.unifor"
#define VkglTestCase_017996_2 "m_location.array.uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017996, VkglTestCase_017996_1, VkglTestCase_017996_2);

#define VkglTestCase_017997_1 "dEQP-GLES31.functional.uniform"
#define VkglTestCase_017997_2 "_location.array.uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017997, VkglTestCase_017997_1, VkglTestCase_017997_2);

#define VkglTestCase_017998_1 "dEQP-GLES31.functional.unifor"
#define VkglTestCase_017998_2 "m_location.array.uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017998, VkglTestCase_017998_1, VkglTestCase_017998_2);

#define VkglTestCase_017999_1 "dEQP-GLES31.functional.uniform"
#define VkglTestCase_017999_2 "_location.array.uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017999, VkglTestCase_017999_1, VkglTestCase_017999_2);

#define VkglTestCase_018000_1 "dEQP-GLES31.functional.unifor"
#define VkglTestCase_018000_2 "m_location.array.uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_018000, VkglTestCase_018000_1, VkglTestCase_018000_2);

#define VkglTestCase_018001_1 "dEQP-GLES31.functional.uniform"
#define VkglTestCase_018001_2 "_location.array.uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_018001, VkglTestCase_018001_1, VkglTestCase_018001_2);

#define VkglTestCase_018002_1 "dEQP-GLES31.functional.unifo"
#define VkglTestCase_018002_2 "rm_location.array.bool_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_018002, VkglTestCase_018002_1, VkglTestCase_018002_2);

#define VkglTestCase_018003_1 "dEQP-GLES31.functional.unifor"
#define VkglTestCase_018003_2 "m_location.array.bool_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_018003, VkglTestCase_018003_1, VkglTestCase_018003_2);

#define VkglTestCase_018004_1 "dEQP-GLES31.functional.unifor"
#define VkglTestCase_018004_2 "m_location.array.bvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_018004, VkglTestCase_018004_1, VkglTestCase_018004_2);

#define VkglTestCase_018005_1 "dEQP-GLES31.functional.uniform"
#define VkglTestCase_018005_2 "_location.array.bvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_018005, VkglTestCase_018005_1, VkglTestCase_018005_2);

#define VkglTestCase_018006_1 "dEQP-GLES31.functional.unifor"
#define VkglTestCase_018006_2 "m_location.array.bvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_018006, VkglTestCase_018006_1, VkglTestCase_018006_2);

#define VkglTestCase_018007_1 "dEQP-GLES31.functional.uniform"
#define VkglTestCase_018007_2 "_location.array.bvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_018007, VkglTestCase_018007_1, VkglTestCase_018007_2);

#define VkglTestCase_018008_1 "dEQP-GLES31.functional.unifor"
#define VkglTestCase_018008_2 "m_location.array.bvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_018008, VkglTestCase_018008_1, VkglTestCase_018008_2);

#define VkglTestCase_018009_1 "dEQP-GLES31.functional.uniform"
#define VkglTestCase_018009_2 "_location.array.bvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_018009, VkglTestCase_018009_1, VkglTestCase_018009_2);

#define VkglTestCase_018010_1 "dEQP-GLES31.functional.unifo"
#define VkglTestCase_018010_2 "rm_location.array.mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_018010, VkglTestCase_018010_1, VkglTestCase_018010_2);

#define VkglTestCase_018011_1 "dEQP-GLES31.functional.unifor"
#define VkglTestCase_018011_2 "m_location.array.mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_018011, VkglTestCase_018011_1, VkglTestCase_018011_2);

#define VkglTestCase_018012_1 "dEQP-GLES31.functional.unifor"
#define VkglTestCase_018012_2 "m_location.array.mat2x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_018012, VkglTestCase_018012_1, VkglTestCase_018012_2);

#define VkglTestCase_018013_1 "dEQP-GLES31.functional.uniform"
#define VkglTestCase_018013_2 "_location.array.mat2x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_018013, VkglTestCase_018013_1, VkglTestCase_018013_2);

#define VkglTestCase_018014_1 "dEQP-GLES31.functional.unifor"
#define VkglTestCase_018014_2 "m_location.array.mat2x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_018014, VkglTestCase_018014_1, VkglTestCase_018014_2);

#define VkglTestCase_018015_1 "dEQP-GLES31.functional.uniform"
#define VkglTestCase_018015_2 "_location.array.mat2x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_018015, VkglTestCase_018015_1, VkglTestCase_018015_2);

#define VkglTestCase_018016_1 "dEQP-GLES31.functional.unifor"
#define VkglTestCase_018016_2 "m_location.array.mat3x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_018016, VkglTestCase_018016_1, VkglTestCase_018016_2);

#define VkglTestCase_018017_1 "dEQP-GLES31.functional.uniform"
#define VkglTestCase_018017_2 "_location.array.mat3x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_018017, VkglTestCase_018017_1, VkglTestCase_018017_2);

#define VkglTestCase_018018_1 "dEQP-GLES31.functional.unifo"
#define VkglTestCase_018018_2 "rm_location.array.mat3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_018018, VkglTestCase_018018_1, VkglTestCase_018018_2);

#define VkglTestCase_018019_1 "dEQP-GLES31.functional.unifor"
#define VkglTestCase_018019_2 "m_location.array.mat3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_018019, VkglTestCase_018019_1, VkglTestCase_018019_2);

#define VkglTestCase_018020_1 "dEQP-GLES31.functional.unifor"
#define VkglTestCase_018020_2 "m_location.array.mat3x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_018020, VkglTestCase_018020_1, VkglTestCase_018020_2);

#define VkglTestCase_018021_1 "dEQP-GLES31.functional.uniform"
#define VkglTestCase_018021_2 "_location.array.mat3x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_018021, VkglTestCase_018021_1, VkglTestCase_018021_2);

#define VkglTestCase_018022_1 "dEQP-GLES31.functional.unifor"
#define VkglTestCase_018022_2 "m_location.array.mat4x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_018022, VkglTestCase_018022_1, VkglTestCase_018022_2);

#define VkglTestCase_018023_1 "dEQP-GLES31.functional.uniform"
#define VkglTestCase_018023_2 "_location.array.mat4x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_018023, VkglTestCase_018023_1, VkglTestCase_018023_2);

#define VkglTestCase_018024_1 "dEQP-GLES31.functional.unifor"
#define VkglTestCase_018024_2 "m_location.array.mat4x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_018024, VkglTestCase_018024_1, VkglTestCase_018024_2);

#define VkglTestCase_018025_1 "dEQP-GLES31.functional.uniform"
#define VkglTestCase_018025_2 "_location.array.mat4x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_018025, VkglTestCase_018025_1, VkglTestCase_018025_2);

#define VkglTestCase_018026_1 "dEQP-GLES31.functional.unifo"
#define VkglTestCase_018026_2 "rm_location.array.mat4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_018026, VkglTestCase_018026_1, VkglTestCase_018026_2);

#define VkglTestCase_018027_1 "dEQP-GLES31.functional.unifor"
#define VkglTestCase_018027_2 "m_location.array.mat4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_018027, VkglTestCase_018027_1, VkglTestCase_018027_2);

#define VkglTestCase_018028_1 "dEQP-GLES31.functional.uniform_"
#define VkglTestCase_018028_2 "location.array.sampler2D_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_018028, VkglTestCase_018028_1, VkglTestCase_018028_2);

#define VkglTestCase_018029_1 "dEQP-GLES31.functional.uniform_l"
#define VkglTestCase_018029_2 "ocation.array.sampler2D_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_018029, VkglTestCase_018029_1, VkglTestCase_018029_2);

#define VkglTestCase_018030_1 "dEQP-GLES31.functional.uniform_"
#define VkglTestCase_018030_2 "location.array.isampler2D_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_018030, VkglTestCase_018030_1, VkglTestCase_018030_2);

#define VkglTestCase_018031_1 "dEQP-GLES31.functional.uniform_l"
#define VkglTestCase_018031_2 "ocation.array.isampler2D_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_018031, VkglTestCase_018031_1, VkglTestCase_018031_2);

#define VkglTestCase_018032_1 "dEQP-GLES31.functional.uniform_"
#define VkglTestCase_018032_2 "location.array.usampler2D_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_018032, VkglTestCase_018032_1, VkglTestCase_018032_2);

#define VkglTestCase_018033_1 "dEQP-GLES31.functional.uniform_l"
#define VkglTestCase_018033_2 "ocation.array.usampler2D_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_018033, VkglTestCase_018033_1, VkglTestCase_018033_2);
