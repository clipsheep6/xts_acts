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
#include "../ActsDeqpgles30014TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_013980_1 "dEQP-GLES3.functional.shaders.matri"
#define VkglTestCase_013980_2 "x.add.dynamic.lowp_mat2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013980, VkglTestCase_013980_1, VkglTestCase_013980_2);

#define VkglTestCase_013981_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_013981_2 ".add.dynamic.lowp_mat2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013981, VkglTestCase_013981_1, VkglTestCase_013981_2);

#define VkglTestCase_013982_1 "dEQP-GLES3.functional.shaders.matri"
#define VkglTestCase_013982_2 "x.add.dynamic.lowp_mat2_mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013982, VkglTestCase_013982_1, VkglTestCase_013982_2);

#define VkglTestCase_013983_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_013983_2 ".add.dynamic.lowp_mat2_mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013983, VkglTestCase_013983_1, VkglTestCase_013983_2);

#define VkglTestCase_013984_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_013984_2 "add.dynamic.mediump_mat2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013984, VkglTestCase_013984_1, VkglTestCase_013984_2);

#define VkglTestCase_013985_1 "dEQP-GLES3.functional.shaders.matrix.a"
#define VkglTestCase_013985_2 "dd.dynamic.mediump_mat2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013985, VkglTestCase_013985_1, VkglTestCase_013985_2);

#define VkglTestCase_013986_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_013986_2 ".add.dynamic.mediump_mat2_mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013986, VkglTestCase_013986_1, VkglTestCase_013986_2);

#define VkglTestCase_013987_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_013987_2 "add.dynamic.mediump_mat2_mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013987, VkglTestCase_013987_1, VkglTestCase_013987_2);

#define VkglTestCase_013988_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_013988_2 ".add.dynamic.highp_mat2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013988, VkglTestCase_013988_1, VkglTestCase_013988_2);

#define VkglTestCase_013989_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_013989_2 "add.dynamic.highp_mat2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013989, VkglTestCase_013989_1, VkglTestCase_013989_2);

#define VkglTestCase_013990_1 "dEQP-GLES3.functional.shaders.matri"
#define VkglTestCase_013990_2 "x.add.dynamic.highp_mat2_mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013990, VkglTestCase_013990_1, VkglTestCase_013990_2);

#define VkglTestCase_013991_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_013991_2 ".add.dynamic.highp_mat2_mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013991, VkglTestCase_013991_1, VkglTestCase_013991_2);

#define VkglTestCase_013992_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_013992_2 ".add.dynamic.lowp_mat2x3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013992, VkglTestCase_013992_1, VkglTestCase_013992_2);

#define VkglTestCase_013993_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_013993_2 "add.dynamic.lowp_mat2x3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013993, VkglTestCase_013993_1, VkglTestCase_013993_2);

#define VkglTestCase_013994_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_013994_2 "add.dynamic.lowp_mat2x3_mat2x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013994, VkglTestCase_013994_1, VkglTestCase_013994_2);

#define VkglTestCase_013995_1 "dEQP-GLES3.functional.shaders.matrix.a"
#define VkglTestCase_013995_2 "dd.dynamic.lowp_mat2x3_mat2x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013995, VkglTestCase_013995_1, VkglTestCase_013995_2);

#define VkglTestCase_013996_1 "dEQP-GLES3.functional.shaders.matrix.a"
#define VkglTestCase_013996_2 "dd.dynamic.mediump_mat2x3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013996, VkglTestCase_013996_1, VkglTestCase_013996_2);

#define VkglTestCase_013997_1 "dEQP-GLES3.functional.shaders.matrix.ad"
#define VkglTestCase_013997_2 "d.dynamic.mediump_mat2x3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013997, VkglTestCase_013997_1, VkglTestCase_013997_2);

#define VkglTestCase_013998_1 "dEQP-GLES3.functional.shaders.matrix.a"
#define VkglTestCase_013998_2 "dd.dynamic.mediump_mat2x3_mat2x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013998, VkglTestCase_013998_1, VkglTestCase_013998_2);

