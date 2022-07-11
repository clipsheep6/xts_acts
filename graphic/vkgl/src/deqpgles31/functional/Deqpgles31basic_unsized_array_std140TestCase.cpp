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
#include "../ActsDeqpgles310010TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_009074_1 "dEQP-GLES31.functional.ssbo.layou"
#define VkglTestCase_009074_2 "t.basic_unsized_array.std140.float"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009074, VkglTestCase_009074_1, VkglTestCase_009074_2);

#define VkglTestCase_009075_1 "dEQP-GLES31.functional.ssbo.layou"
#define VkglTestCase_009075_2 "t.basic_unsized_array.std140.vec2"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009075, VkglTestCase_009075_1, VkglTestCase_009075_2);

#define VkglTestCase_009076_1 "dEQP-GLES31.functional.ssbo.layou"
#define VkglTestCase_009076_2 "t.basic_unsized_array.std140.vec3"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009076, VkglTestCase_009076_1, VkglTestCase_009076_2);

#define VkglTestCase_009077_1 "dEQP-GLES31.functional.ssbo.layou"
#define VkglTestCase_009077_2 "t.basic_unsized_array.std140.vec4"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009077, VkglTestCase_009077_1, VkglTestCase_009077_2);

#define VkglTestCase_009078_1 "dEQP-GLES31.functional.ssbo.layo"
#define VkglTestCase_009078_2 "ut.basic_unsized_array.std140.int"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009078, VkglTestCase_009078_1, VkglTestCase_009078_2);

#define VkglTestCase_009079_1 "dEQP-GLES31.functional.ssbo.layou"
#define VkglTestCase_009079_2 "t.basic_unsized_array.std140.ivec2"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009079, VkglTestCase_009079_1, VkglTestCase_009079_2);

#define VkglTestCase_009080_1 "dEQP-GLES31.functional.ssbo.layou"
#define VkglTestCase_009080_2 "t.basic_unsized_array.std140.ivec3"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009080, VkglTestCase_009080_1, VkglTestCase_009080_2);

#define VkglTestCase_009081_1 "dEQP-GLES31.functional.ssbo.layou"
#define VkglTestCase_009081_2 "t.basic_unsized_array.std140.ivec4"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009081, VkglTestCase_009081_1, VkglTestCase_009081_2);

#define VkglTestCase_009082_1 "dEQP-GLES31.functional.ssbo.layou"
#define VkglTestCase_009082_2 "t.basic_unsized_array.std140.uint"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009082, VkglTestCase_009082_1, VkglTestCase_009082_2);

#define VkglTestCase_009083_1 "dEQP-GLES31.functional.ssbo.layou"
#define VkglTestCase_009083_2 "t.basic_unsized_array.std140.uvec2"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009083, VkglTestCase_009083_1, VkglTestCase_009083_2);

#define VkglTestCase_009084_1 "dEQP-GLES31.functional.ssbo.layou"
#define VkglTestCase_009084_2 "t.basic_unsized_array.std140.uvec3"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009084, VkglTestCase_009084_1, VkglTestCase_009084_2);

#define VkglTestCase_009085_1 "dEQP-GLES31.functional.ssbo.layou"
#define VkglTestCase_009085_2 "t.basic_unsized_array.std140.uvec4"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009085, VkglTestCase_009085_1, VkglTestCase_009085_2);

#define VkglTestCase_009086_1 "dEQP-GLES31.functional.ssbo.layou"
#define VkglTestCase_009086_2 "t.basic_unsized_array.std140.bool"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009086, VkglTestCase_009086_1, VkglTestCase_009086_2);

#define VkglTestCase_009087_1 "dEQP-GLES31.functional.ssbo.layou"
#define VkglTestCase_009087_2 "t.basic_unsized_array.std140.bvec2"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009087, VkglTestCase_009087_1, VkglTestCase_009087_2);

