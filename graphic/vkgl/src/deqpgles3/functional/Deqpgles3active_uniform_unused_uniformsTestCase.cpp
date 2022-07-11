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

#define VkglTestCase_036433_1 "dEQP-GLES3.functional.uniform_api.info_query.a"
#define VkglTestCase_036433_2 "ctive_uniform.unused_uniforms.float_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036433, VkglTestCase_036433_1, VkglTestCase_036433_2);

#define VkglTestCase_036434_1 "dEQP-GLES3.functional.uniform_api.info_query.ac"
#define VkglTestCase_036434_2 "tive_uniform.unused_uniforms.float_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036434, VkglTestCase_036434_1, VkglTestCase_036434_2);

#define VkglTestCase_036435_1 "dEQP-GLES3.functional.uniform_api.info_query."
#define VkglTestCase_036435_2 "active_uniform.unused_uniforms.float_vec4_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036435, VkglTestCase_036435_1, VkglTestCase_036435_2);

#define VkglTestCase_036436_1 "dEQP-GLES3.functional.uniform_api.info_query.a"
#define VkglTestCase_036436_2 "ctive_uniform.unused_uniforms.mat4_mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036436, VkglTestCase_036436_1, VkglTestCase_036436_2);

#define VkglTestCase_036437_1 "dEQP-GLES3.functional.uniform_api.info_query.ac"
#define VkglTestCase_036437_2 "tive_uniform.unused_uniforms.mat4_mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036437, VkglTestCase_036437_1, VkglTestCase_036437_2);

#define VkglTestCase_036438_1 "dEQP-GLES3.functional.uniform_api.info_query."
#define VkglTestCase_036438_2 "active_uniform.unused_uniforms.mat4_mat2_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036438, VkglTestCase_036438_1, VkglTestCase_036438_2);

#define VkglTestCase_036439_1 "dEQP-GLES3.functional.uniform_api.info_query.a"
#define VkglTestCase_036439_2 "ctive_uniform.unused_uniforms.int_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036439, VkglTestCase_036439_1, VkglTestCase_036439_2);

#define VkglTestCase_036440_1 "dEQP-GLES3.functional.uniform_api.info_query.ac"
#define VkglTestCase_036440_2 "tive_uniform.unused_uniforms.int_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036440, VkglTestCase_036440_1, VkglTestCase_036440_2);

#define VkglTestCase_036441_1 "dEQP-GLES3.functional.uniform_api.info_query."
#define VkglTestCase_036441_2 "active_uniform.unused_uniforms.int_ivec4_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036441, VkglTestCase_036441_1, VkglTestCase_036441_2);

#define VkglTestCase_036442_1 "dEQP-GLES3.functional.uniform_api.info_query.a"
#define VkglTestCase_036442_2 "ctive_uniform.unused_uniforms.uint_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036442, VkglTestCase_036442_1, VkglTestCase_036442_2);

#define VkglTestCase_036443_1 "dEQP-GLES3.functional.uniform_api.info_query.ac"
#define VkglTestCase_036443_2 "tive_uniform.unused_uniforms.uint_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036443, VkglTestCase_036443_1, VkglTestCase_036443_2);

#define VkglTestCase_036444_1 "dEQP-GLES3.functional.uniform_api.info_query."
#define VkglTestCase_036444_2 "active_uniform.unused_uniforms.uint_uvec4_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036444, VkglTestCase_036444_1, VkglTestCase_036444_2);

#define VkglTestCase_036445_1 "dEQP-GLES3.functional.uniform_api.info_query.a"
#define VkglTestCase_036445_2 "ctive_uniform.unused_uniforms.bool_bvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036445, VkglTestCase_036445_1, VkglTestCase_036445_2);

#define VkglTestCase_036446_1 "dEQP-GLES3.functional.uniform_api.info_query.ac"
#define VkglTestCase_036446_2 "tive_uniform.unused_uniforms.bool_bvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036446, VkglTestCase_036446_1, VkglTestCase_036446_2);

#define VkglTestCase_036447_1 "dEQP-GLES3.functional.uniform_api.info_query."
#define VkglTestCase_036447_2 "active_uniform.unused_uniforms.bool_bvec4_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036447, VkglTestCase_036447_1, VkglTestCase_036447_2);

#define VkglTestCase_036448_1 "dEQP-GLES3.functional.uniform_api.info_query.active_"
#define VkglTestCase_036448_2 "uniform.unused_uniforms.sampler2D_samplerCube_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036448, VkglTestCase_036448_1, VkglTestCase_036448_2);

#define VkglTestCase_036449_1 "dEQP-GLES3.functional.uniform_api.info_query.active_u"
#define VkglTestCase_036449_2 "niform.unused_uniforms.sampler2D_samplerCube_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036449, VkglTestCase_036449_1, VkglTestCase_036449_2);

#define VkglTestCase_036450_1 "dEQP-GLES3.functional.uniform_api.info_query.active"
#define VkglTestCase_036450_2 "_uniform.unused_uniforms.sampler2D_samplerCube_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036450, VkglTestCase_036450_1, VkglTestCase_036450_2);
