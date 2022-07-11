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

#define VkglTestCase_044048_1 "dEQP-GLES3.functional.draw.draw_element"
#define VkglTestCase_044048_2 "s_instanced.line_strip.single_attribute"
SHRINK_HWTEST_F(ActsDeqpgles30045TestSuite, TestCase_044048, VkglTestCase_044048_1, VkglTestCase_044048_2);

#define VkglTestCase_044049_1 "dEQP-GLES3.functional.draw.draw_elements"
#define VkglTestCase_044049_2 "_instanced.line_strip.multiple_attributes"
SHRINK_HWTEST_F(ActsDeqpgles30045TestSuite, TestCase_044049, VkglTestCase_044049_1, VkglTestCase_044049_2);

#define VkglTestCase_044050_1 "dEQP-GLES3.functional.draw.draw_elements_"
#define VkglTestCase_044050_2 "instanced.line_strip.instanced_attributes"
SHRINK_HWTEST_F(ActsDeqpgles30045TestSuite, TestCase_044050, VkglTestCase_044050_1, VkglTestCase_044050_2);

#define VkglTestCase_044051_1 "dEQP-GLES3.functional.draw.draw_element"
#define VkglTestCase_044051_2 "s_instanced.line_strip.default_attribute"
SHRINK_HWTEST_F(ActsDeqpgles30045TestSuite, TestCase_044051, VkglTestCase_044051_1, VkglTestCase_044051_2);
