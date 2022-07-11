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
#include "../ActsDeqpgles310008TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_007769_1 "dEQP-GLES31.functional.draw_indirect.draw_e"
#define VkglTestCase_007769_2 "lements_indirect.line_loop.single_attribute"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007769, VkglTestCase_007769_1, VkglTestCase_007769_2);

#define VkglTestCase_007770_1 "dEQP-GLES31.functional.draw_indirect.draw_el"
#define VkglTestCase_007770_2 "ements_indirect.line_loop.multiple_attributes"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007770, VkglTestCase_007770_1, VkglTestCase_007770_2);

#define VkglTestCase_007771_1 "dEQP-GLES31.functional.draw_indirect.draw_ele"
#define VkglTestCase_007771_2 "ments_indirect.line_loop.instanced_attributes"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007771, VkglTestCase_007771_1, VkglTestCase_007771_2);

#define VkglTestCase_007772_1 "dEQP-GLES31.functional.draw_indirect.draw_e"
#define VkglTestCase_007772_2 "lements_indirect.line_loop.default_attribute"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007772, VkglTestCase_007772_1, VkglTestCase_007772_2);
