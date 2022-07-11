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

#define VkglTestCase_037270_1 "dEQP-GLES3.functional.uniform_api.value.init"
#define VkglTestCase_037270_2 "ial.render.array_in_struct.float_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037270, VkglTestCase_037270_1, VkglTestCase_037270_2);

#define VkglTestCase_037271_1 "dEQP-GLES3.functional.uniform_api.value.initi"
#define VkglTestCase_037271_2 "al.render.array_in_struct.float_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037271, VkglTestCase_037271_1, VkglTestCase_037271_2);

#define VkglTestCase_037272_1 "dEQP-GLES3.functional.uniform_api.value.ini"
#define VkglTestCase_037272_2 "tial.render.array_in_struct.float_vec4_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037272, VkglTestCase_037272_1, VkglTestCase_037272_2);

#define VkglTestCase_037273_1 "dEQP-GLES3.functional.uniform_api.value.ini"
#define VkglTestCase_037273_2 "tial.render.array_in_struct.mat4_mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037273, VkglTestCase_037273_1, VkglTestCase_037273_2);

#define VkglTestCase_037274_1 "dEQP-GLES3.functional.uniform_api.value.init"
#define VkglTestCase_037274_2 "ial.render.array_in_struct.mat4_mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037274, VkglTestCase_037274_1, VkglTestCase_037274_2);

#define VkglTestCase_037275_1 "dEQP-GLES3.functional.uniform_api.value.in"
#define VkglTestCase_037275_2 "itial.render.array_in_struct.mat4_mat2_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037275, VkglTestCase_037275_1, VkglTestCase_037275_2);

#define VkglTestCase_037276_1 "dEQP-GLES3.functional.uniform_api.value.ini"
#define VkglTestCase_037276_2 "tial.render.array_in_struct.int_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037276, VkglTestCase_037276_1, VkglTestCase_037276_2);

#define VkglTestCase_037277_1 "dEQP-GLES3.functional.uniform_api.value.init"
#define VkglTestCase_037277_2 "ial.render.array_in_struct.int_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037277, VkglTestCase_037277_1, VkglTestCase_037277_2);

#define VkglTestCase_037278_1 "dEQP-GLES3.functional.uniform_api.value.in"
#define VkglTestCase_037278_2 "itial.render.array_in_struct.int_ivec4_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037278, VkglTestCase_037278_1, VkglTestCase_037278_2);

#define VkglTestCase_037279_1 "dEQP-GLES3.functional.uniform_api.value.init"
#define VkglTestCase_037279_2 "ial.render.array_in_struct.uint_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037279, VkglTestCase_037279_1, VkglTestCase_037279_2);

#define VkglTestCase_037280_1 "dEQP-GLES3.functional.uniform_api.value.initi"
#define VkglTestCase_037280_2 "al.render.array_in_struct.uint_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037280, VkglTestCase_037280_1, VkglTestCase_037280_2);

#define VkglTestCase_037281_1 "dEQP-GLES3.functional.uniform_api.value.ini"
#define VkglTestCase_037281_2 "tial.render.array_in_struct.uint_uvec4_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037281, VkglTestCase_037281_1, VkglTestCase_037281_2);

#define VkglTestCase_037282_1 "dEQP-GLES3.functional.uniform_api.value.init"
#define VkglTestCase_037282_2 "ial.render.array_in_struct.bool_bvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037282, VkglTestCase_037282_1, VkglTestCase_037282_2);

#define VkglTestCase_037283_1 "dEQP-GLES3.functional.uniform_api.value.initi"
#define VkglTestCase_037283_2 "al.render.array_in_struct.bool_bvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037283, VkglTestCase_037283_1, VkglTestCase_037283_2);

#define VkglTestCase_037284_1 "dEQP-GLES3.functional.uniform_api.value.ini"
#define VkglTestCase_037284_2 "tial.render.array_in_struct.bool_bvec4_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037284, VkglTestCase_037284_1, VkglTestCase_037284_2);

#define VkglTestCase_037789_1 "dEQP-GLES3.functional.uniform_api.value.assigned.b"
#define VkglTestCase_037789_2 "y_pointer.render.array_in_struct.float_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037789, VkglTestCase_037789_1, VkglTestCase_037789_2);

#define VkglTestCase_037790_1 "dEQP-GLES3.functional.uniform_api.value.assigned.by"
#define VkglTestCase_037790_2 "_pointer.render.array_in_struct.float_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037790, VkglTestCase_037790_1, VkglTestCase_037790_2);

