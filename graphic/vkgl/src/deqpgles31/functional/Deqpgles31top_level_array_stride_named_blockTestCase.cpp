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
#include "../ActsDeqpgles310025TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_024474_1 "dEQP-GLES31.functional.program_interface_query.buf"
#define VkglTestCase_024474_2 "fer_variable.top_level_array_stride.named_block.var"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024474, VkglTestCase_024474_1, VkglTestCase_024474_2);

#define VkglTestCase_024475_1 "dEQP-GLES31.functional.program_interface_query.buffer_"
#define VkglTestCase_024475_2 "variable.top_level_array_stride.named_block.var_struct"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024475, VkglTestCase_024475_1, VkglTestCase_024475_2);

#define VkglTestCase_024476_1 "dEQP-GLES31.functional.program_interface_query.buffer_var"
#define VkglTestCase_024476_2 "iable.top_level_array_stride.named_block.var_struct_struct"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024476, VkglTestCase_024476_1, VkglTestCase_024476_2);

#define VkglTestCase_024477_1 "dEQP-GLES31.functional.program_interface_query.buffer_variabl"
#define VkglTestCase_024477_2 "e.top_level_array_stride.named_block.var_struct_struct_struct"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024477, VkglTestCase_024477_1, VkglTestCase_024477_2);

#define VkglTestCase_024478_1 "dEQP-GLES31.functional.program_interface_query.buffer_variab"
#define VkglTestCase_024478_2 "le.top_level_array_stride.named_block.var_array_struct_struct"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024478, VkglTestCase_024478_1, VkglTestCase_024478_2);

#define VkglTestCase_024479_1 "dEQP-GLES31.functional.program_interface_query.buffer_var"
#define VkglTestCase_024479_2 "iable.top_level_array_stride.named_block.var_array_struct"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024479, VkglTestCase_024479_1, VkglTestCase_024479_2);

#define VkglTestCase_024480_1 "dEQP-GLES31.functional.program_interface_query.buffer_variab"
#define VkglTestCase_024480_2 "le.top_level_array_stride.named_block.var_struct_array_struct"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024480, VkglTestCase_024480_1, VkglTestCase_024480_2);

#define VkglTestCase_024481_1 "dEQP-GLES31.functional.program_interface_query.buffer_variab"
#define VkglTestCase_024481_2 "le.top_level_array_stride.named_block.var_array_array_struct"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024481, VkglTestCase_024481_1, VkglTestCase_024481_2);

#define VkglTestCase_024482_1 "dEQP-GLES31.functional.program_interface_query.buffer"
#define VkglTestCase_024482_2 "_variable.top_level_array_stride.named_block.var_array"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024482, VkglTestCase_024482_1, VkglTestCase_024482_2);

#define VkglTestCase_024483_1 "dEQP-GLES31.functional.program_interface_query.buffer_var"
#define VkglTestCase_024483_2 "iable.top_level_array_stride.named_block.var_struct_array"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024483, VkglTestCase_024483_1, VkglTestCase_024483_2);

#define VkglTestCase_024484_1 "dEQP-GLES31.functional.program_interface_query.buffer_variab"
#define VkglTestCase_024484_2 "le.top_level_array_stride.named_block.var_struct_struct_array"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024484, VkglTestCase_024484_1, VkglTestCase_024484_2);

#define VkglTestCase_024485_1 "dEQP-GLES31.functional.program_interface_query.buffer_variab"
#define VkglTestCase_024485_2 "le.top_level_array_stride.named_block.var_array_struct_array"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024485, VkglTestCase_024485_1, VkglTestCase_024485_2);

#define VkglTestCase_024486_1 "dEQP-GLES31.functional.program_interface_query.buffer_va"
#define VkglTestCase_024486_2 "riable.top_level_array_stride.named_block.var_array_array"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024486, VkglTestCase_024486_1, VkglTestCase_024486_2);

#define VkglTestCase_024487_1 "dEQP-GLES31.functional.program_interface_query.buffer_variab"
#define VkglTestCase_024487_2 "le.top_level_array_stride.named_block.var_struct_array_array"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024487, VkglTestCase_024487_1, VkglTestCase_024487_2);

#define VkglTestCase_024488_1 "dEQP-GLES31.functional.program_interface_query.buffer_varia"
#define VkglTestCase_024488_2 "ble.top_level_array_stride.named_block.var_array_array_array"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024488, VkglTestCase_024488_1, VkglTestCase_024488_2);

#define VkglTestCase_024489_1 "dEQP-GLES31.functional.program_interface_query.buffer_var"
#define VkglTestCase_024489_2 "iable.top_level_array_stride.named_block.var_unsized_array"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024489, VkglTestCase_024489_1, VkglTestCase_024489_2);

#define VkglTestCase_024490_1 "dEQP-GLES31.functional.program_interface_query.buffer_variabl"
#define VkglTestCase_024490_2 "e.top_level_array_stride.named_block.var_struct_unsized_array"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024490, VkglTestCase_024490_1, VkglTestCase_024490_2);

#define VkglTestCase_024491_1 "dEQP-GLES31.functional.program_interface_query.buffer_variable.t"
#define VkglTestCase_024491_2 "op_level_array_stride.named_block.var_struct_struct_unsized_array"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024491, VkglTestCase_024491_1, VkglTestCase_024491_2);

#define VkglTestCase_024492_1 "dEQP-GLES31.functional.program_interface_query.buffer_variable.t"
#define VkglTestCase_024492_2 "op_level_array_stride.named_block.var_array_struct_unsized_array"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024492, VkglTestCase_024492_1, VkglTestCase_024492_2);

#define VkglTestCase_024493_1 "dEQP-GLES31.functional.program_interface_query.buffer_variab"
#define VkglTestCase_024493_2 "le.top_level_array_stride.named_block.var_array_unsized_array"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024493, VkglTestCase_024493_1, VkglTestCase_024493_2);

#define VkglTestCase_024494_1 "dEQP-GLES31.functional.program_interface_query.buffer_variable.t"
#define VkglTestCase_024494_2 "op_level_array_stride.named_block.var_struct_array_unsized_array"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024494, VkglTestCase_024494_1, VkglTestCase_024494_2);

#define VkglTestCase_024495_1 "dEQP-GLES31.functional.program_interface_query.buffer_variable."
#define VkglTestCase_024495_2 "top_level_array_stride.named_block.var_array_array_unsized_array"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024495, VkglTestCase_024495_1, VkglTestCase_024495_2);
