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

#define VkglTestCase_020693_1 "dEQP-GLES31.functional.program_interface_query.unif"
#define VkglTestCase_020693_2 "orm.matrix_row_major.unnamed_block.column_major.var"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020693, VkglTestCase_020693_1, VkglTestCase_020693_2);

#define VkglTestCase_020694_1 "dEQP-GLES31.functional.program_interface_query.uniform"
#define VkglTestCase_020694_2 ".matrix_row_major.unnamed_block.column_major.var_struct"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020694, VkglTestCase_020694_1, VkglTestCase_020694_2);

#define VkglTestCase_020695_1 "dEQP-GLES31.functional.program_interface_query.uniform"
#define VkglTestCase_020695_2 ".matrix_row_major.unnamed_block.column_major.var_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020695, VkglTestCase_020695_1, VkglTestCase_020695_2);

#define VkglTestCase_020799_1 "dEQP-GLES31.functional.program_interface_query.un"
#define VkglTestCase_020799_2 "iform.matrix_stride.unnamed_block.column_major.var"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020799, VkglTestCase_020799_1, VkglTestCase_020799_2);

#define VkglTestCase_020800_1 "dEQP-GLES31.functional.program_interface_query.unifor"
#define VkglTestCase_020800_2 "m.matrix_stride.unnamed_block.column_major.var_struct"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020800, VkglTestCase_020800_1, VkglTestCase_020800_2);

#define VkglTestCase_020801_1 "dEQP-GLES31.functional.program_interface_query.unifo"
#define VkglTestCase_020801_2 "rm.matrix_stride.unnamed_block.column_major.var_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020801, VkglTestCase_020801_1, VkglTestCase_020801_2);

#define VkglTestCase_023805_1 "dEQP-GLES31.functional.program_interface_query.buffer"
#define VkglTestCase_023805_2 "_variable.is_row_major.unnamed_block.column_major.var"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023805, VkglTestCase_023805_1, VkglTestCase_023805_2);

#define VkglTestCase_023806_1 "dEQP-GLES31.functional.program_interface_query.buffer_va"
#define VkglTestCase_023806_2 "riable.is_row_major.unnamed_block.column_major.var_struct"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023806, VkglTestCase_023806_1, VkglTestCase_023806_2);

#define VkglTestCase_023807_1 "dEQP-GLES31.functional.program_interface_query.buffer_variab"
#define VkglTestCase_023807_2 "le.is_row_major.unnamed_block.column_major.var_struct_struct"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023807, VkglTestCase_023807_1, VkglTestCase_023807_2);

#define VkglTestCase_023808_1 "dEQP-GLES31.functional.program_interface_query.buffer_varia"
#define VkglTestCase_023808_2 "ble.is_row_major.unnamed_block.column_major.var_array_struct"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023808, VkglTestCase_023808_1, VkglTestCase_023808_2);

#define VkglTestCase_023809_1 "dEQP-GLES31.functional.program_interface_query.buffer_va"
#define VkglTestCase_023809_2 "riable.is_row_major.unnamed_block.column_major.var_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023809, VkglTestCase_023809_1, VkglTestCase_023809_2);

#define VkglTestCase_023810_1 "dEQP-GLES31.functional.program_interface_query.buffer_varia"
#define VkglTestCase_023810_2 "ble.is_row_major.unnamed_block.column_major.var_struct_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023810, VkglTestCase_023810_1, VkglTestCase_023810_2);

#define VkglTestCase_023811_1 "dEQP-GLES31.functional.program_interface_query.buffer_varia"
#define VkglTestCase_023811_2 "ble.is_row_major.unnamed_block.column_major.var_array_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023811, VkglTestCase_023811_1, VkglTestCase_023811_2);

#define VkglTestCase_023812_1 "dEQP-GLES31.functional.program_interface_query.buffer_variab"
#define VkglTestCase_023812_2 "le.is_row_major.unnamed_block.column_major.var_unsized_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023812, VkglTestCase_023812_1, VkglTestCase_023812_2);

#define VkglTestCase_023960_1 "dEQP-GLES31.functional.program_interface_query.buffer"
#define VkglTestCase_023960_2 "_variable.matrix_stride.unnamed_block.column_major.var"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023960, VkglTestCase_023960_1, VkglTestCase_023960_2);

#define VkglTestCase_023961_1 "dEQP-GLES31.functional.program_interface_query.buffer_var"
#define VkglTestCase_023961_2 "iable.matrix_stride.unnamed_block.column_major.var_struct"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023961, VkglTestCase_023961_1, VkglTestCase_023961_2);

#define VkglTestCase_023962_1 "dEQP-GLES31.functional.program_interface_query.buffer_variab"
#define VkglTestCase_023962_2 "le.matrix_stride.unnamed_block.column_major.var_struct_struct"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023962, VkglTestCase_023962_1, VkglTestCase_023962_2);

#define VkglTestCase_023963_1 "dEQP-GLES31.functional.program_interface_query.buffer_variab"
#define VkglTestCase_023963_2 "le.matrix_stride.unnamed_block.column_major.var_array_struct"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023963, VkglTestCase_023963_1, VkglTestCase_023963_2);

#define VkglTestCase_023964_1 "dEQP-GLES31.functional.program_interface_query.buffer_va"
#define VkglTestCase_023964_2 "riable.matrix_stride.unnamed_block.column_major.var_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023964, VkglTestCase_023964_1, VkglTestCase_023964_2);

#define VkglTestCase_023965_1 "dEQP-GLES31.functional.program_interface_query.buffer_variab"
#define VkglTestCase_023965_2 "le.matrix_stride.unnamed_block.column_major.var_struct_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023965, VkglTestCase_023965_1, VkglTestCase_023965_2);

#define VkglTestCase_023966_1 "dEQP-GLES31.functional.program_interface_query.buffer_varia"
#define VkglTestCase_023966_2 "ble.matrix_stride.unnamed_block.column_major.var_array_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023966, VkglTestCase_023966_1, VkglTestCase_023966_2);

#define VkglTestCase_023967_1 "dEQP-GLES31.functional.program_interface_query.buffer_variab"
#define VkglTestCase_023967_2 "le.matrix_stride.unnamed_block.column_major.var_unsized_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023967, VkglTestCase_023967_1, VkglTestCase_023967_2);
