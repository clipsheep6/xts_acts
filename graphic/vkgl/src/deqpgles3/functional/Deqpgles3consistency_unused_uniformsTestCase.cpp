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
#include "../ActsDeqpgles30037TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_036883_1 "dEQP-GLES3.functional.uniform_api.info_query."
#define VkglTestCase_036883_2 "consistency.unused_uniforms.float_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036883, VkglTestCase_036883_1, VkglTestCase_036883_2);

#define VkglTestCase_036884_1 "dEQP-GLES3.functional.uniform_api.info_query.c"
#define VkglTestCase_036884_2 "onsistency.unused_uniforms.float_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036884, VkglTestCase_036884_1, VkglTestCase_036884_2);

#define VkglTestCase_036885_1 "dEQP-GLES3.functional.uniform_api.info_query"
#define VkglTestCase_036885_2 ".consistency.unused_uniforms.float_vec4_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036885, VkglTestCase_036885_1, VkglTestCase_036885_2);

#define VkglTestCase_036886_1 "dEQP-GLES3.functional.uniform_api.info_query"
#define VkglTestCase_036886_2 ".consistency.unused_uniforms.mat4_mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036886, VkglTestCase_036886_1, VkglTestCase_036886_2);

#define VkglTestCase_036887_1 "dEQP-GLES3.functional.uniform_api.info_query."
#define VkglTestCase_036887_2 "consistency.unused_uniforms.mat4_mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036887, VkglTestCase_036887_1, VkglTestCase_036887_2);

#define VkglTestCase_036888_1 "dEQP-GLES3.functional.uniform_api.info_quer"
#define VkglTestCase_036888_2 "y.consistency.unused_uniforms.mat4_mat2_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036888, VkglTestCase_036888_1, VkglTestCase_036888_2);

#define VkglTestCase_036889_1 "dEQP-GLES3.functional.uniform_api.info_query"
#define VkglTestCase_036889_2 ".consistency.unused_uniforms.int_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036889, VkglTestCase_036889_1, VkglTestCase_036889_2);

#define VkglTestCase_036890_1 "dEQP-GLES3.functional.uniform_api.info_query."
#define VkglTestCase_036890_2 "consistency.unused_uniforms.int_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036890, VkglTestCase_036890_1, VkglTestCase_036890_2);

#define VkglTestCase_036891_1 "dEQP-GLES3.functional.uniform_api.info_quer"
#define VkglTestCase_036891_2 "y.consistency.unused_uniforms.int_ivec4_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036891, VkglTestCase_036891_1, VkglTestCase_036891_2);

#define VkglTestCase_036892_1 "dEQP-GLES3.functional.uniform_api.info_query."
#define VkglTestCase_036892_2 "consistency.unused_uniforms.uint_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036892, VkglTestCase_036892_1, VkglTestCase_036892_2);

#define VkglTestCase_036893_1 "dEQP-GLES3.functional.uniform_api.info_query.c"
#define VkglTestCase_036893_2 "onsistency.unused_uniforms.uint_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036893, VkglTestCase_036893_1, VkglTestCase_036893_2);

#define VkglTestCase_036894_1 "dEQP-GLES3.functional.uniform_api.info_query"
#define VkglTestCase_036894_2 ".consistency.unused_uniforms.uint_uvec4_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036894, VkglTestCase_036894_1, VkglTestCase_036894_2);

#define VkglTestCase_036895_1 "dEQP-GLES3.functional.uniform_api.info_query."
#define VkglTestCase_036895_2 "consistency.unused_uniforms.bool_bvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036895, VkglTestCase_036895_1, VkglTestCase_036895_2);

#define VkglTestCase_036896_1 "dEQP-GLES3.functional.uniform_api.info_query.c"
#define VkglTestCase_036896_2 "onsistency.unused_uniforms.bool_bvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036896, VkglTestCase_036896_1, VkglTestCase_036896_2);

#define VkglTestCase_036897_1 "dEQP-GLES3.functional.uniform_api.info_query"
#define VkglTestCase_036897_2 ".consistency.unused_uniforms.bool_bvec4_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036897, VkglTestCase_036897_1, VkglTestCase_036897_2);

#define VkglTestCase_036898_1 "dEQP-GLES3.functional.uniform_api.info_query.consi"
#define VkglTestCase_036898_2 "stency.unused_uniforms.sampler2D_samplerCube_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036898, VkglTestCase_036898_1, VkglTestCase_036898_2);

#define VkglTestCase_036899_1 "dEQP-GLES3.functional.uniform_api.info_query.consis"
#define VkglTestCase_036899_2 "tency.unused_uniforms.sampler2D_samplerCube_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036899, VkglTestCase_036899_1, VkglTestCase_036899_2);

#define VkglTestCase_036900_1 "dEQP-GLES3.functional.uniform_api.info_query.cons"
#define VkglTestCase_036900_2 "istency.unused_uniforms.sampler2D_samplerCube_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036900, VkglTestCase_036900_1, VkglTestCase_036900_2);
