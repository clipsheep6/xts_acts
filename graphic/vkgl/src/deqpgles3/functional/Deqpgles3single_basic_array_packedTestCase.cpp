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
#include "../ActsDeqpgles30035TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_034981_1 "dEQP-GLES3.functional.ubo.single"
#define VkglTestCase_034981_2 "_basic_array.packed.float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034981, VkglTestCase_034981_1, VkglTestCase_034981_2);

#define VkglTestCase_034982_1 "dEQP-GLES3.functional.ubo.single_"
#define VkglTestCase_034982_2 "basic_array.packed.float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034982, VkglTestCase_034982_1, VkglTestCase_034982_2);

#define VkglTestCase_034983_1 "dEQP-GLES3.functional.ubo.singl"
#define VkglTestCase_034983_2 "e_basic_array.packed.vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034983, VkglTestCase_034983_1, VkglTestCase_034983_2);

#define VkglTestCase_034984_1 "dEQP-GLES3.functional.ubo.single"
#define VkglTestCase_034984_2 "_basic_array.packed.vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034984, VkglTestCase_034984_1, VkglTestCase_034984_2);

#define VkglTestCase_034985_1 "dEQP-GLES3.functional.ubo.singl"
#define VkglTestCase_034985_2 "e_basic_array.packed.vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034985, VkglTestCase_034985_1, VkglTestCase_034985_2);

#define VkglTestCase_034986_1 "dEQP-GLES3.functional.ubo.single"
#define VkglTestCase_034986_2 "_basic_array.packed.vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034986, VkglTestCase_034986_1, VkglTestCase_034986_2);

#define VkglTestCase_034987_1 "dEQP-GLES3.functional.ubo.singl"
#define VkglTestCase_034987_2 "e_basic_array.packed.vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034987, VkglTestCase_034987_1, VkglTestCase_034987_2);

#define VkglTestCase_034988_1 "dEQP-GLES3.functional.ubo.single"
#define VkglTestCase_034988_2 "_basic_array.packed.vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034988, VkglTestCase_034988_1, VkglTestCase_034988_2);

#define VkglTestCase_034989_1 "dEQP-GLES3.functional.ubo.singl"
#define VkglTestCase_034989_2 "e_basic_array.packed.int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034989, VkglTestCase_034989_1, VkglTestCase_034989_2);

#define VkglTestCase_034990_1 "dEQP-GLES3.functional.ubo.single"
#define VkglTestCase_034990_2 "_basic_array.packed.int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034990, VkglTestCase_034990_1, VkglTestCase_034990_2);

#define VkglTestCase_034991_1 "dEQP-GLES3.functional.ubo.single"
#define VkglTestCase_034991_2 "_basic_array.packed.ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034991, VkglTestCase_034991_1, VkglTestCase_034991_2);

#define VkglTestCase_034992_1 "dEQP-GLES3.functional.ubo.single_"
#define VkglTestCase_034992_2 "basic_array.packed.ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034992, VkglTestCase_034992_1, VkglTestCase_034992_2);

#define VkglTestCase_034993_1 "dEQP-GLES3.functional.ubo.single"
#define VkglTestCase_034993_2 "_basic_array.packed.ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034993, VkglTestCase_034993_1, VkglTestCase_034993_2);

#define VkglTestCase_034994_1 "dEQP-GLES3.functional.ubo.single_"
#define VkglTestCase_034994_2 "basic_array.packed.ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034994, VkglTestCase_034994_1, VkglTestCase_034994_2);

#define VkglTestCase_034995_1 "dEQP-GLES3.functional.ubo.single"
#define VkglTestCase_034995_2 "_basic_array.packed.ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034995, VkglTestCase_034995_1, VkglTestCase_034995_2);

#define VkglTestCase_034996_1 "dEQP-GLES3.functional.ubo.single_"
#define VkglTestCase_034996_2 "basic_array.packed.ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034996, VkglTestCase_034996_1, VkglTestCase_034996_2);

#define VkglTestCase_034997_1 "dEQP-GLES3.functional.ubo.singl"
#define VkglTestCase_034997_2 "e_basic_array.packed.uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034997, VkglTestCase_034997_1, VkglTestCase_034997_2);

