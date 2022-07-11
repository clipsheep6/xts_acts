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

#define VkglTestCase_008859_1 "dEQP-GLES31.functional.ssbo.layou"
#define VkglTestCase_008859_2 "t.single_basic_array.packed.float"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008859, VkglTestCase_008859_1, VkglTestCase_008859_2);

#define VkglTestCase_008860_1 "dEQP-GLES31.functional.ssbo.layo"
#define VkglTestCase_008860_2 "ut.single_basic_array.packed.vec2"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008860, VkglTestCase_008860_1, VkglTestCase_008860_2);

#define VkglTestCase_008861_1 "dEQP-GLES31.functional.ssbo.layo"
#define VkglTestCase_008861_2 "ut.single_basic_array.packed.vec3"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008861, VkglTestCase_008861_1, VkglTestCase_008861_2);

#define VkglTestCase_008862_1 "dEQP-GLES31.functional.ssbo.layo"
#define VkglTestCase_008862_2 "ut.single_basic_array.packed.vec4"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008862, VkglTestCase_008862_1, VkglTestCase_008862_2);

#define VkglTestCase_008863_1 "dEQP-GLES31.functional.ssbo.layo"
#define VkglTestCase_008863_2 "ut.single_basic_array.packed.int"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008863, VkglTestCase_008863_1, VkglTestCase_008863_2);

#define VkglTestCase_008864_1 "dEQP-GLES31.functional.ssbo.layou"
#define VkglTestCase_008864_2 "t.single_basic_array.packed.ivec2"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008864, VkglTestCase_008864_1, VkglTestCase_008864_2);

#define VkglTestCase_008865_1 "dEQP-GLES31.functional.ssbo.layou"
#define VkglTestCase_008865_2 "t.single_basic_array.packed.ivec3"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008865, VkglTestCase_008865_1, VkglTestCase_008865_2);

#define VkglTestCase_008866_1 "dEQP-GLES31.functional.ssbo.layou"
#define VkglTestCase_008866_2 "t.single_basic_array.packed.ivec4"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008866, VkglTestCase_008866_1, VkglTestCase_008866_2);

#define VkglTestCase_008867_1 "dEQP-GLES31.functional.ssbo.layo"
#define VkglTestCase_008867_2 "ut.single_basic_array.packed.uint"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008867, VkglTestCase_008867_1, VkglTestCase_008867_2);

#define VkglTestCase_008868_1 "dEQP-GLES31.functional.ssbo.layou"
#define VkglTestCase_008868_2 "t.single_basic_array.packed.uvec2"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008868, VkglTestCase_008868_1, VkglTestCase_008868_2);

#define VkglTestCase_008869_1 "dEQP-GLES31.functional.ssbo.layou"
#define VkglTestCase_008869_2 "t.single_basic_array.packed.uvec3"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008869, VkglTestCase_008869_1, VkglTestCase_008869_2);

#define VkglTestCase_008870_1 "dEQP-GLES31.functional.ssbo.layou"
#define VkglTestCase_008870_2 "t.single_basic_array.packed.uvec4"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008870, VkglTestCase_008870_1, VkglTestCase_008870_2);

#define VkglTestCase_008871_1 "dEQP-GLES31.functional.ssbo.layo"
#define VkglTestCase_008871_2 "ut.single_basic_array.packed.bool"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008871, VkglTestCase_008871_1, VkglTestCase_008871_2);

#define VkglTestCase_008872_1 "dEQP-GLES31.functional.ssbo.layou"
#define VkglTestCase_008872_2 "t.single_basic_array.packed.bvec2"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008872, VkglTestCase_008872_1, VkglTestCase_008872_2);

#define VkglTestCase_008873_1 "dEQP-GLES31.functional.ssbo.layou"
#define VkglTestCase_008873_2 "t.single_basic_array.packed.bvec3"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008873, VkglTestCase_008873_1, VkglTestCase_008873_2);

#define VkglTestCase_008874_1 "dEQP-GLES31.functional.ssbo.layou"
#define VkglTestCase_008874_2 "t.single_basic_array.packed.bvec4"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008874, VkglTestCase_008874_1, VkglTestCase_008874_2);

#define VkglTestCase_008875_1 "dEQP-GLES31.functional.ssbo.layo"
#define VkglTestCase_008875_2 "ut.single_basic_array.packed.mat2"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008875, VkglTestCase_008875_1, VkglTestCase_008875_2);

#define VkglTestCase_008876_1 "dEQP-GLES31.functional.ssbo.layout.si"
#define VkglTestCase_008876_2 "ngle_basic_array.packed.row_major_mat2"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008876, VkglTestCase_008876_1, VkglTestCase_008876_2);

#define VkglTestCase_008877_1 "dEQP-GLES31.functional.ssbo.layout.sing"
#define VkglTestCase_008877_2 "le_basic_array.packed.column_major_mat2"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008877, VkglTestCase_008877_1, VkglTestCase_008877_2);

#define VkglTestCase_008878_1 "dEQP-GLES31.functional.ssbo.layo"
#define VkglTestCase_008878_2 "ut.single_basic_array.packed.mat3"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008878, VkglTestCase_008878_1, VkglTestCase_008878_2);

#define VkglTestCase_008879_1 "dEQP-GLES31.functional.ssbo.layout.si"
#define VkglTestCase_008879_2 "ngle_basic_array.packed.row_major_mat3"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008879, VkglTestCase_008879_1, VkglTestCase_008879_2);

#define VkglTestCase_008880_1 "dEQP-GLES31.functional.ssbo.layout.sing"
#define VkglTestCase_008880_2 "le_basic_array.packed.column_major_mat3"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008880, VkglTestCase_008880_1, VkglTestCase_008880_2);

