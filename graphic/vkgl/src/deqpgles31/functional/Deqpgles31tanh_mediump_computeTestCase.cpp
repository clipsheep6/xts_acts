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
#include "../Deqpgles31BaseFunc.h"
#include "../ActsDeqpgles310003TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_002349_1 "dEQP-GLES31.functional.shaders.builtin_func"
#define VkglTestCase_002349_2 "tions.precision.tanh.mediump_compute.scalar"
SHRINK_HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002349, VkglTestCase_002349_1, VkglTestCase_002349_2);

#define VkglTestCase_002350_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_002350_2 "ctions.precision.tanh.mediump_compute.vec2"
SHRINK_HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002350, VkglTestCase_002350_1, VkglTestCase_002350_2);

#define VkglTestCase_002351_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_002351_2 "ctions.precision.tanh.mediump_compute.vec3"
SHRINK_HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002351, VkglTestCase_002351_1, VkglTestCase_002351_2);

#define VkglTestCase_002352_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_002352_2 "ctions.precision.tanh.mediump_compute.vec4"
SHRINK_HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002352, VkglTestCase_002352_1, VkglTestCase_002352_2);
