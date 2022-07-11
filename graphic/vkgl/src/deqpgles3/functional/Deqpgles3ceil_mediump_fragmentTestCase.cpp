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

#define VkglTestCase_019083_1 "dEQP-GLES3.functional.shaders.builtin_funct"
#define VkglTestCase_019083_2 "ions.precision.ceil.mediump_fragment.scalar"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019083, VkglTestCase_019083_1, VkglTestCase_019083_2);

#define VkglTestCase_019084_1 "dEQP-GLES3.functional.shaders.builtin_func"
#define VkglTestCase_019084_2 "tions.precision.ceil.mediump_fragment.vec2"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019084, VkglTestCase_019084_1, VkglTestCase_019084_2);

#define VkglTestCase_019085_1 "dEQP-GLES3.functional.shaders.builtin_func"
#define VkglTestCase_019085_2 "tions.precision.ceil.mediump_fragment.vec3"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019085, VkglTestCase_019085_1, VkglTestCase_019085_2);

#define VkglTestCase_019086_1 "dEQP-GLES3.functional.shaders.builtin_func"
#define VkglTestCase_019086_2 "tions.precision.ceil.mediump_fragment.vec4"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019086, VkglTestCase_019086_1, VkglTestCase_019086_2);
