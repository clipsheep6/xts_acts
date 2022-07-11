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

#define VkglTestCase_019059_1 "dEQP-GLES3.functional.shaders.builtin_functio"
#define VkglTestCase_019059_2 "ns.precision.roundeven.mediump_fragment.scalar"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019059, VkglTestCase_019059_1, VkglTestCase_019059_2);

#define VkglTestCase_019060_1 "dEQP-GLES3.functional.shaders.builtin_functi"
#define VkglTestCase_019060_2 "ons.precision.roundeven.mediump_fragment.vec2"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019060, VkglTestCase_019060_1, VkglTestCase_019060_2);

#define VkglTestCase_019061_1 "dEQP-GLES3.functional.shaders.builtin_functi"
#define VkglTestCase_019061_2 "ons.precision.roundeven.mediump_fragment.vec3"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019061, VkglTestCase_019061_1, VkglTestCase_019061_2);

#define VkglTestCase_019062_1 "dEQP-GLES3.functional.shaders.builtin_functi"
#define VkglTestCase_019062_2 "ons.precision.roundeven.mediump_fragment.vec4"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019062, VkglTestCase_019062_1, VkglTestCase_019062_2);
