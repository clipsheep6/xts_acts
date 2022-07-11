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

#define VkglTestCase_017467_1 "dEQP-GLES3.functional.shaders.deriva"
#define VkglTestCase_017467_2 "te.dfdx.uniform_switch.float_mediump"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017467, VkglTestCase_017467_1, VkglTestCase_017467_2);

#define VkglTestCase_017468_1 "dEQP-GLES3.functional.shaders.deriv"
#define VkglTestCase_017468_2 "ate.dfdx.uniform_switch.float_highp"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017468, VkglTestCase_017468_1, VkglTestCase_017468_2);

#define VkglTestCase_017469_1 "dEQP-GLES3.functional.shaders.deriv"
#define VkglTestCase_017469_2 "ate.dfdx.uniform_switch.vec2_mediump"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017469, VkglTestCase_017469_1, VkglTestCase_017469_2);

#define VkglTestCase_017470_1 "dEQP-GLES3.functional.shaders.deri"
#define VkglTestCase_017470_2 "vate.dfdx.uniform_switch.vec2_highp"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017470, VkglTestCase_017470_1, VkglTestCase_017470_2);

#define VkglTestCase_017471_1 "dEQP-GLES3.functional.shaders.deriv"
#define VkglTestCase_017471_2 "ate.dfdx.uniform_switch.vec3_mediump"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017471, VkglTestCase_017471_1, VkglTestCase_017471_2);

#define VkglTestCase_017472_1 "dEQP-GLES3.functional.shaders.deri"
#define VkglTestCase_017472_2 "vate.dfdx.uniform_switch.vec3_highp"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017472, VkglTestCase_017472_1, VkglTestCase_017472_2);

#define VkglTestCase_017473_1 "dEQP-GLES3.functional.shaders.deri"
#define VkglTestCase_017473_2 "vate.dfdx.uniform_switch.vec4_highp"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017473, VkglTestCase_017473_1, VkglTestCase_017473_2);
