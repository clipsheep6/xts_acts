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

#define VkglTestCase_038305_1 "dEQP-GLES3.functional.uniform_api.value.a"
#define VkglTestCase_038305_2 "ssigned.unused_uniforms.float_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038305, VkglTestCase_038305_1, VkglTestCase_038305_2);

#define VkglTestCase_038306_1 "dEQP-GLES3.functional.uniform_api.value.as"
#define VkglTestCase_038306_2 "signed.unused_uniforms.float_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038306, VkglTestCase_038306_1, VkglTestCase_038306_2);

#define VkglTestCase_038307_1 "dEQP-GLES3.functional.uniform_api.value."
#define VkglTestCase_038307_2 "assigned.unused_uniforms.float_vec4_both"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038307, VkglTestCase_038307_1, VkglTestCase_038307_2);

#define VkglTestCase_038308_1 "dEQP-GLES3.functional.uniform_api.value."
#define VkglTestCase_038308_2 "assigned.unused_uniforms.mat4_mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038308, VkglTestCase_038308_1, VkglTestCase_038308_2);

#define VkglTestCase_038309_1 "dEQP-GLES3.functional.uniform_api.value.a"
#define VkglTestCase_038309_2 "ssigned.unused_uniforms.mat4_mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038309, VkglTestCase_038309_1, VkglTestCase_038309_2);

#define VkglTestCase_038310_1 "dEQP-GLES3.functional.uniform_api.value"
#define VkglTestCase_038310_2 ".assigned.unused_uniforms.mat4_mat2_both"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038310, VkglTestCase_038310_1, VkglTestCase_038310_2);

#define VkglTestCase_038311_1 "dEQP-GLES3.functional.uniform_api.value."
#define VkglTestCase_038311_2 "assigned.unused_uniforms.int_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038311, VkglTestCase_038311_1, VkglTestCase_038311_2);

#define VkglTestCase_038312_1 "dEQP-GLES3.functional.uniform_api.value.a"
#define VkglTestCase_038312_2 "ssigned.unused_uniforms.int_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038312, VkglTestCase_038312_1, VkglTestCase_038312_2);

#define VkglTestCase_038313_1 "dEQP-GLES3.functional.uniform_api.value"
#define VkglTestCase_038313_2 ".assigned.unused_uniforms.int_ivec4_both"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038313, VkglTestCase_038313_1, VkglTestCase_038313_2);

#define VkglTestCase_038314_1 "dEQP-GLES3.functional.uniform_api.value.a"
#define VkglTestCase_038314_2 "ssigned.unused_uniforms.uint_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038314, VkglTestCase_038314_1, VkglTestCase_038314_2);

#define VkglTestCase_038315_1 "dEQP-GLES3.functional.uniform_api.value.as"
#define VkglTestCase_038315_2 "signed.unused_uniforms.uint_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038315, VkglTestCase_038315_1, VkglTestCase_038315_2);

#define VkglTestCase_038316_1 "dEQP-GLES3.functional.uniform_api.value."
#define VkglTestCase_038316_2 "assigned.unused_uniforms.uint_uvec4_both"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038316, VkglTestCase_038316_1, VkglTestCase_038316_2);

#define VkglTestCase_038317_1 "dEQP-GLES3.functional.uniform_api.value.a"
#define VkglTestCase_038317_2 "ssigned.unused_uniforms.bool_bvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038317, VkglTestCase_038317_1, VkglTestCase_038317_2);

#define VkglTestCase_038318_1 "dEQP-GLES3.functional.uniform_api.value.as"
#define VkglTestCase_038318_2 "signed.unused_uniforms.bool_bvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038318, VkglTestCase_038318_1, VkglTestCase_038318_2);

#define VkglTestCase_038319_1 "dEQP-GLES3.functional.uniform_api.value."
#define VkglTestCase_038319_2 "assigned.unused_uniforms.bool_bvec4_both"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038319, VkglTestCase_038319_1, VkglTestCase_038319_2);

#define VkglTestCase_038320_1 "dEQP-GLES3.functional.uniform_api.value.assign"
#define VkglTestCase_038320_2 "ed.unused_uniforms.sampler2D_samplerCube_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038320, VkglTestCase_038320_1, VkglTestCase_038320_2);

#define VkglTestCase_038321_1 "dEQP-GLES3.functional.uniform_api.value.assigne"
#define VkglTestCase_038321_2 "d.unused_uniforms.sampler2D_samplerCube_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038321, VkglTestCase_038321_1, VkglTestCase_038321_2);

#define VkglTestCase_038322_1 "dEQP-GLES3.functional.uniform_api.value.assig"
#define VkglTestCase_038322_2 "ned.unused_uniforms.sampler2D_samplerCube_both"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038322, VkglTestCase_038322_1, VkglTestCase_038322_2);
