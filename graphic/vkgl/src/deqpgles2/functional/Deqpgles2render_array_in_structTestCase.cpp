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
#include "../ActsDeqpgles20015TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_014408_1 "dEQP-GLES2.functional.uniform_api.value.init"
#define VkglTestCase_014408_2 "ial.render.array_in_struct.float_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014408, VkglTestCase_014408_1, VkglTestCase_014408_2);

#define VkglTestCase_014409_1 "dEQP-GLES2.functional.uniform_api.value.initi"
#define VkglTestCase_014409_2 "al.render.array_in_struct.float_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014409, VkglTestCase_014409_1, VkglTestCase_014409_2);

#define VkglTestCase_014410_1 "dEQP-GLES2.functional.uniform_api.value.ini"
#define VkglTestCase_014410_2 "tial.render.array_in_struct.float_vec4_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014410, VkglTestCase_014410_1, VkglTestCase_014410_2);

#define VkglTestCase_014411_1 "dEQP-GLES2.functional.uniform_api.value.ini"
#define VkglTestCase_014411_2 "tial.render.array_in_struct.mat4_mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014411, VkglTestCase_014411_1, VkglTestCase_014411_2);

#define VkglTestCase_014412_1 "dEQP-GLES2.functional.uniform_api.value.init"
#define VkglTestCase_014412_2 "ial.render.array_in_struct.mat4_mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014412, VkglTestCase_014412_1, VkglTestCase_014412_2);

#define VkglTestCase_014413_1 "dEQP-GLES2.functional.uniform_api.value.in"
#define VkglTestCase_014413_2 "itial.render.array_in_struct.mat4_mat2_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014413, VkglTestCase_014413_1, VkglTestCase_014413_2);

#define VkglTestCase_014414_1 "dEQP-GLES2.functional.uniform_api.value.ini"
#define VkglTestCase_014414_2 "tial.render.array_in_struct.int_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014414, VkglTestCase_014414_1, VkglTestCase_014414_2);

#define VkglTestCase_014415_1 "dEQP-GLES2.functional.uniform_api.value.init"
#define VkglTestCase_014415_2 "ial.render.array_in_struct.int_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014415, VkglTestCase_014415_1, VkglTestCase_014415_2);

#define VkglTestCase_014416_1 "dEQP-GLES2.functional.uniform_api.value.in"
#define VkglTestCase_014416_2 "itial.render.array_in_struct.int_ivec4_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014416, VkglTestCase_014416_1, VkglTestCase_014416_2);

#define VkglTestCase_014417_1 "dEQP-GLES2.functional.uniform_api.value.init"
#define VkglTestCase_014417_2 "ial.render.array_in_struct.bool_bvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014417, VkglTestCase_014417_1, VkglTestCase_014417_2);

#define VkglTestCase_014418_1 "dEQP-GLES2.functional.uniform_api.value.initi"
#define VkglTestCase_014418_2 "al.render.array_in_struct.bool_bvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014418, VkglTestCase_014418_1, VkglTestCase_014418_2);

#define VkglTestCase_014419_1 "dEQP-GLES2.functional.uniform_api.value.ini"
#define VkglTestCase_014419_2 "tial.render.array_in_struct.bool_bvec4_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014419, VkglTestCase_014419_1, VkglTestCase_014419_2);

#define VkglTestCase_014734_1 "dEQP-GLES2.functional.uniform_api.value.assigned.b"
#define VkglTestCase_014734_2 "y_pointer.render.array_in_struct.float_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014734, VkglTestCase_014734_1, VkglTestCase_014734_2);

#define VkglTestCase_014735_1 "dEQP-GLES2.functional.uniform_api.value.assigned.by"
#define VkglTestCase_014735_2 "_pointer.render.array_in_struct.float_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014735, VkglTestCase_014735_1, VkglTestCase_014735_2);

#define VkglTestCase_014736_1 "dEQP-GLES2.functional.uniform_api.value.assigned."
#define VkglTestCase_014736_2 "by_pointer.render.array_in_struct.float_vec4_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014736, VkglTestCase_014736_1, VkglTestCase_014736_2);

#define VkglTestCase_014737_1 "dEQP-GLES2.functional.uniform_api.value.assigned."
#define VkglTestCase_014737_2 "by_pointer.render.array_in_struct.mat4_mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014737, VkglTestCase_014737_1, VkglTestCase_014737_2);

#define VkglTestCase_014738_1 "dEQP-GLES2.functional.uniform_api.value.assigned.b"
#define VkglTestCase_014738_2 "y_pointer.render.array_in_struct.mat4_mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014738, VkglTestCase_014738_1, VkglTestCase_014738_2);

#define VkglTestCase_014739_1 "dEQP-GLES2.functional.uniform_api.value.assigned"
#define VkglTestCase_014739_2 ".by_pointer.render.array_in_struct.mat4_mat2_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014739, VkglTestCase_014739_1, VkglTestCase_014739_2);

#define VkglTestCase_014740_1 "dEQP-GLES2.functional.uniform_api.value.assigned."
#define VkglTestCase_014740_2 "by_pointer.render.array_in_struct.int_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014740, VkglTestCase_014740_1, VkglTestCase_014740_2);

#define VkglTestCase_014741_1 "dEQP-GLES2.functional.uniform_api.value.assigned.b"
#define VkglTestCase_014741_2 "y_pointer.render.array_in_struct.int_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014741, VkglTestCase_014741_1, VkglTestCase_014741_2);

