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

#define VkglTestCase_021788_1 "dEQP-GLES31.functional.program_interface_query.program_"
#define VkglTestCase_021788_2 "input.resource_list.interface_blocks.in.named_block.var"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021788, VkglTestCase_021788_1, VkglTestCase_021788_2);

#define VkglTestCase_021789_1 "dEQP-GLES31.functional.program_interface_query.program_inp"
#define VkglTestCase_021789_2 "ut.resource_list.interface_blocks.in.named_block.var_struct"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021789, VkglTestCase_021789_1, VkglTestCase_021789_2);

#define VkglTestCase_021790_1 "dEQP-GLES31.functional.program_interface_query.program_inp"
#define VkglTestCase_021790_2 "ut.resource_list.interface_blocks.in.named_block.var_array"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021790, VkglTestCase_021790_1, VkglTestCase_021790_2);

#define VkglTestCase_021823_1 "dEQP-GLES31.functional.program_interface_query.progra"
#define VkglTestCase_021823_2 "m_input.array_size.interface_blocks.in.named_block.var"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021823, VkglTestCase_021823_1, VkglTestCase_021823_2);

#define VkglTestCase_021824_1 "dEQP-GLES31.functional.program_interface_query.program_in"
#define VkglTestCase_021824_2 "put.array_size.interface_blocks.in.named_block.var_struct"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021824, VkglTestCase_021824_1, VkglTestCase_021824_2);

#define VkglTestCase_021825_1 "dEQP-GLES31.functional.program_interface_query.program_i"
#define VkglTestCase_021825_2 "nput.array_size.interface_blocks.in.named_block.var_array"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021825, VkglTestCase_021825_1, VkglTestCase_021825_2);

#define VkglTestCase_021869_1 "dEQP-GLES31.functional.program_interface_query.progr"
#define VkglTestCase_021869_2 "am_input.location.interface_blocks.in.named_block.var"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021869, VkglTestCase_021869_1, VkglTestCase_021869_2);

#define VkglTestCase_021870_1 "dEQP-GLES31.functional.program_interface_query.program_input."
#define VkglTestCase_021870_2 "location.interface_blocks.in.named_block.var_explicit_location"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021870, VkglTestCase_021870_1, VkglTestCase_021870_2);

#define VkglTestCase_021871_1 "dEQP-GLES31.functional.program_interface_query.program_i"
#define VkglTestCase_021871_2 "nput.location.interface_blocks.in.named_block.var_struct"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021871, VkglTestCase_021871_1, VkglTestCase_021871_2);

#define VkglTestCase_021872_1 "dEQP-GLES31.functional.program_interface_query.program_input.loca"
#define VkglTestCase_021872_2 "tion.interface_blocks.in.named_block.var_struct_explicit_location"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021872, VkglTestCase_021872_1, VkglTestCase_021872_2);

#define VkglTestCase_021873_1 "dEQP-GLES31.functional.program_interface_query.program_"
#define VkglTestCase_021873_2 "input.location.interface_blocks.in.named_block.var_array"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021873, VkglTestCase_021873_1, VkglTestCase_021873_2);

#define VkglTestCase_021874_1 "dEQP-GLES31.functional.program_interface_query.program_input.loc"
#define VkglTestCase_021874_2 "ation.interface_blocks.in.named_block.var_array_explicit_location"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021874, VkglTestCase_021874_1, VkglTestCase_021874_2);

#define VkglTestCase_021922_1 "dEQP-GLES31.functional.program_interface_query.program"
#define VkglTestCase_021922_2 "_input.name_length.interface_blocks.in.named_block.var"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021922, VkglTestCase_021922_1, VkglTestCase_021922_2);

#define VkglTestCase_021923_1 "dEQP-GLES31.functional.program_interface_query.program_in"
#define VkglTestCase_021923_2 "put.name_length.interface_blocks.in.named_block.var_struct"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021923, VkglTestCase_021923_1, VkglTestCase_021923_2);

#define VkglTestCase_021924_1 "dEQP-GLES31.functional.program_interface_query.program_in"
#define VkglTestCase_021924_2 "put.name_length.interface_blocks.in.named_block.var_array"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021924, VkglTestCase_021924_1, VkglTestCase_021924_2);

#define VkglTestCase_022324_1 "dEQP-GLES31.functional.program_interface_query.program"
#define VkglTestCase_022324_2 "_input.is_per_patch.interface_blocks.in.named_block.var"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_022324, VkglTestCase_022324_1, VkglTestCase_022324_2);

#define VkglTestCase_022325_1 "dEQP-GLES31.functional.program_interface_query.program_inp"
#define VkglTestCase_022325_2 "ut.is_per_patch.interface_blocks.in.named_block.var_struct"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_022325, VkglTestCase_022325_1, VkglTestCase_022325_2);

#define VkglTestCase_022326_1 "dEQP-GLES31.functional.program_interface_query.program_in"
#define VkglTestCase_022326_2 "put.is_per_patch.interface_blocks.in.named_block.var_array"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_022326, VkglTestCase_022326_1, VkglTestCase_022326_2);
