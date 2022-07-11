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

#define VkglTestCase_015074_1 "dEQP-GLES2.functional.uniform_api.value.assigned.basi"
#define VkglTestCase_015074_2 "c_array_assign_full.array_in_struct.float_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015074, VkglTestCase_015074_1, VkglTestCase_015074_2);

#define VkglTestCase_015075_1 "dEQP-GLES2.functional.uniform_api.value.assigned.basic"
#define VkglTestCase_015075_2 "_array_assign_full.array_in_struct.float_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015075, VkglTestCase_015075_1, VkglTestCase_015075_2);

#define VkglTestCase_015076_1 "dEQP-GLES2.functional.uniform_api.value.assigned.bas"
#define VkglTestCase_015076_2 "ic_array_assign_full.array_in_struct.float_vec4_both"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015076, VkglTestCase_015076_1, VkglTestCase_015076_2);

#define VkglTestCase_015077_1 "dEQP-GLES2.functional.uniform_api.value.assigned.bas"
#define VkglTestCase_015077_2 "ic_array_assign_full.array_in_struct.mat4_mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015077, VkglTestCase_015077_1, VkglTestCase_015077_2);

#define VkglTestCase_015078_1 "dEQP-GLES2.functional.uniform_api.value.assigned.basi"
#define VkglTestCase_015078_2 "c_array_assign_full.array_in_struct.mat4_mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015078, VkglTestCase_015078_1, VkglTestCase_015078_2);

#define VkglTestCase_015079_1 "dEQP-GLES2.functional.uniform_api.value.assigned.ba"
#define VkglTestCase_015079_2 "sic_array_assign_full.array_in_struct.mat4_mat2_both"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015079, VkglTestCase_015079_1, VkglTestCase_015079_2);

#define VkglTestCase_015080_1 "dEQP-GLES2.functional.uniform_api.value.assigned.bas"
#define VkglTestCase_015080_2 "ic_array_assign_full.array_in_struct.int_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015080, VkglTestCase_015080_1, VkglTestCase_015080_2);

#define VkglTestCase_015081_1 "dEQP-GLES2.functional.uniform_api.value.assigned.basi"
#define VkglTestCase_015081_2 "c_array_assign_full.array_in_struct.int_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015081, VkglTestCase_015081_1, VkglTestCase_015081_2);

#define VkglTestCase_015082_1 "dEQP-GLES2.functional.uniform_api.value.assigned.ba"
#define VkglTestCase_015082_2 "sic_array_assign_full.array_in_struct.int_ivec4_both"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015082, VkglTestCase_015082_1, VkglTestCase_015082_2);

#define VkglTestCase_015083_1 "dEQP-GLES2.functional.uniform_api.value.assigned.basi"
#define VkglTestCase_015083_2 "c_array_assign_full.array_in_struct.bool_bvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015083, VkglTestCase_015083_1, VkglTestCase_015083_2);

#define VkglTestCase_015084_1 "dEQP-GLES2.functional.uniform_api.value.assigned.basic"
#define VkglTestCase_015084_2 "_array_assign_full.array_in_struct.bool_bvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015084, VkglTestCase_015084_1, VkglTestCase_015084_2);

#define VkglTestCase_015085_1 "dEQP-GLES2.functional.uniform_api.value.assigned.bas"
#define VkglTestCase_015085_2 "ic_array_assign_full.array_in_struct.bool_bvec4_both"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015085, VkglTestCase_015085_1, VkglTestCase_015085_2);

#define VkglTestCase_015086_1 "dEQP-GLES2.functional.uniform_api.value.assigned.basic_arr"
#define VkglTestCase_015086_2 "ay_assign_full.array_in_struct.sampler2D_samplerCube_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015086, VkglTestCase_015086_1, VkglTestCase_015086_2);

#define VkglTestCase_015087_1 "dEQP-GLES2.functional.uniform_api.value.assigned.basic_arra"
#define VkglTestCase_015087_2 "y_assign_full.array_in_struct.sampler2D_samplerCube_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015087, VkglTestCase_015087_1, VkglTestCase_015087_2);

#define VkglTestCase_015088_1 "dEQP-GLES2.functional.uniform_api.value.assigned.basic_ar"
#define VkglTestCase_015088_2 "ray_assign_full.array_in_struct.sampler2D_samplerCube_both"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015088, VkglTestCase_015088_1, VkglTestCase_015088_2);
