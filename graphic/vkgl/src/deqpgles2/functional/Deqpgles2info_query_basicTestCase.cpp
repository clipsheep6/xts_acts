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
#include "../ActsDeqpgles20014TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_013992_1 "dEQP-GLES2.functional.uniform_a"
#define VkglTestCase_013992_2 "pi.info_query.basic.float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013992, VkglTestCase_013992_1, VkglTestCase_013992_2);

#define VkglTestCase_013993_1 "dEQP-GLES2.functional.uniform_ap"
#define VkglTestCase_013993_2 "i.info_query.basic.float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013993, VkglTestCase_013993_1, VkglTestCase_013993_2);

#define VkglTestCase_013994_1 "dEQP-GLES2.functional.uniform_"
#define VkglTestCase_013994_2 "api.info_query.basic.float_both"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013994, VkglTestCase_013994_1, VkglTestCase_013994_2);

#define VkglTestCase_013995_1 "dEQP-GLES2.functional.uniform_a"
#define VkglTestCase_013995_2 "pi.info_query.basic.vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013995, VkglTestCase_013995_1, VkglTestCase_013995_2);

#define VkglTestCase_013996_1 "dEQP-GLES2.functional.uniform_ap"
#define VkglTestCase_013996_2 "i.info_query.basic.vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013996, VkglTestCase_013996_1, VkglTestCase_013996_2);

#define VkglTestCase_013997_1 "dEQP-GLES2.functional.uniform_"
#define VkglTestCase_013997_2 "api.info_query.basic.vec2_both"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013997, VkglTestCase_013997_1, VkglTestCase_013997_2);

#define VkglTestCase_013998_1 "dEQP-GLES2.functional.uniform_a"
#define VkglTestCase_013998_2 "pi.info_query.basic.vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013998, VkglTestCase_013998_1, VkglTestCase_013998_2);

#define VkglTestCase_013999_1 "dEQP-GLES2.functional.uniform_ap"
#define VkglTestCase_013999_2 "i.info_query.basic.vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013999, VkglTestCase_013999_1, VkglTestCase_013999_2);

#define VkglTestCase_014000_1 "dEQP-GLES2.functional.uniform_"
#define VkglTestCase_014000_2 "api.info_query.basic.vec3_both"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_014000, VkglTestCase_014000_1, VkglTestCase_014000_2);

#define VkglTestCase_014001_1 "dEQP-GLES2.functional.uniform_a"
#define VkglTestCase_014001_2 "pi.info_query.basic.vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_014001, VkglTestCase_014001_1, VkglTestCase_014001_2);

#define VkglTestCase_014002_1 "dEQP-GLES2.functional.uniform_ap"
#define VkglTestCase_014002_2 "i.info_query.basic.vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_014002, VkglTestCase_014002_1, VkglTestCase_014002_2);

#define VkglTestCase_014003_1 "dEQP-GLES2.functional.uniform_"
#define VkglTestCase_014003_2 "api.info_query.basic.vec4_both"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_014003, VkglTestCase_014003_1, VkglTestCase_014003_2);

#define VkglTestCase_014004_1 "dEQP-GLES2.functional.uniform_a"
#define VkglTestCase_014004_2 "pi.info_query.basic.mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_014004, VkglTestCase_014004_1, VkglTestCase_014004_2);

#define VkglTestCase_014005_1 "dEQP-GLES2.functional.uniform_ap"
#define VkglTestCase_014005_2 "i.info_query.basic.mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_014005, VkglTestCase_014005_1, VkglTestCase_014005_2);

#define VkglTestCase_014006_1 "dEQP-GLES2.functional.uniform_"
#define VkglTestCase_014006_2 "api.info_query.basic.mat2_both"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_014006, VkglTestCase_014006_1, VkglTestCase_014006_2);

#define VkglTestCase_014007_1 "dEQP-GLES2.functional.uniform_a"
#define VkglTestCase_014007_2 "pi.info_query.basic.mat3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_014007, VkglTestCase_014007_1, VkglTestCase_014007_2);

#define VkglTestCase_014008_1 "dEQP-GLES2.functional.uniform_ap"
#define VkglTestCase_014008_2 "i.info_query.basic.mat3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_014008, VkglTestCase_014008_1, VkglTestCase_014008_2);

