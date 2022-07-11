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

#define VkglTestCase_004377_1 "dEQP-GLES3.functional.shader"
#define VkglTestCase_004377_2 "s.arrays.return.float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004377, VkglTestCase_004377_1, VkglTestCase_004377_2);

#define VkglTestCase_004378_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_004378_2 ".arrays.return.float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004378, VkglTestCase_004378_1, VkglTestCase_004378_2);

#define VkglTestCase_004379_1 "dEQP-GLES3.functional.shade"
#define VkglTestCase_004379_2 "rs.arrays.return.int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004379, VkglTestCase_004379_1, VkglTestCase_004379_2);

#define VkglTestCase_004380_1 "dEQP-GLES3.functional.shader"
#define VkglTestCase_004380_2 "s.arrays.return.int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004380, VkglTestCase_004380_1, VkglTestCase_004380_2);

#define VkglTestCase_004381_1 "dEQP-GLES3.functional.shade"
#define VkglTestCase_004381_2 "rs.arrays.return.bool_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004381, VkglTestCase_004381_1, VkglTestCase_004381_2);

#define VkglTestCase_004382_1 "dEQP-GLES3.functional.shader"
#define VkglTestCase_004382_2 "s.arrays.return.bool_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004382, VkglTestCase_004382_1, VkglTestCase_004382_2);

#define VkglTestCase_004383_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_004383_2 "arrays.return.float_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004383, VkglTestCase_004383_1, VkglTestCase_004383_2);

#define VkglTestCase_004384_1 "dEQP-GLES3.functional.shaders.a"
#define VkglTestCase_004384_2 "rrays.return.float_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004384, VkglTestCase_004384_1, VkglTestCase_004384_2);

#define VkglTestCase_004385_1 "dEQP-GLES3.functional.shader"
#define VkglTestCase_004385_2 "s.arrays.return.struct_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004385, VkglTestCase_004385_1, VkglTestCase_004385_2);

#define VkglTestCase_004386_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_004386_2 ".arrays.return.struct_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004386, VkglTestCase_004386_1, VkglTestCase_004386_2);

#define VkglTestCase_004387_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_004387_2 ".arrays.return.int_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004387, VkglTestCase_004387_1, VkglTestCase_004387_2);

#define VkglTestCase_004388_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_004388_2 "arrays.return.int_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004388, VkglTestCase_004388_1, VkglTestCase_004388_2);

#define VkglTestCase_004389_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_004389_2 "arrays.return.bool_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004389, VkglTestCase_004389_1, VkglTestCase_004389_2);

#define VkglTestCase_004390_1 "dEQP-GLES3.functional.shaders.a"
#define VkglTestCase_004390_2 "rrays.return.bool_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004390, VkglTestCase_004390_1, VkglTestCase_004390_2);

#define VkglTestCase_004391_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_004391_2 "arrays.return.float_mat3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004391, VkglTestCase_004391_1, VkglTestCase_004391_2);

#define VkglTestCase_004392_1 "dEQP-GLES3.functional.shaders.a"
#define VkglTestCase_004392_2 "rrays.return.float_mat3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004392, VkglTestCase_004392_1, VkglTestCase_004392_2);

#define VkglTestCase_004393_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_004393_2 ".arrays.return.int_mat3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004393, VkglTestCase_004393_1, VkglTestCase_004393_2);

#define VkglTestCase_004394_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_004394_2 "arrays.return.int_mat3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004394, VkglTestCase_004394_1, VkglTestCase_004394_2);

#define VkglTestCase_004395_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_004395_2 "arrays.return.bool_mat3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004395, VkglTestCase_004395_1, VkglTestCase_004395_2);

#define VkglTestCase_004396_1 "dEQP-GLES3.functional.shaders.a"
#define VkglTestCase_004396_2 "rrays.return.bool_mat3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004396, VkglTestCase_004396_1, VkglTestCase_004396_2);
