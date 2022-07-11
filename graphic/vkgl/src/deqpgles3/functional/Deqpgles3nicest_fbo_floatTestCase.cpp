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

#define VkglTestCase_017537_1 "dEQP-GLES3.functional.shaders.deriv"
#define VkglTestCase_017537_2 "ate.dfdx.nicest.fbo_float.float_lowp"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017537, VkglTestCase_017537_1, VkglTestCase_017537_2);

#define VkglTestCase_017538_1 "dEQP-GLES3.functional.shaders.derivat"
#define VkglTestCase_017538_2 "e.dfdx.nicest.fbo_float.float_mediump"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017538, VkglTestCase_017538_1, VkglTestCase_017538_2);

#define VkglTestCase_017539_1 "dEQP-GLES3.functional.shaders.deriva"
#define VkglTestCase_017539_2 "te.dfdx.nicest.fbo_float.vec2_mediump"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017539, VkglTestCase_017539_1, VkglTestCase_017539_2);

#define VkglTestCase_017540_1 "dEQP-GLES3.functional.shaders.deriv"
#define VkglTestCase_017540_2 "ate.dfdx.nicest.fbo_float.vec3_lowp"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017540, VkglTestCase_017540_1, VkglTestCase_017540_2);

#define VkglTestCase_017541_1 "dEQP-GLES3.functional.shaders.deriva"
#define VkglTestCase_017541_2 "te.dfdx.nicest.fbo_float.vec3_mediump"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017541, VkglTestCase_017541_1, VkglTestCase_017541_2);

#define VkglTestCase_017715_1 "dEQP-GLES3.functional.shaders.deriv"
#define VkglTestCase_017715_2 "ate.dfdy.nicest.fbo_float.float_lowp"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017715, VkglTestCase_017715_1, VkglTestCase_017715_2);

#define VkglTestCase_017716_1 "dEQP-GLES3.functional.shaders.derivat"
#define VkglTestCase_017716_2 "e.dfdy.nicest.fbo_float.float_mediump"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017716, VkglTestCase_017716_1, VkglTestCase_017716_2);

#define VkglTestCase_017717_1 "dEQP-GLES3.functional.shaders.deriv"
#define VkglTestCase_017717_2 "ate.dfdy.nicest.fbo_float.vec2_lowp"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017717, VkglTestCase_017717_1, VkglTestCase_017717_2);

#define VkglTestCase_017718_1 "dEQP-GLES3.functional.shaders.deriva"
#define VkglTestCase_017718_2 "te.dfdy.nicest.fbo_float.vec2_mediump"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017718, VkglTestCase_017718_1, VkglTestCase_017718_2);

#define VkglTestCase_017719_1 "dEQP-GLES3.functional.shaders.deriv"
#define VkglTestCase_017719_2 "ate.dfdy.nicest.fbo_float.vec3_lowp"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017719, VkglTestCase_017719_1, VkglTestCase_017719_2);

#define VkglTestCase_017720_1 "dEQP-GLES3.functional.shaders.deriva"
#define VkglTestCase_017720_2 "te.dfdy.nicest.fbo_float.vec3_mediump"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017720, VkglTestCase_017720_1, VkglTestCase_017720_2);

#define VkglTestCase_017721_1 "dEQP-GLES3.functional.shaders.deriv"
#define VkglTestCase_017721_2 "ate.dfdy.nicest.fbo_float.vec4_lowp"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017721, VkglTestCase_017721_1, VkglTestCase_017721_2);

#define VkglTestCase_017722_1 "dEQP-GLES3.functional.shaders.deriva"
#define VkglTestCase_017722_2 "te.dfdy.nicest.fbo_float.vec4_mediump"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017722, VkglTestCase_017722_1, VkglTestCase_017722_2);

#define VkglTestCase_017915_1 "dEQP-GLES3.functional.shaders.deriva"
#define VkglTestCase_017915_2 "te.fwidth.nicest.fbo_float.float_lowp"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017915, VkglTestCase_017915_1, VkglTestCase_017915_2);

#define VkglTestCase_017916_1 "dEQP-GLES3.functional.shaders.derivate"
#define VkglTestCase_017916_2 ".fwidth.nicest.fbo_float.float_mediump"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017916, VkglTestCase_017916_1, VkglTestCase_017916_2);

#define VkglTestCase_017917_1 "dEQP-GLES3.functional.shaders.derivat"
#define VkglTestCase_017917_2 "e.fwidth.nicest.fbo_float.float_highp"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017917, VkglTestCase_017917_1, VkglTestCase_017917_2);

#define VkglTestCase_017918_1 "dEQP-GLES3.functional.shaders.deriva"
#define VkglTestCase_017918_2 "te.fwidth.nicest.fbo_float.vec2_lowp"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017918, VkglTestCase_017918_1, VkglTestCase_017918_2);

#define VkglTestCase_017919_1 "dEQP-GLES3.functional.shaders.derivat"
#define VkglTestCase_017919_2 "e.fwidth.nicest.fbo_float.vec2_mediump"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017919, VkglTestCase_017919_1, VkglTestCase_017919_2);

#define VkglTestCase_017920_1 "dEQP-GLES3.functional.shaders.deriva"
#define VkglTestCase_017920_2 "te.fwidth.nicest.fbo_float.vec2_highp"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017920, VkglTestCase_017920_1, VkglTestCase_017920_2);

#define VkglTestCase_017921_1 "dEQP-GLES3.functional.shaders.deriva"
#define VkglTestCase_017921_2 "te.fwidth.nicest.fbo_float.vec3_lowp"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017921, VkglTestCase_017921_1, VkglTestCase_017921_2);

#define VkglTestCase_017922_1 "dEQP-GLES3.functional.shaders.derivat"
#define VkglTestCase_017922_2 "e.fwidth.nicest.fbo_float.vec3_mediump"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017922, VkglTestCase_017922_1, VkglTestCase_017922_2);

#define VkglTestCase_017923_1 "dEQP-GLES3.functional.shaders.deriva"
#define VkglTestCase_017923_2 "te.fwidth.nicest.fbo_float.vec3_highp"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017923, VkglTestCase_017923_1, VkglTestCase_017923_2);

#define VkglTestCase_017924_1 "dEQP-GLES3.functional.shaders.deriva"
#define VkglTestCase_017924_2 "te.fwidth.nicest.fbo_float.vec4_lowp"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017924, VkglTestCase_017924_1, VkglTestCase_017924_2);

#define VkglTestCase_017925_1 "dEQP-GLES3.functional.shaders.derivat"
#define VkglTestCase_017925_2 "e.fwidth.nicest.fbo_float.vec4_mediump"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017925, VkglTestCase_017925_1, VkglTestCase_017925_2);

#define VkglTestCase_017926_1 "dEQP-GLES3.functional.shaders.deriva"
#define VkglTestCase_017926_2 "te.fwidth.nicest.fbo_float.vec4_highp"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017926, VkglTestCase_017926_1, VkglTestCase_017926_2);
