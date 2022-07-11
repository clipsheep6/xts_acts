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

#define VkglTestCase_017661_1 "dEQP-GLES3.functional.shaders.der"
#define VkglTestCase_017661_2 "ivate.dfdy.fbo_msaa4.float_mediump"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017661, VkglTestCase_017661_1, VkglTestCase_017661_2);

#define VkglTestCase_017662_1 "dEQP-GLES3.functional.shaders.de"
#define VkglTestCase_017662_2 "rivate.dfdy.fbo_msaa4.float_highp"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017662, VkglTestCase_017662_1, VkglTestCase_017662_2);

#define VkglTestCase_017663_1 "dEQP-GLES3.functional.shaders.der"
#define VkglTestCase_017663_2 "ivate.dfdy.fbo_msaa4.vec2_mediump"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017663, VkglTestCase_017663_1, VkglTestCase_017663_2);

#define VkglTestCase_017664_1 "dEQP-GLES3.functional.shaders.de"
#define VkglTestCase_017664_2 "rivate.dfdy.fbo_msaa4.vec2_highp"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017664, VkglTestCase_017664_1, VkglTestCase_017664_2);

#define VkglTestCase_017665_1 "dEQP-GLES3.functional.shaders.der"
#define VkglTestCase_017665_2 "ivate.dfdy.fbo_msaa4.vec3_mediump"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017665, VkglTestCase_017665_1, VkglTestCase_017665_2);

#define VkglTestCase_017666_1 "dEQP-GLES3.functional.shaders.de"
#define VkglTestCase_017666_2 "rivate.dfdy.fbo_msaa4.vec3_highp"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017666, VkglTestCase_017666_1, VkglTestCase_017666_2);

#define VkglTestCase_017667_1 "dEQP-GLES3.functional.shaders.der"
#define VkglTestCase_017667_2 "ivate.dfdy.fbo_msaa4.vec4_mediump"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017667, VkglTestCase_017667_1, VkglTestCase_017667_2);

#define VkglTestCase_017668_1 "dEQP-GLES3.functional.shaders.de"
#define VkglTestCase_017668_2 "rivate.dfdy.fbo_msaa4.vec4_highp"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017668, VkglTestCase_017668_1, VkglTestCase_017668_2);
