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

#define VkglTestCase_007739_1 "dEQP-GLES31.functional.draw_indirect.draw"
#define VkglTestCase_007739_2 "_elements_indirect.base_vertex.index_byte"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007739, VkglTestCase_007739_1, VkglTestCase_007739_2);

#define VkglTestCase_007740_1 "dEQP-GLES31.functional.draw_indirect.draw"
#define VkglTestCase_007740_2 "_elements_indirect.base_vertex.index_short"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007740, VkglTestCase_007740_1, VkglTestCase_007740_2);

#define VkglTestCase_007741_1 "dEQP-GLES31.functional.draw_indirect.dra"
#define VkglTestCase_007741_2 "w_elements_indirect.base_vertex.index_int"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007741, VkglTestCase_007741_1, VkglTestCase_007741_2);

#define VkglTestCase_007742_1 "dEQP-GLES31.functional.draw_indirect.draw_e"
#define VkglTestCase_007742_2 "lements_indirect.base_vertex.index_neg_byte"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007742, VkglTestCase_007742_1, VkglTestCase_007742_2);

#define VkglTestCase_007743_1 "dEQP-GLES31.functional.draw_indirect.draw_e"
#define VkglTestCase_007743_2 "lements_indirect.base_vertex.index_neg_short"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007743, VkglTestCase_007743_1, VkglTestCase_007743_2);

#define VkglTestCase_007744_1 "dEQP-GLES31.functional.draw_indirect.draw_"
#define VkglTestCase_007744_2 "elements_indirect.base_vertex.index_neg_int"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007744, VkglTestCase_007744_1, VkglTestCase_007744_2);
