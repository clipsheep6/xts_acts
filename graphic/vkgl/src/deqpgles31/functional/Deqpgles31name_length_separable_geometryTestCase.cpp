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

#define VkglTestCase_021921_1 "dEQP-GLES31.functional.program_interface_query."
#define VkglTestCase_021921_2 "program_input.name_length.separable_geometry.var"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021921, VkglTestCase_021921_1, VkglTestCase_021921_2);

#define VkglTestCase_022527_1 "dEQP-GLES31.functional.program_interface_query.p"
#define VkglTestCase_022527_2 "rogram_output.name_length.separable_geometry.var"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_022527, VkglTestCase_022527_1, VkglTestCase_022527_2);

#define VkglTestCase_022528_1 "dEQP-GLES31.functional.program_interface_query.prog"
#define VkglTestCase_022528_2 "ram_output.name_length.separable_geometry.var_struct"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_022528, VkglTestCase_022528_1, VkglTestCase_022528_2);

#define VkglTestCase_022529_1 "dEQP-GLES31.functional.program_interface_query.prog"
#define VkglTestCase_022529_2 "ram_output.name_length.separable_geometry.var_array"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_022529, VkglTestCase_022529_1, VkglTestCase_022529_2);

#define VkglTestCase_023072_1 "dEQP-GLES31.functional.program_interface_query.transform_feedb"
#define VkglTestCase_023072_2 "ack_varying.name_length.separable_geometry.builtin_gl_position"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_023072, VkglTestCase_023072_1, VkglTestCase_023072_2);

#define VkglTestCase_023073_1 "dEQP-GLES31.functional.program_interface_query.transform_feedbac"
#define VkglTestCase_023073_2 "k_varying.name_length.separable_geometry.default_block_basic_type"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_023073, VkglTestCase_023073_1, VkglTestCase_023073_2);

#define VkglTestCase_023074_1 "dEQP-GLES31.functional.program_interface_query.transform_feedback_"
#define VkglTestCase_023074_2 "varying.name_length.separable_geometry.default_block_struct_member"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_023074, VkglTestCase_023074_1, VkglTestCase_023074_2);

#define VkglTestCase_023075_1 "dEQP-GLES31.functional.program_interface_query.transform_feedb"
#define VkglTestCase_023075_2 "ack_varying.name_length.separable_geometry.default_block_array"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_023075, VkglTestCase_023075_1, VkglTestCase_023075_2);

#define VkglTestCase_023076_1 "dEQP-GLES31.functional.program_interface_query.transform_feedback_"
#define VkglTestCase_023076_2 "varying.name_length.separable_geometry.default_block_array_element"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_023076, VkglTestCase_023076_1, VkglTestCase_023076_2);