#define VkglTestCase_014009_1 "dEQP-GLES2.functional.uniform_"
#define VkglTestCase_014009_2 "api.info_query.basic.mat3_both"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_014009, VkglTestCase_014009_1, VkglTestCase_014009_2);

#define VkglTestCase_014010_1 "dEQP-GLES2.functional.uniform_a"
#define VkglTestCase_014010_2 "pi.info_query.basic.mat4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_014010, VkglTestCase_014010_1, VkglTestCase_014010_2);

#define VkglTestCase_014011_1 "dEQP-GLES2.functional.uniform_ap"
#define VkglTestCase_014011_2 "i.info_query.basic.mat4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_014011, VkglTestCase_014011_1, VkglTestCase_014011_2);

#define VkglTestCase_014012_1 "dEQP-GLES2.functional.uniform_"
#define VkglTestCase_014012_2 "api.info_query.basic.mat4_both"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_014012, VkglTestCase_014012_1, VkglTestCase_014012_2);

#define VkglTestCase_014013_1 "dEQP-GLES2.functional.uniform_"
#define VkglTestCase_014013_2 "api.info_query.basic.int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_014013, VkglTestCase_014013_1, VkglTestCase_014013_2);

#define VkglTestCase_014014_1 "dEQP-GLES2.functional.uniform_a"
#define VkglTestCase_014014_2 "pi.info_query.basic.int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_014014, VkglTestCase_014014_1, VkglTestCase_014014_2);

#define VkglTestCase_014015_1 "dEQP-GLES2.functional.uniform"
#define VkglTestCase_014015_2 "_api.info_query.basic.int_both"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_014015, VkglTestCase_014015_1, VkglTestCase_014015_2);

#define VkglTestCase_014016_1 "dEQP-GLES2.functional.uniform_a"
#define VkglTestCase_014016_2 "pi.info_query.basic.ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_014016, VkglTestCase_014016_1, VkglTestCase_014016_2);

#define VkglTestCase_014017_1 "dEQP-GLES2.functional.uniform_ap"
#define VkglTestCase_014017_2 "i.info_query.basic.ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_014017, VkglTestCase_014017_1, VkglTestCase_014017_2);

#define VkglTestCase_014018_1 "dEQP-GLES2.functional.uniform_"
#define VkglTestCase_014018_2 "api.info_query.basic.ivec2_both"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_014018, VkglTestCase_014018_1, VkglTestCase_014018_2);

#define VkglTestCase_014019_1 "dEQP-GLES2.functional.uniform_a"
#define VkglTestCase_014019_2 "pi.info_query.basic.ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_014019, VkglTestCase_014019_1, VkglTestCase_014019_2);

#define VkglTestCase_014020_1 "dEQP-GLES2.functional.uniform_ap"
#define VkglTestCase_014020_2 "i.info_query.basic.ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_014020, VkglTestCase_014020_1, VkglTestCase_014020_2);

#define VkglTestCase_014021_1 "dEQP-GLES2.functional.uniform_"
#define VkglTestCase_014021_2 "api.info_query.basic.ivec3_both"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_014021, VkglTestCase_014021_1, VkglTestCase_014021_2);

#define VkglTestCase_014022_1 "dEQP-GLES2.functional.uniform_a"
#define VkglTestCase_014022_2 "pi.info_query.basic.ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_014022, VkglTestCase_014022_1, VkglTestCase_014022_2);

#define VkglTestCase_014023_1 "dEQP-GLES2.functional.uniform_ap"
#define VkglTestCase_014023_2 "i.info_query.basic.ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_014023, VkglTestCase_014023_1, VkglTestCase_014023_2);

#define VkglTestCase_014024_1 "dEQP-GLES2.functional.uniform_"
#define VkglTestCase_014024_2 "api.info_query.basic.ivec4_both"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_014024, VkglTestCase_014024_1, VkglTestCase_014024_2);

#define VkglTestCase_014025_1 "dEQP-GLES2.functional.uniform_a"
#define VkglTestCase_014025_2 "pi.info_query.basic.bool_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_014025, VkglTestCase_014025_1, VkglTestCase_014025_2);