#define VkglTestCase_034998_1 "dEQP-GLES3.functional.ubo.single"
#define VkglTestCase_034998_2 "_basic_array.packed.uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034998, VkglTestCase_034998_1, VkglTestCase_034998_2);

#define VkglTestCase_034999_1 "dEQP-GLES3.functional.ubo.single"
#define VkglTestCase_034999_2 "_basic_array.packed.uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034999, VkglTestCase_034999_1, VkglTestCase_034999_2);

#define VkglTestCase_035000_1 "dEQP-GLES3.functional.ubo.single_"
#define VkglTestCase_035000_2 "basic_array.packed.uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_035000, VkglTestCase_035000_1, VkglTestCase_035000_2);

#define VkglTestCase_035001_1 "dEQP-GLES3.functional.ubo.single"
#define VkglTestCase_035001_2 "_basic_array.packed.uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_035001, VkglTestCase_035001_1, VkglTestCase_035001_2);

#define VkglTestCase_035002_1 "dEQP-GLES3.functional.ubo.single_"
#define VkglTestCase_035002_2 "basic_array.packed.uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_035002, VkglTestCase_035002_1, VkglTestCase_035002_2);

#define VkglTestCase_035003_1 "dEQP-GLES3.functional.ubo.single"
#define VkglTestCase_035003_2 "_basic_array.packed.uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_035003, VkglTestCase_035003_1, VkglTestCase_035003_2);

#define VkglTestCase_035004_1 "dEQP-GLES3.functional.ubo.single_"
#define VkglTestCase_035004_2 "basic_array.packed.uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_035004, VkglTestCase_035004_1, VkglTestCase_035004_2);

#define VkglTestCase_035005_1 "dEQP-GLES3.functional.ubo.singl"
#define VkglTestCase_035005_2 "e_basic_array.packed.bool_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_035005, VkglTestCase_035005_1, VkglTestCase_035005_2);

#define VkglTestCase_035006_1 "dEQP-GLES3.functional.ubo.single"
#define VkglTestCase_035006_2 "_basic_array.packed.bool_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_035006, VkglTestCase_035006_1, VkglTestCase_035006_2);

#define VkglTestCase_035007_1 "dEQP-GLES3.functional.ubo.single"
#define VkglTestCase_035007_2 "_basic_array.packed.bvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_035007, VkglTestCase_035007_1, VkglTestCase_035007_2);

#define VkglTestCase_035008_1 "dEQP-GLES3.functional.ubo.single_"
#define VkglTestCase_035008_2 "basic_array.packed.bvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_035008, VkglTestCase_035008_1, VkglTestCase_035008_2);

#define VkglTestCase_035009_1 "dEQP-GLES3.functional.ubo.single"
#define VkglTestCase_035009_2 "_basic_array.packed.bvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_035009, VkglTestCase_035009_1, VkglTestCase_035009_2);

#define VkglTestCase_035010_1 "dEQP-GLES3.functional.ubo.single_"
#define VkglTestCase_035010_2 "basic_array.packed.bvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_035010, VkglTestCase_035010_1, VkglTestCase_035010_2);

#define VkglTestCase_035011_1 "dEQP-GLES3.functional.ubo.single"
#define VkglTestCase_035011_2 "_basic_array.packed.bvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_035011, VkglTestCase_035011_1, VkglTestCase_035011_2);

#define VkglTestCase_035012_1 "dEQP-GLES3.functional.ubo.single_"
#define VkglTestCase_035012_2 "basic_array.packed.bvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_035012, VkglTestCase_035012_1, VkglTestCase_035012_2);

#define VkglTestCase_035013_1 "dEQP-GLES3.functional.ubo.singl"
#define VkglTestCase_035013_2 "e_basic_array.packed.mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_035013, VkglTestCase_035013_1, VkglTestCase_035013_2);

#define VkglTestCase_035014_1 "dEQP-GLES3.functional.ubo.single"
#define VkglTestCase_035014_2 "_basic_array.packed.mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_035014, VkglTestCase_035014_1, VkglTestCase_035014_2);

#define VkglTestCase_035015_1 "dEQP-GLES3.functional.ubo.single_bas"
#define VkglTestCase_035015_2 "ic_array.packed.row_major_mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_035015, VkglTestCase_035015_1, VkglTestCase_035015_2);

