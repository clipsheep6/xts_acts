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

#define VkglTestCase_021770_1 "dEQP-GLES31.functional.program_interface_query.p"
#define VkglTestCase_021770_2 "rogram_input.resource_list.vertex_fragment.empty"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021770, VkglTestCase_021770_1, VkglTestCase_021770_2);

#define VkglTestCase_021771_1 "dEQP-GLES31.functional.program_interface_query."
#define VkglTestCase_021771_2 "program_input.resource_list.vertex_fragment.var"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021771, VkglTestCase_021771_1, VkglTestCase_021771_2);

#define VkglTestCase_022348_1 "dEQP-GLES31.functional.program_interface_query.p"
#define VkglTestCase_022348_2 "rogram_output.resource_list.vertex_fragment.empty"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_022348, VkglTestCase_022348_1, VkglTestCase_022348_2);

#define VkglTestCase_022349_1 "dEQP-GLES31.functional.program_interface_query."
#define VkglTestCase_022349_2 "program_output.resource_list.vertex_fragment.var"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_022349, VkglTestCase_022349_1, VkglTestCase_022349_2);

#define VkglTestCase_022350_1 "dEQP-GLES31.functional.program_interface_query.pro"
#define VkglTestCase_022350_2 "gram_output.resource_list.vertex_fragment.var_array"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_022350, VkglTestCase_022350_1, VkglTestCase_022350_2);

#define VkglTestCase_022972_1 "dEQP-GLES31.functional.program_interface_query.transform_feed"
#define VkglTestCase_022972_2 "back_varying.resource_list.vertex_fragment.builtin_gl_position"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_022972, VkglTestCase_022972_1, VkglTestCase_022972_2);

#define VkglTestCase_022973_1 "dEQP-GLES31.functional.program_interface_query.transform_feedbac"
#define VkglTestCase_022973_2 "k_varying.resource_list.vertex_fragment.default_block_basic_type"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_022973, VkglTestCase_022973_1, VkglTestCase_022973_2);

#define VkglTestCase_022974_1 "dEQP-GLES31.functional.program_interface_query.transform_feedback"
#define VkglTestCase_022974_2 "_varying.resource_list.vertex_fragment.default_block_struct_member"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_022974, VkglTestCase_022974_1, VkglTestCase_022974_2);

#define VkglTestCase_022975_1 "dEQP-GLES31.functional.program_interface_query.transform_feed"
#define VkglTestCase_022975_2 "back_varying.resource_list.vertex_fragment.default_block_array"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_022975, VkglTestCase_022975_1, VkglTestCase_022975_2);

#define VkglTestCase_022976_1 "dEQP-GLES31.functional.program_interface_query.transform_feedback"
#define VkglTestCase_022976_2 "_varying.resource_list.vertex_fragment.default_block_array_element"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_022976, VkglTestCase_022976_1, VkglTestCase_022976_2);
