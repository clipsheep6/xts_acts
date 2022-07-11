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

#define VkglTestCase_019063_1 "dEQP-GLES3.functional.shaders.builtin_funct"
#define VkglTestCase_019063_2 "ions.precision.roundeven.highp_vertex.scalar"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019063, VkglTestCase_019063_1, VkglTestCase_019063_2);

#define VkglTestCase_019064_1 "dEQP-GLES3.functional.shaders.builtin_func"
#define VkglTestCase_019064_2 "tions.precision.roundeven.highp_vertex.vec2"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019064, VkglTestCase_019064_1, VkglTestCase_019064_2);

#define VkglTestCase_019065_1 "dEQP-GLES3.functional.shaders.builtin_func"
#define VkglTestCase_019065_2 "tions.precision.roundeven.highp_vertex.vec3"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019065, VkglTestCase_019065_1, VkglTestCase_019065_2);

#define VkglTestCase_019066_1 "dEQP-GLES3.functional.shaders.builtin_func"
#define VkglTestCase_019066_2 "tions.precision.roundeven.highp_vertex.vec4"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019066, VkglTestCase_019066_1, VkglTestCase_019066_2);
