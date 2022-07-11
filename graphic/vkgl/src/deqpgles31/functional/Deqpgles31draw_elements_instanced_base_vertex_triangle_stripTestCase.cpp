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

#define VkglTestCase_037839_1 "dEQP-GLES31.functional.draw_base_vertex.draw_elements"
#define VkglTestCase_037839_2 "_instanced_base_vertex.triangle_strip.single_attribute"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037839, VkglTestCase_037839_1, VkglTestCase_037839_2);

#define VkglTestCase_037840_1 "dEQP-GLES31.functional.draw_base_vertex.draw_elements_i"
#define VkglTestCase_037840_2 "nstanced_base_vertex.triangle_strip.multiple_attributes"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037840, VkglTestCase_037840_1, VkglTestCase_037840_2);

#define VkglTestCase_037841_1 "dEQP-GLES31.functional.draw_base_vertex.draw_elements_i"
#define VkglTestCase_037841_2 "nstanced_base_vertex.triangle_strip.instanced_attributes"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037841, VkglTestCase_037841_1, VkglTestCase_037841_2);

#define VkglTestCase_037842_1 "dEQP-GLES31.functional.draw_base_vertex.draw_elements_"
#define VkglTestCase_037842_2 "instanced_base_vertex.triangle_strip.default_attribute"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037842, VkglTestCase_037842_1, VkglTestCase_037842_2);
