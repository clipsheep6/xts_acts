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

#define VkglTestCase_037843_1 "dEQP-GLES31.functional.draw_base_vertex.draw_elem"
#define VkglTestCase_037843_2 "ents_instanced_base_vertex.lines.single_attribute"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037843, VkglTestCase_037843_1, VkglTestCase_037843_2);

#define VkglTestCase_037844_1 "dEQP-GLES31.functional.draw_base_vertex.draw_eleme"
#define VkglTestCase_037844_2 "nts_instanced_base_vertex.lines.multiple_attributes"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037844, VkglTestCase_037844_1, VkglTestCase_037844_2);

#define VkglTestCase_037845_1 "dEQP-GLES31.functional.draw_base_vertex.draw_elemen"
#define VkglTestCase_037845_2 "ts_instanced_base_vertex.lines.instanced_attributes"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037845, VkglTestCase_037845_1, VkglTestCase_037845_2);

#define VkglTestCase_037846_1 "dEQP-GLES31.functional.draw_base_vertex.draw_elem"
#define VkglTestCase_037846_2 "ents_instanced_base_vertex.lines.default_attribute"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037846, VkglTestCase_037846_1, VkglTestCase_037846_2);
