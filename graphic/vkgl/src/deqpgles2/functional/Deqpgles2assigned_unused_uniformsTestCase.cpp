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
#include "../ActsDeqpgles20016TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_015134_1 "dEQP-GLES2.functional.uniform_api.value.a"
#define VkglTestCase_015134_2 "ssigned.unused_uniforms.float_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015134, VkglTestCase_015134_1, VkglTestCase_015134_2);

#define VkglTestCase_015135_1 "dEQP-GLES2.functional.uniform_api.value.as"
#define VkglTestCase_015135_2 "signed.unused_uniforms.float_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015135, VkglTestCase_015135_1, VkglTestCase_015135_2);

#define VkglTestCase_015136_1 "dEQP-GLES2.functional.uniform_api.value."
#define VkglTestCase_015136_2 "assigned.unused_uniforms.float_vec4_both"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015136, VkglTestCase_015136_1, VkglTestCase_015136_2);

#define VkglTestCase_015137_1 "dEQP-GLES2.functional.uniform_api.value."
#define VkglTestCase_015137_2 "assigned.unused_uniforms.mat4_mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015137, VkglTestCase_015137_1, VkglTestCase_015137_2);

#define VkglTestCase_015138_1 "dEQP-GLES2.functional.uniform_api.value.a"
#define VkglTestCase_015138_2 "ssigned.unused_uniforms.mat4_mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015138, VkglTestCase_015138_1, VkglTestCase_015138_2);

#define VkglTestCase_015139_1 "dEQP-GLES2.functional.uniform_api.value"
#define VkglTestCase_015139_2 ".assigned.unused_uniforms.mat4_mat2_both"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015139, VkglTestCase_015139_1, VkglTestCase_015139_2);

#define VkglTestCase_015140_1 "dEQP-GLES2.functional.uniform_api.value."
#define VkglTestCase_015140_2 "assigned.unused_uniforms.int_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015140, VkglTestCase_015140_1, VkglTestCase_015140_2);

#define VkglTestCase_015141_1 "dEQP-GLES2.functional.uniform_api.value.a"
#define VkglTestCase_015141_2 "ssigned.unused_uniforms.int_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015141, VkglTestCase_015141_1, VkglTestCase_015141_2);

#define VkglTestCase_015142_1 "dEQP-GLES2.functional.uniform_api.value"
#define VkglTestCase_015142_2 ".assigned.unused_uniforms.int_ivec4_both"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015142, VkglTestCase_015142_1, VkglTestCase_015142_2);

#define VkglTestCase_015143_1 "dEQP-GLES2.functional.uniform_api.value.a"
#define VkglTestCase_015143_2 "ssigned.unused_uniforms.bool_bvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015143, VkglTestCase_015143_1, VkglTestCase_015143_2);

#define VkglTestCase_015144_1 "dEQP-GLES2.functional.uniform_api.value.as"
#define VkglTestCase_015144_2 "signed.unused_uniforms.bool_bvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015144, VkglTestCase_015144_1, VkglTestCase_015144_2);

#define VkglTestCase_015145_1 "dEQP-GLES2.functional.uniform_api.value."
#define VkglTestCase_015145_2 "assigned.unused_uniforms.bool_bvec4_both"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015145, VkglTestCase_015145_1, VkglTestCase_015145_2);

#define VkglTestCase_015146_1 "dEQP-GLES2.functional.uniform_api.value.assign"
#define VkglTestCase_015146_2 "ed.unused_uniforms.sampler2D_samplerCube_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015146, VkglTestCase_015146_1, VkglTestCase_015146_2);

#define VkglTestCase_015147_1 "dEQP-GLES2.functional.uniform_api.value.assigne"
#define VkglTestCase_015147_2 "d.unused_uniforms.sampler2D_samplerCube_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015147, VkglTestCase_015147_1, VkglTestCase_015147_2);

#define VkglTestCase_015148_1 "dEQP-GLES2.functional.uniform_api.value.assig"
#define VkglTestCase_015148_2 "ned.unused_uniforms.sampler2D_samplerCube_both"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015148, VkglTestCase_015148_1, VkglTestCase_015148_2);
