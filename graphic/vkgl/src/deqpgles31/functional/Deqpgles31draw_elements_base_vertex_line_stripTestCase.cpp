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

#define VkglTestCase_037771_1 "dEQP-GLES31.functional.draw_base_vertex.draw_e"
#define VkglTestCase_037771_2 "lements_base_vertex.line_strip.single_attribute"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037771, VkglTestCase_037771_1, VkglTestCase_037771_2);

#define VkglTestCase_037772_1 "dEQP-GLES31.functional.draw_base_vertex.draw_ele"
#define VkglTestCase_037772_2 "ments_base_vertex.line_strip.multiple_attributes"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037772, VkglTestCase_037772_1, VkglTestCase_037772_2);

#define VkglTestCase_037773_1 "dEQP-GLES31.functional.draw_base_vertex.draw_ele"
#define VkglTestCase_037773_2 "ments_base_vertex.line_strip.instanced_attributes"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037773, VkglTestCase_037773_1, VkglTestCase_037773_2);

#define VkglTestCase_037774_1 "dEQP-GLES31.functional.draw_base_vertex.draw_el"
#define VkglTestCase_037774_2 "ements_base_vertex.line_strip.default_attribute"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037774, VkglTestCase_037774_1, VkglTestCase_037774_2);
