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

#define VkglTestCase_013274_1 "dEQP-GLES3.functional.shaders.operator"
#define VkglTestCase_013274_2 ".geometric.length.mediump_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013274, VkglTestCase_013274_1, VkglTestCase_013274_2);

#define VkglTestCase_013275_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_013275_2 "geometric.length.mediump_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013275, VkglTestCase_013275_1, VkglTestCase_013275_2);

#define VkglTestCase_013276_1 "dEQP-GLES3.functional.shaders.operato"
#define VkglTestCase_013276_2 "r.geometric.length.highp_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013276, VkglTestCase_013276_1, VkglTestCase_013276_2);

#define VkglTestCase_013277_1 "dEQP-GLES3.functional.shaders.operator"
#define VkglTestCase_013277_2 ".geometric.length.highp_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013277, VkglTestCase_013277_1, VkglTestCase_013277_2);

#define VkglTestCase_013278_1 "dEQP-GLES3.functional.shaders.operato"
#define VkglTestCase_013278_2 "r.geometric.length.mediump_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013278, VkglTestCase_013278_1, VkglTestCase_013278_2);

#define VkglTestCase_013279_1 "dEQP-GLES3.functional.shaders.operator"
#define VkglTestCase_013279_2 ".geometric.length.mediump_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013279, VkglTestCase_013279_1, VkglTestCase_013279_2);

#define VkglTestCase_013280_1 "dEQP-GLES3.functional.shaders.operat"
#define VkglTestCase_013280_2 "or.geometric.length.highp_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013280, VkglTestCase_013280_1, VkglTestCase_013280_2);

#define VkglTestCase_013281_1 "dEQP-GLES3.functional.shaders.operato"
#define VkglTestCase_013281_2 "r.geometric.length.highp_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013281, VkglTestCase_013281_1, VkglTestCase_013281_2);

#define VkglTestCase_013282_1 "dEQP-GLES3.functional.shaders.operato"
#define VkglTestCase_013282_2 "r.geometric.length.mediump_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013282, VkglTestCase_013282_1, VkglTestCase_013282_2);

#define VkglTestCase_013283_1 "dEQP-GLES3.functional.shaders.operator"
#define VkglTestCase_013283_2 ".geometric.length.mediump_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013283, VkglTestCase_013283_1, VkglTestCase_013283_2);

#define VkglTestCase_013284_1 "dEQP-GLES3.functional.shaders.operat"
#define VkglTestCase_013284_2 "or.geometric.length.highp_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013284, VkglTestCase_013284_1, VkglTestCase_013284_2);

#define VkglTestCase_013285_1 "dEQP-GLES3.functional.shaders.operato"
#define VkglTestCase_013285_2 "r.geometric.length.highp_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013285, VkglTestCase_013285_1, VkglTestCase_013285_2);

#define VkglTestCase_013286_1 "dEQP-GLES3.functional.shaders.operato"
#define VkglTestCase_013286_2 "r.geometric.length.mediump_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013286, VkglTestCase_013286_1, VkglTestCase_013286_2);

#define VkglTestCase_013287_1 "dEQP-GLES3.functional.shaders.operator"
#define VkglTestCase_013287_2 ".geometric.length.mediump_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013287, VkglTestCase_013287_1, VkglTestCase_013287_2);

#define VkglTestCase_013288_1 "dEQP-GLES3.functional.shaders.operat"
#define VkglTestCase_013288_2 "or.geometric.length.highp_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013288, VkglTestCase_013288_1, VkglTestCase_013288_2);

#define VkglTestCase_013289_1 "dEQP-GLES3.functional.shaders.operato"
#define VkglTestCase_013289_2 "r.geometric.length.highp_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013289, VkglTestCase_013289_1, VkglTestCase_013289_2);
