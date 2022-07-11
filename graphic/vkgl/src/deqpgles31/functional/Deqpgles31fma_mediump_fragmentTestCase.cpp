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

#define VkglTestCase_002898_1 "dEQP-GLES31.functional.shaders.builtin_func"
#define VkglTestCase_002898_2 "tions.precision.fma.mediump_fragment.scalar"
SHRINK_HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002898, VkglTestCase_002898_1, VkglTestCase_002898_2);

#define VkglTestCase_002899_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_002899_2 "ctions.precision.fma.mediump_fragment.vec2"
SHRINK_HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002899, VkglTestCase_002899_1, VkglTestCase_002899_2);

#define VkglTestCase_002900_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_002900_2 "ctions.precision.fma.mediump_fragment.vec3"
SHRINK_HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002900, VkglTestCase_002900_1, VkglTestCase_002900_2);

#define VkglTestCase_002901_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_002901_2 "ctions.precision.fma.mediump_fragment.vec4"
SHRINK_HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002901, VkglTestCase_002901_1, VkglTestCase_002901_2);
