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

#define VkglTestCase_017550_1 "dEQP-GLES3.functional.shaders.deriv"
#define VkglTestCase_017550_2 "ate.dfdx.texture.msaa4.float_mediump"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017550, VkglTestCase_017550_1, VkglTestCase_017550_2);

#define VkglTestCase_017551_1 "dEQP-GLES3.functional.shaders.deri"
#define VkglTestCase_017551_2 "vate.dfdx.texture.msaa4.float_highp"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017551, VkglTestCase_017551_1, VkglTestCase_017551_2);

#define VkglTestCase_017552_1 "dEQP-GLES3.functional.shaders.deriv"
#define VkglTestCase_017552_2 "ate.dfdx.texture.msaa4.vec2_mediump"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017552, VkglTestCase_017552_1, VkglTestCase_017552_2);

#define VkglTestCase_017553_1 "dEQP-GLES3.functional.shaders.deri"
#define VkglTestCase_017553_2 "vate.dfdx.texture.msaa4.vec2_highp"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017553, VkglTestCase_017553_1, VkglTestCase_017553_2);

#define VkglTestCase_017554_1 "dEQP-GLES3.functional.shaders.deriv"
#define VkglTestCase_017554_2 "ate.dfdx.texture.msaa4.vec3_mediump"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017554, VkglTestCase_017554_1, VkglTestCase_017554_2);

#define VkglTestCase_017555_1 "dEQP-GLES3.functional.shaders.deri"
#define VkglTestCase_017555_2 "vate.dfdx.texture.msaa4.vec3_highp"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017555, VkglTestCase_017555_1, VkglTestCase_017555_2);

#define VkglTestCase_017556_1 "dEQP-GLES3.functional.shaders.deriv"
#define VkglTestCase_017556_2 "ate.dfdx.texture.msaa4.vec4_mediump"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017556, VkglTestCase_017556_1, VkglTestCase_017556_2);

#define VkglTestCase_017557_1 "dEQP-GLES3.functional.shaders.deri"
#define VkglTestCase_017557_2 "vate.dfdx.texture.msaa4.vec4_highp"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017557, VkglTestCase_017557_1, VkglTestCase_017557_2);

#define VkglTestCase_017731_1 "dEQP-GLES3.functional.shaders.deriv"
#define VkglTestCase_017731_2 "ate.dfdy.texture.msaa4.float_mediump"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017731, VkglTestCase_017731_1, VkglTestCase_017731_2);

#define VkglTestCase_017732_1 "dEQP-GLES3.functional.shaders.deri"
#define VkglTestCase_017732_2 "vate.dfdy.texture.msaa4.float_highp"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017732, VkglTestCase_017732_1, VkglTestCase_017732_2);

#define VkglTestCase_017733_1 "dEQP-GLES3.functional.shaders.deriv"
#define VkglTestCase_017733_2 "ate.dfdy.texture.msaa4.vec2_mediump"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017733, VkglTestCase_017733_1, VkglTestCase_017733_2);

#define VkglTestCase_017734_1 "dEQP-GLES3.functional.shaders.deri"
#define VkglTestCase_017734_2 "vate.dfdy.texture.msaa4.vec2_highp"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017734, VkglTestCase_017734_1, VkglTestCase_017734_2);

#define VkglTestCase_017735_1 "dEQP-GLES3.functional.shaders.deriv"
#define VkglTestCase_017735_2 "ate.dfdy.texture.msaa4.vec3_mediump"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017735, VkglTestCase_017735_1, VkglTestCase_017735_2);

#define VkglTestCase_017736_1 "dEQP-GLES3.functional.shaders.deri"
#define VkglTestCase_017736_2 "vate.dfdy.texture.msaa4.vec3_highp"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017736, VkglTestCase_017736_1, VkglTestCase_017736_2);

#define VkglTestCase_017737_1 "dEQP-GLES3.functional.shaders.deriv"
#define VkglTestCase_017737_2 "ate.dfdy.texture.msaa4.vec4_mediump"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017737, VkglTestCase_017737_1, VkglTestCase_017737_2);

#define VkglTestCase_017738_1 "dEQP-GLES3.functional.shaders.deri"
#define VkglTestCase_017738_2 "vate.dfdy.texture.msaa4.vec4_highp"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017738, VkglTestCase_017738_1, VkglTestCase_017738_2);

#define VkglTestCase_017935_1 "dEQP-GLES3.functional.shaders.deriva"
#define VkglTestCase_017935_2 "te.fwidth.texture.msaa4.float_mediump"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017935, VkglTestCase_017935_1, VkglTestCase_017935_2);

#define VkglTestCase_017936_1 "dEQP-GLES3.functional.shaders.deriv"
#define VkglTestCase_017936_2 "ate.fwidth.texture.msaa4.float_highp"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017936, VkglTestCase_017936_1, VkglTestCase_017936_2);

#define VkglTestCase_017937_1 "dEQP-GLES3.functional.shaders.deriva"
#define VkglTestCase_017937_2 "te.fwidth.texture.msaa4.vec2_mediump"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017937, VkglTestCase_017937_1, VkglTestCase_017937_2);

#define VkglTestCase_017938_1 "dEQP-GLES3.functional.shaders.deriv"
#define VkglTestCase_017938_2 "ate.fwidth.texture.msaa4.vec2_highp"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017938, VkglTestCase_017938_1, VkglTestCase_017938_2);

#define VkglTestCase_017939_1 "dEQP-GLES3.functional.shaders.deriva"
#define VkglTestCase_017939_2 "te.fwidth.texture.msaa4.vec3_mediump"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017939, VkglTestCase_017939_1, VkglTestCase_017939_2);

#define VkglTestCase_017940_1 "dEQP-GLES3.functional.shaders.deriv"
#define VkglTestCase_017940_2 "ate.fwidth.texture.msaa4.vec3_highp"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017940, VkglTestCase_017940_1, VkglTestCase_017940_2);

#define VkglTestCase_017941_1 "dEQP-GLES3.functional.shaders.deriva"
#define VkglTestCase_017941_2 "te.fwidth.texture.msaa4.vec4_mediump"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017941, VkglTestCase_017941_1, VkglTestCase_017941_2);

#define VkglTestCase_017942_1 "dEQP-GLES3.functional.shaders.deriv"
#define VkglTestCase_017942_2 "ate.fwidth.texture.msaa4.vec4_highp"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017942, VkglTestCase_017942_1, VkglTestCase_017942_2);
