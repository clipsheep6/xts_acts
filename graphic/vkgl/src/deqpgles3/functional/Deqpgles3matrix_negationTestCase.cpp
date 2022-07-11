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
#include "../ActsDeqpgles30016TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_015960_1 "dEQP-GLES3.functional.shaders.matr"
#define VkglTestCase_015960_2 "ix.negation.lowp_mat2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015960, VkglTestCase_015960_1, VkglTestCase_015960_2);

#define VkglTestCase_015961_1 "dEQP-GLES3.functional.shaders.matri"
#define VkglTestCase_015961_2 "x.negation.lowp_mat2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015961, VkglTestCase_015961_1, VkglTestCase_015961_2);

#define VkglTestCase_015962_1 "dEQP-GLES3.functional.shaders.matri"
#define VkglTestCase_015962_2 "x.negation.mediump_mat2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015962, VkglTestCase_015962_1, VkglTestCase_015962_2);

#define VkglTestCase_015963_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_015963_2 ".negation.mediump_mat2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015963, VkglTestCase_015963_1, VkglTestCase_015963_2);

#define VkglTestCase_015964_1 "dEQP-GLES3.functional.shaders.matr"
#define VkglTestCase_015964_2 "ix.negation.highp_mat2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015964, VkglTestCase_015964_1, VkglTestCase_015964_2);

#define VkglTestCase_015965_1 "dEQP-GLES3.functional.shaders.matri"
#define VkglTestCase_015965_2 "x.negation.highp_mat2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015965, VkglTestCase_015965_1, VkglTestCase_015965_2);

#define VkglTestCase_015966_1 "dEQP-GLES3.functional.shaders.matri"
#define VkglTestCase_015966_2 "x.negation.lowp_mat2x3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015966, VkglTestCase_015966_1, VkglTestCase_015966_2);

#define VkglTestCase_015967_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_015967_2 ".negation.lowp_mat2x3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015967, VkglTestCase_015967_1, VkglTestCase_015967_2);

#define VkglTestCase_015968_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_015968_2 ".negation.mediump_mat2x3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015968, VkglTestCase_015968_1, VkglTestCase_015968_2);

#define VkglTestCase_015969_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_015969_2 "negation.mediump_mat2x3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015969, VkglTestCase_015969_1, VkglTestCase_015969_2);

#define VkglTestCase_015970_1 "dEQP-GLES3.functional.shaders.matri"
#define VkglTestCase_015970_2 "x.negation.highp_mat2x3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015970, VkglTestCase_015970_1, VkglTestCase_015970_2);

#define VkglTestCase_015971_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_015971_2 ".negation.highp_mat2x3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015971, VkglTestCase_015971_1, VkglTestCase_015971_2);

#define VkglTestCase_015972_1 "dEQP-GLES3.functional.shaders.matri"
#define VkglTestCase_015972_2 "x.negation.lowp_mat2x4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015972, VkglTestCase_015972_1, VkglTestCase_015972_2);

#define VkglTestCase_015973_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_015973_2 ".negation.lowp_mat2x4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015973, VkglTestCase_015973_1, VkglTestCase_015973_2);

#define VkglTestCase_015974_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_015974_2 ".negation.mediump_mat2x4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015974, VkglTestCase_015974_1, VkglTestCase_015974_2);

#define VkglTestCase_015975_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_015975_2 "negation.mediump_mat2x4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015975, VkglTestCase_015975_1, VkglTestCase_015975_2);

#define VkglTestCase_015976_1 "dEQP-GLES3.functional.shaders.matri"
#define VkglTestCase_015976_2 "x.negation.highp_mat2x4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015976, VkglTestCase_015976_1, VkglTestCase_015976_2);

#define VkglTestCase_015977_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_015977_2 ".negation.highp_mat2x4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015977, VkglTestCase_015977_1, VkglTestCase_015977_2);

#define VkglTestCase_015978_1 "dEQP-GLES3.functional.shaders.matri"
#define VkglTestCase_015978_2 "x.negation.lowp_mat3x2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015978, VkglTestCase_015978_1, VkglTestCase_015978_2);

#define VkglTestCase_015979_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_015979_2 ".negation.lowp_mat3x2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015979, VkglTestCase_015979_1, VkglTestCase_015979_2);

#define VkglTestCase_015980_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_015980_2 ".negation.mediump_mat3x2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015980, VkglTestCase_015980_1, VkglTestCase_015980_2);

#define VkglTestCase_015981_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_015981_2 "negation.mediump_mat3x2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015981, VkglTestCase_015981_1, VkglTestCase_015981_2);

#define VkglTestCase_015982_1 "dEQP-GLES3.functional.shaders.matri"
#define VkglTestCase_015982_2 "x.negation.highp_mat3x2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015982, VkglTestCase_015982_1, VkglTestCase_015982_2);

#define VkglTestCase_015983_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_015983_2 ".negation.highp_mat3x2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015983, VkglTestCase_015983_1, VkglTestCase_015983_2);

#define VkglTestCase_015984_1 "dEQP-GLES3.functional.shaders.matr"
#define VkglTestCase_015984_2 "ix.negation.lowp_mat3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015984, VkglTestCase_015984_1, VkglTestCase_015984_2);

#define VkglTestCase_015985_1 "dEQP-GLES3.functional.shaders.matri"
#define VkglTestCase_015985_2 "x.negation.lowp_mat3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015985, VkglTestCase_015985_1, VkglTestCase_015985_2);

