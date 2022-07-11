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

#define VkglTestCase_017795_1 "dEQP-GLES3.functional.shaders.deriv"
#define VkglTestCase_017795_2 "ate.fwidth.static_loop.float_mediump"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017795, VkglTestCase_017795_1, VkglTestCase_017795_2);

#define VkglTestCase_017796_1 "dEQP-GLES3.functional.shaders.deri"
#define VkglTestCase_017796_2 "vate.fwidth.static_loop.float_highp"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017796, VkglTestCase_017796_1, VkglTestCase_017796_2);

#define VkglTestCase_017797_1 "dEQP-GLES3.functional.shaders.deriv"
#define VkglTestCase_017797_2 "ate.fwidth.static_loop.vec2_mediump"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017797, VkglTestCase_017797_1, VkglTestCase_017797_2);

#define VkglTestCase_017798_1 "dEQP-GLES3.functional.shaders.deri"
#define VkglTestCase_017798_2 "vate.fwidth.static_loop.vec2_highp"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017798, VkglTestCase_017798_1, VkglTestCase_017798_2);

#define VkglTestCase_017799_1 "dEQP-GLES3.functional.shaders.deriv"
#define VkglTestCase_017799_2 "ate.fwidth.static_loop.vec3_mediump"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017799, VkglTestCase_017799_1, VkglTestCase_017799_2);

#define VkglTestCase_017800_1 "dEQP-GLES3.functional.shaders.deri"
#define VkglTestCase_017800_2 "vate.fwidth.static_loop.vec3_highp"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017800, VkglTestCase_017800_1, VkglTestCase_017800_2);

#define VkglTestCase_017801_1 "dEQP-GLES3.functional.shaders.deriv"
#define VkglTestCase_017801_2 "ate.fwidth.static_loop.vec4_mediump"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017801, VkglTestCase_017801_1, VkglTestCase_017801_2);

#define VkglTestCase_017802_1 "dEQP-GLES3.functional.shaders.deri"
#define VkglTestCase_017802_2 "vate.fwidth.static_loop.vec4_highp"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017802, VkglTestCase_017802_1, VkglTestCase_017802_2);
