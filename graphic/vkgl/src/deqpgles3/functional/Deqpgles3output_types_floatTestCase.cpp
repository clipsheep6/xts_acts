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
#include "../ActsDeqpgles30034TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_033073_1 "dEQP-GLES3.functional.vertex_arrays.single_attr"
#define VkglTestCase_033073_2 "ibute.output_types.float.components2_vec2_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033073, VkglTestCase_033073_1, VkglTestCase_033073_2);

#define VkglTestCase_033074_1 "dEQP-GLES3.functional.vertex_arrays.single_attri"
#define VkglTestCase_033074_2 "bute.output_types.float.components2_vec2_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033074, VkglTestCase_033074_1, VkglTestCase_033074_2);

#define VkglTestCase_033075_1 "dEQP-GLES3.functional.vertex_arrays.single_attr"
#define VkglTestCase_033075_2 "ibute.output_types.float.components3_vec2_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033075, VkglTestCase_033075_1, VkglTestCase_033075_2);

#define VkglTestCase_033076_1 "dEQP-GLES3.functional.vertex_arrays.single_attri"
#define VkglTestCase_033076_2 "bute.output_types.float.components3_vec2_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033076, VkglTestCase_033076_1, VkglTestCase_033076_2);

#define VkglTestCase_033077_1 "dEQP-GLES3.functional.vertex_arrays.single_attr"
#define VkglTestCase_033077_2 "ibute.output_types.float.components4_vec2_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033077, VkglTestCase_033077_1, VkglTestCase_033077_2);

#define VkglTestCase_033078_1 "dEQP-GLES3.functional.vertex_arrays.single_attri"
#define VkglTestCase_033078_2 "bute.output_types.float.components4_vec2_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033078, VkglTestCase_033078_1, VkglTestCase_033078_2);

#define VkglTestCase_033079_1 "dEQP-GLES3.functional.vertex_arrays.single_attr"
#define VkglTestCase_033079_2 "ibute.output_types.float.components2_vec3_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033079, VkglTestCase_033079_1, VkglTestCase_033079_2);

#define VkglTestCase_033080_1 "dEQP-GLES3.functional.vertex_arrays.single_attri"
#define VkglTestCase_033080_2 "bute.output_types.float.components2_vec3_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033080, VkglTestCase_033080_1, VkglTestCase_033080_2);

#define VkglTestCase_033081_1 "dEQP-GLES3.functional.vertex_arrays.single_attr"
#define VkglTestCase_033081_2 "ibute.output_types.float.components3_vec3_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033081, VkglTestCase_033081_1, VkglTestCase_033081_2);

#define VkglTestCase_033082_1 "dEQP-GLES3.functional.vertex_arrays.single_attri"
#define VkglTestCase_033082_2 "bute.output_types.float.components3_vec3_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033082, VkglTestCase_033082_1, VkglTestCase_033082_2);

#define VkglTestCase_033083_1 "dEQP-GLES3.functional.vertex_arrays.single_attr"
#define VkglTestCase_033083_2 "ibute.output_types.float.components4_vec3_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033083, VkglTestCase_033083_1, VkglTestCase_033083_2);

#define VkglTestCase_033084_1 "dEQP-GLES3.functional.vertex_arrays.single_attri"
#define VkglTestCase_033084_2 "bute.output_types.float.components4_vec3_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033084, VkglTestCase_033084_1, VkglTestCase_033084_2);

#define VkglTestCase_033085_1 "dEQP-GLES3.functional.vertex_arrays.single_attr"
#define VkglTestCase_033085_2 "ibute.output_types.float.components2_vec4_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033085, VkglTestCase_033085_1, VkglTestCase_033085_2);

#define VkglTestCase_033086_1 "dEQP-GLES3.functional.vertex_arrays.single_attri"
#define VkglTestCase_033086_2 "bute.output_types.float.components2_vec4_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033086, VkglTestCase_033086_1, VkglTestCase_033086_2);

#define VkglTestCase_033087_1 "dEQP-GLES3.functional.vertex_arrays.single_attr"
#define VkglTestCase_033087_2 "ibute.output_types.float.components3_vec4_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033087, VkglTestCase_033087_1, VkglTestCase_033087_2);

#define VkglTestCase_033088_1 "dEQP-GLES3.functional.vertex_arrays.single_attri"
#define VkglTestCase_033088_2 "bute.output_types.float.components3_vec4_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033088, VkglTestCase_033088_1, VkglTestCase_033088_2);

#define VkglTestCase_033089_1 "dEQP-GLES3.functional.vertex_arrays.single_attr"
#define VkglTestCase_033089_2 "ibute.output_types.float.components4_vec4_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033089, VkglTestCase_033089_1, VkglTestCase_033089_2);

#define VkglTestCase_033090_1 "dEQP-GLES3.functional.vertex_arrays.single_attri"
#define VkglTestCase_033090_2 "bute.output_types.float.components4_vec4_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033090, VkglTestCase_033090_1, VkglTestCase_033090_2);