#define VkglTestCase_013999_1 "dEQP-GLES3.functional.shaders.matrix.ad"
#define VkglTestCase_013999_2 "d.dynamic.mediump_mat2x3_mat2x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013999, VkglTestCase_013999_1, VkglTestCase_013999_2);

#define VkglTestCase_014000_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_014000_2 "add.dynamic.highp_mat2x3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_014000, VkglTestCase_014000_1, VkglTestCase_014000_2);

#define VkglTestCase_014001_1 "dEQP-GLES3.functional.shaders.matrix.a"
#define VkglTestCase_014001_2 "dd.dynamic.highp_mat2x3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_014001, VkglTestCase_014001_1, VkglTestCase_014001_2);

#define VkglTestCase_014002_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_014002_2 "add.dynamic.highp_mat2x3_mat2x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_014002, VkglTestCase_014002_1, VkglTestCase_014002_2);

#define VkglTestCase_014003_1 "dEQP-GLES3.functional.shaders.matrix.a"
#define VkglTestCase_014003_2 "dd.dynamic.highp_mat2x3_mat2x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_014003, VkglTestCase_014003_1, VkglTestCase_014003_2);

#define VkglTestCase_014004_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_014004_2 ".add.dynamic.lowp_mat2x4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_014004, VkglTestCase_014004_1, VkglTestCase_014004_2);

#define VkglTestCase_014005_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_014005_2 "add.dynamic.lowp_mat2x4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_014005, VkglTestCase_014005_1, VkglTestCase_014005_2);

#define VkglTestCase_014006_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_014006_2 "add.dynamic.lowp_mat2x4_mat2x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_014006, VkglTestCase_014006_1, VkglTestCase_014006_2);

#define VkglTestCase_014007_1 "dEQP-GLES3.functional.shaders.matrix.a"
#define VkglTestCase_014007_2 "dd.dynamic.lowp_mat2x4_mat2x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_014007, VkglTestCase_014007_1, VkglTestCase_014007_2);

#define VkglTestCase_014008_1 "dEQP-GLES3.functional.shaders.matrix.a"
#define VkglTestCase_014008_2 "dd.dynamic.mediump_mat2x4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_014008, VkglTestCase_014008_1, VkglTestCase_014008_2);

#define VkglTestCase_014009_1 "dEQP-GLES3.functional.shaders.matrix.ad"
#define VkglTestCase_014009_2 "d.dynamic.mediump_mat2x4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_014009, VkglTestCase_014009_1, VkglTestCase_014009_2);

#define VkglTestCase_014010_1 "dEQP-GLES3.functional.shaders.matrix.a"
#define VkglTestCase_014010_2 "dd.dynamic.mediump_mat2x4_mat2x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_014010, VkglTestCase_014010_1, VkglTestCase_014010_2);

#define VkglTestCase_014011_1 "dEQP-GLES3.functional.shaders.matrix.ad"
#define VkglTestCase_014011_2 "d.dynamic.mediump_mat2x4_mat2x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_014011, VkglTestCase_014011_1, VkglTestCase_014011_2);

#define VkglTestCase_014012_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_014012_2 "add.dynamic.highp_mat2x4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_014012, VkglTestCase_014012_1, VkglTestCase_014012_2);

#define VkglTestCase_014013_1 "dEQP-GLES3.functional.shaders.matrix.a"
#define VkglTestCase_014013_2 "dd.dynamic.highp_mat2x4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_014013, VkglTestCase_014013_1, VkglTestCase_014013_2);

#define VkglTestCase_014014_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_014014_2 "add.dynamic.highp_mat2x4_mat2x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_014014, VkglTestCase_014014_1, VkglTestCase_014014_2);

#define VkglTestCase_014015_1 "dEQP-GLES3.functional.shaders.matrix.a"
#define VkglTestCase_014015_2 "dd.dynamic.highp_mat2x4_mat2x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_014015, VkglTestCase_014015_1, VkglTestCase_014015_2);

