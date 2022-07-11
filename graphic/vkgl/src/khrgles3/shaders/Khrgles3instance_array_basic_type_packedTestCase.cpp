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

#define VkglTestCase_002047_1 "KHR-GLES3.shaders.uniform_block.ins"
#define VkglTestCase_002047_2 "tance_array_basic_type.packed.float"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_002047, VkglTestCase_002047_1, VkglTestCase_002047_2);

#define VkglTestCase_002048_1 "KHR-GLES3.shaders.uniform_block.in"
#define VkglTestCase_002048_2 "stance_array_basic_type.packed.vec2"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_002048, VkglTestCase_002048_1, VkglTestCase_002048_2);

#define VkglTestCase_002049_1 "KHR-GLES3.shaders.uniform_block.in"
#define VkglTestCase_002049_2 "stance_array_basic_type.packed.vec3"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_002049, VkglTestCase_002049_1, VkglTestCase_002049_2);

#define VkglTestCase_002050_1 "KHR-GLES3.shaders.uniform_block.in"
#define VkglTestCase_002050_2 "stance_array_basic_type.packed.vec4"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_002050, VkglTestCase_002050_1, VkglTestCase_002050_2);

#define VkglTestCase_002051_1 "KHR-GLES3.shaders.uniform_block.in"
#define VkglTestCase_002051_2 "stance_array_basic_type.packed.int"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_002051, VkglTestCase_002051_1, VkglTestCase_002051_2);

#define VkglTestCase_002052_1 "KHR-GLES3.shaders.uniform_block.ins"
#define VkglTestCase_002052_2 "tance_array_basic_type.packed.ivec2"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_002052, VkglTestCase_002052_1, VkglTestCase_002052_2);

#define VkglTestCase_002053_1 "KHR-GLES3.shaders.uniform_block.ins"
#define VkglTestCase_002053_2 "tance_array_basic_type.packed.ivec3"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_002053, VkglTestCase_002053_1, VkglTestCase_002053_2);

#define VkglTestCase_002054_1 "KHR-GLES3.shaders.uniform_block.ins"
#define VkglTestCase_002054_2 "tance_array_basic_type.packed.ivec4"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_002054, VkglTestCase_002054_1, VkglTestCase_002054_2);

#define VkglTestCase_002055_1 "KHR-GLES3.shaders.uniform_block.in"
#define VkglTestCase_002055_2 "stance_array_basic_type.packed.uint"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_002055, VkglTestCase_002055_1, VkglTestCase_002055_2);

#define VkglTestCase_002056_1 "KHR-GLES3.shaders.uniform_block.ins"
#define VkglTestCase_002056_2 "tance_array_basic_type.packed.uvec2"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_002056, VkglTestCase_002056_1, VkglTestCase_002056_2);

#define VkglTestCase_002057_1 "KHR-GLES3.shaders.uniform_block.ins"
#define VkglTestCase_002057_2 "tance_array_basic_type.packed.uvec3"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_002057, VkglTestCase_002057_1, VkglTestCase_002057_2);

#define VkglTestCase_002058_1 "KHR-GLES3.shaders.uniform_block.ins"
#define VkglTestCase_002058_2 "tance_array_basic_type.packed.uvec4"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_002058, VkglTestCase_002058_1, VkglTestCase_002058_2);

#define VkglTestCase_002059_1 "KHR-GLES3.shaders.uniform_block.in"
#define VkglTestCase_002059_2 "stance_array_basic_type.packed.bool"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_002059, VkglTestCase_002059_1, VkglTestCase_002059_2);

#define VkglTestCase_002060_1 "KHR-GLES3.shaders.uniform_block.ins"
#define VkglTestCase_002060_2 "tance_array_basic_type.packed.bvec2"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_002060, VkglTestCase_002060_1, VkglTestCase_002060_2);

