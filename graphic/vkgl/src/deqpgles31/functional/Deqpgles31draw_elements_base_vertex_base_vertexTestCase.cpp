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

#define VkglTestCase_037744_1 "dEQP-GLES31.functional.draw_base_vertex.draw"
#define VkglTestCase_037744_2 "_elements_base_vertex.base_vertex.index_byte"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037744, VkglTestCase_037744_1, VkglTestCase_037744_2);

#define VkglTestCase_037745_1 "dEQP-GLES31.functional.draw_base_vertex.draw"
#define VkglTestCase_037745_2 "_elements_base_vertex.base_vertex.index_short"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037745, VkglTestCase_037745_1, VkglTestCase_037745_2);

#define VkglTestCase_037746_1 "dEQP-GLES31.functional.draw_base_vertex.dra"
#define VkglTestCase_037746_2 "w_elements_base_vertex.base_vertex.index_int"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037746, VkglTestCase_037746_1, VkglTestCase_037746_2);

#define VkglTestCase_037747_1 "dEQP-GLES31.functional.draw_base_vertex.draw_e"
#define VkglTestCase_037747_2 "lements_base_vertex.base_vertex.index_neg_byte"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037747, VkglTestCase_037747_1, VkglTestCase_037747_2);

#define VkglTestCase_037748_1 "dEQP-GLES31.functional.draw_base_vertex.draw_e"
#define VkglTestCase_037748_2 "lements_base_vertex.base_vertex.index_neg_short"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037748, VkglTestCase_037748_1, VkglTestCase_037748_2);

#define VkglTestCase_037749_1 "dEQP-GLES31.functional.draw_base_vertex.draw_"
#define VkglTestCase_037749_2 "elements_base_vertex.base_vertex.index_neg_int"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037749, VkglTestCase_037749_1, VkglTestCase_037749_2);
