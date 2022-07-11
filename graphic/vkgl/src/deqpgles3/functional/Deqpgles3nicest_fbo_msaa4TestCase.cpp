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

#define VkglTestCase_017529_1 "dEQP-GLES3.functional.shaders.derivat"
#define VkglTestCase_017529_2 "e.dfdx.nicest.fbo_msaa4.float_mediump"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017529, VkglTestCase_017529_1, VkglTestCase_017529_2);

#define VkglTestCase_017530_1 "dEQP-GLES3.functional.shaders.deriva"
#define VkglTestCase_017530_2 "te.dfdx.nicest.fbo_msaa4.float_highp"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017530, VkglTestCase_017530_1, VkglTestCase_017530_2);

#define VkglTestCase_017531_1 "dEQP-GLES3.functional.shaders.deriva"
#define VkglTestCase_017531_2 "te.dfdx.nicest.fbo_msaa4.vec2_mediump"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017531, VkglTestCase_017531_1, VkglTestCase_017531_2);

#define VkglTestCase_017532_1 "dEQP-GLES3.functional.shaders.deriv"
#define VkglTestCase_017532_2 "ate.dfdx.nicest.fbo_msaa4.vec2_highp"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017532, VkglTestCase_017532_1, VkglTestCase_017532_2);

#define VkglTestCase_017533_1 "dEQP-GLES3.functional.shaders.deriva"
#define VkglTestCase_017533_2 "te.dfdx.nicest.fbo_msaa4.vec3_mediump"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017533, VkglTestCase_017533_1, VkglTestCase_017533_2);

#define VkglTestCase_017534_1 "dEQP-GLES3.functional.shaders.deriv"
#define VkglTestCase_017534_2 "ate.dfdx.nicest.fbo_msaa4.vec3_highp"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017534, VkglTestCase_017534_1, VkglTestCase_017534_2);

#define VkglTestCase_017535_1 "dEQP-GLES3.functional.shaders.deriva"
#define VkglTestCase_017535_2 "te.dfdx.nicest.fbo_msaa4.vec4_mediump"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017535, VkglTestCase_017535_1, VkglTestCase_017535_2);

#define VkglTestCase_017536_1 "dEQP-GLES3.functional.shaders.deriv"
#define VkglTestCase_017536_2 "ate.dfdx.nicest.fbo_msaa4.vec4_highp"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017536, VkglTestCase_017536_1, VkglTestCase_017536_2);

#define VkglTestCase_017707_1 "dEQP-GLES3.functional.shaders.derivat"
#define VkglTestCase_017707_2 "e.dfdy.nicest.fbo_msaa4.float_mediump"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017707, VkglTestCase_017707_1, VkglTestCase_017707_2);

#define VkglTestCase_017708_1 "dEQP-GLES3.functional.shaders.deriva"
#define VkglTestCase_017708_2 "te.dfdy.nicest.fbo_msaa4.float_highp"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017708, VkglTestCase_017708_1, VkglTestCase_017708_2);

#define VkglTestCase_017709_1 "dEQP-GLES3.functional.shaders.deriva"
#define VkglTestCase_017709_2 "te.dfdy.nicest.fbo_msaa4.vec2_mediump"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017709, VkglTestCase_017709_1, VkglTestCase_017709_2);

#define VkglTestCase_017710_1 "dEQP-GLES3.functional.shaders.deriv"
#define VkglTestCase_017710_2 "ate.dfdy.nicest.fbo_msaa4.vec2_highp"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017710, VkglTestCase_017710_1, VkglTestCase_017710_2);

#define VkglTestCase_017711_1 "dEQP-GLES3.functional.shaders.deriva"
#define VkglTestCase_017711_2 "te.dfdy.nicest.fbo_msaa4.vec3_mediump"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017711, VkglTestCase_017711_1, VkglTestCase_017711_2);

#define VkglTestCase_017712_1 "dEQP-GLES3.functional.shaders.deriv"
#define VkglTestCase_017712_2 "ate.dfdy.nicest.fbo_msaa4.vec3_highp"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017712, VkglTestCase_017712_1, VkglTestCase_017712_2);

#define VkglTestCase_017713_1 "dEQP-GLES3.functional.shaders.deriva"
#define VkglTestCase_017713_2 "te.dfdy.nicest.fbo_msaa4.vec4_mediump"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017713, VkglTestCase_017713_1, VkglTestCase_017713_2);

#define VkglTestCase_017714_1 "dEQP-GLES3.functional.shaders.deriv"
#define VkglTestCase_017714_2 "ate.dfdy.nicest.fbo_msaa4.vec4_highp"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017714, VkglTestCase_017714_1, VkglTestCase_017714_2);

#define VkglTestCase_017907_1 "dEQP-GLES3.functional.shaders.derivate"
#define VkglTestCase_017907_2 ".fwidth.nicest.fbo_msaa4.float_mediump"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017907, VkglTestCase_017907_1, VkglTestCase_017907_2);

#define VkglTestCase_017908_1 "dEQP-GLES3.functional.shaders.derivat"
#define VkglTestCase_017908_2 "e.fwidth.nicest.fbo_msaa4.float_highp"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017908, VkglTestCase_017908_1, VkglTestCase_017908_2);

#define VkglTestCase_017909_1 "dEQP-GLES3.functional.shaders.derivat"
#define VkglTestCase_017909_2 "e.fwidth.nicest.fbo_msaa4.vec2_mediump"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017909, VkglTestCase_017909_1, VkglTestCase_017909_2);

#define VkglTestCase_017910_1 "dEQP-GLES3.functional.shaders.deriva"
#define VkglTestCase_017910_2 "te.fwidth.nicest.fbo_msaa4.vec2_highp"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017910, VkglTestCase_017910_1, VkglTestCase_017910_2);

#define VkglTestCase_017911_1 "dEQP-GLES3.functional.shaders.derivat"
#define VkglTestCase_017911_2 "e.fwidth.nicest.fbo_msaa4.vec3_mediump"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017911, VkglTestCase_017911_1, VkglTestCase_017911_2);

#define VkglTestCase_017912_1 "dEQP-GLES3.functional.shaders.deriva"
#define VkglTestCase_017912_2 "te.fwidth.nicest.fbo_msaa4.vec3_highp"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017912, VkglTestCase_017912_1, VkglTestCase_017912_2);

#define VkglTestCase_017913_1 "dEQP-GLES3.functional.shaders.derivat"
#define VkglTestCase_017913_2 "e.fwidth.nicest.fbo_msaa4.vec4_mediump"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017913, VkglTestCase_017913_1, VkglTestCase_017913_2);

#define VkglTestCase_017914_1 "dEQP-GLES3.functional.shaders.deriva"
#define VkglTestCase_017914_2 "te.fwidth.nicest.fbo_msaa4.vec4_highp"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017914, VkglTestCase_017914_1, VkglTestCase_017914_2);
