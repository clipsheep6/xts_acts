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

#define VkglTestCase_017432_1 "dEQP-GLES3.functional.shaders.der"
#define VkglTestCase_017432_2 "ivate.dfdx.static_if.float_mediump"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017432, VkglTestCase_017432_1, VkglTestCase_017432_2);

#define VkglTestCase_017433_1 "dEQP-GLES3.functional.shaders.de"
#define VkglTestCase_017433_2 "rivate.dfdx.static_if.float_highp"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017433, VkglTestCase_017433_1, VkglTestCase_017433_2);

#define VkglTestCase_017434_1 "dEQP-GLES3.functional.shaders.der"
#define VkglTestCase_017434_2 "ivate.dfdx.static_if.vec2_mediump"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017434, VkglTestCase_017434_1, VkglTestCase_017434_2);

#define VkglTestCase_017435_1 "dEQP-GLES3.functional.shaders.de"
#define VkglTestCase_017435_2 "rivate.dfdx.static_if.vec2_highp"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017435, VkglTestCase_017435_1, VkglTestCase_017435_2);

#define VkglTestCase_017436_1 "dEQP-GLES3.functional.shaders.der"
#define VkglTestCase_017436_2 "ivate.dfdx.static_if.vec3_mediump"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017436, VkglTestCase_017436_1, VkglTestCase_017436_2);

#define VkglTestCase_017437_1 "dEQP-GLES3.functional.shaders.de"
#define VkglTestCase_017437_2 "rivate.dfdx.static_if.vec3_highp"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017437, VkglTestCase_017437_1, VkglTestCase_017437_2);

#define VkglTestCase_017438_1 "dEQP-GLES3.functional.shaders.de"
#define VkglTestCase_017438_2 "rivate.dfdx.static_if.vec4_highp"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017438, VkglTestCase_017438_1, VkglTestCase_017438_2);
