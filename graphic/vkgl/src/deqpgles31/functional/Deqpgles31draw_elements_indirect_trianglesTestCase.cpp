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

#define VkglTestCase_007749_1 "dEQP-GLES31.functional.draw_indirect.draw_e"
#define VkglTestCase_007749_2 "lements_indirect.triangles.single_attribute"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007749, VkglTestCase_007749_1, VkglTestCase_007749_2);

#define VkglTestCase_007750_1 "dEQP-GLES31.functional.draw_indirect.draw_el"
#define VkglTestCase_007750_2 "ements_indirect.triangles.multiple_attributes"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007750, VkglTestCase_007750_1, VkglTestCase_007750_2);

#define VkglTestCase_007751_1 "dEQP-GLES31.functional.draw_indirect.draw_ele"
#define VkglTestCase_007751_2 "ments_indirect.triangles.instanced_attributes"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007751, VkglTestCase_007751_1, VkglTestCase_007751_2);

#define VkglTestCase_007752_1 "dEQP-GLES31.functional.draw_indirect.draw_e"
#define VkglTestCase_007752_2 "lements_indirect.triangles.default_attribute"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007752, VkglTestCase_007752_1, VkglTestCase_007752_2);
