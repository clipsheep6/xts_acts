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

#define VkglTestCase_017481_1 "dEQP-GLES3.functional.shaders.der"
#define VkglTestCase_017481_2 "ivate.dfdx.fbo_msaa2.float_mediump"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017481, VkglTestCase_017481_1, VkglTestCase_017481_2);

#define VkglTestCase_017482_1 "dEQP-GLES3.functional.shaders.de"
#define VkglTestCase_017482_2 "rivate.dfdx.fbo_msaa2.float_highp"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017482, VkglTestCase_017482_1, VkglTestCase_017482_2);

#define VkglTestCase_017483_1 "dEQP-GLES3.functional.shaders.der"
#define VkglTestCase_017483_2 "ivate.dfdx.fbo_msaa2.vec2_mediump"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017483, VkglTestCase_017483_1, VkglTestCase_017483_2);

#define VkglTestCase_017484_1 "dEQP-GLES3.functional.shaders.de"
#define VkglTestCase_017484_2 "rivate.dfdx.fbo_msaa2.vec2_highp"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017484, VkglTestCase_017484_1, VkglTestCase_017484_2);

#define VkglTestCase_017485_1 "dEQP-GLES3.functional.shaders.der"
#define VkglTestCase_017485_2 "ivate.dfdx.fbo_msaa2.vec3_mediump"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017485, VkglTestCase_017485_1, VkglTestCase_017485_2);

#define VkglTestCase_017486_1 "dEQP-GLES3.functional.shaders.de"
#define VkglTestCase_017486_2 "rivate.dfdx.fbo_msaa2.vec3_highp"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017486, VkglTestCase_017486_1, VkglTestCase_017486_2);

#define VkglTestCase_017487_1 "dEQP-GLES3.functional.shaders.der"
#define VkglTestCase_017487_2 "ivate.dfdx.fbo_msaa2.vec4_mediump"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017487, VkglTestCase_017487_1, VkglTestCase_017487_2);

#define VkglTestCase_017488_1 "dEQP-GLES3.functional.shaders.de"
#define VkglTestCase_017488_2 "rivate.dfdx.fbo_msaa2.vec4_highp"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017488, VkglTestCase_017488_1, VkglTestCase_017488_2);
