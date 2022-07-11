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

#define VkglTestCase_037759_1 "dEQP-GLES31.functional.draw_base_vertex.draw_el"
#define VkglTestCase_037759_2 "ements_base_vertex.triangle_fan.single_attribute"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037759, VkglTestCase_037759_1, VkglTestCase_037759_2);

#define VkglTestCase_037760_1 "dEQP-GLES31.functional.draw_base_vertex.draw_elem"
#define VkglTestCase_037760_2 "ents_base_vertex.triangle_fan.multiple_attributes"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037760, VkglTestCase_037760_1, VkglTestCase_037760_2);

#define VkglTestCase_037761_1 "dEQP-GLES31.functional.draw_base_vertex.draw_elem"
#define VkglTestCase_037761_2 "ents_base_vertex.triangle_fan.instanced_attributes"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037761, VkglTestCase_037761_1, VkglTestCase_037761_2);

#define VkglTestCase_037762_1 "dEQP-GLES31.functional.draw_base_vertex.draw_ele"
#define VkglTestCase_037762_2 "ments_base_vertex.triangle_fan.default_attribute"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037762, VkglTestCase_037762_1, VkglTestCase_037762_2);