#define VkglTestCase_009088_1 "dEQP-GLES31.functional.ssbo.layou"
#define VkglTestCase_009088_2 "t.basic_unsized_array.std140.bvec3"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009088, VkglTestCase_009088_1, VkglTestCase_009088_2);

#define VkglTestCase_009089_1 "dEQP-GLES31.functional.ssbo.layou"
#define VkglTestCase_009089_2 "t.basic_unsized_array.std140.bvec4"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009089, VkglTestCase_009089_1, VkglTestCase_009089_2);

#define VkglTestCase_009090_1 "dEQP-GLES31.functional.ssbo.layou"
#define VkglTestCase_009090_2 "t.basic_unsized_array.std140.mat2"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009090, VkglTestCase_009090_1, VkglTestCase_009090_2);

#define VkglTestCase_009091_1 "dEQP-GLES31.functional.ssbo.layout.bas"
#define VkglTestCase_009091_2 "ic_unsized_array.std140.row_major_mat2"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009091, VkglTestCase_009091_1, VkglTestCase_009091_2);

#define VkglTestCase_009092_1 "dEQP-GLES31.functional.ssbo.layout.basi"
#define VkglTestCase_009092_2 "c_unsized_array.std140.column_major_mat2"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009092, VkglTestCase_009092_1, VkglTestCase_009092_2);

#define VkglTestCase_009093_1 "dEQP-GLES31.functional.ssbo.layou"
#define VkglTestCase_009093_2 "t.basic_unsized_array.std140.mat3"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009093, VkglTestCase_009093_1, VkglTestCase_009093_2);

#define VkglTestCase_009094_1 "dEQP-GLES31.functional.ssbo.layout.bas"
#define VkglTestCase_009094_2 "ic_unsized_array.std140.row_major_mat3"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009094, VkglTestCase_009094_1, VkglTestCase_009094_2);

#define VkglTestCase_009095_1 "dEQP-GLES31.functional.ssbo.layout.basi"
#define VkglTestCase_009095_2 "c_unsized_array.std140.column_major_mat3"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009095, VkglTestCase_009095_1, VkglTestCase_009095_2);

#define VkglTestCase_009096_1 "dEQP-GLES31.functional.ssbo.layou"
#define VkglTestCase_009096_2 "t.basic_unsized_array.std140.mat4"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009096, VkglTestCase_009096_1, VkglTestCase_009096_2);

#define VkglTestCase_009097_1 "dEQP-GLES31.functional.ssbo.layout.bas"
#define VkglTestCase_009097_2 "ic_unsized_array.std140.row_major_mat4"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009097, VkglTestCase_009097_1, VkglTestCase_009097_2);

#define VkglTestCase_009098_1 "dEQP-GLES31.functional.ssbo.layout.basi"
#define VkglTestCase_009098_2 "c_unsized_array.std140.column_major_mat4"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009098, VkglTestCase_009098_1, VkglTestCase_009098_2);

#define VkglTestCase_009099_1 "dEQP-GLES31.functional.ssbo.layout"
#define VkglTestCase_009099_2 ".basic_unsized_array.std140.mat2x3"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009099, VkglTestCase_009099_1, VkglTestCase_009099_2);

#define VkglTestCase_009100_1 "dEQP-GLES31.functional.ssbo.layout.basi"
#define VkglTestCase_009100_2 "c_unsized_array.std140.row_major_mat2x3"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009100, VkglTestCase_009100_1, VkglTestCase_009100_2);

#define VkglTestCase_009101_1 "dEQP-GLES31.functional.ssbo.layout.basic"
#define VkglTestCase_009101_2 "_unsized_array.std140.column_major_mat2x3"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009101, VkglTestCase_009101_1, VkglTestCase_009101_2);

#define VkglTestCase_009102_1 "dEQP-GLES31.functional.ssbo.layout"
#define VkglTestCase_009102_2 ".basic_unsized_array.std140.mat2x4"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009102, VkglTestCase_009102_1, VkglTestCase_009102_2);

