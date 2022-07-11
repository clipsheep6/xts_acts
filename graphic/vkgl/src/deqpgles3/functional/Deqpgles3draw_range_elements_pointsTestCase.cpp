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

#define VkglTestCase_044056_1 "dEQP-GLES3.functional.draw.draw_ran"
#define VkglTestCase_044056_2 "ge_elements.points.single_attribute"
SHRINK_HWTEST_F(ActsDeqpgles30045TestSuite, TestCase_044056, VkglTestCase_044056_1, VkglTestCase_044056_2);

#define VkglTestCase_044057_1 "dEQP-GLES3.functional.draw.draw_rang"
#define VkglTestCase_044057_2 "e_elements.points.multiple_attributes"
SHRINK_HWTEST_F(ActsDeqpgles30045TestSuite, TestCase_044057, VkglTestCase_044057_1, VkglTestCase_044057_2);

#define VkglTestCase_044058_1 "dEQP-GLES3.functional.draw.draw_range"
#define VkglTestCase_044058_2 "_elements.points.instanced_attributes"
SHRINK_HWTEST_F(ActsDeqpgles30045TestSuite, TestCase_044058, VkglTestCase_044058_1, VkglTestCase_044058_2);

#define VkglTestCase_044059_1 "dEQP-GLES3.functional.draw.draw_ran"
#define VkglTestCase_044059_2 "ge_elements.points.default_attribute"
SHRINK_HWTEST_F(ActsDeqpgles30045TestSuite, TestCase_044059, VkglTestCase_044059_1, VkglTestCase_044059_2);
