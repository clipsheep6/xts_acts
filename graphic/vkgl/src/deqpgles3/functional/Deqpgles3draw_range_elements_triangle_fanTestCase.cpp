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

#define VkglTestCase_044064_1 "dEQP-GLES3.functional.draw.draw_range_"
#define VkglTestCase_044064_2 "elements.triangle_fan.single_attribute"
SHRINK_HWTEST_F(ActsDeqpgles30045TestSuite, TestCase_044064, VkglTestCase_044064_1, VkglTestCase_044064_2);

#define VkglTestCase_044065_1 "dEQP-GLES3.functional.draw.draw_range_e"
#define VkglTestCase_044065_2 "lements.triangle_fan.multiple_attributes"
SHRINK_HWTEST_F(ActsDeqpgles30045TestSuite, TestCase_044065, VkglTestCase_044065_1, VkglTestCase_044065_2);

#define VkglTestCase_044066_1 "dEQP-GLES3.functional.draw.draw_range_el"
#define VkglTestCase_044066_2 "ements.triangle_fan.instanced_attributes"
SHRINK_HWTEST_F(ActsDeqpgles30045TestSuite, TestCase_044066, VkglTestCase_044066_1, VkglTestCase_044066_2);

#define VkglTestCase_044067_1 "dEQP-GLES3.functional.draw.draw_range_"
#define VkglTestCase_044067_2 "elements.triangle_fan.default_attribute"
SHRINK_HWTEST_F(ActsDeqpgles30045TestSuite, TestCase_044067, VkglTestCase_044067_1, VkglTestCase_044067_2);