#define VkglTestCase_014016_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_014016_2 ".add.dynamic.lowp_mat3x2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_014016, VkglTestCase_014016_1, VkglTestCase_014016_2);

#define VkglTestCase_014017_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_014017_2 "add.dynamic.lowp_mat3x2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_014017, VkglTestCase_014017_1, VkglTestCase_014017_2);

#define VkglTestCase_014018_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_014018_2 "add.dynamic.lowp_mat3x2_mat3x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_014018, VkglTestCase_014018_1, VkglTestCase_014018_2);

#define VkglTestCase_014019_1 "dEQP-GLES3.functional.shaders.matrix.a"
#define VkglTestCase_014019_2 "dd.dynamic.lowp_mat3x2_mat3x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_014019, VkglTestCase_014019_1, VkglTestCase_014019_2);

#define VkglTestCase_014020_1 "dEQP-GLES3.functional.shaders.matrix.a"
#define VkglTestCase_014020_2 "dd.dynamic.mediump_mat3x2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_014020, VkglTestCase_014020_1, VkglTestCase_014020_2);

#define VkglTestCase_014021_1 "dEQP-GLES3.functional.shaders.matrix.ad"
#define VkglTestCase_014021_2 "d.dynamic.mediump_mat3x2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_014021, VkglTestCase_014021_1, VkglTestCase_014021_2);

#define VkglTestCase_014022_1 "dEQP-GLES3.functional.shaders.matrix.a"
#define VkglTestCase_014022_2 "dd.dynamic.mediump_mat3x2_mat3x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_014022, VkglTestCase_014022_1, VkglTestCase_014022_2);

#define VkglTestCase_014023_1 "dEQP-GLES3.functional.shaders.matrix.ad"
#define VkglTestCase_014023_2 "d.dynamic.mediump_mat3x2_mat3x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_014023, VkglTestCase_014023_1, VkglTestCase_014023_2);

#define VkglTestCase_014024_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_014024_2 "add.dynamic.highp_mat3x2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_014024, VkglTestCase_014024_1, VkglTestCase_014024_2);

#define VkglTestCase_014025_1 "dEQP-GLES3.functional.shaders.matrix.a"
#define VkglTestCase_014025_2 "dd.dynamic.highp_mat3x2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_014025, VkglTestCase_014025_1, VkglTestCase_014025_2);

#define VkglTestCase_014026_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_014026_2 "add.dynamic.highp_mat3x2_mat3x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_014026, VkglTestCase_014026_1, VkglTestCase_014026_2);

#define VkglTestCase_014027_1 "dEQP-GLES3.functional.shaders.matrix.a"
#define VkglTestCase_014027_2 "dd.dynamic.highp_mat3x2_mat3x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_014027, VkglTestCase_014027_1, VkglTestCase_014027_2);

#define VkglTestCase_014028_1 "dEQP-GLES3.functional.shaders.matri"
#define VkglTestCase_014028_2 "x.add.dynamic.lowp_mat3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_014028, VkglTestCase_014028_1, VkglTestCase_014028_2);

#define VkglTestCase_014029_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_014029_2 ".add.dynamic.lowp_mat3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_014029, VkglTestCase_014029_1, VkglTestCase_014029_2);

#define VkglTestCase_014030_1 "dEQP-GLES3.functional.shaders.matri"
#define VkglTestCase_014030_2 "x.add.dynamic.lowp_mat3_mat3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_014030, VkglTestCase_014030_1, VkglTestCase_014030_2);

#define VkglTestCase_014031_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_014031_2 ".add.dynamic.lowp_mat3_mat3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_014031, VkglTestCase_014031_1, VkglTestCase_014031_2);

#define VkglTestCase_014032_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_014032_2 "add.dynamic.mediump_mat3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_014032, VkglTestCase_014032_1, VkglTestCase_014032_2);

#define VkglTestCase_014033_1 "dEQP-GLES3.functional.shaders.matrix.a"
#define VkglTestCase_014033_2 "dd.dynamic.mediump_mat3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_014033, VkglTestCase_014033_1, VkglTestCase_014033_2);

