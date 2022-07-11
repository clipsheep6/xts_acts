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

#define VkglTestCase_017639_1 "dEQP-GLES3.functional.shaders.deriva"
#define VkglTestCase_017639_2 "te.dfdy.uniform_switch.float_mediump"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017639, VkglTestCase_017639_1, VkglTestCase_017639_2);

#define VkglTestCase_017640_1 "dEQP-GLES3.functional.shaders.deriv"
#define VkglTestCase_017640_2 "ate.dfdy.uniform_switch.float_highp"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017640, VkglTestCase_017640_1, VkglTestCase_017640_2);

#define VkglTestCase_017641_1 "dEQP-GLES3.functional.shaders.deriv"
#define VkglTestCase_017641_2 "ate.dfdy.uniform_switch.vec2_mediump"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017641, VkglTestCase_017641_1, VkglTestCase_017641_2);

#define VkglTestCase_017642_1 "dEQP-GLES3.functional.shaders.deri"
#define VkglTestCase_017642_2 "vate.dfdy.uniform_switch.vec2_highp"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017642, VkglTestCase_017642_1, VkglTestCase_017642_2);

#define VkglTestCase_017643_1 "dEQP-GLES3.functional.shaders.deriv"
#define VkglTestCase_017643_2 "ate.dfdy.uniform_switch.vec3_mediump"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017643, VkglTestCase_017643_1, VkglTestCase_017643_2);

#define VkglTestCase_017644_1 "dEQP-GLES3.functional.shaders.deri"
#define VkglTestCase_017644_2 "vate.dfdy.uniform_switch.vec3_highp"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017644, VkglTestCase_017644_1, VkglTestCase_017644_2);

#define VkglTestCase_017645_1 "dEQP-GLES3.functional.shaders.deri"
#define VkglTestCase_017645_2 "vate.dfdy.uniform_switch.vec4_highp"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017645, VkglTestCase_017645_1, VkglTestCase_017645_2);
