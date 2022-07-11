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

#define VkglTestCase_018595_1 "dEQP-GLES3.functional.shaders.builtin_func"
#define VkglTestCase_018595_2 "tions.precision.asin.highp_fragment.scalar"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018595, VkglTestCase_018595_1, VkglTestCase_018595_2);

#define VkglTestCase_018596_1 "dEQP-GLES3.functional.shaders.builtin_fun"
#define VkglTestCase_018596_2 "ctions.precision.asin.highp_fragment.vec2"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018596, VkglTestCase_018596_1, VkglTestCase_018596_2);

#define VkglTestCase_018597_1 "dEQP-GLES3.functional.shaders.builtin_fun"
#define VkglTestCase_018597_2 "ctions.precision.asin.highp_fragment.vec3"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018597, VkglTestCase_018597_1, VkglTestCase_018597_2);

#define VkglTestCase_018598_1 "dEQP-GLES3.functional.shaders.builtin_fun"
#define VkglTestCase_018598_2 "ctions.precision.asin.highp_fragment.vec4"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018598, VkglTestCase_018598_1, VkglTestCase_018598_2);
