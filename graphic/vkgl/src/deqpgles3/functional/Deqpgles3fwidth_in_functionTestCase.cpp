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

#define VkglTestCase_017779_1 "dEQP-GLES3.functional.shaders.deriv"
#define VkglTestCase_017779_2 "ate.fwidth.in_function.float_mediump"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017779, VkglTestCase_017779_1, VkglTestCase_017779_2);

#define VkglTestCase_017780_1 "dEQP-GLES3.functional.shaders.deri"
#define VkglTestCase_017780_2 "vate.fwidth.in_function.float_highp"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017780, VkglTestCase_017780_1, VkglTestCase_017780_2);

#define VkglTestCase_017781_1 "dEQP-GLES3.functional.shaders.deriv"
#define VkglTestCase_017781_2 "ate.fwidth.in_function.vec2_mediump"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017781, VkglTestCase_017781_1, VkglTestCase_017781_2);

#define VkglTestCase_017782_1 "dEQP-GLES3.functional.shaders.deri"
#define VkglTestCase_017782_2 "vate.fwidth.in_function.vec2_highp"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017782, VkglTestCase_017782_1, VkglTestCase_017782_2);

#define VkglTestCase_017783_1 "dEQP-GLES3.functional.shaders.deriv"
#define VkglTestCase_017783_2 "ate.fwidth.in_function.vec3_mediump"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017783, VkglTestCase_017783_1, VkglTestCase_017783_2);

#define VkglTestCase_017784_1 "dEQP-GLES3.functional.shaders.deri"
#define VkglTestCase_017784_2 "vate.fwidth.in_function.vec3_highp"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017784, VkglTestCase_017784_1, VkglTestCase_017784_2);

#define VkglTestCase_017785_1 "dEQP-GLES3.functional.shaders.deriv"
#define VkglTestCase_017785_2 "ate.fwidth.in_function.vec4_mediump"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017785, VkglTestCase_017785_1, VkglTestCase_017785_2);

#define VkglTestCase_017786_1 "dEQP-GLES3.functional.shaders.deri"
#define VkglTestCase_017786_2 "vate.fwidth.in_function.vec4_highp"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017786, VkglTestCase_017786_1, VkglTestCase_017786_2);