#define VkglTestCase_015986_1 "dEQP-GLES3.functional.shaders.matri"
#define VkglTestCase_015986_2 "x.negation.mediump_mat3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015986, VkglTestCase_015986_1, VkglTestCase_015986_2);

#define VkglTestCase_015987_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_015987_2 ".negation.mediump_mat3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015987, VkglTestCase_015987_1, VkglTestCase_015987_2);

#define VkglTestCase_015988_1 "dEQP-GLES3.functional.shaders.matr"
#define VkglTestCase_015988_2 "ix.negation.highp_mat3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015988, VkglTestCase_015988_1, VkglTestCase_015988_2);

#define VkglTestCase_015989_1 "dEQP-GLES3.functional.shaders.matri"
#define VkglTestCase_015989_2 "x.negation.highp_mat3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015989, VkglTestCase_015989_1, VkglTestCase_015989_2);

#define VkglTestCase_015990_1 "dEQP-GLES3.functional.shaders.matri"
#define VkglTestCase_015990_2 "x.negation.lowp_mat3x4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015990, VkglTestCase_015990_1, VkglTestCase_015990_2);

#define VkglTestCase_015991_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_015991_2 ".negation.lowp_mat3x4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015991, VkglTestCase_015991_1, VkglTestCase_015991_2);

#define VkglTestCase_015992_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_015992_2 ".negation.mediump_mat3x4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015992, VkglTestCase_015992_1, VkglTestCase_015992_2);

#define VkglTestCase_015993_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_015993_2 "negation.mediump_mat3x4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015993, VkglTestCase_015993_1, VkglTestCase_015993_2);

#define VkglTestCase_015994_1 "dEQP-GLES3.functional.shaders.matri"
#define VkglTestCase_015994_2 "x.negation.highp_mat3x4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015994, VkglTestCase_015994_1, VkglTestCase_015994_2);

#define VkglTestCase_015995_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_015995_2 ".negation.highp_mat3x4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015995, VkglTestCase_015995_1, VkglTestCase_015995_2);

#define VkglTestCase_015996_1 "dEQP-GLES3.functional.shaders.matri"
#define VkglTestCase_015996_2 "x.negation.lowp_mat4x2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015996, VkglTestCase_015996_1, VkglTestCase_015996_2);

#define VkglTestCase_015997_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_015997_2 ".negation.lowp_mat4x2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015997, VkglTestCase_015997_1, VkglTestCase_015997_2);

#define VkglTestCase_015998_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_015998_2 ".negation.mediump_mat4x2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015998, VkglTestCase_015998_1, VkglTestCase_015998_2);

#define VkglTestCase_015999_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_015999_2 "negation.mediump_mat4x2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015999, VkglTestCase_015999_1, VkglTestCase_015999_2);

#define VkglTestCase_016000_1 "dEQP-GLES3.functional.shaders.matri"
#define VkglTestCase_016000_2 "x.negation.highp_mat4x2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_016000, VkglTestCase_016000_1, VkglTestCase_016000_2);

#define VkglTestCase_016001_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_016001_2 ".negation.highp_mat4x2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_016001, VkglTestCase_016001_1, VkglTestCase_016001_2);

#define VkglTestCase_016002_1 "dEQP-GLES3.functional.shaders.matri"
#define VkglTestCase_016002_2 "x.negation.lowp_mat4x3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_016002, VkglTestCase_016002_1, VkglTestCase_016002_2);

#define VkglTestCase_016003_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_016003_2 ".negation.lowp_mat4x3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_016003, VkglTestCase_016003_1, VkglTestCase_016003_2);

#define VkglTestCase_016004_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_016004_2 ".negation.mediump_mat4x3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_016004, VkglTestCase_016004_1, VkglTestCase_016004_2);

#define VkglTestCase_016005_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_016005_2 "negation.mediump_mat4x3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_016005, VkglTestCase_016005_1, VkglTestCase_016005_2);

#define VkglTestCase_016006_1 "dEQP-GLES3.functional.shaders.matri"
#define VkglTestCase_016006_2 "x.negation.highp_mat4x3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_016006, VkglTestCase_016006_1, VkglTestCase_016006_2);

#define VkglTestCase_016007_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_016007_2 ".negation.highp_mat4x3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_016007, VkglTestCase_016007_1, VkglTestCase_016007_2);

#define VkglTestCase_016008_1 "dEQP-GLES3.functional.shaders.matr"
#define VkglTestCase_016008_2 "ix.negation.lowp_mat4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_016008, VkglTestCase_016008_1, VkglTestCase_016008_2);

#define VkglTestCase_016009_1 "dEQP-GLES3.functional.shaders.matri"
#define VkglTestCase_016009_2 "x.negation.lowp_mat4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_016009, VkglTestCase_016009_1, VkglTestCase_016009_2);

#define VkglTestCase_016010_1 "dEQP-GLES3.functional.shaders.matri"
#define VkglTestCase_016010_2 "x.negation.mediump_mat4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_016010, VkglTestCase_016010_1, VkglTestCase_016010_2);

#define VkglTestCase_016011_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_016011_2 ".negation.mediump_mat4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_016011, VkglTestCase_016011_1, VkglTestCase_016011_2);

#define VkglTestCase_016012_1 "dEQP-GLES3.functional.shaders.matr"
#define VkglTestCase_016012_2 "ix.negation.highp_mat4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_016012, VkglTestCase_016012_1, VkglTestCase_016012_2);

#define VkglTestCase_016013_1 "dEQP-GLES3.functional.shaders.matri"
#define VkglTestCase_016013_2 "x.negation.highp_mat4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_016013, VkglTestCase_016013_1, VkglTestCase_016013_2);
