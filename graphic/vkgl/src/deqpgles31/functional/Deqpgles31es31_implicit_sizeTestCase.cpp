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
#include "../ActsDeqpgles310004TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_003990_1 "dEQP-GLES31.functional.shaders.arrays_of_"
#define VkglTestCase_003990_2 "arrays.es31.implicit_size.float_3x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003990, VkglTestCase_003990_1, VkglTestCase_003990_2);

#define VkglTestCase_003991_1 "dEQP-GLES31.functional.shaders.arrays_of_a"
#define VkglTestCase_003991_2 "rrays.es31.implicit_size.float_3x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003991, VkglTestCase_003991_1, VkglTestCase_003991_2);

#define VkglTestCase_003992_1 "dEQP-GLES31.functional.shaders.arrays_of"
#define VkglTestCase_003992_2 "_arrays.es31.implicit_size.int_2x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003992, VkglTestCase_003992_1, VkglTestCase_003992_2);

#define VkglTestCase_003993_1 "dEQP-GLES31.functional.shaders.arrays_of_"
#define VkglTestCase_003993_2 "arrays.es31.implicit_size.int_2x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003993, VkglTestCase_003993_1, VkglTestCase_003993_2);

#define VkglTestCase_003994_1 "dEQP-GLES31.functional.shaders.arrays_of_a"
#define VkglTestCase_003994_2 "rrays.es31.implicit_size.bool_3x3x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003994, VkglTestCase_003994_1, VkglTestCase_003994_2);

#define VkglTestCase_003995_1 "dEQP-GLES31.functional.shaders.arrays_of_ar"
#define VkglTestCase_003995_2 "rays.es31.implicit_size.bool_3x3x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003995, VkglTestCase_003995_1, VkglTestCase_003995_2);

#define VkglTestCase_003996_1 "dEQP-GLES31.functional.shaders.arrays_of_ar"
#define VkglTestCase_003996_2 "rays.es31.implicit_size.struct_5x5x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003996, VkglTestCase_003996_1, VkglTestCase_003996_2);

#define VkglTestCase_003997_1 "dEQP-GLES31.functional.shaders.arrays_of_arr"
#define VkglTestCase_003997_2 "ays.es31.implicit_size.struct_5x5x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003997, VkglTestCase_003997_1, VkglTestCase_003997_2);

#define VkglTestCase_003998_1 "dEQP-GLES31.functional.shaders.arrays_of_"
#define VkglTestCase_003998_2 "arrays.es31.implicit_size.vec3_1x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003998, VkglTestCase_003998_1, VkglTestCase_003998_2);

#define VkglTestCase_003999_1 "dEQP-GLES31.functional.shaders.arrays_of_a"
#define VkglTestCase_003999_2 "rrays.es31.implicit_size.vec3_1x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003999, VkglTestCase_003999_1, VkglTestCase_003999_2);

#define VkglTestCase_004000_1 "dEQP-GLES31.functional.shaders.arrays_of_a"
#define VkglTestCase_004000_2 "rrays.es31.implicit_size.ivec3_3x1x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_004000, VkglTestCase_004000_1, VkglTestCase_004000_2);

#define VkglTestCase_004001_1 "dEQP-GLES31.functional.shaders.arrays_of_ar"
#define VkglTestCase_004001_2 "rays.es31.implicit_size.ivec3_3x1x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_004001, VkglTestCase_004001_1, VkglTestCase_004001_2);

#define VkglTestCase_004002_1 "dEQP-GLES31.functional.shaders.arrays_of_"
#define VkglTestCase_004002_2 "arrays.es31.implicit_size.bvec3_3x1_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_004002, VkglTestCase_004002_1, VkglTestCase_004002_2);

#define VkglTestCase_004003_1 "dEQP-GLES31.functional.shaders.arrays_of_a"
#define VkglTestCase_004003_2 "rrays.es31.implicit_size.bvec3_3x1_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_004003, VkglTestCase_004003_1, VkglTestCase_004003_2);

#define VkglTestCase_004004_1 "dEQP-GLES31.functional.shaders.arrays_of_"
#define VkglTestCase_004004_2 "arrays.es31.implicit_size.mat3_3x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_004004, VkglTestCase_004004_1, VkglTestCase_004004_2);

#define VkglTestCase_004005_1 "dEQP-GLES31.functional.shaders.arrays_of_a"
#define VkglTestCase_004005_2 "rrays.es31.implicit_size.mat3_3x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_004005, VkglTestCase_004005_1, VkglTestCase_004005_2);

#define VkglTestCase_004006_1 "dEQP-GLES31.functional.shaders.arrays_of_a"
#define VkglTestCase_004006_2 "rrays.es31.implicit_size.mat3_3x3x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_004006, VkglTestCase_004006_1, VkglTestCase_004006_2);

#define VkglTestCase_004007_1 "dEQP-GLES31.functional.shaders.arrays_of_ar"
#define VkglTestCase_004007_2 "rays.es31.implicit_size.mat3_3x3x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_004007, VkglTestCase_004007_1, VkglTestCase_004007_2);

#define VkglTestCase_004008_1 "dEQP-GLES31.functional.shaders.arrays_of_"
#define VkglTestCase_004008_2 "arrays.es31.implicit_size.mat3_3x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_004008, VkglTestCase_004008_1, VkglTestCase_004008_2);

#define VkglTestCase_004009_1 "dEQP-GLES31.functional.shaders.arrays_of_a"
#define VkglTestCase_004009_2 "rrays.es31.implicit_size.mat3_3x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_004009, VkglTestCase_004009_1, VkglTestCase_004009_2);
