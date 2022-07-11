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

#define VkglTestCase_017453_1 "dEQP-GLES3.functional.shaders.deri"
#define VkglTestCase_017453_2 "vate.dfdx.uniform_if.float_mediump"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017453, VkglTestCase_017453_1, VkglTestCase_017453_2);

#define VkglTestCase_017454_1 "dEQP-GLES3.functional.shaders.der"
#define VkglTestCase_017454_2 "ivate.dfdx.uniform_if.float_highp"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017454, VkglTestCase_017454_1, VkglTestCase_017454_2);

#define VkglTestCase_017455_1 "dEQP-GLES3.functional.shaders.der"
#define VkglTestCase_017455_2 "ivate.dfdx.uniform_if.vec2_mediump"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017455, VkglTestCase_017455_1, VkglTestCase_017455_2);

#define VkglTestCase_017456_1 "dEQP-GLES3.functional.shaders.de"
#define VkglTestCase_017456_2 "rivate.dfdx.uniform_if.vec2_highp"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017456, VkglTestCase_017456_1, VkglTestCase_017456_2);

#define VkglTestCase_017457_1 "dEQP-GLES3.functional.shaders.der"
#define VkglTestCase_017457_2 "ivate.dfdx.uniform_if.vec3_mediump"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017457, VkglTestCase_017457_1, VkglTestCase_017457_2);

#define VkglTestCase_017458_1 "dEQP-GLES3.functional.shaders.de"
#define VkglTestCase_017458_2 "rivate.dfdx.uniform_if.vec3_highp"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017458, VkglTestCase_017458_1, VkglTestCase_017458_2);

#define VkglTestCase_017459_1 "dEQP-GLES3.functional.shaders.de"
#define VkglTestCase_017459_2 "rivate.dfdx.uniform_if.vec4_highp"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017459, VkglTestCase_017459_1, VkglTestCase_017459_2);