#define VkglTestCase_037791_1 "dEQP-GLES3.functional.uniform_api.value.assigned."
#define VkglTestCase_037791_2 "by_pointer.render.array_in_struct.float_vec4_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037791, VkglTestCase_037791_1, VkglTestCase_037791_2);

#define VkglTestCase_037792_1 "dEQP-GLES3.functional.uniform_api.value.assigned."
#define VkglTestCase_037792_2 "by_pointer.render.array_in_struct.mat4_mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037792, VkglTestCase_037792_1, VkglTestCase_037792_2);

#define VkglTestCase_037793_1 "dEQP-GLES3.functional.uniform_api.value.assigned.b"
#define VkglTestCase_037793_2 "y_pointer.render.array_in_struct.mat4_mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037793, VkglTestCase_037793_1, VkglTestCase_037793_2);

#define VkglTestCase_037794_1 "dEQP-GLES3.functional.uniform_api.value.assigned"
#define VkglTestCase_037794_2 ".by_pointer.render.array_in_struct.mat4_mat2_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037794, VkglTestCase_037794_1, VkglTestCase_037794_2);

#define VkglTestCase_037795_1 "dEQP-GLES3.functional.uniform_api.value.assigned."
#define VkglTestCase_037795_2 "by_pointer.render.array_in_struct.int_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037795, VkglTestCase_037795_1, VkglTestCase_037795_2);

#define VkglTestCase_037796_1 "dEQP-GLES3.functional.uniform_api.value.assigned.b"
#define VkglTestCase_037796_2 "y_pointer.render.array_in_struct.int_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037796, VkglTestCase_037796_1, VkglTestCase_037796_2);

#define VkglTestCase_037797_1 "dEQP-GLES3.functional.uniform_api.value.assigned"
#define VkglTestCase_037797_2 ".by_pointer.render.array_in_struct.int_ivec4_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037797, VkglTestCase_037797_1, VkglTestCase_037797_2);

#define VkglTestCase_037798_1 "dEQP-GLES3.functional.uniform_api.value.assigned.b"
#define VkglTestCase_037798_2 "y_pointer.render.array_in_struct.uint_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037798, VkglTestCase_037798_1, VkglTestCase_037798_2);

#define VkglTestCase_037799_1 "dEQP-GLES3.functional.uniform_api.value.assigned.by"
#define VkglTestCase_037799_2 "_pointer.render.array_in_struct.uint_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037799, VkglTestCase_037799_1, VkglTestCase_037799_2);

#define VkglTestCase_037800_1 "dEQP-GLES3.functional.uniform_api.value.assigned."
#define VkglTestCase_037800_2 "by_pointer.render.array_in_struct.uint_uvec4_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037800, VkglTestCase_037800_1, VkglTestCase_037800_2);

#define VkglTestCase_037801_1 "dEQP-GLES3.functional.uniform_api.value.assigned.b"
#define VkglTestCase_037801_2 "y_pointer.render.array_in_struct.bool_bvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037801, VkglTestCase_037801_1, VkglTestCase_037801_2);

#define VkglTestCase_037802_1 "dEQP-GLES3.functional.uniform_api.value.assigned.by"
#define VkglTestCase_037802_2 "_pointer.render.array_in_struct.bool_bvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037802, VkglTestCase_037802_1, VkglTestCase_037802_2);

#define VkglTestCase_037803_1 "dEQP-GLES3.functional.uniform_api.value.assigned."
#define VkglTestCase_037803_2 "by_pointer.render.array_in_struct.bool_bvec4_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037803, VkglTestCase_037803_1, VkglTestCase_037803_2);

#define VkglTestCase_037804_1 "dEQP-GLES3.functional.uniform_api.value.assigned.by_poi"
#define VkglTestCase_037804_2 "nter.render.array_in_struct.sampler2D_samplerCube_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037804, VkglTestCase_037804_1, VkglTestCase_037804_2);

#define VkglTestCase_037805_1 "dEQP-GLES3.functional.uniform_api.value.assigned.by_poin"
#define VkglTestCase_037805_2 "ter.render.array_in_struct.sampler2D_samplerCube_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037805, VkglTestCase_037805_1, VkglTestCase_037805_2);

