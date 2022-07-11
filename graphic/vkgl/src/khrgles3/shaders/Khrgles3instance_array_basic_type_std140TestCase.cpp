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

#define VkglTestCase_002090_1 "KHR-GLES3.shaders.uniform_block.ins"
#define VkglTestCase_002090_2 "tance_array_basic_type.std140.float"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_002090, VkglTestCase_002090_1, VkglTestCase_002090_2);

#define VkglTestCase_002091_1 "KHR-GLES3.shaders.uniform_block.in"
#define VkglTestCase_002091_2 "stance_array_basic_type.std140.vec2"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_002091, VkglTestCase_002091_1, VkglTestCase_002091_2);

#define VkglTestCase_002092_1 "KHR-GLES3.shaders.uniform_block.in"
#define VkglTestCase_002092_2 "stance_array_basic_type.std140.vec3"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_002092, VkglTestCase_002092_1, VkglTestCase_002092_2);

#define VkglTestCase_002093_1 "KHR-GLES3.shaders.uniform_block.in"
#define VkglTestCase_002093_2 "stance_array_basic_type.std140.vec4"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_002093, VkglTestCase_002093_1, VkglTestCase_002093_2);

#define VkglTestCase_002094_1 "KHR-GLES3.shaders.uniform_block.in"
#define VkglTestCase_002094_2 "stance_array_basic_type.std140.int"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_002094, VkglTestCase_002094_1, VkglTestCase_002094_2);

#define VkglTestCase_002095_1 "KHR-GLES3.shaders.uniform_block.ins"
#define VkglTestCase_002095_2 "tance_array_basic_type.std140.ivec2"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_002095, VkglTestCase_002095_1, VkglTestCase_002095_2);

#define VkglTestCase_002096_1 "KHR-GLES3.shaders.uniform_block.ins"
#define VkglTestCase_002096_2 "tance_array_basic_type.std140.ivec3"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_002096, VkglTestCase_002096_1, VkglTestCase_002096_2);

#define VkglTestCase_002097_1 "KHR-GLES3.shaders.uniform_block.ins"
#define VkglTestCase_002097_2 "tance_array_basic_type.std140.ivec4"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_002097, VkglTestCase_002097_1, VkglTestCase_002097_2);

#define VkglTestCase_002098_1 "KHR-GLES3.shaders.uniform_block.in"
#define VkglTestCase_002098_2 "stance_array_basic_type.std140.uint"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_002098, VkglTestCase_002098_1, VkglTestCase_002098_2);

#define VkglTestCase_002099_1 "KHR-GLES3.shaders.uniform_block.ins"
#define VkglTestCase_002099_2 "tance_array_basic_type.std140.uvec2"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_002099, VkglTestCase_002099_1, VkglTestCase_002099_2);

#define VkglTestCase_002100_1 "KHR-GLES3.shaders.uniform_block.ins"
#define VkglTestCase_002100_2 "tance_array_basic_type.std140.uvec3"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_002100, VkglTestCase_002100_1, VkglTestCase_002100_2);

#define VkglTestCase_002101_1 "KHR-GLES3.shaders.uniform_block.ins"
#define VkglTestCase_002101_2 "tance_array_basic_type.std140.uvec4"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_002101, VkglTestCase_002101_1, VkglTestCase_002101_2);

#define VkglTestCase_002102_1 "KHR-GLES3.shaders.uniform_block.in"
#define VkglTestCase_002102_2 "stance_array_basic_type.std140.bool"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_002102, VkglTestCase_002102_1, VkglTestCase_002102_2);

#define VkglTestCase_002103_1 "KHR-GLES3.shaders.uniform_block.ins"
#define VkglTestCase_002103_2 "tance_array_basic_type.std140.bvec2"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_002103, VkglTestCase_002103_1, VkglTestCase_002103_2);