#define VkglTestCase_008881_1 "dEQP-GLES31.functional.ssbo.layo"
#define VkglTestCase_008881_2 "ut.single_basic_array.packed.mat4"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008881, VkglTestCase_008881_1, VkglTestCase_008881_2);

#define VkglTestCase_008882_1 "dEQP-GLES31.functional.ssbo.layout.si"
#define VkglTestCase_008882_2 "ngle_basic_array.packed.row_major_mat4"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008882, VkglTestCase_008882_1, VkglTestCase_008882_2);

#define VkglTestCase_008883_1 "dEQP-GLES31.functional.ssbo.layout.sing"
#define VkglTestCase_008883_2 "le_basic_array.packed.column_major_mat4"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008883, VkglTestCase_008883_1, VkglTestCase_008883_2);

#define VkglTestCase_008884_1 "dEQP-GLES31.functional.ssbo.layou"
#define VkglTestCase_008884_2 "t.single_basic_array.packed.mat2x3"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008884, VkglTestCase_008884_1, VkglTestCase_008884_2);

#define VkglTestCase_008885_1 "dEQP-GLES31.functional.ssbo.layout.sin"
#define VkglTestCase_008885_2 "gle_basic_array.packed.row_major_mat2x3"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008885, VkglTestCase_008885_1, VkglTestCase_008885_2);

#define VkglTestCase_008886_1 "dEQP-GLES31.functional.ssbo.layout.singl"
#define VkglTestCase_008886_2 "e_basic_array.packed.column_major_mat2x3"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008886, VkglTestCase_008886_1, VkglTestCase_008886_2);

#define VkglTestCase_008887_1 "dEQP-GLES31.functional.ssbo.layou"
#define VkglTestCase_008887_2 "t.single_basic_array.packed.mat2x4"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008887, VkglTestCase_008887_1, VkglTestCase_008887_2);

#define VkglTestCase_008888_1 "dEQP-GLES31.functional.ssbo.layout.sin"
#define VkglTestCase_008888_2 "gle_basic_array.packed.row_major_mat2x4"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008888, VkglTestCase_008888_1, VkglTestCase_008888_2);

#define VkglTestCase_008889_1 "dEQP-GLES31.functional.ssbo.layout.singl"
#define VkglTestCase_008889_2 "e_basic_array.packed.column_major_mat2x4"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008889, VkglTestCase_008889_1, VkglTestCase_008889_2);

#define VkglTestCase_008890_1 "dEQP-GLES31.functional.ssbo.layou"
#define VkglTestCase_008890_2 "t.single_basic_array.packed.mat3x2"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008890, VkglTestCase_008890_1, VkglTestCase_008890_2);

#define VkglTestCase_008891_1 "dEQP-GLES31.functional.ssbo.layout.sin"
#define VkglTestCase_008891_2 "gle_basic_array.packed.row_major_mat3x2"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008891, VkglTestCase_008891_1, VkglTestCase_008891_2);

#define VkglTestCase_008892_1 "dEQP-GLES31.functional.ssbo.layout.singl"
#define VkglTestCase_008892_2 "e_basic_array.packed.column_major_mat3x2"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008892, VkglTestCase_008892_1, VkglTestCase_008892_2);

#define VkglTestCase_008893_1 "dEQP-GLES31.functional.ssbo.layou"
#define VkglTestCase_008893_2 "t.single_basic_array.packed.mat3x4"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008893, VkglTestCase_008893_1, VkglTestCase_008893_2);

#define VkglTestCase_008894_1 "dEQP-GLES31.functional.ssbo.layout.sin"
#define VkglTestCase_008894_2 "gle_basic_array.packed.row_major_mat3x4"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008894, VkglTestCase_008894_1, VkglTestCase_008894_2);

#define VkglTestCase_008895_1 "dEQP-GLES31.functional.ssbo.layout.singl"
#define VkglTestCase_008895_2 "e_basic_array.packed.column_major_mat3x4"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008895, VkglTestCase_008895_1, VkglTestCase_008895_2);

#define VkglTestCase_008896_1 "dEQP-GLES31.functional.ssbo.layou"
#define VkglTestCase_008896_2 "t.single_basic_array.packed.mat4x2"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008896, VkglTestCase_008896_1, VkglTestCase_008896_2);

#define VkglTestCase_008897_1 "dEQP-GLES31.functional.ssbo.layout.sin"
#define VkglTestCase_008897_2 "gle_basic_array.packed.row_major_mat4x2"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008897, VkglTestCase_008897_1, VkglTestCase_008897_2);

#define VkglTestCase_008898_1 "dEQP-GLES31.functional.ssbo.layout.singl"
#define VkglTestCase_008898_2 "e_basic_array.packed.column_major_mat4x2"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008898, VkglTestCase_008898_1, VkglTestCase_008898_2);

#define VkglTestCase_008899_1 "dEQP-GLES31.functional.ssbo.layou"
#define VkglTestCase_008899_2 "t.single_basic_array.packed.mat4x3"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008899, VkglTestCase_008899_1, VkglTestCase_008899_2);

#define VkglTestCase_008900_1 "dEQP-GLES31.functional.ssbo.layout.sin"
#define VkglTestCase_008900_2 "gle_basic_array.packed.row_major_mat4x3"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008900, VkglTestCase_008900_1, VkglTestCase_008900_2);

#define VkglTestCase_008901_1 "dEQP-GLES31.functional.ssbo.layout.singl"
#define VkglTestCase_008901_2 "e_basic_array.packed.column_major_mat4x3"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008901, VkglTestCase_008901_1, VkglTestCase_008901_2);
