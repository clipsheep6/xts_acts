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

#define VkglTestCase_008816_1 "dEQP-GLES31.functional.ssbo.layou"
#define VkglTestCase_008816_2 "t.single_basic_array.shared.float"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008816, VkglTestCase_008816_1, VkglTestCase_008816_2);

#define VkglTestCase_008817_1 "dEQP-GLES31.functional.ssbo.layo"
#define VkglTestCase_008817_2 "ut.single_basic_array.shared.vec2"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008817, VkglTestCase_008817_1, VkglTestCase_008817_2);

#define VkglTestCase_008818_1 "dEQP-GLES31.functional.ssbo.layo"
#define VkglTestCase_008818_2 "ut.single_basic_array.shared.vec3"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008818, VkglTestCase_008818_1, VkglTestCase_008818_2);

#define VkglTestCase_008819_1 "dEQP-GLES31.functional.ssbo.layo"
#define VkglTestCase_008819_2 "ut.single_basic_array.shared.vec4"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008819, VkglTestCase_008819_1, VkglTestCase_008819_2);

#define VkglTestCase_008820_1 "dEQP-GLES31.functional.ssbo.layo"
#define VkglTestCase_008820_2 "ut.single_basic_array.shared.int"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008820, VkglTestCase_008820_1, VkglTestCase_008820_2);

#define VkglTestCase_008821_1 "dEQP-GLES31.functional.ssbo.layou"
#define VkglTestCase_008821_2 "t.single_basic_array.shared.ivec2"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008821, VkglTestCase_008821_1, VkglTestCase_008821_2);

#define VkglTestCase_008822_1 "dEQP-GLES31.functional.ssbo.layou"
#define VkglTestCase_008822_2 "t.single_basic_array.shared.ivec3"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008822, VkglTestCase_008822_1, VkglTestCase_008822_2);

#define VkglTestCase_008823_1 "dEQP-GLES31.functional.ssbo.layou"
#define VkglTestCase_008823_2 "t.single_basic_array.shared.ivec4"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008823, VkglTestCase_008823_1, VkglTestCase_008823_2);

#define VkglTestCase_008824_1 "dEQP-GLES31.functional.ssbo.layo"
#define VkglTestCase_008824_2 "ut.single_basic_array.shared.uint"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008824, VkglTestCase_008824_1, VkglTestCase_008824_2);

#define VkglTestCase_008825_1 "dEQP-GLES31.functional.ssbo.layou"
#define VkglTestCase_008825_2 "t.single_basic_array.shared.uvec2"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008825, VkglTestCase_008825_1, VkglTestCase_008825_2);

#define VkglTestCase_008826_1 "dEQP-GLES31.functional.ssbo.layou"
#define VkglTestCase_008826_2 "t.single_basic_array.shared.uvec3"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008826, VkglTestCase_008826_1, VkglTestCase_008826_2);

#define VkglTestCase_008827_1 "dEQP-GLES31.functional.ssbo.layou"
#define VkglTestCase_008827_2 "t.single_basic_array.shared.uvec4"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008827, VkglTestCase_008827_1, VkglTestCase_008827_2);

#define VkglTestCase_008828_1 "dEQP-GLES31.functional.ssbo.layo"
#define VkglTestCase_008828_2 "ut.single_basic_array.shared.bool"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008828, VkglTestCase_008828_1, VkglTestCase_008828_2);

#define VkglTestCase_008829_1 "dEQP-GLES31.functional.ssbo.layou"
#define VkglTestCase_008829_2 "t.single_basic_array.shared.bvec2"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008829, VkglTestCase_008829_1, VkglTestCase_008829_2);

#define VkglTestCase_008830_1 "dEQP-GLES31.functional.ssbo.layou"
#define VkglTestCase_008830_2 "t.single_basic_array.shared.bvec3"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008830, VkglTestCase_008830_1, VkglTestCase_008830_2);

#define VkglTestCase_008831_1 "dEQP-GLES31.functional.ssbo.layou"
#define VkglTestCase_008831_2 "t.single_basic_array.shared.bvec4"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008831, VkglTestCase_008831_1, VkglTestCase_008831_2);

#define VkglTestCase_008832_1 "dEQP-GLES31.functional.ssbo.layo"
#define VkglTestCase_008832_2 "ut.single_basic_array.shared.mat2"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008832, VkglTestCase_008832_1, VkglTestCase_008832_2);

#define VkglTestCase_008833_1 "dEQP-GLES31.functional.ssbo.layout.si"
#define VkglTestCase_008833_2 "ngle_basic_array.shared.row_major_mat2"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008833, VkglTestCase_008833_1, VkglTestCase_008833_2);

#define VkglTestCase_008834_1 "dEQP-GLES31.functional.ssbo.layout.sing"
#define VkglTestCase_008834_2 "le_basic_array.shared.column_major_mat2"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008834, VkglTestCase_008834_1, VkglTestCase_008834_2);

#define VkglTestCase_008835_1 "dEQP-GLES31.functional.ssbo.layo"
#define VkglTestCase_008835_2 "ut.single_basic_array.shared.mat3"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008835, VkglTestCase_008835_1, VkglTestCase_008835_2);

#define VkglTestCase_008836_1 "dEQP-GLES31.functional.ssbo.layout.si"
#define VkglTestCase_008836_2 "ngle_basic_array.shared.row_major_mat3"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008836, VkglTestCase_008836_1, VkglTestCase_008836_2);

#define VkglTestCase_008837_1 "dEQP-GLES31.functional.ssbo.layout.sing"
#define VkglTestCase_008837_2 "le_basic_array.shared.column_major_mat3"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008837, VkglTestCase_008837_1, VkglTestCase_008837_2);