#define VkglTestCase_002061_1 "KHR-GLES3.shaders.uniform_block.ins"
#define VkglTestCase_002061_2 "tance_array_basic_type.packed.bvec3"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_002061, VkglTestCase_002061_1, VkglTestCase_002061_2);

#define VkglTestCase_002062_1 "KHR-GLES3.shaders.uniform_block.ins"
#define VkglTestCase_002062_2 "tance_array_basic_type.packed.bvec4"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_002062, VkglTestCase_002062_1, VkglTestCase_002062_2);

#define VkglTestCase_002063_1 "KHR-GLES3.shaders.uniform_block.in"
#define VkglTestCase_002063_2 "stance_array_basic_type.packed.mat2"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_002063, VkglTestCase_002063_1, VkglTestCase_002063_2);

#define VkglTestCase_002064_1 "KHR-GLES3.shaders.uniform_block.instanc"
#define VkglTestCase_002064_2 "e_array_basic_type.packed.row_major_mat2"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_002064, VkglTestCase_002064_1, VkglTestCase_002064_2);

#define VkglTestCase_002065_1 "KHR-GLES3.shaders.uniform_block.instance_"
#define VkglTestCase_002065_2 "array_basic_type.packed.column_major_mat2"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_002065, VkglTestCase_002065_1, VkglTestCase_002065_2);

#define VkglTestCase_002066_1 "KHR-GLES3.shaders.uniform_block.in"
#define VkglTestCase_002066_2 "stance_array_basic_type.packed.mat3"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_002066, VkglTestCase_002066_1, VkglTestCase_002066_2);

#define VkglTestCase_002067_1 "KHR-GLES3.shaders.uniform_block.instanc"
#define VkglTestCase_002067_2 "e_array_basic_type.packed.row_major_mat3"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_002067, VkglTestCase_002067_1, VkglTestCase_002067_2);

#define VkglTestCase_002068_1 "KHR-GLES3.shaders.uniform_block.instance_"
#define VkglTestCase_002068_2 "array_basic_type.packed.column_major_mat3"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_002068, VkglTestCase_002068_1, VkglTestCase_002068_2);

#define VkglTestCase_002069_1 "KHR-GLES3.shaders.uniform_block.in"
#define VkglTestCase_002069_2 "stance_array_basic_type.packed.mat4"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_002069, VkglTestCase_002069_1, VkglTestCase_002069_2);

#define VkglTestCase_002070_1 "KHR-GLES3.shaders.uniform_block.instanc"
#define VkglTestCase_002070_2 "e_array_basic_type.packed.row_major_mat4"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_002070, VkglTestCase_002070_1, VkglTestCase_002070_2);

#define VkglTestCase_002071_1 "KHR-GLES3.shaders.uniform_block.instance_"
#define VkglTestCase_002071_2 "array_basic_type.packed.column_major_mat4"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_002071, VkglTestCase_002071_1, VkglTestCase_002071_2);

#define VkglTestCase_002072_1 "KHR-GLES3.shaders.uniform_block.ins"
#define VkglTestCase_002072_2 "tance_array_basic_type.packed.mat2x3"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_002072, VkglTestCase_002072_1, VkglTestCase_002072_2);

#define VkglTestCase_002073_1 "KHR-GLES3.shaders.uniform_block.instance"
#define VkglTestCase_002073_2 "_array_basic_type.packed.row_major_mat2x3"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_002073, VkglTestCase_002073_1, VkglTestCase_002073_2);

#define VkglTestCase_002074_1 "KHR-GLES3.shaders.uniform_block.instance_a"
#define VkglTestCase_002074_2 "rray_basic_type.packed.column_major_mat2x3"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_002074, VkglTestCase_002074_1, VkglTestCase_002074_2);

#define VkglTestCase_002075_1 "KHR-GLES3.shaders.uniform_block.ins"
#define VkglTestCase_002075_2 "tance_array_basic_type.packed.mat2x4"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_002075, VkglTestCase_002075_1, VkglTestCase_002075_2);

