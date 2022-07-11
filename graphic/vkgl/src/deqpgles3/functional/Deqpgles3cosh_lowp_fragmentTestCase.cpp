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

#define VkglTestCase_018663_1 "dEQP-GLES3.functional.shaders.builtin_fun"
#define VkglTestCase_018663_2 "ctions.precision.cosh.lowp_fragment.scalar"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018663, VkglTestCase_018663_1, VkglTestCase_018663_2);

#define VkglTestCase_018664_1 "dEQP-GLES3.functional.shaders.builtin_fu"
#define VkglTestCase_018664_2 "nctions.precision.cosh.lowp_fragment.vec2"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018664, VkglTestCase_018664_1, VkglTestCase_018664_2);

#define VkglTestCase_018665_1 "dEQP-GLES3.functional.shaders.builtin_fu"
#define VkglTestCase_018665_2 "nctions.precision.cosh.lowp_fragment.vec3"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018665, VkglTestCase_018665_1, VkglTestCase_018665_2);

#define VkglTestCase_018666_1 "dEQP-GLES3.functional.shaders.builtin_fu"
#define VkglTestCase_018666_2 "nctions.precision.cosh.lowp_fragment.vec4"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018666, VkglTestCase_018666_1, VkglTestCase_018666_2);
