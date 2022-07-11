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

#define VkglTestCase_038233_1 "dEQP-GLES3.functional.uniform_api.value.assigned.basi"
#define VkglTestCase_038233_2 "c_array_assign_full.array_in_struct.float_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038233, VkglTestCase_038233_1, VkglTestCase_038233_2);

#define VkglTestCase_038234_1 "dEQP-GLES3.functional.uniform_api.value.assigned.basic"
#define VkglTestCase_038234_2 "_array_assign_full.array_in_struct.float_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038234, VkglTestCase_038234_1, VkglTestCase_038234_2);

#define VkglTestCase_038235_1 "dEQP-GLES3.functional.uniform_api.value.assigned.bas"
#define VkglTestCase_038235_2 "ic_array_assign_full.array_in_struct.float_vec4_both"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038235, VkglTestCase_038235_1, VkglTestCase_038235_2);

#define VkglTestCase_038236_1 "dEQP-GLES3.functional.uniform_api.value.assigned.bas"
#define VkglTestCase_038236_2 "ic_array_assign_full.array_in_struct.mat4_mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038236, VkglTestCase_038236_1, VkglTestCase_038236_2);

#define VkglTestCase_038237_1 "dEQP-GLES3.functional.uniform_api.value.assigned.basi"
#define VkglTestCase_038237_2 "c_array_assign_full.array_in_struct.mat4_mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038237, VkglTestCase_038237_1, VkglTestCase_038237_2);

#define VkglTestCase_038238_1 "dEQP-GLES3.functional.uniform_api.value.assigned.ba"
#define VkglTestCase_038238_2 "sic_array_assign_full.array_in_struct.mat4_mat2_both"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038238, VkglTestCase_038238_1, VkglTestCase_038238_2);

#define VkglTestCase_038239_1 "dEQP-GLES3.functional.uniform_api.value.assigned.bas"
#define VkglTestCase_038239_2 "ic_array_assign_full.array_in_struct.int_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038239, VkglTestCase_038239_1, VkglTestCase_038239_2);

#define VkglTestCase_038240_1 "dEQP-GLES3.functional.uniform_api.value.assigned.basi"
#define VkglTestCase_038240_2 "c_array_assign_full.array_in_struct.int_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038240, VkglTestCase_038240_1, VkglTestCase_038240_2);

#define VkglTestCase_038241_1 "dEQP-GLES3.functional.uniform_api.value.assigned.ba"
#define VkglTestCase_038241_2 "sic_array_assign_full.array_in_struct.int_ivec4_both"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038241, VkglTestCase_038241_1, VkglTestCase_038241_2);

#define VkglTestCase_038242_1 "dEQP-GLES3.functional.uniform_api.value.assigned.basi"
#define VkglTestCase_038242_2 "c_array_assign_full.array_in_struct.uint_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038242, VkglTestCase_038242_1, VkglTestCase_038242_2);

#define VkglTestCase_038243_1 "dEQP-GLES3.functional.uniform_api.value.assigned.basic"
#define VkglTestCase_038243_2 "_array_assign_full.array_in_struct.uint_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038243, VkglTestCase_038243_1, VkglTestCase_038243_2);

#define VkglTestCase_038244_1 "dEQP-GLES3.functional.uniform_api.value.assigned.bas"
#define VkglTestCase_038244_2 "ic_array_assign_full.array_in_struct.uint_uvec4_both"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038244, VkglTestCase_038244_1, VkglTestCase_038244_2);

#define VkglTestCase_038245_1 "dEQP-GLES3.functional.uniform_api.value.assigned.basi"
#define VkglTestCase_038245_2 "c_array_assign_full.array_in_struct.bool_bvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038245, VkglTestCase_038245_1, VkglTestCase_038245_2);

#define VkglTestCase_038246_1 "dEQP-GLES3.functional.uniform_api.value.assigned.basic"
#define VkglTestCase_038246_2 "_array_assign_full.array_in_struct.bool_bvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038246, VkglTestCase_038246_1, VkglTestCase_038246_2);

#define VkglTestCase_038247_1 "dEQP-GLES3.functional.uniform_api.value.assigned.bas"
#define VkglTestCase_038247_2 "ic_array_assign_full.array_in_struct.bool_bvec4_both"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038247, VkglTestCase_038247_1, VkglTestCase_038247_2);

#define VkglTestCase_038248_1 "dEQP-GLES3.functional.uniform_api.value.assigned.basic_arr"
#define VkglTestCase_038248_2 "ay_assign_full.array_in_struct.sampler2D_samplerCube_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038248, VkglTestCase_038248_1, VkglTestCase_038248_2);

#define VkglTestCase_038249_1 "dEQP-GLES3.functional.uniform_api.value.assigned.basic_arra"
#define VkglTestCase_038249_2 "y_assign_full.array_in_struct.sampler2D_samplerCube_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038249, VkglTestCase_038249_1, VkglTestCase_038249_2);

#define VkglTestCase_038250_1 "dEQP-GLES3.functional.uniform_api.value.assigned.basic_ar"
#define VkglTestCase_038250_2 "ray_assign_full.array_in_struct.sampler2D_samplerCube_both"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038250, VkglTestCase_038250_1, VkglTestCase_038250_2);
