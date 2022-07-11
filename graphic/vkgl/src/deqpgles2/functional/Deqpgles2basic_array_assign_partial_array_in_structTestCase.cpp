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
#include "../Deqpgles2BaseFunc.h"
#include "../ActsDeqpgles20016TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_015116_1 "dEQP-GLES2.functional.uniform_api.value.assigned.basic"
#define VkglTestCase_015116_2 "_array_assign_partial.array_in_struct.float_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015116, VkglTestCase_015116_1, VkglTestCase_015116_2);

#define VkglTestCase_015117_1 "dEQP-GLES2.functional.uniform_api.value.assigned.basic_"
#define VkglTestCase_015117_2 "array_assign_partial.array_in_struct.float_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015117, VkglTestCase_015117_1, VkglTestCase_015117_2);

#define VkglTestCase_015118_1 "dEQP-GLES2.functional.uniform_api.value.assigned.basi"
#define VkglTestCase_015118_2 "c_array_assign_partial.array_in_struct.float_vec4_both"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015118, VkglTestCase_015118_1, VkglTestCase_015118_2);

#define VkglTestCase_015119_1 "dEQP-GLES2.functional.uniform_api.value.assigned.basic"
#define VkglTestCase_015119_2 "_array_assign_partial.array_in_struct.mat4_mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015119, VkglTestCase_015119_1, VkglTestCase_015119_2);

#define VkglTestCase_015120_1 "dEQP-GLES2.functional.uniform_api.value.assigned.basic_"
#define VkglTestCase_015120_2 "array_assign_partial.array_in_struct.mat4_mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015120, VkglTestCase_015120_1, VkglTestCase_015120_2);

#define VkglTestCase_015121_1 "dEQP-GLES2.functional.uniform_api.value.assigned.basi"
#define VkglTestCase_015121_2 "c_array_assign_partial.array_in_struct.mat4_mat2_both"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015121, VkglTestCase_015121_1, VkglTestCase_015121_2);

#define VkglTestCase_015122_1 "dEQP-GLES2.functional.uniform_api.value.assigned.basic"
#define VkglTestCase_015122_2 "_array_assign_partial.array_in_struct.int_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015122, VkglTestCase_015122_1, VkglTestCase_015122_2);

#define VkglTestCase_015123_1 "dEQP-GLES2.functional.uniform_api.value.assigned.basic_"
#define VkglTestCase_015123_2 "array_assign_partial.array_in_struct.int_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015123, VkglTestCase_015123_1, VkglTestCase_015123_2);

#define VkglTestCase_015124_1 "dEQP-GLES2.functional.uniform_api.value.assigned.basi"
#define VkglTestCase_015124_2 "c_array_assign_partial.array_in_struct.int_ivec4_both"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015124, VkglTestCase_015124_1, VkglTestCase_015124_2);

#define VkglTestCase_015125_1 "dEQP-GLES2.functional.uniform_api.value.assigned.basic"
#define VkglTestCase_015125_2 "_array_assign_partial.array_in_struct.bool_bvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015125, VkglTestCase_015125_1, VkglTestCase_015125_2);

#define VkglTestCase_015126_1 "dEQP-GLES2.functional.uniform_api.value.assigned.basic_"
#define VkglTestCase_015126_2 "array_assign_partial.array_in_struct.bool_bvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015126, VkglTestCase_015126_1, VkglTestCase_015126_2);

#define VkglTestCase_015127_1 "dEQP-GLES2.functional.uniform_api.value.assigned.basi"
#define VkglTestCase_015127_2 "c_array_assign_partial.array_in_struct.bool_bvec4_both"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015127, VkglTestCase_015127_1, VkglTestCase_015127_2);

#define VkglTestCase_015128_1 "dEQP-GLES2.functional.uniform_api.value.assigned.basic_array"
#define VkglTestCase_015128_2 "_assign_partial.array_in_struct.sampler2D_samplerCube_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015128, VkglTestCase_015128_1, VkglTestCase_015128_2);

#define VkglTestCase_015129_1 "dEQP-GLES2.functional.uniform_api.value.assigned.basic_array_"
#define VkglTestCase_015129_2 "assign_partial.array_in_struct.sampler2D_samplerCube_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015129, VkglTestCase_015129_1, VkglTestCase_015129_2);

#define VkglTestCase_015130_1 "dEQP-GLES2.functional.uniform_api.value.assigned.basic_arra"
#define VkglTestCase_015130_2 "y_assign_partial.array_in_struct.sampler2D_samplerCube_both"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015130, VkglTestCase_015130_1, VkglTestCase_015130_2);
