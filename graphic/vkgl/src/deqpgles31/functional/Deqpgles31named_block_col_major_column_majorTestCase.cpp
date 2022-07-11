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

#define VkglTestCase_020684_1 "dEQP-GLES31.functional.program_interface_query.uniform."
#define VkglTestCase_020684_2 "matrix_row_major.named_block_col_major.column_major.var"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020684, VkglTestCase_020684_1, VkglTestCase_020684_2);

#define VkglTestCase_020685_1 "dEQP-GLES31.functional.program_interface_query.uniform.mat"
#define VkglTestCase_020685_2 "rix_row_major.named_block_col_major.column_major.var_struct"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020685, VkglTestCase_020685_1, VkglTestCase_020685_2);

#define VkglTestCase_020686_1 "dEQP-GLES31.functional.program_interface_query.uniform.mat"
#define VkglTestCase_020686_2 "rix_row_major.named_block_col_major.column_major.var_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020686, VkglTestCase_020686_1, VkglTestCase_020686_2);

#define VkglTestCase_020790_1 "dEQP-GLES31.functional.program_interface_query.unifor"
#define VkglTestCase_020790_2 "m.matrix_stride.named_block_col_major.column_major.var"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020790, VkglTestCase_020790_1, VkglTestCase_020790_2);

#define VkglTestCase_020791_1 "dEQP-GLES31.functional.program_interface_query.uniform.ma"
#define VkglTestCase_020791_2 "trix_stride.named_block_col_major.column_major.var_struct"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020791, VkglTestCase_020791_1, VkglTestCase_020791_2);

#define VkglTestCase_020792_1 "dEQP-GLES31.functional.program_interface_query.uniform.m"
#define VkglTestCase_020792_2 "atrix_stride.named_block_col_major.column_major.var_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020792, VkglTestCase_020792_1, VkglTestCase_020792_2);

#define VkglTestCase_023781_1 "dEQP-GLES31.functional.program_interface_query.buffer_var"
#define VkglTestCase_023781_2 "iable.is_row_major.named_block_col_major.column_major.var"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023781, VkglTestCase_023781_1, VkglTestCase_023781_2);

#define VkglTestCase_023782_1 "dEQP-GLES31.functional.program_interface_query.buffer_variab"
#define VkglTestCase_023782_2 "le.is_row_major.named_block_col_major.column_major.var_struct"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023782, VkglTestCase_023782_1, VkglTestCase_023782_2);

#define VkglTestCase_023783_1 "dEQP-GLES31.functional.program_interface_query.buffer_variable.i"
#define VkglTestCase_023783_2 "s_row_major.named_block_col_major.column_major.var_struct_struct"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023783, VkglTestCase_023783_1, VkglTestCase_023783_2);

#define VkglTestCase_023784_1 "dEQP-GLES31.functional.program_interface_query.buffer_variable."
#define VkglTestCase_023784_2 "is_row_major.named_block_col_major.column_major.var_array_struct"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023784, VkglTestCase_023784_1, VkglTestCase_023784_2);

#define VkglTestCase_023785_1 "dEQP-GLES31.functional.program_interface_query.buffer_variab"
#define VkglTestCase_023785_2 "le.is_row_major.named_block_col_major.column_major.var_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023785, VkglTestCase_023785_1, VkglTestCase_023785_2);

#define VkglTestCase_023786_1 "dEQP-GLES31.functional.program_interface_query.buffer_variable."
#define VkglTestCase_023786_2 "is_row_major.named_block_col_major.column_major.var_struct_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023786, VkglTestCase_023786_1, VkglTestCase_023786_2);

#define VkglTestCase_023787_1 "dEQP-GLES31.functional.program_interface_query.buffer_variable."
#define VkglTestCase_023787_2 "is_row_major.named_block_col_major.column_major.var_array_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023787, VkglTestCase_023787_1, VkglTestCase_023787_2);

#define VkglTestCase_023788_1 "dEQP-GLES31.functional.program_interface_query.buffer_variable.i"
#define VkglTestCase_023788_2 "s_row_major.named_block_col_major.column_major.var_unsized_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023788, VkglTestCase_023788_1, VkglTestCase_023788_2);

#define VkglTestCase_023936_1 "dEQP-GLES31.functional.program_interface_query.buffer_var"
#define VkglTestCase_023936_2 "iable.matrix_stride.named_block_col_major.column_major.var"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023936, VkglTestCase_023936_1, VkglTestCase_023936_2);

#define VkglTestCase_023937_1 "dEQP-GLES31.functional.program_interface_query.buffer_variabl"
#define VkglTestCase_023937_2 "e.matrix_stride.named_block_col_major.column_major.var_struct"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023937, VkglTestCase_023937_1, VkglTestCase_023937_2);

#define VkglTestCase_023938_1 "dEQP-GLES31.functional.program_interface_query.buffer_variable.m"
#define VkglTestCase_023938_2 "atrix_stride.named_block_col_major.column_major.var_struct_struct"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023938, VkglTestCase_023938_1, VkglTestCase_023938_2);

#define VkglTestCase_023939_1 "dEQP-GLES31.functional.program_interface_query.buffer_variable.m"
#define VkglTestCase_023939_2 "atrix_stride.named_block_col_major.column_major.var_array_struct"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023939, VkglTestCase_023939_1, VkglTestCase_023939_2);

#define VkglTestCase_023940_1 "dEQP-GLES31.functional.program_interface_query.buffer_variab"
#define VkglTestCase_023940_2 "le.matrix_stride.named_block_col_major.column_major.var_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023940, VkglTestCase_023940_1, VkglTestCase_023940_2);

#define VkglTestCase_023941_1 "dEQP-GLES31.functional.program_interface_query.buffer_variable.m"
#define VkglTestCase_023941_2 "atrix_stride.named_block_col_major.column_major.var_struct_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023941, VkglTestCase_023941_1, VkglTestCase_023941_2);

#define VkglTestCase_023942_1 "dEQP-GLES31.functional.program_interface_query.buffer_variable."
#define VkglTestCase_023942_2 "matrix_stride.named_block_col_major.column_major.var_array_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023942, VkglTestCase_023942_1, VkglTestCase_023942_2);

#define VkglTestCase_023943_1 "dEQP-GLES31.functional.program_interface_query.buffer_variable.m"
#define VkglTestCase_023943_2 "atrix_stride.named_block_col_major.column_major.var_unsized_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023943, VkglTestCase_023943_1, VkglTestCase_023943_2);
