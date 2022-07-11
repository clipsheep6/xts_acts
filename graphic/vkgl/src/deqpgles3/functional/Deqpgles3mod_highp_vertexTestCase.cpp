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
#include "../ActsDeqpgles30020TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_019135_1 "dEQP-GLES3.functional.shaders.builtin_fu"
#define VkglTestCase_019135_2 "nctions.precision.mod.highp_vertex.scalar"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019135, VkglTestCase_019135_1, VkglTestCase_019135_2);

#define VkglTestCase_019136_1 "dEQP-GLES3.functional.shaders.builtin_f"
#define VkglTestCase_019136_2 "unctions.precision.mod.highp_vertex.vec2"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019136, VkglTestCase_019136_1, VkglTestCase_019136_2);

#define VkglTestCase_019137_1 "dEQP-GLES3.functional.shaders.builtin_f"
#define VkglTestCase_019137_2 "unctions.precision.mod.highp_vertex.vec3"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019137, VkglTestCase_019137_1, VkglTestCase_019137_2);

#define VkglTestCase_019138_1 "dEQP-GLES3.functional.shaders.builtin_f"
#define VkglTestCase_019138_2 "unctions.precision.mod.highp_vertex.vec4"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019138, VkglTestCase_019138_1, VkglTestCase_019138_2);
