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

#define VkglTestCase_017502_1 "dEQP-GLES3.functional.shaders.deriva"
#define VkglTestCase_017502_2 "te.dfdx.fastest.default.float_mediump"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017502, VkglTestCase_017502_1, VkglTestCase_017502_2);

#define VkglTestCase_017503_1 "dEQP-GLES3.functional.shaders.deriv"
#define VkglTestCase_017503_2 "ate.dfdx.fastest.default.float_highp"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017503, VkglTestCase_017503_1, VkglTestCase_017503_2);

#define VkglTestCase_017504_1 "dEQP-GLES3.functional.shaders.deriva"
#define VkglTestCase_017504_2 "te.dfdx.fastest.default.vec2_mediump"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017504, VkglTestCase_017504_1, VkglTestCase_017504_2);

#define VkglTestCase_017505_1 "dEQP-GLES3.functional.shaders.deriv"
#define VkglTestCase_017505_2 "ate.dfdx.fastest.default.vec2_highp"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017505, VkglTestCase_017505_1, VkglTestCase_017505_2);

#define VkglTestCase_017506_1 "dEQP-GLES3.functional.shaders.deriva"
#define VkglTestCase_017506_2 "te.dfdx.fastest.default.vec3_mediump"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017506, VkglTestCase_017506_1, VkglTestCase_017506_2);

#define VkglTestCase_017507_1 "dEQP-GLES3.functional.shaders.deriv"
#define VkglTestCase_017507_2 "ate.dfdx.fastest.default.vec3_highp"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017507, VkglTestCase_017507_1, VkglTestCase_017507_2);

#define VkglTestCase_017508_1 "dEQP-GLES3.functional.shaders.deriv"
#define VkglTestCase_017508_2 "ate.dfdx.fastest.default.vec4_highp"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017508, VkglTestCase_017508_1, VkglTestCase_017508_2);

#define VkglTestCase_017677_1 "dEQP-GLES3.functional.shaders.deriva"
#define VkglTestCase_017677_2 "te.dfdy.fastest.default.float_mediump"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017677, VkglTestCase_017677_1, VkglTestCase_017677_2);

#define VkglTestCase_017678_1 "dEQP-GLES3.functional.shaders.deriv"
#define VkglTestCase_017678_2 "ate.dfdy.fastest.default.float_highp"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017678, VkglTestCase_017678_1, VkglTestCase_017678_2);

#define VkglTestCase_017679_1 "dEQP-GLES3.functional.shaders.deriva"
#define VkglTestCase_017679_2 "te.dfdy.fastest.default.vec2_mediump"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017679, VkglTestCase_017679_1, VkglTestCase_017679_2);

#define VkglTestCase_017680_1 "dEQP-GLES3.functional.shaders.deriv"
#define VkglTestCase_017680_2 "ate.dfdy.fastest.default.vec2_highp"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017680, VkglTestCase_017680_1, VkglTestCase_017680_2);

#define VkglTestCase_017681_1 "dEQP-GLES3.functional.shaders.deriva"
#define VkglTestCase_017681_2 "te.dfdy.fastest.default.vec3_mediump"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017681, VkglTestCase_017681_1, VkglTestCase_017681_2);

#define VkglTestCase_017682_1 "dEQP-GLES3.functional.shaders.deriv"
#define VkglTestCase_017682_2 "ate.dfdy.fastest.default.vec3_highp"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017682, VkglTestCase_017682_1, VkglTestCase_017682_2);

#define VkglTestCase_017683_1 "dEQP-GLES3.functional.shaders.deriv"
#define VkglTestCase_017683_2 "ate.dfdy.fastest.default.vec4_highp"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017683, VkglTestCase_017683_1, VkglTestCase_017683_2);

#define VkglTestCase_017871_1 "dEQP-GLES3.functional.shaders.derivat"
#define VkglTestCase_017871_2 "e.fwidth.fastest.default.float_mediump"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017871, VkglTestCase_017871_1, VkglTestCase_017871_2);

#define VkglTestCase_017872_1 "dEQP-GLES3.functional.shaders.deriva"
#define VkglTestCase_017872_2 "te.fwidth.fastest.default.float_highp"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017872, VkglTestCase_017872_1, VkglTestCase_017872_2);

#define VkglTestCase_017873_1 "dEQP-GLES3.functional.shaders.derivat"
#define VkglTestCase_017873_2 "e.fwidth.fastest.default.vec2_mediump"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017873, VkglTestCase_017873_1, VkglTestCase_017873_2);

#define VkglTestCase_017874_1 "dEQP-GLES3.functional.shaders.deriva"
#define VkglTestCase_017874_2 "te.fwidth.fastest.default.vec2_highp"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017874, VkglTestCase_017874_1, VkglTestCase_017874_2);

#define VkglTestCase_017875_1 "dEQP-GLES3.functional.shaders.derivat"
#define VkglTestCase_017875_2 "e.fwidth.fastest.default.vec3_mediump"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017875, VkglTestCase_017875_1, VkglTestCase_017875_2);

#define VkglTestCase_017876_1 "dEQP-GLES3.functional.shaders.deriva"
#define VkglTestCase_017876_2 "te.fwidth.fastest.default.vec3_highp"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017876, VkglTestCase_017876_1, VkglTestCase_017876_2);

#define VkglTestCase_017877_1 "dEQP-GLES3.functional.shaders.derivat"
#define VkglTestCase_017877_2 "e.fwidth.fastest.default.vec4_mediump"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017877, VkglTestCase_017877_1, VkglTestCase_017877_2);

#define VkglTestCase_017878_1 "dEQP-GLES3.functional.shaders.deriva"
#define VkglTestCase_017878_2 "te.fwidth.fastest.default.vec4_highp"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017878, VkglTestCase_017878_1, VkglTestCase_017878_2);
