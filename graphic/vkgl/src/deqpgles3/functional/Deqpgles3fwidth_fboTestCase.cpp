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

#define VkglTestCase_017835_1 "dEQP-GLES3.functional.shaders.d"
#define VkglTestCase_017835_2 "erivate.fwidth.fbo.float_mediump"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017835, VkglTestCase_017835_1, VkglTestCase_017835_2);

#define VkglTestCase_017836_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_017836_2 "derivate.fwidth.fbo.float_highp"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017836, VkglTestCase_017836_1, VkglTestCase_017836_2);

#define VkglTestCase_017837_1 "dEQP-GLES3.functional.shaders.d"
#define VkglTestCase_017837_2 "erivate.fwidth.fbo.vec2_mediump"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017837, VkglTestCase_017837_1, VkglTestCase_017837_2);

#define VkglTestCase_017838_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_017838_2 "derivate.fwidth.fbo.vec2_highp"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017838, VkglTestCase_017838_1, VkglTestCase_017838_2);

#define VkglTestCase_017839_1 "dEQP-GLES3.functional.shaders.d"
#define VkglTestCase_017839_2 "erivate.fwidth.fbo.vec3_mediump"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017839, VkglTestCase_017839_1, VkglTestCase_017839_2);

#define VkglTestCase_017840_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_017840_2 "derivate.fwidth.fbo.vec3_highp"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017840, VkglTestCase_017840_1, VkglTestCase_017840_2);

#define VkglTestCase_017841_1 "dEQP-GLES3.functional.shaders.d"
#define VkglTestCase_017841_2 "erivate.fwidth.fbo.vec4_mediump"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017841, VkglTestCase_017841_1, VkglTestCase_017841_2);

#define VkglTestCase_017842_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_017842_2 "derivate.fwidth.fbo.vec4_highp"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017842, VkglTestCase_017842_1, VkglTestCase_017842_2);
