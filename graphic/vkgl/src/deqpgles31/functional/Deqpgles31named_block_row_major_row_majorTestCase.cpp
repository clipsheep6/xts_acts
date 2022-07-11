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

#define VkglTestCase_020672_1 "dEQP-GLES31.functional.program_interface_query.unifor"
#define VkglTestCase_020672_2 "m.matrix_row_major.named_block_row_major.row_major.var"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020672, VkglTestCase_020672_1, VkglTestCase_020672_2);

#define VkglTestCase_020673_1 "dEQP-GLES31.functional.program_interface_query.uniform.ma"
#define VkglTestCase_020673_2 "trix_row_major.named_block_row_major.row_major.var_struct"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020673, VkglTestCase_020673_1, VkglTestCase_020673_2);

#define VkglTestCase_020674_1 "dEQP-GLES31.functional.program_interface_query.uniform.m"
#define VkglTestCase_020674_2 "atrix_row_major.named_block_row_major.row_major.var_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020674, VkglTestCase_020674_1, VkglTestCase_020674_2);

#define VkglTestCase_020778_1 "dEQP-GLES31.functional.program_interface_query.unifo"
#define VkglTestCase_020778_2 "rm.matrix_stride.named_block_row_major.row_major.var"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020778, VkglTestCase_020778_1, VkglTestCase_020778_2);

#define VkglTestCase_020779_1 "dEQP-GLES31.functional.program_interface_query.uniform."
#define VkglTestCase_020779_2 "matrix_stride.named_block_row_major.row_major.var_struct"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020779, VkglTestCase_020779_1, VkglTestCase_020779_2);

#define VkglTestCase_020780_1 "dEQP-GLES31.functional.program_interface_query.uniform."
#define VkglTestCase_020780_2 "matrix_stride.named_block_row_major.row_major.var_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020780, VkglTestCase_020780_1, VkglTestCase_020780_2);

#define VkglTestCase_023765_1 "dEQP-GLES31.functional.program_interface_query.buffer_v"
#define VkglTestCase_023765_2 "ariable.is_row_major.named_block_row_major.row_major.var"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023765, VkglTestCase_023765_1, VkglTestCase_023765_2);

#define VkglTestCase_023766_1 "dEQP-GLES31.functional.program_interface_query.buffer_varia"
#define VkglTestCase_023766_2 "ble.is_row_major.named_block_row_major.row_major.var_struct"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023766, VkglTestCase_023766_1, VkglTestCase_023766_2);

#define VkglTestCase_023767_1 "dEQP-GLES31.functional.program_interface_query.buffer_variable"
#define VkglTestCase_023767_2 ".is_row_major.named_block_row_major.row_major.var_struct_struct"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023767, VkglTestCase_023767_1, VkglTestCase_023767_2);

#define VkglTestCase_023768_1 "dEQP-GLES31.functional.program_interface_query.buffer_variable"
#define VkglTestCase_023768_2 ".is_row_major.named_block_row_major.row_major.var_array_struct"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023768, VkglTestCase_023768_1, VkglTestCase_023768_2);

#define VkglTestCase_023769_1 "dEQP-GLES31.functional.program_interface_query.buffer_vari"
#define VkglTestCase_023769_2 "able.is_row_major.named_block_row_major.row_major.var_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023769, VkglTestCase_023769_1, VkglTestCase_023769_2);

#define VkglTestCase_023770_1 "dEQP-GLES31.functional.program_interface_query.buffer_variable"
#define VkglTestCase_023770_2 ".is_row_major.named_block_row_major.row_major.var_struct_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023770, VkglTestCase_023770_1, VkglTestCase_023770_2);

#define VkglTestCase_023771_1 "dEQP-GLES31.functional.program_interface_query.buffer_variabl"
#define VkglTestCase_023771_2 "e.is_row_major.named_block_row_major.row_major.var_array_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023771, VkglTestCase_023771_1, VkglTestCase_023771_2);

#define VkglTestCase_023772_1 "dEQP-GLES31.functional.program_interface_query.buffer_variable"
#define VkglTestCase_023772_2 ".is_row_major.named_block_row_major.row_major.var_unsized_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023772, VkglTestCase_023772_1, VkglTestCase_023772_2);

#define VkglTestCase_023920_1 "dEQP-GLES31.functional.program_interface_query.buffer_va"
#define VkglTestCase_023920_2 "riable.matrix_stride.named_block_row_major.row_major.var"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023920, VkglTestCase_023920_1, VkglTestCase_023920_2);

#define VkglTestCase_023921_1 "dEQP-GLES31.functional.program_interface_query.buffer_varia"
#define VkglTestCase_023921_2 "ble.matrix_stride.named_block_row_major.row_major.var_struct"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023921, VkglTestCase_023921_1, VkglTestCase_023921_2);

#define VkglTestCase_023922_1 "dEQP-GLES31.functional.program_interface_query.buffer_variable."
#define VkglTestCase_023922_2 "matrix_stride.named_block_row_major.row_major.var_struct_struct"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023922, VkglTestCase_023922_1, VkglTestCase_023922_2);

#define VkglTestCase_023923_1 "dEQP-GLES31.functional.program_interface_query.buffer_variable"
#define VkglTestCase_023923_2 ".matrix_stride.named_block_row_major.row_major.var_array_struct"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023923, VkglTestCase_023923_1, VkglTestCase_023923_2);

#define VkglTestCase_023924_1 "dEQP-GLES31.functional.program_interface_query.buffer_varia"
#define VkglTestCase_023924_2 "ble.matrix_stride.named_block_row_major.row_major.var_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023924, VkglTestCase_023924_1, VkglTestCase_023924_2);

#define VkglTestCase_023925_1 "dEQP-GLES31.functional.program_interface_query.buffer_variable"
#define VkglTestCase_023925_2 ".matrix_stride.named_block_row_major.row_major.var_struct_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023925, VkglTestCase_023925_1, VkglTestCase_023925_2);

#define VkglTestCase_023926_1 "dEQP-GLES31.functional.program_interface_query.buffer_variable"
#define VkglTestCase_023926_2 ".matrix_stride.named_block_row_major.row_major.var_array_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023926, VkglTestCase_023926_1, VkglTestCase_023926_2);

#define VkglTestCase_023927_1 "dEQP-GLES31.functional.program_interface_query.buffer_variable."
#define VkglTestCase_023927_2 "matrix_stride.named_block_row_major.row_major.var_unsized_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023927, VkglTestCase_023927_1, VkglTestCase_023927_2);