#define VkglTestCase_014034_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_014034_2 ".add.dynamic.mediump_mat3_mat3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_014034, VkglTestCase_014034_1, VkglTestCase_014034_2);

#define VkglTestCase_014035_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_014035_2 "add.dynamic.mediump_mat3_mat3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_014035, VkglTestCase_014035_1, VkglTestCase_014035_2);

#define VkglTestCase_014036_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_014036_2 ".add.dynamic.highp_mat3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_014036, VkglTestCase_014036_1, VkglTestCase_014036_2);

#define VkglTestCase_014037_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_014037_2 "add.dynamic.highp_mat3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_014037, VkglTestCase_014037_1, VkglTestCase_014037_2);

#define VkglTestCase_014038_1 "dEQP-GLES3.functional.shaders.matri"
#define VkglTestCase_014038_2 "x.add.dynamic.highp_mat3_mat3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_014038, VkglTestCase_014038_1, VkglTestCase_014038_2);

#define VkglTestCase_014039_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_014039_2 ".add.dynamic.highp_mat3_mat3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_014039, VkglTestCase_014039_1, VkglTestCase_014039_2);

#define VkglTestCase_014040_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_014040_2 ".add.dynamic.lowp_mat3x4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_014040, VkglTestCase_014040_1, VkglTestCase_014040_2);

#define VkglTestCase_014041_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_014041_2 "add.dynamic.lowp_mat3x4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_014041, VkglTestCase_014041_1, VkglTestCase_014041_2);

#define VkglTestCase_014042_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_014042_2 "add.dynamic.lowp_mat3x4_mat3x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_014042, VkglTestCase_014042_1, VkglTestCase_014042_2);

#define VkglTestCase_014043_1 "dEQP-GLES3.functional.shaders.matrix.a"
#define VkglTestCase_014043_2 "dd.dynamic.lowp_mat3x4_mat3x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_014043, VkglTestCase_014043_1, VkglTestCase_014043_2);

#define VkglTestCase_014044_1 "dEQP-GLES3.functional.shaders.matrix.a"
#define VkglTestCase_014044_2 "dd.dynamic.mediump_mat3x4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_014044, VkglTestCase_014044_1, VkglTestCase_014044_2);

#define VkglTestCase_014045_1 "dEQP-GLES3.functional.shaders.matrix.ad"
#define VkglTestCase_014045_2 "d.dynamic.mediump_mat3x4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_014045, VkglTestCase_014045_1, VkglTestCase_014045_2);

#define VkglTestCase_014046_1 "dEQP-GLES3.functional.shaders.matrix.a"
#define VkglTestCase_014046_2 "dd.dynamic.mediump_mat3x4_mat3x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_014046, VkglTestCase_014046_1, VkglTestCase_014046_2);

#define VkglTestCase_014047_1 "dEQP-GLES3.functional.shaders.matrix.ad"
#define VkglTestCase_014047_2 "d.dynamic.mediump_mat3x4_mat3x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_014047, VkglTestCase_014047_1, VkglTestCase_014047_2);

#define VkglTestCase_014048_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_014048_2 "add.dynamic.highp_mat3x4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_014048, VkglTestCase_014048_1, VkglTestCase_014048_2);

#define VkglTestCase_014049_1 "dEQP-GLES3.functional.shaders.matrix.a"
#define VkglTestCase_014049_2 "dd.dynamic.highp_mat3x4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_014049, VkglTestCase_014049_1, VkglTestCase_014049_2);

#define VkglTestCase_014050_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_014050_2 "add.dynamic.highp_mat3x4_mat3x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_014050, VkglTestCase_014050_1, VkglTestCase_014050_2);

#define VkglTestCase_014051_1 "dEQP-GLES3.functional.shaders.matrix.a"
#define VkglTestCase_014051_2 "dd.dynamic.highp_mat3x4_mat3x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_014051, VkglTestCase_014051_1, VkglTestCase_014051_2);

