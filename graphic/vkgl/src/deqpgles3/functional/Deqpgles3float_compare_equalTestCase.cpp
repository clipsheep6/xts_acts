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

#define VkglTestCase_013462_1 "dEQP-GLES3.functional.shaders.operato"
#define VkglTestCase_013462_2 "r.float_compare.equal.lowp_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013462, VkglTestCase_013462_1, VkglTestCase_013462_2);

#define VkglTestCase_013463_1 "dEQP-GLES3.functional.shaders.operator"
#define VkglTestCase_013463_2 ".float_compare.equal.lowp_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013463, VkglTestCase_013463_1, VkglTestCase_013463_2);

#define VkglTestCase_013464_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_013464_2 "float_compare.equal.mediump_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013464, VkglTestCase_013464_1, VkglTestCase_013464_2);

#define VkglTestCase_013465_1 "dEQP-GLES3.functional.shaders.operator.f"
#define VkglTestCase_013465_2 "loat_compare.equal.mediump_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013465, VkglTestCase_013465_1, VkglTestCase_013465_2);

#define VkglTestCase_013466_1 "dEQP-GLES3.functional.shaders.operator"
#define VkglTestCase_013466_2 ".float_compare.equal.highp_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013466, VkglTestCase_013466_1, VkglTestCase_013466_2);

#define VkglTestCase_013467_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_013467_2 "float_compare.equal.highp_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013467, VkglTestCase_013467_1, VkglTestCase_013467_2);

#define VkglTestCase_013468_1 "dEQP-GLES3.functional.shaders.operato"
#define VkglTestCase_013468_2 "r.float_compare.equal.lowp_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013468, VkglTestCase_013468_1, VkglTestCase_013468_2);

#define VkglTestCase_013469_1 "dEQP-GLES3.functional.shaders.operator"
#define VkglTestCase_013469_2 ".float_compare.equal.lowp_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013469, VkglTestCase_013469_1, VkglTestCase_013469_2);

#define VkglTestCase_013470_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_013470_2 "float_compare.equal.mediump_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013470, VkglTestCase_013470_1, VkglTestCase_013470_2);

#define VkglTestCase_013471_1 "dEQP-GLES3.functional.shaders.operator.f"
#define VkglTestCase_013471_2 "loat_compare.equal.mediump_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013471, VkglTestCase_013471_1, VkglTestCase_013471_2);

#define VkglTestCase_013472_1 "dEQP-GLES3.functional.shaders.operator"
#define VkglTestCase_013472_2 ".float_compare.equal.highp_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013472, VkglTestCase_013472_1, VkglTestCase_013472_2);

#define VkglTestCase_013473_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_013473_2 "float_compare.equal.highp_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013473, VkglTestCase_013473_1, VkglTestCase_013473_2);

#define VkglTestCase_013474_1 "dEQP-GLES3.functional.shaders.operato"
#define VkglTestCase_013474_2 "r.float_compare.equal.lowp_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013474, VkglTestCase_013474_1, VkglTestCase_013474_2);

#define VkglTestCase_013475_1 "dEQP-GLES3.functional.shaders.operator"
#define VkglTestCase_013475_2 ".float_compare.equal.lowp_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013475, VkglTestCase_013475_1, VkglTestCase_013475_2);

#define VkglTestCase_013476_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_013476_2 "float_compare.equal.mediump_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013476, VkglTestCase_013476_1, VkglTestCase_013476_2);

#define VkglTestCase_013477_1 "dEQP-GLES3.functional.shaders.operator.f"
#define VkglTestCase_013477_2 "loat_compare.equal.mediump_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013477, VkglTestCase_013477_1, VkglTestCase_013477_2);

#define VkglTestCase_013478_1 "dEQP-GLES3.functional.shaders.operator"
#define VkglTestCase_013478_2 ".float_compare.equal.highp_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013478, VkglTestCase_013478_1, VkglTestCase_013478_2);

#define VkglTestCase_013479_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_013479_2 "float_compare.equal.highp_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013479, VkglTestCase_013479_1, VkglTestCase_013479_2);
