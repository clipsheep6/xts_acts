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

#define VkglTestCase_021800_1 "dEQP-GLES31.functional.program_interface_query.program_inp"
#define VkglTestCase_021800_2 "ut.resource_list.interface_blocks.patch_in.named_block.var"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021800, VkglTestCase_021800_1, VkglTestCase_021800_2);

#define VkglTestCase_021801_1 "dEQP-GLES31.functional.program_interface_query.program_input."
#define VkglTestCase_021801_2 "resource_list.interface_blocks.patch_in.named_block.var_struct"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021801, VkglTestCase_021801_1, VkglTestCase_021801_2);

#define VkglTestCase_021802_1 "dEQP-GLES31.functional.program_interface_query.program_input."
#define VkglTestCase_021802_2 "resource_list.interface_blocks.patch_in.named_block.var_array"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021802, VkglTestCase_021802_1, VkglTestCase_021802_2);

#define VkglTestCase_021835_1 "dEQP-GLES31.functional.program_interface_query.program_i"
#define VkglTestCase_021835_2 "nput.array_size.interface_blocks.patch_in.named_block.var"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021835, VkglTestCase_021835_1, VkglTestCase_021835_2);

#define VkglTestCase_021836_1 "dEQP-GLES31.functional.program_interface_query.program_input"
#define VkglTestCase_021836_2 ".array_size.interface_blocks.patch_in.named_block.var_struct"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021836, VkglTestCase_021836_1, VkglTestCase_021836_2);

#define VkglTestCase_021837_1 "dEQP-GLES31.functional.program_interface_query.program_inpu"
#define VkglTestCase_021837_2 "t.array_size.interface_blocks.patch_in.named_block.var_array"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021837, VkglTestCase_021837_1, VkglTestCase_021837_2);

#define VkglTestCase_021890_1 "dEQP-GLES31.functional.program_interface_query.program_"
#define VkglTestCase_021890_2 "input.location.interface_blocks.patch_in.named_block.var"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021890, VkglTestCase_021890_1, VkglTestCase_021890_2);

#define VkglTestCase_021891_1 "dEQP-GLES31.functional.program_interface_query.program_input.loc"
#define VkglTestCase_021891_2 "ation.interface_blocks.patch_in.named_block.var_explicit_location"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021891, VkglTestCase_021891_1, VkglTestCase_021891_2);

#define VkglTestCase_021892_1 "dEQP-GLES31.functional.program_interface_query.program_inpu"
#define VkglTestCase_021892_2 "t.location.interface_blocks.patch_in.named_block.var_struct"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021892, VkglTestCase_021892_1, VkglTestCase_021892_2);

#define VkglTestCase_021893_1 "dEQP-GLES31.functional.program_interface_query.program_input.locatio"
#define VkglTestCase_021893_2 "n.interface_blocks.patch_in.named_block.var_struct_explicit_location"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021893, VkglTestCase_021893_1, VkglTestCase_021893_2);

#define VkglTestCase_021894_1 "dEQP-GLES31.functional.program_interface_query.program_inp"
#define VkglTestCase_021894_2 "ut.location.interface_blocks.patch_in.named_block.var_array"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021894, VkglTestCase_021894_1, VkglTestCase_021894_2);

#define VkglTestCase_021895_1 "dEQP-GLES31.functional.program_interface_query.program_input.locati"
#define VkglTestCase_021895_2 "on.interface_blocks.patch_in.named_block.var_array_explicit_location"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021895, VkglTestCase_021895_1, VkglTestCase_021895_2);

#define VkglTestCase_021934_1 "dEQP-GLES31.functional.program_interface_query.program_in"
#define VkglTestCase_021934_2 "put.name_length.interface_blocks.patch_in.named_block.var"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021934, VkglTestCase_021934_1, VkglTestCase_021934_2);

#define VkglTestCase_021935_1 "dEQP-GLES31.functional.program_interface_query.program_input"
#define VkglTestCase_021935_2 ".name_length.interface_blocks.patch_in.named_block.var_struct"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021935, VkglTestCase_021935_1, VkglTestCase_021935_2);

#define VkglTestCase_021936_1 "dEQP-GLES31.functional.program_interface_query.program_input"
#define VkglTestCase_021936_2 ".name_length.interface_blocks.patch_in.named_block.var_array"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021936, VkglTestCase_021936_1, VkglTestCase_021936_2);

#define VkglTestCase_022336_1 "dEQP-GLES31.functional.program_interface_query.program_in"
#define VkglTestCase_022336_2 "put.is_per_patch.interface_blocks.patch_in.named_block.var"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_022336, VkglTestCase_022336_1, VkglTestCase_022336_2);

#define VkglTestCase_022337_1 "dEQP-GLES31.functional.program_interface_query.program_input."
#define VkglTestCase_022337_2 "is_per_patch.interface_blocks.patch_in.named_block.var_struct"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_022337, VkglTestCase_022337_1, VkglTestCase_022337_2);

#define VkglTestCase_022338_1 "dEQP-GLES31.functional.program_interface_query.program_input"
#define VkglTestCase_022338_2 ".is_per_patch.interface_blocks.patch_in.named_block.var_array"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_022338, VkglTestCase_022338_1, VkglTestCase_022338_2);
