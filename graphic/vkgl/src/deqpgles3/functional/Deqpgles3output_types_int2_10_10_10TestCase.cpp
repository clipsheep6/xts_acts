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

#define VkglTestCase_033349_1 "dEQP-GLES3.functional.vertex_arrays.single_attribut"
#define VkglTestCase_033349_2 "e.output_types.int2_10_10_10.components4_vec2_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033349, VkglTestCase_033349_1, VkglTestCase_033349_2);

#define VkglTestCase_033350_1 "dEQP-GLES3.functional.vertex_arrays.single_attribute"
#define VkglTestCase_033350_2 ".output_types.int2_10_10_10.components4_vec2_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033350, VkglTestCase_033350_1, VkglTestCase_033350_2);

#define VkglTestCase_033351_1 "dEQP-GLES3.functional.vertex_arrays.single_attribut"
#define VkglTestCase_033351_2 "e.output_types.int2_10_10_10.components4_vec3_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033351, VkglTestCase_033351_1, VkglTestCase_033351_2);

#define VkglTestCase_033352_1 "dEQP-GLES3.functional.vertex_arrays.single_attribute"
#define VkglTestCase_033352_2 ".output_types.int2_10_10_10.components4_vec3_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033352, VkglTestCase_033352_1, VkglTestCase_033352_2);

#define VkglTestCase_033353_1 "dEQP-GLES3.functional.vertex_arrays.single_attribut"
#define VkglTestCase_033353_2 "e.output_types.int2_10_10_10.components4_vec4_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033353, VkglTestCase_033353_1, VkglTestCase_033353_2);

#define VkglTestCase_033354_1 "dEQP-GLES3.functional.vertex_arrays.single_attribute"
#define VkglTestCase_033354_2 ".output_types.int2_10_10_10.components4_vec4_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033354, VkglTestCase_033354_1, VkglTestCase_033354_2);
