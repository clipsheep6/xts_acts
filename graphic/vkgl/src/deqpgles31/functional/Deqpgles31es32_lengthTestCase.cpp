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
#include "../ActsDeqpgles310005TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_004382_1 "dEQP-GLES31.functional.shaders.array"
#define VkglTestCase_004382_2 "s_of_arrays.es32.length.float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004382, VkglTestCase_004382_1, VkglTestCase_004382_2);

#define VkglTestCase_004383_1 "dEQP-GLES31.functional.shaders.arrays"
#define VkglTestCase_004383_2 "_of_arrays.es32.length.float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004383, VkglTestCase_004383_1, VkglTestCase_004383_2);

#define VkglTestCase_004384_1 "dEQP-GLES31.functional.shaders.arra"
#define VkglTestCase_004384_2 "ys_of_arrays.es32.length.int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004384, VkglTestCase_004384_1, VkglTestCase_004384_2);

#define VkglTestCase_004385_1 "dEQP-GLES31.functional.shaders.array"
#define VkglTestCase_004385_2 "s_of_arrays.es32.length.int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004385, VkglTestCase_004385_1, VkglTestCase_004385_2);

#define VkglTestCase_004386_1 "dEQP-GLES31.functional.shaders.arra"
#define VkglTestCase_004386_2 "ys_of_arrays.es32.length.bool_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004386, VkglTestCase_004386_1, VkglTestCase_004386_2);

#define VkglTestCase_004387_1 "dEQP-GLES31.functional.shaders.array"
#define VkglTestCase_004387_2 "s_of_arrays.es32.length.bool_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004387, VkglTestCase_004387_1, VkglTestCase_004387_2);

#define VkglTestCase_004388_1 "dEQP-GLES31.functional.shaders.array"
#define VkglTestCase_004388_2 "s_of_arrays.es32.length.struct_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004388, VkglTestCase_004388_1, VkglTestCase_004388_2);

#define VkglTestCase_004389_1 "dEQP-GLES31.functional.shaders.arrays"
#define VkglTestCase_004389_2 "_of_arrays.es32.length.struct_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004389, VkglTestCase_004389_1, VkglTestCase_004389_2);

#define VkglTestCase_004390_1 "dEQP-GLES31.functional.shaders.arra"
#define VkglTestCase_004390_2 "ys_of_arrays.es32.length.mat3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004390, VkglTestCase_004390_1, VkglTestCase_004390_2);

#define VkglTestCase_004391_1 "dEQP-GLES31.functional.shaders.array"
#define VkglTestCase_004391_2 "s_of_arrays.es32.length.mat3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004391, VkglTestCase_004391_1, VkglTestCase_004391_2);

#define VkglTestCase_004392_1 "dEQP-GLES31.functional.shaders.arrays_of_ar"
#define VkglTestCase_004392_2 "rays.es32.length.constant_expression_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004392, VkglTestCase_004392_1, VkglTestCase_004392_2);

#define VkglTestCase_004393_1 "dEQP-GLES31.functional.shaders.arrays_of_arr"
#define VkglTestCase_004393_2 "ays.es32.length.constant_expression_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004393, VkglTestCase_004393_1, VkglTestCase_004393_2);
