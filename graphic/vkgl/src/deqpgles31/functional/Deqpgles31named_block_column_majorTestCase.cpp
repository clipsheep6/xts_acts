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

#define VkglTestCase_020666_1 "dEQP-GLES31.functional.program_interface_query.uni"
#define VkglTestCase_020666_2 "form.matrix_row_major.named_block.column_major.var"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020666, VkglTestCase_020666_1, VkglTestCase_020666_2);

#define VkglTestCase_020667_1 "dEQP-GLES31.functional.program_interface_query.unifor"
#define VkglTestCase_020667_2 "m.matrix_row_major.named_block.column_major.var_struct"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020667, VkglTestCase_020667_1, VkglTestCase_020667_2);

#define VkglTestCase_020668_1 "dEQP-GLES31.functional.program_interface_query.unifor"
#define VkglTestCase_020668_2 "m.matrix_row_major.named_block.column_major.var_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020668, VkglTestCase_020668_1, VkglTestCase_020668_2);

#define VkglTestCase_023733_1 "dEQP-GLES31.functional.program_interface_query.buffe"
#define VkglTestCase_023733_2 "r_variable.is_row_major.named_block.column_major.var"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023733, VkglTestCase_023733_1, VkglTestCase_023733_2);

#define VkglTestCase_023734_1 "dEQP-GLES31.functional.program_interface_query.buffer_v"
#define VkglTestCase_023734_2 "ariable.is_row_major.named_block.column_major.var_struct"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023734, VkglTestCase_023734_1, VkglTestCase_023734_2);

#define VkglTestCase_023735_1 "dEQP-GLES31.functional.program_interface_query.buffer_varia"
#define VkglTestCase_023735_2 "ble.is_row_major.named_block.column_major.var_struct_struct"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023735, VkglTestCase_023735_1, VkglTestCase_023735_2);

#define VkglTestCase_023736_1 "dEQP-GLES31.functional.program_interface_query.buffer_vari"
#define VkglTestCase_023736_2 "able.is_row_major.named_block.column_major.var_array_struct"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023736, VkglTestCase_023736_1, VkglTestCase_023736_2);

#define VkglTestCase_023737_1 "dEQP-GLES31.functional.program_interface_query.buffer_v"
#define VkglTestCase_023737_2 "ariable.is_row_major.named_block.column_major.var_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023737, VkglTestCase_023737_1, VkglTestCase_023737_2);

#define VkglTestCase_023738_1 "dEQP-GLES31.functional.program_interface_query.buffer_vari"
#define VkglTestCase_023738_2 "able.is_row_major.named_block.column_major.var_struct_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023738, VkglTestCase_023738_1, VkglTestCase_023738_2);

#define VkglTestCase_023739_1 "dEQP-GLES31.functional.program_interface_query.buffer_vari"
#define VkglTestCase_023739_2 "able.is_row_major.named_block.column_major.var_array_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023739, VkglTestCase_023739_1, VkglTestCase_023739_2);

#define VkglTestCase_023740_1 "dEQP-GLES31.functional.program_interface_query.buffer_varia"
#define VkglTestCase_023740_2 "ble.is_row_major.named_block.column_major.var_unsized_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023740, VkglTestCase_023740_1, VkglTestCase_023740_2);

#define VkglTestCase_023888_1 "dEQP-GLES31.functional.program_interface_query.buffe"
#define VkglTestCase_023888_2 "r_variable.matrix_stride.named_block.column_major.var"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023888, VkglTestCase_023888_1, VkglTestCase_023888_2);

#define VkglTestCase_023889_1 "dEQP-GLES31.functional.program_interface_query.buffer_va"
#define VkglTestCase_023889_2 "riable.matrix_stride.named_block.column_major.var_struct"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023889, VkglTestCase_023889_1, VkglTestCase_023889_2);

#define VkglTestCase_023890_1 "dEQP-GLES31.functional.program_interface_query.buffer_varia"
#define VkglTestCase_023890_2 "ble.matrix_stride.named_block.column_major.var_struct_struct"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023890, VkglTestCase_023890_1, VkglTestCase_023890_2);

#define VkglTestCase_023891_1 "dEQP-GLES31.functional.program_interface_query.buffer_varia"
#define VkglTestCase_023891_2 "ble.matrix_stride.named_block.column_major.var_array_struct"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023891, VkglTestCase_023891_1, VkglTestCase_023891_2);

#define VkglTestCase_023892_1 "dEQP-GLES31.functional.program_interface_query.buffer_v"
#define VkglTestCase_023892_2 "ariable.matrix_stride.named_block.column_major.var_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023892, VkglTestCase_023892_1, VkglTestCase_023892_2);

#define VkglTestCase_023893_1 "dEQP-GLES31.functional.program_interface_query.buffer_varia"
#define VkglTestCase_023893_2 "ble.matrix_stride.named_block.column_major.var_struct_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023893, VkglTestCase_023893_1, VkglTestCase_023893_2);

#define VkglTestCase_023894_1 "dEQP-GLES31.functional.program_interface_query.buffer_vari"
#define VkglTestCase_023894_2 "able.matrix_stride.named_block.column_major.var_array_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023894, VkglTestCase_023894_1, VkglTestCase_023894_2);

#define VkglTestCase_023895_1 "dEQP-GLES31.functional.program_interface_query.buffer_varia"
#define VkglTestCase_023895_2 "ble.matrix_stride.named_block.column_major.var_unsized_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023895, VkglTestCase_023895_1, VkglTestCase_023895_2);
