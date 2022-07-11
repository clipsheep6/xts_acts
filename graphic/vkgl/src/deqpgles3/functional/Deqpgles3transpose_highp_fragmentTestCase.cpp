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

#define VkglTestCase_019585_1 "dEQP-GLES3.functional.shaders.builtin_funct"
#define VkglTestCase_019585_2 "ions.precision.transpose.highp_fragment.mat2"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019585, VkglTestCase_019585_1, VkglTestCase_019585_2);

#define VkglTestCase_019586_1 "dEQP-GLES3.functional.shaders.builtin_functi"
#define VkglTestCase_019586_2 "ons.precision.transpose.highp_fragment.mat2x3"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019586, VkglTestCase_019586_1, VkglTestCase_019586_2);

#define VkglTestCase_019587_1 "dEQP-GLES3.functional.shaders.builtin_functi"
#define VkglTestCase_019587_2 "ons.precision.transpose.highp_fragment.mat2x4"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019587, VkglTestCase_019587_1, VkglTestCase_019587_2);

#define VkglTestCase_019588_1 "dEQP-GLES3.functional.shaders.builtin_functi"
#define VkglTestCase_019588_2 "ons.precision.transpose.highp_fragment.mat3x2"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019588, VkglTestCase_019588_1, VkglTestCase_019588_2);

#define VkglTestCase_019589_1 "dEQP-GLES3.functional.shaders.builtin_funct"
#define VkglTestCase_019589_2 "ions.precision.transpose.highp_fragment.mat3"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019589, VkglTestCase_019589_1, VkglTestCase_019589_2);

#define VkglTestCase_019590_1 "dEQP-GLES3.functional.shaders.builtin_functi"
#define VkglTestCase_019590_2 "ons.precision.transpose.highp_fragment.mat3x4"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019590, VkglTestCase_019590_1, VkglTestCase_019590_2);

#define VkglTestCase_019591_1 "dEQP-GLES3.functional.shaders.builtin_functi"
#define VkglTestCase_019591_2 "ons.precision.transpose.highp_fragment.mat4x2"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019591, VkglTestCase_019591_1, VkglTestCase_019591_2);

#define VkglTestCase_019592_1 "dEQP-GLES3.functional.shaders.builtin_functi"
#define VkglTestCase_019592_2 "ons.precision.transpose.highp_fragment.mat4x3"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019592, VkglTestCase_019592_1, VkglTestCase_019592_2);

#define VkglTestCase_019593_1 "dEQP-GLES3.functional.shaders.builtin_funct"
#define VkglTestCase_019593_2 "ions.precision.transpose.highp_fragment.mat4"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019593, VkglTestCase_019593_1, VkglTestCase_019593_2);
