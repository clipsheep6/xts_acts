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

#define VkglTestCase_036673_1 "dEQP-GLES3.functional.uniform_api.info_query.indices"
#define VkglTestCase_036673_2 "_active_uniformsiv.unused_uniforms.float_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036673, VkglTestCase_036673_1, VkglTestCase_036673_2);

#define VkglTestCase_036674_1 "dEQP-GLES3.functional.uniform_api.info_query.indices_"
#define VkglTestCase_036674_2 "active_uniformsiv.unused_uniforms.float_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036674, VkglTestCase_036674_1, VkglTestCase_036674_2);

#define VkglTestCase_036675_1 "dEQP-GLES3.functional.uniform_api.info_query.indice"
#define VkglTestCase_036675_2 "s_active_uniformsiv.unused_uniforms.float_vec4_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036675, VkglTestCase_036675_1, VkglTestCase_036675_2);

#define VkglTestCase_036676_1 "dEQP-GLES3.functional.uniform_api.info_query.indice"
#define VkglTestCase_036676_2 "s_active_uniformsiv.unused_uniforms.mat4_mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036676, VkglTestCase_036676_1, VkglTestCase_036676_2);

#define VkglTestCase_036677_1 "dEQP-GLES3.functional.uniform_api.info_query.indices"
#define VkglTestCase_036677_2 "_active_uniformsiv.unused_uniforms.mat4_mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036677, VkglTestCase_036677_1, VkglTestCase_036677_2);

#define VkglTestCase_036678_1 "dEQP-GLES3.functional.uniform_api.info_query.indic"
#define VkglTestCase_036678_2 "es_active_uniformsiv.unused_uniforms.mat4_mat2_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036678, VkglTestCase_036678_1, VkglTestCase_036678_2);

#define VkglTestCase_036679_1 "dEQP-GLES3.functional.uniform_api.info_query.indice"
#define VkglTestCase_036679_2 "s_active_uniformsiv.unused_uniforms.int_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036679, VkglTestCase_036679_1, VkglTestCase_036679_2);

#define VkglTestCase_036680_1 "dEQP-GLES3.functional.uniform_api.info_query.indices"
#define VkglTestCase_036680_2 "_active_uniformsiv.unused_uniforms.int_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036680, VkglTestCase_036680_1, VkglTestCase_036680_2);

#define VkglTestCase_036681_1 "dEQP-GLES3.functional.uniform_api.info_query.indic"
#define VkglTestCase_036681_2 "es_active_uniformsiv.unused_uniforms.int_ivec4_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036681, VkglTestCase_036681_1, VkglTestCase_036681_2);

#define VkglTestCase_036682_1 "dEQP-GLES3.functional.uniform_api.info_query.indices"
#define VkglTestCase_036682_2 "_active_uniformsiv.unused_uniforms.uint_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036682, VkglTestCase_036682_1, VkglTestCase_036682_2);

#define VkglTestCase_036683_1 "dEQP-GLES3.functional.uniform_api.info_query.indices_"
#define VkglTestCase_036683_2 "active_uniformsiv.unused_uniforms.uint_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036683, VkglTestCase_036683_1, VkglTestCase_036683_2);

#define VkglTestCase_036684_1 "dEQP-GLES3.functional.uniform_api.info_query.indice"
#define VkglTestCase_036684_2 "s_active_uniformsiv.unused_uniforms.uint_uvec4_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036684, VkglTestCase_036684_1, VkglTestCase_036684_2);

#define VkglTestCase_036685_1 "dEQP-GLES3.functional.uniform_api.info_query.indices"
#define VkglTestCase_036685_2 "_active_uniformsiv.unused_uniforms.bool_bvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036685, VkglTestCase_036685_1, VkglTestCase_036685_2);

#define VkglTestCase_036686_1 "dEQP-GLES3.functional.uniform_api.info_query.indices_"
#define VkglTestCase_036686_2 "active_uniformsiv.unused_uniforms.bool_bvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036686, VkglTestCase_036686_1, VkglTestCase_036686_2);

#define VkglTestCase_036687_1 "dEQP-GLES3.functional.uniform_api.info_query.indice"
#define VkglTestCase_036687_2 "s_active_uniformsiv.unused_uniforms.bool_bvec4_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036687, VkglTestCase_036687_1, VkglTestCase_036687_2);

#define VkglTestCase_036688_1 "dEQP-GLES3.functional.uniform_api.info_query.indices_acti"
#define VkglTestCase_036688_2 "ve_uniformsiv.unused_uniforms.sampler2D_samplerCube_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036688, VkglTestCase_036688_1, VkglTestCase_036688_2);

#define VkglTestCase_036689_1 "dEQP-GLES3.functional.uniform_api.info_query.indices_activ"
#define VkglTestCase_036689_2 "e_uniformsiv.unused_uniforms.sampler2D_samplerCube_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036689, VkglTestCase_036689_1, VkglTestCase_036689_2);

#define VkglTestCase_036690_1 "dEQP-GLES3.functional.uniform_api.info_query.indices_act"
#define VkglTestCase_036690_2 "ive_uniformsiv.unused_uniforms.sampler2D_samplerCube_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036690, VkglTestCase_036690_1, VkglTestCase_036690_2);
