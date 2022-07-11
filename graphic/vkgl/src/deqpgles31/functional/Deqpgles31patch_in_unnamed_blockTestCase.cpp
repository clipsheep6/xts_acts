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

#define VkglTestCase_021806_1 "dEQP-GLES31.functional.program_interface_query.program_inpu"
#define VkglTestCase_021806_2 "t.resource_list.interface_blocks.patch_in.unnamed_block.var"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021806, VkglTestCase_021806_1, VkglTestCase_021806_2);

#define VkglTestCase_021807_1 "dEQP-GLES31.functional.program_interface_query.program_input.r"
#define VkglTestCase_021807_2 "esource_list.interface_blocks.patch_in.unnamed_block.var_struct"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021807, VkglTestCase_021807_1, VkglTestCase_021807_2);

#define VkglTestCase_021808_1 "dEQP-GLES31.functional.program_interface_query.program_input.r"
#define VkglTestCase_021808_2 "esource_list.interface_blocks.patch_in.unnamed_block.var_array"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021808, VkglTestCase_021808_1, VkglTestCase_021808_2);

#define VkglTestCase_021841_1 "dEQP-GLES31.functional.program_interface_query.program_in"
#define VkglTestCase_021841_2 "put.array_size.interface_blocks.patch_in.unnamed_block.var"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021841, VkglTestCase_021841_1, VkglTestCase_021841_2);

#define VkglTestCase_021842_1 "dEQP-GLES31.functional.program_interface_query.program_input."
#define VkglTestCase_021842_2 "array_size.interface_blocks.patch_in.unnamed_block.var_struct"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021842, VkglTestCase_021842_1, VkglTestCase_021842_2);

#define VkglTestCase_021843_1 "dEQP-GLES31.functional.program_interface_query.program_input"
#define VkglTestCase_021843_2 ".array_size.interface_blocks.patch_in.unnamed_block.var_array"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021843, VkglTestCase_021843_1, VkglTestCase_021843_2);

#define VkglTestCase_021902_1 "dEQP-GLES31.functional.program_interface_query.program_i"
#define VkglTestCase_021902_2 "nput.location.interface_blocks.patch_in.unnamed_block.var"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021902, VkglTestCase_021902_1, VkglTestCase_021902_2);

#define VkglTestCase_021903_1 "dEQP-GLES31.functional.program_interface_query.program_input.loca"
#define VkglTestCase_021903_2 "tion.interface_blocks.patch_in.unnamed_block.var_explicit_location"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021903, VkglTestCase_021903_1, VkglTestCase_021903_2);

#define VkglTestCase_021904_1 "dEQP-GLES31.functional.program_interface_query.program_input"
#define VkglTestCase_021904_2 ".location.interface_blocks.patch_in.unnamed_block.var_struct"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021904, VkglTestCase_021904_1, VkglTestCase_021904_2);

#define VkglTestCase_021905_1 "dEQP-GLES31.functional.program_interface_query.program_input.location"
#define VkglTestCase_021905_2 ".interface_blocks.patch_in.unnamed_block.var_struct_explicit_location"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021905, VkglTestCase_021905_1, VkglTestCase_021905_2);

#define VkglTestCase_021906_1 "dEQP-GLES31.functional.program_interface_query.program_inpu"
#define VkglTestCase_021906_2 "t.location.interface_blocks.patch_in.unnamed_block.var_array"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021906, VkglTestCase_021906_1, VkglTestCase_021906_2);

#define VkglTestCase_021907_1 "dEQP-GLES31.functional.program_interface_query.program_input.locatio"
#define VkglTestCase_021907_2 "n.interface_blocks.patch_in.unnamed_block.var_array_explicit_location"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021907, VkglTestCase_021907_1, VkglTestCase_021907_2);

#define VkglTestCase_021940_1 "dEQP-GLES31.functional.program_interface_query.program_inp"
#define VkglTestCase_021940_2 "ut.name_length.interface_blocks.patch_in.unnamed_block.var"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021940, VkglTestCase_021940_1, VkglTestCase_021940_2);

#define VkglTestCase_021941_1 "dEQP-GLES31.functional.program_interface_query.program_input."
#define VkglTestCase_021941_2 "name_length.interface_blocks.patch_in.unnamed_block.var_struct"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021941, VkglTestCase_021941_1, VkglTestCase_021941_2);

#define VkglTestCase_021942_1 "dEQP-GLES31.functional.program_interface_query.program_input."
#define VkglTestCase_021942_2 "name_length.interface_blocks.patch_in.unnamed_block.var_array"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021942, VkglTestCase_021942_1, VkglTestCase_021942_2);

#define VkglTestCase_022342_1 "dEQP-GLES31.functional.program_interface_query.program_inp"
#define VkglTestCase_022342_2 "ut.is_per_patch.interface_blocks.patch_in.unnamed_block.var"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_022342, VkglTestCase_022342_1, VkglTestCase_022342_2);

#define VkglTestCase_022343_1 "dEQP-GLES31.functional.program_interface_query.program_input.i"
#define VkglTestCase_022343_2 "s_per_patch.interface_blocks.patch_in.unnamed_block.var_struct"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_022343, VkglTestCase_022343_1, VkglTestCase_022343_2);

#define VkglTestCase_022344_1 "dEQP-GLES31.functional.program_interface_query.program_input."
#define VkglTestCase_022344_2 "is_per_patch.interface_blocks.patch_in.unnamed_block.var_array"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_022344, VkglTestCase_022344_1, VkglTestCase_022344_2);
