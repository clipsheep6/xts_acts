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

#define VkglTestCase_020678_1 "dEQP-GLES31.functional.program_interface_query.uniform."
#define VkglTestCase_020678_2 "matrix_row_major.named_block_col_major.no_qualifier.var"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020678, VkglTestCase_020678_1, VkglTestCase_020678_2);

#define VkglTestCase_020679_1 "dEQP-GLES31.functional.program_interface_query.uniform.mat"
#define VkglTestCase_020679_2 "rix_row_major.named_block_col_major.no_qualifier.var_struct"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020679, VkglTestCase_020679_1, VkglTestCase_020679_2);

#define VkglTestCase_020680_1 "dEQP-GLES31.functional.program_interface_query.uniform.mat"
#define VkglTestCase_020680_2 "rix_row_major.named_block_col_major.no_qualifier.var_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020680, VkglTestCase_020680_1, VkglTestCase_020680_2);

#define VkglTestCase_020784_1 "dEQP-GLES31.functional.program_interface_query.unifor"
#define VkglTestCase_020784_2 "m.matrix_stride.named_block_col_major.no_qualifier.var"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020784, VkglTestCase_020784_1, VkglTestCase_020784_2);

#define VkglTestCase_020785_1 "dEQP-GLES31.functional.program_interface_query.uniform.ma"
#define VkglTestCase_020785_2 "trix_stride.named_block_col_major.no_qualifier.var_struct"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020785, VkglTestCase_020785_1, VkglTestCase_020785_2);

#define VkglTestCase_020786_1 "dEQP-GLES31.functional.program_interface_query.uniform.m"
#define VkglTestCase_020786_2 "atrix_stride.named_block_col_major.no_qualifier.var_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020786, VkglTestCase_020786_1, VkglTestCase_020786_2);

#define VkglTestCase_023773_1 "dEQP-GLES31.functional.program_interface_query.buffer_var"
#define VkglTestCase_023773_2 "iable.is_row_major.named_block_col_major.no_qualifier.var"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023773, VkglTestCase_023773_1, VkglTestCase_023773_2);

#define VkglTestCase_023774_1 "dEQP-GLES31.functional.program_interface_query.buffer_variab"
#define VkglTestCase_023774_2 "le.is_row_major.named_block_col_major.no_qualifier.var_struct"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023774, VkglTestCase_023774_1, VkglTestCase_023774_2);

#define VkglTestCase_023775_1 "dEQP-GLES31.functional.program_interface_query.buffer_variable.i"
#define VkglTestCase_023775_2 "s_row_major.named_block_col_major.no_qualifier.var_struct_struct"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023775, VkglTestCase_023775_1, VkglTestCase_023775_2);

#define VkglTestCase_023776_1 "dEQP-GLES31.functional.program_interface_query.buffer_variable."
#define VkglTestCase_023776_2 "is_row_major.named_block_col_major.no_qualifier.var_array_struct"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023776, VkglTestCase_023776_1, VkglTestCase_023776_2);

#define VkglTestCase_023777_1 "dEQP-GLES31.functional.program_interface_query.buffer_variab"
#define VkglTestCase_023777_2 "le.is_row_major.named_block_col_major.no_qualifier.var_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023777, VkglTestCase_023777_1, VkglTestCase_023777_2);

#define VkglTestCase_023778_1 "dEQP-GLES31.functional.program_interface_query.buffer_variable."
#define VkglTestCase_023778_2 "is_row_major.named_block_col_major.no_qualifier.var_struct_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023778, VkglTestCase_023778_1, VkglTestCase_023778_2);

#define VkglTestCase_023779_1 "dEQP-GLES31.functional.program_interface_query.buffer_variable."
#define VkglTestCase_023779_2 "is_row_major.named_block_col_major.no_qualifier.var_array_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023779, VkglTestCase_023779_1, VkglTestCase_023779_2);

#define VkglTestCase_023780_1 "dEQP-GLES31.functional.program_interface_query.buffer_variable.i"
#define VkglTestCase_023780_2 "s_row_major.named_block_col_major.no_qualifier.var_unsized_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023780, VkglTestCase_023780_1, VkglTestCase_023780_2);

#define VkglTestCase_023928_1 "dEQP-GLES31.functional.program_interface_query.buffer_var"
#define VkglTestCase_023928_2 "iable.matrix_stride.named_block_col_major.no_qualifier.var"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023928, VkglTestCase_023928_1, VkglTestCase_023928_2);

#define VkglTestCase_023929_1 "dEQP-GLES31.functional.program_interface_query.buffer_variabl"
#define VkglTestCase_023929_2 "e.matrix_stride.named_block_col_major.no_qualifier.var_struct"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023929, VkglTestCase_023929_1, VkglTestCase_023929_2);

#define VkglTestCase_023930_1 "dEQP-GLES31.functional.program_interface_query.buffer_variable.m"
#define VkglTestCase_023930_2 "atrix_stride.named_block_col_major.no_qualifier.var_struct_struct"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023930, VkglTestCase_023930_1, VkglTestCase_023930_2);

#define VkglTestCase_023931_1 "dEQP-GLES31.functional.program_interface_query.buffer_variable.m"
#define VkglTestCase_023931_2 "atrix_stride.named_block_col_major.no_qualifier.var_array_struct"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023931, VkglTestCase_023931_1, VkglTestCase_023931_2);

#define VkglTestCase_023932_1 "dEQP-GLES31.functional.program_interface_query.buffer_variab"
#define VkglTestCase_023932_2 "le.matrix_stride.named_block_col_major.no_qualifier.var_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023932, VkglTestCase_023932_1, VkglTestCase_023932_2);

#define VkglTestCase_023933_1 "dEQP-GLES31.functional.program_interface_query.buffer_variable.m"
#define VkglTestCase_023933_2 "atrix_stride.named_block_col_major.no_qualifier.var_struct_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023933, VkglTestCase_023933_1, VkglTestCase_023933_2);

#define VkglTestCase_023934_1 "dEQP-GLES31.functional.program_interface_query.buffer_variable."
#define VkglTestCase_023934_2 "matrix_stride.named_block_col_major.no_qualifier.var_array_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023934, VkglTestCase_023934_1, VkglTestCase_023934_2);

#define VkglTestCase_023935_1 "dEQP-GLES31.functional.program_interface_query.buffer_variable.m"
#define VkglTestCase_023935_2 "atrix_stride.named_block_col_major.no_qualifier.var_unsized_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023935, VkglTestCase_023935_1, VkglTestCase_023935_2);
