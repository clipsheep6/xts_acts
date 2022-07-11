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

#define VkglTestCase_017604_1 "dEQP-GLES3.functional.shaders.der"
#define VkglTestCase_017604_2 "ivate.dfdy.static_if.float_mediump"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017604, VkglTestCase_017604_1, VkglTestCase_017604_2);

#define VkglTestCase_017605_1 "dEQP-GLES3.functional.shaders.de"
#define VkglTestCase_017605_2 "rivate.dfdy.static_if.float_highp"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017605, VkglTestCase_017605_1, VkglTestCase_017605_2);

#define VkglTestCase_017606_1 "dEQP-GLES3.functional.shaders.der"
#define VkglTestCase_017606_2 "ivate.dfdy.static_if.vec2_mediump"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017606, VkglTestCase_017606_1, VkglTestCase_017606_2);

#define VkglTestCase_017607_1 "dEQP-GLES3.functional.shaders.de"
#define VkglTestCase_017607_2 "rivate.dfdy.static_if.vec2_highp"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017607, VkglTestCase_017607_1, VkglTestCase_017607_2);

#define VkglTestCase_017608_1 "dEQP-GLES3.functional.shaders.der"
#define VkglTestCase_017608_2 "ivate.dfdy.static_if.vec3_mediump"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017608, VkglTestCase_017608_1, VkglTestCase_017608_2);

#define VkglTestCase_017609_1 "dEQP-GLES3.functional.shaders.de"
#define VkglTestCase_017609_2 "rivate.dfdy.static_if.vec3_highp"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017609, VkglTestCase_017609_1, VkglTestCase_017609_2);

#define VkglTestCase_017610_1 "dEQP-GLES3.functional.shaders.de"
#define VkglTestCase_017610_2 "rivate.dfdy.static_if.vec4_highp"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017610, VkglTestCase_017610_1, VkglTestCase_017610_2);
