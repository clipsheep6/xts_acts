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

#define VkglTestCase_022387_1 "dEQP-GLES31.functional.program_interface_query.program_output.resour"
#define VkglTestCase_022387_2 "ce_list.interface_blocks.patch_out.named_block_explicit_location.var"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022387, VkglTestCase_022387_1, VkglTestCase_022387_2);

#define VkglTestCase_022388_1 "dEQP-GLES31.functional.program_interface_query.program_output.resource_"
#define VkglTestCase_022388_2 "list.interface_blocks.patch_out.named_block_explicit_location.var_struct"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022388, VkglTestCase_022388_1, VkglTestCase_022388_2);

#define VkglTestCase_022389_1 "dEQP-GLES31.functional.program_interface_query.program_output.resource_"
#define VkglTestCase_022389_2 "list.interface_blocks.patch_out.named_block_explicit_location.var_array"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022389, VkglTestCase_022389_1, VkglTestCase_022389_2);

#define VkglTestCase_022428_1 "dEQP-GLES31.functional.program_interface_query.program_output.arra"
#define VkglTestCase_022428_2 "y_size.interface_blocks.patch_out.named_block_explicit_location.var"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022428, VkglTestCase_022428_1, VkglTestCase_022428_2);

#define VkglTestCase_022429_1 "dEQP-GLES31.functional.program_interface_query.program_output.array_si"
#define VkglTestCase_022429_2 "ze.interface_blocks.patch_out.named_block_explicit_location.var_struct"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022429, VkglTestCase_022429_1, VkglTestCase_022429_2);

#define VkglTestCase_022430_1 "dEQP-GLES31.functional.program_interface_query.program_output.array_s"
#define VkglTestCase_022430_2 "ize.interface_blocks.patch_out.named_block_explicit_location.var_array"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022430, VkglTestCase_022430_1, VkglTestCase_022430_2);

#define VkglTestCase_022498_1 "dEQP-GLES31.functional.program_interface_query.program_output.loc"
#define VkglTestCase_022498_2 "ation.interface_blocks.patch_out.named_block_explicit_location.var"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022498, VkglTestCase_022498_1, VkglTestCase_022498_2);

#define VkglTestCase_022499_1 "dEQP-GLES31.functional.program_interface_query.program_output.location.int"
#define VkglTestCase_022499_2 "erface_blocks.patch_out.named_block_explicit_location.var_explicit_location"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022499, VkglTestCase_022499_1, VkglTestCase_022499_2);

#define VkglTestCase_022500_1 "dEQP-GLES31.functional.program_interface_query.program_output.locatio"
#define VkglTestCase_022500_2 "n.interface_blocks.patch_out.named_block_explicit_location.var_struct"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022500, VkglTestCase_022500_1, VkglTestCase_022500_2);

#define VkglTestCase_022501_1 "dEQP-GLES31.functional.program_interface_query.program_output.location.interfa"
#define VkglTestCase_022501_2 "ce_blocks.patch_out.named_block_explicit_location.var_struct_explicit_location"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022501, VkglTestCase_022501_1, VkglTestCase_022501_2);

#define VkglTestCase_022502_1 "dEQP-GLES31.functional.program_interface_query.program_output.locati"
#define VkglTestCase_022502_2 "on.interface_blocks.patch_out.named_block_explicit_location.var_array"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022502, VkglTestCase_022502_1, VkglTestCase_022502_2);

#define VkglTestCase_022503_1 "dEQP-GLES31.functional.program_interface_query.program_output.location.interf"
#define VkglTestCase_022503_2 "ace_blocks.patch_out.named_block_explicit_location.var_array_explicit_location"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022503, VkglTestCase_022503_1, VkglTestCase_022503_2);

#define VkglTestCase_022545_1 "dEQP-GLES31.functional.program_interface_query.program_output.name_"
#define VkglTestCase_022545_2 "length.interface_blocks.patch_out.named_block_explicit_location.var"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022545, VkglTestCase_022545_1, VkglTestCase_022545_2);

#define VkglTestCase_022546_1 "dEQP-GLES31.functional.program_interface_query.program_output.name_len"
#define VkglTestCase_022546_2 "gth.interface_blocks.patch_out.named_block_explicit_location.var_struct"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022546, VkglTestCase_022546_1, VkglTestCase_022546_2);

#define VkglTestCase_022547_1 "dEQP-GLES31.functional.program_interface_query.program_output.name_len"
#define VkglTestCase_022547_2 "gth.interface_blocks.patch_out.named_block_explicit_location.var_array"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022547, VkglTestCase_022547_1, VkglTestCase_022547_2);

#define VkglTestCase_022963_1 "dEQP-GLES31.functional.program_interface_query.program_output.is_pe"
#define VkglTestCase_022963_2 "r_patch.interface_blocks.patch_out.named_block_explicit_location.var"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022963, VkglTestCase_022963_1, VkglTestCase_022963_2);

#define VkglTestCase_022964_1 "dEQP-GLES31.functional.program_interface_query.program_output.is_per_pa"
#define VkglTestCase_022964_2 "tch.interface_blocks.patch_out.named_block_explicit_location.var_struct"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022964, VkglTestCase_022964_1, VkglTestCase_022964_2);

#define VkglTestCase_022965_1 "dEQP-GLES31.functional.program_interface_query.program_output.is_per_p"
#define VkglTestCase_022965_2 "atch.interface_blocks.patch_out.named_block_explicit_location.var_array"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022965, VkglTestCase_022965_1, VkglTestCase_022965_2);
