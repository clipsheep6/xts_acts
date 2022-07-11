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

#define VkglTestCase_022378_1 "dEQP-GLES31.functional.program_interface_query.program_ou"
#define VkglTestCase_022378_2 "tput.resource_list.interface_blocks.out.unnamed_block.var"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022378, VkglTestCase_022378_1, VkglTestCase_022378_2);

#define VkglTestCase_022379_1 "dEQP-GLES31.functional.program_interface_query.program_outpu"
#define VkglTestCase_022379_2 "t.resource_list.interface_blocks.out.unnamed_block.var_struct"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022379, VkglTestCase_022379_1, VkglTestCase_022379_2);

#define VkglTestCase_022380_1 "dEQP-GLES31.functional.program_interface_query.program_outpu"
#define VkglTestCase_022380_2 "t.resource_list.interface_blocks.out.unnamed_block.var_array"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022380, VkglTestCase_022380_1, VkglTestCase_022380_2);

#define VkglTestCase_022419_1 "dEQP-GLES31.functional.program_interface_query.program_"
#define VkglTestCase_022419_2 "output.array_size.interface_blocks.out.unnamed_block.var"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022419, VkglTestCase_022419_1, VkglTestCase_022419_2);

#define VkglTestCase_022420_1 "dEQP-GLES31.functional.program_interface_query.program_outp"
#define VkglTestCase_022420_2 "ut.array_size.interface_blocks.out.unnamed_block.var_struct"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022420, VkglTestCase_022420_1, VkglTestCase_022420_2);

#define VkglTestCase_022421_1 "dEQP-GLES31.functional.program_interface_query.program_out"
#define VkglTestCase_022421_2 "put.array_size.interface_blocks.out.unnamed_block.var_array"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022421, VkglTestCase_022421_1, VkglTestCase_022421_2);

#define VkglTestCase_022483_1 "dEQP-GLES31.functional.program_interface_query.program"
#define VkglTestCase_022483_2 "_output.location.interface_blocks.out.unnamed_block.var"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022483, VkglTestCase_022483_1, VkglTestCase_022483_2);

#define VkglTestCase_022484_1 "dEQP-GLES31.functional.program_interface_query.program_output.l"
#define VkglTestCase_022484_2 "ocation.interface_blocks.out.unnamed_block.var_explicit_location"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022484, VkglTestCase_022484_1, VkglTestCase_022484_2);

#define VkglTestCase_022485_1 "dEQP-GLES31.functional.program_interface_query.program_out"
#define VkglTestCase_022485_2 "put.location.interface_blocks.out.unnamed_block.var_struct"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022485, VkglTestCase_022485_1, VkglTestCase_022485_2);

#define VkglTestCase_022486_1 "dEQP-GLES31.functional.program_interface_query.program_output.locat"
#define VkglTestCase_022486_2 "ion.interface_blocks.out.unnamed_block.var_struct_explicit_location"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022486, VkglTestCase_022486_1, VkglTestCase_022486_2);

#define VkglTestCase_022487_1 "dEQP-GLES31.functional.program_interface_query.program_ou"
#define VkglTestCase_022487_2 "tput.location.interface_blocks.out.unnamed_block.var_array"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022487, VkglTestCase_022487_1, VkglTestCase_022487_2);

#define VkglTestCase_022488_1 "dEQP-GLES31.functional.program_interface_query.program_output.loca"
#define VkglTestCase_022488_2 "tion.interface_blocks.out.unnamed_block.var_array_explicit_location"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022488, VkglTestCase_022488_1, VkglTestCase_022488_2);

#define VkglTestCase_022536_1 "dEQP-GLES31.functional.program_interface_query.program_o"
#define VkglTestCase_022536_2 "utput.name_length.interface_blocks.out.unnamed_block.var"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022536, VkglTestCase_022536_1, VkglTestCase_022536_2);

#define VkglTestCase_022537_1 "dEQP-GLES31.functional.program_interface_query.program_outp"
#define VkglTestCase_022537_2 "ut.name_length.interface_blocks.out.unnamed_block.var_struct"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022537, VkglTestCase_022537_1, VkglTestCase_022537_2);

#define VkglTestCase_022538_1 "dEQP-GLES31.functional.program_interface_query.program_outp"
#define VkglTestCase_022538_2 "ut.name_length.interface_blocks.out.unnamed_block.var_array"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022538, VkglTestCase_022538_1, VkglTestCase_022538_2);

#define VkglTestCase_022954_1 "dEQP-GLES31.functional.program_interface_query.program_o"
#define VkglTestCase_022954_2 "utput.is_per_patch.interface_blocks.out.unnamed_block.var"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022954, VkglTestCase_022954_1, VkglTestCase_022954_2);

#define VkglTestCase_022955_1 "dEQP-GLES31.functional.program_interface_query.program_outpu"
#define VkglTestCase_022955_2 "t.is_per_patch.interface_blocks.out.unnamed_block.var_struct"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022955, VkglTestCase_022955_1, VkglTestCase_022955_2);

#define VkglTestCase_022956_1 "dEQP-GLES31.functional.program_interface_query.program_outp"
#define VkglTestCase_022956_2 "ut.is_per_patch.interface_blocks.out.unnamed_block.var_array"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022956, VkglTestCase_022956_1, VkglTestCase_022956_2);
