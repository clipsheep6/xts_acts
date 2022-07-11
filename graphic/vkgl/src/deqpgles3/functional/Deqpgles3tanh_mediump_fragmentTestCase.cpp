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

#define VkglTestCase_018695_1 "dEQP-GLES3.functional.shaders.builtin_funct"
#define VkglTestCase_018695_2 "ions.precision.tanh.mediump_fragment.scalar"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018695, VkglTestCase_018695_1, VkglTestCase_018695_2);

#define VkglTestCase_018696_1 "dEQP-GLES3.functional.shaders.builtin_func"
#define VkglTestCase_018696_2 "tions.precision.tanh.mediump_fragment.vec2"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018696, VkglTestCase_018696_1, VkglTestCase_018696_2);

#define VkglTestCase_018697_1 "dEQP-GLES3.functional.shaders.builtin_func"
#define VkglTestCase_018697_2 "tions.precision.tanh.mediump_fragment.vec3"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018697, VkglTestCase_018697_1, VkglTestCase_018697_2);

#define VkglTestCase_018698_1 "dEQP-GLES3.functional.shaders.builtin_func"
#define VkglTestCase_018698_2 "tions.precision.tanh.mediump_fragment.vec4"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018698, VkglTestCase_018698_1, VkglTestCase_018698_2);
