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

#define VkglTestCase_020675_1 "dEQP-GLES31.functional.program_interface_query.uniform."
#define VkglTestCase_020675_2 "matrix_row_major.named_block_row_major.column_major.var"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020675, VkglTestCase_020675_1, VkglTestCase_020675_2);

#define VkglTestCase_020676_1 "dEQP-GLES31.functional.program_interface_query.uniform.mat"
#define VkglTestCase_020676_2 "rix_row_major.named_block_row_major.column_major.var_struct"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020676, VkglTestCase_020676_1, VkglTestCase_020676_2);

#define VkglTestCase_020677_1 "dEQP-GLES31.functional.program_interface_query.uniform.mat"
#define VkglTestCase_020677_2 "rix_row_major.named_block_row_major.column_major.var_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020677, VkglTestCase_020677_1, VkglTestCase_020677_2);

#define VkglTestCase_020781_1 "dEQP-GLES31.functional.program_interface_query.unifor"
#define VkglTestCase_020781_2 "m.matrix_stride.named_block_row_major.column_major.var"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020781, VkglTestCase_020781_1, VkglTestCase_020781_2);

#define VkglTestCase_020782_1 "dEQP-GLES31.functional.program_interface_query.uniform.ma"
#define VkglTestCase_020782_2 "trix_stride.named_block_row_major.column_major.var_struct"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020782, VkglTestCase_020782_1, VkglTestCase_020782_2);

#define VkglTestCase_020783_1 "dEQP-GLES31.functional.program_interface_query.uniform.m"
#define VkglTestCase_020783_2 "atrix_stride.named_block_row_major.column_major.var_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020783, VkglTestCase_020783_1, VkglTestCase_020783_2);

#define VkglTestCase_023757_1 "dEQP-GLES31.functional.program_interface_query.buffer_var"
#define VkglTestCase_023757_2 "iable.is_row_major.named_block_row_major.column_major.var"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023757, VkglTestCase_023757_1, VkglTestCase_023757_2);

#define VkglTestCase_023758_1 "dEQP-GLES31.functional.program_interface_query.buffer_variab"
#define VkglTestCase_023758_2 "le.is_row_major.named_block_row_major.column_major.var_struct"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023758, VkglTestCase_023758_1, VkglTestCase_023758_2);

#define VkglTestCase_023759_1 "dEQP-GLES31.functional.program_interface_query.buffer_variable.i"
#define VkglTestCase_023759_2 "s_row_major.named_block_row_major.column_major.var_struct_struct"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023759, VkglTestCase_023759_1, VkglTestCase_023759_2);

#define VkglTestCase_023760_1 "dEQP-GLES31.functional.program_interface_query.buffer_variable."
#define VkglTestCase_023760_2 "is_row_major.named_block_row_major.column_major.var_array_struct"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023760, VkglTestCase_023760_1, VkglTestCase_023760_2);

#define VkglTestCase_023761_1 "dEQP-GLES31.functional.program_interface_query.buffer_variab"
#define VkglTestCase_023761_2 "le.is_row_major.named_block_row_major.column_major.var_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023761, VkglTestCase_023761_1, VkglTestCase_023761_2);

#define VkglTestCase_023762_1 "dEQP-GLES31.functional.program_interface_query.buffer_variable."
#define VkglTestCase_023762_2 "is_row_major.named_block_row_major.column_major.var_struct_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023762, VkglTestCase_023762_1, VkglTestCase_023762_2);

#define VkglTestCase_023763_1 "dEQP-GLES31.functional.program_interface_query.buffer_variable."
#define VkglTestCase_023763_2 "is_row_major.named_block_row_major.column_major.var_array_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023763, VkglTestCase_023763_1, VkglTestCase_023763_2);

#define VkglTestCase_023764_1 "dEQP-GLES31.functional.program_interface_query.buffer_variable.i"
#define VkglTestCase_023764_2 "s_row_major.named_block_row_major.column_major.var_unsized_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023764, VkglTestCase_023764_1, VkglTestCase_023764_2);

#define VkglTestCase_023912_1 "dEQP-GLES31.functional.program_interface_query.buffer_var"
#define VkglTestCase_023912_2 "iable.matrix_stride.named_block_row_major.column_major.var"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023912, VkglTestCase_023912_1, VkglTestCase_023912_2);

#define VkglTestCase_023913_1 "dEQP-GLES31.functional.program_interface_query.buffer_variabl"
#define VkglTestCase_023913_2 "e.matrix_stride.named_block_row_major.column_major.var_struct"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023913, VkglTestCase_023913_1, VkglTestCase_023913_2);

#define VkglTestCase_023914_1 "dEQP-GLES31.functional.program_interface_query.buffer_variable.m"
#define VkglTestCase_023914_2 "atrix_stride.named_block_row_major.column_major.var_struct_struct"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023914, VkglTestCase_023914_1, VkglTestCase_023914_2);

#define VkglTestCase_023915_1 "dEQP-GLES31.functional.program_interface_query.buffer_variable.m"
#define VkglTestCase_023915_2 "atrix_stride.named_block_row_major.column_major.var_array_struct"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023915, VkglTestCase_023915_1, VkglTestCase_023915_2);

#define VkglTestCase_023916_1 "dEQP-GLES31.functional.program_interface_query.buffer_variab"
#define VkglTestCase_023916_2 "le.matrix_stride.named_block_row_major.column_major.var_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023916, VkglTestCase_023916_1, VkglTestCase_023916_2);

#define VkglTestCase_023917_1 "dEQP-GLES31.functional.program_interface_query.buffer_variable.m"
#define VkglTestCase_023917_2 "atrix_stride.named_block_row_major.column_major.var_struct_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023917, VkglTestCase_023917_1, VkglTestCase_023917_2);

#define VkglTestCase_023918_1 "dEQP-GLES31.functional.program_interface_query.buffer_variable."
#define VkglTestCase_023918_2 "matrix_stride.named_block_row_major.column_major.var_array_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023918, VkglTestCase_023918_1, VkglTestCase_023918_2);

#define VkglTestCase_023919_1 "dEQP-GLES31.functional.program_interface_query.buffer_variable.m"
#define VkglTestCase_023919_2 "atrix_stride.named_block_row_major.column_major.var_unsized_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_023919, VkglTestCase_023919_1, VkglTestCase_023919_2);
