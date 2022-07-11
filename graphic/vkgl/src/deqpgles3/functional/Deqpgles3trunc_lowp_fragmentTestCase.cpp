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

#define VkglTestCase_019003_1 "dEQP-GLES3.functional.shaders.builtin_func"
#define VkglTestCase_019003_2 "tions.precision.trunc.lowp_fragment.scalar"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019003, VkglTestCase_019003_1, VkglTestCase_019003_2);

#define VkglTestCase_019004_1 "dEQP-GLES3.functional.shaders.builtin_fun"
#define VkglTestCase_019004_2 "ctions.precision.trunc.lowp_fragment.vec2"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019004, VkglTestCase_019004_1, VkglTestCase_019004_2);

#define VkglTestCase_019005_1 "dEQP-GLES3.functional.shaders.builtin_fun"
#define VkglTestCase_019005_2 "ctions.precision.trunc.lowp_fragment.vec3"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019005, VkglTestCase_019005_1, VkglTestCase_019005_2);

#define VkglTestCase_019006_1 "dEQP-GLES3.functional.shaders.builtin_fun"
#define VkglTestCase_019006_2 "ctions.precision.trunc.lowp_fragment.vec4"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019006, VkglTestCase_019006_1, VkglTestCase_019006_2);
