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

#define VkglTestCase_002834_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_002834_2 "ctions.precision.frexp.highp_vertex.scalar"
SHRINK_HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002834, VkglTestCase_002834_1, VkglTestCase_002834_2);

#define VkglTestCase_002835_1 "dEQP-GLES31.functional.shaders.builtin_fu"
#define VkglTestCase_002835_2 "nctions.precision.frexp.highp_vertex.vec2"
SHRINK_HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002835, VkglTestCase_002835_1, VkglTestCase_002835_2);

#define VkglTestCase_002836_1 "dEQP-GLES31.functional.shaders.builtin_fu"
#define VkglTestCase_002836_2 "nctions.precision.frexp.highp_vertex.vec3"
SHRINK_HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002836, VkglTestCase_002836_1, VkglTestCase_002836_2);

#define VkglTestCase_002837_1 "dEQP-GLES31.functional.shaders.builtin_fu"
#define VkglTestCase_002837_2 "nctions.precision.frexp.highp_vertex.vec4"
SHRINK_HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002837, VkglTestCase_002837_1, VkglTestCase_002837_2);
