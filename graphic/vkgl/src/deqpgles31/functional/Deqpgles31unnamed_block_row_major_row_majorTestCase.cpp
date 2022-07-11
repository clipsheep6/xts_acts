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

#define VkglTestCase_020699_1 "dEQP-GLES31.functional.program_interface_query.uniform"
#define VkglTestCase_020699_2 ".matrix_row_major.unnamed_block_row_major.row_major.var"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020699, VkglTestCase_020699_1, VkglTestCase_020699_2);

#define VkglTestCase_020700_1 "dEQP-GLES31.functional.program_interface_query.uniform.mat"
#define VkglTestCase_020700_2 "rix_row_major.unnamed_block_row_major.row_major.var_struct"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020700, VkglTestCase_020700_1, VkglTestCase_020700_2);

#define VkglTestCase_020701_1 "dEQP-GLES31.functional.program_interface_query.uniform.ma"
#define VkglTestCase_020701_2 "trix_row_major.unnamed_block_row_major.row_major.var_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020701, VkglTestCase_020701_1, VkglTestCase_020701_2);

#define VkglTestCase_020805_1 "dEQP-GLES31.functional.program_interface_query.unifor"
#define VkglTestCase_020805_2 "m.matrix_stride.unnamed_block_row_major.row_major.var"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020805, VkglTestCase_020805_1, VkglTestCase_020805_2);

#define VkglTestCase_020806_1 "dEQP-GLES31.functional.program_interface_query.uniform.m"
#define VkglTestCase_020806_2 "atrix_stride.unnamed_block_row_major.row_major.var_struct"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020806, VkglTestCase_020806_1, VkglTestCase_020806_2);

#define VkglTestCase_020807_1 "dEQP-GLES31.functional.program_interface_query.uniform.m"
#define VkglTestCase_020807_2 "atrix_stride.unnamed_block_row_major.row_major.var_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020807, VkglTestCase_020807_1, VkglTestCase_020807_2);

#define VkglTestCase_023837_1 "dEQP-GLES31.functional.program_interface_query.buffer_va"
#define VkglTestCase_023837_2 "riable.is_row_major.unnamed_block_row_major.row_major.var"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023837, VkglTestCase_023837_1, VkglTestCase_023837_2);

#define VkglTestCase_023838_1 "dEQP-GLES31.functional.program_interface_query.buffer_variab"
#define VkglTestCase_023838_2 "le.is_row_major.unnamed_block_row_major.row_major.var_struct"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023838, VkglTestCase_023838_1, VkglTestCase_023838_2);

#define VkglTestCase_023839_1 "dEQP-GLES31.functional.program_interface_query.buffer_variable."
#define VkglTestCase_023839_2 "is_row_major.unnamed_block_row_major.row_major.var_struct_struct"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023839, VkglTestCase_023839_1, VkglTestCase_023839_2);

#define VkglTestCase_023840_1 "dEQP-GLES31.functional.program_interface_query.buffer_variable."
#define VkglTestCase_023840_2 "is_row_major.unnamed_block_row_major.row_major.var_array_struct"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023840, VkglTestCase_023840_1, VkglTestCase_023840_2);

#define VkglTestCase_023841_1 "dEQP-GLES31.functional.program_interface_query.buffer_varia"
#define VkglTestCase_023841_2 "ble.is_row_major.unnamed_block_row_major.row_major.var_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023841, VkglTestCase_023841_1, VkglTestCase_023841_2);

#define VkglTestCase_023842_1 "dEQP-GLES31.functional.program_interface_query.buffer_variable."
#define VkglTestCase_023842_2 "is_row_major.unnamed_block_row_major.row_major.var_struct_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023842, VkglTestCase_023842_1, VkglTestCase_023842_2);

#define VkglTestCase_023843_1 "dEQP-GLES31.functional.program_interface_query.buffer_variable"
#define VkglTestCase_023843_2 ".is_row_major.unnamed_block_row_major.row_major.var_array_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023843, VkglTestCase_023843_1, VkglTestCase_023843_2);

#define VkglTestCase_023844_1 "dEQP-GLES31.functional.program_interface_query.buffer_variable."
#define VkglTestCase_023844_2 "is_row_major.unnamed_block_row_major.row_major.var_unsized_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023844, VkglTestCase_023844_1, VkglTestCase_023844_2);

#define VkglTestCase_023992_1 "dEQP-GLES31.functional.program_interface_query.buffer_var"
#define VkglTestCase_023992_2 "iable.matrix_stride.unnamed_block_row_major.row_major.var"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023992, VkglTestCase_023992_1, VkglTestCase_023992_2);

#define VkglTestCase_023993_1 "dEQP-GLES31.functional.program_interface_query.buffer_variab"
#define VkglTestCase_023993_2 "le.matrix_stride.unnamed_block_row_major.row_major.var_struct"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023993, VkglTestCase_023993_1, VkglTestCase_023993_2);

#define VkglTestCase_023994_1 "dEQP-GLES31.functional.program_interface_query.buffer_variable.m"
#define VkglTestCase_023994_2 "atrix_stride.unnamed_block_row_major.row_major.var_struct_struct"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023994, VkglTestCase_023994_1, VkglTestCase_023994_2);

#define VkglTestCase_023995_1 "dEQP-GLES31.functional.program_interface_query.buffer_variable."
#define VkglTestCase_023995_2 "matrix_stride.unnamed_block_row_major.row_major.var_array_struct"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023995, VkglTestCase_023995_1, VkglTestCase_023995_2);

#define VkglTestCase_023996_1 "dEQP-GLES31.functional.program_interface_query.buffer_variab"
#define VkglTestCase_023996_2 "le.matrix_stride.unnamed_block_row_major.row_major.var_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023996, VkglTestCase_023996_1, VkglTestCase_023996_2);

#define VkglTestCase_023997_1 "dEQP-GLES31.functional.program_interface_query.buffer_variable."
#define VkglTestCase_023997_2 "matrix_stride.unnamed_block_row_major.row_major.var_struct_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023997, VkglTestCase_023997_1, VkglTestCase_023997_2);

#define VkglTestCase_023998_1 "dEQP-GLES31.functional.program_interface_query.buffer_variable."
#define VkglTestCase_023998_2 "matrix_stride.unnamed_block_row_major.row_major.var_array_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023998, VkglTestCase_023998_1, VkglTestCase_023998_2);

#define VkglTestCase_023999_1 "dEQP-GLES31.functional.program_interface_query.buffer_variable.m"
#define VkglTestCase_023999_2 "atrix_stride.unnamed_block_row_major.row_major.var_unsized_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023999, VkglTestCase_023999_1, VkglTestCase_023999_2);
