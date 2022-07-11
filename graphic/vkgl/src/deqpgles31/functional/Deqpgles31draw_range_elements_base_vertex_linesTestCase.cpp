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

#define VkglTestCase_037805_1 "dEQP-GLES31.functional.draw_base_vertex.draw_ra"
#define VkglTestCase_037805_2 "nge_elements_base_vertex.lines.single_attribute"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037805, VkglTestCase_037805_1, VkglTestCase_037805_2);

#define VkglTestCase_037806_1 "dEQP-GLES31.functional.draw_base_vertex.draw_ran"
#define VkglTestCase_037806_2 "ge_elements_base_vertex.lines.multiple_attributes"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037806, VkglTestCase_037806_1, VkglTestCase_037806_2);

#define VkglTestCase_037807_1 "dEQP-GLES31.functional.draw_base_vertex.draw_rang"
#define VkglTestCase_037807_2 "e_elements_base_vertex.lines.instanced_attributes"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037807, VkglTestCase_037807_1, VkglTestCase_037807_2);

#define VkglTestCase_037808_1 "dEQP-GLES31.functional.draw_base_vertex.draw_ra"
#define VkglTestCase_037808_2 "nge_elements_base_vertex.lines.default_attribute"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037808, VkglTestCase_037808_1, VkglTestCase_037808_2);
