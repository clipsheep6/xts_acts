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
#include "../ActsDeqpgles30038TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_037084_1 "dEQP-GLES3.functional.uniform_api.value.initia"
#define VkglTestCase_037084_2 "l.get_uniform.array_in_struct.float_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037084, VkglTestCase_037084_1, VkglTestCase_037084_2);

#define VkglTestCase_037085_1 "dEQP-GLES3.functional.uniform_api.value.initial"
#define VkglTestCase_037085_2 ".get_uniform.array_in_struct.float_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037085, VkglTestCase_037085_1, VkglTestCase_037085_2);

#define VkglTestCase_037086_1 "dEQP-GLES3.functional.uniform_api.value.initi"
#define VkglTestCase_037086_2 "al.get_uniform.array_in_struct.float_vec4_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037086, VkglTestCase_037086_1, VkglTestCase_037086_2);

#define VkglTestCase_037087_1 "dEQP-GLES3.functional.uniform_api.value.initia"
#define VkglTestCase_037087_2 "l.get_uniform.array_in_struct.mat4_mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037087, VkglTestCase_037087_1, VkglTestCase_037087_2);

#define VkglTestCase_037088_1 "dEQP-GLES3.functional.uniform_api.value.initial"
#define VkglTestCase_037088_2 ".get_uniform.array_in_struct.mat4_mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037088, VkglTestCase_037088_1, VkglTestCase_037088_2);

#define VkglTestCase_037089_1 "dEQP-GLES3.functional.uniform_api.value.initi"
#define VkglTestCase_037089_2 "al.get_uniform.array_in_struct.mat4_mat2_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037089, VkglTestCase_037089_1, VkglTestCase_037089_2);

#define VkglTestCase_037090_1 "dEQP-GLES3.functional.uniform_api.value.initia"
#define VkglTestCase_037090_2 "l.get_uniform.array_in_struct.int_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037090, VkglTestCase_037090_1, VkglTestCase_037090_2);

#define VkglTestCase_037091_1 "dEQP-GLES3.functional.uniform_api.value.initial"
#define VkglTestCase_037091_2 ".get_uniform.array_in_struct.int_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037091, VkglTestCase_037091_1, VkglTestCase_037091_2);

#define VkglTestCase_037092_1 "dEQP-GLES3.functional.uniform_api.value.initi"
#define VkglTestCase_037092_2 "al.get_uniform.array_in_struct.int_ivec4_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037092, VkglTestCase_037092_1, VkglTestCase_037092_2);

#define VkglTestCase_037093_1 "dEQP-GLES3.functional.uniform_api.value.initia"
#define VkglTestCase_037093_2 "l.get_uniform.array_in_struct.uint_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037093, VkglTestCase_037093_1, VkglTestCase_037093_2);

#define VkglTestCase_037094_1 "dEQP-GLES3.functional.uniform_api.value.initial"
#define VkglTestCase_037094_2 ".get_uniform.array_in_struct.uint_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037094, VkglTestCase_037094_1, VkglTestCase_037094_2);

#define VkglTestCase_037095_1 "dEQP-GLES3.functional.uniform_api.value.initi"
#define VkglTestCase_037095_2 "al.get_uniform.array_in_struct.uint_uvec4_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037095, VkglTestCase_037095_1, VkglTestCase_037095_2);

#define VkglTestCase_037096_1 "dEQP-GLES3.functional.uniform_api.value.initia"
#define VkglTestCase_037096_2 "l.get_uniform.array_in_struct.bool_bvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037096, VkglTestCase_037096_1, VkglTestCase_037096_2);

#define VkglTestCase_037097_1 "dEQP-GLES3.functional.uniform_api.value.initial"
#define VkglTestCase_037097_2 ".get_uniform.array_in_struct.bool_bvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037097, VkglTestCase_037097_1, VkglTestCase_037097_2);

#define VkglTestCase_037098_1 "dEQP-GLES3.functional.uniform_api.value.initi"
#define VkglTestCase_037098_2 "al.get_uniform.array_in_struct.bool_bvec4_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037098, VkglTestCase_037098_1, VkglTestCase_037098_2);

#define VkglTestCase_037099_1 "dEQP-GLES3.functional.uniform_api.value.initial.get_"
#define VkglTestCase_037099_2 "uniform.array_in_struct.sampler2D_samplerCube_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037099, VkglTestCase_037099_1, VkglTestCase_037099_2);

#define VkglTestCase_037100_1 "dEQP-GLES3.functional.uniform_api.value.initial.get_u"
#define VkglTestCase_037100_2 "niform.array_in_struct.sampler2D_samplerCube_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037100, VkglTestCase_037100_1, VkglTestCase_037100_2);

#define VkglTestCase_037101_1 "dEQP-GLES3.functional.uniform_api.value.initial.get"
#define VkglTestCase_037101_2 "_uniform.array_in_struct.sampler2D_samplerCube_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037101, VkglTestCase_037101_1, VkglTestCase_037101_2);