#define VkglTestCase_014052_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_014052_2 ".add.dynamic.lowp_mat4x2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_014052, VkglTestCase_014052_1, VkglTestCase_014052_2);

#define VkglTestCase_014053_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_014053_2 "add.dynamic.lowp_mat4x2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_014053, VkglTestCase_014053_1, VkglTestCase_014053_2);

#define VkglTestCase_014054_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_014054_2 "add.dynamic.lowp_mat4x2_mat4x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_014054, VkglTestCase_014054_1, VkglTestCase_014054_2);

#define VkglTestCase_014055_1 "dEQP-GLES3.functional.shaders.matrix.a"
#define VkglTestCase_014055_2 "dd.dynamic.lowp_mat4x2_mat4x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_014055, VkglTestCase_014055_1, VkglTestCase_014055_2);

#define VkglTestCase_014056_1 "dEQP-GLES3.functional.shaders.matrix.a"
#define VkglTestCase_014056_2 "dd.dynamic.mediump_mat4x2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_014056, VkglTestCase_014056_1, VkglTestCase_014056_2);

#define VkglTestCase_014057_1 "dEQP-GLES3.functional.shaders.matrix.ad"
#define VkglTestCase_014057_2 "d.dynamic.mediump_mat4x2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_014057, VkglTestCase_014057_1, VkglTestCase_014057_2);

#define VkglTestCase_014058_1 "dEQP-GLES3.functional.shaders.matrix.a"
#define VkglTestCase_014058_2 "dd.dynamic.mediump_mat4x2_mat4x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_014058, VkglTestCase_014058_1, VkglTestCase_014058_2);

#define VkglTestCase_014059_1 "dEQP-GLES3.functional.shaders.matrix.ad"
#define VkglTestCase_014059_2 "d.dynamic.mediump_mat4x2_mat4x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_014059, VkglTestCase_014059_1, VkglTestCase_014059_2);

#define VkglTestCase_014060_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_014060_2 "add.dynamic.highp_mat4x2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_014060, VkglTestCase_014060_1, VkglTestCase_014060_2);

#define VkglTestCase_014061_1 "dEQP-GLES3.functional.shaders.matrix.a"
#define VkglTestCase_014061_2 "dd.dynamic.highp_mat4x2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_014061, VkglTestCase_014061_1, VkglTestCase_014061_2);

#define VkglTestCase_014062_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_014062_2 "add.dynamic.highp_mat4x2_mat4x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_014062, VkglTestCase_014062_1, VkglTestCase_014062_2);

#define VkglTestCase_014063_1 "dEQP-GLES3.functional.shaders.matrix.a"
#define VkglTestCase_014063_2 "dd.dynamic.highp_mat4x2_mat4x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_014063, VkglTestCase_014063_1, VkglTestCase_014063_2);

#define VkglTestCase_014064_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_014064_2 ".add.dynamic.lowp_mat4x3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_014064, VkglTestCase_014064_1, VkglTestCase_014064_2);

#define VkglTestCase_014065_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_014065_2 "add.dynamic.lowp_mat4x3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_014065, VkglTestCase_014065_1, VkglTestCase_014065_2);

#define VkglTestCase_014066_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_014066_2 "add.dynamic.lowp_mat4x3_mat4x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_014066, VkglTestCase_014066_1, VkglTestCase_014066_2);

#define VkglTestCase_014067_1 "dEQP-GLES3.functional.shaders.matrix.a"
#define VkglTestCase_014067_2 "dd.dynamic.lowp_mat4x3_mat4x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_014067, VkglTestCase_014067_1, VkglTestCase_014067_2);

#define VkglTestCase_014068_1 "dEQP-GLES3.functional.shaders.matrix.a"
#define VkglTestCase_014068_2 "dd.dynamic.mediump_mat4x3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_014068, VkglTestCase_014068_1, VkglTestCase_014068_2);

#define VkglTestCase_014069_1 "dEQP-GLES3.functional.shaders.matrix.ad"
#define VkglTestCase_014069_2 "d.dynamic.mediump_mat4x3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_014069, VkglTestCase_014069_1, VkglTestCase_014069_2);

