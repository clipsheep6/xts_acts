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
#include "../ActsDeqpgles30018TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_017446_1 "dEQP-GLES3.functional.shaders.deriv"
#define VkglTestCase_017446_2 "ate.dfdx.static_switch.float_mediump"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017446, VkglTestCase_017446_1, VkglTestCase_017446_2);

#define VkglTestCase_017447_1 "dEQP-GLES3.functional.shaders.deri"
#define VkglTestCase_017447_2 "vate.dfdx.static_switch.float_highp"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017447, VkglTestCase_017447_1, VkglTestCase_017447_2);

#define VkglTestCase_017448_1 "dEQP-GLES3.functional.shaders.deriv"
#define VkglTestCase_017448_2 "ate.dfdx.static_switch.vec2_mediump"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017448, VkglTestCase_017448_1, VkglTestCase_017448_2);

#define VkglTestCase_017449_1 "dEQP-GLES3.functional.shaders.deri"
#define VkglTestCase_017449_2 "vate.dfdx.static_switch.vec2_highp"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017449, VkglTestCase_017449_1, VkglTestCase_017449_2);

#define VkglTestCase_017450_1 "dEQP-GLES3.functional.shaders.deriv"
#define VkglTestCase_017450_2 "ate.dfdx.static_switch.vec3_mediump"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017450, VkglTestCase_017450_1, VkglTestCase_017450_2);

#define VkglTestCase_017451_1 "dEQP-GLES3.functional.shaders.deri"
#define VkglTestCase_017451_2 "vate.dfdx.static_switch.vec3_highp"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017451, VkglTestCase_017451_1, VkglTestCase_017451_2);

#define VkglTestCase_017452_1 "dEQP-GLES3.functional.shaders.deri"
#define VkglTestCase_017452_2 "vate.dfdx.static_switch.vec4_highp"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017452, VkglTestCase_017452_1, VkglTestCase_017452_2);