#define VkglTestCase_009103_1 "dEQP-GLES31.functional.ssbo.layout.basi"
#define VkglTestCase_009103_2 "c_unsized_array.std140.row_major_mat2x4"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009103, VkglTestCase_009103_1, VkglTestCase_009103_2);

#define VkglTestCase_009104_1 "dEQP-GLES31.functional.ssbo.layout.basic"
#define VkglTestCase_009104_2 "_unsized_array.std140.column_major_mat2x4"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009104, VkglTestCase_009104_1, VkglTestCase_009104_2);

#define VkglTestCase_009105_1 "dEQP-GLES31.functional.ssbo.layout"
#define VkglTestCase_009105_2 ".basic_unsized_array.std140.mat3x2"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009105, VkglTestCase_009105_1, VkglTestCase_009105_2);

#define VkglTestCase_009106_1 "dEQP-GLES31.functional.ssbo.layout.basi"
#define VkglTestCase_009106_2 "c_unsized_array.std140.row_major_mat3x2"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009106, VkglTestCase_009106_1, VkglTestCase_009106_2);

#define VkglTestCase_009107_1 "dEQP-GLES31.functional.ssbo.layout.basic"
#define VkglTestCase_009107_2 "_unsized_array.std140.column_major_mat3x2"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009107, VkglTestCase_009107_1, VkglTestCase_009107_2);

#define VkglTestCase_009108_1 "dEQP-GLES31.functional.ssbo.layout"
#define VkglTestCase_009108_2 ".basic_unsized_array.std140.mat3x4"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009108, VkglTestCase_009108_1, VkglTestCase_009108_2);

#define VkglTestCase_009109_1 "dEQP-GLES31.functional.ssbo.layout.basi"
#define VkglTestCase_009109_2 "c_unsized_array.std140.row_major_mat3x4"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009109, VkglTestCase_009109_1, VkglTestCase_009109_2);

#define VkglTestCase_009110_1 "dEQP-GLES31.functional.ssbo.layout.basic"
#define VkglTestCase_009110_2 "_unsized_array.std140.column_major_mat3x4"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009110, VkglTestCase_009110_1, VkglTestCase_009110_2);

#define VkglTestCase_009111_1 "dEQP-GLES31.functional.ssbo.layout"
#define VkglTestCase_009111_2 ".basic_unsized_array.std140.mat4x2"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009111, VkglTestCase_009111_1, VkglTestCase_009111_2);

#define VkglTestCase_009112_1 "dEQP-GLES31.functional.ssbo.layout.basi"
#define VkglTestCase_009112_2 "c_unsized_array.std140.row_major_mat4x2"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009112, VkglTestCase_009112_1, VkglTestCase_009112_2);

#define VkglTestCase_009113_1 "dEQP-GLES31.functional.ssbo.layout.basic"
#define VkglTestCase_009113_2 "_unsized_array.std140.column_major_mat4x2"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009113, VkglTestCase_009113_1, VkglTestCase_009113_2);

#define VkglTestCase_009114_1 "dEQP-GLES31.functional.ssbo.layout"
#define VkglTestCase_009114_2 ".basic_unsized_array.std140.mat4x3"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009114, VkglTestCase_009114_1, VkglTestCase_009114_2);

#define VkglTestCase_009115_1 "dEQP-GLES31.functional.ssbo.layout.basi"
#define VkglTestCase_009115_2 "c_unsized_array.std140.row_major_mat4x3"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009115, VkglTestCase_009115_1, VkglTestCase_009115_2);

#define VkglTestCase_009116_1 "dEQP-GLES31.functional.ssbo.layout.basic"
#define VkglTestCase_009116_2 "_unsized_array.std140.column_major_mat4x3"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009116, VkglTestCase_009116_1, VkglTestCase_009116_2);
