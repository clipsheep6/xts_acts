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

#define VkglTestCase_019531_1 "dEQP-GLES3.functional.shaders.builtin_functio"
#define VkglTestCase_019531_2 "ns.precision.outerproduct.highp_fragment.mat2"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019531, VkglTestCase_019531_1, VkglTestCase_019531_2);

#define VkglTestCase_019532_1 "dEQP-GLES3.functional.shaders.builtin_function"
#define VkglTestCase_019532_2 "s.precision.outerproduct.highp_fragment.mat2x3"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019532, VkglTestCase_019532_1, VkglTestCase_019532_2);

#define VkglTestCase_019533_1 "dEQP-GLES3.functional.shaders.builtin_function"
#define VkglTestCase_019533_2 "s.precision.outerproduct.highp_fragment.mat2x4"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019533, VkglTestCase_019533_1, VkglTestCase_019533_2);

#define VkglTestCase_019534_1 "dEQP-GLES3.functional.shaders.builtin_function"
#define VkglTestCase_019534_2 "s.precision.outerproduct.highp_fragment.mat3x2"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019534, VkglTestCase_019534_1, VkglTestCase_019534_2);

#define VkglTestCase_019535_1 "dEQP-GLES3.functional.shaders.builtin_functio"
#define VkglTestCase_019535_2 "ns.precision.outerproduct.highp_fragment.mat3"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019535, VkglTestCase_019535_1, VkglTestCase_019535_2);

#define VkglTestCase_019536_1 "dEQP-GLES3.functional.shaders.builtin_function"
#define VkglTestCase_019536_2 "s.precision.outerproduct.highp_fragment.mat3x4"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019536, VkglTestCase_019536_1, VkglTestCase_019536_2);

#define VkglTestCase_019537_1 "dEQP-GLES3.functional.shaders.builtin_function"
#define VkglTestCase_019537_2 "s.precision.outerproduct.highp_fragment.mat4x2"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019537, VkglTestCase_019537_1, VkglTestCase_019537_2);

#define VkglTestCase_019538_1 "dEQP-GLES3.functional.shaders.builtin_function"
#define VkglTestCase_019538_2 "s.precision.outerproduct.highp_fragment.mat4x3"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019538, VkglTestCase_019538_1, VkglTestCase_019538_2);

#define VkglTestCase_019539_1 "dEQP-GLES3.functional.shaders.builtin_functio"
#define VkglTestCase_019539_2 "ns.precision.outerproduct.highp_fragment.mat4"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019539, VkglTestCase_019539_1, VkglTestCase_019539_2);
