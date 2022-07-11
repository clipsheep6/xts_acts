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

#define VkglTestCase_002620_1 "dEQP-GLES31.functional.shaders.builtin_func"
#define VkglTestCase_002620_2 "tions.precision.step.mediump_compute.scalar"
SHRINK_HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002620, VkglTestCase_002620_1, VkglTestCase_002620_2);

#define VkglTestCase_002621_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_002621_2 "ctions.precision.step.mediump_compute.vec2"
SHRINK_HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002621, VkglTestCase_002621_1, VkglTestCase_002621_2);

#define VkglTestCase_002622_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_002622_2 "ctions.precision.step.mediump_compute.vec3"
SHRINK_HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002622, VkglTestCase_002622_1, VkglTestCase_002622_2);

#define VkglTestCase_002623_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_002623_2 "ctions.precision.step.mediump_compute.vec4"
SHRINK_HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002623, VkglTestCase_002623_1, VkglTestCase_002623_2);
