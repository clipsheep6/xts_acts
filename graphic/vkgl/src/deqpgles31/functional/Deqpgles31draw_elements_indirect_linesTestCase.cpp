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

#define VkglTestCase_007761_1 "dEQP-GLES31.functional.draw_indirect.draw"
#define VkglTestCase_007761_2 "_elements_indirect.lines.single_attribute"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007761, VkglTestCase_007761_1, VkglTestCase_007761_2);

#define VkglTestCase_007762_1 "dEQP-GLES31.functional.draw_indirect.draw_"
#define VkglTestCase_007762_2 "elements_indirect.lines.multiple_attributes"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007762, VkglTestCase_007762_1, VkglTestCase_007762_2);

#define VkglTestCase_007763_1 "dEQP-GLES31.functional.draw_indirect.draw_e"
#define VkglTestCase_007763_2 "lements_indirect.lines.instanced_attributes"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007763, VkglTestCase_007763_1, VkglTestCase_007763_2);

#define VkglTestCase_007764_1 "dEQP-GLES31.functional.draw_indirect.draw"
#define VkglTestCase_007764_2 "_elements_indirect.lines.default_attribute"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007764, VkglTestCase_007764_1, VkglTestCase_007764_2);
