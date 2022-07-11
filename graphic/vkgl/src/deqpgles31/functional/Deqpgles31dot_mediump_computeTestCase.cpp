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

#define VkglTestCase_002664_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_002664_2 "ctions.precision.dot.mediump_compute.scalar"
SHRINK_HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002664, VkglTestCase_002664_1, VkglTestCase_002664_2);

#define VkglTestCase_002665_1 "dEQP-GLES31.functional.shaders.builtin_fu"
#define VkglTestCase_002665_2 "nctions.precision.dot.mediump_compute.vec2"
SHRINK_HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002665, VkglTestCase_002665_1, VkglTestCase_002665_2);

#define VkglTestCase_002666_1 "dEQP-GLES31.functional.shaders.builtin_fu"
#define VkglTestCase_002666_2 "nctions.precision.dot.mediump_compute.vec3"
SHRINK_HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002666, VkglTestCase_002666_1, VkglTestCase_002666_2);

#define VkglTestCase_002667_1 "dEQP-GLES31.functional.shaders.builtin_fu"
#define VkglTestCase_002667_2 "nctions.precision.dot.mediump_compute.vec4"
SHRINK_HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002667, VkglTestCase_002667_1, VkglTestCase_002667_2);
