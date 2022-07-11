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

#define VkglTestCase_006428_1 "dEQP-GLES2.functional.shaders.operator."
#define VkglTestCase_006428_2 "geometric.distance.mediump_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006428, VkglTestCase_006428_1, VkglTestCase_006428_2);

#define VkglTestCase_006429_1 "dEQP-GLES2.functional.shaders.operator.g"
#define VkglTestCase_006429_2 "eometric.distance.mediump_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006429, VkglTestCase_006429_1, VkglTestCase_006429_2);

#define VkglTestCase_006430_1 "dEQP-GLES2.functional.shaders.operator"
#define VkglTestCase_006430_2 ".geometric.distance.highp_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006430, VkglTestCase_006430_1, VkglTestCase_006430_2);

#define VkglTestCase_006431_1 "dEQP-GLES2.functional.shaders.operator."
#define VkglTestCase_006431_2 "geometric.distance.highp_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006431, VkglTestCase_006431_1, VkglTestCase_006431_2);

#define VkglTestCase_006432_1 "dEQP-GLES2.functional.shaders.operator"
#define VkglTestCase_006432_2 ".geometric.distance.mediump_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006432, VkglTestCase_006432_1, VkglTestCase_006432_2);

#define VkglTestCase_006433_1 "dEQP-GLES2.functional.shaders.operator."
#define VkglTestCase_006433_2 "geometric.distance.mediump_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006433, VkglTestCase_006433_1, VkglTestCase_006433_2);

#define VkglTestCase_006434_1 "dEQP-GLES2.functional.shaders.operato"
#define VkglTestCase_006434_2 "r.geometric.distance.highp_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006434, VkglTestCase_006434_1, VkglTestCase_006434_2);

#define VkglTestCase_006435_1 "dEQP-GLES2.functional.shaders.operator"
#define VkglTestCase_006435_2 ".geometric.distance.highp_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006435, VkglTestCase_006435_1, VkglTestCase_006435_2);

#define VkglTestCase_006436_1 "dEQP-GLES2.functional.shaders.operator"
#define VkglTestCase_006436_2 ".geometric.distance.mediump_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006436, VkglTestCase_006436_1, VkglTestCase_006436_2);

#define VkglTestCase_006437_1 "dEQP-GLES2.functional.shaders.operator."
#define VkglTestCase_006437_2 "geometric.distance.mediump_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006437, VkglTestCase_006437_1, VkglTestCase_006437_2);

#define VkglTestCase_006438_1 "dEQP-GLES2.functional.shaders.operato"
#define VkglTestCase_006438_2 "r.geometric.distance.highp_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006438, VkglTestCase_006438_1, VkglTestCase_006438_2);

#define VkglTestCase_006439_1 "dEQP-GLES2.functional.shaders.operator"
#define VkglTestCase_006439_2 ".geometric.distance.highp_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006439, VkglTestCase_006439_1, VkglTestCase_006439_2);

#define VkglTestCase_006440_1 "dEQP-GLES2.functional.shaders.operator"
#define VkglTestCase_006440_2 ".geometric.distance.mediump_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006440, VkglTestCase_006440_1, VkglTestCase_006440_2);

#define VkglTestCase_006441_1 "dEQP-GLES2.functional.shaders.operator."
#define VkglTestCase_006441_2 "geometric.distance.mediump_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006441, VkglTestCase_006441_1, VkglTestCase_006441_2);

#define VkglTestCase_006442_1 "dEQP-GLES2.functional.shaders.operato"
#define VkglTestCase_006442_2 "r.geometric.distance.highp_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006442, VkglTestCase_006442_1, VkglTestCase_006442_2);

#define VkglTestCase_006443_1 "dEQP-GLES2.functional.shaders.operator"
#define VkglTestCase_006443_2 ".geometric.distance.highp_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006443, VkglTestCase_006443_1, VkglTestCase_006443_2);
