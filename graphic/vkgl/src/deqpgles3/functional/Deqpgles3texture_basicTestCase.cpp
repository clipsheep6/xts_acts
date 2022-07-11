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

#define VkglTestCase_017542_1 "dEQP-GLES3.functional.shaders.deriv"
#define VkglTestCase_017542_2 "ate.dfdx.texture.basic.float_mediump"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017542, VkglTestCase_017542_1, VkglTestCase_017542_2);

#define VkglTestCase_017543_1 "dEQP-GLES3.functional.shaders.deri"
#define VkglTestCase_017543_2 "vate.dfdx.texture.basic.float_highp"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017543, VkglTestCase_017543_1, VkglTestCase_017543_2);

#define VkglTestCase_017544_1 "dEQP-GLES3.functional.shaders.deriv"
#define VkglTestCase_017544_2 "ate.dfdx.texture.basic.vec2_mediump"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017544, VkglTestCase_017544_1, VkglTestCase_017544_2);

#define VkglTestCase_017545_1 "dEQP-GLES3.functional.shaders.deri"
#define VkglTestCase_017545_2 "vate.dfdx.texture.basic.vec2_highp"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017545, VkglTestCase_017545_1, VkglTestCase_017545_2);

#define VkglTestCase_017546_1 "dEQP-GLES3.functional.shaders.deriv"
#define VkglTestCase_017546_2 "ate.dfdx.texture.basic.vec3_mediump"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017546, VkglTestCase_017546_1, VkglTestCase_017546_2);

#define VkglTestCase_017547_1 "dEQP-GLES3.functional.shaders.deri"
#define VkglTestCase_017547_2 "vate.dfdx.texture.basic.vec3_highp"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017547, VkglTestCase_017547_1, VkglTestCase_017547_2);

#define VkglTestCase_017548_1 "dEQP-GLES3.functional.shaders.deriv"
#define VkglTestCase_017548_2 "ate.dfdx.texture.basic.vec4_mediump"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017548, VkglTestCase_017548_1, VkglTestCase_017548_2);

#define VkglTestCase_017549_1 "dEQP-GLES3.functional.shaders.deri"
#define VkglTestCase_017549_2 "vate.dfdx.texture.basic.vec4_highp"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017549, VkglTestCase_017549_1, VkglTestCase_017549_2);

#define VkglTestCase_017723_1 "dEQP-GLES3.functional.shaders.deriv"
#define VkglTestCase_017723_2 "ate.dfdy.texture.basic.float_mediump"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017723, VkglTestCase_017723_1, VkglTestCase_017723_2);

#define VkglTestCase_017724_1 "dEQP-GLES3.functional.shaders.deri"
#define VkglTestCase_017724_2 "vate.dfdy.texture.basic.float_highp"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017724, VkglTestCase_017724_1, VkglTestCase_017724_2);

#define VkglTestCase_017725_1 "dEQP-GLES3.functional.shaders.deriv"
#define VkglTestCase_017725_2 "ate.dfdy.texture.basic.vec2_mediump"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017725, VkglTestCase_017725_1, VkglTestCase_017725_2);

#define VkglTestCase_017726_1 "dEQP-GLES3.functional.shaders.deri"
#define VkglTestCase_017726_2 "vate.dfdy.texture.basic.vec2_highp"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017726, VkglTestCase_017726_1, VkglTestCase_017726_2);

#define VkglTestCase_017727_1 "dEQP-GLES3.functional.shaders.deriv"
#define VkglTestCase_017727_2 "ate.dfdy.texture.basic.vec3_mediump"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017727, VkglTestCase_017727_1, VkglTestCase_017727_2);

#define VkglTestCase_017728_1 "dEQP-GLES3.functional.shaders.deri"
#define VkglTestCase_017728_2 "vate.dfdy.texture.basic.vec3_highp"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017728, VkglTestCase_017728_1, VkglTestCase_017728_2);

#define VkglTestCase_017729_1 "dEQP-GLES3.functional.shaders.deriv"
#define VkglTestCase_017729_2 "ate.dfdy.texture.basic.vec4_mediump"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017729, VkglTestCase_017729_1, VkglTestCase_017729_2);

#define VkglTestCase_017730_1 "dEQP-GLES3.functional.shaders.deri"
#define VkglTestCase_017730_2 "vate.dfdy.texture.basic.vec4_highp"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017730, VkglTestCase_017730_1, VkglTestCase_017730_2);

#define VkglTestCase_017927_1 "dEQP-GLES3.functional.shaders.deriva"
#define VkglTestCase_017927_2 "te.fwidth.texture.basic.float_mediump"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017927, VkglTestCase_017927_1, VkglTestCase_017927_2);

#define VkglTestCase_017928_1 "dEQP-GLES3.functional.shaders.deriv"
#define VkglTestCase_017928_2 "ate.fwidth.texture.basic.float_highp"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017928, VkglTestCase_017928_1, VkglTestCase_017928_2);

#define VkglTestCase_017929_1 "dEQP-GLES3.functional.shaders.deriva"
#define VkglTestCase_017929_2 "te.fwidth.texture.basic.vec2_mediump"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017929, VkglTestCase_017929_1, VkglTestCase_017929_2);

#define VkglTestCase_017930_1 "dEQP-GLES3.functional.shaders.deriv"
#define VkglTestCase_017930_2 "ate.fwidth.texture.basic.vec2_highp"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017930, VkglTestCase_017930_1, VkglTestCase_017930_2);

#define VkglTestCase_017931_1 "dEQP-GLES3.functional.shaders.deriva"
#define VkglTestCase_017931_2 "te.fwidth.texture.basic.vec3_mediump"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017931, VkglTestCase_017931_1, VkglTestCase_017931_2);

#define VkglTestCase_017932_1 "dEQP-GLES3.functional.shaders.deriv"
#define VkglTestCase_017932_2 "ate.fwidth.texture.basic.vec3_highp"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017932, VkglTestCase_017932_1, VkglTestCase_017932_2);

#define VkglTestCase_017933_1 "dEQP-GLES3.functional.shaders.deriva"
#define VkglTestCase_017933_2 "te.fwidth.texture.basic.vec4_mediump"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017933, VkglTestCase_017933_1, VkglTestCase_017933_2);

#define VkglTestCase_017934_1 "dEQP-GLES3.functional.shaders.deriv"
#define VkglTestCase_017934_2 "ate.fwidth.texture.basic.vec4_highp"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017934, VkglTestCase_017934_1, VkglTestCase_017934_2);
