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

#define VkglTestCase_019468_1 "dEQP-GLES3.functional.shaders.builtin_functio"
#define VkglTestCase_019468_2 "ns.precision.matrixcompmult.highp_vertex.mat2"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019468, VkglTestCase_019468_1, VkglTestCase_019468_2);

#define VkglTestCase_019469_1 "dEQP-GLES3.functional.shaders.builtin_function"
#define VkglTestCase_019469_2 "s.precision.matrixcompmult.highp_vertex.mat2x3"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019469, VkglTestCase_019469_1, VkglTestCase_019469_2);

#define VkglTestCase_019470_1 "dEQP-GLES3.functional.shaders.builtin_function"
#define VkglTestCase_019470_2 "s.precision.matrixcompmult.highp_vertex.mat2x4"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019470, VkglTestCase_019470_1, VkglTestCase_019470_2);

#define VkglTestCase_019471_1 "dEQP-GLES3.functional.shaders.builtin_function"
#define VkglTestCase_019471_2 "s.precision.matrixcompmult.highp_vertex.mat3x2"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019471, VkglTestCase_019471_1, VkglTestCase_019471_2);

#define VkglTestCase_019472_1 "dEQP-GLES3.functional.shaders.builtin_functio"
#define VkglTestCase_019472_2 "ns.precision.matrixcompmult.highp_vertex.mat3"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019472, VkglTestCase_019472_1, VkglTestCase_019472_2);

#define VkglTestCase_019473_1 "dEQP-GLES3.functional.shaders.builtin_function"
#define VkglTestCase_019473_2 "s.precision.matrixcompmult.highp_vertex.mat3x4"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019473, VkglTestCase_019473_1, VkglTestCase_019473_2);

#define VkglTestCase_019474_1 "dEQP-GLES3.functional.shaders.builtin_function"
#define VkglTestCase_019474_2 "s.precision.matrixcompmult.highp_vertex.mat4x2"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019474, VkglTestCase_019474_1, VkglTestCase_019474_2);

#define VkglTestCase_019475_1 "dEQP-GLES3.functional.shaders.builtin_function"
#define VkglTestCase_019475_2 "s.precision.matrixcompmult.highp_vertex.mat4x3"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019475, VkglTestCase_019475_1, VkglTestCase_019475_2);

#define VkglTestCase_019476_1 "dEQP-GLES3.functional.shaders.builtin_functio"
#define VkglTestCase_019476_2 "ns.precision.matrixcompmult.highp_vertex.mat4"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019476, VkglTestCase_019476_1, VkglTestCase_019476_2);