#define VkglTestCase_037567_1 "dEQP-GLES3.functional.uniform_api.value.assigned.by_"
#define VkglTestCase_037567_2 "pointer.get_uniform.array_in_struct.float_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037567, VkglTestCase_037567_1, VkglTestCase_037567_2);

#define VkglTestCase_037568_1 "dEQP-GLES3.functional.uniform_api.value.assigned.by_p"
#define VkglTestCase_037568_2 "ointer.get_uniform.array_in_struct.float_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037568, VkglTestCase_037568_1, VkglTestCase_037568_2);

#define VkglTestCase_037569_1 "dEQP-GLES3.functional.uniform_api.value.assigned.by"
#define VkglTestCase_037569_2 "_pointer.get_uniform.array_in_struct.float_vec4_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037569, VkglTestCase_037569_1, VkglTestCase_037569_2);

#define VkglTestCase_037570_1 "dEQP-GLES3.functional.uniform_api.value.assigned.by_"
#define VkglTestCase_037570_2 "pointer.get_uniform.array_in_struct.mat4_mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037570, VkglTestCase_037570_1, VkglTestCase_037570_2);

#define VkglTestCase_037571_1 "dEQP-GLES3.functional.uniform_api.value.assigned.by_p"
#define VkglTestCase_037571_2 "ointer.get_uniform.array_in_struct.mat4_mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037571, VkglTestCase_037571_1, VkglTestCase_037571_2);

#define VkglTestCase_037572_1 "dEQP-GLES3.functional.uniform_api.value.assigned.by"
#define VkglTestCase_037572_2 "_pointer.get_uniform.array_in_struct.mat4_mat2_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037572, VkglTestCase_037572_1, VkglTestCase_037572_2);

#define VkglTestCase_037573_1 "dEQP-GLES3.functional.uniform_api.value.assigned.by_"
#define VkglTestCase_037573_2 "pointer.get_uniform.array_in_struct.int_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037573, VkglTestCase_037573_1, VkglTestCase_037573_2);

#define VkglTestCase_037574_1 "dEQP-GLES3.functional.uniform_api.value.assigned.by_p"
#define VkglTestCase_037574_2 "ointer.get_uniform.array_in_struct.int_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037574, VkglTestCase_037574_1, VkglTestCase_037574_2);

#define VkglTestCase_037575_1 "dEQP-GLES3.functional.uniform_api.value.assigned.by"
#define VkglTestCase_037575_2 "_pointer.get_uniform.array_in_struct.int_ivec4_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037575, VkglTestCase_037575_1, VkglTestCase_037575_2);

#define VkglTestCase_037576_1 "dEQP-GLES3.functional.uniform_api.value.assigned.by_"
#define VkglTestCase_037576_2 "pointer.get_uniform.array_in_struct.uint_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037576, VkglTestCase_037576_1, VkglTestCase_037576_2);

#define VkglTestCase_037577_1 "dEQP-GLES3.functional.uniform_api.value.assigned.by_p"
#define VkglTestCase_037577_2 "ointer.get_uniform.array_in_struct.uint_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037577, VkglTestCase_037577_1, VkglTestCase_037577_2);

#define VkglTestCase_037578_1 "dEQP-GLES3.functional.uniform_api.value.assigned.by"
#define VkglTestCase_037578_2 "_pointer.get_uniform.array_in_struct.uint_uvec4_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037578, VkglTestCase_037578_1, VkglTestCase_037578_2);

#define VkglTestCase_037579_1 "dEQP-GLES3.functional.uniform_api.value.assigned.by_"
#define VkglTestCase_037579_2 "pointer.get_uniform.array_in_struct.bool_bvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037579, VkglTestCase_037579_1, VkglTestCase_037579_2);

#define VkglTestCase_037580_1 "dEQP-GLES3.functional.uniform_api.value.assigned.by_p"
#define VkglTestCase_037580_2 "ointer.get_uniform.array_in_struct.bool_bvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037580, VkglTestCase_037580_1, VkglTestCase_037580_2);

#define VkglTestCase_037581_1 "dEQP-GLES3.functional.uniform_api.value.assigned.by"
#define VkglTestCase_037581_2 "_pointer.get_uniform.array_in_struct.bool_bvec4_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037581, VkglTestCase_037581_1, VkglTestCase_037581_2);

#define VkglTestCase_037582_1 "dEQP-GLES3.functional.uniform_api.value.assigned.by_pointe"
#define VkglTestCase_037582_2 "r.get_uniform.array_in_struct.sampler2D_samplerCube_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037582, VkglTestCase_037582_1, VkglTestCase_037582_2);

