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

#define VkglTestCase_019522_1 "dEQP-GLES3.functional.shaders.builtin_functi"
#define VkglTestCase_019522_2 "ons.precision.outerproduct.highp_vertex.mat2"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019522, VkglTestCase_019522_1, VkglTestCase_019522_2);

#define VkglTestCase_019523_1 "dEQP-GLES3.functional.shaders.builtin_functio"
#define VkglTestCase_019523_2 "ns.precision.outerproduct.highp_vertex.mat2x3"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019523, VkglTestCase_019523_1, VkglTestCase_019523_2);

#define VkglTestCase_019524_1 "dEQP-GLES3.functional.shaders.builtin_functio"
#define VkglTestCase_019524_2 "ns.precision.outerproduct.highp_vertex.mat2x4"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019524, VkglTestCase_019524_1, VkglTestCase_019524_2);

#define VkglTestCase_019525_1 "dEQP-GLES3.functional.shaders.builtin_functio"
#define VkglTestCase_019525_2 "ns.precision.outerproduct.highp_vertex.mat3x2"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019525, VkglTestCase_019525_1, VkglTestCase_019525_2);

#define VkglTestCase_019526_1 "dEQP-GLES3.functional.shaders.builtin_functi"
#define VkglTestCase_019526_2 "ons.precision.outerproduct.highp_vertex.mat3"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019526, VkglTestCase_019526_1, VkglTestCase_019526_2);

#define VkglTestCase_019527_1 "dEQP-GLES3.functional.shaders.builtin_functio"
#define VkglTestCase_019527_2 "ns.precision.outerproduct.highp_vertex.mat3x4"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019527, VkglTestCase_019527_1, VkglTestCase_019527_2);

#define VkglTestCase_019528_1 "dEQP-GLES3.functional.shaders.builtin_functio"
#define VkglTestCase_019528_2 "ns.precision.outerproduct.highp_vertex.mat4x2"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019528, VkglTestCase_019528_1, VkglTestCase_019528_2);

#define VkglTestCase_019529_1 "dEQP-GLES3.functional.shaders.builtin_functio"
#define VkglTestCase_019529_2 "ns.precision.outerproduct.highp_vertex.mat4x3"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019529, VkglTestCase_019529_1, VkglTestCase_019529_2);

#define VkglTestCase_019530_1 "dEQP-GLES3.functional.shaders.builtin_functi"
#define VkglTestCase_019530_2 "ons.precision.outerproduct.highp_vertex.mat4"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019530, VkglTestCase_019530_1, VkglTestCase_019530_2);
