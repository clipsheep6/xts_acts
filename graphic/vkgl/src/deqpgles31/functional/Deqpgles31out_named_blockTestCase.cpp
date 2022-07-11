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

#define VkglTestCase_022372_1 "dEQP-GLES31.functional.program_interface_query.program_o"
#define VkglTestCase_022372_2 "utput.resource_list.interface_blocks.out.named_block.var"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022372, VkglTestCase_022372_1, VkglTestCase_022372_2);

#define VkglTestCase_022373_1 "dEQP-GLES31.functional.program_interface_query.program_outp"
#define VkglTestCase_022373_2 "ut.resource_list.interface_blocks.out.named_block.var_struct"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022373, VkglTestCase_022373_1, VkglTestCase_022373_2);

#define VkglTestCase_022374_1 "dEQP-GLES31.functional.program_interface_query.program_outp"
#define VkglTestCase_022374_2 "ut.resource_list.interface_blocks.out.named_block.var_array"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022374, VkglTestCase_022374_1, VkglTestCase_022374_2);

#define VkglTestCase_022413_1 "dEQP-GLES31.functional.program_interface_query.program"
#define VkglTestCase_022413_2 "_output.array_size.interface_blocks.out.named_block.var"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022413, VkglTestCase_022413_1, VkglTestCase_022413_2);

#define VkglTestCase_022414_1 "dEQP-GLES31.functional.program_interface_query.program_out"
#define VkglTestCase_022414_2 "put.array_size.interface_blocks.out.named_block.var_struct"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022414, VkglTestCase_022414_1, VkglTestCase_022414_2);

#define VkglTestCase_022415_1 "dEQP-GLES31.functional.program_interface_query.program_ou"
#define VkglTestCase_022415_2 "tput.array_size.interface_blocks.out.named_block.var_array"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022415, VkglTestCase_022415_1, VkglTestCase_022415_2);

#define VkglTestCase_022471_1 "dEQP-GLES31.functional.program_interface_query.progra"
#define VkglTestCase_022471_2 "m_output.location.interface_blocks.out.named_block.var"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022471, VkglTestCase_022471_1, VkglTestCase_022471_2);

#define VkglTestCase_022472_1 "dEQP-GLES31.functional.program_interface_query.program_output."
#define VkglTestCase_022472_2 "location.interface_blocks.out.named_block.var_explicit_location"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022472, VkglTestCase_022472_1, VkglTestCase_022472_2);

#define VkglTestCase_022473_1 "dEQP-GLES31.functional.program_interface_query.program_ou"
#define VkglTestCase_022473_2 "tput.location.interface_blocks.out.named_block.var_struct"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022473, VkglTestCase_022473_1, VkglTestCase_022473_2);

#define VkglTestCase_022474_1 "dEQP-GLES31.functional.program_interface_query.program_output.loca"
#define VkglTestCase_022474_2 "tion.interface_blocks.out.named_block.var_struct_explicit_location"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022474, VkglTestCase_022474_1, VkglTestCase_022474_2);

#define VkglTestCase_022475_1 "dEQP-GLES31.functional.program_interface_query.program_o"
#define VkglTestCase_022475_2 "utput.location.interface_blocks.out.named_block.var_array"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022475, VkglTestCase_022475_1, VkglTestCase_022475_2);

#define VkglTestCase_022476_1 "dEQP-GLES31.functional.program_interface_query.program_output.loc"
#define VkglTestCase_022476_2 "ation.interface_blocks.out.named_block.var_array_explicit_location"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022476, VkglTestCase_022476_1, VkglTestCase_022476_2);

#define VkglTestCase_022530_1 "dEQP-GLES31.functional.program_interface_query.program_"
#define VkglTestCase_022530_2 "output.name_length.interface_blocks.out.named_block.var"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022530, VkglTestCase_022530_1, VkglTestCase_022530_2);

#define VkglTestCase_022531_1 "dEQP-GLES31.functional.program_interface_query.program_out"
#define VkglTestCase_022531_2 "put.name_length.interface_blocks.out.named_block.var_struct"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022531, VkglTestCase_022531_1, VkglTestCase_022531_2);

#define VkglTestCase_022532_1 "dEQP-GLES31.functional.program_interface_query.program_out"
#define VkglTestCase_022532_2 "put.name_length.interface_blocks.out.named_block.var_array"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022532, VkglTestCase_022532_1, VkglTestCase_022532_2);

#define VkglTestCase_022948_1 "dEQP-GLES31.functional.program_interface_query.program_"
#define VkglTestCase_022948_2 "output.is_per_patch.interface_blocks.out.named_block.var"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022948, VkglTestCase_022948_1, VkglTestCase_022948_2);

#define VkglTestCase_022949_1 "dEQP-GLES31.functional.program_interface_query.program_outp"
#define VkglTestCase_022949_2 "ut.is_per_patch.interface_blocks.out.named_block.var_struct"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022949, VkglTestCase_022949_1, VkglTestCase_022949_2);

#define VkglTestCase_022950_1 "dEQP-GLES31.functional.program_interface_query.program_out"
#define VkglTestCase_022950_2 "put.is_per_patch.interface_blocks.out.named_block.var_array"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022950, VkglTestCase_022950_1, VkglTestCase_022950_2);
