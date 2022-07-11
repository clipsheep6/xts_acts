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

#define VkglTestCase_036532_1 "dEQP-GLES3.functional.uniform_api.info_query.in"
#define VkglTestCase_036532_2 "dices_active_uniformsiv.basic_array.float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036532, VkglTestCase_036532_1, VkglTestCase_036532_2);

#define VkglTestCase_036533_1 "dEQP-GLES3.functional.uniform_api.info_query.ind"
#define VkglTestCase_036533_2 "ices_active_uniformsiv.basic_array.float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036533, VkglTestCase_036533_1, VkglTestCase_036533_2);

#define VkglTestCase_036534_1 "dEQP-GLES3.functional.uniform_api.info_query.i"
#define VkglTestCase_036534_2 "ndices_active_uniformsiv.basic_array.float_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036534, VkglTestCase_036534_1, VkglTestCase_036534_2);

#define VkglTestCase_036535_1 "dEQP-GLES3.functional.uniform_api.info_query.in"
#define VkglTestCase_036535_2 "dices_active_uniformsiv.basic_array.vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036535, VkglTestCase_036535_1, VkglTestCase_036535_2);

#define VkglTestCase_036536_1 "dEQP-GLES3.functional.uniform_api.info_query.ind"
#define VkglTestCase_036536_2 "ices_active_uniformsiv.basic_array.vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036536, VkglTestCase_036536_1, VkglTestCase_036536_2);

#define VkglTestCase_036537_1 "dEQP-GLES3.functional.uniform_api.info_query.i"
#define VkglTestCase_036537_2 "ndices_active_uniformsiv.basic_array.vec4_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036537, VkglTestCase_036537_1, VkglTestCase_036537_2);

#define VkglTestCase_036538_1 "dEQP-GLES3.functional.uniform_api.info_query.in"
#define VkglTestCase_036538_2 "dices_active_uniformsiv.basic_array.mat4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036538, VkglTestCase_036538_1, VkglTestCase_036538_2);

#define VkglTestCase_036539_1 "dEQP-GLES3.functional.uniform_api.info_query.ind"
#define VkglTestCase_036539_2 "ices_active_uniformsiv.basic_array.mat4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036539, VkglTestCase_036539_1, VkglTestCase_036539_2);

#define VkglTestCase_036540_1 "dEQP-GLES3.functional.uniform_api.info_query.i"
#define VkglTestCase_036540_2 "ndices_active_uniformsiv.basic_array.mat4_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036540, VkglTestCase_036540_1, VkglTestCase_036540_2);

#define VkglTestCase_036541_1 "dEQP-GLES3.functional.uniform_api.info_query.i"
#define VkglTestCase_036541_2 "ndices_active_uniformsiv.basic_array.int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036541, VkglTestCase_036541_1, VkglTestCase_036541_2);

#define VkglTestCase_036542_1 "dEQP-GLES3.functional.uniform_api.info_query.in"
#define VkglTestCase_036542_2 "dices_active_uniformsiv.basic_array.int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036542, VkglTestCase_036542_1, VkglTestCase_036542_2);

#define VkglTestCase_036543_1 "dEQP-GLES3.functional.uniform_api.info_query."
#define VkglTestCase_036543_2 "indices_active_uniformsiv.basic_array.int_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036543, VkglTestCase_036543_1, VkglTestCase_036543_2);

#define VkglTestCase_036544_1 "dEQP-GLES3.functional.uniform_api.info_query.in"
#define VkglTestCase_036544_2 "dices_active_uniformsiv.basic_array.ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036544, VkglTestCase_036544_1, VkglTestCase_036544_2);

#define VkglTestCase_036545_1 "dEQP-GLES3.functional.uniform_api.info_query.ind"
#define VkglTestCase_036545_2 "ices_active_uniformsiv.basic_array.ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036545, VkglTestCase_036545_1, VkglTestCase_036545_2);

#define VkglTestCase_036546_1 "dEQP-GLES3.functional.uniform_api.info_query.i"
#define VkglTestCase_036546_2 "ndices_active_uniformsiv.basic_array.ivec4_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036546, VkglTestCase_036546_1, VkglTestCase_036546_2);

