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

#define VkglTestCase_037820_1 "dEQP-GLES31.functional.draw_base_vertex.draw_elem"
#define VkglTestCase_037820_2 "ents_instanced_base_vertex.base_vertex.index_byte"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037820, VkglTestCase_037820_1, VkglTestCase_037820_2);

#define VkglTestCase_037821_1 "dEQP-GLES31.functional.draw_base_vertex.draw_elem"
#define VkglTestCase_037821_2 "ents_instanced_base_vertex.base_vertex.index_short"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037821, VkglTestCase_037821_1, VkglTestCase_037821_2);

#define VkglTestCase_037822_1 "dEQP-GLES31.functional.draw_base_vertex.draw_ele"
#define VkglTestCase_037822_2 "ments_instanced_base_vertex.base_vertex.index_int"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037822, VkglTestCase_037822_1, VkglTestCase_037822_2);

#define VkglTestCase_037823_1 "dEQP-GLES31.functional.draw_base_vertex.draw_elemen"
#define VkglTestCase_037823_2 "ts_instanced_base_vertex.base_vertex.index_neg_byte"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037823, VkglTestCase_037823_1, VkglTestCase_037823_2);

#define VkglTestCase_037824_1 "dEQP-GLES31.functional.draw_base_vertex.draw_elemen"
#define VkglTestCase_037824_2 "ts_instanced_base_vertex.base_vertex.index_neg_short"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037824, VkglTestCase_037824_1, VkglTestCase_037824_2);

#define VkglTestCase_037825_1 "dEQP-GLES31.functional.draw_base_vertex.draw_eleme"
#define VkglTestCase_037825_2 "nts_instanced_base_vertex.base_vertex.index_neg_int"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037825, VkglTestCase_037825_1, VkglTestCase_037825_2);
