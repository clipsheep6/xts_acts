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

#define VkglTestCase_018447_1 "dEQP-GLES3.functional.shaders.builtin_fu"
#define VkglTestCase_018447_2 "nctions.precision.div.highp_vertex.scalar"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018447, VkglTestCase_018447_1, VkglTestCase_018447_2);

#define VkglTestCase_018448_1 "dEQP-GLES3.functional.shaders.builtin_f"
#define VkglTestCase_018448_2 "unctions.precision.div.highp_vertex.vec2"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018448, VkglTestCase_018448_1, VkglTestCase_018448_2);

#define VkglTestCase_018449_1 "dEQP-GLES3.functional.shaders.builtin_f"
#define VkglTestCase_018449_2 "unctions.precision.div.highp_vertex.vec3"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018449, VkglTestCase_018449_1, VkglTestCase_018449_2);

#define VkglTestCase_018450_1 "dEQP-GLES3.functional.shaders.builtin_f"
#define VkglTestCase_018450_2 "unctions.precision.div.highp_vertex.vec4"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018450, VkglTestCase_018450_1, VkglTestCase_018450_2);
