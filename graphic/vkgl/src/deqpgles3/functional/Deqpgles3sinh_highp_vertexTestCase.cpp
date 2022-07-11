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

#define VkglTestCase_018651_1 "dEQP-GLES3.functional.shaders.builtin_fun"
#define VkglTestCase_018651_2 "ctions.precision.sinh.highp_vertex.scalar"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018651, VkglTestCase_018651_1, VkglTestCase_018651_2);

#define VkglTestCase_018652_1 "dEQP-GLES3.functional.shaders.builtin_fu"
#define VkglTestCase_018652_2 "nctions.precision.sinh.highp_vertex.vec2"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018652, VkglTestCase_018652_1, VkglTestCase_018652_2);

#define VkglTestCase_018653_1 "dEQP-GLES3.functional.shaders.builtin_fu"
#define VkglTestCase_018653_2 "nctions.precision.sinh.highp_vertex.vec3"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018653, VkglTestCase_018653_1, VkglTestCase_018653_2);

#define VkglTestCase_018654_1 "dEQP-GLES3.functional.shaders.builtin_fu"
#define VkglTestCase_018654_2 "nctions.precision.sinh.highp_vertex.vec4"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018654, VkglTestCase_018654_1, VkglTestCase_018654_2);
