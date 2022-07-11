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
#include "../Deqpgles2BaseFunc.h"
#include "../ActsDeqpgles20007TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_006464_1 "dEQP-GLES2.functional.shaders.operator."
#define VkglTestCase_006464_2 "geometric.normalize.mediump_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006464, VkglTestCase_006464_1, VkglTestCase_006464_2);

#define VkglTestCase_006465_1 "dEQP-GLES2.functional.shaders.operator.g"
#define VkglTestCase_006465_2 "eometric.normalize.mediump_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006465, VkglTestCase_006465_1, VkglTestCase_006465_2);

#define VkglTestCase_006466_1 "dEQP-GLES2.functional.shaders.operator"
#define VkglTestCase_006466_2 ".geometric.normalize.highp_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006466, VkglTestCase_006466_1, VkglTestCase_006466_2);

#define VkglTestCase_006467_1 "dEQP-GLES2.functional.shaders.operator."
#define VkglTestCase_006467_2 "geometric.normalize.highp_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006467, VkglTestCase_006467_1, VkglTestCase_006467_2);

#define VkglTestCase_006468_1 "dEQP-GLES2.functional.shaders.operator."
#define VkglTestCase_006468_2 "geometric.normalize.mediump_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006468, VkglTestCase_006468_1, VkglTestCase_006468_2);

#define VkglTestCase_006469_1 "dEQP-GLES2.functional.shaders.operator.g"
#define VkglTestCase_006469_2 "eometric.normalize.mediump_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006469, VkglTestCase_006469_1, VkglTestCase_006469_2);

#define VkglTestCase_006470_1 "dEQP-GLES2.functional.shaders.operator"
#define VkglTestCase_006470_2 ".geometric.normalize.highp_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006470, VkglTestCase_006470_1, VkglTestCase_006470_2);

#define VkglTestCase_006471_1 "dEQP-GLES2.functional.shaders.operator."
#define VkglTestCase_006471_2 "geometric.normalize.highp_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006471, VkglTestCase_006471_1, VkglTestCase_006471_2);

#define VkglTestCase_006472_1 "dEQP-GLES2.functional.shaders.operator."
#define VkglTestCase_006472_2 "geometric.normalize.mediump_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006472, VkglTestCase_006472_1, VkglTestCase_006472_2);

#define VkglTestCase_006473_1 "dEQP-GLES2.functional.shaders.operator.g"
#define VkglTestCase_006473_2 "eometric.normalize.mediump_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006473, VkglTestCase_006473_1, VkglTestCase_006473_2);

#define VkglTestCase_006474_1 "dEQP-GLES2.functional.shaders.operator"
#define VkglTestCase_006474_2 ".geometric.normalize.highp_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006474, VkglTestCase_006474_1, VkglTestCase_006474_2);

#define VkglTestCase_006475_1 "dEQP-GLES2.functional.shaders.operator."
#define VkglTestCase_006475_2 "geometric.normalize.highp_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006475, VkglTestCase_006475_1, VkglTestCase_006475_2);

#define VkglTestCase_006476_1 "dEQP-GLES2.functional.shaders.operator."
#define VkglTestCase_006476_2 "geometric.normalize.mediump_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006476, VkglTestCase_006476_1, VkglTestCase_006476_2);

#define VkglTestCase_006477_1 "dEQP-GLES2.functional.shaders.operator.g"
#define VkglTestCase_006477_2 "eometric.normalize.mediump_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006477, VkglTestCase_006477_1, VkglTestCase_006477_2);

#define VkglTestCase_006478_1 "dEQP-GLES2.functional.shaders.operator"
#define VkglTestCase_006478_2 ".geometric.normalize.highp_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006478, VkglTestCase_006478_1, VkglTestCase_006478_2);

#define VkglTestCase_006479_1 "dEQP-GLES2.functional.shaders.operator."
#define VkglTestCase_006479_2 "geometric.normalize.highp_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006479, VkglTestCase_006479_1, VkglTestCase_006479_2);
