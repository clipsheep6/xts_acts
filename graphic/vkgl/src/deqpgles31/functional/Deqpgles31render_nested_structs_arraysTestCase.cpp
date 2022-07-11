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

#define VkglTestCase_017041_1 "dEQP-GLES31.functional.program_uniform.by_pointe"
#define VkglTestCase_017041_2 "r.render.nested_structs_arrays.float_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017041, VkglTestCase_017041_1, VkglTestCase_017041_2);

#define VkglTestCase_017042_1 "dEQP-GLES31.functional.program_uniform.by_pointer"
#define VkglTestCase_017042_2 ".render.nested_structs_arrays.float_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017042, VkglTestCase_017042_1, VkglTestCase_017042_2);

#define VkglTestCase_017043_1 "dEQP-GLES31.functional.program_uniform.by_point"
#define VkglTestCase_017043_2 "er.render.nested_structs_arrays.float_vec4_both"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017043, VkglTestCase_017043_1, VkglTestCase_017043_2);

#define VkglTestCase_017044_1 "dEQP-GLES31.functional.program_uniform.by_point"
#define VkglTestCase_017044_2 "er.render.nested_structs_arrays.mat4_mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017044, VkglTestCase_017044_1, VkglTestCase_017044_2);

#define VkglTestCase_017045_1 "dEQP-GLES31.functional.program_uniform.by_pointe"
#define VkglTestCase_017045_2 "r.render.nested_structs_arrays.mat4_mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017045, VkglTestCase_017045_1, VkglTestCase_017045_2);

#define VkglTestCase_017046_1 "dEQP-GLES31.functional.program_uniform.by_poin"
#define VkglTestCase_017046_2 "ter.render.nested_structs_arrays.mat4_mat2_both"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017046, VkglTestCase_017046_1, VkglTestCase_017046_2);

#define VkglTestCase_017047_1 "dEQP-GLES31.functional.program_uniform.by_point"
#define VkglTestCase_017047_2 "er.render.nested_structs_arrays.int_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017047, VkglTestCase_017047_1, VkglTestCase_017047_2);

#define VkglTestCase_017048_1 "dEQP-GLES31.functional.program_uniform.by_pointe"
#define VkglTestCase_017048_2 "r.render.nested_structs_arrays.int_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017048, VkglTestCase_017048_1, VkglTestCase_017048_2);

#define VkglTestCase_017049_1 "dEQP-GLES31.functional.program_uniform.by_poin"
#define VkglTestCase_017049_2 "ter.render.nested_structs_arrays.int_ivec4_both"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017049, VkglTestCase_017049_1, VkglTestCase_017049_2);

#define VkglTestCase_017050_1 "dEQP-GLES31.functional.program_uniform.by_pointe"
#define VkglTestCase_017050_2 "r.render.nested_structs_arrays.uint_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017050, VkglTestCase_017050_1, VkglTestCase_017050_2);

#define VkglTestCase_017051_1 "dEQP-GLES31.functional.program_uniform.by_pointer"
#define VkglTestCase_017051_2 ".render.nested_structs_arrays.uint_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017051, VkglTestCase_017051_1, VkglTestCase_017051_2);

#define VkglTestCase_017052_1 "dEQP-GLES31.functional.program_uniform.by_point"
#define VkglTestCase_017052_2 "er.render.nested_structs_arrays.uint_uvec4_both"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017052, VkglTestCase_017052_1, VkglTestCase_017052_2);

#define VkglTestCase_017053_1 "dEQP-GLES31.functional.program_uniform.by_pointe"
#define VkglTestCase_017053_2 "r.render.nested_structs_arrays.bool_bvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017053, VkglTestCase_017053_1, VkglTestCase_017053_2);

#define VkglTestCase_017054_1 "dEQP-GLES31.functional.program_uniform.by_pointer"
#define VkglTestCase_017054_2 ".render.nested_structs_arrays.bool_bvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017054, VkglTestCase_017054_1, VkglTestCase_017054_2);

#define VkglTestCase_017055_1 "dEQP-GLES31.functional.program_uniform.by_point"
#define VkglTestCase_017055_2 "er.render.nested_structs_arrays.bool_bvec4_both"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017055, VkglTestCase_017055_1, VkglTestCase_017055_2);

#define VkglTestCase_017056_1 "dEQP-GLES31.functional.program_uniform.by_pointer.ren"
#define VkglTestCase_017056_2 "der.nested_structs_arrays.sampler2D_samplerCube_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017056, VkglTestCase_017056_1, VkglTestCase_017056_2);

