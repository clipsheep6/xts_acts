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

#define VkglTestCase_017843_1 "dEQP-GLES3.functional.shaders.deri"
#define VkglTestCase_017843_2 "vate.fwidth.fbo_msaa2.float_mediump"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017843, VkglTestCase_017843_1, VkglTestCase_017843_2);

#define VkglTestCase_017844_1 "dEQP-GLES3.functional.shaders.der"
#define VkglTestCase_017844_2 "ivate.fwidth.fbo_msaa2.float_highp"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017844, VkglTestCase_017844_1, VkglTestCase_017844_2);

#define VkglTestCase_017845_1 "dEQP-GLES3.functional.shaders.deri"
#define VkglTestCase_017845_2 "vate.fwidth.fbo_msaa2.vec2_mediump"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017845, VkglTestCase_017845_1, VkglTestCase_017845_2);

#define VkglTestCase_017846_1 "dEQP-GLES3.functional.shaders.der"
#define VkglTestCase_017846_2 "ivate.fwidth.fbo_msaa2.vec2_highp"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017846, VkglTestCase_017846_1, VkglTestCase_017846_2);

#define VkglTestCase_017847_1 "dEQP-GLES3.functional.shaders.deri"
#define VkglTestCase_017847_2 "vate.fwidth.fbo_msaa2.vec3_mediump"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017847, VkglTestCase_017847_1, VkglTestCase_017847_2);

#define VkglTestCase_017848_1 "dEQP-GLES3.functional.shaders.der"
#define VkglTestCase_017848_2 "ivate.fwidth.fbo_msaa2.vec3_highp"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017848, VkglTestCase_017848_1, VkglTestCase_017848_2);

#define VkglTestCase_017849_1 "dEQP-GLES3.functional.shaders.deri"
#define VkglTestCase_017849_2 "vate.fwidth.fbo_msaa2.vec4_mediump"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017849, VkglTestCase_017849_1, VkglTestCase_017849_2);

#define VkglTestCase_017850_1 "dEQP-GLES3.functional.shaders.der"
#define VkglTestCase_017850_2 "ivate.fwidth.fbo_msaa2.vec4_highp"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017850, VkglTestCase_017850_1, VkglTestCase_017850_2);
