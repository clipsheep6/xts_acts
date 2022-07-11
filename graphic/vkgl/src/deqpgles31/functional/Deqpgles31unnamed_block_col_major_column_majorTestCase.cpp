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

#define VkglTestCase_020711_1 "dEQP-GLES31.functional.program_interface_query.uniform.m"
#define VkglTestCase_020711_2 "atrix_row_major.unnamed_block_col_major.column_major.var"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020711, VkglTestCase_020711_1, VkglTestCase_020711_2);

#define VkglTestCase_020712_1 "dEQP-GLES31.functional.program_interface_query.uniform.matr"
#define VkglTestCase_020712_2 "ix_row_major.unnamed_block_col_major.column_major.var_struct"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020712, VkglTestCase_020712_1, VkglTestCase_020712_2);

#define VkglTestCase_020713_1 "dEQP-GLES31.functional.program_interface_query.uniform.matr"
#define VkglTestCase_020713_2 "ix_row_major.unnamed_block_col_major.column_major.var_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020713, VkglTestCase_020713_1, VkglTestCase_020713_2);

#define VkglTestCase_020817_1 "dEQP-GLES31.functional.program_interface_query.uniform"
#define VkglTestCase_020817_2 ".matrix_stride.unnamed_block_col_major.column_major.var"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020817, VkglTestCase_020817_1, VkglTestCase_020817_2);

#define VkglTestCase_020818_1 "dEQP-GLES31.functional.program_interface_query.uniform.mat"
#define VkglTestCase_020818_2 "rix_stride.unnamed_block_col_major.column_major.var_struct"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020818, VkglTestCase_020818_1, VkglTestCase_020818_2);

#define VkglTestCase_020819_1 "dEQP-GLES31.functional.program_interface_query.uniform.ma"
#define VkglTestCase_020819_2 "trix_stride.unnamed_block_col_major.column_major.var_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020819, VkglTestCase_020819_1, VkglTestCase_020819_2);

#define VkglTestCase_023853_1 "dEQP-GLES31.functional.program_interface_query.buffer_vari"
#define VkglTestCase_023853_2 "able.is_row_major.unnamed_block_col_major.column_major.var"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023853, VkglTestCase_023853_1, VkglTestCase_023853_2);

#define VkglTestCase_023854_1 "dEQP-GLES31.functional.program_interface_query.buffer_variabl"
#define VkglTestCase_023854_2 "e.is_row_major.unnamed_block_col_major.column_major.var_struct"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023854, VkglTestCase_023854_1, VkglTestCase_023854_2);

#define VkglTestCase_023855_1 "dEQP-GLES31.functional.program_interface_query.buffer_variable.is"
#define VkglTestCase_023855_2 "_row_major.unnamed_block_col_major.column_major.var_struct_struct"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023855, VkglTestCase_023855_1, VkglTestCase_023855_2);

#define VkglTestCase_023856_1 "dEQP-GLES31.functional.program_interface_query.buffer_variable.i"
#define VkglTestCase_023856_2 "s_row_major.unnamed_block_col_major.column_major.var_array_struct"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023856, VkglTestCase_023856_1, VkglTestCase_023856_2);

#define VkglTestCase_023857_1 "dEQP-GLES31.functional.program_interface_query.buffer_variabl"
#define VkglTestCase_023857_2 "e.is_row_major.unnamed_block_col_major.column_major.var_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023857, VkglTestCase_023857_1, VkglTestCase_023857_2);

#define VkglTestCase_023858_1 "dEQP-GLES31.functional.program_interface_query.buffer_variable.i"
#define VkglTestCase_023858_2 "s_row_major.unnamed_block_col_major.column_major.var_struct_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023858, VkglTestCase_023858_1, VkglTestCase_023858_2);

#define VkglTestCase_023859_1 "dEQP-GLES31.functional.program_interface_query.buffer_variable.i"
#define VkglTestCase_023859_2 "s_row_major.unnamed_block_col_major.column_major.var_array_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023859, VkglTestCase_023859_1, VkglTestCase_023859_2);

#define VkglTestCase_023860_1 "dEQP-GLES31.functional.program_interface_query.buffer_variable.is"
#define VkglTestCase_023860_2 "_row_major.unnamed_block_col_major.column_major.var_unsized_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023860, VkglTestCase_023860_1, VkglTestCase_023860_2);

#define VkglTestCase_024008_1 "dEQP-GLES31.functional.program_interface_query.buffer_vari"
#define VkglTestCase_024008_2 "able.matrix_stride.unnamed_block_col_major.column_major.var"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_024008, VkglTestCase_024008_1, VkglTestCase_024008_2);

#define VkglTestCase_024009_1 "dEQP-GLES31.functional.program_interface_query.buffer_variable"
#define VkglTestCase_024009_2 ".matrix_stride.unnamed_block_col_major.column_major.var_struct"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_024009, VkglTestCase_024009_1, VkglTestCase_024009_2);

#define VkglTestCase_024010_1 "dEQP-GLES31.functional.program_interface_query.buffer_variable.ma"
#define VkglTestCase_024010_2 "trix_stride.unnamed_block_col_major.column_major.var_struct_struct"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_024010, VkglTestCase_024010_1, VkglTestCase_024010_2);

#define VkglTestCase_024011_1 "dEQP-GLES31.functional.program_interface_query.buffer_variable.ma"
#define VkglTestCase_024011_2 "trix_stride.unnamed_block_col_major.column_major.var_array_struct"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_024011, VkglTestCase_024011_1, VkglTestCase_024011_2);

#define VkglTestCase_024012_1 "dEQP-GLES31.functional.program_interface_query.buffer_variabl"
#define VkglTestCase_024012_2 "e.matrix_stride.unnamed_block_col_major.column_major.var_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_024012, VkglTestCase_024012_1, VkglTestCase_024012_2);

#define VkglTestCase_024013_1 "dEQP-GLES31.functional.program_interface_query.buffer_variable.ma"
#define VkglTestCase_024013_2 "trix_stride.unnamed_block_col_major.column_major.var_struct_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_024013, VkglTestCase_024013_1, VkglTestCase_024013_2);

#define VkglTestCase_024014_1 "dEQP-GLES31.functional.program_interface_query.buffer_variable.m"
#define VkglTestCase_024014_2 "atrix_stride.unnamed_block_col_major.column_major.var_array_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_024014, VkglTestCase_024014_1, VkglTestCase_024014_2);

#define VkglTestCase_024015_1 "dEQP-GLES31.functional.program_interface_query.buffer_variable.ma"
#define VkglTestCase_024015_2 "trix_stride.unnamed_block_col_major.column_major.var_unsized_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_024015, VkglTestCase_024015_1, VkglTestCase_024015_2);
