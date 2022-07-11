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

#define VkglTestCase_021772_1 "dEQP-GLES31.functional.program_interface_query.p"
#define VkglTestCase_021772_2 "rogram_input.resource_list.separable_vertex.empty"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021772, VkglTestCase_021772_1, VkglTestCase_021772_2);

#define VkglTestCase_021773_1 "dEQP-GLES31.functional.program_interface_query."
#define VkglTestCase_021773_2 "program_input.resource_list.separable_vertex.var"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021773, VkglTestCase_021773_1, VkglTestCase_021773_2);

#define VkglTestCase_022351_1 "dEQP-GLES31.functional.program_interface_query.pr"
#define VkglTestCase_022351_2 "ogram_output.resource_list.separable_vertex.empty"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_022351, VkglTestCase_022351_1, VkglTestCase_022351_2);

#define VkglTestCase_022352_1 "dEQP-GLES31.functional.program_interface_query.p"
#define VkglTestCase_022352_2 "rogram_output.resource_list.separable_vertex.var"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_022352, VkglTestCase_022352_1, VkglTestCase_022352_2);

#define VkglTestCase_022353_1 "dEQP-GLES31.functional.program_interface_query.prog"
#define VkglTestCase_022353_2 "ram_output.resource_list.separable_vertex.var_struct"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_022353, VkglTestCase_022353_1, VkglTestCase_022353_2);

#define VkglTestCase_022354_1 "dEQP-GLES31.functional.program_interface_query.prog"
#define VkglTestCase_022354_2 "ram_output.resource_list.separable_vertex.var_array"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_022354, VkglTestCase_022354_1, VkglTestCase_022354_2);

#define VkglTestCase_022992_1 "dEQP-GLES31.functional.program_interface_query.transform_feedb"
#define VkglTestCase_022992_2 "ack_varying.resource_list.separable_vertex.builtin_gl_position"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_022992, VkglTestCase_022992_1, VkglTestCase_022992_2);

#define VkglTestCase_022993_1 "dEQP-GLES31.functional.program_interface_query.transform_feedbac"
#define VkglTestCase_022993_2 "k_varying.resource_list.separable_vertex.default_block_basic_type"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_022993, VkglTestCase_022993_1, VkglTestCase_022993_2);

#define VkglTestCase_022994_1 "dEQP-GLES31.functional.program_interface_query.transform_feedback_"
#define VkglTestCase_022994_2 "varying.resource_list.separable_vertex.default_block_struct_member"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_022994, VkglTestCase_022994_1, VkglTestCase_022994_2);

#define VkglTestCase_022995_1 "dEQP-GLES31.functional.program_interface_query.transform_feedb"
#define VkglTestCase_022995_2 "ack_varying.resource_list.separable_vertex.default_block_array"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_022995, VkglTestCase_022995_1, VkglTestCase_022995_2);

#define VkglTestCase_022996_1 "dEQP-GLES31.functional.program_interface_query.transform_feedback_"
#define VkglTestCase_022996_2 "varying.resource_list.separable_vertex.default_block_array_element"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_022996, VkglTestCase_022996_1, VkglTestCase_022996_2);
