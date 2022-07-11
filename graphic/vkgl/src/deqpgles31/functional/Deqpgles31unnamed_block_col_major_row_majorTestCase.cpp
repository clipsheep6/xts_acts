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

#define VkglTestCase_020708_1 "dEQP-GLES31.functional.program_interface_query.uniform"
#define VkglTestCase_020708_2 ".matrix_row_major.unnamed_block_col_major.row_major.var"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020708, VkglTestCase_020708_1, VkglTestCase_020708_2);

#define VkglTestCase_020709_1 "dEQP-GLES31.functional.program_interface_query.uniform.mat"
#define VkglTestCase_020709_2 "rix_row_major.unnamed_block_col_major.row_major.var_struct"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020709, VkglTestCase_020709_1, VkglTestCase_020709_2);

#define VkglTestCase_020710_1 "dEQP-GLES31.functional.program_interface_query.uniform.ma"
#define VkglTestCase_020710_2 "trix_row_major.unnamed_block_col_major.row_major.var_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020710, VkglTestCase_020710_1, VkglTestCase_020710_2);

#define VkglTestCase_020814_1 "dEQP-GLES31.functional.program_interface_query.unifor"
#define VkglTestCase_020814_2 "m.matrix_stride.unnamed_block_col_major.row_major.var"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020814, VkglTestCase_020814_1, VkglTestCase_020814_2);

#define VkglTestCase_020815_1 "dEQP-GLES31.functional.program_interface_query.uniform.m"
#define VkglTestCase_020815_2 "atrix_stride.unnamed_block_col_major.row_major.var_struct"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020815, VkglTestCase_020815_1, VkglTestCase_020815_2);

#define VkglTestCase_020816_1 "dEQP-GLES31.functional.program_interface_query.uniform.m"
#define VkglTestCase_020816_2 "atrix_stride.unnamed_block_col_major.row_major.var_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020816, VkglTestCase_020816_1, VkglTestCase_020816_2);

#define VkglTestCase_023861_1 "dEQP-GLES31.functional.program_interface_query.buffer_va"
#define VkglTestCase_023861_2 "riable.is_row_major.unnamed_block_col_major.row_major.var"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023861, VkglTestCase_023861_1, VkglTestCase_023861_2);

#define VkglTestCase_023862_1 "dEQP-GLES31.functional.program_interface_query.buffer_variab"
#define VkglTestCase_023862_2 "le.is_row_major.unnamed_block_col_major.row_major.var_struct"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023862, VkglTestCase_023862_1, VkglTestCase_023862_2);

#define VkglTestCase_023863_1 "dEQP-GLES31.functional.program_interface_query.buffer_variable."
#define VkglTestCase_023863_2 "is_row_major.unnamed_block_col_major.row_major.var_struct_struct"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023863, VkglTestCase_023863_1, VkglTestCase_023863_2);

#define VkglTestCase_023864_1 "dEQP-GLES31.functional.program_interface_query.buffer_variable."
#define VkglTestCase_023864_2 "is_row_major.unnamed_block_col_major.row_major.var_array_struct"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023864, VkglTestCase_023864_1, VkglTestCase_023864_2);

#define VkglTestCase_023865_1 "dEQP-GLES31.functional.program_interface_query.buffer_varia"
#define VkglTestCase_023865_2 "ble.is_row_major.unnamed_block_col_major.row_major.var_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023865, VkglTestCase_023865_1, VkglTestCase_023865_2);

#define VkglTestCase_023866_1 "dEQP-GLES31.functional.program_interface_query.buffer_variable."
#define VkglTestCase_023866_2 "is_row_major.unnamed_block_col_major.row_major.var_struct_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023866, VkglTestCase_023866_1, VkglTestCase_023866_2);

#define VkglTestCase_023867_1 "dEQP-GLES31.functional.program_interface_query.buffer_variable"
#define VkglTestCase_023867_2 ".is_row_major.unnamed_block_col_major.row_major.var_array_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023867, VkglTestCase_023867_1, VkglTestCase_023867_2);

#define VkglTestCase_023868_1 "dEQP-GLES31.functional.program_interface_query.buffer_variable."
#define VkglTestCase_023868_2 "is_row_major.unnamed_block_col_major.row_major.var_unsized_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023868, VkglTestCase_023868_1, VkglTestCase_023868_2);

#define VkglTestCase_024016_1 "dEQP-GLES31.functional.program_interface_query.buffer_var"
#define VkglTestCase_024016_2 "iable.matrix_stride.unnamed_block_col_major.row_major.var"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_024016, VkglTestCase_024016_1, VkglTestCase_024016_2);

#define VkglTestCase_024017_1 "dEQP-GLES31.functional.program_interface_query.buffer_variab"
#define VkglTestCase_024017_2 "le.matrix_stride.unnamed_block_col_major.row_major.var_struct"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_024017, VkglTestCase_024017_1, VkglTestCase_024017_2);

#define VkglTestCase_024018_1 "dEQP-GLES31.functional.program_interface_query.buffer_variable.m"
#define VkglTestCase_024018_2 "atrix_stride.unnamed_block_col_major.row_major.var_struct_struct"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_024018, VkglTestCase_024018_1, VkglTestCase_024018_2);

#define VkglTestCase_024019_1 "dEQP-GLES31.functional.program_interface_query.buffer_variable."
#define VkglTestCase_024019_2 "matrix_stride.unnamed_block_col_major.row_major.var_array_struct"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_024019, VkglTestCase_024019_1, VkglTestCase_024019_2);

#define VkglTestCase_024020_1 "dEQP-GLES31.functional.program_interface_query.buffer_variab"
#define VkglTestCase_024020_2 "le.matrix_stride.unnamed_block_col_major.row_major.var_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_024020, VkglTestCase_024020_1, VkglTestCase_024020_2);

#define VkglTestCase_024021_1 "dEQP-GLES31.functional.program_interface_query.buffer_variable."
#define VkglTestCase_024021_2 "matrix_stride.unnamed_block_col_major.row_major.var_struct_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_024021, VkglTestCase_024021_1, VkglTestCase_024021_2);

#define VkglTestCase_024022_1 "dEQP-GLES31.functional.program_interface_query.buffer_variable."
#define VkglTestCase_024022_2 "matrix_stride.unnamed_block_col_major.row_major.var_array_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_024022, VkglTestCase_024022_1, VkglTestCase_024022_2);

#define VkglTestCase_024023_1 "dEQP-GLES31.functional.program_interface_query.buffer_variable.m"
#define VkglTestCase_024023_2 "atrix_stride.unnamed_block_col_major.row_major.var_unsized_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_024023, VkglTestCase_024023_1, VkglTestCase_024023_2);
