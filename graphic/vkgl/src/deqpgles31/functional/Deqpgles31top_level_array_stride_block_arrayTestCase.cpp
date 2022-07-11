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

#define VkglTestCase_024518_1 "dEQP-GLES31.functional.program_interface_query.buf"
#define VkglTestCase_024518_2 "fer_variable.top_level_array_stride.block_array.var"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024518, VkglTestCase_024518_1, VkglTestCase_024518_2);

#define VkglTestCase_024519_1 "dEQP-GLES31.functional.program_interface_query.buffer_"
#define VkglTestCase_024519_2 "variable.top_level_array_stride.block_array.var_struct"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024519, VkglTestCase_024519_1, VkglTestCase_024519_2);

#define VkglTestCase_024520_1 "dEQP-GLES31.functional.program_interface_query.buffer_var"
#define VkglTestCase_024520_2 "iable.top_level_array_stride.block_array.var_struct_struct"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024520, VkglTestCase_024520_1, VkglTestCase_024520_2);

#define VkglTestCase_024521_1 "dEQP-GLES31.functional.program_interface_query.buffer_variabl"
#define VkglTestCase_024521_2 "e.top_level_array_stride.block_array.var_struct_struct_struct"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024521, VkglTestCase_024521_1, VkglTestCase_024521_2);

#define VkglTestCase_024522_1 "dEQP-GLES31.functional.program_interface_query.buffer_variab"
#define VkglTestCase_024522_2 "le.top_level_array_stride.block_array.var_array_struct_struct"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024522, VkglTestCase_024522_1, VkglTestCase_024522_2);

#define VkglTestCase_024523_1 "dEQP-GLES31.functional.program_interface_query.buffer_var"
#define VkglTestCase_024523_2 "iable.top_level_array_stride.block_array.var_array_struct"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024523, VkglTestCase_024523_1, VkglTestCase_024523_2);

#define VkglTestCase_024524_1 "dEQP-GLES31.functional.program_interface_query.buffer_variab"
#define VkglTestCase_024524_2 "le.top_level_array_stride.block_array.var_struct_array_struct"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024524, VkglTestCase_024524_1, VkglTestCase_024524_2);

#define VkglTestCase_024525_1 "dEQP-GLES31.functional.program_interface_query.buffer_variab"
#define VkglTestCase_024525_2 "le.top_level_array_stride.block_array.var_array_array_struct"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024525, VkglTestCase_024525_1, VkglTestCase_024525_2);

#define VkglTestCase_024526_1 "dEQP-GLES31.functional.program_interface_query.buffer"
#define VkglTestCase_024526_2 "_variable.top_level_array_stride.block_array.var_array"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024526, VkglTestCase_024526_1, VkglTestCase_024526_2);

#define VkglTestCase_024527_1 "dEQP-GLES31.functional.program_interface_query.buffer_var"
#define VkglTestCase_024527_2 "iable.top_level_array_stride.block_array.var_struct_array"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024527, VkglTestCase_024527_1, VkglTestCase_024527_2);

#define VkglTestCase_024528_1 "dEQP-GLES31.functional.program_interface_query.buffer_variab"
#define VkglTestCase_024528_2 "le.top_level_array_stride.block_array.var_struct_struct_array"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024528, VkglTestCase_024528_1, VkglTestCase_024528_2);

#define VkglTestCase_024529_1 "dEQP-GLES31.functional.program_interface_query.buffer_variab"
#define VkglTestCase_024529_2 "le.top_level_array_stride.block_array.var_array_struct_array"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024529, VkglTestCase_024529_1, VkglTestCase_024529_2);

#define VkglTestCase_024530_1 "dEQP-GLES31.functional.program_interface_query.buffer_va"
#define VkglTestCase_024530_2 "riable.top_level_array_stride.block_array.var_array_array"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024530, VkglTestCase_024530_1, VkglTestCase_024530_2);

#define VkglTestCase_024531_1 "dEQP-GLES31.functional.program_interface_query.buffer_variab"
#define VkglTestCase_024531_2 "le.top_level_array_stride.block_array.var_struct_array_array"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024531, VkglTestCase_024531_1, VkglTestCase_024531_2);

#define VkglTestCase_024532_1 "dEQP-GLES31.functional.program_interface_query.buffer_varia"
#define VkglTestCase_024532_2 "ble.top_level_array_stride.block_array.var_array_array_array"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024532, VkglTestCase_024532_1, VkglTestCase_024532_2);

#define VkglTestCase_024533_1 "dEQP-GLES31.functional.program_interface_query.buffer_var"
#define VkglTestCase_024533_2 "iable.top_level_array_stride.block_array.var_unsized_array"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024533, VkglTestCase_024533_1, VkglTestCase_024533_2);

#define VkglTestCase_024534_1 "dEQP-GLES31.functional.program_interface_query.buffer_variabl"
#define VkglTestCase_024534_2 "e.top_level_array_stride.block_array.var_struct_unsized_array"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024534, VkglTestCase_024534_1, VkglTestCase_024534_2);

#define VkglTestCase_024535_1 "dEQP-GLES31.functional.program_interface_query.buffer_variable.t"
#define VkglTestCase_024535_2 "op_level_array_stride.block_array.var_struct_struct_unsized_array"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024535, VkglTestCase_024535_1, VkglTestCase_024535_2);

#define VkglTestCase_024536_1 "dEQP-GLES31.functional.program_interface_query.buffer_variable.t"
#define VkglTestCase_024536_2 "op_level_array_stride.block_array.var_array_struct_unsized_array"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024536, VkglTestCase_024536_1, VkglTestCase_024536_2);

#define VkglTestCase_024537_1 "dEQP-GLES31.functional.program_interface_query.buffer_variab"
#define VkglTestCase_024537_2 "le.top_level_array_stride.block_array.var_array_unsized_array"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024537, VkglTestCase_024537_1, VkglTestCase_024537_2);

#define VkglTestCase_024538_1 "dEQP-GLES31.functional.program_interface_query.buffer_variable.t"
#define VkglTestCase_024538_2 "op_level_array_stride.block_array.var_struct_array_unsized_array"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024538, VkglTestCase_024538_1, VkglTestCase_024538_2);

#define VkglTestCase_024539_1 "dEQP-GLES31.functional.program_interface_query.buffer_variable."
#define VkglTestCase_024539_2 "top_level_array_stride.block_array.var_array_array_unsized_array"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024539, VkglTestCase_024539_1, VkglTestCase_024539_2);
