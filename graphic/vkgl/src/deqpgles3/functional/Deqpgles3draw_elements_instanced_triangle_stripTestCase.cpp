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
#include "../ActsDeqpgles30045TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_044040_1 "dEQP-GLES3.functional.draw.draw_elements_"
#define VkglTestCase_044040_2 "instanced.triangle_strip.single_attribute"
SHRINK_HWTEST_F(ActsDeqpgles30045TestSuite, TestCase_044040, VkglTestCase_044040_1, VkglTestCase_044040_2);

#define VkglTestCase_044041_1 "dEQP-GLES3.functional.draw.draw_elements_i"
#define VkglTestCase_044041_2 "nstanced.triangle_strip.multiple_attributes"
SHRINK_HWTEST_F(ActsDeqpgles30045TestSuite, TestCase_044041, VkglTestCase_044041_1, VkglTestCase_044041_2);

#define VkglTestCase_044042_1 "dEQP-GLES3.functional.draw.draw_elements_in"
#define VkglTestCase_044042_2 "stanced.triangle_strip.instanced_attributes"
SHRINK_HWTEST_F(ActsDeqpgles30045TestSuite, TestCase_044042, VkglTestCase_044042_1, VkglTestCase_044042_2);

#define VkglTestCase_044043_1 "dEQP-GLES3.functional.draw.draw_elements_"
#define VkglTestCase_044043_2 "instanced.triangle_strip.default_attribute"
SHRINK_HWTEST_F(ActsDeqpgles30045TestSuite, TestCase_044043, VkglTestCase_044043_1, VkglTestCase_044043_2);
