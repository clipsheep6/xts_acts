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

#define VkglTestCase_022390_1 "dEQP-GLES31.functional.program_interface_query.program_outpu"
#define VkglTestCase_022390_2 "t.resource_list.interface_blocks.patch_out.unnamed_block.var"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022390, VkglTestCase_022390_1, VkglTestCase_022390_2);

#define VkglTestCase_022391_1 "dEQP-GLES31.functional.program_interface_query.program_output.r"
#define VkglTestCase_022391_2 "esource_list.interface_blocks.patch_out.unnamed_block.var_struct"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022391, VkglTestCase_022391_1, VkglTestCase_022391_2);

#define VkglTestCase_022392_1 "dEQP-GLES31.functional.program_interface_query.program_output.r"
#define VkglTestCase_022392_2 "esource_list.interface_blocks.patch_out.unnamed_block.var_array"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022392, VkglTestCase_022392_1, VkglTestCase_022392_2);

#define VkglTestCase_022431_1 "dEQP-GLES31.functional.program_interface_query.program_out"
#define VkglTestCase_022431_2 "put.array_size.interface_blocks.patch_out.unnamed_block.var"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022431, VkglTestCase_022431_1, VkglTestCase_022431_2);

#define VkglTestCase_022432_1 "dEQP-GLES31.functional.program_interface_query.program_output."
#define VkglTestCase_022432_2 "array_size.interface_blocks.patch_out.unnamed_block.var_struct"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022432, VkglTestCase_022432_1, VkglTestCase_022432_2);

#define VkglTestCase_022433_1 "dEQP-GLES31.functional.program_interface_query.program_output"
#define VkglTestCase_022433_2 ".array_size.interface_blocks.patch_out.unnamed_block.var_array"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022433, VkglTestCase_022433_1, VkglTestCase_022433_2);

#define VkglTestCase_022504_1 "dEQP-GLES31.functional.program_interface_query.program_ou"
#define VkglTestCase_022504_2 "tput.location.interface_blocks.patch_out.unnamed_block.var"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022504, VkglTestCase_022504_1, VkglTestCase_022504_2);

#define VkglTestCase_022505_1 "dEQP-GLES31.functional.program_interface_query.program_output.loca"
#define VkglTestCase_022505_2 "tion.interface_blocks.patch_out.unnamed_block.var_explicit_location"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022505, VkglTestCase_022505_1, VkglTestCase_022505_2);

#define VkglTestCase_022506_1 "dEQP-GLES31.functional.program_interface_query.program_output"
#define VkglTestCase_022506_2 ".location.interface_blocks.patch_out.unnamed_block.var_struct"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022506, VkglTestCase_022506_1, VkglTestCase_022506_2);

#define VkglTestCase_022507_1 "dEQP-GLES31.functional.program_interface_query.program_output.location"
#define VkglTestCase_022507_2 ".interface_blocks.patch_out.unnamed_block.var_struct_explicit_location"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022507, VkglTestCase_022507_1, VkglTestCase_022507_2);

#define VkglTestCase_022508_1 "dEQP-GLES31.functional.program_interface_query.program_outpu"
#define VkglTestCase_022508_2 "t.location.interface_blocks.patch_out.unnamed_block.var_array"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022508, VkglTestCase_022508_1, VkglTestCase_022508_2);

#define VkglTestCase_022509_1 "dEQP-GLES31.functional.program_interface_query.program_output.locatio"
#define VkglTestCase_022509_2 "n.interface_blocks.patch_out.unnamed_block.var_array_explicit_location"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022509, VkglTestCase_022509_1, VkglTestCase_022509_2);

#define VkglTestCase_022548_1 "dEQP-GLES31.functional.program_interface_query.program_outp"
#define VkglTestCase_022548_2 "ut.name_length.interface_blocks.patch_out.unnamed_block.var"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022548, VkglTestCase_022548_1, VkglTestCase_022548_2);

#define VkglTestCase_022549_1 "dEQP-GLES31.functional.program_interface_query.program_output."
#define VkglTestCase_022549_2 "name_length.interface_blocks.patch_out.unnamed_block.var_struct"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022549, VkglTestCase_022549_1, VkglTestCase_022549_2);

#define VkglTestCase_022550_1 "dEQP-GLES31.functional.program_interface_query.program_output."
#define VkglTestCase_022550_2 "name_length.interface_blocks.patch_out.unnamed_block.var_array"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022550, VkglTestCase_022550_1, VkglTestCase_022550_2);

#define VkglTestCase_022966_1 "dEQP-GLES31.functional.program_interface_query.program_outp"
#define VkglTestCase_022966_2 "ut.is_per_patch.interface_blocks.patch_out.unnamed_block.var"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022966, VkglTestCase_022966_1, VkglTestCase_022966_2);

#define VkglTestCase_022967_1 "dEQP-GLES31.functional.program_interface_query.program_output.i"
#define VkglTestCase_022967_2 "s_per_patch.interface_blocks.patch_out.unnamed_block.var_struct"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022967, VkglTestCase_022967_1, VkglTestCase_022967_2);

#define VkglTestCase_022968_1 "dEQP-GLES31.functional.program_interface_query.program_output."
#define VkglTestCase_022968_2 "is_per_patch.interface_blocks.patch_out.unnamed_block.var_array"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022968, VkglTestCase_022968_1, VkglTestCase_022968_2);
