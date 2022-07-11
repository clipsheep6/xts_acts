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
#include "../ActsDeqpgles310022TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_021812_1 "dEQP-GLES31.functional.program_interface_quer"
#define VkglTestCase_021812_2 "y.program_input.array_size.vertex_fragment.var"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021812, VkglTestCase_021812_1, VkglTestCase_021812_2);

#define VkglTestCase_022396_1 "dEQP-GLES31.functional.program_interface_query"
#define VkglTestCase_022396_2 ".program_output.array_size.vertex_fragment.var"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_022396, VkglTestCase_022396_1, VkglTestCase_022396_2);

#define VkglTestCase_022397_1 "dEQP-GLES31.functional.program_interface_query.pr"
#define VkglTestCase_022397_2 "ogram_output.array_size.vertex_fragment.var_array"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_022397, VkglTestCase_022397_1, VkglTestCase_022397_2);

#define VkglTestCase_023007_1 "dEQP-GLES31.functional.program_interface_query.transform_fee"
#define VkglTestCase_023007_2 "dback_varying.array_size.vertex_fragment.builtin_gl_position"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_023007, VkglTestCase_023007_1, VkglTestCase_023007_2);

#define VkglTestCase_023008_1 "dEQP-GLES31.functional.program_interface_query.transform_feedb"
#define VkglTestCase_023008_2 "ack_varying.array_size.vertex_fragment.default_block_basic_type"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_023008, VkglTestCase_023008_1, VkglTestCase_023008_2);

#define VkglTestCase_023009_1 "dEQP-GLES31.functional.program_interface_query.transform_feedbac"
#define VkglTestCase_023009_2 "k_varying.array_size.vertex_fragment.default_block_struct_member"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_023009, VkglTestCase_023009_1, VkglTestCase_023009_2);

#define VkglTestCase_023010_1 "dEQP-GLES31.functional.program_interface_query.transform_fee"
#define VkglTestCase_023010_2 "dback_varying.array_size.vertex_fragment.default_block_array"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_023010, VkglTestCase_023010_1, VkglTestCase_023010_2);

#define VkglTestCase_023011_1 "dEQP-GLES31.functional.program_interface_query.transform_feedbac"
#define VkglTestCase_023011_2 "k_varying.array_size.vertex_fragment.default_block_array_element"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_023011, VkglTestCase_023011_1, VkglTestCase_023011_2);
