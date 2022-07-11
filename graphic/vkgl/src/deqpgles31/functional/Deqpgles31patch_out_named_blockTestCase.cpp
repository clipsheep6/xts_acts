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
#include "../ActsDeqpgles310023TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_022384_1 "dEQP-GLES31.functional.program_interface_query.program_outp"
#define VkglTestCase_022384_2 "ut.resource_list.interface_blocks.patch_out.named_block.var"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022384, VkglTestCase_022384_1, VkglTestCase_022384_2);

#define VkglTestCase_022385_1 "dEQP-GLES31.functional.program_interface_query.program_output."
#define VkglTestCase_022385_2 "resource_list.interface_blocks.patch_out.named_block.var_struct"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022385, VkglTestCase_022385_1, VkglTestCase_022385_2);

#define VkglTestCase_022386_1 "dEQP-GLES31.functional.program_interface_query.program_output."
#define VkglTestCase_022386_2 "resource_list.interface_blocks.patch_out.named_block.var_array"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022386, VkglTestCase_022386_1, VkglTestCase_022386_2);

#define VkglTestCase_022425_1 "dEQP-GLES31.functional.program_interface_query.program_ou"
#define VkglTestCase_022425_2 "tput.array_size.interface_blocks.patch_out.named_block.var"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022425, VkglTestCase_022425_1, VkglTestCase_022425_2);

#define VkglTestCase_022426_1 "dEQP-GLES31.functional.program_interface_query.program_output"
#define VkglTestCase_022426_2 ".array_size.interface_blocks.patch_out.named_block.var_struct"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022426, VkglTestCase_022426_1, VkglTestCase_022426_2);

#define VkglTestCase_022427_1 "dEQP-GLES31.functional.program_interface_query.program_outpu"
#define VkglTestCase_022427_2 "t.array_size.interface_blocks.patch_out.named_block.var_array"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022427, VkglTestCase_022427_1, VkglTestCase_022427_2);

#define VkglTestCase_022492_1 "dEQP-GLES31.functional.program_interface_query.program_o"
#define VkglTestCase_022492_2 "utput.location.interface_blocks.patch_out.named_block.var"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022492, VkglTestCase_022492_1, VkglTestCase_022492_2);

#define VkglTestCase_022493_1 "dEQP-GLES31.functional.program_interface_query.program_output.loc"
#define VkglTestCase_022493_2 "ation.interface_blocks.patch_out.named_block.var_explicit_location"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022493, VkglTestCase_022493_1, VkglTestCase_022493_2);

#define VkglTestCase_022494_1 "dEQP-GLES31.functional.program_interface_query.program_outpu"
#define VkglTestCase_022494_2 "t.location.interface_blocks.patch_out.named_block.var_struct"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022494, VkglTestCase_022494_1, VkglTestCase_022494_2);

#define VkglTestCase_022495_1 "dEQP-GLES31.functional.program_interface_query.program_output.locatio"
#define VkglTestCase_022495_2 "n.interface_blocks.patch_out.named_block.var_struct_explicit_location"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022495, VkglTestCase_022495_1, VkglTestCase_022495_2);

#define VkglTestCase_022496_1 "dEQP-GLES31.functional.program_interface_query.program_outp"
#define VkglTestCase_022496_2 "ut.location.interface_blocks.patch_out.named_block.var_array"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022496, VkglTestCase_022496_1, VkglTestCase_022496_2);

#define VkglTestCase_022497_1 "dEQP-GLES31.functional.program_interface_query.program_output.locati"
#define VkglTestCase_022497_2 "on.interface_blocks.patch_out.named_block.var_array_explicit_location"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022497, VkglTestCase_022497_1, VkglTestCase_022497_2);

#define VkglTestCase_022542_1 "dEQP-GLES31.functional.program_interface_query.program_out"
#define VkglTestCase_022542_2 "put.name_length.interface_blocks.patch_out.named_block.var"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022542, VkglTestCase_022542_1, VkglTestCase_022542_2);

#define VkglTestCase_022543_1 "dEQP-GLES31.functional.program_interface_query.program_output"
#define VkglTestCase_022543_2 ".name_length.interface_blocks.patch_out.named_block.var_struct"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022543, VkglTestCase_022543_1, VkglTestCase_022543_2);

#define VkglTestCase_022544_1 "dEQP-GLES31.functional.program_interface_query.program_output"
#define VkglTestCase_022544_2 ".name_length.interface_blocks.patch_out.named_block.var_array"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022544, VkglTestCase_022544_1, VkglTestCase_022544_2);

#define VkglTestCase_022960_1 "dEQP-GLES31.functional.program_interface_query.program_out"
#define VkglTestCase_022960_2 "put.is_per_patch.interface_blocks.patch_out.named_block.var"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022960, VkglTestCase_022960_1, VkglTestCase_022960_2);

#define VkglTestCase_022961_1 "dEQP-GLES31.functional.program_interface_query.program_output."
#define VkglTestCase_022961_2 "is_per_patch.interface_blocks.patch_out.named_block.var_struct"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022961, VkglTestCase_022961_1, VkglTestCase_022961_2);

#define VkglTestCase_022962_1 "dEQP-GLES31.functional.program_interface_query.program_output"
#define VkglTestCase_022962_2 ".is_per_patch.interface_blocks.patch_out.named_block.var_array"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022962, VkglTestCase_022962_1, VkglTestCase_022962_2);
