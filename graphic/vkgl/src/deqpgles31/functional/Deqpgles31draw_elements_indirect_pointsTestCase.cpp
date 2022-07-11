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

#define VkglTestCase_007745_1 "dEQP-GLES31.functional.draw_indirect.draw"
#define VkglTestCase_007745_2 "_elements_indirect.points.single_attribute"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007745, VkglTestCase_007745_1, VkglTestCase_007745_2);

#define VkglTestCase_007746_1 "dEQP-GLES31.functional.draw_indirect.draw_e"
#define VkglTestCase_007746_2 "lements_indirect.points.multiple_attributes"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007746, VkglTestCase_007746_1, VkglTestCase_007746_2);

#define VkglTestCase_007747_1 "dEQP-GLES31.functional.draw_indirect.draw_e"
#define VkglTestCase_007747_2 "lements_indirect.points.instanced_attributes"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007747, VkglTestCase_007747_1, VkglTestCase_007747_2);

#define VkglTestCase_007748_1 "dEQP-GLES31.functional.draw_indirect.draw_"
#define VkglTestCase_007748_2 "elements_indirect.points.default_attribute"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007748, VkglTestCase_007748_1, VkglTestCase_007748_2);
