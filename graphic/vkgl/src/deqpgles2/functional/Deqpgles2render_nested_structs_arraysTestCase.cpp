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

#define VkglTestCase_014420_1 "dEQP-GLES2.functional.uniform_api.value.initial"
#define VkglTestCase_014420_2 ".render.nested_structs_arrays.float_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014420, VkglTestCase_014420_1, VkglTestCase_014420_2);

#define VkglTestCase_014421_1 "dEQP-GLES2.functional.uniform_api.value.initial."
#define VkglTestCase_014421_2 "render.nested_structs_arrays.float_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014421, VkglTestCase_014421_1, VkglTestCase_014421_2);

#define VkglTestCase_014422_1 "dEQP-GLES2.functional.uniform_api.value.initia"
#define VkglTestCase_014422_2 "l.render.nested_structs_arrays.float_vec4_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014422, VkglTestCase_014422_1, VkglTestCase_014422_2);

#define VkglTestCase_014423_1 "dEQP-GLES2.functional.uniform_api.value.initial"
#define VkglTestCase_014423_2 ".render.nested_structs_arrays.mat4_mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014423, VkglTestCase_014423_1, VkglTestCase_014423_2);

#define VkglTestCase_014424_1 "dEQP-GLES2.functional.uniform_api.value.initia"
#define VkglTestCase_014424_2 "l.render.nested_structs_arrays.int_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014424, VkglTestCase_014424_1, VkglTestCase_014424_2);

#define VkglTestCase_014425_1 "dEQP-GLES2.functional.uniform_api.value.initial"
#define VkglTestCase_014425_2 ".render.nested_structs_arrays.int_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014425, VkglTestCase_014425_1, VkglTestCase_014425_2);

#define VkglTestCase_014426_1 "dEQP-GLES2.functional.uniform_api.value.initi"
#define VkglTestCase_014426_2 "al.render.nested_structs_arrays.int_ivec4_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014426, VkglTestCase_014426_1, VkglTestCase_014426_2);

#define VkglTestCase_014427_1 "dEQP-GLES2.functional.uniform_api.value.initial"
#define VkglTestCase_014427_2 ".render.nested_structs_arrays.bool_bvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014427, VkglTestCase_014427_1, VkglTestCase_014427_2);

#define VkglTestCase_014428_1 "dEQP-GLES2.functional.uniform_api.value.initial."
#define VkglTestCase_014428_2 "render.nested_structs_arrays.bool_bvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014428, VkglTestCase_014428_1, VkglTestCase_014428_2);

#define VkglTestCase_014429_1 "dEQP-GLES2.functional.uniform_api.value.initia"
#define VkglTestCase_014429_2 "l.render.nested_structs_arrays.bool_bvec4_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014429, VkglTestCase_014429_1, VkglTestCase_014429_2);

#define VkglTestCase_014749_1 "dEQP-GLES2.functional.uniform_api.value.assigned.by_p"
#define VkglTestCase_014749_2 "ointer.render.nested_structs_arrays.float_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014749, VkglTestCase_014749_1, VkglTestCase_014749_2);

#define VkglTestCase_014750_1 "dEQP-GLES2.functional.uniform_api.value.assigned.by_po"
#define VkglTestCase_014750_2 "inter.render.nested_structs_arrays.float_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014750, VkglTestCase_014750_1, VkglTestCase_014750_2);

#define VkglTestCase_014751_1 "dEQP-GLES2.functional.uniform_api.value.assigned.by_"
#define VkglTestCase_014751_2 "pointer.render.nested_structs_arrays.float_vec4_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014751, VkglTestCase_014751_1, VkglTestCase_014751_2);

#define VkglTestCase_014752_1 "dEQP-GLES2.functional.uniform_api.value.assigned.by_p"
#define VkglTestCase_014752_2 "ointer.render.nested_structs_arrays.mat4_mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014752, VkglTestCase_014752_1, VkglTestCase_014752_2);

#define VkglTestCase_014753_1 "dEQP-GLES2.functional.uniform_api.value.assigned.by_"
#define VkglTestCase_014753_2 "pointer.render.nested_structs_arrays.int_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014753, VkglTestCase_014753_1, VkglTestCase_014753_2);

#define VkglTestCase_014754_1 "dEQP-GLES2.functional.uniform_api.value.assigned.by_p"
#define VkglTestCase_014754_2 "ointer.render.nested_structs_arrays.int_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014754, VkglTestCase_014754_1, VkglTestCase_014754_2);

#define VkglTestCase_014755_1 "dEQP-GLES2.functional.uniform_api.value.assigned.by"
#define VkglTestCase_014755_2 "_pointer.render.nested_structs_arrays.int_ivec4_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014755, VkglTestCase_014755_1, VkglTestCase_014755_2);

#define VkglTestCase_014756_1 "dEQP-GLES2.functional.uniform_api.value.assigned.by_p"
#define VkglTestCase_014756_2 "ointer.render.nested_structs_arrays.bool_bvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014756, VkglTestCase_014756_1, VkglTestCase_014756_2);

