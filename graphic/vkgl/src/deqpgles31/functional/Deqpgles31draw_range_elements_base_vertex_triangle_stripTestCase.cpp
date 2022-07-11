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
#include "../Deqpgles31BaseFunc.h"
#include "../ActsDeqpgles310038TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_037801_1 "dEQP-GLES31.functional.draw_base_vertex.draw_range_"
#define VkglTestCase_037801_2 "elements_base_vertex.triangle_strip.single_attribute"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037801, VkglTestCase_037801_1, VkglTestCase_037801_2);

#define VkglTestCase_037802_1 "dEQP-GLES31.functional.draw_base_vertex.draw_range_el"
#define VkglTestCase_037802_2 "ements_base_vertex.triangle_strip.multiple_attributes"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037802, VkglTestCase_037802_1, VkglTestCase_037802_2);

#define VkglTestCase_037803_1 "dEQP-GLES31.functional.draw_base_vertex.draw_range_el"
#define VkglTestCase_037803_2 "ements_base_vertex.triangle_strip.instanced_attributes"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037803, VkglTestCase_037803_1, VkglTestCase_037803_2);

#define VkglTestCase_037804_1 "dEQP-GLES31.functional.draw_base_vertex.draw_range_e"
#define VkglTestCase_037804_2 "lements_base_vertex.triangle_strip.default_attribute"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037804, VkglTestCase_037804_1, VkglTestCase_037804_2);
