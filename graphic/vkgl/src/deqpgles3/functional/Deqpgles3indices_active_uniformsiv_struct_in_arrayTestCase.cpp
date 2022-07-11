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

#define VkglTestCase_036610_1 "dEQP-GLES3.functional.uniform_api.info_query.indices"
#define VkglTestCase_036610_2 "_active_uniformsiv.struct_in_array.float_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036610, VkglTestCase_036610_1, VkglTestCase_036610_2);

#define VkglTestCase_036611_1 "dEQP-GLES3.functional.uniform_api.info_query.indices_"
#define VkglTestCase_036611_2 "active_uniformsiv.struct_in_array.float_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036611, VkglTestCase_036611_1, VkglTestCase_036611_2);

#define VkglTestCase_036612_1 "dEQP-GLES3.functional.uniform_api.info_query.indice"
#define VkglTestCase_036612_2 "s_active_uniformsiv.struct_in_array.float_vec4_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036612, VkglTestCase_036612_1, VkglTestCase_036612_2);

#define VkglTestCase_036613_1 "dEQP-GLES3.functional.uniform_api.info_query.indice"
#define VkglTestCase_036613_2 "s_active_uniformsiv.struct_in_array.mat4_mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036613, VkglTestCase_036613_1, VkglTestCase_036613_2);

#define VkglTestCase_036614_1 "dEQP-GLES3.functional.uniform_api.info_query.indices"
#define VkglTestCase_036614_2 "_active_uniformsiv.struct_in_array.mat4_mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036614, VkglTestCase_036614_1, VkglTestCase_036614_2);

#define VkglTestCase_036615_1 "dEQP-GLES3.functional.uniform_api.info_query.indic"
#define VkglTestCase_036615_2 "es_active_uniformsiv.struct_in_array.mat4_mat2_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036615, VkglTestCase_036615_1, VkglTestCase_036615_2);

#define VkglTestCase_036616_1 "dEQP-GLES3.functional.uniform_api.info_query.indice"
#define VkglTestCase_036616_2 "s_active_uniformsiv.struct_in_array.int_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036616, VkglTestCase_036616_1, VkglTestCase_036616_2);

#define VkglTestCase_036617_1 "dEQP-GLES3.functional.uniform_api.info_query.indices"
#define VkglTestCase_036617_2 "_active_uniformsiv.struct_in_array.int_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036617, VkglTestCase_036617_1, VkglTestCase_036617_2);

#define VkglTestCase_036618_1 "dEQP-GLES3.functional.uniform_api.info_query.indic"
#define VkglTestCase_036618_2 "es_active_uniformsiv.struct_in_array.int_ivec4_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036618, VkglTestCase_036618_1, VkglTestCase_036618_2);

#define VkglTestCase_036619_1 "dEQP-GLES3.functional.uniform_api.info_query.indices"
#define VkglTestCase_036619_2 "_active_uniformsiv.struct_in_array.uint_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036619, VkglTestCase_036619_1, VkglTestCase_036619_2);

#define VkglTestCase_036620_1 "dEQP-GLES3.functional.uniform_api.info_query.indices_"
#define VkglTestCase_036620_2 "active_uniformsiv.struct_in_array.uint_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036620, VkglTestCase_036620_1, VkglTestCase_036620_2);

#define VkglTestCase_036621_1 "dEQP-GLES3.functional.uniform_api.info_query.indice"
#define VkglTestCase_036621_2 "s_active_uniformsiv.struct_in_array.uint_uvec4_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036621, VkglTestCase_036621_1, VkglTestCase_036621_2);

#define VkglTestCase_036622_1 "dEQP-GLES3.functional.uniform_api.info_query.indices"
#define VkglTestCase_036622_2 "_active_uniformsiv.struct_in_array.bool_bvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036622, VkglTestCase_036622_1, VkglTestCase_036622_2);

#define VkglTestCase_036623_1 "dEQP-GLES3.functional.uniform_api.info_query.indices_"
#define VkglTestCase_036623_2 "active_uniformsiv.struct_in_array.bool_bvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036623, VkglTestCase_036623_1, VkglTestCase_036623_2);

#define VkglTestCase_036624_1 "dEQP-GLES3.functional.uniform_api.info_query.indice"
#define VkglTestCase_036624_2 "s_active_uniformsiv.struct_in_array.bool_bvec4_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036624, VkglTestCase_036624_1, VkglTestCase_036624_2);

#define VkglTestCase_036625_1 "dEQP-GLES3.functional.uniform_api.info_query.indices_acti"
#define VkglTestCase_036625_2 "ve_uniformsiv.struct_in_array.sampler2D_samplerCube_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036625, VkglTestCase_036625_1, VkglTestCase_036625_2);

#define VkglTestCase_036626_1 "dEQP-GLES3.functional.uniform_api.info_query.indices_activ"
#define VkglTestCase_036626_2 "e_uniformsiv.struct_in_array.sampler2D_samplerCube_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036626, VkglTestCase_036626_1, VkglTestCase_036626_2);

#define VkglTestCase_036627_1 "dEQP-GLES3.functional.uniform_api.info_query.indices_act"
#define VkglTestCase_036627_2 "ive_uniformsiv.struct_in_array.sampler2D_samplerCube_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036627, VkglTestCase_036627_1, VkglTestCase_036627_2);