#define VkglTestCase_014070_1 "dEQP-GLES3.functional.shaders.matrix.a"
#define VkglTestCase_014070_2 "dd.dynamic.mediump_mat4x3_mat4x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_014070, VkglTestCase_014070_1, VkglTestCase_014070_2);

#define VkglTestCase_014071_1 "dEQP-GLES3.functional.shaders.matrix.ad"
#define VkglTestCase_014071_2 "d.dynamic.mediump_mat4x3_mat4x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_014071, VkglTestCase_014071_1, VkglTestCase_014071_2);

#define VkglTestCase_014072_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_014072_2 "add.dynamic.highp_mat4x3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_014072, VkglTestCase_014072_1, VkglTestCase_014072_2);

#define VkglTestCase_014073_1 "dEQP-GLES3.functional.shaders.matrix.a"
#define VkglTestCase_014073_2 "dd.dynamic.highp_mat4x3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_014073, VkglTestCase_014073_1, VkglTestCase_014073_2);

#define VkglTestCase_014074_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_014074_2 "add.dynamic.highp_mat4x3_mat4x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_014074, VkglTestCase_014074_1, VkglTestCase_014074_2);

#define VkglTestCase_014075_1 "dEQP-GLES3.functional.shaders.matrix.a"
#define VkglTestCase_014075_2 "dd.dynamic.highp_mat4x3_mat4x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_014075, VkglTestCase_014075_1, VkglTestCase_014075_2);

#define VkglTestCase_014076_1 "dEQP-GLES3.functional.shaders.matri"
#define VkglTestCase_014076_2 "x.add.dynamic.lowp_mat4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_014076, VkglTestCase_014076_1, VkglTestCase_014076_2);

#define VkglTestCase_014077_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_014077_2 ".add.dynamic.lowp_mat4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_014077, VkglTestCase_014077_1, VkglTestCase_014077_2);

#define VkglTestCase_014078_1 "dEQP-GLES3.functional.shaders.matri"
#define VkglTestCase_014078_2 "x.add.dynamic.lowp_mat4_mat4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_014078, VkglTestCase_014078_1, VkglTestCase_014078_2);

#define VkglTestCase_014079_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_014079_2 ".add.dynamic.lowp_mat4_mat4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_014079, VkglTestCase_014079_1, VkglTestCase_014079_2);

#define VkglTestCase_014080_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_014080_2 "add.dynamic.mediump_mat4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_014080, VkglTestCase_014080_1, VkglTestCase_014080_2);

#define VkglTestCase_014081_1 "dEQP-GLES3.functional.shaders.matrix.a"
#define VkglTestCase_014081_2 "dd.dynamic.mediump_mat4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_014081, VkglTestCase_014081_1, VkglTestCase_014081_2);

#define VkglTestCase_014082_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_014082_2 ".add.dynamic.mediump_mat4_mat4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_014082, VkglTestCase_014082_1, VkglTestCase_014082_2);

#define VkglTestCase_014083_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_014083_2 "add.dynamic.mediump_mat4_mat4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_014083, VkglTestCase_014083_1, VkglTestCase_014083_2);

#define VkglTestCase_014084_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_014084_2 ".add.dynamic.highp_mat4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_014084, VkglTestCase_014084_1, VkglTestCase_014084_2);

#define VkglTestCase_014085_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_014085_2 "add.dynamic.highp_mat4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_014085, VkglTestCase_014085_1, VkglTestCase_014085_2);

#define VkglTestCase_014086_1 "dEQP-GLES3.functional.shaders.matri"
#define VkglTestCase_014086_2 "x.add.dynamic.highp_mat4_mat4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_014086, VkglTestCase_014086_1, VkglTestCase_014086_2);

#define VkglTestCase_014087_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_014087_2 ".add.dynamic.highp_mat4_mat4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_014087, VkglTestCase_014087_1, VkglTestCase_014087_2);
