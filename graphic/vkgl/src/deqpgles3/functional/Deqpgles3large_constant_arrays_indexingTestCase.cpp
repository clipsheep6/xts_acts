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
#include "../ActsDeqpgles30005TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_004483_1 "dEQP-GLES3.functional.shaders.large_co"
#define VkglTestCase_004483_2 "nstant_arrays.indexing.float_16_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004483, VkglTestCase_004483_1, VkglTestCase_004483_2);

#define VkglTestCase_004484_1 "dEQP-GLES3.functional.shaders.large_con"
#define VkglTestCase_004484_2 "stant_arrays.indexing.float_16_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004484, VkglTestCase_004484_1, VkglTestCase_004484_2);

#define VkglTestCase_004485_1 "dEQP-GLES3.functional.shaders.large_co"
#define VkglTestCase_004485_2 "nstant_arrays.indexing.float_32_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004485, VkglTestCase_004485_1, VkglTestCase_004485_2);

#define VkglTestCase_004486_1 "dEQP-GLES3.functional.shaders.large_con"
#define VkglTestCase_004486_2 "stant_arrays.indexing.float_32_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004486, VkglTestCase_004486_1, VkglTestCase_004486_2);

#define VkglTestCase_004487_1 "dEQP-GLES3.functional.shaders.large_co"
#define VkglTestCase_004487_2 "nstant_arrays.indexing.float_64_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004487, VkglTestCase_004487_1, VkglTestCase_004487_2);

#define VkglTestCase_004488_1 "dEQP-GLES3.functional.shaders.large_con"
#define VkglTestCase_004488_2 "stant_arrays.indexing.float_64_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004488, VkglTestCase_004488_1, VkglTestCase_004488_2);

#define VkglTestCase_004489_1 "dEQP-GLES3.functional.shaders.large_co"
#define VkglTestCase_004489_2 "nstant_arrays.indexing.float_128_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004489, VkglTestCase_004489_1, VkglTestCase_004489_2);

#define VkglTestCase_004490_1 "dEQP-GLES3.functional.shaders.large_con"
#define VkglTestCase_004490_2 "stant_arrays.indexing.float_128_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004490, VkglTestCase_004490_1, VkglTestCase_004490_2);

#define VkglTestCase_004491_1 "dEQP-GLES3.functional.shaders.large_c"
#define VkglTestCase_004491_2 "onstant_arrays.indexing.vec4_16_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004491, VkglTestCase_004491_1, VkglTestCase_004491_2);

#define VkglTestCase_004492_1 "dEQP-GLES3.functional.shaders.large_co"
#define VkglTestCase_004492_2 "nstant_arrays.indexing.vec4_16_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004492, VkglTestCase_004492_1, VkglTestCase_004492_2);

#define VkglTestCase_004493_1 "dEQP-GLES3.functional.shaders.large_c"
#define VkglTestCase_004493_2 "onstant_arrays.indexing.vec4_32_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004493, VkglTestCase_004493_1, VkglTestCase_004493_2);

#define VkglTestCase_004494_1 "dEQP-GLES3.functional.shaders.large_co"
#define VkglTestCase_004494_2 "nstant_arrays.indexing.vec4_32_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004494, VkglTestCase_004494_1, VkglTestCase_004494_2);

#define VkglTestCase_004495_1 "dEQP-GLES3.functional.shaders.large_c"
#define VkglTestCase_004495_2 "onstant_arrays.indexing.vec4_64_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004495, VkglTestCase_004495_1, VkglTestCase_004495_2);

#define VkglTestCase_004496_1 "dEQP-GLES3.functional.shaders.large_co"
#define VkglTestCase_004496_2 "nstant_arrays.indexing.vec4_64_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004496, VkglTestCase_004496_1, VkglTestCase_004496_2);

#define VkglTestCase_004497_1 "dEQP-GLES3.functional.shaders.large_co"
#define VkglTestCase_004497_2 "nstant_arrays.indexing.vec4_128_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004497, VkglTestCase_004497_1, VkglTestCase_004497_2);

#define VkglTestCase_004498_1 "dEQP-GLES3.functional.shaders.large_con"
#define VkglTestCase_004498_2 "stant_arrays.indexing.vec4_128_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004498, VkglTestCase_004498_1, VkglTestCase_004498_2);
