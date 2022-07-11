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

#define VkglTestCase_014134_1 "dEQP-GLES2.functional.uniform_api.info_"
#define VkglTestCase_014134_2 "query.unused_uniforms.float_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014134, VkglTestCase_014134_1, VkglTestCase_014134_2);

#define VkglTestCase_014135_1 "dEQP-GLES2.functional.uniform_api.info_q"
#define VkglTestCase_014135_2 "uery.unused_uniforms.float_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014135, VkglTestCase_014135_1, VkglTestCase_014135_2);

#define VkglTestCase_014136_1 "dEQP-GLES2.functional.uniform_api.info"
#define VkglTestCase_014136_2 "_query.unused_uniforms.float_vec4_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014136, VkglTestCase_014136_1, VkglTestCase_014136_2);

#define VkglTestCase_014137_1 "dEQP-GLES2.functional.uniform_api.info"
#define VkglTestCase_014137_2 "_query.unused_uniforms.mat4_mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014137, VkglTestCase_014137_1, VkglTestCase_014137_2);

#define VkglTestCase_014138_1 "dEQP-GLES2.functional.uniform_api.info_"
#define VkglTestCase_014138_2 "query.unused_uniforms.mat4_mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014138, VkglTestCase_014138_1, VkglTestCase_014138_2);

#define VkglTestCase_014139_1 "dEQP-GLES2.functional.uniform_api.inf"
#define VkglTestCase_014139_2 "o_query.unused_uniforms.mat4_mat2_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014139, VkglTestCase_014139_1, VkglTestCase_014139_2);

#define VkglTestCase_014140_1 "dEQP-GLES2.functional.uniform_api.info"
#define VkglTestCase_014140_2 "_query.unused_uniforms.int_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014140, VkglTestCase_014140_1, VkglTestCase_014140_2);

#define VkglTestCase_014141_1 "dEQP-GLES2.functional.uniform_api.info_"
#define VkglTestCase_014141_2 "query.unused_uniforms.int_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014141, VkglTestCase_014141_1, VkglTestCase_014141_2);

#define VkglTestCase_014142_1 "dEQP-GLES2.functional.uniform_api.inf"
#define VkglTestCase_014142_2 "o_query.unused_uniforms.int_ivec4_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014142, VkglTestCase_014142_1, VkglTestCase_014142_2);

#define VkglTestCase_014143_1 "dEQP-GLES2.functional.uniform_api.info_"
#define VkglTestCase_014143_2 "query.unused_uniforms.bool_bvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014143, VkglTestCase_014143_1, VkglTestCase_014143_2);

#define VkglTestCase_014144_1 "dEQP-GLES2.functional.uniform_api.info_q"
#define VkglTestCase_014144_2 "uery.unused_uniforms.bool_bvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014144, VkglTestCase_014144_1, VkglTestCase_014144_2);

#define VkglTestCase_014145_1 "dEQP-GLES2.functional.uniform_api.info"
#define VkglTestCase_014145_2 "_query.unused_uniforms.bool_bvec4_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014145, VkglTestCase_014145_1, VkglTestCase_014145_2);

#define VkglTestCase_014146_1 "dEQP-GLES2.functional.uniform_api.info_query"
#define VkglTestCase_014146_2 ".unused_uniforms.sampler2D_samplerCube_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014146, VkglTestCase_014146_1, VkglTestCase_014146_2);

#define VkglTestCase_014147_1 "dEQP-GLES2.functional.uniform_api.info_query."
#define VkglTestCase_014147_2 "unused_uniforms.sampler2D_samplerCube_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014147, VkglTestCase_014147_1, VkglTestCase_014147_2);

#define VkglTestCase_014148_1 "dEQP-GLES2.functional.uniform_api.info_quer"
#define VkglTestCase_014148_2 "y.unused_uniforms.sampler2D_samplerCube_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014148, VkglTestCase_014148_1, VkglTestCase_014148_2);