#define VkglTestCase_008838_1 "dEQP-GLES31.functional.ssbo.layo"
#define VkglTestCase_008838_2 "ut.single_basic_array.shared.mat4"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008838, VkglTestCase_008838_1, VkglTestCase_008838_2);

#define VkglTestCase_008839_1 "dEQP-GLES31.functional.ssbo.layout.si"
#define VkglTestCase_008839_2 "ngle_basic_array.shared.row_major_mat4"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008839, VkglTestCase_008839_1, VkglTestCase_008839_2);

#define VkglTestCase_008840_1 "dEQP-GLES31.functional.ssbo.layout.sing"
#define VkglTestCase_008840_2 "le_basic_array.shared.column_major_mat4"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008840, VkglTestCase_008840_1, VkglTestCase_008840_2);

#define VkglTestCase_008841_1 "dEQP-GLES31.functional.ssbo.layou"
#define VkglTestCase_008841_2 "t.single_basic_array.shared.mat2x3"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008841, VkglTestCase_008841_1, VkglTestCase_008841_2);

#define VkglTestCase_008842_1 "dEQP-GLES31.functional.ssbo.layout.sin"
#define VkglTestCase_008842_2 "gle_basic_array.shared.row_major_mat2x3"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008842, VkglTestCase_008842_1, VkglTestCase_008842_2);

#define VkglTestCase_008843_1 "dEQP-GLES31.functional.ssbo.layout.singl"
#define VkglTestCase_008843_2 "e_basic_array.shared.column_major_mat2x3"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008843, VkglTestCase_008843_1, VkglTestCase_008843_2);

#define VkglTestCase_008844_1 "dEQP-GLES31.functional.ssbo.layou"
#define VkglTestCase_008844_2 "t.single_basic_array.shared.mat2x4"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008844, VkglTestCase_008844_1, VkglTestCase_008844_2);

#define VkglTestCase_008845_1 "dEQP-GLES31.functional.ssbo.layout.sin"
#define VkglTestCase_008845_2 "gle_basic_array.shared.row_major_mat2x4"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008845, VkglTestCase_008845_1, VkglTestCase_008845_2);

#define VkglTestCase_008846_1 "dEQP-GLES31.functional.ssbo.layout.singl"
#define VkglTestCase_008846_2 "e_basic_array.shared.column_major_mat2x4"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008846, VkglTestCase_008846_1, VkglTestCase_008846_2);

#define VkglTestCase_008847_1 "dEQP-GLES31.functional.ssbo.layou"
#define VkglTestCase_008847_2 "t.single_basic_array.shared.mat3x2"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008847, VkglTestCase_008847_1, VkglTestCase_008847_2);

#define VkglTestCase_008848_1 "dEQP-GLES31.functional.ssbo.layout.sin"
#define VkglTestCase_008848_2 "gle_basic_array.shared.row_major_mat3x2"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008848, VkglTestCase_008848_1, VkglTestCase_008848_2);

#define VkglTestCase_008849_1 "dEQP-GLES31.functional.ssbo.layout.singl"
#define VkglTestCase_008849_2 "e_basic_array.shared.column_major_mat3x2"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008849, VkglTestCase_008849_1, VkglTestCase_008849_2);

#define VkglTestCase_008850_1 "dEQP-GLES31.functional.ssbo.layou"
#define VkglTestCase_008850_2 "t.single_basic_array.shared.mat3x4"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008850, VkglTestCase_008850_1, VkglTestCase_008850_2);

#define VkglTestCase_008851_1 "dEQP-GLES31.functional.ssbo.layout.sin"
#define VkglTestCase_008851_2 "gle_basic_array.shared.row_major_mat3x4"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008851, VkglTestCase_008851_1, VkglTestCase_008851_2);

#define VkglTestCase_008852_1 "dEQP-GLES31.functional.ssbo.layout.singl"
#define VkglTestCase_008852_2 "e_basic_array.shared.column_major_mat3x4"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008852, VkglTestCase_008852_1, VkglTestCase_008852_2);

#define VkglTestCase_008853_1 "dEQP-GLES31.functional.ssbo.layou"
#define VkglTestCase_008853_2 "t.single_basic_array.shared.mat4x2"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008853, VkglTestCase_008853_1, VkglTestCase_008853_2);

#define VkglTestCase_008854_1 "dEQP-GLES31.functional.ssbo.layout.sin"
#define VkglTestCase_008854_2 "gle_basic_array.shared.row_major_mat4x2"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008854, VkglTestCase_008854_1, VkglTestCase_008854_2);

#define VkglTestCase_008855_1 "dEQP-GLES31.functional.ssbo.layout.singl"
#define VkglTestCase_008855_2 "e_basic_array.shared.column_major_mat4x2"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008855, VkglTestCase_008855_1, VkglTestCase_008855_2);

#define VkglTestCase_008856_1 "dEQP-GLES31.functional.ssbo.layou"
#define VkglTestCase_008856_2 "t.single_basic_array.shared.mat4x3"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008856, VkglTestCase_008856_1, VkglTestCase_008856_2);

#define VkglTestCase_008857_1 "dEQP-GLES31.functional.ssbo.layout.sin"
#define VkglTestCase_008857_2 "gle_basic_array.shared.row_major_mat4x3"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008857, VkglTestCase_008857_1, VkglTestCase_008857_2);

#define VkglTestCase_008858_1 "dEQP-GLES31.functional.ssbo.layout.singl"
#define VkglTestCase_008858_2 "e_basic_array.shared.column_major_mat4x3"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008858, VkglTestCase_008858_1, VkglTestCase_008858_2);
