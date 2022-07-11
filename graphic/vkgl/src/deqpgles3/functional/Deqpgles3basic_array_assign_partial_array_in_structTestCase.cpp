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
#include "../ActsDeqpgles30039TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_038284_1 "dEQP-GLES3.functional.uniform_api.value.assigned.basic"
#define VkglTestCase_038284_2 "_array_assign_partial.array_in_struct.float_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038284, VkglTestCase_038284_1, VkglTestCase_038284_2);

#define VkglTestCase_038285_1 "dEQP-GLES3.functional.uniform_api.value.assigned.basic_"
#define VkglTestCase_038285_2 "array_assign_partial.array_in_struct.float_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038285, VkglTestCase_038285_1, VkglTestCase_038285_2);

#define VkglTestCase_038286_1 "dEQP-GLES3.functional.uniform_api.value.assigned.basi"
#define VkglTestCase_038286_2 "c_array_assign_partial.array_in_struct.float_vec4_both"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038286, VkglTestCase_038286_1, VkglTestCase_038286_2);

#define VkglTestCase_038287_1 "dEQP-GLES3.functional.uniform_api.value.assigned.basic"
#define VkglTestCase_038287_2 "_array_assign_partial.array_in_struct.mat4_mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038287, VkglTestCase_038287_1, VkglTestCase_038287_2);

#define VkglTestCase_038288_1 "dEQP-GLES3.functional.uniform_api.value.assigned.basic_"
#define VkglTestCase_038288_2 "array_assign_partial.array_in_struct.mat4_mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038288, VkglTestCase_038288_1, VkglTestCase_038288_2);

#define VkglTestCase_038289_1 "dEQP-GLES3.functional.uniform_api.value.assigned.basi"
#define VkglTestCase_038289_2 "c_array_assign_partial.array_in_struct.mat4_mat2_both"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038289, VkglTestCase_038289_1, VkglTestCase_038289_2);

#define VkglTestCase_038290_1 "dEQP-GLES3.functional.uniform_api.value.assigned.basic"
#define VkglTestCase_038290_2 "_array_assign_partial.array_in_struct.int_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038290, VkglTestCase_038290_1, VkglTestCase_038290_2);

#define VkglTestCase_038291_1 "dEQP-GLES3.functional.uniform_api.value.assigned.basic_"
#define VkglTestCase_038291_2 "array_assign_partial.array_in_struct.int_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038291, VkglTestCase_038291_1, VkglTestCase_038291_2);

#define VkglTestCase_038292_1 "dEQP-GLES3.functional.uniform_api.value.assigned.basi"
#define VkglTestCase_038292_2 "c_array_assign_partial.array_in_struct.int_ivec4_both"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038292, VkglTestCase_038292_1, VkglTestCase_038292_2);

#define VkglTestCase_038293_1 "dEQP-GLES3.functional.uniform_api.value.assigned.basic"
#define VkglTestCase_038293_2 "_array_assign_partial.array_in_struct.uint_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038293, VkglTestCase_038293_1, VkglTestCase_038293_2);

#define VkglTestCase_038294_1 "dEQP-GLES3.functional.uniform_api.value.assigned.basic_"
#define VkglTestCase_038294_2 "array_assign_partial.array_in_struct.uint_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038294, VkglTestCase_038294_1, VkglTestCase_038294_2);

#define VkglTestCase_038295_1 "dEQP-GLES3.functional.uniform_api.value.assigned.basi"
#define VkglTestCase_038295_2 "c_array_assign_partial.array_in_struct.uint_uvec4_both"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038295, VkglTestCase_038295_1, VkglTestCase_038295_2);

#define VkglTestCase_038296_1 "dEQP-GLES3.functional.uniform_api.value.assigned.basic"
#define VkglTestCase_038296_2 "_array_assign_partial.array_in_struct.bool_bvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038296, VkglTestCase_038296_1, VkglTestCase_038296_2);

#define VkglTestCase_038297_1 "dEQP-GLES3.functional.uniform_api.value.assigned.basic_"
#define VkglTestCase_038297_2 "array_assign_partial.array_in_struct.bool_bvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038297, VkglTestCase_038297_1, VkglTestCase_038297_2);

#define VkglTestCase_038298_1 "dEQP-GLES3.functional.uniform_api.value.assigned.basi"
#define VkglTestCase_038298_2 "c_array_assign_partial.array_in_struct.bool_bvec4_both"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038298, VkglTestCase_038298_1, VkglTestCase_038298_2);

#define VkglTestCase_038299_1 "dEQP-GLES3.functional.uniform_api.value.assigned.basic_array"
#define VkglTestCase_038299_2 "_assign_partial.array_in_struct.sampler2D_samplerCube_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038299, VkglTestCase_038299_1, VkglTestCase_038299_2);

#define VkglTestCase_038300_1 "dEQP-GLES3.functional.uniform_api.value.assigned.basic_array_"
#define VkglTestCase_038300_2 "assign_partial.array_in_struct.sampler2D_samplerCube_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038300, VkglTestCase_038300_1, VkglTestCase_038300_2);

#define VkglTestCase_038301_1 "dEQP-GLES3.functional.uniform_api.value.assigned.basic_arra"
#define VkglTestCase_038301_2 "y_assign_partial.array_in_struct.sampler2D_samplerCube_both"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038301, VkglTestCase_038301_1, VkglTestCase_038301_2);
