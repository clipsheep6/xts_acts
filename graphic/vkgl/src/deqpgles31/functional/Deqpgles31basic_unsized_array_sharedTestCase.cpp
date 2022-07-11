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
#include "../ActsDeqpgles310009TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_008988_1 "dEQP-GLES31.functional.ssbo.layou"
#define VkglTestCase_008988_2 "t.basic_unsized_array.shared.float"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008988, VkglTestCase_008988_1, VkglTestCase_008988_2);

#define VkglTestCase_008989_1 "dEQP-GLES31.functional.ssbo.layou"
#define VkglTestCase_008989_2 "t.basic_unsized_array.shared.vec2"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008989, VkglTestCase_008989_1, VkglTestCase_008989_2);

#define VkglTestCase_008990_1 "dEQP-GLES31.functional.ssbo.layou"
#define VkglTestCase_008990_2 "t.basic_unsized_array.shared.vec3"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008990, VkglTestCase_008990_1, VkglTestCase_008990_2);

#define VkglTestCase_008991_1 "dEQP-GLES31.functional.ssbo.layou"
#define VkglTestCase_008991_2 "t.basic_unsized_array.shared.vec4"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008991, VkglTestCase_008991_1, VkglTestCase_008991_2);

#define VkglTestCase_008992_1 "dEQP-GLES31.functional.ssbo.layo"
#define VkglTestCase_008992_2 "ut.basic_unsized_array.shared.int"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008992, VkglTestCase_008992_1, VkglTestCase_008992_2);

#define VkglTestCase_008993_1 "dEQP-GLES31.functional.ssbo.layou"
#define VkglTestCase_008993_2 "t.basic_unsized_array.shared.ivec2"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008993, VkglTestCase_008993_1, VkglTestCase_008993_2);

#define VkglTestCase_008994_1 "dEQP-GLES31.functional.ssbo.layou"
#define VkglTestCase_008994_2 "t.basic_unsized_array.shared.ivec3"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008994, VkglTestCase_008994_1, VkglTestCase_008994_2);

#define VkglTestCase_008995_1 "dEQP-GLES31.functional.ssbo.layou"
#define VkglTestCase_008995_2 "t.basic_unsized_array.shared.ivec4"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008995, VkglTestCase_008995_1, VkglTestCase_008995_2);

#define VkglTestCase_008996_1 "dEQP-GLES31.functional.ssbo.layou"
#define VkglTestCase_008996_2 "t.basic_unsized_array.shared.uint"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008996, VkglTestCase_008996_1, VkglTestCase_008996_2);

#define VkglTestCase_008997_1 "dEQP-GLES31.functional.ssbo.layou"
#define VkglTestCase_008997_2 "t.basic_unsized_array.shared.uvec2"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008997, VkglTestCase_008997_1, VkglTestCase_008997_2);

#define VkglTestCase_008998_1 "dEQP-GLES31.functional.ssbo.layou"
#define VkglTestCase_008998_2 "t.basic_unsized_array.shared.uvec3"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008998, VkglTestCase_008998_1, VkglTestCase_008998_2);

#define VkglTestCase_008999_1 "dEQP-GLES31.functional.ssbo.layou"
#define VkglTestCase_008999_2 "t.basic_unsized_array.shared.uvec4"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008999, VkglTestCase_008999_1, VkglTestCase_008999_2);

#define VkglTestCase_009000_1 "dEQP-GLES31.functional.ssbo.layou"
#define VkglTestCase_009000_2 "t.basic_unsized_array.shared.bool"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_009000, VkglTestCase_009000_1, VkglTestCase_009000_2);

#define VkglTestCase_009001_1 "dEQP-GLES31.functional.ssbo.layou"
#define VkglTestCase_009001_2 "t.basic_unsized_array.shared.bvec2"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_009001, VkglTestCase_009001_1, VkglTestCase_009001_2);

