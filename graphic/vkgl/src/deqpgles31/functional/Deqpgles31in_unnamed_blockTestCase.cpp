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

#define VkglTestCase_021794_1 "dEQP-GLES31.functional.program_interface_query.program_i"
#define VkglTestCase_021794_2 "nput.resource_list.interface_blocks.in.unnamed_block.var"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021794, VkglTestCase_021794_1, VkglTestCase_021794_2);

#define VkglTestCase_021795_1 "dEQP-GLES31.functional.program_interface_query.program_inpu"
#define VkglTestCase_021795_2 "t.resource_list.interface_blocks.in.unnamed_block.var_struct"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021795, VkglTestCase_021795_1, VkglTestCase_021795_2);

#define VkglTestCase_021796_1 "dEQP-GLES31.functional.program_interface_query.program_inpu"
#define VkglTestCase_021796_2 "t.resource_list.interface_blocks.in.unnamed_block.var_array"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021796, VkglTestCase_021796_1, VkglTestCase_021796_2);

#define VkglTestCase_021829_1 "dEQP-GLES31.functional.program_interface_query.program"
#define VkglTestCase_021829_2 "_input.array_size.interface_blocks.in.unnamed_block.var"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021829, VkglTestCase_021829_1, VkglTestCase_021829_2);

#define VkglTestCase_021830_1 "dEQP-GLES31.functional.program_interface_query.program_inp"
#define VkglTestCase_021830_2 "ut.array_size.interface_blocks.in.unnamed_block.var_struct"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021830, VkglTestCase_021830_1, VkglTestCase_021830_2);

#define VkglTestCase_021831_1 "dEQP-GLES31.functional.program_interface_query.program_in"
#define VkglTestCase_021831_2 "put.array_size.interface_blocks.in.unnamed_block.var_array"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021831, VkglTestCase_021831_1, VkglTestCase_021831_2);

#define VkglTestCase_021881_1 "dEQP-GLES31.functional.program_interface_query.progra"
#define VkglTestCase_021881_2 "m_input.location.interface_blocks.in.unnamed_block.var"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021881, VkglTestCase_021881_1, VkglTestCase_021881_2);

#define VkglTestCase_021882_1 "dEQP-GLES31.functional.program_interface_query.program_input.l"
#define VkglTestCase_021882_2 "ocation.interface_blocks.in.unnamed_block.var_explicit_location"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021882, VkglTestCase_021882_1, VkglTestCase_021882_2);

#define VkglTestCase_021883_1 "dEQP-GLES31.functional.program_interface_query.program_in"
#define VkglTestCase_021883_2 "put.location.interface_blocks.in.unnamed_block.var_struct"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021883, VkglTestCase_021883_1, VkglTestCase_021883_2);

#define VkglTestCase_021884_1 "dEQP-GLES31.functional.program_interface_query.program_input.locat"
#define VkglTestCase_021884_2 "ion.interface_blocks.in.unnamed_block.var_struct_explicit_location"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021884, VkglTestCase_021884_1, VkglTestCase_021884_2);

#define VkglTestCase_021885_1 "dEQP-GLES31.functional.program_interface_query.program_i"
#define VkglTestCase_021885_2 "nput.location.interface_blocks.in.unnamed_block.var_array"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021885, VkglTestCase_021885_1, VkglTestCase_021885_2);

#define VkglTestCase_021886_1 "dEQP-GLES31.functional.program_interface_query.program_input.loca"
#define VkglTestCase_021886_2 "tion.interface_blocks.in.unnamed_block.var_array_explicit_location"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021886, VkglTestCase_021886_1, VkglTestCase_021886_2);

#define VkglTestCase_021928_1 "dEQP-GLES31.functional.program_interface_query.program_"
#define VkglTestCase_021928_2 "input.name_length.interface_blocks.in.unnamed_block.var"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021928, VkglTestCase_021928_1, VkglTestCase_021928_2);

#define VkglTestCase_021929_1 "dEQP-GLES31.functional.program_interface_query.program_inp"
#define VkglTestCase_021929_2 "ut.name_length.interface_blocks.in.unnamed_block.var_struct"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021929, VkglTestCase_021929_1, VkglTestCase_021929_2);

#define VkglTestCase_021930_1 "dEQP-GLES31.functional.program_interface_query.program_inp"
#define VkglTestCase_021930_2 "ut.name_length.interface_blocks.in.unnamed_block.var_array"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021930, VkglTestCase_021930_1, VkglTestCase_021930_2);

#define VkglTestCase_022330_1 "dEQP-GLES31.functional.program_interface_query.program_"
#define VkglTestCase_022330_2 "input.is_per_patch.interface_blocks.in.unnamed_block.var"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_022330, VkglTestCase_022330_1, VkglTestCase_022330_2);

#define VkglTestCase_022331_1 "dEQP-GLES31.functional.program_interface_query.program_inpu"
#define VkglTestCase_022331_2 "t.is_per_patch.interface_blocks.in.unnamed_block.var_struct"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_022331, VkglTestCase_022331_1, VkglTestCase_022331_2);

#define VkglTestCase_022332_1 "dEQP-GLES31.functional.program_interface_query.program_inp"
#define VkglTestCase_022332_2 "ut.is_per_patch.interface_blocks.in.unnamed_block.var_array"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_022332, VkglTestCase_022332_1, VkglTestCase_022332_2);
