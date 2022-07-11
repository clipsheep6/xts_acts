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

#define VkglTestCase_033325_1 "dEQP-GLES3.functional.vertex_arrays.single_attr"
#define VkglTestCase_033325_2 "ibute.output_types.half.components2_vec2_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033325, VkglTestCase_033325_1, VkglTestCase_033325_2);

#define VkglTestCase_033326_1 "dEQP-GLES3.functional.vertex_arrays.single_attri"
#define VkglTestCase_033326_2 "bute.output_types.half.components2_vec2_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033326, VkglTestCase_033326_1, VkglTestCase_033326_2);

#define VkglTestCase_033327_1 "dEQP-GLES3.functional.vertex_arrays.single_attr"
#define VkglTestCase_033327_2 "ibute.output_types.half.components3_vec2_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033327, VkglTestCase_033327_1, VkglTestCase_033327_2);

#define VkglTestCase_033328_1 "dEQP-GLES3.functional.vertex_arrays.single_attri"
#define VkglTestCase_033328_2 "bute.output_types.half.components3_vec2_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033328, VkglTestCase_033328_1, VkglTestCase_033328_2);

#define VkglTestCase_033329_1 "dEQP-GLES3.functional.vertex_arrays.single_attr"
#define VkglTestCase_033329_2 "ibute.output_types.half.components4_vec2_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033329, VkglTestCase_033329_1, VkglTestCase_033329_2);

#define VkglTestCase_033330_1 "dEQP-GLES3.functional.vertex_arrays.single_attri"
#define VkglTestCase_033330_2 "bute.output_types.half.components4_vec2_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033330, VkglTestCase_033330_1, VkglTestCase_033330_2);

#define VkglTestCase_033331_1 "dEQP-GLES3.functional.vertex_arrays.single_attr"
#define VkglTestCase_033331_2 "ibute.output_types.half.components2_vec3_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033331, VkglTestCase_033331_1, VkglTestCase_033331_2);

#define VkglTestCase_033332_1 "dEQP-GLES3.functional.vertex_arrays.single_attri"
#define VkglTestCase_033332_2 "bute.output_types.half.components2_vec3_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033332, VkglTestCase_033332_1, VkglTestCase_033332_2);

#define VkglTestCase_033333_1 "dEQP-GLES3.functional.vertex_arrays.single_attr"
#define VkglTestCase_033333_2 "ibute.output_types.half.components3_vec3_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033333, VkglTestCase_033333_1, VkglTestCase_033333_2);

#define VkglTestCase_033334_1 "dEQP-GLES3.functional.vertex_arrays.single_attri"
#define VkglTestCase_033334_2 "bute.output_types.half.components3_vec3_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033334, VkglTestCase_033334_1, VkglTestCase_033334_2);

#define VkglTestCase_033335_1 "dEQP-GLES3.functional.vertex_arrays.single_attr"
#define VkglTestCase_033335_2 "ibute.output_types.half.components4_vec3_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033335, VkglTestCase_033335_1, VkglTestCase_033335_2);

#define VkglTestCase_033336_1 "dEQP-GLES3.functional.vertex_arrays.single_attri"
#define VkglTestCase_033336_2 "bute.output_types.half.components4_vec3_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033336, VkglTestCase_033336_1, VkglTestCase_033336_2);

#define VkglTestCase_033337_1 "dEQP-GLES3.functional.vertex_arrays.single_attr"
#define VkglTestCase_033337_2 "ibute.output_types.half.components2_vec4_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033337, VkglTestCase_033337_1, VkglTestCase_033337_2);

#define VkglTestCase_033338_1 "dEQP-GLES3.functional.vertex_arrays.single_attri"
#define VkglTestCase_033338_2 "bute.output_types.half.components2_vec4_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033338, VkglTestCase_033338_1, VkglTestCase_033338_2);

#define VkglTestCase_033339_1 "dEQP-GLES3.functional.vertex_arrays.single_attr"
#define VkglTestCase_033339_2 "ibute.output_types.half.components3_vec4_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033339, VkglTestCase_033339_1, VkglTestCase_033339_2);

#define VkglTestCase_033340_1 "dEQP-GLES3.functional.vertex_arrays.single_attri"
#define VkglTestCase_033340_2 "bute.output_types.half.components3_vec4_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033340, VkglTestCase_033340_1, VkglTestCase_033340_2);

#define VkglTestCase_033341_1 "dEQP-GLES3.functional.vertex_arrays.single_attr"
#define VkglTestCase_033341_2 "ibute.output_types.half.components4_vec4_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033341, VkglTestCase_033341_1, VkglTestCase_033341_2);

#define VkglTestCase_033342_1 "dEQP-GLES3.functional.vertex_arrays.single_attri"
#define VkglTestCase_033342_2 "bute.output_types.half.components4_vec4_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033342, VkglTestCase_033342_1, VkglTestCase_033342_2);
