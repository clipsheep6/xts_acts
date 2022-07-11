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

#define VkglTestCase_018931_1 "dEQP-GLES3.functional.shaders.builtin_fun"
#define VkglTestCase_018931_2 "ctions.precision.abs.lowp_fragment.scalar"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018931, VkglTestCase_018931_1, VkglTestCase_018931_2);

#define VkglTestCase_018932_1 "dEQP-GLES3.functional.shaders.builtin_fu"
#define VkglTestCase_018932_2 "nctions.precision.abs.lowp_fragment.vec2"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018932, VkglTestCase_018932_1, VkglTestCase_018932_2);

#define VkglTestCase_018933_1 "dEQP-GLES3.functional.shaders.builtin_fu"
#define VkglTestCase_018933_2 "nctions.precision.abs.lowp_fragment.vec3"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018933, VkglTestCase_018933_1, VkglTestCase_018933_2);

#define VkglTestCase_018934_1 "dEQP-GLES3.functional.shaders.builtin_fu"
#define VkglTestCase_018934_2 "nctions.precision.abs.lowp_fragment.vec4"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018934, VkglTestCase_018934_1, VkglTestCase_018934_2);
