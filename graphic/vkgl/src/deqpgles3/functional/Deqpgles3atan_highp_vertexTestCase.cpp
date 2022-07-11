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

#define VkglTestCase_018627_1 "dEQP-GLES3.functional.shaders.builtin_fun"
#define VkglTestCase_018627_2 "ctions.precision.atan.highp_vertex.scalar"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018627, VkglTestCase_018627_1, VkglTestCase_018627_2);

#define VkglTestCase_018628_1 "dEQP-GLES3.functional.shaders.builtin_fu"
#define VkglTestCase_018628_2 "nctions.precision.atan.highp_vertex.vec2"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018628, VkglTestCase_018628_1, VkglTestCase_018628_2);

#define VkglTestCase_018629_1 "dEQP-GLES3.functional.shaders.builtin_fu"
#define VkglTestCase_018629_2 "nctions.precision.atan.highp_vertex.vec3"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018629, VkglTestCase_018629_1, VkglTestCase_018629_2);

#define VkglTestCase_018630_1 "dEQP-GLES3.functional.shaders.builtin_fu"
#define VkglTestCase_018630_2 "nctions.precision.atan.highp_vertex.vec4"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018630, VkglTestCase_018630_1, VkglTestCase_018630_2);
