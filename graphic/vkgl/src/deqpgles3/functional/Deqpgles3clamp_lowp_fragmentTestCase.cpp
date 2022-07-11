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
#include "../ActsDeqpgles30020TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_019201_1 "dEQP-GLES3.functional.shaders.builtin_func"
#define VkglTestCase_019201_2 "tions.precision.clamp.lowp_fragment.scalar"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019201, VkglTestCase_019201_1, VkglTestCase_019201_2);

#define VkglTestCase_019202_1 "dEQP-GLES3.functional.shaders.builtin_fun"
#define VkglTestCase_019202_2 "ctions.precision.clamp.lowp_fragment.vec2"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019202, VkglTestCase_019202_1, VkglTestCase_019202_2);

#define VkglTestCase_019203_1 "dEQP-GLES3.functional.shaders.builtin_fun"
#define VkglTestCase_019203_2 "ctions.precision.clamp.lowp_fragment.vec3"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019203, VkglTestCase_019203_1, VkglTestCase_019203_2);

#define VkglTestCase_019204_1 "dEQP-GLES3.functional.shaders.builtin_fun"
#define VkglTestCase_019204_2 "ctions.precision.clamp.lowp_fragment.vec4"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019204, VkglTestCase_019204_1, VkglTestCase_019204_2);
