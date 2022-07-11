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

#define VkglTestCase_037767_1 "dEQP-GLES31.functional.draw_base_vertex.draw"
#define VkglTestCase_037767_2 "_elements_base_vertex.lines.single_attribute"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037767, VkglTestCase_037767_1, VkglTestCase_037767_2);

#define VkglTestCase_037768_1 "dEQP-GLES31.functional.draw_base_vertex.draw_"
#define VkglTestCase_037768_2 "elements_base_vertex.lines.multiple_attributes"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037768, VkglTestCase_037768_1, VkglTestCase_037768_2);

#define VkglTestCase_037769_1 "dEQP-GLES31.functional.draw_base_vertex.draw_e"
#define VkglTestCase_037769_2 "lements_base_vertex.lines.instanced_attributes"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037769, VkglTestCase_037769_1, VkglTestCase_037769_2);

#define VkglTestCase_037770_1 "dEQP-GLES31.functional.draw_base_vertex.draw"
#define VkglTestCase_037770_2 "_elements_base_vertex.lines.default_attribute"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037770, VkglTestCase_037770_1, VkglTestCase_037770_2);
