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

#define VkglTestCase_014272_1 "dEQP-GLES2.functional.uniform_api.value.initia"
#define VkglTestCase_014272_2 "l.get_uniform.array_in_struct.float_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014272, VkglTestCase_014272_1, VkglTestCase_014272_2);

#define VkglTestCase_014273_1 "dEQP-GLES2.functional.uniform_api.value.initial"
#define VkglTestCase_014273_2 ".get_uniform.array_in_struct.float_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014273, VkglTestCase_014273_1, VkglTestCase_014273_2);

#define VkglTestCase_014274_1 "dEQP-GLES2.functional.uniform_api.value.initi"
#define VkglTestCase_014274_2 "al.get_uniform.array_in_struct.float_vec4_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014274, VkglTestCase_014274_1, VkglTestCase_014274_2);

#define VkglTestCase_014275_1 "dEQP-GLES2.functional.uniform_api.value.initia"
#define VkglTestCase_014275_2 "l.get_uniform.array_in_struct.mat4_mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014275, VkglTestCase_014275_1, VkglTestCase_014275_2);

#define VkglTestCase_014276_1 "dEQP-GLES2.functional.uniform_api.value.initial"
#define VkglTestCase_014276_2 ".get_uniform.array_in_struct.mat4_mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014276, VkglTestCase_014276_1, VkglTestCase_014276_2);

#define VkglTestCase_014277_1 "dEQP-GLES2.functional.uniform_api.value.initi"
#define VkglTestCase_014277_2 "al.get_uniform.array_in_struct.mat4_mat2_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014277, VkglTestCase_014277_1, VkglTestCase_014277_2);

#define VkglTestCase_014278_1 "dEQP-GLES2.functional.uniform_api.value.initia"
#define VkglTestCase_014278_2 "l.get_uniform.array_in_struct.int_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014278, VkglTestCase_014278_1, VkglTestCase_014278_2);

#define VkglTestCase_014279_1 "dEQP-GLES2.functional.uniform_api.value.initial"
#define VkglTestCase_014279_2 ".get_uniform.array_in_struct.int_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014279, VkglTestCase_014279_1, VkglTestCase_014279_2);

#define VkglTestCase_014280_1 "dEQP-GLES2.functional.uniform_api.value.initi"
#define VkglTestCase_014280_2 "al.get_uniform.array_in_struct.int_ivec4_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014280, VkglTestCase_014280_1, VkglTestCase_014280_2);

#define VkglTestCase_014281_1 "dEQP-GLES2.functional.uniform_api.value.initia"
#define VkglTestCase_014281_2 "l.get_uniform.array_in_struct.bool_bvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014281, VkglTestCase_014281_1, VkglTestCase_014281_2);

#define VkglTestCase_014282_1 "dEQP-GLES2.functional.uniform_api.value.initial"
#define VkglTestCase_014282_2 ".get_uniform.array_in_struct.bool_bvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014282, VkglTestCase_014282_1, VkglTestCase_014282_2);

#define VkglTestCase_014283_1 "dEQP-GLES2.functional.uniform_api.value.initi"
#define VkglTestCase_014283_2 "al.get_uniform.array_in_struct.bool_bvec4_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014283, VkglTestCase_014283_1, VkglTestCase_014283_2);

#define VkglTestCase_014284_1 "dEQP-GLES2.functional.uniform_api.value.initial.get_"
#define VkglTestCase_014284_2 "uniform.array_in_struct.sampler2D_samplerCube_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014284, VkglTestCase_014284_1, VkglTestCase_014284_2);

#define VkglTestCase_014285_1 "dEQP-GLES2.functional.uniform_api.value.initial.get_u"
#define VkglTestCase_014285_2 "niform.array_in_struct.sampler2D_samplerCube_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014285, VkglTestCase_014285_1, VkglTestCase_014285_2);

