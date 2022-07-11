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

#define VkglTestCase_020669_1 "dEQP-GLES31.functional.program_interface_query.uniform."
#define VkglTestCase_020669_2 "matrix_row_major.named_block_row_major.no_qualifier.var"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020669, VkglTestCase_020669_1, VkglTestCase_020669_2);

#define VkglTestCase_020670_1 "dEQP-GLES31.functional.program_interface_query.uniform.mat"
#define VkglTestCase_020670_2 "rix_row_major.named_block_row_major.no_qualifier.var_struct"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020670, VkglTestCase_020670_1, VkglTestCase_020670_2);

#define VkglTestCase_020671_1 "dEQP-GLES31.functional.program_interface_query.uniform.mat"
#define VkglTestCase_020671_2 "rix_row_major.named_block_row_major.no_qualifier.var_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020671, VkglTestCase_020671_1, VkglTestCase_020671_2);

#define VkglTestCase_020775_1 "dEQP-GLES31.functional.program_interface_query.unifor"
#define VkglTestCase_020775_2 "m.matrix_stride.named_block_row_major.no_qualifier.var"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020775, VkglTestCase_020775_1, VkglTestCase_020775_2);

#define VkglTestCase_020776_1 "dEQP-GLES31.functional.program_interface_query.uniform.ma"
#define VkglTestCase_020776_2 "trix_stride.named_block_row_major.no_qualifier.var_struct"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020776, VkglTestCase_020776_1, VkglTestCase_020776_2);

#define VkglTestCase_020777_1 "dEQP-GLES31.functional.program_interface_query.uniform.m"
#define VkglTestCase_020777_2 "atrix_stride.named_block_row_major.no_qualifier.var_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020777, VkglTestCase_020777_1, VkglTestCase_020777_2);

#define VkglTestCase_023749_1 "dEQP-GLES31.functional.program_interface_query.buffer_var"
#define VkglTestCase_023749_2 "iable.is_row_major.named_block_row_major.no_qualifier.var"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023749, VkglTestCase_023749_1, VkglTestCase_023749_2);

#define VkglTestCase_023750_1 "dEQP-GLES31.functional.program_interface_query.buffer_variab"
#define VkglTestCase_023750_2 "le.is_row_major.named_block_row_major.no_qualifier.var_struct"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023750, VkglTestCase_023750_1, VkglTestCase_023750_2);

#define VkglTestCase_023751_1 "dEQP-GLES31.functional.program_interface_query.buffer_variable.i"
#define VkglTestCase_023751_2 "s_row_major.named_block_row_major.no_qualifier.var_struct_struct"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023751, VkglTestCase_023751_1, VkglTestCase_023751_2);

#define VkglTestCase_023752_1 "dEQP-GLES31.functional.program_interface_query.buffer_variable."
#define VkglTestCase_023752_2 "is_row_major.named_block_row_major.no_qualifier.var_array_struct"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023752, VkglTestCase_023752_1, VkglTestCase_023752_2);

#define VkglTestCase_023753_1 "dEQP-GLES31.functional.program_interface_query.buffer_variab"
#define VkglTestCase_023753_2 "le.is_row_major.named_block_row_major.no_qualifier.var_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023753, VkglTestCase_023753_1, VkglTestCase_023753_2);

#define VkglTestCase_023754_1 "dEQP-GLES31.functional.program_interface_query.buffer_variable."
#define VkglTestCase_023754_2 "is_row_major.named_block_row_major.no_qualifier.var_struct_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023754, VkglTestCase_023754_1, VkglTestCase_023754_2);

#define VkglTestCase_023755_1 "dEQP-GLES31.functional.program_interface_query.buffer_variable."
#define VkglTestCase_023755_2 "is_row_major.named_block_row_major.no_qualifier.var_array_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023755, VkglTestCase_023755_1, VkglTestCase_023755_2);

#define VkglTestCase_023756_1 "dEQP-GLES31.functional.program_interface_query.buffer_variable.i"
#define VkglTestCase_023756_2 "s_row_major.named_block_row_major.no_qualifier.var_unsized_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023756, VkglTestCase_023756_1, VkglTestCase_023756_2);

#define VkglTestCase_023904_1 "dEQP-GLES31.functional.program_interface_query.buffer_var"
#define VkglTestCase_023904_2 "iable.matrix_stride.named_block_row_major.no_qualifier.var"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023904, VkglTestCase_023904_1, VkglTestCase_023904_2);

#define VkglTestCase_023905_1 "dEQP-GLES31.functional.program_interface_query.buffer_variabl"
#define VkglTestCase_023905_2 "e.matrix_stride.named_block_row_major.no_qualifier.var_struct"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023905, VkglTestCase_023905_1, VkglTestCase_023905_2);

#define VkglTestCase_023906_1 "dEQP-GLES31.functional.program_interface_query.buffer_variable.m"
#define VkglTestCase_023906_2 "atrix_stride.named_block_row_major.no_qualifier.var_struct_struct"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023906, VkglTestCase_023906_1, VkglTestCase_023906_2);

#define VkglTestCase_023907_1 "dEQP-GLES31.functional.program_interface_query.buffer_variable.m"
#define VkglTestCase_023907_2 "atrix_stride.named_block_row_major.no_qualifier.var_array_struct"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023907, VkglTestCase_023907_1, VkglTestCase_023907_2);

#define VkglTestCase_023908_1 "dEQP-GLES31.functional.program_interface_query.buffer_variab"
#define VkglTestCase_023908_2 "le.matrix_stride.named_block_row_major.no_qualifier.var_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023908, VkglTestCase_023908_1, VkglTestCase_023908_2);

#define VkglTestCase_023909_1 "dEQP-GLES31.functional.program_interface_query.buffer_variable.m"
#define VkglTestCase_023909_2 "atrix_stride.named_block_row_major.no_qualifier.var_struct_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023909, VkglTestCase_023909_1, VkglTestCase_023909_2);

#define VkglTestCase_023910_1 "dEQP-GLES31.functional.program_interface_query.buffer_variable."
#define VkglTestCase_023910_2 "matrix_stride.named_block_row_major.no_qualifier.var_array_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023910, VkglTestCase_023910_1, VkglTestCase_023910_2);

#define VkglTestCase_023911_1 "dEQP-GLES31.functional.program_interface_query.buffer_variable.m"
#define VkglTestCase_023911_2 "atrix_stride.named_block_row_major.no_qualifier.var_unsized_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023911, VkglTestCase_023911_1, VkglTestCase_023911_2);
