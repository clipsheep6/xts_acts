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

#define VkglTestCase_017415_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_017415_2 "derivate.dfdx.linear.float_lowp"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017415, VkglTestCase_017415_1, VkglTestCase_017415_2);

#define VkglTestCase_017416_1 "dEQP-GLES3.functional.shaders.de"
#define VkglTestCase_017416_2 "rivate.dfdx.linear.float_mediump"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017416, VkglTestCase_017416_1, VkglTestCase_017416_2);

#define VkglTestCase_017417_1 "dEQP-GLES3.functional.shaders.d"
#define VkglTestCase_017417_2 "erivate.dfdx.linear.float_highp"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017417, VkglTestCase_017417_1, VkglTestCase_017417_2);

#define VkglTestCase_017418_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_017418_2 "derivate.dfdx.linear.vec2_lowp"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017418, VkglTestCase_017418_1, VkglTestCase_017418_2);

#define VkglTestCase_017419_1 "dEQP-GLES3.functional.shaders.d"
#define VkglTestCase_017419_2 "erivate.dfdx.linear.vec2_mediump"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017419, VkglTestCase_017419_1, VkglTestCase_017419_2);

#define VkglTestCase_017420_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_017420_2 "derivate.dfdx.linear.vec2_highp"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017420, VkglTestCase_017420_1, VkglTestCase_017420_2);

#define VkglTestCase_017421_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_017421_2 "derivate.dfdx.linear.vec3_lowp"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017421, VkglTestCase_017421_1, VkglTestCase_017421_2);

#define VkglTestCase_017422_1 "dEQP-GLES3.functional.shaders.d"
#define VkglTestCase_017422_2 "erivate.dfdx.linear.vec3_mediump"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017422, VkglTestCase_017422_1, VkglTestCase_017422_2);

#define VkglTestCase_017423_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_017423_2 "derivate.dfdx.linear.vec3_highp"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017423, VkglTestCase_017423_1, VkglTestCase_017423_2);

#define VkglTestCase_017424_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_017424_2 "derivate.dfdx.linear.vec4_highp"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017424, VkglTestCase_017424_1, VkglTestCase_017424_2);
