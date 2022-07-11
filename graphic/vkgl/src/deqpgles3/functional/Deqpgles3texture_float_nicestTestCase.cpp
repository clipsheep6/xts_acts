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

#define VkglTestCase_017570_1 "dEQP-GLES3.functional.shaders.derivat"
#define VkglTestCase_017570_2 "e.dfdx.texture.float_nicest.float_lowp"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017570, VkglTestCase_017570_1, VkglTestCase_017570_2);

#define VkglTestCase_017571_1 "dEQP-GLES3.functional.shaders.derivate."
#define VkglTestCase_017571_2 "dfdx.texture.float_nicest.float_mediump"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017571, VkglTestCase_017571_1, VkglTestCase_017571_2);

#define VkglTestCase_017572_1 "dEQP-GLES3.functional.shaders.derivate"
#define VkglTestCase_017572_2 ".dfdx.texture.float_nicest.float_highp"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017572, VkglTestCase_017572_1, VkglTestCase_017572_2);

#define VkglTestCase_017573_1 "dEQP-GLES3.functional.shaders.derivat"
#define VkglTestCase_017573_2 "e.dfdx.texture.float_nicest.vec2_lowp"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017573, VkglTestCase_017573_1, VkglTestCase_017573_2);

#define VkglTestCase_017574_1 "dEQP-GLES3.functional.shaders.derivate"
#define VkglTestCase_017574_2 ".dfdx.texture.float_nicest.vec2_mediump"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017574, VkglTestCase_017574_1, VkglTestCase_017574_2);

#define VkglTestCase_017575_1 "dEQP-GLES3.functional.shaders.derivat"
#define VkglTestCase_017575_2 "e.dfdx.texture.float_nicest.vec2_highp"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017575, VkglTestCase_017575_1, VkglTestCase_017575_2);

#define VkglTestCase_017576_1 "dEQP-GLES3.functional.shaders.derivat"
#define VkglTestCase_017576_2 "e.dfdx.texture.float_nicest.vec3_lowp"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017576, VkglTestCase_017576_1, VkglTestCase_017576_2);

#define VkglTestCase_017577_1 "dEQP-GLES3.functional.shaders.derivate"
#define VkglTestCase_017577_2 ".dfdx.texture.float_nicest.vec3_mediump"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017577, VkglTestCase_017577_1, VkglTestCase_017577_2);

#define VkglTestCase_017578_1 "dEQP-GLES3.functional.shaders.derivat"
#define VkglTestCase_017578_2 "e.dfdx.texture.float_nicest.vec3_highp"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017578, VkglTestCase_017578_1, VkglTestCase_017578_2);

#define VkglTestCase_017579_1 "dEQP-GLES3.functional.shaders.derivat"
#define VkglTestCase_017579_2 "e.dfdx.texture.float_nicest.vec4_lowp"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017579, VkglTestCase_017579_1, VkglTestCase_017579_2);

#define VkglTestCase_017580_1 "dEQP-GLES3.functional.shaders.derivate"
#define VkglTestCase_017580_2 ".dfdx.texture.float_nicest.vec4_mediump"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017580, VkglTestCase_017580_1, VkglTestCase_017580_2);

#define VkglTestCase_017581_1 "dEQP-GLES3.functional.shaders.derivat"
#define VkglTestCase_017581_2 "e.dfdx.texture.float_nicest.vec4_highp"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017581, VkglTestCase_017581_1, VkglTestCase_017581_2);

#define VkglTestCase_017751_1 "dEQP-GLES3.functional.shaders.derivat"
#define VkglTestCase_017751_2 "e.dfdy.texture.float_nicest.float_lowp"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017751, VkglTestCase_017751_1, VkglTestCase_017751_2);

#define VkglTestCase_017752_1 "dEQP-GLES3.functional.shaders.derivate."
#define VkglTestCase_017752_2 "dfdy.texture.float_nicest.float_mediump"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017752, VkglTestCase_017752_1, VkglTestCase_017752_2);

#define VkglTestCase_017753_1 "dEQP-GLES3.functional.shaders.derivate"
#define VkglTestCase_017753_2 ".dfdy.texture.float_nicest.float_highp"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017753, VkglTestCase_017753_1, VkglTestCase_017753_2);

#define VkglTestCase_017754_1 "dEQP-GLES3.functional.shaders.derivat"
#define VkglTestCase_017754_2 "e.dfdy.texture.float_nicest.vec2_lowp"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017754, VkglTestCase_017754_1, VkglTestCase_017754_2);

#define VkglTestCase_017755_1 "dEQP-GLES3.functional.shaders.derivate"
#define VkglTestCase_017755_2 ".dfdy.texture.float_nicest.vec2_mediump"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017755, VkglTestCase_017755_1, VkglTestCase_017755_2);

#define VkglTestCase_017756_1 "dEQP-GLES3.functional.shaders.derivat"
#define VkglTestCase_017756_2 "e.dfdy.texture.float_nicest.vec2_highp"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017756, VkglTestCase_017756_1, VkglTestCase_017756_2);

