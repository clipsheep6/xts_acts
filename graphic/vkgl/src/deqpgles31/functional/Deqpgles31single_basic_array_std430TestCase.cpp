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

#define VkglTestCase_008945_1 "dEQP-GLES31.functional.ssbo.layou"
#define VkglTestCase_008945_2 "t.single_basic_array.std430.float"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008945, VkglTestCase_008945_1, VkglTestCase_008945_2);

#define VkglTestCase_008946_1 "dEQP-GLES31.functional.ssbo.layo"
#define VkglTestCase_008946_2 "ut.single_basic_array.std430.vec2"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008946, VkglTestCase_008946_1, VkglTestCase_008946_2);

#define VkglTestCase_008947_1 "dEQP-GLES31.functional.ssbo.layo"
#define VkglTestCase_008947_2 "ut.single_basic_array.std430.vec3"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008947, VkglTestCase_008947_1, VkglTestCase_008947_2);

#define VkglTestCase_008948_1 "dEQP-GLES31.functional.ssbo.layo"
#define VkglTestCase_008948_2 "ut.single_basic_array.std430.vec4"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008948, VkglTestCase_008948_1, VkglTestCase_008948_2);

#define VkglTestCase_008949_1 "dEQP-GLES31.functional.ssbo.layo"
#define VkglTestCase_008949_2 "ut.single_basic_array.std430.int"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008949, VkglTestCase_008949_1, VkglTestCase_008949_2);

#define VkglTestCase_008950_1 "dEQP-GLES31.functional.ssbo.layou"
#define VkglTestCase_008950_2 "t.single_basic_array.std430.ivec2"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008950, VkglTestCase_008950_1, VkglTestCase_008950_2);

#define VkglTestCase_008951_1 "dEQP-GLES31.functional.ssbo.layou"
#define VkglTestCase_008951_2 "t.single_basic_array.std430.ivec3"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008951, VkglTestCase_008951_1, VkglTestCase_008951_2);

#define VkglTestCase_008952_1 "dEQP-GLES31.functional.ssbo.layou"
#define VkglTestCase_008952_2 "t.single_basic_array.std430.ivec4"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008952, VkglTestCase_008952_1, VkglTestCase_008952_2);

#define VkglTestCase_008953_1 "dEQP-GLES31.functional.ssbo.layo"
#define VkglTestCase_008953_2 "ut.single_basic_array.std430.uint"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008953, VkglTestCase_008953_1, VkglTestCase_008953_2);

#define VkglTestCase_008954_1 "dEQP-GLES31.functional.ssbo.layou"
#define VkglTestCase_008954_2 "t.single_basic_array.std430.uvec2"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008954, VkglTestCase_008954_1, VkglTestCase_008954_2);

#define VkglTestCase_008955_1 "dEQP-GLES31.functional.ssbo.layou"
#define VkglTestCase_008955_2 "t.single_basic_array.std430.uvec3"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008955, VkglTestCase_008955_1, VkglTestCase_008955_2);

#define VkglTestCase_008956_1 "dEQP-GLES31.functional.ssbo.layou"
#define VkglTestCase_008956_2 "t.single_basic_array.std430.uvec4"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008956, VkglTestCase_008956_1, VkglTestCase_008956_2);

#define VkglTestCase_008957_1 "dEQP-GLES31.functional.ssbo.layo"
#define VkglTestCase_008957_2 "ut.single_basic_array.std430.bool"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008957, VkglTestCase_008957_1, VkglTestCase_008957_2);

#define VkglTestCase_008958_1 "dEQP-GLES31.functional.ssbo.layou"
#define VkglTestCase_008958_2 "t.single_basic_array.std430.bvec2"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008958, VkglTestCase_008958_1, VkglTestCase_008958_2);

#define VkglTestCase_008959_1 "dEQP-GLES31.functional.ssbo.layou"
#define VkglTestCase_008959_2 "t.single_basic_array.std430.bvec3"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008959, VkglTestCase_008959_1, VkglTestCase_008959_2);

#define VkglTestCase_008960_1 "dEQP-GLES31.functional.ssbo.layou"
#define VkglTestCase_008960_2 "t.single_basic_array.std430.bvec4"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008960, VkglTestCase_008960_1, VkglTestCase_008960_2);

#define VkglTestCase_008961_1 "dEQP-GLES31.functional.ssbo.layo"
#define VkglTestCase_008961_2 "ut.single_basic_array.std430.mat2"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008961, VkglTestCase_008961_1, VkglTestCase_008961_2);

#define VkglTestCase_008962_1 "dEQP-GLES31.functional.ssbo.layout.si"
#define VkglTestCase_008962_2 "ngle_basic_array.std430.row_major_mat2"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008962, VkglTestCase_008962_1, VkglTestCase_008962_2);

#define VkglTestCase_008963_1 "dEQP-GLES31.functional.ssbo.layout.sing"
#define VkglTestCase_008963_2 "le_basic_array.std430.column_major_mat2"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008963, VkglTestCase_008963_1, VkglTestCase_008963_2);

#define VkglTestCase_008964_1 "dEQP-GLES31.functional.ssbo.layo"
#define VkglTestCase_008964_2 "ut.single_basic_array.std430.mat3"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008964, VkglTestCase_008964_1, VkglTestCase_008964_2);

#define VkglTestCase_008965_1 "dEQP-GLES31.functional.ssbo.layout.si"
#define VkglTestCase_008965_2 "ngle_basic_array.std430.row_major_mat3"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008965, VkglTestCase_008965_1, VkglTestCase_008965_2);

#define VkglTestCase_008966_1 "dEQP-GLES31.functional.ssbo.layout.sing"
#define VkglTestCase_008966_2 "le_basic_array.std430.column_major_mat3"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008966, VkglTestCase_008966_1, VkglTestCase_008966_2);