#define VkglTestCase_035016_1 "dEQP-GLES3.functional.ubo.single_basi"
#define VkglTestCase_035016_2 "c_array.packed.row_major_mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_035016, VkglTestCase_035016_1, VkglTestCase_035016_2);

#define VkglTestCase_035017_1 "dEQP-GLES3.functional.ubo.single_basic"
#define VkglTestCase_035017_2 "_array.packed.column_major_mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_035017, VkglTestCase_035017_1, VkglTestCase_035017_2);

#define VkglTestCase_035018_1 "dEQP-GLES3.functional.ubo.single_basic_"
#define VkglTestCase_035018_2 "array.packed.column_major_mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_035018, VkglTestCase_035018_1, VkglTestCase_035018_2);

#define VkglTestCase_035019_1 "dEQP-GLES3.functional.ubo.singl"
#define VkglTestCase_035019_2 "e_basic_array.packed.mat3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_035019, VkglTestCase_035019_1, VkglTestCase_035019_2);

#define VkglTestCase_035020_1 "dEQP-GLES3.functional.ubo.single"
#define VkglTestCase_035020_2 "_basic_array.packed.mat3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_035020, VkglTestCase_035020_1, VkglTestCase_035020_2);

#define VkglTestCase_035021_1 "dEQP-GLES3.functional.ubo.single_bas"
#define VkglTestCase_035021_2 "ic_array.packed.row_major_mat3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_035021, VkglTestCase_035021_1, VkglTestCase_035021_2);

#define VkglTestCase_035022_1 "dEQP-GLES3.functional.ubo.single_basi"
#define VkglTestCase_035022_2 "c_array.packed.row_major_mat3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_035022, VkglTestCase_035022_1, VkglTestCase_035022_2);

#define VkglTestCase_035023_1 "dEQP-GLES3.functional.ubo.single_basic"
#define VkglTestCase_035023_2 "_array.packed.column_major_mat3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_035023, VkglTestCase_035023_1, VkglTestCase_035023_2);

#define VkglTestCase_035024_1 "dEQP-GLES3.functional.ubo.single_basic_"
#define VkglTestCase_035024_2 "array.packed.column_major_mat3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_035024, VkglTestCase_035024_1, VkglTestCase_035024_2);

#define VkglTestCase_035025_1 "dEQP-GLES3.functional.ubo.singl"
#define VkglTestCase_035025_2 "e_basic_array.packed.mat4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_035025, VkglTestCase_035025_1, VkglTestCase_035025_2);

#define VkglTestCase_035026_1 "dEQP-GLES3.functional.ubo.single"
#define VkglTestCase_035026_2 "_basic_array.packed.mat4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_035026, VkglTestCase_035026_1, VkglTestCase_035026_2);

#define VkglTestCase_035027_1 "dEQP-GLES3.functional.ubo.single_bas"
#define VkglTestCase_035027_2 "ic_array.packed.row_major_mat4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_035027, VkglTestCase_035027_1, VkglTestCase_035027_2);

#define VkglTestCase_035028_1 "dEQP-GLES3.functional.ubo.single_basi"
#define VkglTestCase_035028_2 "c_array.packed.row_major_mat4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_035028, VkglTestCase_035028_1, VkglTestCase_035028_2);

#define VkglTestCase_035029_1 "dEQP-GLES3.functional.ubo.single_basic"
#define VkglTestCase_035029_2 "_array.packed.column_major_mat4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_035029, VkglTestCase_035029_1, VkglTestCase_035029_2);

#define VkglTestCase_035030_1 "dEQP-GLES3.functional.ubo.single_basic_"
#define VkglTestCase_035030_2 "array.packed.column_major_mat4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_035030, VkglTestCase_035030_1, VkglTestCase_035030_2);

#define VkglTestCase_035031_1 "dEQP-GLES3.functional.ubo.single"
#define VkglTestCase_035031_2 "_basic_array.packed.mat2x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_035031, VkglTestCase_035031_1, VkglTestCase_035031_2);

#define VkglTestCase_035032_1 "dEQP-GLES3.functional.ubo.single_"
#define VkglTestCase_035032_2 "basic_array.packed.mat2x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_035032, VkglTestCase_035032_1, VkglTestCase_035032_2);

