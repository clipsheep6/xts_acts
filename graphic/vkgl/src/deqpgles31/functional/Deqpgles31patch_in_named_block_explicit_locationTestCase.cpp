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

#define VkglTestCase_021803_1 "dEQP-GLES31.functional.program_interface_query.program_input.resour"
#define VkglTestCase_021803_2 "ce_list.interface_blocks.patch_in.named_block_explicit_location.var"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021803, VkglTestCase_021803_1, VkglTestCase_021803_2);

#define VkglTestCase_021804_1 "dEQP-GLES31.functional.program_interface_query.program_input.resource_"
#define VkglTestCase_021804_2 "list.interface_blocks.patch_in.named_block_explicit_location.var_struct"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021804, VkglTestCase_021804_1, VkglTestCase_021804_2);

#define VkglTestCase_021805_1 "dEQP-GLES31.functional.program_interface_query.program_input.resource_"
#define VkglTestCase_021805_2 "list.interface_blocks.patch_in.named_block_explicit_location.var_array"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021805, VkglTestCase_021805_1, VkglTestCase_021805_2);

#define VkglTestCase_021838_1 "dEQP-GLES31.functional.program_interface_query.program_input.arra"
#define VkglTestCase_021838_2 "y_size.interface_blocks.patch_in.named_block_explicit_location.var"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021838, VkglTestCase_021838_1, VkglTestCase_021838_2);

#define VkglTestCase_021839_1 "dEQP-GLES31.functional.program_interface_query.program_input.array_si"
#define VkglTestCase_021839_2 "ze.interface_blocks.patch_in.named_block_explicit_location.var_struct"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021839, VkglTestCase_021839_1, VkglTestCase_021839_2);

#define VkglTestCase_021840_1 "dEQP-GLES31.functional.program_interface_query.program_input.array_s"
#define VkglTestCase_021840_2 "ize.interface_blocks.patch_in.named_block_explicit_location.var_array"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021840, VkglTestCase_021840_1, VkglTestCase_021840_2);

#define VkglTestCase_021896_1 "dEQP-GLES31.functional.program_interface_query.program_input.loc"
#define VkglTestCase_021896_2 "ation.interface_blocks.patch_in.named_block_explicit_location.var"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021896, VkglTestCase_021896_1, VkglTestCase_021896_2);

#define VkglTestCase_021897_1 "dEQP-GLES31.functional.program_interface_query.program_input.location.int"
#define VkglTestCase_021897_2 "erface_blocks.patch_in.named_block_explicit_location.var_explicit_location"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021897, VkglTestCase_021897_1, VkglTestCase_021897_2);

#define VkglTestCase_021898_1 "dEQP-GLES31.functional.program_interface_query.program_input.locatio"
#define VkglTestCase_021898_2 "n.interface_blocks.patch_in.named_block_explicit_location.var_struct"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021898, VkglTestCase_021898_1, VkglTestCase_021898_2);

#define VkglTestCase_021899_1 "dEQP-GLES31.functional.program_interface_query.program_input.location.interfa"
#define VkglTestCase_021899_2 "ce_blocks.patch_in.named_block_explicit_location.var_struct_explicit_location"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021899, VkglTestCase_021899_1, VkglTestCase_021899_2);

#define VkglTestCase_021900_1 "dEQP-GLES31.functional.program_interface_query.program_input.locati"
#define VkglTestCase_021900_2 "on.interface_blocks.patch_in.named_block_explicit_location.var_array"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021900, VkglTestCase_021900_1, VkglTestCase_021900_2);

#define VkglTestCase_021901_1 "dEQP-GLES31.functional.program_interface_query.program_input.location.interf"
#define VkglTestCase_021901_2 "ace_blocks.patch_in.named_block_explicit_location.var_array_explicit_location"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021901, VkglTestCase_021901_1, VkglTestCase_021901_2);

#define VkglTestCase_021937_1 "dEQP-GLES31.functional.program_interface_query.program_input.name_"
#define VkglTestCase_021937_2 "length.interface_blocks.patch_in.named_block_explicit_location.var"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021937, VkglTestCase_021937_1, VkglTestCase_021937_2);

#define VkglTestCase_021938_1 "dEQP-GLES31.functional.program_interface_query.program_input.name_len"
#define VkglTestCase_021938_2 "gth.interface_blocks.patch_in.named_block_explicit_location.var_struct"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021938, VkglTestCase_021938_1, VkglTestCase_021938_2);

#define VkglTestCase_021939_1 "dEQP-GLES31.functional.program_interface_query.program_input.name_len"
#define VkglTestCase_021939_2 "gth.interface_blocks.patch_in.named_block_explicit_location.var_array"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021939, VkglTestCase_021939_1, VkglTestCase_021939_2);

#define VkglTestCase_022339_1 "dEQP-GLES31.functional.program_interface_query.program_input.is_pe"
#define VkglTestCase_022339_2 "r_patch.interface_blocks.patch_in.named_block_explicit_location.var"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_022339, VkglTestCase_022339_1, VkglTestCase_022339_2);

#define VkglTestCase_022340_1 "dEQP-GLES31.functional.program_interface_query.program_input.is_per_pa"
#define VkglTestCase_022340_2 "tch.interface_blocks.patch_in.named_block_explicit_location.var_struct"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_022340, VkglTestCase_022340_1, VkglTestCase_022340_2);

#define VkglTestCase_022341_1 "dEQP-GLES31.functional.program_interface_query.program_input.is_per_p"
#define VkglTestCase_022341_2 "atch.interface_blocks.patch_in.named_block_explicit_location.var_array"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_022341, VkglTestCase_022341_1, VkglTestCase_022341_2);