#define VkglTestCase_014286_1 "dEQP-GLES2.functional.uniform_api.value.initial.get"
#define VkglTestCase_014286_2 "_uniform.array_in_struct.sampler2D_samplerCube_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014286, VkglTestCase_014286_1, VkglTestCase_014286_2);

#define VkglTestCase_014592_1 "dEQP-GLES2.functional.uniform_api.value.assigned.by_"
#define VkglTestCase_014592_2 "pointer.get_uniform.array_in_struct.float_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014592, VkglTestCase_014592_1, VkglTestCase_014592_2);

#define VkglTestCase_014593_1 "dEQP-GLES2.functional.uniform_api.value.assigned.by_p"
#define VkglTestCase_014593_2 "ointer.get_uniform.array_in_struct.float_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014593, VkglTestCase_014593_1, VkglTestCase_014593_2);

#define VkglTestCase_014594_1 "dEQP-GLES2.functional.uniform_api.value.assigned.by"
#define VkglTestCase_014594_2 "_pointer.get_uniform.array_in_struct.float_vec4_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014594, VkglTestCase_014594_1, VkglTestCase_014594_2);

#define VkglTestCase_014595_1 "dEQP-GLES2.functional.uniform_api.value.assigned.by_"
#define VkglTestCase_014595_2 "pointer.get_uniform.array_in_struct.mat4_mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014595, VkglTestCase_014595_1, VkglTestCase_014595_2);

#define VkglTestCase_014596_1 "dEQP-GLES2.functional.uniform_api.value.assigned.by_p"
#define VkglTestCase_014596_2 "ointer.get_uniform.array_in_struct.mat4_mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014596, VkglTestCase_014596_1, VkglTestCase_014596_2);

#define VkglTestCase_014597_1 "dEQP-GLES2.functional.uniform_api.value.assigned.by"
#define VkglTestCase_014597_2 "_pointer.get_uniform.array_in_struct.mat4_mat2_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014597, VkglTestCase_014597_1, VkglTestCase_014597_2);

#define VkglTestCase_014598_1 "dEQP-GLES2.functional.uniform_api.value.assigned.by_"
#define VkglTestCase_014598_2 "pointer.get_uniform.array_in_struct.int_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014598, VkglTestCase_014598_1, VkglTestCase_014598_2);

#define VkglTestCase_014599_1 "dEQP-GLES2.functional.uniform_api.value.assigned.by_p"
#define VkglTestCase_014599_2 "ointer.get_uniform.array_in_struct.int_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014599, VkglTestCase_014599_1, VkglTestCase_014599_2);

#define VkglTestCase_014600_1 "dEQP-GLES2.functional.uniform_api.value.assigned.by"
#define VkglTestCase_014600_2 "_pointer.get_uniform.array_in_struct.int_ivec4_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014600, VkglTestCase_014600_1, VkglTestCase_014600_2);

#define VkglTestCase_014601_1 "dEQP-GLES2.functional.uniform_api.value.assigned.by_"
#define VkglTestCase_014601_2 "pointer.get_uniform.array_in_struct.bool_bvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014601, VkglTestCase_014601_1, VkglTestCase_014601_2);

#define VkglTestCase_014602_1 "dEQP-GLES2.functional.uniform_api.value.assigned.by_p"
#define VkglTestCase_014602_2 "ointer.get_uniform.array_in_struct.bool_bvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014602, VkglTestCase_014602_1, VkglTestCase_014602_2);

#define VkglTestCase_014603_1 "dEQP-GLES2.functional.uniform_api.value.assigned.by"
#define VkglTestCase_014603_2 "_pointer.get_uniform.array_in_struct.bool_bvec4_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014603, VkglTestCase_014603_1, VkglTestCase_014603_2);

#define VkglTestCase_014604_1 "dEQP-GLES2.functional.uniform_api.value.assigned.by_pointe"
#define VkglTestCase_014604_2 "r.get_uniform.array_in_struct.sampler2D_samplerCube_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014604, VkglTestCase_014604_1, VkglTestCase_014604_2);

