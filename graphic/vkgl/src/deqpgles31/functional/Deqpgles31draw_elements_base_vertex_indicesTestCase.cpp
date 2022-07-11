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

#define VkglTestCase_037741_1 "dEQP-GLES31.functional.draw_base_vertex.dr"
#define VkglTestCase_037741_2 "aw_elements_base_vertex.indices.index_byte"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037741, VkglTestCase_037741_1, VkglTestCase_037741_2);

#define VkglTestCase_037742_1 "dEQP-GLES31.functional.draw_base_vertex.dr"
#define VkglTestCase_037742_2 "aw_elements_base_vertex.indices.index_short"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037742, VkglTestCase_037742_1, VkglTestCase_037742_2);

#define VkglTestCase_037743_1 "dEQP-GLES31.functional.draw_base_vertex.d"
#define VkglTestCase_037743_2 "raw_elements_base_vertex.indices.index_int"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037743, VkglTestCase_037743_1, VkglTestCase_037743_2);