#define VkglTestCase_035033_1 "dEQP-GLES3.functional.ubo.single_basi"
#define VkglTestCase_035033_2 "c_array.packed.row_major_mat2x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_035033, VkglTestCase_035033_1, VkglTestCase_035033_2);

#define VkglTestCase_035034_1 "dEQP-GLES3.functional.ubo.single_basic"
#define VkglTestCase_035034_2 "_array.packed.row_major_mat2x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_035034, VkglTestCase_035034_1, VkglTestCase_035034_2);

#define VkglTestCase_035035_1 "dEQP-GLES3.functional.ubo.single_basic_"
#define VkglTestCase_035035_2 "array.packed.column_major_mat2x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_035035, VkglTestCase_035035_1, VkglTestCase_035035_2);

#define VkglTestCase_035036_1 "dEQP-GLES3.functional.ubo.single_basic_a"
#define VkglTestCase_035036_2 "rray.packed.column_major_mat2x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_035036, VkglTestCase_035036_1, VkglTestCase_035036_2);

#define VkglTestCase_035037_1 "dEQP-GLES3.functional.ubo.single"
#define VkglTestCase_035037_2 "_basic_array.packed.mat2x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_035037, VkglTestCase_035037_1, VkglTestCase_035037_2);

#define VkglTestCase_035038_1 "dEQP-GLES3.functional.ubo.single_"
#define VkglTestCase_035038_2 "basic_array.packed.mat2x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_035038, VkglTestCase_035038_1, VkglTestCase_035038_2);

#define VkglTestCase_035039_1 "dEQP-GLES3.functional.ubo.single_basi"
#define VkglTestCase_035039_2 "c_array.packed.row_major_mat2x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_035039, VkglTestCase_035039_1, VkglTestCase_035039_2);

#define VkglTestCase_035040_1 "dEQP-GLES3.functional.ubo.single_basic"
#define VkglTestCase_035040_2 "_array.packed.row_major_mat2x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_035040, VkglTestCase_035040_1, VkglTestCase_035040_2);

#define VkglTestCase_035041_1 "dEQP-GLES3.functional.ubo.single_basic_"
#define VkglTestCase_035041_2 "array.packed.column_major_mat2x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_035041, VkglTestCase_035041_1, VkglTestCase_035041_2);

#define VkglTestCase_035042_1 "dEQP-GLES3.functional.ubo.single_basic_a"
#define VkglTestCase_035042_2 "rray.packed.column_major_mat2x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_035042, VkglTestCase_035042_1, VkglTestCase_035042_2);

#define VkglTestCase_035043_1 "dEQP-GLES3.functional.ubo.single"
#define VkglTestCase_035043_2 "_basic_array.packed.mat3x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_035043, VkglTestCase_035043_1, VkglTestCase_035043_2);

#define VkglTestCase_035044_1 "dEQP-GLES3.functional.ubo.single_"
#define VkglTestCase_035044_2 "basic_array.packed.mat3x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_035044, VkglTestCase_035044_1, VkglTestCase_035044_2);

#define VkglTestCase_035045_1 "dEQP-GLES3.functional.ubo.single_basi"
#define VkglTestCase_035045_2 "c_array.packed.row_major_mat3x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_035045, VkglTestCase_035045_1, VkglTestCase_035045_2);

#define VkglTestCase_035046_1 "dEQP-GLES3.functional.ubo.single_basic"
#define VkglTestCase_035046_2 "_array.packed.row_major_mat3x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_035046, VkglTestCase_035046_1, VkglTestCase_035046_2);

#define VkglTestCase_035047_1 "dEQP-GLES3.functional.ubo.single_basic_"
#define VkglTestCase_035047_2 "array.packed.column_major_mat3x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_035047, VkglTestCase_035047_1, VkglTestCase_035047_2);

#define VkglTestCase_035048_1 "dEQP-GLES3.functional.ubo.single_basic_a"
#define VkglTestCase_035048_2 "rray.packed.column_major_mat3x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_035048, VkglTestCase_035048_1, VkglTestCase_035048_2);

#define VkglTestCase_035049_1 "dEQP-GLES3.functional.ubo.single"
#define VkglTestCase_035049_2 "_basic_array.packed.mat3x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_035049, VkglTestCase_035049_1, VkglTestCase_035049_2);

