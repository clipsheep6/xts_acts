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

#define VkglTestCase_017497_1 "dEQP-GLES3.functional.shaders.de"
#define VkglTestCase_017497_2 "rivate.dfdx.fbo_float.float_lowp"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017497, VkglTestCase_017497_1, VkglTestCase_017497_2);

#define VkglTestCase_017498_1 "dEQP-GLES3.functional.shaders.der"
#define VkglTestCase_017498_2 "ivate.dfdx.fbo_float.float_mediump"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017498, VkglTestCase_017498_1, VkglTestCase_017498_2);

#define VkglTestCase_017499_1 "dEQP-GLES3.functional.shaders.der"
#define VkglTestCase_017499_2 "ivate.dfdx.fbo_float.vec2_mediump"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017499, VkglTestCase_017499_1, VkglTestCase_017499_2);

#define VkglTestCase_017500_1 "dEQP-GLES3.functional.shaders.d"
#define VkglTestCase_017500_2 "erivate.dfdx.fbo_float.vec3_lowp"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017500, VkglTestCase_017500_1, VkglTestCase_017500_2);

#define VkglTestCase_017501_1 "dEQP-GLES3.functional.shaders.der"
#define VkglTestCase_017501_2 "ivate.dfdx.fbo_float.vec3_mediump"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017501, VkglTestCase_017501_1, VkglTestCase_017501_2);
