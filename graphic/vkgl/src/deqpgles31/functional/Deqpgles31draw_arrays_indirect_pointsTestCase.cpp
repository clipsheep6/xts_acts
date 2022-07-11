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

#define VkglTestCase_007708_1 "dEQP-GLES31.functional.draw_indirect.dra"
#define VkglTestCase_007708_2 "w_arrays_indirect.points.single_attribute"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007708, VkglTestCase_007708_1, VkglTestCase_007708_2);

#define VkglTestCase_007709_1 "dEQP-GLES31.functional.draw_indirect.draw_"
#define VkglTestCase_007709_2 "arrays_indirect.points.multiple_attributes"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007709, VkglTestCase_007709_1, VkglTestCase_007709_2);

#define VkglTestCase_007710_1 "dEQP-GLES31.functional.draw_indirect.draw_"
#define VkglTestCase_007710_2 "arrays_indirect.points.instanced_attributes"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007710, VkglTestCase_007710_1, VkglTestCase_007710_2);

#define VkglTestCase_007711_1 "dEQP-GLES31.functional.draw_indirect.draw"
#define VkglTestCase_007711_2 "_arrays_indirect.points.default_attribute"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007711, VkglTestCase_007711_1, VkglTestCase_007711_2);
