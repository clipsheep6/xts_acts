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

#define VkglTestCase_017767_1 "dEQP-GLES3.functional.shaders.d"
#define VkglTestCase_017767_2 "erivate.fwidth.linear.float_lowp"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017767, VkglTestCase_017767_1, VkglTestCase_017767_2);

#define VkglTestCase_017768_1 "dEQP-GLES3.functional.shaders.der"
#define VkglTestCase_017768_2 "ivate.fwidth.linear.float_mediump"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017768, VkglTestCase_017768_1, VkglTestCase_017768_2);

#define VkglTestCase_017769_1 "dEQP-GLES3.functional.shaders.de"
#define VkglTestCase_017769_2 "rivate.fwidth.linear.float_highp"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017769, VkglTestCase_017769_1, VkglTestCase_017769_2);

#define VkglTestCase_017770_1 "dEQP-GLES3.functional.shaders.d"
#define VkglTestCase_017770_2 "erivate.fwidth.linear.vec2_lowp"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017770, VkglTestCase_017770_1, VkglTestCase_017770_2);

#define VkglTestCase_017771_1 "dEQP-GLES3.functional.shaders.de"
#define VkglTestCase_017771_2 "rivate.fwidth.linear.vec2_mediump"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017771, VkglTestCase_017771_1, VkglTestCase_017771_2);

#define VkglTestCase_017772_1 "dEQP-GLES3.functional.shaders.d"
#define VkglTestCase_017772_2 "erivate.fwidth.linear.vec2_highp"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017772, VkglTestCase_017772_1, VkglTestCase_017772_2);

#define VkglTestCase_017773_1 "dEQP-GLES3.functional.shaders.d"
#define VkglTestCase_017773_2 "erivate.fwidth.linear.vec3_lowp"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017773, VkglTestCase_017773_1, VkglTestCase_017773_2);

#define VkglTestCase_017774_1 "dEQP-GLES3.functional.shaders.de"
#define VkglTestCase_017774_2 "rivate.fwidth.linear.vec3_mediump"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017774, VkglTestCase_017774_1, VkglTestCase_017774_2);

#define VkglTestCase_017775_1 "dEQP-GLES3.functional.shaders.d"
#define VkglTestCase_017775_2 "erivate.fwidth.linear.vec3_highp"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017775, VkglTestCase_017775_1, VkglTestCase_017775_2);

#define VkglTestCase_017776_1 "dEQP-GLES3.functional.shaders.d"
#define VkglTestCase_017776_2 "erivate.fwidth.linear.vec4_lowp"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017776, VkglTestCase_017776_1, VkglTestCase_017776_2);

#define VkglTestCase_017777_1 "dEQP-GLES3.functional.shaders.de"
#define VkglTestCase_017777_2 "rivate.fwidth.linear.vec4_mediump"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017777, VkglTestCase_017777_1, VkglTestCase_017777_2);

#define VkglTestCase_017778_1 "dEQP-GLES3.functional.shaders.d"
#define VkglTestCase_017778_2 "erivate.fwidth.linear.vec4_highp"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017778, VkglTestCase_017778_1, VkglTestCase_017778_2);
