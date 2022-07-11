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

#define VkglTestCase_022393_1 "dEQP-GLES31.functional.program_interface_query.program_outp"
#define VkglTestCase_022393_2 "ut.resource_list.interface_blocks.patch_out.block_array.var"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022393, VkglTestCase_022393_1, VkglTestCase_022393_2);

#define VkglTestCase_022394_1 "dEQP-GLES31.functional.program_interface_query.program_output."
#define VkglTestCase_022394_2 "resource_list.interface_blocks.patch_out.block_array.var_struct"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022394, VkglTestCase_022394_1, VkglTestCase_022394_2);

#define VkglTestCase_022395_1 "dEQP-GLES31.functional.program_interface_query.program_output."
#define VkglTestCase_022395_2 "resource_list.interface_blocks.patch_out.block_array.var_array"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022395, VkglTestCase_022395_1, VkglTestCase_022395_2);

#define VkglTestCase_022434_1 "dEQP-GLES31.functional.program_interface_query.program_ou"
#define VkglTestCase_022434_2 "tput.array_size.interface_blocks.patch_out.block_array.var"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022434, VkglTestCase_022434_1, VkglTestCase_022434_2);

#define VkglTestCase_022435_1 "dEQP-GLES31.functional.program_interface_query.program_output"
#define VkglTestCase_022435_2 ".array_size.interface_blocks.patch_out.block_array.var_struct"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022435, VkglTestCase_022435_1, VkglTestCase_022435_2);

#define VkglTestCase_022436_1 "dEQP-GLES31.functional.program_interface_query.program_outpu"
#define VkglTestCase_022436_2 "t.array_size.interface_blocks.patch_out.block_array.var_array"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022436, VkglTestCase_022436_1, VkglTestCase_022436_2);

#define VkglTestCase_022510_1 "dEQP-GLES31.functional.program_interface_query.program_o"
#define VkglTestCase_022510_2 "utput.location.interface_blocks.patch_out.block_array.var"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022510, VkglTestCase_022510_1, VkglTestCase_022510_2);

#define VkglTestCase_022511_1 "dEQP-GLES31.functional.program_interface_query.program_outpu"
#define VkglTestCase_022511_2 "t.location.interface_blocks.patch_out.block_array.var_struct"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022511, VkglTestCase_022511_1, VkglTestCase_022511_2);

#define VkglTestCase_022512_1 "dEQP-GLES31.functional.program_interface_query.program_outp"
#define VkglTestCase_022512_2 "ut.location.interface_blocks.patch_out.block_array.var_array"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022512, VkglTestCase_022512_1, VkglTestCase_022512_2);

#define VkglTestCase_022551_1 "dEQP-GLES31.functional.program_interface_query.program_out"
#define VkglTestCase_022551_2 "put.name_length.interface_blocks.patch_out.block_array.var"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022551, VkglTestCase_022551_1, VkglTestCase_022551_2);

#define VkglTestCase_022552_1 "dEQP-GLES31.functional.program_interface_query.program_output"
#define VkglTestCase_022552_2 ".name_length.interface_blocks.patch_out.block_array.var_struct"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022552, VkglTestCase_022552_1, VkglTestCase_022552_2);

#define VkglTestCase_022553_1 "dEQP-GLES31.functional.program_interface_query.program_output"
#define VkglTestCase_022553_2 ".name_length.interface_blocks.patch_out.block_array.var_array"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022553, VkglTestCase_022553_1, VkglTestCase_022553_2);

#define VkglTestCase_022969_1 "dEQP-GLES31.functional.program_interface_query.program_out"
#define VkglTestCase_022969_2 "put.is_per_patch.interface_blocks.patch_out.block_array.var"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022969, VkglTestCase_022969_1, VkglTestCase_022969_2);

#define VkglTestCase_022970_1 "dEQP-GLES31.functional.program_interface_query.program_output."
#define VkglTestCase_022970_2 "is_per_patch.interface_blocks.patch_out.block_array.var_struct"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022970, VkglTestCase_022970_1, VkglTestCase_022970_2);

#define VkglTestCase_022971_1 "dEQP-GLES31.functional.program_interface_query.program_output"
#define VkglTestCase_022971_2 ".is_per_patch.interface_blocks.patch_out.block_array.var_array"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022971, VkglTestCase_022971_1, VkglTestCase_022971_2);
