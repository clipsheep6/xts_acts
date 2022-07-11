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

#define VkglTestCase_022381_1 "dEQP-GLES31.functional.program_interface_query.program_o"
#define VkglTestCase_022381_2 "utput.resource_list.interface_blocks.out.block_array.var"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022381, VkglTestCase_022381_1, VkglTestCase_022381_2);

#define VkglTestCase_022382_1 "dEQP-GLES31.functional.program_interface_query.program_outp"
#define VkglTestCase_022382_2 "ut.resource_list.interface_blocks.out.block_array.var_struct"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022382, VkglTestCase_022382_1, VkglTestCase_022382_2);

#define VkglTestCase_022383_1 "dEQP-GLES31.functional.program_interface_query.program_outp"
#define VkglTestCase_022383_2 "ut.resource_list.interface_blocks.out.block_array.var_array"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022383, VkglTestCase_022383_1, VkglTestCase_022383_2);

#define VkglTestCase_022422_1 "dEQP-GLES31.functional.program_interface_query.program"
#define VkglTestCase_022422_2 "_output.array_size.interface_blocks.out.block_array.var"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022422, VkglTestCase_022422_1, VkglTestCase_022422_2);

#define VkglTestCase_022423_1 "dEQP-GLES31.functional.program_interface_query.program_out"
#define VkglTestCase_022423_2 "put.array_size.interface_blocks.out.block_array.var_struct"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022423, VkglTestCase_022423_1, VkglTestCase_022423_2);

#define VkglTestCase_022424_1 "dEQP-GLES31.functional.program_interface_query.program_ou"
#define VkglTestCase_022424_2 "tput.array_size.interface_blocks.out.block_array.var_array"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022424, VkglTestCase_022424_1, VkglTestCase_022424_2);

#define VkglTestCase_022489_1 "dEQP-GLES31.functional.program_interface_query.progra"
#define VkglTestCase_022489_2 "m_output.location.interface_blocks.out.block_array.var"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022489, VkglTestCase_022489_1, VkglTestCase_022489_2);

#define VkglTestCase_022490_1 "dEQP-GLES31.functional.program_interface_query.program_ou"
#define VkglTestCase_022490_2 "tput.location.interface_blocks.out.block_array.var_struct"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022490, VkglTestCase_022490_1, VkglTestCase_022490_2);

#define VkglTestCase_022491_1 "dEQP-GLES31.functional.program_interface_query.program_o"
#define VkglTestCase_022491_2 "utput.location.interface_blocks.out.block_array.var_array"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022491, VkglTestCase_022491_1, VkglTestCase_022491_2);

#define VkglTestCase_022539_1 "dEQP-GLES31.functional.program_interface_query.program_"
#define VkglTestCase_022539_2 "output.name_length.interface_blocks.out.block_array.var"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022539, VkglTestCase_022539_1, VkglTestCase_022539_2);

#define VkglTestCase_022540_1 "dEQP-GLES31.functional.program_interface_query.program_out"
#define VkglTestCase_022540_2 "put.name_length.interface_blocks.out.block_array.var_struct"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022540, VkglTestCase_022540_1, VkglTestCase_022540_2);

#define VkglTestCase_022541_1 "dEQP-GLES31.functional.program_interface_query.program_out"
#define VkglTestCase_022541_2 "put.name_length.interface_blocks.out.block_array.var_array"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022541, VkglTestCase_022541_1, VkglTestCase_022541_2);

#define VkglTestCase_022957_1 "dEQP-GLES31.functional.program_interface_query.program_"
#define VkglTestCase_022957_2 "output.is_per_patch.interface_blocks.out.block_array.var"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022957, VkglTestCase_022957_1, VkglTestCase_022957_2);

#define VkglTestCase_022958_1 "dEQP-GLES31.functional.program_interface_query.program_outp"
#define VkglTestCase_022958_2 "ut.is_per_patch.interface_blocks.out.block_array.var_struct"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022958, VkglTestCase_022958_1, VkglTestCase_022958_2);

#define VkglTestCase_022959_1 "dEQP-GLES31.functional.program_interface_query.program_out"
#define VkglTestCase_022959_2 "put.is_per_patch.interface_blocks.out.block_array.var_array"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022959, VkglTestCase_022959_1, VkglTestCase_022959_2);
