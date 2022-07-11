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

#define VkglTestCase_018851_1 "dEQP-GLES3.functional.shaders.builtin_func"
#define VkglTestCase_018851_2 "tions.precision.exp2.highp_fragment.scalar"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018851, VkglTestCase_018851_1, VkglTestCase_018851_2);

#define VkglTestCase_018852_1 "dEQP-GLES3.functional.shaders.builtin_fun"
#define VkglTestCase_018852_2 "ctions.precision.exp2.highp_fragment.vec2"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018852, VkglTestCase_018852_1, VkglTestCase_018852_2);

#define VkglTestCase_018853_1 "dEQP-GLES3.functional.shaders.builtin_fun"
#define VkglTestCase_018853_2 "ctions.precision.exp2.highp_fragment.vec3"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018853, VkglTestCase_018853_1, VkglTestCase_018853_2);

#define VkglTestCase_018854_1 "dEQP-GLES3.functional.shaders.builtin_fun"
#define VkglTestCase_018854_2 "ctions.precision.exp2.highp_fragment.vec4"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018854, VkglTestCase_018854_1, VkglTestCase_018854_2);
