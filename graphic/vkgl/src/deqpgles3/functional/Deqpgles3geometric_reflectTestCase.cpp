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

#define VkglTestCase_013358_1 "dEQP-GLES3.functional.shaders.operator"
#define VkglTestCase_013358_2 ".geometric.reflect.mediump_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013358, VkglTestCase_013358_1, VkglTestCase_013358_2);

#define VkglTestCase_013359_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_013359_2 "geometric.reflect.mediump_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013359, VkglTestCase_013359_1, VkglTestCase_013359_2);

#define VkglTestCase_013360_1 "dEQP-GLES3.functional.shaders.operato"
#define VkglTestCase_013360_2 "r.geometric.reflect.highp_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013360, VkglTestCase_013360_1, VkglTestCase_013360_2);

#define VkglTestCase_013361_1 "dEQP-GLES3.functional.shaders.operator"
#define VkglTestCase_013361_2 ".geometric.reflect.highp_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013361, VkglTestCase_013361_1, VkglTestCase_013361_2);

#define VkglTestCase_013362_1 "dEQP-GLES3.functional.shaders.operator"
#define VkglTestCase_013362_2 ".geometric.reflect.mediump_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013362, VkglTestCase_013362_1, VkglTestCase_013362_2);

#define VkglTestCase_013363_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_013363_2 "geometric.reflect.mediump_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013363, VkglTestCase_013363_1, VkglTestCase_013363_2);

#define VkglTestCase_013364_1 "dEQP-GLES3.functional.shaders.operato"
#define VkglTestCase_013364_2 "r.geometric.reflect.highp_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013364, VkglTestCase_013364_1, VkglTestCase_013364_2);

#define VkglTestCase_013365_1 "dEQP-GLES3.functional.shaders.operator"
#define VkglTestCase_013365_2 ".geometric.reflect.highp_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013365, VkglTestCase_013365_1, VkglTestCase_013365_2);

#define VkglTestCase_013366_1 "dEQP-GLES3.functional.shaders.operator"
#define VkglTestCase_013366_2 ".geometric.reflect.mediump_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013366, VkglTestCase_013366_1, VkglTestCase_013366_2);

#define VkglTestCase_013367_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_013367_2 "geometric.reflect.mediump_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013367, VkglTestCase_013367_1, VkglTestCase_013367_2);

#define VkglTestCase_013368_1 "dEQP-GLES3.functional.shaders.operato"
#define VkglTestCase_013368_2 "r.geometric.reflect.highp_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013368, VkglTestCase_013368_1, VkglTestCase_013368_2);

#define VkglTestCase_013369_1 "dEQP-GLES3.functional.shaders.operator"
#define VkglTestCase_013369_2 ".geometric.reflect.highp_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013369, VkglTestCase_013369_1, VkglTestCase_013369_2);

#define VkglTestCase_013370_1 "dEQP-GLES3.functional.shaders.operator"
#define VkglTestCase_013370_2 ".geometric.reflect.mediump_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013370, VkglTestCase_013370_1, VkglTestCase_013370_2);

#define VkglTestCase_013371_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_013371_2 "geometric.reflect.mediump_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013371, VkglTestCase_013371_1, VkglTestCase_013371_2);

#define VkglTestCase_013372_1 "dEQP-GLES3.functional.shaders.operato"
#define VkglTestCase_013372_2 "r.geometric.reflect.highp_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013372, VkglTestCase_013372_1, VkglTestCase_013372_2);

#define VkglTestCase_013373_1 "dEQP-GLES3.functional.shaders.operator"
#define VkglTestCase_013373_2 ".geometric.reflect.highp_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013373, VkglTestCase_013373_1, VkglTestCase_013373_2);
