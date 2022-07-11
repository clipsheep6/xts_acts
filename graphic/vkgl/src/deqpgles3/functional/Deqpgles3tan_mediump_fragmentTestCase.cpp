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

#define VkglTestCase_018563_1 "dEQP-GLES3.functional.shaders.builtin_func"
#define VkglTestCase_018563_2 "tions.precision.tan.mediump_fragment.scalar"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018563, VkglTestCase_018563_1, VkglTestCase_018563_2);

#define VkglTestCase_018564_1 "dEQP-GLES3.functional.shaders.builtin_fun"
#define VkglTestCase_018564_2 "ctions.precision.tan.mediump_fragment.vec2"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018564, VkglTestCase_018564_1, VkglTestCase_018564_2);

#define VkglTestCase_018565_1 "dEQP-GLES3.functional.shaders.builtin_fun"
#define VkglTestCase_018565_2 "ctions.precision.tan.mediump_fragment.vec3"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018565, VkglTestCase_018565_1, VkglTestCase_018565_2);

#define VkglTestCase_018566_1 "dEQP-GLES3.functional.shaders.builtin_fun"
#define VkglTestCase_018566_2 "ctions.precision.tan.mediump_fragment.vec4"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018566, VkglTestCase_018566_1, VkglTestCase_018566_2);