#define VkglTestCase_008967_1 "dEQP-GLES31.functional.ssbo.layo"
#define VkglTestCase_008967_2 "ut.single_basic_array.std430.mat4"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008967, VkglTestCase_008967_1, VkglTestCase_008967_2);

#define VkglTestCase_008968_1 "dEQP-GLES31.functional.ssbo.layout.si"
#define VkglTestCase_008968_2 "ngle_basic_array.std430.row_major_mat4"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008968, VkglTestCase_008968_1, VkglTestCase_008968_2);

#define VkglTestCase_008969_1 "dEQP-GLES31.functional.ssbo.layout.sing"
#define VkglTestCase_008969_2 "le_basic_array.std430.column_major_mat4"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008969, VkglTestCase_008969_1, VkglTestCase_008969_2);

#define VkglTestCase_008970_1 "dEQP-GLES31.functional.ssbo.layou"
#define VkglTestCase_008970_2 "t.single_basic_array.std430.mat2x3"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008970, VkglTestCase_008970_1, VkglTestCase_008970_2);

#define VkglTestCase_008971_1 "dEQP-GLES31.functional.ssbo.layout.sin"
#define VkglTestCase_008971_2 "gle_basic_array.std430.row_major_mat2x3"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008971, VkglTestCase_008971_1, VkglTestCase_008971_2);

#define VkglTestCase_008972_1 "dEQP-GLES31.functional.ssbo.layout.singl"
#define VkglTestCase_008972_2 "e_basic_array.std430.column_major_mat2x3"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008972, VkglTestCase_008972_1, VkglTestCase_008972_2);

#define VkglTestCase_008973_1 "dEQP-GLES31.functional.ssbo.layou"
#define VkglTestCase_008973_2 "t.single_basic_array.std430.mat2x4"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008973, VkglTestCase_008973_1, VkglTestCase_008973_2);

#define VkglTestCase_008974_1 "dEQP-GLES31.functional.ssbo.layout.sin"
#define VkglTestCase_008974_2 "gle_basic_array.std430.row_major_mat2x4"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008974, VkglTestCase_008974_1, VkglTestCase_008974_2);

#define VkglTestCase_008975_1 "dEQP-GLES31.functional.ssbo.layout.singl"
#define VkglTestCase_008975_2 "e_basic_array.std430.column_major_mat2x4"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008975, VkglTestCase_008975_1, VkglTestCase_008975_2);

#define VkglTestCase_008976_1 "dEQP-GLES31.functional.ssbo.layou"
#define VkglTestCase_008976_2 "t.single_basic_array.std430.mat3x2"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008976, VkglTestCase_008976_1, VkglTestCase_008976_2);

#define VkglTestCase_008977_1 "dEQP-GLES31.functional.ssbo.layout.sin"
#define VkglTestCase_008977_2 "gle_basic_array.std430.row_major_mat3x2"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008977, VkglTestCase_008977_1, VkglTestCase_008977_2);

#define VkglTestCase_008978_1 "dEQP-GLES31.functional.ssbo.layout.singl"
#define VkglTestCase_008978_2 "e_basic_array.std430.column_major_mat3x2"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008978, VkglTestCase_008978_1, VkglTestCase_008978_2);

#define VkglTestCase_008979_1 "dEQP-GLES31.functional.ssbo.layou"
#define VkglTestCase_008979_2 "t.single_basic_array.std430.mat3x4"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008979, VkglTestCase_008979_1, VkglTestCase_008979_2);

#define VkglTestCase_008980_1 "dEQP-GLES31.functional.ssbo.layout.sin"
#define VkglTestCase_008980_2 "gle_basic_array.std430.row_major_mat3x4"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008980, VkglTestCase_008980_1, VkglTestCase_008980_2);

#define VkglTestCase_008981_1 "dEQP-GLES31.functional.ssbo.layout.singl"
#define VkglTestCase_008981_2 "e_basic_array.std430.column_major_mat3x4"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008981, VkglTestCase_008981_1, VkglTestCase_008981_2);

#define VkglTestCase_008982_1 "dEQP-GLES31.functional.ssbo.layou"
#define VkglTestCase_008982_2 "t.single_basic_array.std430.mat4x2"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008982, VkglTestCase_008982_1, VkglTestCase_008982_2);

#define VkglTestCase_008983_1 "dEQP-GLES31.functional.ssbo.layout.sin"
#define VkglTestCase_008983_2 "gle_basic_array.std430.row_major_mat4x2"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008983, VkglTestCase_008983_1, VkglTestCase_008983_2);

#define VkglTestCase_008984_1 "dEQP-GLES31.functional.ssbo.layout.singl"
#define VkglTestCase_008984_2 "e_basic_array.std430.column_major_mat4x2"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008984, VkglTestCase_008984_1, VkglTestCase_008984_2);

#define VkglTestCase_008985_1 "dEQP-GLES31.functional.ssbo.layou"
#define VkglTestCase_008985_2 "t.single_basic_array.std430.mat4x3"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008985, VkglTestCase_008985_1, VkglTestCase_008985_2);

#define VkglTestCase_008986_1 "dEQP-GLES31.functional.ssbo.layout.sin"
#define VkglTestCase_008986_2 "gle_basic_array.std430.row_major_mat4x3"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008986, VkglTestCase_008986_1, VkglTestCase_008986_2);

#define VkglTestCase_008987_1 "dEQP-GLES31.functional.ssbo.layout.singl"
#define VkglTestCase_008987_2 "e_basic_array.std430.column_major_mat4x3"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008987, VkglTestCase_008987_1, VkglTestCase_008987_2);
