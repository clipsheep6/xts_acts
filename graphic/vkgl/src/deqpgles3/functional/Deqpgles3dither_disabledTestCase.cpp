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
#include "../ActsDeqpgles30043TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_042338_1 "dEQP-GLES3.functional.dith"
#define VkglTestCase_042338_2 "er.disabled.gradient_white"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042338, VkglTestCase_042338_1, VkglTestCase_042338_2);

#define VkglTestCase_042339_1 "dEQP-GLES3.functional.dit"
#define VkglTestCase_042339_2 "her.disabled.gradient_red"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042339, VkglTestCase_042339_1, VkglTestCase_042339_2);

#define VkglTestCase_042340_1 "dEQP-GLES3.functional.dith"
#define VkglTestCase_042340_2 "er.disabled.gradient_green"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042340, VkglTestCase_042340_1, VkglTestCase_042340_2);

#define VkglTestCase_042341_1 "dEQP-GLES3.functional.dit"
#define VkglTestCase_042341_2 "her.disabled.gradient_blue"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042341, VkglTestCase_042341_1, VkglTestCase_042341_2);

#define VkglTestCase_042342_1 "dEQP-GLES3.functional.dith"
#define VkglTestCase_042342_2 "er.disabled.gradient_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042342, VkglTestCase_042342_1, VkglTestCase_042342_2);

#define VkglTestCase_042343_1 "dEQP-GLES3.functional.dither."
#define VkglTestCase_042343_2 "disabled.unicolored_quad_white"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042343, VkglTestCase_042343_1, VkglTestCase_042343_2);

#define VkglTestCase_042344_1 "dEQP-GLES3.functional.dither"
#define VkglTestCase_042344_2 ".disabled.unicolored_quad_red"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042344, VkglTestCase_042344_1, VkglTestCase_042344_2);

#define VkglTestCase_042345_1 "dEQP-GLES3.functional.dither."
#define VkglTestCase_042345_2 "disabled.unicolored_quad_green"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042345, VkglTestCase_042345_1, VkglTestCase_042345_2);

#define VkglTestCase_042346_1 "dEQP-GLES3.functional.dither."
#define VkglTestCase_042346_2 "disabled.unicolored_quad_blue"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042346, VkglTestCase_042346_1, VkglTestCase_042346_2);

#define VkglTestCase_042347_1 "dEQP-GLES3.functional.dither."
#define VkglTestCase_042347_2 "disabled.unicolored_quad_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042347, VkglTestCase_042347_1, VkglTestCase_042347_2);
