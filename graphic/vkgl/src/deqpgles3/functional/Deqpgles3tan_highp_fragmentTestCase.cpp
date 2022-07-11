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

#define VkglTestCase_018571_1 "dEQP-GLES3.functional.shaders.builtin_fun"
#define VkglTestCase_018571_2 "ctions.precision.tan.highp_fragment.scalar"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018571, VkglTestCase_018571_1, VkglTestCase_018571_2);

#define VkglTestCase_018572_1 "dEQP-GLES3.functional.shaders.builtin_fu"
#define VkglTestCase_018572_2 "nctions.precision.tan.highp_fragment.vec2"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018572, VkglTestCase_018572_1, VkglTestCase_018572_2);

#define VkglTestCase_018573_1 "dEQP-GLES3.functional.shaders.builtin_fu"
#define VkglTestCase_018573_2 "nctions.precision.tan.highp_fragment.vec3"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018573, VkglTestCase_018573_1, VkglTestCase_018573_2);

#define VkglTestCase_018574_1 "dEQP-GLES3.functional.shaders.builtin_fu"
#define VkglTestCase_018574_2 "nctions.precision.tan.highp_fragment.vec4"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018574, VkglTestCase_018574_1, VkglTestCase_018574_2);
