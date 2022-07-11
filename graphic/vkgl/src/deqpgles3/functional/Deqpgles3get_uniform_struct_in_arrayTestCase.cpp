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

#define VkglTestCase_037066_1 "dEQP-GLES3.functional.uniform_api.value.initia"
#define VkglTestCase_037066_2 "l.get_uniform.struct_in_array.float_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037066, VkglTestCase_037066_1, VkglTestCase_037066_2);

#define VkglTestCase_037067_1 "dEQP-GLES3.functional.uniform_api.value.initial"
#define VkglTestCase_037067_2 ".get_uniform.struct_in_array.float_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037067, VkglTestCase_037067_1, VkglTestCase_037067_2);

#define VkglTestCase_037068_1 "dEQP-GLES3.functional.uniform_api.value.initi"
#define VkglTestCase_037068_2 "al.get_uniform.struct_in_array.float_vec4_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037068, VkglTestCase_037068_1, VkglTestCase_037068_2);

#define VkglTestCase_037069_1 "dEQP-GLES3.functional.uniform_api.value.initia"
#define VkglTestCase_037069_2 "l.get_uniform.struct_in_array.mat4_mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037069, VkglTestCase_037069_1, VkglTestCase_037069_2);

#define VkglTestCase_037070_1 "dEQP-GLES3.functional.uniform_api.value.initial"
#define VkglTestCase_037070_2 ".get_uniform.struct_in_array.mat4_mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037070, VkglTestCase_037070_1, VkglTestCase_037070_2);

#define VkglTestCase_037071_1 "dEQP-GLES3.functional.uniform_api.value.initi"
#define VkglTestCase_037071_2 "al.get_uniform.struct_in_array.mat4_mat2_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037071, VkglTestCase_037071_1, VkglTestCase_037071_2);

#define VkglTestCase_037072_1 "dEQP-GLES3.functional.uniform_api.value.initia"
#define VkglTestCase_037072_2 "l.get_uniform.struct_in_array.int_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037072, VkglTestCase_037072_1, VkglTestCase_037072_2);

#define VkglTestCase_037073_1 "dEQP-GLES3.functional.uniform_api.value.initial"
#define VkglTestCase_037073_2 ".get_uniform.struct_in_array.int_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037073, VkglTestCase_037073_1, VkglTestCase_037073_2);

#define VkglTestCase_037074_1 "dEQP-GLES3.functional.uniform_api.value.initi"
#define VkglTestCase_037074_2 "al.get_uniform.struct_in_array.int_ivec4_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037074, VkglTestCase_037074_1, VkglTestCase_037074_2);

#define VkglTestCase_037075_1 "dEQP-GLES3.functional.uniform_api.value.initia"
#define VkglTestCase_037075_2 "l.get_uniform.struct_in_array.uint_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037075, VkglTestCase_037075_1, VkglTestCase_037075_2);

#define VkglTestCase_037076_1 "dEQP-GLES3.functional.uniform_api.value.initial"
#define VkglTestCase_037076_2 ".get_uniform.struct_in_array.uint_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037076, VkglTestCase_037076_1, VkglTestCase_037076_2);

#define VkglTestCase_037077_1 "dEQP-GLES3.functional.uniform_api.value.initi"
#define VkglTestCase_037077_2 "al.get_uniform.struct_in_array.uint_uvec4_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037077, VkglTestCase_037077_1, VkglTestCase_037077_2);

#define VkglTestCase_037078_1 "dEQP-GLES3.functional.uniform_api.value.initia"
#define VkglTestCase_037078_2 "l.get_uniform.struct_in_array.bool_bvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037078, VkglTestCase_037078_1, VkglTestCase_037078_2);

#define VkglTestCase_037079_1 "dEQP-GLES3.functional.uniform_api.value.initial"
#define VkglTestCase_037079_2 ".get_uniform.struct_in_array.bool_bvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037079, VkglTestCase_037079_1, VkglTestCase_037079_2);

#define VkglTestCase_037080_1 "dEQP-GLES3.functional.uniform_api.value.initi"
#define VkglTestCase_037080_2 "al.get_uniform.struct_in_array.bool_bvec4_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037080, VkglTestCase_037080_1, VkglTestCase_037080_2);

#define VkglTestCase_037081_1 "dEQP-GLES3.functional.uniform_api.value.initial.get_"
#define VkglTestCase_037081_2 "uniform.struct_in_array.sampler2D_samplerCube_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037081, VkglTestCase_037081_1, VkglTestCase_037081_2);

#define VkglTestCase_037082_1 "dEQP-GLES3.functional.uniform_api.value.initial.get_u"
#define VkglTestCase_037082_2 "niform.struct_in_array.sampler2D_samplerCube_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037082, VkglTestCase_037082_1, VkglTestCase_037082_2);

