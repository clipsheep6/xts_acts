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

#define VkglTestCase_033235_1 "dEQP-GLES3.functional.vertex_arrays.single_attr"
#define VkglTestCase_033235_2 "ibute.output_types.fixed.components2_vec2_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033235, VkglTestCase_033235_1, VkglTestCase_033235_2);

#define VkglTestCase_033236_1 "dEQP-GLES3.functional.vertex_arrays.single_attri"
#define VkglTestCase_033236_2 "bute.output_types.fixed.components2_vec2_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033236, VkglTestCase_033236_1, VkglTestCase_033236_2);

#define VkglTestCase_033237_1 "dEQP-GLES3.functional.vertex_arrays.single_attr"
#define VkglTestCase_033237_2 "ibute.output_types.fixed.components3_vec2_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033237, VkglTestCase_033237_1, VkglTestCase_033237_2);

#define VkglTestCase_033238_1 "dEQP-GLES3.functional.vertex_arrays.single_attri"
#define VkglTestCase_033238_2 "bute.output_types.fixed.components3_vec2_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033238, VkglTestCase_033238_1, VkglTestCase_033238_2);

#define VkglTestCase_033239_1 "dEQP-GLES3.functional.vertex_arrays.single_attr"
#define VkglTestCase_033239_2 "ibute.output_types.fixed.components4_vec2_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033239, VkglTestCase_033239_1, VkglTestCase_033239_2);

#define VkglTestCase_033240_1 "dEQP-GLES3.functional.vertex_arrays.single_attri"
#define VkglTestCase_033240_2 "bute.output_types.fixed.components4_vec2_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033240, VkglTestCase_033240_1, VkglTestCase_033240_2);

#define VkglTestCase_033241_1 "dEQP-GLES3.functional.vertex_arrays.single_attr"
#define VkglTestCase_033241_2 "ibute.output_types.fixed.components2_vec3_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033241, VkglTestCase_033241_1, VkglTestCase_033241_2);

#define VkglTestCase_033242_1 "dEQP-GLES3.functional.vertex_arrays.single_attri"
#define VkglTestCase_033242_2 "bute.output_types.fixed.components2_vec3_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033242, VkglTestCase_033242_1, VkglTestCase_033242_2);

#define VkglTestCase_033243_1 "dEQP-GLES3.functional.vertex_arrays.single_attr"
#define VkglTestCase_033243_2 "ibute.output_types.fixed.components3_vec3_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033243, VkglTestCase_033243_1, VkglTestCase_033243_2);

#define VkglTestCase_033244_1 "dEQP-GLES3.functional.vertex_arrays.single_attri"
#define VkglTestCase_033244_2 "bute.output_types.fixed.components3_vec3_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033244, VkglTestCase_033244_1, VkglTestCase_033244_2);

#define VkglTestCase_033245_1 "dEQP-GLES3.functional.vertex_arrays.single_attr"
#define VkglTestCase_033245_2 "ibute.output_types.fixed.components4_vec3_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033245, VkglTestCase_033245_1, VkglTestCase_033245_2);

#define VkglTestCase_033246_1 "dEQP-GLES3.functional.vertex_arrays.single_attri"
#define VkglTestCase_033246_2 "bute.output_types.fixed.components4_vec3_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033246, VkglTestCase_033246_1, VkglTestCase_033246_2);

#define VkglTestCase_033247_1 "dEQP-GLES3.functional.vertex_arrays.single_attr"
#define VkglTestCase_033247_2 "ibute.output_types.fixed.components2_vec4_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033247, VkglTestCase_033247_1, VkglTestCase_033247_2);

#define VkglTestCase_033248_1 "dEQP-GLES3.functional.vertex_arrays.single_attri"
#define VkglTestCase_033248_2 "bute.output_types.fixed.components2_vec4_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033248, VkglTestCase_033248_1, VkglTestCase_033248_2);

#define VkglTestCase_033249_1 "dEQP-GLES3.functional.vertex_arrays.single_attr"
#define VkglTestCase_033249_2 "ibute.output_types.fixed.components3_vec4_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033249, VkglTestCase_033249_1, VkglTestCase_033249_2);

#define VkglTestCase_033250_1 "dEQP-GLES3.functional.vertex_arrays.single_attri"
#define VkglTestCase_033250_2 "bute.output_types.fixed.components3_vec4_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033250, VkglTestCase_033250_1, VkglTestCase_033250_2);

#define VkglTestCase_033251_1 "dEQP-GLES3.functional.vertex_arrays.single_attr"
#define VkglTestCase_033251_2 "ibute.output_types.fixed.components4_vec4_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033251, VkglTestCase_033251_1, VkglTestCase_033251_2);

#define VkglTestCase_033252_1 "dEQP-GLES3.functional.vertex_arrays.single_attri"
#define VkglTestCase_033252_2 "bute.output_types.fixed.components4_vec4_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033252, VkglTestCase_033252_1, VkglTestCase_033252_2);
