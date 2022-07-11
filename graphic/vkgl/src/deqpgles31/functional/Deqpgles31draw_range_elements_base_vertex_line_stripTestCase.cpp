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

#define VkglTestCase_037809_1 "dEQP-GLES31.functional.draw_base_vertex.draw_rang"
#define VkglTestCase_037809_2 "e_elements_base_vertex.line_strip.single_attribute"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037809, VkglTestCase_037809_1, VkglTestCase_037809_2);

#define VkglTestCase_037810_1 "dEQP-GLES31.functional.draw_base_vertex.draw_range_"
#define VkglTestCase_037810_2 "elements_base_vertex.line_strip.multiple_attributes"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037810, VkglTestCase_037810_1, VkglTestCase_037810_2);

#define VkglTestCase_037811_1 "dEQP-GLES31.functional.draw_base_vertex.draw_range_"
#define VkglTestCase_037811_2 "elements_base_vertex.line_strip.instanced_attributes"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037811, VkglTestCase_037811_1, VkglTestCase_037811_2);

#define VkglTestCase_037812_1 "dEQP-GLES31.functional.draw_base_vertex.draw_range"
#define VkglTestCase_037812_2 "_elements_base_vertex.line_strip.default_attribute"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037812, VkglTestCase_037812_1, VkglTestCase_037812_2);
