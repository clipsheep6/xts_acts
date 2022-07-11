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

#define VkglTestCase_013326_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_013326_2 "geometric.normalize.mediump_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013326, VkglTestCase_013326_1, VkglTestCase_013326_2);

#define VkglTestCase_013327_1 "dEQP-GLES3.functional.shaders.operator.g"
#define VkglTestCase_013327_2 "eometric.normalize.mediump_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013327, VkglTestCase_013327_1, VkglTestCase_013327_2);

#define VkglTestCase_013328_1 "dEQP-GLES3.functional.shaders.operator"
#define VkglTestCase_013328_2 ".geometric.normalize.highp_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013328, VkglTestCase_013328_1, VkglTestCase_013328_2);

#define VkglTestCase_013329_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_013329_2 "geometric.normalize.highp_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013329, VkglTestCase_013329_1, VkglTestCase_013329_2);

#define VkglTestCase_013330_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_013330_2 "geometric.normalize.mediump_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013330, VkglTestCase_013330_1, VkglTestCase_013330_2);

#define VkglTestCase_013331_1 "dEQP-GLES3.functional.shaders.operator.g"
#define VkglTestCase_013331_2 "eometric.normalize.mediump_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013331, VkglTestCase_013331_1, VkglTestCase_013331_2);

#define VkglTestCase_013332_1 "dEQP-GLES3.functional.shaders.operator"
#define VkglTestCase_013332_2 ".geometric.normalize.highp_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013332, VkglTestCase_013332_1, VkglTestCase_013332_2);

#define VkglTestCase_013333_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_013333_2 "geometric.normalize.highp_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013333, VkglTestCase_013333_1, VkglTestCase_013333_2);

#define VkglTestCase_013334_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_013334_2 "geometric.normalize.mediump_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013334, VkglTestCase_013334_1, VkglTestCase_013334_2);

#define VkglTestCase_013335_1 "dEQP-GLES3.functional.shaders.operator.g"
#define VkglTestCase_013335_2 "eometric.normalize.mediump_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013335, VkglTestCase_013335_1, VkglTestCase_013335_2);

#define VkglTestCase_013336_1 "dEQP-GLES3.functional.shaders.operator"
#define VkglTestCase_013336_2 ".geometric.normalize.highp_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013336, VkglTestCase_013336_1, VkglTestCase_013336_2);

#define VkglTestCase_013337_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_013337_2 "geometric.normalize.highp_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013337, VkglTestCase_013337_1, VkglTestCase_013337_2);

#define VkglTestCase_013338_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_013338_2 "geometric.normalize.mediump_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013338, VkglTestCase_013338_1, VkglTestCase_013338_2);

#define VkglTestCase_013339_1 "dEQP-GLES3.functional.shaders.operator.g"
#define VkglTestCase_013339_2 "eometric.normalize.mediump_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013339, VkglTestCase_013339_1, VkglTestCase_013339_2);

#define VkglTestCase_013340_1 "dEQP-GLES3.functional.shaders.operator"
#define VkglTestCase_013340_2 ".geometric.normalize.highp_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013340, VkglTestCase_013340_1, VkglTestCase_013340_2);

#define VkglTestCase_013341_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_013341_2 "geometric.normalize.highp_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013341, VkglTestCase_013341_1, VkglTestCase_013341_2);
