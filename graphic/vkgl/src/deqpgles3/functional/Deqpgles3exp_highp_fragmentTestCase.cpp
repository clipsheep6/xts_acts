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

#define VkglTestCase_018803_1 "dEQP-GLES3.functional.shaders.builtin_fun"
#define VkglTestCase_018803_2 "ctions.precision.exp.highp_fragment.scalar"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018803, VkglTestCase_018803_1, VkglTestCase_018803_2);

#define VkglTestCase_018804_1 "dEQP-GLES3.functional.shaders.builtin_fu"
#define VkglTestCase_018804_2 "nctions.precision.exp.highp_fragment.vec2"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018804, VkglTestCase_018804_1, VkglTestCase_018804_2);

#define VkglTestCase_018805_1 "dEQP-GLES3.functional.shaders.builtin_fu"
#define VkglTestCase_018805_2 "nctions.precision.exp.highp_fragment.vec3"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018805, VkglTestCase_018805_1, VkglTestCase_018805_2);

#define VkglTestCase_018806_1 "dEQP-GLES3.functional.shaders.builtin_fu"
#define VkglTestCase_018806_2 "nctions.precision.exp.highp_fragment.vec4"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018806, VkglTestCase_018806_1, VkglTestCase_018806_2);