#define VkglTestCase_002104_1 "KHR-GLES3.shaders.uniform_block.ins"
#define VkglTestCase_002104_2 "tance_array_basic_type.std140.bvec3"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_002104, VkglTestCase_002104_1, VkglTestCase_002104_2);

#define VkglTestCase_002105_1 "KHR-GLES3.shaders.uniform_block.ins"
#define VkglTestCase_002105_2 "tance_array_basic_type.std140.bvec4"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_002105, VkglTestCase_002105_1, VkglTestCase_002105_2);

#define VkglTestCase_002106_1 "KHR-GLES3.shaders.uniform_block.in"
#define VkglTestCase_002106_2 "stance_array_basic_type.std140.mat2"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_002106, VkglTestCase_002106_1, VkglTestCase_002106_2);

#define VkglTestCase_002107_1 "KHR-GLES3.shaders.uniform_block.instanc"
#define VkglTestCase_002107_2 "e_array_basic_type.std140.row_major_mat2"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_002107, VkglTestCase_002107_1, VkglTestCase_002107_2);

#define VkglTestCase_002108_1 "KHR-GLES3.shaders.uniform_block.instance_"
#define VkglTestCase_002108_2 "array_basic_type.std140.column_major_mat2"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_002108, VkglTestCase_002108_1, VkglTestCase_002108_2);

#define VkglTestCase_002109_1 "KHR-GLES3.shaders.uniform_block.in"
#define VkglTestCase_002109_2 "stance_array_basic_type.std140.mat3"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_002109, VkglTestCase_002109_1, VkglTestCase_002109_2);

#define VkglTestCase_002110_1 "KHR-GLES3.shaders.uniform_block.instanc"
#define VkglTestCase_002110_2 "e_array_basic_type.std140.row_major_mat3"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_002110, VkglTestCase_002110_1, VkglTestCase_002110_2);

#define VkglTestCase_002111_1 "KHR-GLES3.shaders.uniform_block.instance_"
#define VkglTestCase_002111_2 "array_basic_type.std140.column_major_mat3"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_002111, VkglTestCase_002111_1, VkglTestCase_002111_2);

#define VkglTestCase_002112_1 "KHR-GLES3.shaders.uniform_block.in"
#define VkglTestCase_002112_2 "stance_array_basic_type.std140.mat4"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_002112, VkglTestCase_002112_1, VkglTestCase_002112_2);

#define VkglTestCase_002113_1 "KHR-GLES3.shaders.uniform_block.instanc"
#define VkglTestCase_002113_2 "e_array_basic_type.std140.row_major_mat4"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_002113, VkglTestCase_002113_1, VkglTestCase_002113_2);

#define VkglTestCase_002114_1 "KHR-GLES3.shaders.uniform_block.instance_"
#define VkglTestCase_002114_2 "array_basic_type.std140.column_major_mat4"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_002114, VkglTestCase_002114_1, VkglTestCase_002114_2);

#define VkglTestCase_002115_1 "KHR-GLES3.shaders.uniform_block.ins"
#define VkglTestCase_002115_2 "tance_array_basic_type.std140.mat2x3"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_002115, VkglTestCase_002115_1, VkglTestCase_002115_2);

#define VkglTestCase_002116_1 "KHR-GLES3.shaders.uniform_block.instance"
#define VkglTestCase_002116_2 "_array_basic_type.std140.row_major_mat2x3"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_002116, VkglTestCase_002116_1, VkglTestCase_002116_2);

#define VkglTestCase_002117_1 "KHR-GLES3.shaders.uniform_block.instance_a"
#define VkglTestCase_002117_2 "rray_basic_type.std140.column_major_mat2x3"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_002117, VkglTestCase_002117_1, VkglTestCase_002117_2);

#define VkglTestCase_002118_1 "KHR-GLES3.shaders.uniform_block.ins"
#define VkglTestCase_002118_2 "tance_array_basic_type.std140.mat2x4"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_002118, VkglTestCase_002118_1, VkglTestCase_002118_2);

