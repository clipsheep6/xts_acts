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

#define VkglTestCase_044080_1 "dEQP-GLES3.functional.draw.draw_rang"
#define VkglTestCase_044080_2 "e_elements.line_loop.single_attribute"
SHRINK_HWTEST_F(ActsDeqpgles30045TestSuite, TestCase_044080, VkglTestCase_044080_1, VkglTestCase_044080_2);

#define VkglTestCase_044081_1 "dEQP-GLES3.functional.draw.draw_range_"
#define VkglTestCase_044081_2 "elements.line_loop.multiple_attributes"
SHRINK_HWTEST_F(ActsDeqpgles30045TestSuite, TestCase_044081, VkglTestCase_044081_1, VkglTestCase_044081_2);

#define VkglTestCase_044082_1 "dEQP-GLES3.functional.draw.draw_range_"
#define VkglTestCase_044082_2 "elements.line_loop.instanced_attributes"
SHRINK_HWTEST_F(ActsDeqpgles30045TestSuite, TestCase_044082, VkglTestCase_044082_1, VkglTestCase_044082_2);

#define VkglTestCase_044083_1 "dEQP-GLES3.functional.draw.draw_range"
#define VkglTestCase_044083_2 "_elements.line_loop.default_attribute"
SHRINK_HWTEST_F(ActsDeqpgles30045TestSuite, TestCase_044083, VkglTestCase_044083_1, VkglTestCase_044083_2);