#define VkglTestCase_017757_1 "dEQP-GLES3.functional.shaders.derivat"
#define VkglTestCase_017757_2 "e.dfdy.texture.float_nicest.vec3_lowp"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017757, VkglTestCase_017757_1, VkglTestCase_017757_2);

#define VkglTestCase_017758_1 "dEQP-GLES3.functional.shaders.derivate"
#define VkglTestCase_017758_2 ".dfdy.texture.float_nicest.vec3_mediump"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017758, VkglTestCase_017758_1, VkglTestCase_017758_2);

#define VkglTestCase_017759_1 "dEQP-GLES3.functional.shaders.derivat"
#define VkglTestCase_017759_2 "e.dfdy.texture.float_nicest.vec3_highp"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017759, VkglTestCase_017759_1, VkglTestCase_017759_2);

#define VkglTestCase_017760_1 "dEQP-GLES3.functional.shaders.derivat"
#define VkglTestCase_017760_2 "e.dfdy.texture.float_nicest.vec4_lowp"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017760, VkglTestCase_017760_1, VkglTestCase_017760_2);

#define VkglTestCase_017761_1 "dEQP-GLES3.functional.shaders.derivate"
#define VkglTestCase_017761_2 ".dfdy.texture.float_nicest.vec4_mediump"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017761, VkglTestCase_017761_1, VkglTestCase_017761_2);

#define VkglTestCase_017762_1 "dEQP-GLES3.functional.shaders.derivat"
#define VkglTestCase_017762_2 "e.dfdy.texture.float_nicest.vec4_highp"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017762, VkglTestCase_017762_1, VkglTestCase_017762_2);

#define VkglTestCase_017955_1 "dEQP-GLES3.functional.shaders.derivate"
#define VkglTestCase_017955_2 ".fwidth.texture.float_nicest.float_lowp"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017955, VkglTestCase_017955_1, VkglTestCase_017955_2);

#define VkglTestCase_017956_1 "dEQP-GLES3.functional.shaders.derivate.f"
#define VkglTestCase_017956_2 "width.texture.float_nicest.float_mediump"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017956, VkglTestCase_017956_1, VkglTestCase_017956_2);

#define VkglTestCase_017957_1 "dEQP-GLES3.functional.shaders.derivate."
#define VkglTestCase_017957_2 "fwidth.texture.float_nicest.float_highp"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017957, VkglTestCase_017957_1, VkglTestCase_017957_2);

#define VkglTestCase_017958_1 "dEQP-GLES3.functional.shaders.derivate"
#define VkglTestCase_017958_2 ".fwidth.texture.float_nicest.vec2_lowp"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017958, VkglTestCase_017958_1, VkglTestCase_017958_2);

#define VkglTestCase_017959_1 "dEQP-GLES3.functional.shaders.derivate."
#define VkglTestCase_017959_2 "fwidth.texture.float_nicest.vec2_mediump"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017959, VkglTestCase_017959_1, VkglTestCase_017959_2);

#define VkglTestCase_017960_1 "dEQP-GLES3.functional.shaders.derivate"
#define VkglTestCase_017960_2 ".fwidth.texture.float_nicest.vec2_highp"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017960, VkglTestCase_017960_1, VkglTestCase_017960_2);

#define VkglTestCase_017961_1 "dEQP-GLES3.functional.shaders.derivate"
#define VkglTestCase_017961_2 ".fwidth.texture.float_nicest.vec3_lowp"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017961, VkglTestCase_017961_1, VkglTestCase_017961_2);

#define VkglTestCase_017962_1 "dEQP-GLES3.functional.shaders.derivate."
#define VkglTestCase_017962_2 "fwidth.texture.float_nicest.vec3_mediump"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017962, VkglTestCase_017962_1, VkglTestCase_017962_2);

#define VkglTestCase_017963_1 "dEQP-GLES3.functional.shaders.derivate"
#define VkglTestCase_017963_2 ".fwidth.texture.float_nicest.vec3_highp"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017963, VkglTestCase_017963_1, VkglTestCase_017963_2);

#define VkglTestCase_017964_1 "dEQP-GLES3.functional.shaders.derivate"
#define VkglTestCase_017964_2 ".fwidth.texture.float_nicest.vec4_lowp"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017964, VkglTestCase_017964_1, VkglTestCase_017964_2);

#define VkglTestCase_017965_1 "dEQP-GLES3.functional.shaders.derivate."
#define VkglTestCase_017965_2 "fwidth.texture.float_nicest.vec4_mediump"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017965, VkglTestCase_017965_1, VkglTestCase_017965_2);

#define VkglTestCase_017966_1 "dEQP-GLES3.functional.shaders.derivate"
#define VkglTestCase_017966_2 ".fwidth.texture.float_nicest.vec4_highp"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017966, VkglTestCase_017966_1, VkglTestCase_017966_2);