#define VkglTestCase_035050_1 "dEQP-GLES3.functional.ubo.single_"
#define VkglTestCase_035050_2 "basic_array.packed.mat3x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_035050, VkglTestCase_035050_1, VkglTestCase_035050_2);

#define VkglTestCase_035051_1 "dEQP-GLES3.functional.ubo.single_basi"
#define VkglTestCase_035051_2 "c_array.packed.row_major_mat3x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_035051, VkglTestCase_035051_1, VkglTestCase_035051_2);

#define VkglTestCase_035052_1 "dEQP-GLES3.functional.ubo.single_basic"
#define VkglTestCase_035052_2 "_array.packed.row_major_mat3x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_035052, VkglTestCase_035052_1, VkglTestCase_035052_2);

#define VkglTestCase_035053_1 "dEQP-GLES3.functional.ubo.single_basic_"
#define VkglTestCase_035053_2 "array.packed.column_major_mat3x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_035053, VkglTestCase_035053_1, VkglTestCase_035053_2);

#define VkglTestCase_035054_1 "dEQP-GLES3.functional.ubo.single_basic_a"
#define VkglTestCase_035054_2 "rray.packed.column_major_mat3x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_035054, VkglTestCase_035054_1, VkglTestCase_035054_2);

#define VkglTestCase_035055_1 "dEQP-GLES3.functional.ubo.single"
#define VkglTestCase_035055_2 "_basic_array.packed.mat4x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_035055, VkglTestCase_035055_1, VkglTestCase_035055_2);

#define VkglTestCase_035056_1 "dEQP-GLES3.functional.ubo.single_"
#define VkglTestCase_035056_2 "basic_array.packed.mat4x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_035056, VkglTestCase_035056_1, VkglTestCase_035056_2);

#define VkglTestCase_035057_1 "dEQP-GLES3.functional.ubo.single_basi"
#define VkglTestCase_035057_2 "c_array.packed.row_major_mat4x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_035057, VkglTestCase_035057_1, VkglTestCase_035057_2);

#define VkglTestCase_035058_1 "dEQP-GLES3.functional.ubo.single_basic"
#define VkglTestCase_035058_2 "_array.packed.row_major_mat4x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_035058, VkglTestCase_035058_1, VkglTestCase_035058_2);

#define VkglTestCase_035059_1 "dEQP-GLES3.functional.ubo.single_basic_"
#define VkglTestCase_035059_2 "array.packed.column_major_mat4x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_035059, VkglTestCase_035059_1, VkglTestCase_035059_2);

#define VkglTestCase_035060_1 "dEQP-GLES3.functional.ubo.single_basic_a"
#define VkglTestCase_035060_2 "rray.packed.column_major_mat4x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_035060, VkglTestCase_035060_1, VkglTestCase_035060_2);

#define VkglTestCase_035061_1 "dEQP-GLES3.functional.ubo.single"
#define VkglTestCase_035061_2 "_basic_array.packed.mat4x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_035061, VkglTestCase_035061_1, VkglTestCase_035061_2);

#define VkglTestCase_035062_1 "dEQP-GLES3.functional.ubo.single_"
#define VkglTestCase_035062_2 "basic_array.packed.mat4x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_035062, VkglTestCase_035062_1, VkglTestCase_035062_2);

#define VkglTestCase_035063_1 "dEQP-GLES3.functional.ubo.single_basi"
#define VkglTestCase_035063_2 "c_array.packed.row_major_mat4x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_035063, VkglTestCase_035063_1, VkglTestCase_035063_2);

#define VkglTestCase_035064_1 "dEQP-GLES3.functional.ubo.single_basic"
#define VkglTestCase_035064_2 "_array.packed.row_major_mat4x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_035064, VkglTestCase_035064_1, VkglTestCase_035064_2);

#define VkglTestCase_035065_1 "dEQP-GLES3.functional.ubo.single_basic_"
#define VkglTestCase_035065_2 "array.packed.column_major_mat4x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_035065, VkglTestCase_035065_1, VkglTestCase_035065_2);

#define VkglTestCase_035066_1 "dEQP-GLES3.functional.ubo.single_basic_a"
#define VkglTestCase_035066_2 "rray.packed.column_major_mat4x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_035066, VkglTestCase_035066_1, VkglTestCase_035066_2);