#define VkglTestCase_036547_1 "dEQP-GLES3.functional.uniform_api.info_query.in"
#define VkglTestCase_036547_2 "dices_active_uniformsiv.basic_array.uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036547, VkglTestCase_036547_1, VkglTestCase_036547_2);

#define VkglTestCase_036548_1 "dEQP-GLES3.functional.uniform_api.info_query.ind"
#define VkglTestCase_036548_2 "ices_active_uniformsiv.basic_array.uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036548, VkglTestCase_036548_1, VkglTestCase_036548_2);

#define VkglTestCase_036549_1 "dEQP-GLES3.functional.uniform_api.info_query.i"
#define VkglTestCase_036549_2 "ndices_active_uniformsiv.basic_array.uint_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036549, VkglTestCase_036549_1, VkglTestCase_036549_2);

#define VkglTestCase_036550_1 "dEQP-GLES3.functional.uniform_api.info_query.in"
#define VkglTestCase_036550_2 "dices_active_uniformsiv.basic_array.uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036550, VkglTestCase_036550_1, VkglTestCase_036550_2);

#define VkglTestCase_036551_1 "dEQP-GLES3.functional.uniform_api.info_query.ind"
#define VkglTestCase_036551_2 "ices_active_uniformsiv.basic_array.uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036551, VkglTestCase_036551_1, VkglTestCase_036551_2);

#define VkglTestCase_036552_1 "dEQP-GLES3.functional.uniform_api.info_query.i"
#define VkglTestCase_036552_2 "ndices_active_uniformsiv.basic_array.uvec4_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036552, VkglTestCase_036552_1, VkglTestCase_036552_2);

#define VkglTestCase_036553_1 "dEQP-GLES3.functional.uniform_api.info_query.in"
#define VkglTestCase_036553_2 "dices_active_uniformsiv.basic_array.bool_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036553, VkglTestCase_036553_1, VkglTestCase_036553_2);

#define VkglTestCase_036554_1 "dEQP-GLES3.functional.uniform_api.info_query.ind"
#define VkglTestCase_036554_2 "ices_active_uniformsiv.basic_array.bool_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036554, VkglTestCase_036554_1, VkglTestCase_036554_2);

#define VkglTestCase_036555_1 "dEQP-GLES3.functional.uniform_api.info_query.i"
#define VkglTestCase_036555_2 "ndices_active_uniformsiv.basic_array.bool_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036555, VkglTestCase_036555_1, VkglTestCase_036555_2);

#define VkglTestCase_036556_1 "dEQP-GLES3.functional.uniform_api.info_query.in"
#define VkglTestCase_036556_2 "dices_active_uniformsiv.basic_array.bvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036556, VkglTestCase_036556_1, VkglTestCase_036556_2);

#define VkglTestCase_036557_1 "dEQP-GLES3.functional.uniform_api.info_query.ind"
#define VkglTestCase_036557_2 "ices_active_uniformsiv.basic_array.bvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036557, VkglTestCase_036557_1, VkglTestCase_036557_2);

#define VkglTestCase_036558_1 "dEQP-GLES3.functional.uniform_api.info_query.i"
#define VkglTestCase_036558_2 "ndices_active_uniformsiv.basic_array.bvec4_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036558, VkglTestCase_036558_1, VkglTestCase_036558_2);

#define VkglTestCase_036559_1 "dEQP-GLES3.functional.uniform_api.info_query.indi"
#define VkglTestCase_036559_2 "ces_active_uniformsiv.basic_array.sampler2D_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036559, VkglTestCase_036559_1, VkglTestCase_036559_2);

#define VkglTestCase_036560_1 "dEQP-GLES3.functional.uniform_api.info_query.indic"
#define VkglTestCase_036560_2 "es_active_uniformsiv.basic_array.sampler2D_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036560, VkglTestCase_036560_1, VkglTestCase_036560_2);

#define VkglTestCase_036561_1 "dEQP-GLES3.functional.uniform_api.info_query.ind"
#define VkglTestCase_036561_2 "ices_active_uniformsiv.basic_array.sampler2D_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036561, VkglTestCase_036561_1, VkglTestCase_036561_2);
