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

#define VkglTestCase_017819_1 "dEQP-GLES3.functional.shaders.deriva"
#define VkglTestCase_017819_2 "te.fwidth.uniform_loop.float_mediump"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017819, VkglTestCase_017819_1, VkglTestCase_017819_2);

#define VkglTestCase_017820_1 "dEQP-GLES3.functional.shaders.deriv"
#define VkglTestCase_017820_2 "ate.fwidth.uniform_loop.float_highp"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017820, VkglTestCase_017820_1, VkglTestCase_017820_2);

#define VkglTestCase_017821_1 "dEQP-GLES3.functional.shaders.deriv"
#define VkglTestCase_017821_2 "ate.fwidth.uniform_loop.vec2_mediump"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017821, VkglTestCase_017821_1, VkglTestCase_017821_2);

#define VkglTestCase_017822_1 "dEQP-GLES3.functional.shaders.deri"
#define VkglTestCase_017822_2 "vate.fwidth.uniform_loop.vec2_highp"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017822, VkglTestCase_017822_1, VkglTestCase_017822_2);

#define VkglTestCase_017823_1 "dEQP-GLES3.functional.shaders.deriv"
#define VkglTestCase_017823_2 "ate.fwidth.uniform_loop.vec3_mediump"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017823, VkglTestCase_017823_1, VkglTestCase_017823_2);

#define VkglTestCase_017824_1 "dEQP-GLES3.functional.shaders.deri"
#define VkglTestCase_017824_2 "vate.fwidth.uniform_loop.vec3_highp"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017824, VkglTestCase_017824_1, VkglTestCase_017824_2);

#define VkglTestCase_017825_1 "dEQP-GLES3.functional.shaders.deriv"
#define VkglTestCase_017825_2 "ate.fwidth.uniform_loop.vec4_mediump"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017825, VkglTestCase_017825_1, VkglTestCase_017825_2);

#define VkglTestCase_017826_1 "dEQP-GLES3.functional.shaders.deri"
#define VkglTestCase_017826_2 "vate.fwidth.uniform_loop.vec4_highp"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017826, VkglTestCase_017826_1, VkglTestCase_017826_2);
