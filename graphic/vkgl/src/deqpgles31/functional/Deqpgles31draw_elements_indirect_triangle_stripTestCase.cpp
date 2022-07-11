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

#define VkglTestCase_007757_1 "dEQP-GLES31.functional.draw_indirect.draw_ele"
#define VkglTestCase_007757_2 "ments_indirect.triangle_strip.single_attribute"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007757, VkglTestCase_007757_1, VkglTestCase_007757_2);

#define VkglTestCase_007758_1 "dEQP-GLES31.functional.draw_indirect.draw_eleme"
#define VkglTestCase_007758_2 "nts_indirect.triangle_strip.multiple_attributes"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007758, VkglTestCase_007758_1, VkglTestCase_007758_2);

#define VkglTestCase_007759_1 "dEQP-GLES31.functional.draw_indirect.draw_eleme"
#define VkglTestCase_007759_2 "nts_indirect.triangle_strip.instanced_attributes"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007759, VkglTestCase_007759_1, VkglTestCase_007759_2);

#define VkglTestCase_007760_1 "dEQP-GLES31.functional.draw_indirect.draw_elem"
#define VkglTestCase_007760_2 "ents_indirect.triangle_strip.default_attribute"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007760, VkglTestCase_007760_1, VkglTestCase_007760_2);
