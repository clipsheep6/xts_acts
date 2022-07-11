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

#define VkglTestCase_013374_1 "dEQP-GLES3.functional.shaders.operator"
#define VkglTestCase_013374_2 ".geometric.refract.mediump_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013374, VkglTestCase_013374_1, VkglTestCase_013374_2);

#define VkglTestCase_013375_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_013375_2 "geometric.refract.mediump_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013375, VkglTestCase_013375_1, VkglTestCase_013375_2);

#define VkglTestCase_013376_1 "dEQP-GLES3.functional.shaders.operato"
#define VkglTestCase_013376_2 "r.geometric.refract.highp_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013376, VkglTestCase_013376_1, VkglTestCase_013376_2);

#define VkglTestCase_013377_1 "dEQP-GLES3.functional.shaders.operator"
#define VkglTestCase_013377_2 ".geometric.refract.highp_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013377, VkglTestCase_013377_1, VkglTestCase_013377_2);

#define VkglTestCase_013378_1 "dEQP-GLES3.functional.shaders.operator.ge"
#define VkglTestCase_013378_2 "ometric.refract.mediump_vec2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013378, VkglTestCase_013378_1, VkglTestCase_013378_2);

#define VkglTestCase_013379_1 "dEQP-GLES3.functional.shaders.operator.geo"
#define VkglTestCase_013379_2 "metric.refract.mediump_vec2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013379, VkglTestCase_013379_1, VkglTestCase_013379_2);

#define VkglTestCase_013380_1 "dEQP-GLES3.functional.shaders.operator.g"
#define VkglTestCase_013380_2 "eometric.refract.highp_vec2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013380, VkglTestCase_013380_1, VkglTestCase_013380_2);

#define VkglTestCase_013381_1 "dEQP-GLES3.functional.shaders.operator.ge"
#define VkglTestCase_013381_2 "ometric.refract.highp_vec2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013381, VkglTestCase_013381_1, VkglTestCase_013381_2);

#define VkglTestCase_013382_1 "dEQP-GLES3.functional.shaders.operator.ge"
#define VkglTestCase_013382_2 "ometric.refract.mediump_vec3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013382, VkglTestCase_013382_1, VkglTestCase_013382_2);

#define VkglTestCase_013383_1 "dEQP-GLES3.functional.shaders.operator.geo"
#define VkglTestCase_013383_2 "metric.refract.mediump_vec3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013383, VkglTestCase_013383_1, VkglTestCase_013383_2);

#define VkglTestCase_013384_1 "dEQP-GLES3.functional.shaders.operator.g"
#define VkglTestCase_013384_2 "eometric.refract.highp_vec3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013384, VkglTestCase_013384_1, VkglTestCase_013384_2);

#define VkglTestCase_013385_1 "dEQP-GLES3.functional.shaders.operator.ge"
#define VkglTestCase_013385_2 "ometric.refract.highp_vec3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013385, VkglTestCase_013385_1, VkglTestCase_013385_2);

#define VkglTestCase_013386_1 "dEQP-GLES3.functional.shaders.operator.ge"
#define VkglTestCase_013386_2 "ometric.refract.mediump_vec4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013386, VkglTestCase_013386_1, VkglTestCase_013386_2);

#define VkglTestCase_013387_1 "dEQP-GLES3.functional.shaders.operator.geo"
#define VkglTestCase_013387_2 "metric.refract.mediump_vec4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013387, VkglTestCase_013387_1, VkglTestCase_013387_2);

#define VkglTestCase_013388_1 "dEQP-GLES3.functional.shaders.operator.g"
#define VkglTestCase_013388_2 "eometric.refract.highp_vec4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013388, VkglTestCase_013388_1, VkglTestCase_013388_2);

#define VkglTestCase_013389_1 "dEQP-GLES3.functional.shaders.operator.ge"
#define VkglTestCase_013389_2 "ometric.refract.highp_vec4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013389, VkglTestCase_013389_1, VkglTestCase_013389_2);
