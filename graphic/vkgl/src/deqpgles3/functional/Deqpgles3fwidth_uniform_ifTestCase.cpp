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

#define VkglTestCase_017811_1 "dEQP-GLES3.functional.shaders.deriv"
#define VkglTestCase_017811_2 "ate.fwidth.uniform_if.float_mediump"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017811, VkglTestCase_017811_1, VkglTestCase_017811_2);

#define VkglTestCase_017812_1 "dEQP-GLES3.functional.shaders.deri"
#define VkglTestCase_017812_2 "vate.fwidth.uniform_if.float_highp"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017812, VkglTestCase_017812_1, VkglTestCase_017812_2);

#define VkglTestCase_017813_1 "dEQP-GLES3.functional.shaders.deri"
#define VkglTestCase_017813_2 "vate.fwidth.uniform_if.vec2_mediump"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017813, VkglTestCase_017813_1, VkglTestCase_017813_2);

#define VkglTestCase_017814_1 "dEQP-GLES3.functional.shaders.der"
#define VkglTestCase_017814_2 "ivate.fwidth.uniform_if.vec2_highp"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017814, VkglTestCase_017814_1, VkglTestCase_017814_2);

#define VkglTestCase_017815_1 "dEQP-GLES3.functional.shaders.deri"
#define VkglTestCase_017815_2 "vate.fwidth.uniform_if.vec3_mediump"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017815, VkglTestCase_017815_1, VkglTestCase_017815_2);

#define VkglTestCase_017816_1 "dEQP-GLES3.functional.shaders.der"
#define VkglTestCase_017816_2 "ivate.fwidth.uniform_if.vec3_highp"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017816, VkglTestCase_017816_1, VkglTestCase_017816_2);

#define VkglTestCase_017817_1 "dEQP-GLES3.functional.shaders.deri"
#define VkglTestCase_017817_2 "vate.fwidth.uniform_if.vec4_mediump"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017817, VkglTestCase_017817_1, VkglTestCase_017817_2);

#define VkglTestCase_017818_1 "dEQP-GLES3.functional.shaders.der"
#define VkglTestCase_017818_2 "ivate.fwidth.uniform_if.vec4_highp"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017818, VkglTestCase_017818_1, VkglTestCase_017818_2);