#define VkglTestCase_009002_1 "dEQP-GLES31.functional.ssbo.layou"
#define VkglTestCase_009002_2 "t.basic_unsized_array.shared.bvec3"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_009002, VkglTestCase_009002_1, VkglTestCase_009002_2);

#define VkglTestCase_009003_1 "dEQP-GLES31.functional.ssbo.layou"
#define VkglTestCase_009003_2 "t.basic_unsized_array.shared.bvec4"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_009003, VkglTestCase_009003_1, VkglTestCase_009003_2);

#define VkglTestCase_009004_1 "dEQP-GLES31.functional.ssbo.layou"
#define VkglTestCase_009004_2 "t.basic_unsized_array.shared.mat2"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_009004, VkglTestCase_009004_1, VkglTestCase_009004_2);

#define VkglTestCase_009005_1 "dEQP-GLES31.functional.ssbo.layout.bas"
#define VkglTestCase_009005_2 "ic_unsized_array.shared.row_major_mat2"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_009005, VkglTestCase_009005_1, VkglTestCase_009005_2);

#define VkglTestCase_009006_1 "dEQP-GLES31.functional.ssbo.layout.basi"
#define VkglTestCase_009006_2 "c_unsized_array.shared.column_major_mat2"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_009006, VkglTestCase_009006_1, VkglTestCase_009006_2);

#define VkglTestCase_009007_1 "dEQP-GLES31.functional.ssbo.layou"
#define VkglTestCase_009007_2 "t.basic_unsized_array.shared.mat3"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_009007, VkglTestCase_009007_1, VkglTestCase_009007_2);

#define VkglTestCase_009008_1 "dEQP-GLES31.functional.ssbo.layout.bas"
#define VkglTestCase_009008_2 "ic_unsized_array.shared.row_major_mat3"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_009008, VkglTestCase_009008_1, VkglTestCase_009008_2);

#define VkglTestCase_009009_1 "dEQP-GLES31.functional.ssbo.layout.basi"
#define VkglTestCase_009009_2 "c_unsized_array.shared.column_major_mat3"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_009009, VkglTestCase_009009_1, VkglTestCase_009009_2);

#define VkglTestCase_009010_1 "dEQP-GLES31.functional.ssbo.layou"
#define VkglTestCase_009010_2 "t.basic_unsized_array.shared.mat4"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_009010, VkglTestCase_009010_1, VkglTestCase_009010_2);

#define VkglTestCase_009011_1 "dEQP-GLES31.functional.ssbo.layout.bas"
#define VkglTestCase_009011_2 "ic_unsized_array.shared.row_major_mat4"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_009011, VkglTestCase_009011_1, VkglTestCase_009011_2);

#define VkglTestCase_009012_1 "dEQP-GLES31.functional.ssbo.layout.basi"
#define VkglTestCase_009012_2 "c_unsized_array.shared.column_major_mat4"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_009012, VkglTestCase_009012_1, VkglTestCase_009012_2);

#define VkglTestCase_009013_1 "dEQP-GLES31.functional.ssbo.layout"
#define VkglTestCase_009013_2 ".basic_unsized_array.shared.mat2x3"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_009013, VkglTestCase_009013_1, VkglTestCase_009013_2);

#define VkglTestCase_009014_1 "dEQP-GLES31.functional.ssbo.layout.basi"
#define VkglTestCase_009014_2 "c_unsized_array.shared.row_major_mat2x3"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_009014, VkglTestCase_009014_1, VkglTestCase_009014_2);

#define VkglTestCase_009015_1 "dEQP-GLES31.functional.ssbo.layout.basic"
#define VkglTestCase_009015_2 "_unsized_array.shared.column_major_mat2x3"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_009015, VkglTestCase_009015_1, VkglTestCase_009015_2);

#define VkglTestCase_009016_1 "dEQP-GLES31.functional.ssbo.layout"
#define VkglTestCase_009016_2 ".basic_unsized_array.shared.mat2x4"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_009016, VkglTestCase_009016_1, VkglTestCase_009016_2);

