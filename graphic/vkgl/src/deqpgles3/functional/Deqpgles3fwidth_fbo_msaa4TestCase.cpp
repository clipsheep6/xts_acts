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

#define VkglTestCase_017851_1 "dEQP-GLES3.functional.shaders.deri"
#define VkglTestCase_017851_2 "vate.fwidth.fbo_msaa4.float_mediump"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017851, VkglTestCase_017851_1, VkglTestCase_017851_2);

#define VkglTestCase_017852_1 "dEQP-GLES3.functional.shaders.der"
#define VkglTestCase_017852_2 "ivate.fwidth.fbo_msaa4.float_highp"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017852, VkglTestCase_017852_1, VkglTestCase_017852_2);

#define VkglTestCase_017853_1 "dEQP-GLES3.functional.shaders.deri"
#define VkglTestCase_017853_2 "vate.fwidth.fbo_msaa4.vec2_mediump"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017853, VkglTestCase_017853_1, VkglTestCase_017853_2);

#define VkglTestCase_017854_1 "dEQP-GLES3.functional.shaders.der"
#define VkglTestCase_017854_2 "ivate.fwidth.fbo_msaa4.vec2_highp"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017854, VkglTestCase_017854_1, VkglTestCase_017854_2);

#define VkglTestCase_017855_1 "dEQP-GLES3.functional.shaders.deri"
#define VkglTestCase_017855_2 "vate.fwidth.fbo_msaa4.vec3_mediump"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017855, VkglTestCase_017855_1, VkglTestCase_017855_2);

#define VkglTestCase_017856_1 "dEQP-GLES3.functional.shaders.der"
#define VkglTestCase_017856_2 "ivate.fwidth.fbo_msaa4.vec3_highp"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017856, VkglTestCase_017856_1, VkglTestCase_017856_2);

#define VkglTestCase_017857_1 "dEQP-GLES3.functional.shaders.deri"
#define VkglTestCase_017857_2 "vate.fwidth.fbo_msaa4.vec4_mediump"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017857, VkglTestCase_017857_1, VkglTestCase_017857_2);

#define VkglTestCase_017858_1 "dEQP-GLES3.functional.shaders.der"
#define VkglTestCase_017858_2 "ivate.fwidth.fbo_msaa4.vec4_highp"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017858, VkglTestCase_017858_1, VkglTestCase_017858_2);