#define VkglTestCase_014742_1 "dEQP-GLES2.functional.uniform_api.value.assigned"
#define VkglTestCase_014742_2 ".by_pointer.render.array_in_struct.int_ivec4_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014742, VkglTestCase_014742_1, VkglTestCase_014742_2);

#define VkglTestCase_014743_1 "dEQP-GLES2.functional.uniform_api.value.assigned.b"
#define VkglTestCase_014743_2 "y_pointer.render.array_in_struct.bool_bvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014743, VkglTestCase_014743_1, VkglTestCase_014743_2);

#define VkglTestCase_014744_1 "dEQP-GLES2.functional.uniform_api.value.assigned.by"
#define VkglTestCase_014744_2 "_pointer.render.array_in_struct.bool_bvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014744, VkglTestCase_014744_1, VkglTestCase_014744_2);

#define VkglTestCase_014745_1 "dEQP-GLES2.functional.uniform_api.value.assigned."
#define VkglTestCase_014745_2 "by_pointer.render.array_in_struct.bool_bvec4_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014745, VkglTestCase_014745_1, VkglTestCase_014745_2);

#define VkglTestCase_014746_1 "dEQP-GLES2.functional.uniform_api.value.assigned.by_poi"
#define VkglTestCase_014746_2 "nter.render.array_in_struct.sampler2D_samplerCube_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014746, VkglTestCase_014746_1, VkglTestCase_014746_2);

#define VkglTestCase_014747_1 "dEQP-GLES2.functional.uniform_api.value.assigned.by_poin"
#define VkglTestCase_014747_2 "ter.render.array_in_struct.sampler2D_samplerCube_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014747, VkglTestCase_014747_1, VkglTestCase_014747_2);

#define VkglTestCase_014748_1 "dEQP-GLES2.functional.uniform_api.value.assigned.by_po"
#define VkglTestCase_014748_2 "inter.render.array_in_struct.sampler2D_samplerCube_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014748, VkglTestCase_014748_1, VkglTestCase_014748_2);

#define VkglTestCase_015020_1 "dEQP-GLES2.functional.uniform_api.value.assigned."
#define VkglTestCase_015020_2 "by_value.render.array_in_struct.float_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_015020, VkglTestCase_015020_1, VkglTestCase_015020_2);

#define VkglTestCase_015021_1 "dEQP-GLES2.functional.uniform_api.value.assigned.b"
#define VkglTestCase_015021_2 "y_value.render.array_in_struct.float_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_015021, VkglTestCase_015021_1, VkglTestCase_015021_2);

#define VkglTestCase_015022_1 "dEQP-GLES2.functional.uniform_api.value.assigned"
#define VkglTestCase_015022_2 ".by_value.render.array_in_struct.float_vec4_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_015022, VkglTestCase_015022_1, VkglTestCase_015022_2);

#define VkglTestCase_015023_1 "dEQP-GLES2.functional.uniform_api.value.assigned"
#define VkglTestCase_015023_2 ".by_value.render.array_in_struct.int_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_015023, VkglTestCase_015023_1, VkglTestCase_015023_2);

#define VkglTestCase_015024_1 "dEQP-GLES2.functional.uniform_api.value.assigned."
#define VkglTestCase_015024_2 "by_value.render.array_in_struct.int_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_015024, VkglTestCase_015024_1, VkglTestCase_015024_2);

#define VkglTestCase_015025_1 "dEQP-GLES2.functional.uniform_api.value.assigne"
#define VkglTestCase_015025_2 "d.by_value.render.array_in_struct.int_ivec4_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_015025, VkglTestCase_015025_1, VkglTestCase_015025_2);

#define VkglTestCase_015026_1 "dEQP-GLES2.functional.uniform_api.value.assigned."
#define VkglTestCase_015026_2 "by_value.render.array_in_struct.bool_bvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_015026, VkglTestCase_015026_1, VkglTestCase_015026_2);

#define VkglTestCase_015027_1 "dEQP-GLES2.functional.uniform_api.value.assigned.b"
#define VkglTestCase_015027_2 "y_value.render.array_in_struct.bool_bvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_015027, VkglTestCase_015027_1, VkglTestCase_015027_2);

#define VkglTestCase_015028_1 "dEQP-GLES2.functional.uniform_api.value.assigned"
#define VkglTestCase_015028_2 ".by_value.render.array_in_struct.bool_bvec4_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_015028, VkglTestCase_015028_1, VkglTestCase_015028_2);

#define VkglTestCase_015029_1 "dEQP-GLES2.functional.uniform_api.value.assigned.by_va"
#define VkglTestCase_015029_2 "lue.render.array_in_struct.sampler2D_samplerCube_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_015029, VkglTestCase_015029_1, VkglTestCase_015029_2);

#define VkglTestCase_015030_1 "dEQP-GLES2.functional.uniform_api.value.assigned.by_val"
#define VkglTestCase_015030_2 "ue.render.array_in_struct.sampler2D_samplerCube_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_015030, VkglTestCase_015030_1, VkglTestCase_015030_2);

#define VkglTestCase_015031_1 "dEQP-GLES2.functional.uniform_api.value.assigned.by_v"
#define VkglTestCase_015031_2 "alue.render.array_in_struct.sampler2D_samplerCube_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_015031, VkglTestCase_015031_1, VkglTestCase_015031_2);