#define VkglTestCase_014605_1 "dEQP-GLES2.functional.uniform_api.value.assigned.by_pointer"
#define VkglTestCase_014605_2 ".get_uniform.array_in_struct.sampler2D_samplerCube_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014605, VkglTestCase_014605_1, VkglTestCase_014605_2);

#define VkglTestCase_014606_1 "dEQP-GLES2.functional.uniform_api.value.assigned.by_point"
#define VkglTestCase_014606_2 "er.get_uniform.array_in_struct.sampler2D_samplerCube_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014606, VkglTestCase_014606_1, VkglTestCase_014606_2);

#define VkglTestCase_014903_1 "dEQP-GLES2.functional.uniform_api.value.assigned.by"
#define VkglTestCase_014903_2 "_value.get_uniform.array_in_struct.float_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014903, VkglTestCase_014903_1, VkglTestCase_014903_2);

#define VkglTestCase_014904_1 "dEQP-GLES2.functional.uniform_api.value.assigned.by_"
#define VkglTestCase_014904_2 "value.get_uniform.array_in_struct.float_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014904, VkglTestCase_014904_1, VkglTestCase_014904_2);

#define VkglTestCase_014905_1 "dEQP-GLES2.functional.uniform_api.value.assigned.b"
#define VkglTestCase_014905_2 "y_value.get_uniform.array_in_struct.float_vec4_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014905, VkglTestCase_014905_1, VkglTestCase_014905_2);

#define VkglTestCase_014906_1 "dEQP-GLES2.functional.uniform_api.value.assigned.by"
#define VkglTestCase_014906_2 "_value.get_uniform.array_in_struct.int_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014906, VkglTestCase_014906_1, VkglTestCase_014906_2);

#define VkglTestCase_014907_1 "dEQP-GLES2.functional.uniform_api.value.assigned.by_"
#define VkglTestCase_014907_2 "value.get_uniform.array_in_struct.int_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014907, VkglTestCase_014907_1, VkglTestCase_014907_2);

#define VkglTestCase_014908_1 "dEQP-GLES2.functional.uniform_api.value.assigned.b"
#define VkglTestCase_014908_2 "y_value.get_uniform.array_in_struct.int_ivec4_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014908, VkglTestCase_014908_1, VkglTestCase_014908_2);

#define VkglTestCase_014909_1 "dEQP-GLES2.functional.uniform_api.value.assigned.by"
#define VkglTestCase_014909_2 "_value.get_uniform.array_in_struct.bool_bvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014909, VkglTestCase_014909_1, VkglTestCase_014909_2);

#define VkglTestCase_014910_1 "dEQP-GLES2.functional.uniform_api.value.assigned.by_"
#define VkglTestCase_014910_2 "value.get_uniform.array_in_struct.bool_bvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014910, VkglTestCase_014910_1, VkglTestCase_014910_2);

#define VkglTestCase_014911_1 "dEQP-GLES2.functional.uniform_api.value.assigned.b"
#define VkglTestCase_014911_2 "y_value.get_uniform.array_in_struct.bool_bvec4_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014911, VkglTestCase_014911_1, VkglTestCase_014911_2);

#define VkglTestCase_014912_1 "dEQP-GLES2.functional.uniform_api.value.assigned.by_value"
#define VkglTestCase_014912_2 ".get_uniform.array_in_struct.sampler2D_samplerCube_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014912, VkglTestCase_014912_1, VkglTestCase_014912_2);

#define VkglTestCase_014913_1 "dEQP-GLES2.functional.uniform_api.value.assigned.by_value."
#define VkglTestCase_014913_2 "get_uniform.array_in_struct.sampler2D_samplerCube_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014913, VkglTestCase_014913_1, VkglTestCase_014913_2);

#define VkglTestCase_014914_1 "dEQP-GLES2.functional.uniform_api.value.assigned.by_valu"
#define VkglTestCase_014914_2 "e.get_uniform.array_in_struct.sampler2D_samplerCube_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014914, VkglTestCase_014914_1, VkglTestCase_014914_2);
