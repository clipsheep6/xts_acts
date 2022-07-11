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

#define VkglTestCase_018539_1 "dEQP-GLES3.functional.shaders.builtin_func"
#define VkglTestCase_018539_2 "tions.precision.cos.mediump_fragment.scalar"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018539, VkglTestCase_018539_1, VkglTestCase_018539_2);

#define VkglTestCase_018540_1 "dEQP-GLES3.functional.shaders.builtin_fun"
#define VkglTestCase_018540_2 "ctions.precision.cos.mediump_fragment.vec2"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018540, VkglTestCase_018540_1, VkglTestCase_018540_2);

#define VkglTestCase_018541_1 "dEQP-GLES3.functional.shaders.builtin_fun"
#define VkglTestCase_018541_2 "ctions.precision.cos.mediump_fragment.vec3"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018541, VkglTestCase_018541_1, VkglTestCase_018541_2);

#define VkglTestCase_018542_1 "dEQP-GLES3.functional.shaders.builtin_fun"
#define VkglTestCase_018542_2 "ctions.precision.cos.mediump_fragment.vec4"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018542, VkglTestCase_018542_1, VkglTestCase_018542_2);
