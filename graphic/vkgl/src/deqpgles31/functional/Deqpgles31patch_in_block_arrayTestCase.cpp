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

#define VkglTestCase_021809_1 "dEQP-GLES31.functional.program_interface_query.program_inp"
#define VkglTestCase_021809_2 "ut.resource_list.interface_blocks.patch_in.block_array.var"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021809, VkglTestCase_021809_1, VkglTestCase_021809_2);

#define VkglTestCase_021810_1 "dEQP-GLES31.functional.program_interface_query.program_input."
#define VkglTestCase_021810_2 "resource_list.interface_blocks.patch_in.block_array.var_struct"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021810, VkglTestCase_021810_1, VkglTestCase_021810_2);

#define VkglTestCase_021811_1 "dEQP-GLES31.functional.program_interface_query.program_input."
#define VkglTestCase_021811_2 "resource_list.interface_blocks.patch_in.block_array.var_array"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021811, VkglTestCase_021811_1, VkglTestCase_021811_2);

#define VkglTestCase_021844_1 "dEQP-GLES31.functional.program_interface_query.program_i"
#define VkglTestCase_021844_2 "nput.array_size.interface_blocks.patch_in.block_array.var"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021844, VkglTestCase_021844_1, VkglTestCase_021844_2);

#define VkglTestCase_021845_1 "dEQP-GLES31.functional.program_interface_query.program_input"
#define VkglTestCase_021845_2 ".array_size.interface_blocks.patch_in.block_array.var_struct"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021845, VkglTestCase_021845_1, VkglTestCase_021845_2);

#define VkglTestCase_021846_1 "dEQP-GLES31.functional.program_interface_query.program_inpu"
#define VkglTestCase_021846_2 "t.array_size.interface_blocks.patch_in.block_array.var_array"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021846, VkglTestCase_021846_1, VkglTestCase_021846_2);

#define VkglTestCase_021908_1 "dEQP-GLES31.functional.program_interface_query.program_"
#define VkglTestCase_021908_2 "input.location.interface_blocks.patch_in.block_array.var"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021908, VkglTestCase_021908_1, VkglTestCase_021908_2);

#define VkglTestCase_021909_1 "dEQP-GLES31.functional.program_interface_query.program_inpu"
#define VkglTestCase_021909_2 "t.location.interface_blocks.patch_in.block_array.var_struct"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021909, VkglTestCase_021909_1, VkglTestCase_021909_2);

#define VkglTestCase_021910_1 "dEQP-GLES31.functional.program_interface_query.program_inp"
#define VkglTestCase_021910_2 "ut.location.interface_blocks.patch_in.block_array.var_array"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021910, VkglTestCase_021910_1, VkglTestCase_021910_2);

#define VkglTestCase_021943_1 "dEQP-GLES31.functional.program_interface_query.program_in"
#define VkglTestCase_021943_2 "put.name_length.interface_blocks.patch_in.block_array.var"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021943, VkglTestCase_021943_1, VkglTestCase_021943_2);

#define VkglTestCase_021944_1 "dEQP-GLES31.functional.program_interface_query.program_input"
#define VkglTestCase_021944_2 ".name_length.interface_blocks.patch_in.block_array.var_struct"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021944, VkglTestCase_021944_1, VkglTestCase_021944_2);

#define VkglTestCase_021945_1 "dEQP-GLES31.functional.program_interface_query.program_input"
#define VkglTestCase_021945_2 ".name_length.interface_blocks.patch_in.block_array.var_array"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021945, VkglTestCase_021945_1, VkglTestCase_021945_2);

#define VkglTestCase_022345_1 "dEQP-GLES31.functional.program_interface_query.program_in"
#define VkglTestCase_022345_2 "put.is_per_patch.interface_blocks.patch_in.block_array.var"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_022345, VkglTestCase_022345_1, VkglTestCase_022345_2);

#define VkglTestCase_022346_1 "dEQP-GLES31.functional.program_interface_query.program_input."
#define VkglTestCase_022346_2 "is_per_patch.interface_blocks.patch_in.block_array.var_struct"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_022346, VkglTestCase_022346_1, VkglTestCase_022346_2);

#define VkglTestCase_022347_1 "dEQP-GLES31.functional.program_interface_query.program_input"
#define VkglTestCase_022347_2 ".is_per_patch.interface_blocks.patch_in.block_array.var_array"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_022347, VkglTestCase_022347_1, VkglTestCase_022347_2);
