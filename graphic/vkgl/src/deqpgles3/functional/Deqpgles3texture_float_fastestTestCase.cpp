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

#define VkglTestCase_017558_1 "dEQP-GLES3.functional.shaders.derivate"
#define VkglTestCase_017558_2 ".dfdx.texture.float_fastest.float_lowp"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017558, VkglTestCase_017558_1, VkglTestCase_017558_2);

#define VkglTestCase_017559_1 "dEQP-GLES3.functional.shaders.derivate."
#define VkglTestCase_017559_2 "dfdx.texture.float_fastest.float_mediump"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017559, VkglTestCase_017559_1, VkglTestCase_017559_2);

#define VkglTestCase_017560_1 "dEQP-GLES3.functional.shaders.derivate"
#define VkglTestCase_017560_2 ".dfdx.texture.float_fastest.float_highp"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017560, VkglTestCase_017560_1, VkglTestCase_017560_2);

#define VkglTestCase_017561_1 "dEQP-GLES3.functional.shaders.derivat"
#define VkglTestCase_017561_2 "e.dfdx.texture.float_fastest.vec2_lowp"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017561, VkglTestCase_017561_1, VkglTestCase_017561_2);

#define VkglTestCase_017562_1 "dEQP-GLES3.functional.shaders.derivate."
#define VkglTestCase_017562_2 "dfdx.texture.float_fastest.vec2_mediump"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017562, VkglTestCase_017562_1, VkglTestCase_017562_2);

#define VkglTestCase_017563_1 "dEQP-GLES3.functional.shaders.derivate"
#define VkglTestCase_017563_2 ".dfdx.texture.float_fastest.vec2_highp"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017563, VkglTestCase_017563_1, VkglTestCase_017563_2);

#define VkglTestCase_017564_1 "dEQP-GLES3.functional.shaders.derivat"
#define VkglTestCase_017564_2 "e.dfdx.texture.float_fastest.vec3_lowp"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017564, VkglTestCase_017564_1, VkglTestCase_017564_2);

#define VkglTestCase_017565_1 "dEQP-GLES3.functional.shaders.derivate."
#define VkglTestCase_017565_2 "dfdx.texture.float_fastest.vec3_mediump"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017565, VkglTestCase_017565_1, VkglTestCase_017565_2);

#define VkglTestCase_017566_1 "dEQP-GLES3.functional.shaders.derivate"
#define VkglTestCase_017566_2 ".dfdx.texture.float_fastest.vec3_highp"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017566, VkglTestCase_017566_1, VkglTestCase_017566_2);

#define VkglTestCase_017567_1 "dEQP-GLES3.functional.shaders.derivat"
#define VkglTestCase_017567_2 "e.dfdx.texture.float_fastest.vec4_lowp"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017567, VkglTestCase_017567_1, VkglTestCase_017567_2);

#define VkglTestCase_017568_1 "dEQP-GLES3.functional.shaders.derivate."
#define VkglTestCase_017568_2 "dfdx.texture.float_fastest.vec4_mediump"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017568, VkglTestCase_017568_1, VkglTestCase_017568_2);

#define VkglTestCase_017569_1 "dEQP-GLES3.functional.shaders.derivate"
#define VkglTestCase_017569_2 ".dfdx.texture.float_fastest.vec4_highp"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017569, VkglTestCase_017569_1, VkglTestCase_017569_2);

#define VkglTestCase_017739_1 "dEQP-GLES3.functional.shaders.derivate"
#define VkglTestCase_017739_2 ".dfdy.texture.float_fastest.float_lowp"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017739, VkglTestCase_017739_1, VkglTestCase_017739_2);

#define VkglTestCase_017740_1 "dEQP-GLES3.functional.shaders.derivate."
#define VkglTestCase_017740_2 "dfdy.texture.float_fastest.float_mediump"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017740, VkglTestCase_017740_1, VkglTestCase_017740_2);

#define VkglTestCase_017741_1 "dEQP-GLES3.functional.shaders.derivate"
#define VkglTestCase_017741_2 ".dfdy.texture.float_fastest.float_highp"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017741, VkglTestCase_017741_1, VkglTestCase_017741_2);

#define VkglTestCase_017742_1 "dEQP-GLES3.functional.shaders.derivat"
#define VkglTestCase_017742_2 "e.dfdy.texture.float_fastest.vec2_lowp"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017742, VkglTestCase_017742_1, VkglTestCase_017742_2);

#define VkglTestCase_017743_1 "dEQP-GLES3.functional.shaders.derivate."
#define VkglTestCase_017743_2 "dfdy.texture.float_fastest.vec2_mediump"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017743, VkglTestCase_017743_1, VkglTestCase_017743_2);

#define VkglTestCase_017744_1 "dEQP-GLES3.functional.shaders.derivate"
#define VkglTestCase_017744_2 ".dfdy.texture.float_fastest.vec2_highp"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017744, VkglTestCase_017744_1, VkglTestCase_017744_2);

