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
#include "../Khrgles3BaseFunc.h"
#include "../ActsKhrgles30003TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_002004_1 "KHR-GLES3.shaders.uniform_block.ins"
#define VkglTestCase_002004_2 "tance_array_basic_type.shared.float"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_002004, VkglTestCase_002004_1, VkglTestCase_002004_2);

#define VkglTestCase_002005_1 "KHR-GLES3.shaders.uniform_block.in"
#define VkglTestCase_002005_2 "stance_array_basic_type.shared.vec2"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_002005, VkglTestCase_002005_1, VkglTestCase_002005_2);

#define VkglTestCase_002006_1 "KHR-GLES3.shaders.uniform_block.in"
#define VkglTestCase_002006_2 "stance_array_basic_type.shared.vec3"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_002006, VkglTestCase_002006_1, VkglTestCase_002006_2);

#define VkglTestCase_002007_1 "KHR-GLES3.shaders.uniform_block.in"
#define VkglTestCase_002007_2 "stance_array_basic_type.shared.vec4"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_002007, VkglTestCase_002007_1, VkglTestCase_002007_2);

#define VkglTestCase_002008_1 "KHR-GLES3.shaders.uniform_block.in"
#define VkglTestCase_002008_2 "stance_array_basic_type.shared.int"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_002008, VkglTestCase_002008_1, VkglTestCase_002008_2);

#define VkglTestCase_002009_1 "KHR-GLES3.shaders.uniform_block.ins"
#define VkglTestCase_002009_2 "tance_array_basic_type.shared.ivec2"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_002009, VkglTestCase_002009_1, VkglTestCase_002009_2);

#define VkglTestCase_002010_1 "KHR-GLES3.shaders.uniform_block.ins"
#define VkglTestCase_002010_2 "tance_array_basic_type.shared.ivec3"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_002010, VkglTestCase_002010_1, VkglTestCase_002010_2);

#define VkglTestCase_002011_1 "KHR-GLES3.shaders.uniform_block.ins"
#define VkglTestCase_002011_2 "tance_array_basic_type.shared.ivec4"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_002011, VkglTestCase_002011_1, VkglTestCase_002011_2);

#define VkglTestCase_002012_1 "KHR-GLES3.shaders.uniform_block.in"
#define VkglTestCase_002012_2 "stance_array_basic_type.shared.uint"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_002012, VkglTestCase_002012_1, VkglTestCase_002012_2);

#define VkglTestCase_002013_1 "KHR-GLES3.shaders.uniform_block.ins"
#define VkglTestCase_002013_2 "tance_array_basic_type.shared.uvec2"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_002013, VkglTestCase_002013_1, VkglTestCase_002013_2);

#define VkglTestCase_002014_1 "KHR-GLES3.shaders.uniform_block.ins"
#define VkglTestCase_002014_2 "tance_array_basic_type.shared.uvec3"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_002014, VkglTestCase_002014_1, VkglTestCase_002014_2);

#define VkglTestCase_002015_1 "KHR-GLES3.shaders.uniform_block.ins"
#define VkglTestCase_002015_2 "tance_array_basic_type.shared.uvec4"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_002015, VkglTestCase_002015_1, VkglTestCase_002015_2);

#define VkglTestCase_002016_1 "KHR-GLES3.shaders.uniform_block.in"
#define VkglTestCase_002016_2 "stance_array_basic_type.shared.bool"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_002016, VkglTestCase_002016_1, VkglTestCase_002016_2);

#define VkglTestCase_002017_1 "KHR-GLES3.shaders.uniform_block.ins"
#define VkglTestCase_002017_2 "tance_array_basic_type.shared.bvec2"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_002017, VkglTestCase_002017_1, VkglTestCase_002017_2);

#define VkglTestCase_002018_1 "KHR-GLES3.shaders.uniform_block.ins"
#define VkglTestCase_002018_2 "tance_array_basic_type.shared.bvec3"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_002018, VkglTestCase_002018_1, VkglTestCase_002018_2);

#define VkglTestCase_002019_1 "KHR-GLES3.shaders.uniform_block.ins"
#define VkglTestCase_002019_2 "tance_array_basic_type.shared.bvec4"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_002019, VkglTestCase_002019_1, VkglTestCase_002019_2);

#define VkglTestCase_002020_1 "KHR-GLES3.shaders.uniform_block.in"
#define VkglTestCase_002020_2 "stance_array_basic_type.shared.mat2"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_002020, VkglTestCase_002020_1, VkglTestCase_002020_2);

#define VkglTestCase_002021_1 "KHR-GLES3.shaders.uniform_block.instanc"
#define VkglTestCase_002021_2 "e_array_basic_type.shared.row_major_mat2"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_002021, VkglTestCase_002021_1, VkglTestCase_002021_2);

#define VkglTestCase_002022_1 "KHR-GLES3.shaders.uniform_block.instance_"
#define VkglTestCase_002022_2 "array_basic_type.shared.column_major_mat2"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_002022, VkglTestCase_002022_1, VkglTestCase_002022_2);

#define VkglTestCase_002023_1 "KHR-GLES3.shaders.uniform_block.in"
#define VkglTestCase_002023_2 "stance_array_basic_type.shared.mat3"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_002023, VkglTestCase_002023_1, VkglTestCase_002023_2);

#define VkglTestCase_002024_1 "KHR-GLES3.shaders.uniform_block.instanc"
#define VkglTestCase_002024_2 "e_array_basic_type.shared.row_major_mat3"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_002024, VkglTestCase_002024_1, VkglTestCase_002024_2);

#define VkglTestCase_002025_1 "KHR-GLES3.shaders.uniform_block.instance_"
#define VkglTestCase_002025_2 "array_basic_type.shared.column_major_mat3"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_002025, VkglTestCase_002025_1, VkglTestCase_002025_2);