#define VkglTestCase_014757_1 "dEQP-GLES2.functional.uniform_api.value.assigned.by_po"
#define VkglTestCase_014757_2 "inter.render.nested_structs_arrays.bool_bvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014757, VkglTestCase_014757_1, VkglTestCase_014757_2);

#define VkglTestCase_014758_1 "dEQP-GLES2.functional.uniform_api.value.assigned.by_"
#define VkglTestCase_014758_2 "pointer.render.nested_structs_arrays.bool_bvec4_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014758, VkglTestCase_014758_1, VkglTestCase_014758_2);

#define VkglTestCase_014759_1 "dEQP-GLES2.functional.uniform_api.value.assigned.by_pointe"
#define VkglTestCase_014759_2 "r.render.nested_structs_arrays.sampler2D_samplerCube_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014759, VkglTestCase_014759_1, VkglTestCase_014759_2);

#define VkglTestCase_014760_1 "dEQP-GLES2.functional.uniform_api.value.assigned.by_pointer"
#define VkglTestCase_014760_2 ".render.nested_structs_arrays.sampler2D_samplerCube_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014760, VkglTestCase_014760_1, VkglTestCase_014760_2);

#define VkglTestCase_014761_1 "dEQP-GLES2.functional.uniform_api.value.assigned.by_point"
#define VkglTestCase_014761_2 "er.render.nested_structs_arrays.sampler2D_samplerCube_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014761, VkglTestCase_014761_1, VkglTestCase_014761_2);

#define VkglTestCase_015032_1 "dEQP-GLES2.functional.uniform_api.value.assigned.by_"
#define VkglTestCase_015032_2 "value.render.nested_structs_arrays.float_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_015032, VkglTestCase_015032_1, VkglTestCase_015032_2);

#define VkglTestCase_015033_1 "dEQP-GLES2.functional.uniform_api.value.assigned.by_v"
#define VkglTestCase_015033_2 "alue.render.nested_structs_arrays.float_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_015033, VkglTestCase_015033_1, VkglTestCase_015033_2);

#define VkglTestCase_015034_1 "dEQP-GLES2.functional.uniform_api.value.assigned.by"
#define VkglTestCase_015034_2 "_value.render.nested_structs_arrays.float_vec4_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_015034, VkglTestCase_015034_1, VkglTestCase_015034_2);

#define VkglTestCase_015035_1 "dEQP-GLES2.functional.uniform_api.value.assigned.by"
#define VkglTestCase_015035_2 "_value.render.nested_structs_arrays.int_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_015035, VkglTestCase_015035_1, VkglTestCase_015035_2);

#define VkglTestCase_015036_1 "dEQP-GLES2.functional.uniform_api.value.assigned.by_"
#define VkglTestCase_015036_2 "value.render.nested_structs_arrays.int_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_015036, VkglTestCase_015036_1, VkglTestCase_015036_2);

#define VkglTestCase_015037_1 "dEQP-GLES2.functional.uniform_api.value.assigned.b"
#define VkglTestCase_015037_2 "y_value.render.nested_structs_arrays.int_ivec4_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_015037, VkglTestCase_015037_1, VkglTestCase_015037_2);

#define VkglTestCase_015038_1 "dEQP-GLES2.functional.uniform_api.value.assigned.by_"
#define VkglTestCase_015038_2 "value.render.nested_structs_arrays.bool_bvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_015038, VkglTestCase_015038_1, VkglTestCase_015038_2);

#define VkglTestCase_015039_1 "dEQP-GLES2.functional.uniform_api.value.assigned.by_v"
#define VkglTestCase_015039_2 "alue.render.nested_structs_arrays.bool_bvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_015039, VkglTestCase_015039_1, VkglTestCase_015039_2);

#define VkglTestCase_015040_1 "dEQP-GLES2.functional.uniform_api.value.assigned.by"
#define VkglTestCase_015040_2 "_value.render.nested_structs_arrays.bool_bvec4_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_015040, VkglTestCase_015040_1, VkglTestCase_015040_2);

#define VkglTestCase_015041_1 "dEQP-GLES2.functional.uniform_api.value.assigned.by_value"
#define VkglTestCase_015041_2 ".render.nested_structs_arrays.sampler2D_samplerCube_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_015041, VkglTestCase_015041_1, VkglTestCase_015041_2);

#define VkglTestCase_015042_1 "dEQP-GLES2.functional.uniform_api.value.assigned.by_value."
#define VkglTestCase_015042_2 "render.nested_structs_arrays.sampler2D_samplerCube_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_015042, VkglTestCase_015042_1, VkglTestCase_015042_2);

#define VkglTestCase_015043_1 "dEQP-GLES2.functional.uniform_api.value.assigned.by_valu"
#define VkglTestCase_015043_2 "e.render.nested_structs_arrays.sampler2D_samplerCube_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_015043, VkglTestCase_015043_1, VkglTestCase_015043_2);