#define VkglTestCase_017745_1 "dEQP-GLES3.functional.shaders.derivat"
#define VkglTestCase_017745_2 "e.dfdy.texture.float_fastest.vec3_lowp"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017745, VkglTestCase_017745_1, VkglTestCase_017745_2);

#define VkglTestCase_017746_1 "dEQP-GLES3.functional.shaders.derivate."
#define VkglTestCase_017746_2 "dfdy.texture.float_fastest.vec3_mediump"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017746, VkglTestCase_017746_1, VkglTestCase_017746_2);

#define VkglTestCase_017747_1 "dEQP-GLES3.functional.shaders.derivate"
#define VkglTestCase_017747_2 ".dfdy.texture.float_fastest.vec3_highp"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017747, VkglTestCase_017747_1, VkglTestCase_017747_2);

#define VkglTestCase_017748_1 "dEQP-GLES3.functional.shaders.derivat"
#define VkglTestCase_017748_2 "e.dfdy.texture.float_fastest.vec4_lowp"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017748, VkglTestCase_017748_1, VkglTestCase_017748_2);

#define VkglTestCase_017749_1 "dEQP-GLES3.functional.shaders.derivate."
#define VkglTestCase_017749_2 "dfdy.texture.float_fastest.vec4_mediump"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017749, VkglTestCase_017749_1, VkglTestCase_017749_2);

#define VkglTestCase_017750_1 "dEQP-GLES3.functional.shaders.derivate"
#define VkglTestCase_017750_2 ".dfdy.texture.float_fastest.vec4_highp"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017750, VkglTestCase_017750_1, VkglTestCase_017750_2);

#define VkglTestCase_017943_1 "dEQP-GLES3.functional.shaders.derivate."
#define VkglTestCase_017943_2 "fwidth.texture.float_fastest.float_lowp"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017943, VkglTestCase_017943_1, VkglTestCase_017943_2);

#define VkglTestCase_017944_1 "dEQP-GLES3.functional.shaders.derivate.f"
#define VkglTestCase_017944_2 "width.texture.float_fastest.float_mediump"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017944, VkglTestCase_017944_1, VkglTestCase_017944_2);

#define VkglTestCase_017945_1 "dEQP-GLES3.functional.shaders.derivate."
#define VkglTestCase_017945_2 "fwidth.texture.float_fastest.float_highp"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017945, VkglTestCase_017945_1, VkglTestCase_017945_2);

#define VkglTestCase_017946_1 "dEQP-GLES3.functional.shaders.derivate"
#define VkglTestCase_017946_2 ".fwidth.texture.float_fastest.vec2_lowp"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017946, VkglTestCase_017946_1, VkglTestCase_017946_2);

#define VkglTestCase_017947_1 "dEQP-GLES3.functional.shaders.derivate.f"
#define VkglTestCase_017947_2 "width.texture.float_fastest.vec2_mediump"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017947, VkglTestCase_017947_1, VkglTestCase_017947_2);

#define VkglTestCase_017948_1 "dEQP-GLES3.functional.shaders.derivate."
#define VkglTestCase_017948_2 "fwidth.texture.float_fastest.vec2_highp"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017948, VkglTestCase_017948_1, VkglTestCase_017948_2);

#define VkglTestCase_017949_1 "dEQP-GLES3.functional.shaders.derivate"
#define VkglTestCase_017949_2 ".fwidth.texture.float_fastest.vec3_lowp"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017949, VkglTestCase_017949_1, VkglTestCase_017949_2);

#define VkglTestCase_017950_1 "dEQP-GLES3.functional.shaders.derivate.f"
#define VkglTestCase_017950_2 "width.texture.float_fastest.vec3_mediump"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017950, VkglTestCase_017950_1, VkglTestCase_017950_2);

#define VkglTestCase_017951_1 "dEQP-GLES3.functional.shaders.derivate."
#define VkglTestCase_017951_2 "fwidth.texture.float_fastest.vec3_highp"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017951, VkglTestCase_017951_1, VkglTestCase_017951_2);

#define VkglTestCase_017952_1 "dEQP-GLES3.functional.shaders.derivate"
#define VkglTestCase_017952_2 ".fwidth.texture.float_fastest.vec4_lowp"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017952, VkglTestCase_017952_1, VkglTestCase_017952_2);

#define VkglTestCase_017953_1 "dEQP-GLES3.functional.shaders.derivate.f"
#define VkglTestCase_017953_2 "width.texture.float_fastest.vec4_mediump"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017953, VkglTestCase_017953_1, VkglTestCase_017953_2);

#define VkglTestCase_017954_1 "dEQP-GLES3.functional.shaders.derivate."
#define VkglTestCase_017954_2 "fwidth.texture.float_fastest.vec4_highp"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017954, VkglTestCase_017954_1, VkglTestCase_017954_2);
