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

#define VkglTestCase_020663_1 "dEQP-GLES31.functional.program_interface_query.u"
#define VkglTestCase_020663_2 "niform.matrix_row_major.named_block.row_major.var"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020663, VkglTestCase_020663_1, VkglTestCase_020663_2);

#define VkglTestCase_020664_1 "dEQP-GLES31.functional.program_interface_query.unifo"
#define VkglTestCase_020664_2 "rm.matrix_row_major.named_block.row_major.var_struct"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020664, VkglTestCase_020664_1, VkglTestCase_020664_2);

#define VkglTestCase_020665_1 "dEQP-GLES31.functional.program_interface_query.unif"
#define VkglTestCase_020665_2 "orm.matrix_row_major.named_block.row_major.var_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020665, VkglTestCase_020665_1, VkglTestCase_020665_2);

#define VkglTestCase_023741_1 "dEQP-GLES31.functional.program_interface_query.buf"
#define VkglTestCase_023741_2 "fer_variable.is_row_major.named_block.row_major.var"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023741, VkglTestCase_023741_1, VkglTestCase_023741_2);

#define VkglTestCase_023742_1 "dEQP-GLES31.functional.program_interface_query.buffer_"
#define VkglTestCase_023742_2 "variable.is_row_major.named_block.row_major.var_struct"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023742, VkglTestCase_023742_1, VkglTestCase_023742_2);

#define VkglTestCase_023743_1 "dEQP-GLES31.functional.program_interface_query.buffer_var"
#define VkglTestCase_023743_2 "iable.is_row_major.named_block.row_major.var_struct_struct"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023743, VkglTestCase_023743_1, VkglTestCase_023743_2);

#define VkglTestCase_023744_1 "dEQP-GLES31.functional.program_interface_query.buffer_var"
#define VkglTestCase_023744_2 "iable.is_row_major.named_block.row_major.var_array_struct"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023744, VkglTestCase_023744_1, VkglTestCase_023744_2);

#define VkglTestCase_023745_1 "dEQP-GLES31.functional.program_interface_query.buffer"
#define VkglTestCase_023745_2 "_variable.is_row_major.named_block.row_major.var_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023745, VkglTestCase_023745_1, VkglTestCase_023745_2);

#define VkglTestCase_023746_1 "dEQP-GLES31.functional.program_interface_query.buffer_var"
#define VkglTestCase_023746_2 "iable.is_row_major.named_block.row_major.var_struct_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023746, VkglTestCase_023746_1, VkglTestCase_023746_2);

#define VkglTestCase_023747_1 "dEQP-GLES31.functional.program_interface_query.buffer_va"
#define VkglTestCase_023747_2 "riable.is_row_major.named_block.row_major.var_array_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023747, VkglTestCase_023747_1, VkglTestCase_023747_2);

#define VkglTestCase_023748_1 "dEQP-GLES31.functional.program_interface_query.buffer_var"
#define VkglTestCase_023748_2 "iable.is_row_major.named_block.row_major.var_unsized_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023748, VkglTestCase_023748_1, VkglTestCase_023748_2);

#define VkglTestCase_023896_1 "dEQP-GLES31.functional.program_interface_query.buff"
#define VkglTestCase_023896_2 "er_variable.matrix_stride.named_block.row_major.var"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023896, VkglTestCase_023896_1, VkglTestCase_023896_2);

#define VkglTestCase_023897_1 "dEQP-GLES31.functional.program_interface_query.buffer_"
#define VkglTestCase_023897_2 "variable.matrix_stride.named_block.row_major.var_struct"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023897, VkglTestCase_023897_1, VkglTestCase_023897_2);

#define VkglTestCase_023898_1 "dEQP-GLES31.functional.program_interface_query.buffer_vari"
#define VkglTestCase_023898_2 "able.matrix_stride.named_block.row_major.var_struct_struct"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023898, VkglTestCase_023898_1, VkglTestCase_023898_2);

#define VkglTestCase_023899_1 "dEQP-GLES31.functional.program_interface_query.buffer_var"
#define VkglTestCase_023899_2 "iable.matrix_stride.named_block.row_major.var_array_struct"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023899, VkglTestCase_023899_1, VkglTestCase_023899_2);

#define VkglTestCase_023900_1 "dEQP-GLES31.functional.program_interface_query.buffer_"
#define VkglTestCase_023900_2 "variable.matrix_stride.named_block.row_major.var_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023900, VkglTestCase_023900_1, VkglTestCase_023900_2);

#define VkglTestCase_023901_1 "dEQP-GLES31.functional.program_interface_query.buffer_var"
#define VkglTestCase_023901_2 "iable.matrix_stride.named_block.row_major.var_struct_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023901, VkglTestCase_023901_1, VkglTestCase_023901_2);

#define VkglTestCase_023902_1 "dEQP-GLES31.functional.program_interface_query.buffer_var"
#define VkglTestCase_023902_2 "iable.matrix_stride.named_block.row_major.var_array_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023902, VkglTestCase_023902_1, VkglTestCase_023902_2);

#define VkglTestCase_023903_1 "dEQP-GLES31.functional.program_interface_query.buffer_vari"
#define VkglTestCase_023903_2 "able.matrix_stride.named_block.row_major.var_unsized_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023903, VkglTestCase_023903_1, VkglTestCase_023903_2);