#define VkglTestCase_002119_1 "KHR-GLES3.shaders.uniform_block.instance"
#define VkglTestCase_002119_2 "_array_basic_type.std140.row_major_mat2x4"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_002119, VkglTestCase_002119_1, VkglTestCase_002119_2);

#define VkglTestCase_002120_1 "KHR-GLES3.shaders.uniform_block.instance_a"
#define VkglTestCase_002120_2 "rray_basic_type.std140.column_major_mat2x4"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_002120, VkglTestCase_002120_1, VkglTestCase_002120_2);

#define VkglTestCase_002121_1 "KHR-GLES3.shaders.uniform_block.ins"
#define VkglTestCase_002121_2 "tance_array_basic_type.std140.mat3x2"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_002121, VkglTestCase_002121_1, VkglTestCase_002121_2);

#define VkglTestCase_002122_1 "KHR-GLES3.shaders.uniform_block.instance"
#define VkglTestCase_002122_2 "_array_basic_type.std140.row_major_mat3x2"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_002122, VkglTestCase_002122_1, VkglTestCase_002122_2);

#define VkglTestCase_002123_1 "KHR-GLES3.shaders.uniform_block.instance_a"
#define VkglTestCase_002123_2 "rray_basic_type.std140.column_major_mat3x2"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_002123, VkglTestCase_002123_1, VkglTestCase_002123_2);

#define VkglTestCase_002124_1 "KHR-GLES3.shaders.uniform_block.ins"
#define VkglTestCase_002124_2 "tance_array_basic_type.std140.mat3x4"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_002124, VkglTestCase_002124_1, VkglTestCase_002124_2);

#define VkglTestCase_002125_1 "KHR-GLES3.shaders.uniform_block.instance"
#define VkglTestCase_002125_2 "_array_basic_type.std140.row_major_mat3x4"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_002125, VkglTestCase_002125_1, VkglTestCase_002125_2);

#define VkglTestCase_002126_1 "KHR-GLES3.shaders.uniform_block.instance_a"
#define VkglTestCase_002126_2 "rray_basic_type.std140.column_major_mat3x4"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_002126, VkglTestCase_002126_1, VkglTestCase_002126_2);

#define VkglTestCase_002127_1 "KHR-GLES3.shaders.uniform_block.ins"
#define VkglTestCase_002127_2 "tance_array_basic_type.std140.mat4x2"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_002127, VkglTestCase_002127_1, VkglTestCase_002127_2);

#define VkglTestCase_002128_1 "KHR-GLES3.shaders.uniform_block.instance"
#define VkglTestCase_002128_2 "_array_basic_type.std140.row_major_mat4x2"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_002128, VkglTestCase_002128_1, VkglTestCase_002128_2);

#define VkglTestCase_002129_1 "KHR-GLES3.shaders.uniform_block.instance_a"
#define VkglTestCase_002129_2 "rray_basic_type.std140.column_major_mat4x2"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_002129, VkglTestCase_002129_1, VkglTestCase_002129_2);

#define VkglTestCase_002130_1 "KHR-GLES3.shaders.uniform_block.ins"
#define VkglTestCase_002130_2 "tance_array_basic_type.std140.mat4x3"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_002130, VkglTestCase_002130_1, VkglTestCase_002130_2);

#define VkglTestCase_002131_1 "KHR-GLES3.shaders.uniform_block.instance"
#define VkglTestCase_002131_2 "_array_basic_type.std140.row_major_mat4x3"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_002131, VkglTestCase_002131_1, VkglTestCase_002131_2);

#define VkglTestCase_002132_1 "KHR-GLES3.shaders.uniform_block.instance_a"
#define VkglTestCase_002132_2 "rray_basic_type.std140.column_major_mat4x3"
SHRINK_HWTEST_F(ActsKhrgles30003TestSuite, TestCase_002132, VkglTestCase_002132_1, VkglTestCase_002132_2);
