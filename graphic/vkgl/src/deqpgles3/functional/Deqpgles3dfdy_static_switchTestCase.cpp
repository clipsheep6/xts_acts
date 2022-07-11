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

#define VkglTestCase_017618_1 "dEQP-GLES3.functional.shaders.deriv"
#define VkglTestCase_017618_2 "ate.dfdy.static_switch.float_mediump"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017618, VkglTestCase_017618_1, VkglTestCase_017618_2);

#define VkglTestCase_017619_1 "dEQP-GLES3.functional.shaders.deri"
#define VkglTestCase_017619_2 "vate.dfdy.static_switch.float_highp"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017619, VkglTestCase_017619_1, VkglTestCase_017619_2);

#define VkglTestCase_017620_1 "dEQP-GLES3.functional.shaders.deriv"
#define VkglTestCase_017620_2 "ate.dfdy.static_switch.vec2_mediump"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017620, VkglTestCase_017620_1, VkglTestCase_017620_2);

#define VkglTestCase_017621_1 "dEQP-GLES3.functional.shaders.deri"
#define VkglTestCase_017621_2 "vate.dfdy.static_switch.vec2_highp"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017621, VkglTestCase_017621_1, VkglTestCase_017621_2);

#define VkglTestCase_017622_1 "dEQP-GLES3.functional.shaders.deriv"
#define VkglTestCase_017622_2 "ate.dfdy.static_switch.vec3_mediump"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017622, VkglTestCase_017622_1, VkglTestCase_017622_2);

#define VkglTestCase_017623_1 "dEQP-GLES3.functional.shaders.deri"
#define VkglTestCase_017623_2 "vate.dfdy.static_switch.vec3_highp"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017623, VkglTestCase_017623_1, VkglTestCase_017623_2);

#define VkglTestCase_017624_1 "dEQP-GLES3.functional.shaders.deri"
#define VkglTestCase_017624_2 "vate.dfdy.static_switch.vec4_highp"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017624, VkglTestCase_017624_1, VkglTestCase_017624_2);
