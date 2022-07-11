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

#define VkglTestCase_017669_1 "dEQP-GLES3.functional.shaders.de"
#define VkglTestCase_017669_2 "rivate.dfdy.fbo_float.float_lowp"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017669, VkglTestCase_017669_1, VkglTestCase_017669_2);

#define VkglTestCase_017670_1 "dEQP-GLES3.functional.shaders.der"
#define VkglTestCase_017670_2 "ivate.dfdy.fbo_float.float_mediump"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017670, VkglTestCase_017670_1, VkglTestCase_017670_2);

#define VkglTestCase_017671_1 "dEQP-GLES3.functional.shaders.d"
#define VkglTestCase_017671_2 "erivate.dfdy.fbo_float.vec2_lowp"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017671, VkglTestCase_017671_1, VkglTestCase_017671_2);

#define VkglTestCase_017672_1 "dEQP-GLES3.functional.shaders.der"
#define VkglTestCase_017672_2 "ivate.dfdy.fbo_float.vec2_mediump"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017672, VkglTestCase_017672_1, VkglTestCase_017672_2);

#define VkglTestCase_017673_1 "dEQP-GLES3.functional.shaders.d"
#define VkglTestCase_017673_2 "erivate.dfdy.fbo_float.vec3_lowp"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017673, VkglTestCase_017673_1, VkglTestCase_017673_2);

#define VkglTestCase_017674_1 "dEQP-GLES3.functional.shaders.der"
#define VkglTestCase_017674_2 "ivate.dfdy.fbo_float.vec3_mediump"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017674, VkglTestCase_017674_1, VkglTestCase_017674_2);

#define VkglTestCase_017675_1 "dEQP-GLES3.functional.shaders.d"
#define VkglTestCase_017675_2 "erivate.dfdy.fbo_float.vec4_lowp"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017675, VkglTestCase_017675_1, VkglTestCase_017675_2);

#define VkglTestCase_017676_1 "dEQP-GLES3.functional.shaders.der"
#define VkglTestCase_017676_2 "ivate.dfdy.fbo_float.vec4_mediump"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017676, VkglTestCase_017676_1, VkglTestCase_017676_2);
