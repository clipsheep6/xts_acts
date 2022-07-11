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

#define VkglTestCase_037793_1 "dEQP-GLES31.functional.draw_base_vertex.draw_rang"
#define VkglTestCase_037793_2 "e_elements_base_vertex.triangles.single_attribute"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037793, VkglTestCase_037793_1, VkglTestCase_037793_2);

#define VkglTestCase_037794_1 "dEQP-GLES31.functional.draw_base_vertex.draw_range"
#define VkglTestCase_037794_2 "_elements_base_vertex.triangles.multiple_attributes"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037794, VkglTestCase_037794_1, VkglTestCase_037794_2);

#define VkglTestCase_037795_1 "dEQP-GLES31.functional.draw_base_vertex.draw_range_"
#define VkglTestCase_037795_2 "elements_base_vertex.triangles.instanced_attributes"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037795, VkglTestCase_037795_1, VkglTestCase_037795_2);

#define VkglTestCase_037796_1 "dEQP-GLES31.functional.draw_base_vertex.draw_rang"
#define VkglTestCase_037796_2 "e_elements_base_vertex.triangles.default_attribute"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037796, VkglTestCase_037796_1, VkglTestCase_037796_2);
