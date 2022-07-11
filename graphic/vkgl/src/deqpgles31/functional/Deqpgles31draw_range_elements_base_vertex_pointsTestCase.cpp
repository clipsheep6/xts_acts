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

#define VkglTestCase_037789_1 "dEQP-GLES31.functional.draw_base_vertex.draw_ra"
#define VkglTestCase_037789_2 "nge_elements_base_vertex.points.single_attribute"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037789, VkglTestCase_037789_1, VkglTestCase_037789_2);

#define VkglTestCase_037790_1 "dEQP-GLES31.functional.draw_base_vertex.draw_rang"
#define VkglTestCase_037790_2 "e_elements_base_vertex.points.multiple_attributes"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037790, VkglTestCase_037790_1, VkglTestCase_037790_2);

#define VkglTestCase_037791_1 "dEQP-GLES31.functional.draw_base_vertex.draw_rang"
#define VkglTestCase_037791_2 "e_elements_base_vertex.points.instanced_attributes"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037791, VkglTestCase_037791_1, VkglTestCase_037791_2);

#define VkglTestCase_037792_1 "dEQP-GLES31.functional.draw_base_vertex.draw_ran"
#define VkglTestCase_037792_2 "ge_elements_base_vertex.points.default_attribute"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037792, VkglTestCase_037792_1, VkglTestCase_037792_2);
