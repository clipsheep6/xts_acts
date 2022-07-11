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

#define VkglTestCase_017467_1 "dEQP-GLES31.functional.program_uniform.basic_arr"
#define VkglTestCase_017467_2 "ay_assign_full.array_in_struct.float_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017467, VkglTestCase_017467_1, VkglTestCase_017467_2);

#define VkglTestCase_017468_1 "dEQP-GLES31.functional.program_uniform.basic_arra"
#define VkglTestCase_017468_2 "y_assign_full.array_in_struct.float_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017468, VkglTestCase_017468_1, VkglTestCase_017468_2);

#define VkglTestCase_017469_1 "dEQP-GLES31.functional.program_uniform.basic_ar"
#define VkglTestCase_017469_2 "ray_assign_full.array_in_struct.float_vec4_both"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017469, VkglTestCase_017469_1, VkglTestCase_017469_2);

#define VkglTestCase_017470_1 "dEQP-GLES31.functional.program_uniform.basic_ar"
#define VkglTestCase_017470_2 "ray_assign_full.array_in_struct.mat4_mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017470, VkglTestCase_017470_1, VkglTestCase_017470_2);

#define VkglTestCase_017471_1 "dEQP-GLES31.functional.program_uniform.basic_arr"
#define VkglTestCase_017471_2 "ay_assign_full.array_in_struct.mat4_mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017471, VkglTestCase_017471_1, VkglTestCase_017471_2);

#define VkglTestCase_017472_1 "dEQP-GLES31.functional.program_uniform.basic_a"
#define VkglTestCase_017472_2 "rray_assign_full.array_in_struct.mat4_mat2_both"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017472, VkglTestCase_017472_1, VkglTestCase_017472_2);

#define VkglTestCase_017473_1 "dEQP-GLES31.functional.program_uniform.basic_ar"
#define VkglTestCase_017473_2 "ray_assign_full.array_in_struct.int_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017473, VkglTestCase_017473_1, VkglTestCase_017473_2);

#define VkglTestCase_017474_1 "dEQP-GLES31.functional.program_uniform.basic_arr"
#define VkglTestCase_017474_2 "ay_assign_full.array_in_struct.int_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017474, VkglTestCase_017474_1, VkglTestCase_017474_2);

#define VkglTestCase_017475_1 "dEQP-GLES31.functional.program_uniform.basic_a"
#define VkglTestCase_017475_2 "rray_assign_full.array_in_struct.int_ivec4_both"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017475, VkglTestCase_017475_1, VkglTestCase_017475_2);

#define VkglTestCase_017476_1 "dEQP-GLES31.functional.program_uniform.basic_arr"
#define VkglTestCase_017476_2 "ay_assign_full.array_in_struct.uint_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017476, VkglTestCase_017476_1, VkglTestCase_017476_2);

#define VkglTestCase_017477_1 "dEQP-GLES31.functional.program_uniform.basic_arra"
#define VkglTestCase_017477_2 "y_assign_full.array_in_struct.uint_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017477, VkglTestCase_017477_1, VkglTestCase_017477_2);

#define VkglTestCase_017478_1 "dEQP-GLES31.functional.program_uniform.basic_ar"
#define VkglTestCase_017478_2 "ray_assign_full.array_in_struct.uint_uvec4_both"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017478, VkglTestCase_017478_1, VkglTestCase_017478_2);

#define VkglTestCase_017479_1 "dEQP-GLES31.functional.program_uniform.basic_arr"
#define VkglTestCase_017479_2 "ay_assign_full.array_in_struct.bool_bvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017479, VkglTestCase_017479_1, VkglTestCase_017479_2);

#define VkglTestCase_017480_1 "dEQP-GLES31.functional.program_uniform.basic_arra"
#define VkglTestCase_017480_2 "y_assign_full.array_in_struct.bool_bvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017480, VkglTestCase_017480_1, VkglTestCase_017480_2);

#define VkglTestCase_017481_1 "dEQP-GLES31.functional.program_uniform.basic_ar"
#define VkglTestCase_017481_2 "ray_assign_full.array_in_struct.bool_bvec4_both"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017481, VkglTestCase_017481_1, VkglTestCase_017481_2);

#define VkglTestCase_017482_1 "dEQP-GLES31.functional.program_uniform.basic_array_as"
#define VkglTestCase_017482_2 "sign_full.array_in_struct.sampler2D_samplerCube_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017482, VkglTestCase_017482_1, VkglTestCase_017482_2);

#define VkglTestCase_017483_1 "dEQP-GLES31.functional.program_uniform.basic_array_ass"
#define VkglTestCase_017483_2 "ign_full.array_in_struct.sampler2D_samplerCube_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017483, VkglTestCase_017483_1, VkglTestCase_017483_2);

#define VkglTestCase_017484_1 "dEQP-GLES31.functional.program_uniform.basic_array_a"
#define VkglTestCase_017484_2 "ssign_full.array_in_struct.sampler2D_samplerCube_both"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017484, VkglTestCase_017484_1, VkglTestCase_017484_2);
