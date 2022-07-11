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

#define VkglTestCase_037751_1 "dEQP-GLES31.functional.draw_base_vertex.draw"
#define VkglTestCase_037751_2 "_elements_base_vertex.points.single_attribute"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037751, VkglTestCase_037751_1, VkglTestCase_037751_2);

#define VkglTestCase_037752_1 "dEQP-GLES31.functional.draw_base_vertex.draw_e"
#define VkglTestCase_037752_2 "lements_base_vertex.points.multiple_attributes"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037752, VkglTestCase_037752_1, VkglTestCase_037752_2);

#define VkglTestCase_037753_1 "dEQP-GLES31.functional.draw_base_vertex.draw_e"
#define VkglTestCase_037753_2 "lements_base_vertex.points.instanced_attributes"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037753, VkglTestCase_037753_1, VkglTestCase_037753_2);

#define VkglTestCase_037754_1 "dEQP-GLES31.functional.draw_base_vertex.draw_"
#define VkglTestCase_037754_2 "elements_base_vertex.points.default_attribute"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037754, VkglTestCase_037754_1, VkglTestCase_037754_2);
