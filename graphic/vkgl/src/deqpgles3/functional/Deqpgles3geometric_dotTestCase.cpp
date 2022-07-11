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

#define VkglTestCase_013306_1 "dEQP-GLES3.functional.shaders.operat"
#define VkglTestCase_013306_2 "or.geometric.dot.mediump_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013306, VkglTestCase_013306_1, VkglTestCase_013306_2);

#define VkglTestCase_013307_1 "dEQP-GLES3.functional.shaders.operato"
#define VkglTestCase_013307_2 "r.geometric.dot.mediump_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013307, VkglTestCase_013307_1, VkglTestCase_013307_2);

#define VkglTestCase_013308_1 "dEQP-GLES3.functional.shaders.opera"
#define VkglTestCase_013308_2 "tor.geometric.dot.highp_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013308, VkglTestCase_013308_1, VkglTestCase_013308_2);

#define VkglTestCase_013309_1 "dEQP-GLES3.functional.shaders.operat"
#define VkglTestCase_013309_2 "or.geometric.dot.highp_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013309, VkglTestCase_013309_1, VkglTestCase_013309_2);

#define VkglTestCase_013310_1 "dEQP-GLES3.functional.shaders.operat"
#define VkglTestCase_013310_2 "or.geometric.dot.mediump_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013310, VkglTestCase_013310_1, VkglTestCase_013310_2);

#define VkglTestCase_013311_1 "dEQP-GLES3.functional.shaders.operato"
#define VkglTestCase_013311_2 "r.geometric.dot.mediump_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013311, VkglTestCase_013311_1, VkglTestCase_013311_2);

#define VkglTestCase_013312_1 "dEQP-GLES3.functional.shaders.opera"
#define VkglTestCase_013312_2 "tor.geometric.dot.highp_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013312, VkglTestCase_013312_1, VkglTestCase_013312_2);

#define VkglTestCase_013313_1 "dEQP-GLES3.functional.shaders.operat"
#define VkglTestCase_013313_2 "or.geometric.dot.highp_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013313, VkglTestCase_013313_1, VkglTestCase_013313_2);

#define VkglTestCase_013314_1 "dEQP-GLES3.functional.shaders.operat"
#define VkglTestCase_013314_2 "or.geometric.dot.mediump_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013314, VkglTestCase_013314_1, VkglTestCase_013314_2);

#define VkglTestCase_013315_1 "dEQP-GLES3.functional.shaders.operato"
#define VkglTestCase_013315_2 "r.geometric.dot.mediump_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013315, VkglTestCase_013315_1, VkglTestCase_013315_2);

#define VkglTestCase_013316_1 "dEQP-GLES3.functional.shaders.opera"
#define VkglTestCase_013316_2 "tor.geometric.dot.highp_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013316, VkglTestCase_013316_1, VkglTestCase_013316_2);

#define VkglTestCase_013317_1 "dEQP-GLES3.functional.shaders.operat"
#define VkglTestCase_013317_2 "or.geometric.dot.highp_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013317, VkglTestCase_013317_1, VkglTestCase_013317_2);

#define VkglTestCase_013318_1 "dEQP-GLES3.functional.shaders.operat"
#define VkglTestCase_013318_2 "or.geometric.dot.mediump_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013318, VkglTestCase_013318_1, VkglTestCase_013318_2);

#define VkglTestCase_013319_1 "dEQP-GLES3.functional.shaders.operato"
#define VkglTestCase_013319_2 "r.geometric.dot.mediump_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013319, VkglTestCase_013319_1, VkglTestCase_013319_2);

#define VkglTestCase_013320_1 "dEQP-GLES3.functional.shaders.opera"
#define VkglTestCase_013320_2 "tor.geometric.dot.highp_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013320, VkglTestCase_013320_1, VkglTestCase_013320_2);

#define VkglTestCase_013321_1 "dEQP-GLES3.functional.shaders.operat"
#define VkglTestCase_013321_2 "or.geometric.dot.highp_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013321, VkglTestCase_013321_1, VkglTestCase_013321_2);
