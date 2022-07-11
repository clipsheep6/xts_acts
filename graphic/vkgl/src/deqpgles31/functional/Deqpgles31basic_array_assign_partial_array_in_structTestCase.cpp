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
#include "../ActsDeqpgles310018TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_017518_1 "dEQP-GLES31.functional.program_uniform.basic_arra"
#define VkglTestCase_017518_2 "y_assign_partial.array_in_struct.float_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017518, VkglTestCase_017518_1, VkglTestCase_017518_2);

#define VkglTestCase_017519_1 "dEQP-GLES31.functional.program_uniform.basic_array"
#define VkglTestCase_017519_2 "_assign_partial.array_in_struct.float_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017519, VkglTestCase_017519_1, VkglTestCase_017519_2);

#define VkglTestCase_017520_1 "dEQP-GLES31.functional.program_uniform.basic_arr"
#define VkglTestCase_017520_2 "ay_assign_partial.array_in_struct.float_vec4_both"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017520, VkglTestCase_017520_1, VkglTestCase_017520_2);

#define VkglTestCase_017521_1 "dEQP-GLES31.functional.program_uniform.basic_arra"
#define VkglTestCase_017521_2 "y_assign_partial.array_in_struct.mat4_mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017521, VkglTestCase_017521_1, VkglTestCase_017521_2);

#define VkglTestCase_017522_1 "dEQP-GLES31.functional.program_uniform.basic_array"
#define VkglTestCase_017522_2 "_assign_partial.array_in_struct.mat4_mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017522, VkglTestCase_017522_1, VkglTestCase_017522_2);

#define VkglTestCase_017523_1 "dEQP-GLES31.functional.program_uniform.basic_arr"
#define VkglTestCase_017523_2 "ay_assign_partial.array_in_struct.mat4_mat2_both"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017523, VkglTestCase_017523_1, VkglTestCase_017523_2);

#define VkglTestCase_017524_1 "dEQP-GLES31.functional.program_uniform.basic_arra"
#define VkglTestCase_017524_2 "y_assign_partial.array_in_struct.int_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017524, VkglTestCase_017524_1, VkglTestCase_017524_2);

#define VkglTestCase_017525_1 "dEQP-GLES31.functional.program_uniform.basic_array"
#define VkglTestCase_017525_2 "_assign_partial.array_in_struct.int_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017525, VkglTestCase_017525_1, VkglTestCase_017525_2);

#define VkglTestCase_017526_1 "dEQP-GLES31.functional.program_uniform.basic_arr"
#define VkglTestCase_017526_2 "ay_assign_partial.array_in_struct.int_ivec4_both"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017526, VkglTestCase_017526_1, VkglTestCase_017526_2);

#define VkglTestCase_017527_1 "dEQP-GLES31.functional.program_uniform.basic_arra"
#define VkglTestCase_017527_2 "y_assign_partial.array_in_struct.uint_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017527, VkglTestCase_017527_1, VkglTestCase_017527_2);

#define VkglTestCase_017528_1 "dEQP-GLES31.functional.program_uniform.basic_array"
#define VkglTestCase_017528_2 "_assign_partial.array_in_struct.uint_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017528, VkglTestCase_017528_1, VkglTestCase_017528_2);

#define VkglTestCase_017529_1 "dEQP-GLES31.functional.program_uniform.basic_arr"
#define VkglTestCase_017529_2 "ay_assign_partial.array_in_struct.uint_uvec4_both"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017529, VkglTestCase_017529_1, VkglTestCase_017529_2);

#define VkglTestCase_017530_1 "dEQP-GLES31.functional.program_uniform.basic_arra"
#define VkglTestCase_017530_2 "y_assign_partial.array_in_struct.bool_bvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017530, VkglTestCase_017530_1, VkglTestCase_017530_2);

#define VkglTestCase_017531_1 "dEQP-GLES31.functional.program_uniform.basic_array"
#define VkglTestCase_017531_2 "_assign_partial.array_in_struct.bool_bvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017531, VkglTestCase_017531_1, VkglTestCase_017531_2);

#define VkglTestCase_017532_1 "dEQP-GLES31.functional.program_uniform.basic_arr"
#define VkglTestCase_017532_2 "ay_assign_partial.array_in_struct.bool_bvec4_both"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017532, VkglTestCase_017532_1, VkglTestCase_017532_2);

#define VkglTestCase_017533_1 "dEQP-GLES31.functional.program_uniform.basic_array_assi"
#define VkglTestCase_017533_2 "gn_partial.array_in_struct.sampler2D_samplerCube_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017533, VkglTestCase_017533_1, VkglTestCase_017533_2);

#define VkglTestCase_017534_1 "dEQP-GLES31.functional.program_uniform.basic_array_assig"
#define VkglTestCase_017534_2 "n_partial.array_in_struct.sampler2D_samplerCube_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017534, VkglTestCase_017534_1, VkglTestCase_017534_2);

#define VkglTestCase_017535_1 "dEQP-GLES31.functional.program_uniform.basic_array_ass"
#define VkglTestCase_017535_2 "ign_partial.array_in_struct.sampler2D_samplerCube_both"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017535, VkglTestCase_017535_1, VkglTestCase_017535_2);
