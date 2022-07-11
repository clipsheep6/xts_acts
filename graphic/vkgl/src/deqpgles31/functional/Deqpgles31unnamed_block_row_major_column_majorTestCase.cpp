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

#define VkglTestCase_020702_1 "dEQP-GLES31.functional.program_interface_query.uniform.m"
#define VkglTestCase_020702_2 "atrix_row_major.unnamed_block_row_major.column_major.var"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020702, VkglTestCase_020702_1, VkglTestCase_020702_2);

#define VkglTestCase_020703_1 "dEQP-GLES31.functional.program_interface_query.uniform.matr"
#define VkglTestCase_020703_2 "ix_row_major.unnamed_block_row_major.column_major.var_struct"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020703, VkglTestCase_020703_1, VkglTestCase_020703_2);

#define VkglTestCase_020704_1 "dEQP-GLES31.functional.program_interface_query.uniform.matr"
#define VkglTestCase_020704_2 "ix_row_major.unnamed_block_row_major.column_major.var_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020704, VkglTestCase_020704_1, VkglTestCase_020704_2);

#define VkglTestCase_020808_1 "dEQP-GLES31.functional.program_interface_query.uniform"
#define VkglTestCase_020808_2 ".matrix_stride.unnamed_block_row_major.column_major.var"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020808, VkglTestCase_020808_1, VkglTestCase_020808_2);

#define VkglTestCase_020809_1 "dEQP-GLES31.functional.program_interface_query.uniform.mat"
#define VkglTestCase_020809_2 "rix_stride.unnamed_block_row_major.column_major.var_struct"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020809, VkglTestCase_020809_1, VkglTestCase_020809_2);

#define VkglTestCase_020810_1 "dEQP-GLES31.functional.program_interface_query.uniform.ma"
#define VkglTestCase_020810_2 "trix_stride.unnamed_block_row_major.column_major.var_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020810, VkglTestCase_020810_1, VkglTestCase_020810_2);

#define VkglTestCase_023829_1 "dEQP-GLES31.functional.program_interface_query.buffer_vari"
#define VkglTestCase_023829_2 "able.is_row_major.unnamed_block_row_major.column_major.var"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023829, VkglTestCase_023829_1, VkglTestCase_023829_2);

#define VkglTestCase_023830_1 "dEQP-GLES31.functional.program_interface_query.buffer_variabl"
#define VkglTestCase_023830_2 "e.is_row_major.unnamed_block_row_major.column_major.var_struct"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023830, VkglTestCase_023830_1, VkglTestCase_023830_2);

#define VkglTestCase_023831_1 "dEQP-GLES31.functional.program_interface_query.buffer_variable.is"
#define VkglTestCase_023831_2 "_row_major.unnamed_block_row_major.column_major.var_struct_struct"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023831, VkglTestCase_023831_1, VkglTestCase_023831_2);

#define VkglTestCase_023832_1 "dEQP-GLES31.functional.program_interface_query.buffer_variable.i"
#define VkglTestCase_023832_2 "s_row_major.unnamed_block_row_major.column_major.var_array_struct"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023832, VkglTestCase_023832_1, VkglTestCase_023832_2);

#define VkglTestCase_023833_1 "dEQP-GLES31.functional.program_interface_query.buffer_variabl"
#define VkglTestCase_023833_2 "e.is_row_major.unnamed_block_row_major.column_major.var_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023833, VkglTestCase_023833_1, VkglTestCase_023833_2);

#define VkglTestCase_023834_1 "dEQP-GLES31.functional.program_interface_query.buffer_variable.i"
#define VkglTestCase_023834_2 "s_row_major.unnamed_block_row_major.column_major.var_struct_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023834, VkglTestCase_023834_1, VkglTestCase_023834_2);

#define VkglTestCase_023835_1 "dEQP-GLES31.functional.program_interface_query.buffer_variable.i"
#define VkglTestCase_023835_2 "s_row_major.unnamed_block_row_major.column_major.var_array_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023835, VkglTestCase_023835_1, VkglTestCase_023835_2);

#define VkglTestCase_023836_1 "dEQP-GLES31.functional.program_interface_query.buffer_variable.is"
#define VkglTestCase_023836_2 "_row_major.unnamed_block_row_major.column_major.var_unsized_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023836, VkglTestCase_023836_1, VkglTestCase_023836_2);

#define VkglTestCase_023984_1 "dEQP-GLES31.functional.program_interface_query.buffer_vari"
#define VkglTestCase_023984_2 "able.matrix_stride.unnamed_block_row_major.column_major.var"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023984, VkglTestCase_023984_1, VkglTestCase_023984_2);

#define VkglTestCase_023985_1 "dEQP-GLES31.functional.program_interface_query.buffer_variable"
#define VkglTestCase_023985_2 ".matrix_stride.unnamed_block_row_major.column_major.var_struct"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023985, VkglTestCase_023985_1, VkglTestCase_023985_2);

#define VkglTestCase_023986_1 "dEQP-GLES31.functional.program_interface_query.buffer_variable.ma"
#define VkglTestCase_023986_2 "trix_stride.unnamed_block_row_major.column_major.var_struct_struct"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023986, VkglTestCase_023986_1, VkglTestCase_023986_2);

#define VkglTestCase_023987_1 "dEQP-GLES31.functional.program_interface_query.buffer_variable.ma"
#define VkglTestCase_023987_2 "trix_stride.unnamed_block_row_major.column_major.var_array_struct"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023987, VkglTestCase_023987_1, VkglTestCase_023987_2);

#define VkglTestCase_023988_1 "dEQP-GLES31.functional.program_interface_query.buffer_variabl"
#define VkglTestCase_023988_2 "e.matrix_stride.unnamed_block_row_major.column_major.var_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023988, VkglTestCase_023988_1, VkglTestCase_023988_2);

#define VkglTestCase_023989_1 "dEQP-GLES31.functional.program_interface_query.buffer_variable.ma"
#define VkglTestCase_023989_2 "trix_stride.unnamed_block_row_major.column_major.var_struct_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023989, VkglTestCase_023989_1, VkglTestCase_023989_2);

#define VkglTestCase_023990_1 "dEQP-GLES31.functional.program_interface_query.buffer_variable.m"
#define VkglTestCase_023990_2 "atrix_stride.unnamed_block_row_major.column_major.var_array_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023990, VkglTestCase_023990_1, VkglTestCase_023990_2);

#define VkglTestCase_023991_1 "dEQP-GLES31.functional.program_interface_query.buffer_variable.ma"
#define VkglTestCase_023991_2 "trix_stride.unnamed_block_row_major.column_major.var_unsized_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023991, VkglTestCase_023991_1, VkglTestCase_023991_2);
