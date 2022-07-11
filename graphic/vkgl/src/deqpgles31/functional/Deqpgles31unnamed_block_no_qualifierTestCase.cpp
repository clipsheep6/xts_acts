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

#define VkglTestCase_020687_1 "dEQP-GLES31.functional.program_interface_query.unif"
#define VkglTestCase_020687_2 "orm.matrix_row_major.unnamed_block.no_qualifier.var"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020687, VkglTestCase_020687_1, VkglTestCase_020687_2);

#define VkglTestCase_020688_1 "dEQP-GLES31.functional.program_interface_query.uniform"
#define VkglTestCase_020688_2 ".matrix_row_major.unnamed_block.no_qualifier.var_struct"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020688, VkglTestCase_020688_1, VkglTestCase_020688_2);

#define VkglTestCase_020689_1 "dEQP-GLES31.functional.program_interface_query.uniform"
#define VkglTestCase_020689_2 ".matrix_row_major.unnamed_block.no_qualifier.var_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020689, VkglTestCase_020689_1, VkglTestCase_020689_2);

#define VkglTestCase_020793_1 "dEQP-GLES31.functional.program_interface_query.un"
#define VkglTestCase_020793_2 "iform.matrix_stride.unnamed_block.no_qualifier.var"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020793, VkglTestCase_020793_1, VkglTestCase_020793_2);

#define VkglTestCase_020794_1 "dEQP-GLES31.functional.program_interface_query.unifor"
#define VkglTestCase_020794_2 "m.matrix_stride.unnamed_block.no_qualifier.var_struct"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020794, VkglTestCase_020794_1, VkglTestCase_020794_2);

#define VkglTestCase_020795_1 "dEQP-GLES31.functional.program_interface_query.unifo"
#define VkglTestCase_020795_2 "rm.matrix_stride.unnamed_block.no_qualifier.var_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020795, VkglTestCase_020795_1, VkglTestCase_020795_2);

#define VkglTestCase_023797_1 "dEQP-GLES31.functional.program_interface_query.buffer"
#define VkglTestCase_023797_2 "_variable.is_row_major.unnamed_block.no_qualifier.var"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023797, VkglTestCase_023797_1, VkglTestCase_023797_2);

#define VkglTestCase_023798_1 "dEQP-GLES31.functional.program_interface_query.buffer_va"
#define VkglTestCase_023798_2 "riable.is_row_major.unnamed_block.no_qualifier.var_struct"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023798, VkglTestCase_023798_1, VkglTestCase_023798_2);

#define VkglTestCase_023799_1 "dEQP-GLES31.functional.program_interface_query.buffer_variab"
#define VkglTestCase_023799_2 "le.is_row_major.unnamed_block.no_qualifier.var_struct_struct"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023799, VkglTestCase_023799_1, VkglTestCase_023799_2);

#define VkglTestCase_023800_1 "dEQP-GLES31.functional.program_interface_query.buffer_varia"
#define VkglTestCase_023800_2 "ble.is_row_major.unnamed_block.no_qualifier.var_array_struct"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023800, VkglTestCase_023800_1, VkglTestCase_023800_2);

#define VkglTestCase_023801_1 "dEQP-GLES31.functional.program_interface_query.buffer_va"
#define VkglTestCase_023801_2 "riable.is_row_major.unnamed_block.no_qualifier.var_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023801, VkglTestCase_023801_1, VkglTestCase_023801_2);

#define VkglTestCase_023802_1 "dEQP-GLES31.functional.program_interface_query.buffer_varia"
#define VkglTestCase_023802_2 "ble.is_row_major.unnamed_block.no_qualifier.var_struct_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023802, VkglTestCase_023802_1, VkglTestCase_023802_2);

#define VkglTestCase_023803_1 "dEQP-GLES31.functional.program_interface_query.buffer_varia"
#define VkglTestCase_023803_2 "ble.is_row_major.unnamed_block.no_qualifier.var_array_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023803, VkglTestCase_023803_1, VkglTestCase_023803_2);

#define VkglTestCase_023804_1 "dEQP-GLES31.functional.program_interface_query.buffer_variab"
#define VkglTestCase_023804_2 "le.is_row_major.unnamed_block.no_qualifier.var_unsized_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023804, VkglTestCase_023804_1, VkglTestCase_023804_2);

#define VkglTestCase_023952_1 "dEQP-GLES31.functional.program_interface_query.buffer"
#define VkglTestCase_023952_2 "_variable.matrix_stride.unnamed_block.no_qualifier.var"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023952, VkglTestCase_023952_1, VkglTestCase_023952_2);

#define VkglTestCase_023953_1 "dEQP-GLES31.functional.program_interface_query.buffer_var"
#define VkglTestCase_023953_2 "iable.matrix_stride.unnamed_block.no_qualifier.var_struct"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023953, VkglTestCase_023953_1, VkglTestCase_023953_2);

#define VkglTestCase_023954_1 "dEQP-GLES31.functional.program_interface_query.buffer_variab"
#define VkglTestCase_023954_2 "le.matrix_stride.unnamed_block.no_qualifier.var_struct_struct"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023954, VkglTestCase_023954_1, VkglTestCase_023954_2);

#define VkglTestCase_023955_1 "dEQP-GLES31.functional.program_interface_query.buffer_variab"
#define VkglTestCase_023955_2 "le.matrix_stride.unnamed_block.no_qualifier.var_array_struct"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023955, VkglTestCase_023955_1, VkglTestCase_023955_2);

#define VkglTestCase_023956_1 "dEQP-GLES31.functional.program_interface_query.buffer_va"
#define VkglTestCase_023956_2 "riable.matrix_stride.unnamed_block.no_qualifier.var_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023956, VkglTestCase_023956_1, VkglTestCase_023956_2);

#define VkglTestCase_023957_1 "dEQP-GLES31.functional.program_interface_query.buffer_variab"
#define VkglTestCase_023957_2 "le.matrix_stride.unnamed_block.no_qualifier.var_struct_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023957, VkglTestCase_023957_1, VkglTestCase_023957_2);

#define VkglTestCase_023958_1 "dEQP-GLES31.functional.program_interface_query.buffer_varia"
#define VkglTestCase_023958_2 "ble.matrix_stride.unnamed_block.no_qualifier.var_array_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023958, VkglTestCase_023958_1, VkglTestCase_023958_2);

#define VkglTestCase_023959_1 "dEQP-GLES31.functional.program_interface_query.buffer_variab"
#define VkglTestCase_023959_2 "le.matrix_stride.unnamed_block.no_qualifier.var_unsized_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023959, VkglTestCase_023959_1, VkglTestCase_023959_2);
