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

#define VkglTestCase_036406_1 "dEQP-GLES3.functional.uniform_api.info_query.acti"
#define VkglTestCase_036406_2 "ve_uniform.nested_structs_arrays.float_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036406, VkglTestCase_036406_1, VkglTestCase_036406_2);

#define VkglTestCase_036407_1 "dEQP-GLES3.functional.uniform_api.info_query.activ"
#define VkglTestCase_036407_2 "e_uniform.nested_structs_arrays.float_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036407, VkglTestCase_036407_1, VkglTestCase_036407_2);

#define VkglTestCase_036408_1 "dEQP-GLES3.functional.uniform_api.info_query.act"
#define VkglTestCase_036408_2 "ive_uniform.nested_structs_arrays.float_vec4_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036408, VkglTestCase_036408_1, VkglTestCase_036408_2);

#define VkglTestCase_036409_1 "dEQP-GLES3.functional.uniform_api.info_query.acti"
#define VkglTestCase_036409_2 "ve_uniform.nested_structs_arrays.mat4_mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036409, VkglTestCase_036409_1, VkglTestCase_036409_2);

#define VkglTestCase_036410_1 "dEQP-GLES3.functional.uniform_api.info_query.activ"
#define VkglTestCase_036410_2 "e_uniform.nested_structs_arrays.mat4_mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036410, VkglTestCase_036410_1, VkglTestCase_036410_2);

#define VkglTestCase_036411_1 "dEQP-GLES3.functional.uniform_api.info_query.act"
#define VkglTestCase_036411_2 "ive_uniform.nested_structs_arrays.mat4_mat2_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036411, VkglTestCase_036411_1, VkglTestCase_036411_2);

#define VkglTestCase_036412_1 "dEQP-GLES3.functional.uniform_api.info_query.acti"
#define VkglTestCase_036412_2 "ve_uniform.nested_structs_arrays.int_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036412, VkglTestCase_036412_1, VkglTestCase_036412_2);

#define VkglTestCase_036413_1 "dEQP-GLES3.functional.uniform_api.info_query.activ"
#define VkglTestCase_036413_2 "e_uniform.nested_structs_arrays.int_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036413, VkglTestCase_036413_1, VkglTestCase_036413_2);

#define VkglTestCase_036414_1 "dEQP-GLES3.functional.uniform_api.info_query.act"
#define VkglTestCase_036414_2 "ive_uniform.nested_structs_arrays.int_ivec4_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036414, VkglTestCase_036414_1, VkglTestCase_036414_2);

#define VkglTestCase_036415_1 "dEQP-GLES3.functional.uniform_api.info_query.acti"
#define VkglTestCase_036415_2 "ve_uniform.nested_structs_arrays.uint_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036415, VkglTestCase_036415_1, VkglTestCase_036415_2);

#define VkglTestCase_036416_1 "dEQP-GLES3.functional.uniform_api.info_query.activ"
#define VkglTestCase_036416_2 "e_uniform.nested_structs_arrays.uint_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036416, VkglTestCase_036416_1, VkglTestCase_036416_2);

#define VkglTestCase_036417_1 "dEQP-GLES3.functional.uniform_api.info_query.act"
#define VkglTestCase_036417_2 "ive_uniform.nested_structs_arrays.uint_uvec4_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036417, VkglTestCase_036417_1, VkglTestCase_036417_2);

#define VkglTestCase_036418_1 "dEQP-GLES3.functional.uniform_api.info_query.acti"
#define VkglTestCase_036418_2 "ve_uniform.nested_structs_arrays.bool_bvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036418, VkglTestCase_036418_1, VkglTestCase_036418_2);

#define VkglTestCase_036419_1 "dEQP-GLES3.functional.uniform_api.info_query.activ"
#define VkglTestCase_036419_2 "e_uniform.nested_structs_arrays.bool_bvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036419, VkglTestCase_036419_1, VkglTestCase_036419_2);

#define VkglTestCase_036420_1 "dEQP-GLES3.functional.uniform_api.info_query.act"
#define VkglTestCase_036420_2 "ive_uniform.nested_structs_arrays.bool_bvec4_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036420, VkglTestCase_036420_1, VkglTestCase_036420_2);

#define VkglTestCase_036421_1 "dEQP-GLES3.functional.uniform_api.info_query.active_uni"
#define VkglTestCase_036421_2 "form.nested_structs_arrays.sampler2D_samplerCube_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036421, VkglTestCase_036421_1, VkglTestCase_036421_2);

#define VkglTestCase_036422_1 "dEQP-GLES3.functional.uniform_api.info_query.active_unif"
#define VkglTestCase_036422_2 "orm.nested_structs_arrays.sampler2D_samplerCube_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036422, VkglTestCase_036422_1, VkglTestCase_036422_2);

#define VkglTestCase_036423_1 "dEQP-GLES3.functional.uniform_api.info_query.active_un"
#define VkglTestCase_036423_2 "iform.nested_structs_arrays.sampler2D_samplerCube_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036423, VkglTestCase_036423_1, VkglTestCase_036423_2);
