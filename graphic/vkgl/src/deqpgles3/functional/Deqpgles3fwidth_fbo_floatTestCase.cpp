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

#define VkglTestCase_017859_1 "dEQP-GLES3.functional.shaders.der"
#define VkglTestCase_017859_2 "ivate.fwidth.fbo_float.float_lowp"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017859, VkglTestCase_017859_1, VkglTestCase_017859_2);

#define VkglTestCase_017860_1 "dEQP-GLES3.functional.shaders.deri"
#define VkglTestCase_017860_2 "vate.fwidth.fbo_float.float_mediump"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017860, VkglTestCase_017860_1, VkglTestCase_017860_2);

#define VkglTestCase_017861_1 "dEQP-GLES3.functional.shaders.der"
#define VkglTestCase_017861_2 "ivate.fwidth.fbo_float.float_highp"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017861, VkglTestCase_017861_1, VkglTestCase_017861_2);

#define VkglTestCase_017862_1 "dEQP-GLES3.functional.shaders.de"
#define VkglTestCase_017862_2 "rivate.fwidth.fbo_float.vec2_lowp"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017862, VkglTestCase_017862_1, VkglTestCase_017862_2);

#define VkglTestCase_017863_1 "dEQP-GLES3.functional.shaders.deri"
#define VkglTestCase_017863_2 "vate.fwidth.fbo_float.vec2_mediump"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017863, VkglTestCase_017863_1, VkglTestCase_017863_2);

#define VkglTestCase_017864_1 "dEQP-GLES3.functional.shaders.der"
#define VkglTestCase_017864_2 "ivate.fwidth.fbo_float.vec2_highp"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017864, VkglTestCase_017864_1, VkglTestCase_017864_2);

#define VkglTestCase_017865_1 "dEQP-GLES3.functional.shaders.de"
#define VkglTestCase_017865_2 "rivate.fwidth.fbo_float.vec3_lowp"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017865, VkglTestCase_017865_1, VkglTestCase_017865_2);

#define VkglTestCase_017866_1 "dEQP-GLES3.functional.shaders.deri"
#define VkglTestCase_017866_2 "vate.fwidth.fbo_float.vec3_mediump"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017866, VkglTestCase_017866_1, VkglTestCase_017866_2);

#define VkglTestCase_017867_1 "dEQP-GLES3.functional.shaders.der"
#define VkglTestCase_017867_2 "ivate.fwidth.fbo_float.vec3_highp"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017867, VkglTestCase_017867_1, VkglTestCase_017867_2);

#define VkglTestCase_017868_1 "dEQP-GLES3.functional.shaders.de"
#define VkglTestCase_017868_2 "rivate.fwidth.fbo_float.vec4_lowp"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017868, VkglTestCase_017868_1, VkglTestCase_017868_2);

#define VkglTestCase_017869_1 "dEQP-GLES3.functional.shaders.deri"
#define VkglTestCase_017869_2 "vate.fwidth.fbo_float.vec4_mediump"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017869, VkglTestCase_017869_1, VkglTestCase_017869_2);

#define VkglTestCase_017870_1 "dEQP-GLES3.functional.shaders.der"
#define VkglTestCase_017870_2 "ivate.fwidth.fbo_float.vec4_highp"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017870, VkglTestCase_017870_1, VkglTestCase_017870_2);