#define VkglTestCase_002076_1 "KHR-GLES3.shaders.uniform_block.instance"
#define VkglTestCase_002076_2 "_array_basic_type.packed.row_major_mat2x4"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_002076, VkglTestCase_002076_1, VkglTestCase_002076_2);

#define VkglTestCase_002077_1 "KHR-GLES3.shaders.uniform_block.instance_a"
#define VkglTestCase_002077_2 "rray_basic_type.packed.column_major_mat2x4"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_002077, VkglTestCase_002077_1, VkglTestCase_002077_2);

#define VkglTestCase_002078_1 "KHR-GLES3.shaders.uniform_block.ins"
#define VkglTestCase_002078_2 "tance_array_basic_type.packed.mat3x2"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_002078, VkglTestCase_002078_1, VkglTestCase_002078_2);

#define VkglTestCase_002079_1 "KHR-GLES3.shaders.uniform_block.instance"
#define VkglTestCase_002079_2 "_array_basic_type.packed.row_major_mat3x2"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_002079, VkglTestCase_002079_1, VkglTestCase_002079_2);

#define VkglTestCase_002080_1 "KHR-GLES3.shaders.uniform_block.instance_a"
#define VkglTestCase_002080_2 "rray_basic_type.packed.column_major_mat3x2"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_002080, VkglTestCase_002080_1, VkglTestCase_002080_2);

#define VkglTestCase_002081_1 "KHR-GLES3.shaders.uniform_block.ins"
#define VkglTestCase_002081_2 "tance_array_basic_type.packed.mat3x4"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_002081, VkglTestCase_002081_1, VkglTestCase_002081_2);

#define VkglTestCase_002082_1 "KHR-GLES3.shaders.uniform_block.instance"
#define VkglTestCase_002082_2 "_array_basic_type.packed.row_major_mat3x4"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_002082, VkglTestCase_002082_1, VkglTestCase_002082_2);

#define VkglTestCase_002083_1 "KHR-GLES3.shaders.uniform_block.instance_a"
#define VkglTestCase_002083_2 "rray_basic_type.packed.column_major_mat3x4"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_002083, VkglTestCase_002083_1, VkglTestCase_002083_2);

#define VkglTestCase_002084_1 "KHR-GLES3.shaders.uniform_block.ins"
#define VkglTestCase_002084_2 "tance_array_basic_type.packed.mat4x2"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_002084, VkglTestCase_002084_1, VkglTestCase_002084_2);

#define VkglTestCase_002085_1 "KHR-GLES3.shaders.uniform_block.instance"
#define VkglTestCase_002085_2 "_array_basic_type.packed.row_major_mat4x2"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_002085, VkglTestCase_002085_1, VkglTestCase_002085_2);

#define VkglTestCase_002086_1 "KHR-GLES3.shaders.uniform_block.instance_a"
#define VkglTestCase_002086_2 "rray_basic_type.packed.column_major_mat4x2"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_002086, VkglTestCase_002086_1, VkglTestCase_002086_2);

#define VkglTestCase_002087_1 "KHR-GLES3.shaders.uniform_block.ins"
#define VkglTestCase_002087_2 "tance_array_basic_type.packed.mat4x3"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_002087, VkglTestCase_002087_1, VkglTestCase_002087_2);

#define VkglTestCase_002088_1 "KHR-GLES3.shaders.uniform_block.instance"
#define VkglTestCase_002088_2 "_array_basic_type.packed.row_major_mat4x3"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_002088, VkglTestCase_002088_1, VkglTestCase_002088_2);

#define VkglTestCase_002089_1 "KHR-GLES3.shaders.uniform_block.instance_a"
#define VkglTestCase_002089_2 "rray_basic_type.packed.column_major_mat4x3"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_002089, VkglTestCase_002089_1, VkglTestCase_002089_2);
