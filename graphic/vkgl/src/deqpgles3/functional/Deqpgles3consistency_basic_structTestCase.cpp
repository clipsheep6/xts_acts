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

#define VkglTestCase_036802_1 "dEQP-GLES3.functional.uniform_api.info_quer"
#define VkglTestCase_036802_2 "y.consistency.basic_struct.float_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036802, VkglTestCase_036802_1, VkglTestCase_036802_2);

#define VkglTestCase_036803_1 "dEQP-GLES3.functional.uniform_api.info_query"
#define VkglTestCase_036803_2 ".consistency.basic_struct.float_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036803, VkglTestCase_036803_1, VkglTestCase_036803_2);

#define VkglTestCase_036804_1 "dEQP-GLES3.functional.uniform_api.info_que"
#define VkglTestCase_036804_2 "ry.consistency.basic_struct.float_vec4_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036804, VkglTestCase_036804_1, VkglTestCase_036804_2);

#define VkglTestCase_036805_1 "dEQP-GLES3.functional.uniform_api.info_quer"
#define VkglTestCase_036805_2 "y.consistency.basic_struct.mat4_mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036805, VkglTestCase_036805_1, VkglTestCase_036805_2);

#define VkglTestCase_036806_1 "dEQP-GLES3.functional.uniform_api.info_query"
#define VkglTestCase_036806_2 ".consistency.basic_struct.mat4_mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036806, VkglTestCase_036806_1, VkglTestCase_036806_2);

#define VkglTestCase_036807_1 "dEQP-GLES3.functional.uniform_api.info_que"
#define VkglTestCase_036807_2 "ry.consistency.basic_struct.mat4_mat2_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036807, VkglTestCase_036807_1, VkglTestCase_036807_2);

#define VkglTestCase_036808_1 "dEQP-GLES3.functional.uniform_api.info_quer"
#define VkglTestCase_036808_2 "y.consistency.basic_struct.int_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036808, VkglTestCase_036808_1, VkglTestCase_036808_2);

#define VkglTestCase_036809_1 "dEQP-GLES3.functional.uniform_api.info_query"
#define VkglTestCase_036809_2 ".consistency.basic_struct.int_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036809, VkglTestCase_036809_1, VkglTestCase_036809_2);

#define VkglTestCase_036810_1 "dEQP-GLES3.functional.uniform_api.info_que"
#define VkglTestCase_036810_2 "ry.consistency.basic_struct.int_ivec4_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036810, VkglTestCase_036810_1, VkglTestCase_036810_2);

#define VkglTestCase_036811_1 "dEQP-GLES3.functional.uniform_api.info_quer"
#define VkglTestCase_036811_2 "y.consistency.basic_struct.uint_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036811, VkglTestCase_036811_1, VkglTestCase_036811_2);

#define VkglTestCase_036812_1 "dEQP-GLES3.functional.uniform_api.info_query"
#define VkglTestCase_036812_2 ".consistency.basic_struct.uint_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036812, VkglTestCase_036812_1, VkglTestCase_036812_2);

#define VkglTestCase_036813_1 "dEQP-GLES3.functional.uniform_api.info_que"
#define VkglTestCase_036813_2 "ry.consistency.basic_struct.uint_uvec4_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036813, VkglTestCase_036813_1, VkglTestCase_036813_2);

#define VkglTestCase_036814_1 "dEQP-GLES3.functional.uniform_api.info_quer"
#define VkglTestCase_036814_2 "y.consistency.basic_struct.bool_bvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036814, VkglTestCase_036814_1, VkglTestCase_036814_2);

#define VkglTestCase_036815_1 "dEQP-GLES3.functional.uniform_api.info_query"
#define VkglTestCase_036815_2 ".consistency.basic_struct.bool_bvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036815, VkglTestCase_036815_1, VkglTestCase_036815_2);

#define VkglTestCase_036816_1 "dEQP-GLES3.functional.uniform_api.info_que"
#define VkglTestCase_036816_2 "ry.consistency.basic_struct.bool_bvec4_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036816, VkglTestCase_036816_1, VkglTestCase_036816_2);

#define VkglTestCase_036817_1 "dEQP-GLES3.functional.uniform_api.info_query.cons"
#define VkglTestCase_036817_2 "istency.basic_struct.sampler2D_samplerCube_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036817, VkglTestCase_036817_1, VkglTestCase_036817_2);

#define VkglTestCase_036818_1 "dEQP-GLES3.functional.uniform_api.info_query.consi"
#define VkglTestCase_036818_2 "stency.basic_struct.sampler2D_samplerCube_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036818, VkglTestCase_036818_1, VkglTestCase_036818_2);

#define VkglTestCase_036819_1 "dEQP-GLES3.functional.uniform_api.info_query.con"
#define VkglTestCase_036819_2 "sistency.basic_struct.sampler2D_samplerCube_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036819, VkglTestCase_036819_1, VkglTestCase_036819_2);
