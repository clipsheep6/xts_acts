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

#define VkglTestCase_013290_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_013290_2 "geometric.distance.mediump_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013290, VkglTestCase_013290_1, VkglTestCase_013290_2);

#define VkglTestCase_013291_1 "dEQP-GLES3.functional.shaders.operator.g"
#define VkglTestCase_013291_2 "eometric.distance.mediump_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013291, VkglTestCase_013291_1, VkglTestCase_013291_2);

#define VkglTestCase_013292_1 "dEQP-GLES3.functional.shaders.operator"
#define VkglTestCase_013292_2 ".geometric.distance.highp_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013292, VkglTestCase_013292_1, VkglTestCase_013292_2);

#define VkglTestCase_013293_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_013293_2 "geometric.distance.highp_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013293, VkglTestCase_013293_1, VkglTestCase_013293_2);

#define VkglTestCase_013294_1 "dEQP-GLES3.functional.shaders.operator"
#define VkglTestCase_013294_2 ".geometric.distance.mediump_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013294, VkglTestCase_013294_1, VkglTestCase_013294_2);

#define VkglTestCase_013295_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_013295_2 "geometric.distance.mediump_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013295, VkglTestCase_013295_1, VkglTestCase_013295_2);

#define VkglTestCase_013296_1 "dEQP-GLES3.functional.shaders.operato"
#define VkglTestCase_013296_2 "r.geometric.distance.highp_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013296, VkglTestCase_013296_1, VkglTestCase_013296_2);

#define VkglTestCase_013297_1 "dEQP-GLES3.functional.shaders.operator"
#define VkglTestCase_013297_2 ".geometric.distance.highp_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013297, VkglTestCase_013297_1, VkglTestCase_013297_2);

#define VkglTestCase_013298_1 "dEQP-GLES3.functional.shaders.operator"
#define VkglTestCase_013298_2 ".geometric.distance.mediump_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013298, VkglTestCase_013298_1, VkglTestCase_013298_2);

#define VkglTestCase_013299_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_013299_2 "geometric.distance.mediump_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013299, VkglTestCase_013299_1, VkglTestCase_013299_2);

#define VkglTestCase_013300_1 "dEQP-GLES3.functional.shaders.operato"
#define VkglTestCase_013300_2 "r.geometric.distance.highp_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013300, VkglTestCase_013300_1, VkglTestCase_013300_2);

#define VkglTestCase_013301_1 "dEQP-GLES3.functional.shaders.operator"
#define VkglTestCase_013301_2 ".geometric.distance.highp_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013301, VkglTestCase_013301_1, VkglTestCase_013301_2);

#define VkglTestCase_013302_1 "dEQP-GLES3.functional.shaders.operator"
#define VkglTestCase_013302_2 ".geometric.distance.mediump_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013302, VkglTestCase_013302_1, VkglTestCase_013302_2);

#define VkglTestCase_013303_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_013303_2 "geometric.distance.mediump_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013303, VkglTestCase_013303_1, VkglTestCase_013303_2);

#define VkglTestCase_013304_1 "dEQP-GLES3.functional.shaders.operato"
#define VkglTestCase_013304_2 "r.geometric.distance.highp_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013304, VkglTestCase_013304_1, VkglTestCase_013304_2);

#define VkglTestCase_013305_1 "dEQP-GLES3.functional.shaders.operator"
#define VkglTestCase_013305_2 ".geometric.distance.highp_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013305, VkglTestCase_013305_1, VkglTestCase_013305_2);
