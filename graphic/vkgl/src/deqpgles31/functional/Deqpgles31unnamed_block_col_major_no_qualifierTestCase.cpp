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

#define VkglTestCase_020705_1 "dEQP-GLES31.functional.program_interface_query.uniform.m"
#define VkglTestCase_020705_2 "atrix_row_major.unnamed_block_col_major.no_qualifier.var"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020705, VkglTestCase_020705_1, VkglTestCase_020705_2);

#define VkglTestCase_020706_1 "dEQP-GLES31.functional.program_interface_query.uniform.matr"
#define VkglTestCase_020706_2 "ix_row_major.unnamed_block_col_major.no_qualifier.var_struct"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020706, VkglTestCase_020706_1, VkglTestCase_020706_2);

#define VkglTestCase_020707_1 "dEQP-GLES31.functional.program_interface_query.uniform.matr"
#define VkglTestCase_020707_2 "ix_row_major.unnamed_block_col_major.no_qualifier.var_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020707, VkglTestCase_020707_1, VkglTestCase_020707_2);

#define VkglTestCase_020811_1 "dEQP-GLES31.functional.program_interface_query.uniform"
#define VkglTestCase_020811_2 ".matrix_stride.unnamed_block_col_major.no_qualifier.var"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020811, VkglTestCase_020811_1, VkglTestCase_020811_2);

#define VkglTestCase_020812_1 "dEQP-GLES31.functional.program_interface_query.uniform.mat"
#define VkglTestCase_020812_2 "rix_stride.unnamed_block_col_major.no_qualifier.var_struct"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020812, VkglTestCase_020812_1, VkglTestCase_020812_2);

#define VkglTestCase_020813_1 "dEQP-GLES31.functional.program_interface_query.uniform.ma"
#define VkglTestCase_020813_2 "trix_stride.unnamed_block_col_major.no_qualifier.var_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020813, VkglTestCase_020813_1, VkglTestCase_020813_2);

#define VkglTestCase_023845_1 "dEQP-GLES31.functional.program_interface_query.buffer_vari"
#define VkglTestCase_023845_2 "able.is_row_major.unnamed_block_col_major.no_qualifier.var"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023845, VkglTestCase_023845_1, VkglTestCase_023845_2);

#define VkglTestCase_023846_1 "dEQP-GLES31.functional.program_interface_query.buffer_variabl"
#define VkglTestCase_023846_2 "e.is_row_major.unnamed_block_col_major.no_qualifier.var_struct"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023846, VkglTestCase_023846_1, VkglTestCase_023846_2);

#define VkglTestCase_023847_1 "dEQP-GLES31.functional.program_interface_query.buffer_variable.is"
#define VkglTestCase_023847_2 "_row_major.unnamed_block_col_major.no_qualifier.var_struct_struct"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023847, VkglTestCase_023847_1, VkglTestCase_023847_2);

#define VkglTestCase_023848_1 "dEQP-GLES31.functional.program_interface_query.buffer_variable.i"
#define VkglTestCase_023848_2 "s_row_major.unnamed_block_col_major.no_qualifier.var_array_struct"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023848, VkglTestCase_023848_1, VkglTestCase_023848_2);

#define VkglTestCase_023849_1 "dEQP-GLES31.functional.program_interface_query.buffer_variabl"
#define VkglTestCase_023849_2 "e.is_row_major.unnamed_block_col_major.no_qualifier.var_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023849, VkglTestCase_023849_1, VkglTestCase_023849_2);

#define VkglTestCase_023850_1 "dEQP-GLES31.functional.program_interface_query.buffer_variable.i"
#define VkglTestCase_023850_2 "s_row_major.unnamed_block_col_major.no_qualifier.var_struct_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023850, VkglTestCase_023850_1, VkglTestCase_023850_2);

#define VkglTestCase_023851_1 "dEQP-GLES31.functional.program_interface_query.buffer_variable.i"
#define VkglTestCase_023851_2 "s_row_major.unnamed_block_col_major.no_qualifier.var_array_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023851, VkglTestCase_023851_1, VkglTestCase_023851_2);

#define VkglTestCase_023852_1 "dEQP-GLES31.functional.program_interface_query.buffer_variable.is"
#define VkglTestCase_023852_2 "_row_major.unnamed_block_col_major.no_qualifier.var_unsized_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023852, VkglTestCase_023852_1, VkglTestCase_023852_2);

#define VkglTestCase_024000_1 "dEQP-GLES31.functional.program_interface_query.buffer_vari"
#define VkglTestCase_024000_2 "able.matrix_stride.unnamed_block_col_major.no_qualifier.var"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_024000, VkglTestCase_024000_1, VkglTestCase_024000_2);

#define VkglTestCase_024001_1 "dEQP-GLES31.functional.program_interface_query.buffer_variable"
#define VkglTestCase_024001_2 ".matrix_stride.unnamed_block_col_major.no_qualifier.var_struct"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_024001, VkglTestCase_024001_1, VkglTestCase_024001_2);

#define VkglTestCase_024002_1 "dEQP-GLES31.functional.program_interface_query.buffer_variable.ma"
#define VkglTestCase_024002_2 "trix_stride.unnamed_block_col_major.no_qualifier.var_struct_struct"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_024002, VkglTestCase_024002_1, VkglTestCase_024002_2);

#define VkglTestCase_024003_1 "dEQP-GLES31.functional.program_interface_query.buffer_variable.ma"
#define VkglTestCase_024003_2 "trix_stride.unnamed_block_col_major.no_qualifier.var_array_struct"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_024003, VkglTestCase_024003_1, VkglTestCase_024003_2);

#define VkglTestCase_024004_1 "dEQP-GLES31.functional.program_interface_query.buffer_variabl"
#define VkglTestCase_024004_2 "e.matrix_stride.unnamed_block_col_major.no_qualifier.var_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_024004, VkglTestCase_024004_1, VkglTestCase_024004_2);

#define VkglTestCase_024005_1 "dEQP-GLES31.functional.program_interface_query.buffer_variable.ma"
#define VkglTestCase_024005_2 "trix_stride.unnamed_block_col_major.no_qualifier.var_struct_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_024005, VkglTestCase_024005_1, VkglTestCase_024005_2);

#define VkglTestCase_024006_1 "dEQP-GLES31.functional.program_interface_query.buffer_variable.m"
#define VkglTestCase_024006_2 "atrix_stride.unnamed_block_col_major.no_qualifier.var_array_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_024006, VkglTestCase_024006_1, VkglTestCase_024006_2);

#define VkglTestCase_024007_1 "dEQP-GLES31.functional.program_interface_query.buffer_variable.ma"
#define VkglTestCase_024007_2 "trix_stride.unnamed_block_col_major.no_qualifier.var_unsized_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_024007, VkglTestCase_024007_1, VkglTestCase_024007_2);