#define VkglTestCase_017057_1 "dEQP-GLES31.functional.program_uniform.by_pointer.rend"
#define VkglTestCase_017057_2 "er.nested_structs_arrays.sampler2D_samplerCube_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017057, VkglTestCase_017057_1, VkglTestCase_017057_2);

#define VkglTestCase_017058_1 "dEQP-GLES31.functional.program_uniform.by_pointer.re"
#define VkglTestCase_017058_2 "nder.nested_structs_arrays.sampler2D_samplerCube_both"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017058, VkglTestCase_017058_1, VkglTestCase_017058_2);

#define VkglTestCase_017416_1 "dEQP-GLES31.functional.program_uniform.by_value"
#define VkglTestCase_017416_2 ".render.nested_structs_arrays.float_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017416, VkglTestCase_017416_1, VkglTestCase_017416_2);

#define VkglTestCase_017417_1 "dEQP-GLES31.functional.program_uniform.by_value."
#define VkglTestCase_017417_2 "render.nested_structs_arrays.float_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017417, VkglTestCase_017417_1, VkglTestCase_017417_2);

#define VkglTestCase_017418_1 "dEQP-GLES31.functional.program_uniform.by_valu"
#define VkglTestCase_017418_2 "e.render.nested_structs_arrays.float_vec4_both"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017418, VkglTestCase_017418_1, VkglTestCase_017418_2);

#define VkglTestCase_017419_1 "dEQP-GLES31.functional.program_uniform.by_valu"
#define VkglTestCase_017419_2 "e.render.nested_structs_arrays.int_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017419, VkglTestCase_017419_1, VkglTestCase_017419_2);

#define VkglTestCase_017420_1 "dEQP-GLES31.functional.program_uniform.by_value"
#define VkglTestCase_017420_2 ".render.nested_structs_arrays.int_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017420, VkglTestCase_017420_1, VkglTestCase_017420_2);

#define VkglTestCase_017421_1 "dEQP-GLES31.functional.program_uniform.by_val"
#define VkglTestCase_017421_2 "ue.render.nested_structs_arrays.int_ivec4_both"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017421, VkglTestCase_017421_1, VkglTestCase_017421_2);

#define VkglTestCase_017422_1 "dEQP-GLES31.functional.program_uniform.by_value"
#define VkglTestCase_017422_2 ".render.nested_structs_arrays.uint_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017422, VkglTestCase_017422_1, VkglTestCase_017422_2);

#define VkglTestCase_017423_1 "dEQP-GLES31.functional.program_uniform.by_value."
#define VkglTestCase_017423_2 "render.nested_structs_arrays.uint_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017423, VkglTestCase_017423_1, VkglTestCase_017423_2);

#define VkglTestCase_017424_1 "dEQP-GLES31.functional.program_uniform.by_valu"
#define VkglTestCase_017424_2 "e.render.nested_structs_arrays.uint_uvec4_both"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017424, VkglTestCase_017424_1, VkglTestCase_017424_2);

#define VkglTestCase_017425_1 "dEQP-GLES31.functional.program_uniform.by_value"
#define VkglTestCase_017425_2 ".render.nested_structs_arrays.bool_bvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017425, VkglTestCase_017425_1, VkglTestCase_017425_2);

#define VkglTestCase_017426_1 "dEQP-GLES31.functional.program_uniform.by_value."
#define VkglTestCase_017426_2 "render.nested_structs_arrays.bool_bvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017426, VkglTestCase_017426_1, VkglTestCase_017426_2);

#define VkglTestCase_017427_1 "dEQP-GLES31.functional.program_uniform.by_valu"
#define VkglTestCase_017427_2 "e.render.nested_structs_arrays.bool_bvec4_both"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017427, VkglTestCase_017427_1, VkglTestCase_017427_2);

#define VkglTestCase_017428_1 "dEQP-GLES31.functional.program_uniform.by_value.rend"
#define VkglTestCase_017428_2 "er.nested_structs_arrays.sampler2D_samplerCube_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017428, VkglTestCase_017428_1, VkglTestCase_017428_2);

#define VkglTestCase_017429_1 "dEQP-GLES31.functional.program_uniform.by_value.rende"
#define VkglTestCase_017429_2 "r.nested_structs_arrays.sampler2D_samplerCube_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017429, VkglTestCase_017429_1, VkglTestCase_017429_2);

#define VkglTestCase_017430_1 "dEQP-GLES31.functional.program_uniform.by_value.ren"
#define VkglTestCase_017430_2 "der.nested_structs_arrays.sampler2D_samplerCube_both"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017430, VkglTestCase_017430_1, VkglTestCase_017430_2);
