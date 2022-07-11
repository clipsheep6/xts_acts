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

#define VkglTestCase_037782_1 "dEQP-GLES31.functional.draw_base_vertex.draw_ra"
#define VkglTestCase_037782_2 "nge_elements_base_vertex.base_vertex.index_byte"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037782, VkglTestCase_037782_1, VkglTestCase_037782_2);

#define VkglTestCase_037783_1 "dEQP-GLES31.functional.draw_base_vertex.draw_ra"
#define VkglTestCase_037783_2 "nge_elements_base_vertex.base_vertex.index_short"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037783, VkglTestCase_037783_1, VkglTestCase_037783_2);

#define VkglTestCase_037784_1 "dEQP-GLES31.functional.draw_base_vertex.draw_r"
#define VkglTestCase_037784_2 "ange_elements_base_vertex.base_vertex.index_int"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037784, VkglTestCase_037784_1, VkglTestCase_037784_2);

#define VkglTestCase_037785_1 "dEQP-GLES31.functional.draw_base_vertex.draw_rang"
#define VkglTestCase_037785_2 "e_elements_base_vertex.base_vertex.index_neg_byte"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037785, VkglTestCase_037785_1, VkglTestCase_037785_2);

#define VkglTestCase_037786_1 "dEQP-GLES31.functional.draw_base_vertex.draw_rang"
#define VkglTestCase_037786_2 "e_elements_base_vertex.base_vertex.index_neg_short"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037786, VkglTestCase_037786_1, VkglTestCase_037786_2);

#define VkglTestCase_037787_1 "dEQP-GLES31.functional.draw_base_vertex.draw_ran"
#define VkglTestCase_037787_2 "ge_elements_base_vertex.base_vertex.index_neg_int"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037787, VkglTestCase_037787_1, VkglTestCase_037787_2);