#define VkglTestCase_009017_1 "dEQP-GLES31.functional.ssbo.layout.basi"
#define VkglTestCase_009017_2 "c_unsized_array.shared.row_major_mat2x4"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_009017, VkglTestCase_009017_1, VkglTestCase_009017_2);

#define VkglTestCase_009018_1 "dEQP-GLES31.functional.ssbo.layout.basic"
#define VkglTestCase_009018_2 "_unsized_array.shared.column_major_mat2x4"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_009018, VkglTestCase_009018_1, VkglTestCase_009018_2);

#define VkglTestCase_009019_1 "dEQP-GLES31.functional.ssbo.layout"
#define VkglTestCase_009019_2 ".basic_unsized_array.shared.mat3x2"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_009019, VkglTestCase_009019_1, VkglTestCase_009019_2);

#define VkglTestCase_009020_1 "dEQP-GLES31.functional.ssbo.layout.basi"
#define VkglTestCase_009020_2 "c_unsized_array.shared.row_major_mat3x2"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_009020, VkglTestCase_009020_1, VkglTestCase_009020_2);

#define VkglTestCase_009021_1 "dEQP-GLES31.functional.ssbo.layout.basic"
#define VkglTestCase_009021_2 "_unsized_array.shared.column_major_mat3x2"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_009021, VkglTestCase_009021_1, VkglTestCase_009021_2);

#define VkglTestCase_009022_1 "dEQP-GLES31.functional.ssbo.layout"
#define VkglTestCase_009022_2 ".basic_unsized_array.shared.mat3x4"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_009022, VkglTestCase_009022_1, VkglTestCase_009022_2);

#define VkglTestCase_009023_1 "dEQP-GLES31.functional.ssbo.layout.basi"
#define VkglTestCase_009023_2 "c_unsized_array.shared.row_major_mat3x4"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_009023, VkglTestCase_009023_1, VkglTestCase_009023_2);

#define VkglTestCase_009024_1 "dEQP-GLES31.functional.ssbo.layout.basic"
#define VkglTestCase_009024_2 "_unsized_array.shared.column_major_mat3x4"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_009024, VkglTestCase_009024_1, VkglTestCase_009024_2);

#define VkglTestCase_009025_1 "dEQP-GLES31.functional.ssbo.layout"
#define VkglTestCase_009025_2 ".basic_unsized_array.shared.mat4x2"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_009025, VkglTestCase_009025_1, VkglTestCase_009025_2);

#define VkglTestCase_009026_1 "dEQP-GLES31.functional.ssbo.layout.basi"
#define VkglTestCase_009026_2 "c_unsized_array.shared.row_major_mat4x2"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_009026, VkglTestCase_009026_1, VkglTestCase_009026_2);

#define VkglTestCase_009027_1 "dEQP-GLES31.functional.ssbo.layout.basic"
#define VkglTestCase_009027_2 "_unsized_array.shared.column_major_mat4x2"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_009027, VkglTestCase_009027_1, VkglTestCase_009027_2);

#define VkglTestCase_009028_1 "dEQP-GLES31.functional.ssbo.layout"
#define VkglTestCase_009028_2 ".basic_unsized_array.shared.mat4x3"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_009028, VkglTestCase_009028_1, VkglTestCase_009028_2);

#define VkglTestCase_009029_1 "dEQP-GLES31.functional.ssbo.layout.basi"
#define VkglTestCase_009029_2 "c_unsized_array.shared.row_major_mat4x3"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_009029, VkglTestCase_009029_1, VkglTestCase_009029_2);

#define VkglTestCase_009030_1 "dEQP-GLES31.functional.ssbo.layout.basic"
#define VkglTestCase_009030_2 "_unsized_array.shared.column_major_mat4x3"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_009030, VkglTestCase_009030_1, VkglTestCase_009030_2);
