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

#define VkglTestCase_037831_1 "dEQP-GLES31.functional.draw_base_vertex.draw_elemen"
#define VkglTestCase_037831_2 "ts_instanced_base_vertex.triangles.single_attribute"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037831, VkglTestCase_037831_1, VkglTestCase_037831_2);

#define VkglTestCase_037832_1 "dEQP-GLES31.functional.draw_base_vertex.draw_element"
#define VkglTestCase_037832_2 "s_instanced_base_vertex.triangles.multiple_attributes"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037832, VkglTestCase_037832_1, VkglTestCase_037832_2);

#define VkglTestCase_037833_1 "dEQP-GLES31.functional.draw_base_vertex.draw_elements"
#define VkglTestCase_037833_2 "_instanced_base_vertex.triangles.instanced_attributes"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037833, VkglTestCase_037833_1, VkglTestCase_037833_2);

#define VkglTestCase_037834_1 "dEQP-GLES31.functional.draw_base_vertex.draw_elemen"
#define VkglTestCase_037834_2 "ts_instanced_base_vertex.triangles.default_attribute"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037834, VkglTestCase_037834_1, VkglTestCase_037834_2);
