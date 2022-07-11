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

#define VkglTestCase_008902_1 "dEQP-GLES31.functional.ssbo.layou"
#define VkglTestCase_008902_2 "t.single_basic_array.std140.float"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008902, VkglTestCase_008902_1, VkglTestCase_008902_2);

#define VkglTestCase_008903_1 "dEQP-GLES31.functional.ssbo.layo"
#define VkglTestCase_008903_2 "ut.single_basic_array.std140.vec2"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008903, VkglTestCase_008903_1, VkglTestCase_008903_2);

#define VkglTestCase_008904_1 "dEQP-GLES31.functional.ssbo.layo"
#define VkglTestCase_008904_2 "ut.single_basic_array.std140.vec3"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008904, VkglTestCase_008904_1, VkglTestCase_008904_2);

#define VkglTestCase_008905_1 "dEQP-GLES31.functional.ssbo.layo"
#define VkglTestCase_008905_2 "ut.single_basic_array.std140.vec4"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008905, VkglTestCase_008905_1, VkglTestCase_008905_2);

#define VkglTestCase_008906_1 "dEQP-GLES31.functional.ssbo.layo"
#define VkglTestCase_008906_2 "ut.single_basic_array.std140.int"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008906, VkglTestCase_008906_1, VkglTestCase_008906_2);

#define VkglTestCase_008907_1 "dEQP-GLES31.functional.ssbo.layou"
#define VkglTestCase_008907_2 "t.single_basic_array.std140.ivec2"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008907, VkglTestCase_008907_1, VkglTestCase_008907_2);

#define VkglTestCase_008908_1 "dEQP-GLES31.functional.ssbo.layou"
#define VkglTestCase_008908_2 "t.single_basic_array.std140.ivec3"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008908, VkglTestCase_008908_1, VkglTestCase_008908_2);

#define VkglTestCase_008909_1 "dEQP-GLES31.functional.ssbo.layou"
#define VkglTestCase_008909_2 "t.single_basic_array.std140.ivec4"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008909, VkglTestCase_008909_1, VkglTestCase_008909_2);

#define VkglTestCase_008910_1 "dEQP-GLES31.functional.ssbo.layo"
#define VkglTestCase_008910_2 "ut.single_basic_array.std140.uint"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008910, VkglTestCase_008910_1, VkglTestCase_008910_2);

#define VkglTestCase_008911_1 "dEQP-GLES31.functional.ssbo.layou"
#define VkglTestCase_008911_2 "t.single_basic_array.std140.uvec2"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008911, VkglTestCase_008911_1, VkglTestCase_008911_2);

#define VkglTestCase_008912_1 "dEQP-GLES31.functional.ssbo.layou"
#define VkglTestCase_008912_2 "t.single_basic_array.std140.uvec3"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008912, VkglTestCase_008912_1, VkglTestCase_008912_2);

#define VkglTestCase_008913_1 "dEQP-GLES31.functional.ssbo.layou"
#define VkglTestCase_008913_2 "t.single_basic_array.std140.uvec4"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008913, VkglTestCase_008913_1, VkglTestCase_008913_2);

#define VkglTestCase_008914_1 "dEQP-GLES31.functional.ssbo.layo"
#define VkglTestCase_008914_2 "ut.single_basic_array.std140.bool"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008914, VkglTestCase_008914_1, VkglTestCase_008914_2);

#define VkglTestCase_008915_1 "dEQP-GLES31.functional.ssbo.layou"
#define VkglTestCase_008915_2 "t.single_basic_array.std140.bvec2"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008915, VkglTestCase_008915_1, VkglTestCase_008915_2);

#define VkglTestCase_008916_1 "dEQP-GLES31.functional.ssbo.layou"
#define VkglTestCase_008916_2 "t.single_basic_array.std140.bvec3"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008916, VkglTestCase_008916_1, VkglTestCase_008916_2);

#define VkglTestCase_008917_1 "dEQP-GLES31.functional.ssbo.layou"
#define VkglTestCase_008917_2 "t.single_basic_array.std140.bvec4"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008917, VkglTestCase_008917_1, VkglTestCase_008917_2);

#define VkglTestCase_008918_1 "dEQP-GLES31.functional.ssbo.layo"
#define VkglTestCase_008918_2 "ut.single_basic_array.std140.mat2"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008918, VkglTestCase_008918_1, VkglTestCase_008918_2);

#define VkglTestCase_008919_1 "dEQP-GLES31.functional.ssbo.layout.si"
#define VkglTestCase_008919_2 "ngle_basic_array.std140.row_major_mat2"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008919, VkglTestCase_008919_1, VkglTestCase_008919_2);

#define VkglTestCase_008920_1 "dEQP-GLES31.functional.ssbo.layout.sing"
#define VkglTestCase_008920_2 "le_basic_array.std140.column_major_mat2"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008920, VkglTestCase_008920_1, VkglTestCase_008920_2);

#define VkglTestCase_008921_1 "dEQP-GLES31.functional.ssbo.layo"
#define VkglTestCase_008921_2 "ut.single_basic_array.std140.mat3"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008921, VkglTestCase_008921_1, VkglTestCase_008921_2);

#define VkglTestCase_008922_1 "dEQP-GLES31.functional.ssbo.layout.si"
#define VkglTestCase_008922_2 "ngle_basic_array.std140.row_major_mat3"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008922, VkglTestCase_008922_1, VkglTestCase_008922_2);

#define VkglTestCase_008923_1 "dEQP-GLES31.functional.ssbo.layout.sing"
#define VkglTestCase_008923_2 "le_basic_array.std140.column_major_mat3"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008923, VkglTestCase_008923_1, VkglTestCase_008923_2);

