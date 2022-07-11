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

#define VkglTestCase_017522_1 "dEQP-GLES3.functional.shaders.deriva"
#define VkglTestCase_017522_2 "te.dfdx.nicest.default.float_mediump"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017522, VkglTestCase_017522_1, VkglTestCase_017522_2);

#define VkglTestCase_017523_1 "dEQP-GLES3.functional.shaders.deriv"
#define VkglTestCase_017523_2 "ate.dfdx.nicest.default.float_highp"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017523, VkglTestCase_017523_1, VkglTestCase_017523_2);

#define VkglTestCase_017524_1 "dEQP-GLES3.functional.shaders.deriv"
#define VkglTestCase_017524_2 "ate.dfdx.nicest.default.vec2_mediump"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017524, VkglTestCase_017524_1, VkglTestCase_017524_2);

#define VkglTestCase_017525_1 "dEQP-GLES3.functional.shaders.deri"
#define VkglTestCase_017525_2 "vate.dfdx.nicest.default.vec2_highp"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017525, VkglTestCase_017525_1, VkglTestCase_017525_2);

#define VkglTestCase_017526_1 "dEQP-GLES3.functional.shaders.deriv"
#define VkglTestCase_017526_2 "ate.dfdx.nicest.default.vec3_mediump"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017526, VkglTestCase_017526_1, VkglTestCase_017526_2);

#define VkglTestCase_017527_1 "dEQP-GLES3.functional.shaders.deri"
#define VkglTestCase_017527_2 "vate.dfdx.nicest.default.vec3_highp"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017527, VkglTestCase_017527_1, VkglTestCase_017527_2);

#define VkglTestCase_017528_1 "dEQP-GLES3.functional.shaders.deri"
#define VkglTestCase_017528_2 "vate.dfdx.nicest.default.vec4_highp"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017528, VkglTestCase_017528_1, VkglTestCase_017528_2);

#define VkglTestCase_017700_1 "dEQP-GLES3.functional.shaders.deriva"
#define VkglTestCase_017700_2 "te.dfdy.nicest.default.float_mediump"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017700, VkglTestCase_017700_1, VkglTestCase_017700_2);

#define VkglTestCase_017701_1 "dEQP-GLES3.functional.shaders.deriv"
#define VkglTestCase_017701_2 "ate.dfdy.nicest.default.float_highp"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017701, VkglTestCase_017701_1, VkglTestCase_017701_2);

#define VkglTestCase_017702_1 "dEQP-GLES3.functional.shaders.deriv"
#define VkglTestCase_017702_2 "ate.dfdy.nicest.default.vec2_mediump"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017702, VkglTestCase_017702_1, VkglTestCase_017702_2);

#define VkglTestCase_017703_1 "dEQP-GLES3.functional.shaders.deri"
#define VkglTestCase_017703_2 "vate.dfdy.nicest.default.vec2_highp"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017703, VkglTestCase_017703_1, VkglTestCase_017703_2);

#define VkglTestCase_017704_1 "dEQP-GLES3.functional.shaders.deriv"
#define VkglTestCase_017704_2 "ate.dfdy.nicest.default.vec3_mediump"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017704, VkglTestCase_017704_1, VkglTestCase_017704_2);

#define VkglTestCase_017705_1 "dEQP-GLES3.functional.shaders.deri"
#define VkglTestCase_017705_2 "vate.dfdy.nicest.default.vec3_highp"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017705, VkglTestCase_017705_1, VkglTestCase_017705_2);

#define VkglTestCase_017706_1 "dEQP-GLES3.functional.shaders.deri"
#define VkglTestCase_017706_2 "vate.dfdy.nicest.default.vec4_highp"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017706, VkglTestCase_017706_1, VkglTestCase_017706_2);

#define VkglTestCase_017899_1 "dEQP-GLES3.functional.shaders.derivat"
#define VkglTestCase_017899_2 "e.fwidth.nicest.default.float_mediump"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017899, VkglTestCase_017899_1, VkglTestCase_017899_2);

#define VkglTestCase_017900_1 "dEQP-GLES3.functional.shaders.deriva"
#define VkglTestCase_017900_2 "te.fwidth.nicest.default.float_highp"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017900, VkglTestCase_017900_1, VkglTestCase_017900_2);

#define VkglTestCase_017901_1 "dEQP-GLES3.functional.shaders.deriva"
#define VkglTestCase_017901_2 "te.fwidth.nicest.default.vec2_mediump"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017901, VkglTestCase_017901_1, VkglTestCase_017901_2);

#define VkglTestCase_017902_1 "dEQP-GLES3.functional.shaders.deriv"
#define VkglTestCase_017902_2 "ate.fwidth.nicest.default.vec2_highp"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017902, VkglTestCase_017902_1, VkglTestCase_017902_2);

#define VkglTestCase_017903_1 "dEQP-GLES3.functional.shaders.deriva"
#define VkglTestCase_017903_2 "te.fwidth.nicest.default.vec3_mediump"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017903, VkglTestCase_017903_1, VkglTestCase_017903_2);

#define VkglTestCase_017904_1 "dEQP-GLES3.functional.shaders.deriv"
#define VkglTestCase_017904_2 "ate.fwidth.nicest.default.vec3_highp"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017904, VkglTestCase_017904_1, VkglTestCase_017904_2);

#define VkglTestCase_017905_1 "dEQP-GLES3.functional.shaders.deriva"
#define VkglTestCase_017905_2 "te.fwidth.nicest.default.vec4_mediump"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017905, VkglTestCase_017905_1, VkglTestCase_017905_2);

#define VkglTestCase_017906_1 "dEQP-GLES3.functional.shaders.deriv"
#define VkglTestCase_017906_2 "ate.fwidth.nicest.default.vec4_highp"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017906, VkglTestCase_017906_1, VkglTestCase_017906_2);
