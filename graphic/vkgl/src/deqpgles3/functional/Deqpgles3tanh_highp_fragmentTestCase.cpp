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
#include "../ActsDeqpgles30019TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_018703_1 "dEQP-GLES3.functional.shaders.builtin_func"
#define VkglTestCase_018703_2 "tions.precision.tanh.highp_fragment.scalar"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018703, VkglTestCase_018703_1, VkglTestCase_018703_2);

#define VkglTestCase_018704_1 "dEQP-GLES3.functional.shaders.builtin_fun"
#define VkglTestCase_018704_2 "ctions.precision.tanh.highp_fragment.vec2"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018704, VkglTestCase_018704_1, VkglTestCase_018704_2);

#define VkglTestCase_018705_1 "dEQP-GLES3.functional.shaders.builtin_fun"
#define VkglTestCase_018705_2 "ctions.precision.tanh.highp_fragment.vec3"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018705, VkglTestCase_018705_1, VkglTestCase_018705_2);

#define VkglTestCase_018706_1 "dEQP-GLES3.functional.shaders.builtin_fun"
#define VkglTestCase_018706_2 "ctions.precision.tanh.highp_fragment.vec4"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018706, VkglTestCase_018706_1, VkglTestCase_018706_2);
