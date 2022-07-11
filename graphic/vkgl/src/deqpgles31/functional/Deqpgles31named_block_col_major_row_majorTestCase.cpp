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
#include "../ActsDeqpgles310021TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_020681_1 "dEQP-GLES31.functional.program_interface_query.unifor"
#define VkglTestCase_020681_2 "m.matrix_row_major.named_block_col_major.row_major.var"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020681, VkglTestCase_020681_1, VkglTestCase_020681_2);

#define VkglTestCase_020682_1 "dEQP-GLES31.functional.program_interface_query.uniform.ma"
#define VkglTestCase_020682_2 "trix_row_major.named_block_col_major.row_major.var_struct"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020682, VkglTestCase_020682_1, VkglTestCase_020682_2);

#define VkglTestCase_020683_1 "dEQP-GLES31.functional.program_interface_query.uniform.m"
#define VkglTestCase_020683_2 "atrix_row_major.named_block_col_major.row_major.var_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020683, VkglTestCase_020683_1, VkglTestCase_020683_2);

#define VkglTestCase_020787_1 "dEQP-GLES31.functional.program_interface_query.unifo"
#define VkglTestCase_020787_2 "rm.matrix_stride.named_block_col_major.row_major.var"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020787, VkglTestCase_020787_1, VkglTestCase_020787_2);

#define VkglTestCase_020788_1 "dEQP-GLES31.functional.program_interface_query.uniform."
#define VkglTestCase_020788_2 "matrix_stride.named_block_col_major.row_major.var_struct"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020788, VkglTestCase_020788_1, VkglTestCase_020788_2);

#define VkglTestCase_020789_1 "dEQP-GLES31.functional.program_interface_query.uniform."
#define VkglTestCase_020789_2 "matrix_stride.named_block_col_major.row_major.var_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020789, VkglTestCase_020789_1, VkglTestCase_020789_2);

#define VkglTestCase_023789_1 "dEQP-GLES31.functional.program_interface_query.buffer_v"
#define VkglTestCase_023789_2 "ariable.is_row_major.named_block_col_major.row_major.var"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023789, VkglTestCase_023789_1, VkglTestCase_023789_2);

#define VkglTestCase_023790_1 "dEQP-GLES31.functional.program_interface_query.buffer_varia"
#define VkglTestCase_023790_2 "ble.is_row_major.named_block_col_major.row_major.var_struct"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023790, VkglTestCase_023790_1, VkglTestCase_023790_2);

#define VkglTestCase_023791_1 "dEQP-GLES31.functional.program_interface_query.buffer_variable"
#define VkglTestCase_023791_2 ".is_row_major.named_block_col_major.row_major.var_struct_struct"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023791, VkglTestCase_023791_1, VkglTestCase_023791_2);

#define VkglTestCase_023792_1 "dEQP-GLES31.functional.program_interface_query.buffer_variable"
#define VkglTestCase_023792_2 ".is_row_major.named_block_col_major.row_major.var_array_struct"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023792, VkglTestCase_023792_1, VkglTestCase_023792_2);

#define VkglTestCase_023793_1 "dEQP-GLES31.functional.program_interface_query.buffer_vari"
#define VkglTestCase_023793_2 "able.is_row_major.named_block_col_major.row_major.var_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023793, VkglTestCase_023793_1, VkglTestCase_023793_2);

#define VkglTestCase_023794_1 "dEQP-GLES31.functional.program_interface_query.buffer_variable"
#define VkglTestCase_023794_2 ".is_row_major.named_block_col_major.row_major.var_struct_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023794, VkglTestCase_023794_1, VkglTestCase_023794_2);

#define VkglTestCase_023795_1 "dEQP-GLES31.functional.program_interface_query.buffer_variabl"
#define VkglTestCase_023795_2 "e.is_row_major.named_block_col_major.row_major.var_array_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023795, VkglTestCase_023795_1, VkglTestCase_023795_2);

#define VkglTestCase_023796_1 "dEQP-GLES31.functional.program_interface_query.buffer_variable"
#define VkglTestCase_023796_2 ".is_row_major.named_block_col_major.row_major.var_unsized_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023796, VkglTestCase_023796_1, VkglTestCase_023796_2);

#define VkglTestCase_023944_1 "dEQP-GLES31.functional.program_interface_query.buffer_va"
#define VkglTestCase_023944_2 "riable.matrix_stride.named_block_col_major.row_major.var"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023944, VkglTestCase_023944_1, VkglTestCase_023944_2);

#define VkglTestCase_023945_1 "dEQP-GLES31.functional.program_interface_query.buffer_varia"
#define VkglTestCase_023945_2 "ble.matrix_stride.named_block_col_major.row_major.var_struct"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023945, VkglTestCase_023945_1, VkglTestCase_023945_2);

#define VkglTestCase_023946_1 "dEQP-GLES31.functional.program_interface_query.buffer_variable."
#define VkglTestCase_023946_2 "matrix_stride.named_block_col_major.row_major.var_struct_struct"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023946, VkglTestCase_023946_1, VkglTestCase_023946_2);

#define VkglTestCase_023947_1 "dEQP-GLES31.functional.program_interface_query.buffer_variable"
#define VkglTestCase_023947_2 ".matrix_stride.named_block_col_major.row_major.var_array_struct"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023947, VkglTestCase_023947_1, VkglTestCase_023947_2);

#define VkglTestCase_023948_1 "dEQP-GLES31.functional.program_interface_query.buffer_varia"
#define VkglTestCase_023948_2 "ble.matrix_stride.named_block_col_major.row_major.var_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023948, VkglTestCase_023948_1, VkglTestCase_023948_2);

#define VkglTestCase_023949_1 "dEQP-GLES31.functional.program_interface_query.buffer_variable"
#define VkglTestCase_023949_2 ".matrix_stride.named_block_col_major.row_major.var_struct_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023949, VkglTestCase_023949_1, VkglTestCase_023949_2);

#define VkglTestCase_023950_1 "dEQP-GLES31.functional.program_interface_query.buffer_variable"
#define VkglTestCase_023950_2 ".matrix_stride.named_block_col_major.row_major.var_array_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023950, VkglTestCase_023950_1, VkglTestCase_023950_2);

#define VkglTestCase_023951_1 "dEQP-GLES31.functional.program_interface_query.buffer_variable."
#define VkglTestCase_023951_2 "matrix_stride.named_block_col_major.row_major.var_unsized_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023951, VkglTestCase_023951_1, VkglTestCase_023951_2);
