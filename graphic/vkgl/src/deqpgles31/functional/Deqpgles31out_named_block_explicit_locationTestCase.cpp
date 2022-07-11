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

#define VkglTestCase_022375_1 "dEQP-GLES31.functional.program_interface_query.program_output.res"
#define VkglTestCase_022375_2 "ource_list.interface_blocks.out.named_block_explicit_location.var"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022375, VkglTestCase_022375_1, VkglTestCase_022375_2);

#define VkglTestCase_022376_1 "dEQP-GLES31.functional.program_interface_query.program_output.resour"
#define VkglTestCase_022376_2 "ce_list.interface_blocks.out.named_block_explicit_location.var_struct"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022376, VkglTestCase_022376_1, VkglTestCase_022376_2);

#define VkglTestCase_022377_1 "dEQP-GLES31.functional.program_interface_query.program_output.resour"
#define VkglTestCase_022377_2 "ce_list.interface_blocks.out.named_block_explicit_location.var_array"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022377, VkglTestCase_022377_1, VkglTestCase_022377_2);

#define VkglTestCase_022416_1 "dEQP-GLES31.functional.program_interface_query.program_output.a"
#define VkglTestCase_022416_2 "rray_size.interface_blocks.out.named_block_explicit_location.var"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022416, VkglTestCase_022416_1, VkglTestCase_022416_2);

#define VkglTestCase_022417_1 "dEQP-GLES31.functional.program_interface_query.program_output.array"
#define VkglTestCase_022417_2 "_size.interface_blocks.out.named_block_explicit_location.var_struct"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022417, VkglTestCase_022417_1, VkglTestCase_022417_2);

#define VkglTestCase_022418_1 "dEQP-GLES31.functional.program_interface_query.program_output.arra"
#define VkglTestCase_022418_2 "y_size.interface_blocks.out.named_block_explicit_location.var_array"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022418, VkglTestCase_022418_1, VkglTestCase_022418_2);

#define VkglTestCase_022477_1 "dEQP-GLES31.functional.program_interface_query.program_output."
#define VkglTestCase_022477_2 "location.interface_blocks.out.named_block_explicit_location.var"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022477, VkglTestCase_022477_1, VkglTestCase_022477_2);

#define VkglTestCase_022478_1 "dEQP-GLES31.functional.program_interface_query.program_output.location."
#define VkglTestCase_022478_2 "interface_blocks.out.named_block_explicit_location.var_explicit_location"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022478, VkglTestCase_022478_1, VkglTestCase_022478_2);

#define VkglTestCase_022479_1 "dEQP-GLES31.functional.program_interface_query.program_output.loca"
#define VkglTestCase_022479_2 "tion.interface_blocks.out.named_block_explicit_location.var_struct"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022479, VkglTestCase_022479_1, VkglTestCase_022479_2);

#define VkglTestCase_022480_1 "dEQP-GLES31.functional.program_interface_query.program_output.location.inte"
#define VkglTestCase_022480_2 "rface_blocks.out.named_block_explicit_location.var_struct_explicit_location"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022480, VkglTestCase_022480_1, VkglTestCase_022480_2);

#define VkglTestCase_022481_1 "dEQP-GLES31.functional.program_interface_query.program_output.loc"
#define VkglTestCase_022481_2 "ation.interface_blocks.out.named_block_explicit_location.var_array"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022481, VkglTestCase_022481_1, VkglTestCase_022481_2);

#define VkglTestCase_022482_1 "dEQP-GLES31.functional.program_interface_query.program_output.location.int"
#define VkglTestCase_022482_2 "erface_blocks.out.named_block_explicit_location.var_array_explicit_location"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022482, VkglTestCase_022482_1, VkglTestCase_022482_2);

#define VkglTestCase_022533_1 "dEQP-GLES31.functional.program_interface_query.program_output.na"
#define VkglTestCase_022533_2 "me_length.interface_blocks.out.named_block_explicit_location.var"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022533, VkglTestCase_022533_1, VkglTestCase_022533_2);

#define VkglTestCase_022534_1 "dEQP-GLES31.functional.program_interface_query.program_output.name_"
#define VkglTestCase_022534_2 "length.interface_blocks.out.named_block_explicit_location.var_struct"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022534, VkglTestCase_022534_1, VkglTestCase_022534_2);

#define VkglTestCase_022535_1 "dEQP-GLES31.functional.program_interface_query.program_output.name_"
#define VkglTestCase_022535_2 "length.interface_blocks.out.named_block_explicit_location.var_array"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022535, VkglTestCase_022535_1, VkglTestCase_022535_2);

#define VkglTestCase_022951_1 "dEQP-GLES31.functional.program_interface_query.program_output.is"
#define VkglTestCase_022951_2 "_per_patch.interface_blocks.out.named_block_explicit_location.var"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022951, VkglTestCase_022951_1, VkglTestCase_022951_2);

#define VkglTestCase_022952_1 "dEQP-GLES31.functional.program_interface_query.program_output.is_per"
#define VkglTestCase_022952_2 "_patch.interface_blocks.out.named_block_explicit_location.var_struct"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022952, VkglTestCase_022952_1, VkglTestCase_022952_2);

#define VkglTestCase_022953_1 "dEQP-GLES31.functional.program_interface_query.program_output.is_pe"
#define VkglTestCase_022953_2 "r_patch.interface_blocks.out.named_block_explicit_location.var_array"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022953, VkglTestCase_022953_1, VkglTestCase_022953_2);
