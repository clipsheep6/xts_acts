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

#define VkglTestCase_020696_1 "dEQP-GLES31.functional.program_interface_query.uniform.m"
#define VkglTestCase_020696_2 "atrix_row_major.unnamed_block_row_major.no_qualifier.var"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020696, VkglTestCase_020696_1, VkglTestCase_020696_2);

#define VkglTestCase_020697_1 "dEQP-GLES31.functional.program_interface_query.uniform.matr"
#define VkglTestCase_020697_2 "ix_row_major.unnamed_block_row_major.no_qualifier.var_struct"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020697, VkglTestCase_020697_1, VkglTestCase_020697_2);

#define VkglTestCase_020698_1 "dEQP-GLES31.functional.program_interface_query.uniform.matr"
#define VkglTestCase_020698_2 "ix_row_major.unnamed_block_row_major.no_qualifier.var_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020698, VkglTestCase_020698_1, VkglTestCase_020698_2);

#define VkglTestCase_020802_1 "dEQP-GLES31.functional.program_interface_query.uniform"
#define VkglTestCase_020802_2 ".matrix_stride.unnamed_block_row_major.no_qualifier.var"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020802, VkglTestCase_020802_1, VkglTestCase_020802_2);

#define VkglTestCase_020803_1 "dEQP-GLES31.functional.program_interface_query.uniform.mat"
#define VkglTestCase_020803_2 "rix_stride.unnamed_block_row_major.no_qualifier.var_struct"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020803, VkglTestCase_020803_1, VkglTestCase_020803_2);

#define VkglTestCase_020804_1 "dEQP-GLES31.functional.program_interface_query.uniform.ma"
#define VkglTestCase_020804_2 "trix_stride.unnamed_block_row_major.no_qualifier.var_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020804, VkglTestCase_020804_1, VkglTestCase_020804_2);

#define VkglTestCase_023821_1 "dEQP-GLES31.functional.program_interface_query.buffer_vari"
#define VkglTestCase_023821_2 "able.is_row_major.unnamed_block_row_major.no_qualifier.var"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023821, VkglTestCase_023821_1, VkglTestCase_023821_2);

#define VkglTestCase_023822_1 "dEQP-GLES31.functional.program_interface_query.buffer_variabl"
#define VkglTestCase_023822_2 "e.is_row_major.unnamed_block_row_major.no_qualifier.var_struct"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023822, VkglTestCase_023822_1, VkglTestCase_023822_2);

#define VkglTestCase_023823_1 "dEQP-GLES31.functional.program_interface_query.buffer_variable.is"
#define VkglTestCase_023823_2 "_row_major.unnamed_block_row_major.no_qualifier.var_struct_struct"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023823, VkglTestCase_023823_1, VkglTestCase_023823_2);

#define VkglTestCase_023824_1 "dEQP-GLES31.functional.program_interface_query.buffer_variable.i"
#define VkglTestCase_023824_2 "s_row_major.unnamed_block_row_major.no_qualifier.var_array_struct"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023824, VkglTestCase_023824_1, VkglTestCase_023824_2);

#define VkglTestCase_023825_1 "dEQP-GLES31.functional.program_interface_query.buffer_variabl"
#define VkglTestCase_023825_2 "e.is_row_major.unnamed_block_row_major.no_qualifier.var_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023825, VkglTestCase_023825_1, VkglTestCase_023825_2);

#define VkglTestCase_023826_1 "dEQP-GLES31.functional.program_interface_query.buffer_variable.i"
#define VkglTestCase_023826_2 "s_row_major.unnamed_block_row_major.no_qualifier.var_struct_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023826, VkglTestCase_023826_1, VkglTestCase_023826_2);

#define VkglTestCase_023827_1 "dEQP-GLES31.functional.program_interface_query.buffer_variable.i"
#define VkglTestCase_023827_2 "s_row_major.unnamed_block_row_major.no_qualifier.var_array_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023827, VkglTestCase_023827_1, VkglTestCase_023827_2);

#define VkglTestCase_023828_1 "dEQP-GLES31.functional.program_interface_query.buffer_variable.is"
#define VkglTestCase_023828_2 "_row_major.unnamed_block_row_major.no_qualifier.var_unsized_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023828, VkglTestCase_023828_1, VkglTestCase_023828_2);

#define VkglTestCase_023976_1 "dEQP-GLES31.functional.program_interface_query.buffer_vari"
#define VkglTestCase_023976_2 "able.matrix_stride.unnamed_block_row_major.no_qualifier.var"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023976, VkglTestCase_023976_1, VkglTestCase_023976_2);

#define VkglTestCase_023977_1 "dEQP-GLES31.functional.program_interface_query.buffer_variable"
#define VkglTestCase_023977_2 ".matrix_stride.unnamed_block_row_major.no_qualifier.var_struct"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023977, VkglTestCase_023977_1, VkglTestCase_023977_2);

#define VkglTestCase_023978_1 "dEQP-GLES31.functional.program_interface_query.buffer_variable.ma"
#define VkglTestCase_023978_2 "trix_stride.unnamed_block_row_major.no_qualifier.var_struct_struct"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023978, VkglTestCase_023978_1, VkglTestCase_023978_2);

#define VkglTestCase_023979_1 "dEQP-GLES31.functional.program_interface_query.buffer_variable.ma"
#define VkglTestCase_023979_2 "trix_stride.unnamed_block_row_major.no_qualifier.var_array_struct"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023979, VkglTestCase_023979_1, VkglTestCase_023979_2);

#define VkglTestCase_023980_1 "dEQP-GLES31.functional.program_interface_query.buffer_variabl"
#define VkglTestCase_023980_2 "e.matrix_stride.unnamed_block_row_major.no_qualifier.var_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023980, VkglTestCase_023980_1, VkglTestCase_023980_2);

#define VkglTestCase_023981_1 "dEQP-GLES31.functional.program_interface_query.buffer_variable.ma"
#define VkglTestCase_023981_2 "trix_stride.unnamed_block_row_major.no_qualifier.var_struct_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023981, VkglTestCase_023981_1, VkglTestCase_023981_2);

#define VkglTestCase_023982_1 "dEQP-GLES31.functional.program_interface_query.buffer_variable.m"
#define VkglTestCase_023982_2 "atrix_stride.unnamed_block_row_major.no_qualifier.var_array_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023982, VkglTestCase_023982_1, VkglTestCase_023982_2);

#define VkglTestCase_023983_1 "dEQP-GLES31.functional.program_interface_query.buffer_variable.ma"
#define VkglTestCase_023983_2 "trix_stride.unnamed_block_row_major.no_qualifier.var_unsized_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023983, VkglTestCase_023983_1, VkglTestCase_023983_2);
