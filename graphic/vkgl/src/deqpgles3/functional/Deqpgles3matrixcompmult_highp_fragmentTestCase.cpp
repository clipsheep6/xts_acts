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

#define VkglTestCase_019477_1 "dEQP-GLES3.functional.shaders.builtin_function"
#define VkglTestCase_019477_2 "s.precision.matrixcompmult.highp_fragment.mat2"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019477, VkglTestCase_019477_1, VkglTestCase_019477_2);

#define VkglTestCase_019478_1 "dEQP-GLES3.functional.shaders.builtin_functions"
#define VkglTestCase_019478_2 ".precision.matrixcompmult.highp_fragment.mat2x3"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019478, VkglTestCase_019478_1, VkglTestCase_019478_2);

#define VkglTestCase_019479_1 "dEQP-GLES3.functional.shaders.builtin_functions"
#define VkglTestCase_019479_2 ".precision.matrixcompmult.highp_fragment.mat2x4"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019479, VkglTestCase_019479_1, VkglTestCase_019479_2);

#define VkglTestCase_019480_1 "dEQP-GLES3.functional.shaders.builtin_functions"
#define VkglTestCase_019480_2 ".precision.matrixcompmult.highp_fragment.mat3x2"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019480, VkglTestCase_019480_1, VkglTestCase_019480_2);

#define VkglTestCase_019481_1 "dEQP-GLES3.functional.shaders.builtin_function"
#define VkglTestCase_019481_2 "s.precision.matrixcompmult.highp_fragment.mat3"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019481, VkglTestCase_019481_1, VkglTestCase_019481_2);

#define VkglTestCase_019482_1 "dEQP-GLES3.functional.shaders.builtin_functions"
#define VkglTestCase_019482_2 ".precision.matrixcompmult.highp_fragment.mat3x4"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019482, VkglTestCase_019482_1, VkglTestCase_019482_2);

#define VkglTestCase_019483_1 "dEQP-GLES3.functional.shaders.builtin_functions"
#define VkglTestCase_019483_2 ".precision.matrixcompmult.highp_fragment.mat4x2"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019483, VkglTestCase_019483_1, VkglTestCase_019483_2);

#define VkglTestCase_019484_1 "dEQP-GLES3.functional.shaders.builtin_functions"
#define VkglTestCase_019484_2 ".precision.matrixcompmult.highp_fragment.mat4x3"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019484, VkglTestCase_019484_1, VkglTestCase_019484_2);

#define VkglTestCase_019485_1 "dEQP-GLES3.functional.shaders.builtin_function"
#define VkglTestCase_019485_2 "s.precision.matrixcompmult.highp_fragment.mat4"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019485, VkglTestCase_019485_1, VkglTestCase_019485_2);
