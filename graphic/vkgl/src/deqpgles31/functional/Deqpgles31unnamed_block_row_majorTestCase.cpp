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

#define VkglTestCase_020690_1 "dEQP-GLES31.functional.program_interface_query.un"
#define VkglTestCase_020690_2 "iform.matrix_row_major.unnamed_block.row_major.var"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020690, VkglTestCase_020690_1, VkglTestCase_020690_2);

#define VkglTestCase_020691_1 "dEQP-GLES31.functional.program_interface_query.unifor"
#define VkglTestCase_020691_2 "m.matrix_row_major.unnamed_block.row_major.var_struct"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020691, VkglTestCase_020691_1, VkglTestCase_020691_2);

#define VkglTestCase_020692_1 "dEQP-GLES31.functional.program_interface_query.unifo"
#define VkglTestCase_020692_2 "rm.matrix_row_major.unnamed_block.row_major.var_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020692, VkglTestCase_020692_1, VkglTestCase_020692_2);

#define VkglTestCase_020796_1 "dEQP-GLES31.functional.program_interface_query.u"
#define VkglTestCase_020796_2 "niform.matrix_stride.unnamed_block.row_major.var"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020796, VkglTestCase_020796_1, VkglTestCase_020796_2);

#define VkglTestCase_020797_1 "dEQP-GLES31.functional.program_interface_query.unif"
#define VkglTestCase_020797_2 "orm.matrix_stride.unnamed_block.row_major.var_struct"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020797, VkglTestCase_020797_1, VkglTestCase_020797_2);

#define VkglTestCase_020798_1 "dEQP-GLES31.functional.program_interface_query.unif"
#define VkglTestCase_020798_2 "orm.matrix_stride.unnamed_block.row_major.var_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020798, VkglTestCase_020798_1, VkglTestCase_020798_2);

#define VkglTestCase_023813_1 "dEQP-GLES31.functional.program_interface_query.buff"
#define VkglTestCase_023813_2 "er_variable.is_row_major.unnamed_block.row_major.var"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023813, VkglTestCase_023813_1, VkglTestCase_023813_2);

#define VkglTestCase_023814_1 "dEQP-GLES31.functional.program_interface_query.buffer_v"
#define VkglTestCase_023814_2 "ariable.is_row_major.unnamed_block.row_major.var_struct"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023814, VkglTestCase_023814_1, VkglTestCase_023814_2);

#define VkglTestCase_023815_1 "dEQP-GLES31.functional.program_interface_query.buffer_vari"
#define VkglTestCase_023815_2 "able.is_row_major.unnamed_block.row_major.var_struct_struct"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023815, VkglTestCase_023815_1, VkglTestCase_023815_2);

#define VkglTestCase_023816_1 "dEQP-GLES31.functional.program_interface_query.buffer_vari"
#define VkglTestCase_023816_2 "able.is_row_major.unnamed_block.row_major.var_array_struct"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023816, VkglTestCase_023816_1, VkglTestCase_023816_2);

#define VkglTestCase_023817_1 "dEQP-GLES31.functional.program_interface_query.buffer_"
#define VkglTestCase_023817_2 "variable.is_row_major.unnamed_block.row_major.var_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023817, VkglTestCase_023817_1, VkglTestCase_023817_2);

#define VkglTestCase_023818_1 "dEQP-GLES31.functional.program_interface_query.buffer_vari"
#define VkglTestCase_023818_2 "able.is_row_major.unnamed_block.row_major.var_struct_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023818, VkglTestCase_023818_1, VkglTestCase_023818_2);

#define VkglTestCase_023819_1 "dEQP-GLES31.functional.program_interface_query.buffer_var"
#define VkglTestCase_023819_2 "iable.is_row_major.unnamed_block.row_major.var_array_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023819, VkglTestCase_023819_1, VkglTestCase_023819_2);

#define VkglTestCase_023820_1 "dEQP-GLES31.functional.program_interface_query.buffer_vari"
#define VkglTestCase_023820_2 "able.is_row_major.unnamed_block.row_major.var_unsized_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023820, VkglTestCase_023820_1, VkglTestCase_023820_2);

#define VkglTestCase_023968_1 "dEQP-GLES31.functional.program_interface_query.buffe"
#define VkglTestCase_023968_2 "r_variable.matrix_stride.unnamed_block.row_major.var"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023968, VkglTestCase_023968_1, VkglTestCase_023968_2);

#define VkglTestCase_023969_1 "dEQP-GLES31.functional.program_interface_query.buffer_v"
#define VkglTestCase_023969_2 "ariable.matrix_stride.unnamed_block.row_major.var_struct"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023969, VkglTestCase_023969_1, VkglTestCase_023969_2);

#define VkglTestCase_023970_1 "dEQP-GLES31.functional.program_interface_query.buffer_varia"
#define VkglTestCase_023970_2 "ble.matrix_stride.unnamed_block.row_major.var_struct_struct"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023970, VkglTestCase_023970_1, VkglTestCase_023970_2);

#define VkglTestCase_023971_1 "dEQP-GLES31.functional.program_interface_query.buffer_vari"
#define VkglTestCase_023971_2 "able.matrix_stride.unnamed_block.row_major.var_array_struct"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023971, VkglTestCase_023971_1, VkglTestCase_023971_2);

#define VkglTestCase_023972_1 "dEQP-GLES31.functional.program_interface_query.buffer_v"
#define VkglTestCase_023972_2 "ariable.matrix_stride.unnamed_block.row_major.var_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023972, VkglTestCase_023972_1, VkglTestCase_023972_2);

#define VkglTestCase_023973_1 "dEQP-GLES31.functional.program_interface_query.buffer_vari"
#define VkglTestCase_023973_2 "able.matrix_stride.unnamed_block.row_major.var_struct_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023973, VkglTestCase_023973_1, VkglTestCase_023973_2);

#define VkglTestCase_023974_1 "dEQP-GLES31.functional.program_interface_query.buffer_vari"
#define VkglTestCase_023974_2 "able.matrix_stride.unnamed_block.row_major.var_array_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023974, VkglTestCase_023974_1, VkglTestCase_023974_2);

#define VkglTestCase_023975_1 "dEQP-GLES31.functional.program_interface_query.buffer_varia"
#define VkglTestCase_023975_2 "ble.matrix_stride.unnamed_block.row_major.var_unsized_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023975, VkglTestCase_023975_1, VkglTestCase_023975_2);