#define VkglTestCase_037083_1 "dEQP-GLES3.functional.uniform_api.value.initial.get"
#define VkglTestCase_037083_2 "_uniform.struct_in_array.sampler2D_samplerCube_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037083, VkglTestCase_037083_1, VkglTestCase_037083_2);

#define VkglTestCase_037549_1 "dEQP-GLES3.functional.uniform_api.value.assigned.by_"
#define VkglTestCase_037549_2 "pointer.get_uniform.struct_in_array.float_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037549, VkglTestCase_037549_1, VkglTestCase_037549_2);

#define VkglTestCase_037550_1 "dEQP-GLES3.functional.uniform_api.value.assigned.by_p"
#define VkglTestCase_037550_2 "ointer.get_uniform.struct_in_array.float_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037550, VkglTestCase_037550_1, VkglTestCase_037550_2);

#define VkglTestCase_037551_1 "dEQP-GLES3.functional.uniform_api.value.assigned.by"
#define VkglTestCase_037551_2 "_pointer.get_uniform.struct_in_array.float_vec4_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037551, VkglTestCase_037551_1, VkglTestCase_037551_2);

#define VkglTestCase_037552_1 "dEQP-GLES3.functional.uniform_api.value.assigned.by_"
#define VkglTestCase_037552_2 "pointer.get_uniform.struct_in_array.mat4_mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037552, VkglTestCase_037552_1, VkglTestCase_037552_2);

#define VkglTestCase_037553_1 "dEQP-GLES3.functional.uniform_api.value.assigned.by_p"
#define VkglTestCase_037553_2 "ointer.get_uniform.struct_in_array.mat4_mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037553, VkglTestCase_037553_1, VkglTestCase_037553_2);

#define VkglTestCase_037554_1 "dEQP-GLES3.functional.uniform_api.value.assigned.by"
#define VkglTestCase_037554_2 "_pointer.get_uniform.struct_in_array.mat4_mat2_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037554, VkglTestCase_037554_1, VkglTestCase_037554_2);

#define VkglTestCase_037555_1 "dEQP-GLES3.functional.uniform_api.value.assigned.by_"
#define VkglTestCase_037555_2 "pointer.get_uniform.struct_in_array.int_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037555, VkglTestCase_037555_1, VkglTestCase_037555_2);

#define VkglTestCase_037556_1 "dEQP-GLES3.functional.uniform_api.value.assigned.by_p"
#define VkglTestCase_037556_2 "ointer.get_uniform.struct_in_array.int_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037556, VkglTestCase_037556_1, VkglTestCase_037556_2);

#define VkglTestCase_037557_1 "dEQP-GLES3.functional.uniform_api.value.assigned.by"
#define VkglTestCase_037557_2 "_pointer.get_uniform.struct_in_array.int_ivec4_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037557, VkglTestCase_037557_1, VkglTestCase_037557_2);

#define VkglTestCase_037558_1 "dEQP-GLES3.functional.uniform_api.value.assigned.by_"
#define VkglTestCase_037558_2 "pointer.get_uniform.struct_in_array.uint_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037558, VkglTestCase_037558_1, VkglTestCase_037558_2);

#define VkglTestCase_037559_1 "dEQP-GLES3.functional.uniform_api.value.assigned.by_p"
#define VkglTestCase_037559_2 "ointer.get_uniform.struct_in_array.uint_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037559, VkglTestCase_037559_1, VkglTestCase_037559_2);

#define VkglTestCase_037560_1 "dEQP-GLES3.functional.uniform_api.value.assigned.by"
#define VkglTestCase_037560_2 "_pointer.get_uniform.struct_in_array.uint_uvec4_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037560, VkglTestCase_037560_1, VkglTestCase_037560_2);

#define VkglTestCase_037561_1 "dEQP-GLES3.functional.uniform_api.value.assigned.by_"
#define VkglTestCase_037561_2 "pointer.get_uniform.struct_in_array.bool_bvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037561, VkglTestCase_037561_1, VkglTestCase_037561_2);

#define VkglTestCase_037562_1 "dEQP-GLES3.functional.uniform_api.value.assigned.by_p"
#define VkglTestCase_037562_2 "ointer.get_uniform.struct_in_array.bool_bvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037562, VkglTestCase_037562_1, VkglTestCase_037562_2);

#define VkglTestCase_037563_1 "dEQP-GLES3.functional.uniform_api.value.assigned.by"
#define VkglTestCase_037563_2 "_pointer.get_uniform.struct_in_array.bool_bvec4_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037563, VkglTestCase_037563_1, VkglTestCase_037563_2);

#define VkglTestCase_037564_1 "dEQP-GLES3.functional.uniform_api.value.assigned.by_pointe"
#define VkglTestCase_037564_2 "r.get_uniform.struct_in_array.sampler2D_samplerCube_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037564, VkglTestCase_037564_1, VkglTestCase_037564_2);

