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

#define VkglTestCase_019513_1 "dEQP-GLES3.functional.shaders.builtin_function"
#define VkglTestCase_019513_2 "s.precision.outerproduct.mediump_fragment.mat2"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019513, VkglTestCase_019513_1, VkglTestCase_019513_2);

#define VkglTestCase_019514_1 "dEQP-GLES3.functional.shaders.builtin_functions"
#define VkglTestCase_019514_2 ".precision.outerproduct.mediump_fragment.mat2x3"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019514, VkglTestCase_019514_1, VkglTestCase_019514_2);

#define VkglTestCase_019515_1 "dEQP-GLES3.functional.shaders.builtin_functions"
#define VkglTestCase_019515_2 ".precision.outerproduct.mediump_fragment.mat2x4"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019515, VkglTestCase_019515_1, VkglTestCase_019515_2);

#define VkglTestCase_019516_1 "dEQP-GLES3.functional.shaders.builtin_functions"
#define VkglTestCase_019516_2 ".precision.outerproduct.mediump_fragment.mat3x2"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019516, VkglTestCase_019516_1, VkglTestCase_019516_2);

#define VkglTestCase_019517_1 "dEQP-GLES3.functional.shaders.builtin_function"
#define VkglTestCase_019517_2 "s.precision.outerproduct.mediump_fragment.mat3"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019517, VkglTestCase_019517_1, VkglTestCase_019517_2);

#define VkglTestCase_019518_1 "dEQP-GLES3.functional.shaders.builtin_functions"
#define VkglTestCase_019518_2 ".precision.outerproduct.mediump_fragment.mat3x4"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019518, VkglTestCase_019518_1, VkglTestCase_019518_2);

#define VkglTestCase_019519_1 "dEQP-GLES3.functional.shaders.builtin_functions"
#define VkglTestCase_019519_2 ".precision.outerproduct.mediump_fragment.mat4x2"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019519, VkglTestCase_019519_1, VkglTestCase_019519_2);

#define VkglTestCase_019520_1 "dEQP-GLES3.functional.shaders.builtin_functions"
#define VkglTestCase_019520_2 ".precision.outerproduct.mediump_fragment.mat4x3"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019520, VkglTestCase_019520_1, VkglTestCase_019520_2);

#define VkglTestCase_019521_1 "dEQP-GLES3.functional.shaders.builtin_function"
#define VkglTestCase_019521_2 "s.precision.outerproduct.mediump_fragment.mat4"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019521, VkglTestCase_019521_1, VkglTestCase_019521_2);
