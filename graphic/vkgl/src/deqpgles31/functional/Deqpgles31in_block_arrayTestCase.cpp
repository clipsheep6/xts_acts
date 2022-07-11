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

#define VkglTestCase_021797_1 "dEQP-GLES31.functional.program_interface_query.program_"
#define VkglTestCase_021797_2 "input.resource_list.interface_blocks.in.block_array.var"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021797, VkglTestCase_021797_1, VkglTestCase_021797_2);

#define VkglTestCase_021798_1 "dEQP-GLES31.functional.program_interface_query.program_inp"
#define VkglTestCase_021798_2 "ut.resource_list.interface_blocks.in.block_array.var_struct"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021798, VkglTestCase_021798_1, VkglTestCase_021798_2);

#define VkglTestCase_021799_1 "dEQP-GLES31.functional.program_interface_query.program_inp"
#define VkglTestCase_021799_2 "ut.resource_list.interface_blocks.in.block_array.var_array"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021799, VkglTestCase_021799_1, VkglTestCase_021799_2);

#define VkglTestCase_021832_1 "dEQP-GLES31.functional.program_interface_query.progra"
#define VkglTestCase_021832_2 "m_input.array_size.interface_blocks.in.block_array.var"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021832, VkglTestCase_021832_1, VkglTestCase_021832_2);

#define VkglTestCase_021833_1 "dEQP-GLES31.functional.program_interface_query.program_in"
#define VkglTestCase_021833_2 "put.array_size.interface_blocks.in.block_array.var_struct"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021833, VkglTestCase_021833_1, VkglTestCase_021833_2);

#define VkglTestCase_021834_1 "dEQP-GLES31.functional.program_interface_query.program_i"
#define VkglTestCase_021834_2 "nput.array_size.interface_blocks.in.block_array.var_array"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021834, VkglTestCase_021834_1, VkglTestCase_021834_2);

#define VkglTestCase_021887_1 "dEQP-GLES31.functional.program_interface_query.progr"
#define VkglTestCase_021887_2 "am_input.location.interface_blocks.in.block_array.var"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021887, VkglTestCase_021887_1, VkglTestCase_021887_2);

#define VkglTestCase_021888_1 "dEQP-GLES31.functional.program_interface_query.program_i"
#define VkglTestCase_021888_2 "nput.location.interface_blocks.in.block_array.var_struct"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021888, VkglTestCase_021888_1, VkglTestCase_021888_2);

#define VkglTestCase_021889_1 "dEQP-GLES31.functional.program_interface_query.program_"
#define VkglTestCase_021889_2 "input.location.interface_blocks.in.block_array.var_array"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021889, VkglTestCase_021889_1, VkglTestCase_021889_2);

#define VkglTestCase_021931_1 "dEQP-GLES31.functional.program_interface_query.program"
#define VkglTestCase_021931_2 "_input.name_length.interface_blocks.in.block_array.var"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021931, VkglTestCase_021931_1, VkglTestCase_021931_2);

#define VkglTestCase_021932_1 "dEQP-GLES31.functional.program_interface_query.program_in"
#define VkglTestCase_021932_2 "put.name_length.interface_blocks.in.block_array.var_struct"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021932, VkglTestCase_021932_1, VkglTestCase_021932_2);

#define VkglTestCase_021933_1 "dEQP-GLES31.functional.program_interface_query.program_in"
#define VkglTestCase_021933_2 "put.name_length.interface_blocks.in.block_array.var_array"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021933, VkglTestCase_021933_1, VkglTestCase_021933_2);

#define VkglTestCase_022333_1 "dEQP-GLES31.functional.program_interface_query.program"
#define VkglTestCase_022333_2 "_input.is_per_patch.interface_blocks.in.block_array.var"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_022333, VkglTestCase_022333_1, VkglTestCase_022333_2);

#define VkglTestCase_022334_1 "dEQP-GLES31.functional.program_interface_query.program_inp"
#define VkglTestCase_022334_2 "ut.is_per_patch.interface_blocks.in.block_array.var_struct"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_022334, VkglTestCase_022334_1, VkglTestCase_022334_2);

#define VkglTestCase_022335_1 "dEQP-GLES31.functional.program_interface_query.program_in"
#define VkglTestCase_022335_2 "put.is_per_patch.interface_blocks.in.block_array.var_array"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_022335, VkglTestCase_022335_1, VkglTestCase_022335_2);
