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

#define VkglTestCase_017597_1 "dEQP-GLES3.functional.shaders.deri"
#define VkglTestCase_017597_2 "vate.dfdy.in_function.float_mediump"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017597, VkglTestCase_017597_1, VkglTestCase_017597_2);

#define VkglTestCase_017598_1 "dEQP-GLES3.functional.shaders.der"
#define VkglTestCase_017598_2 "ivate.dfdy.in_function.float_highp"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017598, VkglTestCase_017598_1, VkglTestCase_017598_2);

#define VkglTestCase_017599_1 "dEQP-GLES3.functional.shaders.deri"
#define VkglTestCase_017599_2 "vate.dfdy.in_function.vec2_mediump"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017599, VkglTestCase_017599_1, VkglTestCase_017599_2);

#define VkglTestCase_017600_1 "dEQP-GLES3.functional.shaders.der"
#define VkglTestCase_017600_2 "ivate.dfdy.in_function.vec2_highp"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017600, VkglTestCase_017600_1, VkglTestCase_017600_2);

#define VkglTestCase_017601_1 "dEQP-GLES3.functional.shaders.deri"
#define VkglTestCase_017601_2 "vate.dfdy.in_function.vec3_mediump"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017601, VkglTestCase_017601_1, VkglTestCase_017601_2);

#define VkglTestCase_017602_1 "dEQP-GLES3.functional.shaders.der"
#define VkglTestCase_017602_2 "ivate.dfdy.in_function.vec3_highp"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017602, VkglTestCase_017602_1, VkglTestCase_017602_2);

#define VkglTestCase_017603_1 "dEQP-GLES3.functional.shaders.der"
#define VkglTestCase_017603_2 "ivate.dfdy.in_function.vec4_highp"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017603, VkglTestCase_017603_1, VkglTestCase_017603_2);
