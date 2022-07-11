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

#define VkglTestCase_017517_1 "dEQP-GLES3.functional.shaders.deriva"
#define VkglTestCase_017517_2 "te.dfdx.fastest.fbo_float.float_lowp"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017517, VkglTestCase_017517_1, VkglTestCase_017517_2);

#define VkglTestCase_017518_1 "dEQP-GLES3.functional.shaders.derivat"
#define VkglTestCase_017518_2 "e.dfdx.fastest.fbo_float.float_mediump"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017518, VkglTestCase_017518_1, VkglTestCase_017518_2);

#define VkglTestCase_017519_1 "dEQP-GLES3.functional.shaders.derivat"
#define VkglTestCase_017519_2 "e.dfdx.fastest.fbo_float.vec2_mediump"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017519, VkglTestCase_017519_1, VkglTestCase_017519_2);

#define VkglTestCase_017520_1 "dEQP-GLES3.functional.shaders.deriv"
#define VkglTestCase_017520_2 "ate.dfdx.fastest.fbo_float.vec3_lowp"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017520, VkglTestCase_017520_1, VkglTestCase_017520_2);

#define VkglTestCase_017521_1 "dEQP-GLES3.functional.shaders.derivat"
#define VkglTestCase_017521_2 "e.dfdx.fastest.fbo_float.vec3_mediump"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017521, VkglTestCase_017521_1, VkglTestCase_017521_2);

#define VkglTestCase_017692_1 "dEQP-GLES3.functional.shaders.deriva"
#define VkglTestCase_017692_2 "te.dfdy.fastest.fbo_float.float_lowp"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017692, VkglTestCase_017692_1, VkglTestCase_017692_2);

#define VkglTestCase_017693_1 "dEQP-GLES3.functional.shaders.derivat"
#define VkglTestCase_017693_2 "e.dfdy.fastest.fbo_float.float_mediump"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017693, VkglTestCase_017693_1, VkglTestCase_017693_2);

#define VkglTestCase_017694_1 "dEQP-GLES3.functional.shaders.deriv"
#define VkglTestCase_017694_2 "ate.dfdy.fastest.fbo_float.vec2_lowp"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017694, VkglTestCase_017694_1, VkglTestCase_017694_2);

#define VkglTestCase_017695_1 "dEQP-GLES3.functional.shaders.derivat"
#define VkglTestCase_017695_2 "e.dfdy.fastest.fbo_float.vec2_mediump"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017695, VkglTestCase_017695_1, VkglTestCase_017695_2);

#define VkglTestCase_017696_1 "dEQP-GLES3.functional.shaders.deriv"
#define VkglTestCase_017696_2 "ate.dfdy.fastest.fbo_float.vec3_lowp"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017696, VkglTestCase_017696_1, VkglTestCase_017696_2);

#define VkglTestCase_017697_1 "dEQP-GLES3.functional.shaders.derivat"
#define VkglTestCase_017697_2 "e.dfdy.fastest.fbo_float.vec3_mediump"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017697, VkglTestCase_017697_1, VkglTestCase_017697_2);

#define VkglTestCase_017698_1 "dEQP-GLES3.functional.shaders.deriv"
#define VkglTestCase_017698_2 "ate.dfdy.fastest.fbo_float.vec4_lowp"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017698, VkglTestCase_017698_1, VkglTestCase_017698_2);

#define VkglTestCase_017699_1 "dEQP-GLES3.functional.shaders.derivat"
#define VkglTestCase_017699_2 "e.dfdy.fastest.fbo_float.vec4_mediump"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017699, VkglTestCase_017699_1, VkglTestCase_017699_2);

#define VkglTestCase_017887_1 "dEQP-GLES3.functional.shaders.derivat"
#define VkglTestCase_017887_2 "e.fwidth.fastest.fbo_float.float_lowp"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017887, VkglTestCase_017887_1, VkglTestCase_017887_2);

#define VkglTestCase_017888_1 "dEQP-GLES3.functional.shaders.derivate"
#define VkglTestCase_017888_2 ".fwidth.fastest.fbo_float.float_mediump"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017888, VkglTestCase_017888_1, VkglTestCase_017888_2);

#define VkglTestCase_017889_1 "dEQP-GLES3.functional.shaders.derivat"
#define VkglTestCase_017889_2 "e.fwidth.fastest.fbo_float.float_highp"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017889, VkglTestCase_017889_1, VkglTestCase_017889_2);

#define VkglTestCase_017890_1 "dEQP-GLES3.functional.shaders.deriva"
#define VkglTestCase_017890_2 "te.fwidth.fastest.fbo_float.vec2_lowp"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017890, VkglTestCase_017890_1, VkglTestCase_017890_2);

#define VkglTestCase_017891_1 "dEQP-GLES3.functional.shaders.derivate"
#define VkglTestCase_017891_2 ".fwidth.fastest.fbo_float.vec2_mediump"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017891, VkglTestCase_017891_1, VkglTestCase_017891_2);

#define VkglTestCase_017892_1 "dEQP-GLES3.functional.shaders.derivat"
#define VkglTestCase_017892_2 "e.fwidth.fastest.fbo_float.vec2_highp"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017892, VkglTestCase_017892_1, VkglTestCase_017892_2);

#define VkglTestCase_017893_1 "dEQP-GLES3.functional.shaders.deriva"
#define VkglTestCase_017893_2 "te.fwidth.fastest.fbo_float.vec3_lowp"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017893, VkglTestCase_017893_1, VkglTestCase_017893_2);

#define VkglTestCase_017894_1 "dEQP-GLES3.functional.shaders.derivate"
#define VkglTestCase_017894_2 ".fwidth.fastest.fbo_float.vec3_mediump"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017894, VkglTestCase_017894_1, VkglTestCase_017894_2);

#define VkglTestCase_017895_1 "dEQP-GLES3.functional.shaders.derivat"
#define VkglTestCase_017895_2 "e.fwidth.fastest.fbo_float.vec3_highp"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017895, VkglTestCase_017895_1, VkglTestCase_017895_2);

#define VkglTestCase_017896_1 "dEQP-GLES3.functional.shaders.deriva"
#define VkglTestCase_017896_2 "te.fwidth.fastest.fbo_float.vec4_lowp"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017896, VkglTestCase_017896_1, VkglTestCase_017896_2);

#define VkglTestCase_017897_1 "dEQP-GLES3.functional.shaders.derivate"
#define VkglTestCase_017897_2 ".fwidth.fastest.fbo_float.vec4_mediump"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017897, VkglTestCase_017897_1, VkglTestCase_017897_2);

#define VkglTestCase_017898_1 "dEQP-GLES3.functional.shaders.derivat"
#define VkglTestCase_017898_2 "e.fwidth.fastest.fbo_float.vec4_highp"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017898, VkglTestCase_017898_1, VkglTestCase_017898_2);