#define VkglTestCase_037806_1 "dEQP-GLES3.functional.uniform_api.value.assigned.by_po"
#define VkglTestCase_037806_2 "inter.render.array_in_struct.sampler2D_samplerCube_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037806, VkglTestCase_037806_1, VkglTestCase_037806_2);

#define VkglTestCase_038167_1 "dEQP-GLES3.functional.uniform_api.value.assigned."
#define VkglTestCase_038167_2 "by_value.render.array_in_struct.float_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_038167, VkglTestCase_038167_1, VkglTestCase_038167_2);

#define VkglTestCase_038168_1 "dEQP-GLES3.functional.uniform_api.value.assigned.b"
#define VkglTestCase_038168_2 "y_value.render.array_in_struct.float_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_038168, VkglTestCase_038168_1, VkglTestCase_038168_2);

#define VkglTestCase_038169_1 "dEQP-GLES3.functional.uniform_api.value.assigned"
#define VkglTestCase_038169_2 ".by_value.render.array_in_struct.float_vec4_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_038169, VkglTestCase_038169_1, VkglTestCase_038169_2);

#define VkglTestCase_038170_1 "dEQP-GLES3.functional.uniform_api.value.assigned"
#define VkglTestCase_038170_2 ".by_value.render.array_in_struct.int_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_038170, VkglTestCase_038170_1, VkglTestCase_038170_2);

#define VkglTestCase_038171_1 "dEQP-GLES3.functional.uniform_api.value.assigned."
#define VkglTestCase_038171_2 "by_value.render.array_in_struct.int_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_038171, VkglTestCase_038171_1, VkglTestCase_038171_2);

#define VkglTestCase_038172_1 "dEQP-GLES3.functional.uniform_api.value.assigne"
#define VkglTestCase_038172_2 "d.by_value.render.array_in_struct.int_ivec4_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_038172, VkglTestCase_038172_1, VkglTestCase_038172_2);

#define VkglTestCase_038173_1 "dEQP-GLES3.functional.uniform_api.value.assigned."
#define VkglTestCase_038173_2 "by_value.render.array_in_struct.uint_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_038173, VkglTestCase_038173_1, VkglTestCase_038173_2);

#define VkglTestCase_038174_1 "dEQP-GLES3.functional.uniform_api.value.assigned.b"
#define VkglTestCase_038174_2 "y_value.render.array_in_struct.uint_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_038174, VkglTestCase_038174_1, VkglTestCase_038174_2);

#define VkglTestCase_038175_1 "dEQP-GLES3.functional.uniform_api.value.assigned"
#define VkglTestCase_038175_2 ".by_value.render.array_in_struct.uint_uvec4_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_038175, VkglTestCase_038175_1, VkglTestCase_038175_2);

#define VkglTestCase_038176_1 "dEQP-GLES3.functional.uniform_api.value.assigned."
#define VkglTestCase_038176_2 "by_value.render.array_in_struct.bool_bvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_038176, VkglTestCase_038176_1, VkglTestCase_038176_2);

#define VkglTestCase_038177_1 "dEQP-GLES3.functional.uniform_api.value.assigned.b"
#define VkglTestCase_038177_2 "y_value.render.array_in_struct.bool_bvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_038177, VkglTestCase_038177_1, VkglTestCase_038177_2);

#define VkglTestCase_038178_1 "dEQP-GLES3.functional.uniform_api.value.assigned"
#define VkglTestCase_038178_2 ".by_value.render.array_in_struct.bool_bvec4_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_038178, VkglTestCase_038178_1, VkglTestCase_038178_2);

#define VkglTestCase_038179_1 "dEQP-GLES3.functional.uniform_api.value.assigned.by_va"
#define VkglTestCase_038179_2 "lue.render.array_in_struct.sampler2D_samplerCube_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_038179, VkglTestCase_038179_1, VkglTestCase_038179_2);

#define VkglTestCase_038180_1 "dEQP-GLES3.functional.uniform_api.value.assigned.by_val"
#define VkglTestCase_038180_2 "ue.render.array_in_struct.sampler2D_samplerCube_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_038180, VkglTestCase_038180_1, VkglTestCase_038180_2);

#define VkglTestCase_038181_1 "dEQP-GLES3.functional.uniform_api.value.assigned.by_v"
#define VkglTestCase_038181_2 "alue.render.array_in_struct.sampler2D_samplerCube_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_038181, VkglTestCase_038181_1, VkglTestCase_038181_2);