#define VkglTestCase_008924_1 "dEQP-GLES31.functional.ssbo.layo"
#define VkglTestCase_008924_2 "ut.single_basic_array.std140.mat4"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008924, VkglTestCase_008924_1, VkglTestCase_008924_2);

#define VkglTestCase_008925_1 "dEQP-GLES31.functional.ssbo.layout.si"
#define VkglTestCase_008925_2 "ngle_basic_array.std140.row_major_mat4"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008925, VkglTestCase_008925_1, VkglTestCase_008925_2);

#define VkglTestCase_008926_1 "dEQP-GLES31.functional.ssbo.layout.sing"
#define VkglTestCase_008926_2 "le_basic_array.std140.column_major_mat4"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008926, VkglTestCase_008926_1, VkglTestCase_008926_2);

#define VkglTestCase_008927_1 "dEQP-GLES31.functional.ssbo.layou"
#define VkglTestCase_008927_2 "t.single_basic_array.std140.mat2x3"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008927, VkglTestCase_008927_1, VkglTestCase_008927_2);

#define VkglTestCase_008928_1 "dEQP-GLES31.functional.ssbo.layout.sin"
#define VkglTestCase_008928_2 "gle_basic_array.std140.row_major_mat2x3"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008928, VkglTestCase_008928_1, VkglTestCase_008928_2);

#define VkglTestCase_008929_1 "dEQP-GLES31.functional.ssbo.layout.singl"
#define VkglTestCase_008929_2 "e_basic_array.std140.column_major_mat2x3"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008929, VkglTestCase_008929_1, VkglTestCase_008929_2);

#define VkglTestCase_008930_1 "dEQP-GLES31.functional.ssbo.layou"
#define VkglTestCase_008930_2 "t.single_basic_array.std140.mat2x4"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008930, VkglTestCase_008930_1, VkglTestCase_008930_2);

#define VkglTestCase_008931_1 "dEQP-GLES31.functional.ssbo.layout.sin"
#define VkglTestCase_008931_2 "gle_basic_array.std140.row_major_mat2x4"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008931, VkglTestCase_008931_1, VkglTestCase_008931_2);

#define VkglTestCase_008932_1 "dEQP-GLES31.functional.ssbo.layout.singl"
#define VkglTestCase_008932_2 "e_basic_array.std140.column_major_mat2x4"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008932, VkglTestCase_008932_1, VkglTestCase_008932_2);

#define VkglTestCase_008933_1 "dEQP-GLES31.functional.ssbo.layou"
#define VkglTestCase_008933_2 "t.single_basic_array.std140.mat3x2"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008933, VkglTestCase_008933_1, VkglTestCase_008933_2);

#define VkglTestCase_008934_1 "dEQP-GLES31.functional.ssbo.layout.sin"
#define VkglTestCase_008934_2 "gle_basic_array.std140.row_major_mat3x2"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008934, VkglTestCase_008934_1, VkglTestCase_008934_2);

#define VkglTestCase_008935_1 "dEQP-GLES31.functional.ssbo.layout.singl"
#define VkglTestCase_008935_2 "e_basic_array.std140.column_major_mat3x2"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008935, VkglTestCase_008935_1, VkglTestCase_008935_2);

#define VkglTestCase_008936_1 "dEQP-GLES31.functional.ssbo.layou"
#define VkglTestCase_008936_2 "t.single_basic_array.std140.mat3x4"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008936, VkglTestCase_008936_1, VkglTestCase_008936_2);

#define VkglTestCase_008937_1 "dEQP-GLES31.functional.ssbo.layout.sin"
#define VkglTestCase_008937_2 "gle_basic_array.std140.row_major_mat3x4"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008937, VkglTestCase_008937_1, VkglTestCase_008937_2);

#define VkglTestCase_008938_1 "dEQP-GLES31.functional.ssbo.layout.singl"
#define VkglTestCase_008938_2 "e_basic_array.std140.column_major_mat3x4"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008938, VkglTestCase_008938_1, VkglTestCase_008938_2);

#define VkglTestCase_008939_1 "dEQP-GLES31.functional.ssbo.layou"
#define VkglTestCase_008939_2 "t.single_basic_array.std140.mat4x2"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008939, VkglTestCase_008939_1, VkglTestCase_008939_2);

#define VkglTestCase_008940_1 "dEQP-GLES31.functional.ssbo.layout.sin"
#define VkglTestCase_008940_2 "gle_basic_array.std140.row_major_mat4x2"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008940, VkglTestCase_008940_1, VkglTestCase_008940_2);

#define VkglTestCase_008941_1 "dEQP-GLES31.functional.ssbo.layout.singl"
#define VkglTestCase_008941_2 "e_basic_array.std140.column_major_mat4x2"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008941, VkglTestCase_008941_1, VkglTestCase_008941_2);

#define VkglTestCase_008942_1 "dEQP-GLES31.functional.ssbo.layou"
#define VkglTestCase_008942_2 "t.single_basic_array.std140.mat4x3"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008942, VkglTestCase_008942_1, VkglTestCase_008942_2);

#define VkglTestCase_008943_1 "dEQP-GLES31.functional.ssbo.layout.sin"
#define VkglTestCase_008943_2 "gle_basic_array.std140.row_major_mat4x3"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008943, VkglTestCase_008943_1, VkglTestCase_008943_2);

#define VkglTestCase_008944_1 "dEQP-GLES31.functional.ssbo.layout.singl"
#define VkglTestCase_008944_2 "e_basic_array.std140.column_major_mat4x3"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008944, VkglTestCase_008944_1, VkglTestCase_008944_2);