#define VkglTestCase_037583_1 "dEQP-GLES3.functional.uniform_api.value.assigned.by_pointer"
#define VkglTestCase_037583_2 ".get_uniform.array_in_struct.sampler2D_samplerCube_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037583, VkglTestCase_037583_1, VkglTestCase_037583_2);

#define VkglTestCase_037584_1 "dEQP-GLES3.functional.uniform_api.value.assigned.by_point"
#define VkglTestCase_037584_2 "er.get_uniform.array_in_struct.sampler2D_samplerCube_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037584, VkglTestCase_037584_1, VkglTestCase_037584_2);

#define VkglTestCase_038020_1 "dEQP-GLES3.functional.uniform_api.value.assigned.by"
#define VkglTestCase_038020_2 "_value.get_uniform.array_in_struct.float_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_038020, VkglTestCase_038020_1, VkglTestCase_038020_2);

#define VkglTestCase_038021_1 "dEQP-GLES3.functional.uniform_api.value.assigned.by_"
#define VkglTestCase_038021_2 "value.get_uniform.array_in_struct.float_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_038021, VkglTestCase_038021_1, VkglTestCase_038021_2);

#define VkglTestCase_038022_1 "dEQP-GLES3.functional.uniform_api.value.assigned.b"
#define VkglTestCase_038022_2 "y_value.get_uniform.array_in_struct.float_vec4_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_038022, VkglTestCase_038022_1, VkglTestCase_038022_2);

#define VkglTestCase_038023_1 "dEQP-GLES3.functional.uniform_api.value.assigned.by"
#define VkglTestCase_038023_2 "_value.get_uniform.array_in_struct.int_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_038023, VkglTestCase_038023_1, VkglTestCase_038023_2);

#define VkglTestCase_038024_1 "dEQP-GLES3.functional.uniform_api.value.assigned.by_"
#define VkglTestCase_038024_2 "value.get_uniform.array_in_struct.int_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_038024, VkglTestCase_038024_1, VkglTestCase_038024_2);

#define VkglTestCase_038025_1 "dEQP-GLES3.functional.uniform_api.value.assigned.b"
#define VkglTestCase_038025_2 "y_value.get_uniform.array_in_struct.int_ivec4_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_038025, VkglTestCase_038025_1, VkglTestCase_038025_2);

#define VkglTestCase_038026_1 "dEQP-GLES3.functional.uniform_api.value.assigned.by"
#define VkglTestCase_038026_2 "_value.get_uniform.array_in_struct.uint_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_038026, VkglTestCase_038026_1, VkglTestCase_038026_2);

#define VkglTestCase_038027_1 "dEQP-GLES3.functional.uniform_api.value.assigned.by_"
#define VkglTestCase_038027_2 "value.get_uniform.array_in_struct.uint_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_038027, VkglTestCase_038027_1, VkglTestCase_038027_2);

#define VkglTestCase_038028_1 "dEQP-GLES3.functional.uniform_api.value.assigned.b"
#define VkglTestCase_038028_2 "y_value.get_uniform.array_in_struct.uint_uvec4_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_038028, VkglTestCase_038028_1, VkglTestCase_038028_2);

#define VkglTestCase_038029_1 "dEQP-GLES3.functional.uniform_api.value.assigned.by"
#define VkglTestCase_038029_2 "_value.get_uniform.array_in_struct.bool_bvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_038029, VkglTestCase_038029_1, VkglTestCase_038029_2);

#define VkglTestCase_038030_1 "dEQP-GLES3.functional.uniform_api.value.assigned.by_"
#define VkglTestCase_038030_2 "value.get_uniform.array_in_struct.bool_bvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_038030, VkglTestCase_038030_1, VkglTestCase_038030_2);

#define VkglTestCase_038031_1 "dEQP-GLES3.functional.uniform_api.value.assigned.b"
#define VkglTestCase_038031_2 "y_value.get_uniform.array_in_struct.bool_bvec4_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_038031, VkglTestCase_038031_1, VkglTestCase_038031_2);

#define VkglTestCase_038032_1 "dEQP-GLES3.functional.uniform_api.value.assigned.by_value"
#define VkglTestCase_038032_2 ".get_uniform.array_in_struct.sampler2D_samplerCube_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_038032, VkglTestCase_038032_1, VkglTestCase_038032_2);

#define VkglTestCase_038033_1 "dEQP-GLES3.functional.uniform_api.value.assigned.by_value."
#define VkglTestCase_038033_2 "get_uniform.array_in_struct.sampler2D_samplerCube_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_038033, VkglTestCase_038033_1, VkglTestCase_038033_2);

#define VkglTestCase_038034_1 "dEQP-GLES3.functional.uniform_api.value.assigned.by_valu"
#define VkglTestCase_038034_2 "e.get_uniform.array_in_struct.sampler2D_samplerCube_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_038034, VkglTestCase_038034_1, VkglTestCase_038034_2);
