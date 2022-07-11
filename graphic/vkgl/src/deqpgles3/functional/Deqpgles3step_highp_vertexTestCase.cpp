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

#define VkglTestCase_019261_1 "dEQP-GLES3.functional.shaders.builtin_fun"
#define VkglTestCase_019261_2 "ctions.precision.step.highp_vertex.scalar"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019261, VkglTestCase_019261_1, VkglTestCase_019261_2);

#define VkglTestCase_019262_1 "dEQP-GLES3.functional.shaders.builtin_fu"
#define VkglTestCase_019262_2 "nctions.precision.step.highp_vertex.vec2"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019262, VkglTestCase_019262_1, VkglTestCase_019262_2);

#define VkglTestCase_019263_1 "dEQP-GLES3.functional.shaders.builtin_fu"
#define VkglTestCase_019263_2 "nctions.precision.step.highp_vertex.vec3"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019263, VkglTestCase_019263_1, VkglTestCase_019263_2);

#define VkglTestCase_019264_1 "dEQP-GLES3.functional.shaders.builtin_fu"
#define VkglTestCase_019264_2 "nctions.precision.step.highp_vertex.vec4"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019264, VkglTestCase_019264_1, VkglTestCase_019264_2);
