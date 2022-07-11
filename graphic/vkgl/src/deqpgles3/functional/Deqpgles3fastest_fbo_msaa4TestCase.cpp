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

#define VkglTestCase_017509_1 "dEQP-GLES3.functional.shaders.derivat"
#define VkglTestCase_017509_2 "e.dfdx.fastest.fbo_msaa4.float_mediump"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017509, VkglTestCase_017509_1, VkglTestCase_017509_2);

#define VkglTestCase_017510_1 "dEQP-GLES3.functional.shaders.deriva"
#define VkglTestCase_017510_2 "te.dfdx.fastest.fbo_msaa4.float_highp"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017510, VkglTestCase_017510_1, VkglTestCase_017510_2);

#define VkglTestCase_017511_1 "dEQP-GLES3.functional.shaders.derivat"
#define VkglTestCase_017511_2 "e.dfdx.fastest.fbo_msaa4.vec2_mediump"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017511, VkglTestCase_017511_1, VkglTestCase_017511_2);

#define VkglTestCase_017512_1 "dEQP-GLES3.functional.shaders.deriva"
#define VkglTestCase_017512_2 "te.dfdx.fastest.fbo_msaa4.vec2_highp"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017512, VkglTestCase_017512_1, VkglTestCase_017512_2);

#define VkglTestCase_017513_1 "dEQP-GLES3.functional.shaders.derivat"
#define VkglTestCase_017513_2 "e.dfdx.fastest.fbo_msaa4.vec3_mediump"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017513, VkglTestCase_017513_1, VkglTestCase_017513_2);

#define VkglTestCase_017514_1 "dEQP-GLES3.functional.shaders.deriva"
#define VkglTestCase_017514_2 "te.dfdx.fastest.fbo_msaa4.vec3_highp"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017514, VkglTestCase_017514_1, VkglTestCase_017514_2);

#define VkglTestCase_017515_1 "dEQP-GLES3.functional.shaders.derivat"
#define VkglTestCase_017515_2 "e.dfdx.fastest.fbo_msaa4.vec4_mediump"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017515, VkglTestCase_017515_1, VkglTestCase_017515_2);

#define VkglTestCase_017516_1 "dEQP-GLES3.functional.shaders.deriva"
#define VkglTestCase_017516_2 "te.dfdx.fastest.fbo_msaa4.vec4_highp"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017516, VkglTestCase_017516_1, VkglTestCase_017516_2);

#define VkglTestCase_017684_1 "dEQP-GLES3.functional.shaders.derivat"
#define VkglTestCase_017684_2 "e.dfdy.fastest.fbo_msaa4.float_mediump"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017684, VkglTestCase_017684_1, VkglTestCase_017684_2);

#define VkglTestCase_017685_1 "dEQP-GLES3.functional.shaders.deriva"
#define VkglTestCase_017685_2 "te.dfdy.fastest.fbo_msaa4.float_highp"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017685, VkglTestCase_017685_1, VkglTestCase_017685_2);

#define VkglTestCase_017686_1 "dEQP-GLES3.functional.shaders.derivat"
#define VkglTestCase_017686_2 "e.dfdy.fastest.fbo_msaa4.vec2_mediump"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017686, VkglTestCase_017686_1, VkglTestCase_017686_2);

#define VkglTestCase_017687_1 "dEQP-GLES3.functional.shaders.deriva"
#define VkglTestCase_017687_2 "te.dfdy.fastest.fbo_msaa4.vec2_highp"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017687, VkglTestCase_017687_1, VkglTestCase_017687_2);

#define VkglTestCase_017688_1 "dEQP-GLES3.functional.shaders.derivat"
#define VkglTestCase_017688_2 "e.dfdy.fastest.fbo_msaa4.vec3_mediump"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017688, VkglTestCase_017688_1, VkglTestCase_017688_2);

#define VkglTestCase_017689_1 "dEQP-GLES3.functional.shaders.deriva"
#define VkglTestCase_017689_2 "te.dfdy.fastest.fbo_msaa4.vec3_highp"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017689, VkglTestCase_017689_1, VkglTestCase_017689_2);

#define VkglTestCase_017690_1 "dEQP-GLES3.functional.shaders.derivat"
#define VkglTestCase_017690_2 "e.dfdy.fastest.fbo_msaa4.vec4_mediump"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017690, VkglTestCase_017690_1, VkglTestCase_017690_2);

#define VkglTestCase_017691_1 "dEQP-GLES3.functional.shaders.deriva"
#define VkglTestCase_017691_2 "te.dfdy.fastest.fbo_msaa4.vec4_highp"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017691, VkglTestCase_017691_1, VkglTestCase_017691_2);

#define VkglTestCase_017879_1 "dEQP-GLES3.functional.shaders.derivate"
#define VkglTestCase_017879_2 ".fwidth.fastest.fbo_msaa4.float_mediump"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017879, VkglTestCase_017879_1, VkglTestCase_017879_2);

#define VkglTestCase_017880_1 "dEQP-GLES3.functional.shaders.derivat"
#define VkglTestCase_017880_2 "e.fwidth.fastest.fbo_msaa4.float_highp"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017880, VkglTestCase_017880_1, VkglTestCase_017880_2);

#define VkglTestCase_017881_1 "dEQP-GLES3.functional.shaders.derivate"
#define VkglTestCase_017881_2 ".fwidth.fastest.fbo_msaa4.vec2_mediump"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017881, VkglTestCase_017881_1, VkglTestCase_017881_2);

#define VkglTestCase_017882_1 "dEQP-GLES3.functional.shaders.derivat"
#define VkglTestCase_017882_2 "e.fwidth.fastest.fbo_msaa4.vec2_highp"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017882, VkglTestCase_017882_1, VkglTestCase_017882_2);

#define VkglTestCase_017883_1 "dEQP-GLES3.functional.shaders.derivate"
#define VkglTestCase_017883_2 ".fwidth.fastest.fbo_msaa4.vec3_mediump"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017883, VkglTestCase_017883_1, VkglTestCase_017883_2);

#define VkglTestCase_017884_1 "dEQP-GLES3.functional.shaders.derivat"
#define VkglTestCase_017884_2 "e.fwidth.fastest.fbo_msaa4.vec3_highp"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017884, VkglTestCase_017884_1, VkglTestCase_017884_2);

#define VkglTestCase_017885_1 "dEQP-GLES3.functional.shaders.derivate"
#define VkglTestCase_017885_2 ".fwidth.fastest.fbo_msaa4.vec4_mediump"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017885, VkglTestCase_017885_1, VkglTestCase_017885_2);

#define VkglTestCase_017886_1 "dEQP-GLES3.functional.shaders.derivat"
#define VkglTestCase_017886_2 "e.fwidth.fastest.fbo_msaa4.vec4_highp"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017886, VkglTestCase_017886_1, VkglTestCase_017886_2);