#define VkglTestCase_037565_1 "dEQP-GLES3.functional.uniform_api.value.assigned.by_pointer"
#define VkglTestCase_037565_2 ".get_uniform.struct_in_array.sampler2D_samplerCube_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037565, VkglTestCase_037565_1, VkglTestCase_037565_2);

#define VkglTestCase_037566_1 "dEQP-GLES3.functional.uniform_api.value.assigned.by_point"
#define VkglTestCase_037566_2 "er.get_uniform.struct_in_array.sampler2D_samplerCube_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_037566, VkglTestCase_037566_1, VkglTestCase_037566_2);

#define VkglTestCase_038005_1 "dEQP-GLES3.functional.uniform_api.value.assigned.by"
#define VkglTestCase_038005_2 "_value.get_uniform.struct_in_array.float_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_038005, VkglTestCase_038005_1, VkglTestCase_038005_2);

#define VkglTestCase_038006_1 "dEQP-GLES3.functional.uniform_api.value.assigned.by_"
#define VkglTestCase_038006_2 "value.get_uniform.struct_in_array.float_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_038006, VkglTestCase_038006_1, VkglTestCase_038006_2);

#define VkglTestCase_038007_1 "dEQP-GLES3.functional.uniform_api.value.assigned.b"
#define VkglTestCase_038007_2 "y_value.get_uniform.struct_in_array.float_vec4_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_038007, VkglTestCase_038007_1, VkglTestCase_038007_2);

#define VkglTestCase_038008_1 "dEQP-GLES3.functional.uniform_api.value.assigned.by"
#define VkglTestCase_038008_2 "_value.get_uniform.struct_in_array.int_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_038008, VkglTestCase_038008_1, VkglTestCase_038008_2);

#define VkglTestCase_038009_1 "dEQP-GLES3.functional.uniform_api.value.assigned.by_"
#define VkglTestCase_038009_2 "value.get_uniform.struct_in_array.int_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_038009, VkglTestCase_038009_1, VkglTestCase_038009_2);

#define VkglTestCase_038010_1 "dEQP-GLES3.functional.uniform_api.value.assigned.b"
#define VkglTestCase_038010_2 "y_value.get_uniform.struct_in_array.int_ivec4_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_038010, VkglTestCase_038010_1, VkglTestCase_038010_2);

#define VkglTestCase_038011_1 "dEQP-GLES3.functional.uniform_api.value.assigned.by"
#define VkglTestCase_038011_2 "_value.get_uniform.struct_in_array.uint_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_038011, VkglTestCase_038011_1, VkglTestCase_038011_2);

#define VkglTestCase_038012_1 "dEQP-GLES3.functional.uniform_api.value.assigned.by_"
#define VkglTestCase_038012_2 "value.get_uniform.struct_in_array.uint_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_038012, VkglTestCase_038012_1, VkglTestCase_038012_2);

#define VkglTestCase_038013_1 "dEQP-GLES3.functional.uniform_api.value.assigned.b"
#define VkglTestCase_038013_2 "y_value.get_uniform.struct_in_array.uint_uvec4_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_038013, VkglTestCase_038013_1, VkglTestCase_038013_2);

#define VkglTestCase_038014_1 "dEQP-GLES3.functional.uniform_api.value.assigned.by"
#define VkglTestCase_038014_2 "_value.get_uniform.struct_in_array.bool_bvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_038014, VkglTestCase_038014_1, VkglTestCase_038014_2);

#define VkglTestCase_038015_1 "dEQP-GLES3.functional.uniform_api.value.assigned.by_"
#define VkglTestCase_038015_2 "value.get_uniform.struct_in_array.bool_bvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_038015, VkglTestCase_038015_1, VkglTestCase_038015_2);

#define VkglTestCase_038016_1 "dEQP-GLES3.functional.uniform_api.value.assigned.b"
#define VkglTestCase_038016_2 "y_value.get_uniform.struct_in_array.bool_bvec4_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_038016, VkglTestCase_038016_1, VkglTestCase_038016_2);

#define VkglTestCase_038017_1 "dEQP-GLES3.functional.uniform_api.value.assigned.by_value"
#define VkglTestCase_038017_2 ".get_uniform.struct_in_array.sampler2D_samplerCube_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_038017, VkglTestCase_038017_1, VkglTestCase_038017_2);

#define VkglTestCase_038018_1 "dEQP-GLES3.functional.uniform_api.value.assigned.by_value."
#define VkglTestCase_038018_2 "get_uniform.struct_in_array.sampler2D_samplerCube_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_038018, VkglTestCase_038018_1, VkglTestCase_038018_2);

#define VkglTestCase_038019_1 "dEQP-GLES3.functional.uniform_api.value.assigned.by_valu"
#define VkglTestCase_038019_2 "e.get_uniform.struct_in_array.sampler2D_samplerCube_both"
SHRINK_HWTEST_F(ActsDeqpgles30038TestSuite, TestCase_038019, VkglTestCase_038019_1, VkglTestCase_038019_2);