#define VkglTestCase_002026_1 "KHR-GLES3.shaders.uniform_block.in"
#define VkglTestCase_002026_2 "stance_array_basic_type.shared.mat4"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_002026, VkglTestCase_002026_1, VkglTestCase_002026_2);

#define VkglTestCase_002027_1 "KHR-GLES3.shaders.uniform_block.instanc"
#define VkglTestCase_002027_2 "e_array_basic_type.shared.row_major_mat4"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_002027, VkglTestCase_002027_1, VkglTestCase_002027_2);

#define VkglTestCase_002028_1 "KHR-GLES3.shaders.uniform_block.instance_"
#define VkglTestCase_002028_2 "array_basic_type.shared.column_major_mat4"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_002028, VkglTestCase_002028_1, VkglTestCase_002028_2);

#define VkglTestCase_002029_1 "KHR-GLES3.shaders.uniform_block.ins"
#define VkglTestCase_002029_2 "tance_array_basic_type.shared.mat2x3"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_002029, VkglTestCase_002029_1, VkglTestCase_002029_2);

#define VkglTestCase_002030_1 "KHR-GLES3.shaders.uniform_block.instance"
#define VkglTestCase_002030_2 "_array_basic_type.shared.row_major_mat2x3"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_002030, VkglTestCase_002030_1, VkglTestCase_002030_2);

#define VkglTestCase_002031_1 "KHR-GLES3.shaders.uniform_block.instance_a"
#define VkglTestCase_002031_2 "rray_basic_type.shared.column_major_mat2x3"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_002031, VkglTestCase_002031_1, VkglTestCase_002031_2);

#define VkglTestCase_002032_1 "KHR-GLES3.shaders.uniform_block.ins"
#define VkglTestCase_002032_2 "tance_array_basic_type.shared.mat2x4"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_002032, VkglTestCase_002032_1, VkglTestCase_002032_2);

#define VkglTestCase_002033_1 "KHR-GLES3.shaders.uniform_block.instance"
#define VkglTestCase_002033_2 "_array_basic_type.shared.row_major_mat2x4"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_002033, VkglTestCase_002033_1, VkglTestCase_002033_2);

#define VkglTestCase_002034_1 "KHR-GLES3.shaders.uniform_block.instance_a"
#define VkglTestCase_002034_2 "rray_basic_type.shared.column_major_mat2x4"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_002034, VkglTestCase_002034_1, VkglTestCase_002034_2);

#define VkglTestCase_002035_1 "KHR-GLES3.shaders.uniform_block.ins"
#define VkglTestCase_002035_2 "tance_array_basic_type.shared.mat3x2"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_002035, VkglTestCase_002035_1, VkglTestCase_002035_2);

#define VkglTestCase_002036_1 "KHR-GLES3.shaders.uniform_block.instance"
#define VkglTestCase_002036_2 "_array_basic_type.shared.row_major_mat3x2"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_002036, VkglTestCase_002036_1, VkglTestCase_002036_2);

#define VkglTestCase_002037_1 "KHR-GLES3.shaders.uniform_block.instance_a"
#define VkglTestCase_002037_2 "rray_basic_type.shared.column_major_mat3x2"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_002037, VkglTestCase_002037_1, VkglTestCase_002037_2);

#define VkglTestCase_002038_1 "KHR-GLES3.shaders.uniform_block.ins"
#define VkglTestCase_002038_2 "tance_array_basic_type.shared.mat3x4"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_002038, VkglTestCase_002038_1, VkglTestCase_002038_2);

#define VkglTestCase_002039_1 "KHR-GLES3.shaders.uniform_block.instance"
#define VkglTestCase_002039_2 "_array_basic_type.shared.row_major_mat3x4"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_002039, VkglTestCase_002039_1, VkglTestCase_002039_2);

#define VkglTestCase_002040_1 "KHR-GLES3.shaders.uniform_block.instance_a"
#define VkglTestCase_002040_2 "rray_basic_type.shared.column_major_mat3x4"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_002040, VkglTestCase_002040_1, VkglTestCase_002040_2);

#define VkglTestCase_002041_1 "KHR-GLES3.shaders.uniform_block.ins"
#define VkglTestCase_002041_2 "tance_array_basic_type.shared.mat4x2"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_002041, VkglTestCase_002041_1, VkglTestCase_002041_2);

#define VkglTestCase_002042_1 "KHR-GLES3.shaders.uniform_block.instance"
#define VkglTestCase_002042_2 "_array_basic_type.shared.row_major_mat4x2"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_002042, VkglTestCase_002042_1, VkglTestCase_002042_2);

#define VkglTestCase_002043_1 "KHR-GLES3.shaders.uniform_block.instance_a"
#define VkglTestCase_002043_2 "rray_basic_type.shared.column_major_mat4x2"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_002043, VkglTestCase_002043_1, VkglTestCase_002043_2);

#define VkglTestCase_002044_1 "KHR-GLES3.shaders.uniform_block.ins"
#define VkglTestCase_002044_2 "tance_array_basic_type.shared.mat4x3"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_002044, VkglTestCase_002044_1, VkglTestCase_002044_2);

#define VkglTestCase_002045_1 "KHR-GLES3.shaders.uniform_block.instance"
#define VkglTestCase_002045_2 "_array_basic_type.shared.row_major_mat4x3"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_002045, VkglTestCase_002045_1, VkglTestCase_002045_2);

#define VkglTestCase_002046_1 "KHR-GLES3.shaders.uniform_block.instance_a"
#define VkglTestCase_002046_2 "rray_basic_type.shared.column_major_mat4x3"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_002046, VkglTestCase_002046_1, VkglTestCase_002046_2);