#define VkglTestCase_014026_1 "dEQP-GLES2.functional.uniform_ap"
#define VkglTestCase_014026_2 "i.info_query.basic.bool_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_014026, VkglTestCase_014026_1, VkglTestCase_014026_2);

#define VkglTestCase_014027_1 "dEQP-GLES2.functional.uniform_"
#define VkglTestCase_014027_2 "api.info_query.basic.bool_both"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_014027, VkglTestCase_014027_1, VkglTestCase_014027_2);

#define VkglTestCase_014028_1 "dEQP-GLES2.functional.uniform_a"
#define VkglTestCase_014028_2 "pi.info_query.basic.bvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_014028, VkglTestCase_014028_1, VkglTestCase_014028_2);

#define VkglTestCase_014029_1 "dEQP-GLES2.functional.uniform_ap"
#define VkglTestCase_014029_2 "i.info_query.basic.bvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_014029, VkglTestCase_014029_1, VkglTestCase_014029_2);

#define VkglTestCase_014030_1 "dEQP-GLES2.functional.uniform_"
#define VkglTestCase_014030_2 "api.info_query.basic.bvec2_both"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_014030, VkglTestCase_014030_1, VkglTestCase_014030_2);

#define VkglTestCase_014031_1 "dEQP-GLES2.functional.uniform_a"
#define VkglTestCase_014031_2 "pi.info_query.basic.bvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_014031, VkglTestCase_014031_1, VkglTestCase_014031_2);

#define VkglTestCase_014032_1 "dEQP-GLES2.functional.uniform_ap"
#define VkglTestCase_014032_2 "i.info_query.basic.bvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_014032, VkglTestCase_014032_1, VkglTestCase_014032_2);

#define VkglTestCase_014033_1 "dEQP-GLES2.functional.uniform_"
#define VkglTestCase_014033_2 "api.info_query.basic.bvec3_both"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_014033, VkglTestCase_014033_1, VkglTestCase_014033_2);

#define VkglTestCase_014034_1 "dEQP-GLES2.functional.uniform_a"
#define VkglTestCase_014034_2 "pi.info_query.basic.bvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_014034, VkglTestCase_014034_1, VkglTestCase_014034_2);

#define VkglTestCase_014035_1 "dEQP-GLES2.functional.uniform_ap"
#define VkglTestCase_014035_2 "i.info_query.basic.bvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_014035, VkglTestCase_014035_1, VkglTestCase_014035_2);

#define VkglTestCase_014036_1 "dEQP-GLES2.functional.uniform_"
#define VkglTestCase_014036_2 "api.info_query.basic.bvec4_both"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_014036, VkglTestCase_014036_1, VkglTestCase_014036_2);

#define VkglTestCase_014037_1 "dEQP-GLES2.functional.uniform_api"
#define VkglTestCase_014037_2 ".info_query.basic.sampler2D_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_014037, VkglTestCase_014037_1, VkglTestCase_014037_2);

#define VkglTestCase_014038_1 "dEQP-GLES2.functional.uniform_api."
#define VkglTestCase_014038_2 "info_query.basic.sampler2D_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_014038, VkglTestCase_014038_1, VkglTestCase_014038_2);

#define VkglTestCase_014039_1 "dEQP-GLES2.functional.uniform_ap"
#define VkglTestCase_014039_2 "i.info_query.basic.sampler2D_both"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_014039, VkglTestCase_014039_1, VkglTestCase_014039_2);

#define VkglTestCase_014040_1 "dEQP-GLES2.functional.uniform_api."
#define VkglTestCase_014040_2 "info_query.basic.samplerCube_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_014040, VkglTestCase_014040_1, VkglTestCase_014040_2);

#define VkglTestCase_014041_1 "dEQP-GLES2.functional.uniform_api.i"
#define VkglTestCase_014041_2 "nfo_query.basic.samplerCube_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_014041, VkglTestCase_014041_1, VkglTestCase_014041_2);

#define VkglTestCase_014042_1 "dEQP-GLES2.functional.uniform_api"
#define VkglTestCase_014042_2 ".info_query.basic.samplerCube_both"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_014042, VkglTestCase_014042_1, VkglTestCase_014042_2);
