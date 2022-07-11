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

#define VkglTestCase_017625_1 "dEQP-GLES3.functional.shaders.deri"
#define VkglTestCase_017625_2 "vate.dfdy.uniform_if.float_mediump"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017625, VkglTestCase_017625_1, VkglTestCase_017625_2);

#define VkglTestCase_017626_1 "dEQP-GLES3.functional.shaders.der"
#define VkglTestCase_017626_2 "ivate.dfdy.uniform_if.float_highp"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017626, VkglTestCase_017626_1, VkglTestCase_017626_2);

#define VkglTestCase_017627_1 "dEQP-GLES3.functional.shaders.der"
#define VkglTestCase_017627_2 "ivate.dfdy.uniform_if.vec2_mediump"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017627, VkglTestCase_017627_1, VkglTestCase_017627_2);

#define VkglTestCase_017628_1 "dEQP-GLES3.functional.shaders.de"
#define VkglTestCase_017628_2 "rivate.dfdy.uniform_if.vec2_highp"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017628, VkglTestCase_017628_1, VkglTestCase_017628_2);

#define VkglTestCase_017629_1 "dEQP-GLES3.functional.shaders.der"
#define VkglTestCase_017629_2 "ivate.dfdy.uniform_if.vec3_mediump"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017629, VkglTestCase_017629_1, VkglTestCase_017629_2);

#define VkglTestCase_017630_1 "dEQP-GLES3.functional.shaders.de"
#define VkglTestCase_017630_2 "rivate.dfdy.uniform_if.vec3_highp"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017630, VkglTestCase_017630_1, VkglTestCase_017630_2);

#define VkglTestCase_017631_1 "dEQP-GLES3.functional.shaders.de"
#define VkglTestCase_017631_2 "rivate.dfdy.uniform_if.vec4_highp"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017631, VkglTestCase_017631_1, VkglTestCase_017631_2);
