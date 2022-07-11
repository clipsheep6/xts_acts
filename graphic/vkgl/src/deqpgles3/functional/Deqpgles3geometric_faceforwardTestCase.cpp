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
#include "../ActsDeqpgles30014TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_013342_1 "dEQP-GLES3.functional.shaders.operator.g"
#define VkglTestCase_013342_2 "eometric.faceforward.mediump_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013342, VkglTestCase_013342_1, VkglTestCase_013342_2);

#define VkglTestCase_013343_1 "dEQP-GLES3.functional.shaders.operator.ge"
#define VkglTestCase_013343_2 "ometric.faceforward.mediump_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013343, VkglTestCase_013343_1, VkglTestCase_013343_2);

#define VkglTestCase_013344_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_013344_2 "geometric.faceforward.highp_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013344, VkglTestCase_013344_1, VkglTestCase_013344_2);

#define VkglTestCase_013345_1 "dEQP-GLES3.functional.shaders.operator.g"
#define VkglTestCase_013345_2 "eometric.faceforward.highp_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013345, VkglTestCase_013345_1, VkglTestCase_013345_2);

#define VkglTestCase_013346_1 "dEQP-GLES3.functional.shaders.operator.g"
#define VkglTestCase_013346_2 "eometric.faceforward.mediump_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013346, VkglTestCase_013346_1, VkglTestCase_013346_2);

#define VkglTestCase_013347_1 "dEQP-GLES3.functional.shaders.operator.ge"
#define VkglTestCase_013347_2 "ometric.faceforward.mediump_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013347, VkglTestCase_013347_1, VkglTestCase_013347_2);

#define VkglTestCase_013348_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_013348_2 "geometric.faceforward.highp_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013348, VkglTestCase_013348_1, VkglTestCase_013348_2);

#define VkglTestCase_013349_1 "dEQP-GLES3.functional.shaders.operator.g"
#define VkglTestCase_013349_2 "eometric.faceforward.highp_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013349, VkglTestCase_013349_1, VkglTestCase_013349_2);

#define VkglTestCase_013350_1 "dEQP-GLES3.functional.shaders.operator.g"
#define VkglTestCase_013350_2 "eometric.faceforward.mediump_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013350, VkglTestCase_013350_1, VkglTestCase_013350_2);

#define VkglTestCase_013351_1 "dEQP-GLES3.functional.shaders.operator.ge"
#define VkglTestCase_013351_2 "ometric.faceforward.mediump_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013351, VkglTestCase_013351_1, VkglTestCase_013351_2);

#define VkglTestCase_013352_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_013352_2 "geometric.faceforward.highp_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013352, VkglTestCase_013352_1, VkglTestCase_013352_2);

#define VkglTestCase_013353_1 "dEQP-GLES3.functional.shaders.operator.g"
#define VkglTestCase_013353_2 "eometric.faceforward.highp_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013353, VkglTestCase_013353_1, VkglTestCase_013353_2);

#define VkglTestCase_013354_1 "dEQP-GLES3.functional.shaders.operator.g"
#define VkglTestCase_013354_2 "eometric.faceforward.mediump_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013354, VkglTestCase_013354_1, VkglTestCase_013354_2);

#define VkglTestCase_013355_1 "dEQP-GLES3.functional.shaders.operator.ge"
#define VkglTestCase_013355_2 "ometric.faceforward.mediump_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013355, VkglTestCase_013355_1, VkglTestCase_013355_2);

#define VkglTestCase_013356_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_013356_2 "geometric.faceforward.highp_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013356, VkglTestCase_013356_1, VkglTestCase_013356_2);

#define VkglTestCase_013357_1 "dEQP-GLES3.functional.shaders.operator.g"
#define VkglTestCase_013357_2 "eometric.faceforward.highp_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013357, VkglTestCase_013357_1, VkglTestCase_013357_2);
