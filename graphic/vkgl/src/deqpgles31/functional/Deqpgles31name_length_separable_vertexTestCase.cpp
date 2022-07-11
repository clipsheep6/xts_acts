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

#define VkglTestCase_021912_1 "dEQP-GLES31.functional.program_interface_query"
#define VkglTestCase_021912_2 ".program_input.name_length.separable_vertex.var"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021912, VkglTestCase_021912_1, VkglTestCase_021912_2);

#define VkglTestCase_022515_1 "dEQP-GLES31.functional.program_interface_query."
#define VkglTestCase_022515_2 "program_output.name_length.separable_vertex.var"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_022515, VkglTestCase_022515_1, VkglTestCase_022515_2);

#define VkglTestCase_022516_1 "dEQP-GLES31.functional.program_interface_query.pro"
#define VkglTestCase_022516_2 "gram_output.name_length.separable_vertex.var_struct"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_022516, VkglTestCase_022516_1, VkglTestCase_022516_2);

#define VkglTestCase_022517_1 "dEQP-GLES31.functional.program_interface_query.pro"
#define VkglTestCase_022517_2 "gram_output.name_length.separable_vertex.var_array"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_022517, VkglTestCase_022517_1, VkglTestCase_022517_2);

#define VkglTestCase_023062_1 "dEQP-GLES31.functional.program_interface_query.transform_feed"
#define VkglTestCase_023062_2 "back_varying.name_length.separable_vertex.builtin_gl_position"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_023062, VkglTestCase_023062_1, VkglTestCase_023062_2);

#define VkglTestCase_023063_1 "dEQP-GLES31.functional.program_interface_query.transform_feedba"
#define VkglTestCase_023063_2 "ck_varying.name_length.separable_vertex.default_block_basic_type"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_023063, VkglTestCase_023063_1, VkglTestCase_023063_2);

#define VkglTestCase_023064_1 "dEQP-GLES31.functional.program_interface_query.transform_feedback"
#define VkglTestCase_023064_2 "_varying.name_length.separable_vertex.default_block_struct_member"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_023064, VkglTestCase_023064_1, VkglTestCase_023064_2);

#define VkglTestCase_023065_1 "dEQP-GLES31.functional.program_interface_query.transform_feed"
#define VkglTestCase_023065_2 "back_varying.name_length.separable_vertex.default_block_array"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_023065, VkglTestCase_023065_1, VkglTestCase_023065_2);

#define VkglTestCase_023066_1 "dEQP-GLES31.functional.program_interface_query.transform_feedback"
#define VkglTestCase_023066_2 "_varying.name_length.separable_vertex.default_block_array_element"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_023066, VkglTestCase_023066_1, VkglTestCase_023066_2);
