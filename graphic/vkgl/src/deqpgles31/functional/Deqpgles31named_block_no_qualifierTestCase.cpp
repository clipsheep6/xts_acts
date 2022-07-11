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
#include "../ActsDeqpgles310024TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_023725_1 "dEQP-GLES31.functional.program_interface_query.buffe"
#define VkglTestCase_023725_2 "r_variable.is_row_major.named_block.no_qualifier.var"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023725, VkglTestCase_023725_1, VkglTestCase_023725_2);

#define VkglTestCase_023726_1 "dEQP-GLES31.functional.program_interface_query.buffer_v"
#define VkglTestCase_023726_2 "ariable.is_row_major.named_block.no_qualifier.var_struct"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023726, VkglTestCase_023726_1, VkglTestCase_023726_2);

#define VkglTestCase_023727_1 "dEQP-GLES31.functional.program_interface_query.buffer_varia"
#define VkglTestCase_023727_2 "ble.is_row_major.named_block.no_qualifier.var_struct_struct"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023727, VkglTestCase_023727_1, VkglTestCase_023727_2);

#define VkglTestCase_023728_1 "dEQP-GLES31.functional.program_interface_query.buffer_vari"
#define VkglTestCase_023728_2 "able.is_row_major.named_block.no_qualifier.var_array_struct"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023728, VkglTestCase_023728_1, VkglTestCase_023728_2);

#define VkglTestCase_023729_1 "dEQP-GLES31.functional.program_interface_query.buffer_v"
#define VkglTestCase_023729_2 "ariable.is_row_major.named_block.no_qualifier.var_array"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023729, VkglTestCase_023729_1, VkglTestCase_023729_2);

#define VkglTestCase_023730_1 "dEQP-GLES31.functional.program_interface_query.buffer_vari"
#define VkglTestCase_023730_2 "able.is_row_major.named_block.no_qualifier.var_struct_array"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023730, VkglTestCase_023730_1, VkglTestCase_023730_2);

#define VkglTestCase_023731_1 "dEQP-GLES31.functional.program_interface_query.buffer_vari"
#define VkglTestCase_023731_2 "able.is_row_major.named_block.no_qualifier.var_array_array"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023731, VkglTestCase_023731_1, VkglTestCase_023731_2);

#define VkglTestCase_023732_1 "dEQP-GLES31.functional.program_interface_query.buffer_varia"
#define VkglTestCase_023732_2 "ble.is_row_major.named_block.no_qualifier.var_unsized_array"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023732, VkglTestCase_023732_1, VkglTestCase_023732_2);

#define VkglTestCase_023880_1 "dEQP-GLES31.functional.program_interface_query.buffe"
#define VkglTestCase_023880_2 "r_variable.matrix_stride.named_block.no_qualifier.var"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023880, VkglTestCase_023880_1, VkglTestCase_023880_2);

#define VkglTestCase_023881_1 "dEQP-GLES31.functional.program_interface_query.buffer_va"
#define VkglTestCase_023881_2 "riable.matrix_stride.named_block.no_qualifier.var_struct"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023881, VkglTestCase_023881_1, VkglTestCase_023881_2);

#define VkglTestCase_023882_1 "dEQP-GLES31.functional.program_interface_query.buffer_varia"
#define VkglTestCase_023882_2 "ble.matrix_stride.named_block.no_qualifier.var_struct_struct"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023882, VkglTestCase_023882_1, VkglTestCase_023882_2);

#define VkglTestCase_023883_1 "dEQP-GLES31.functional.program_interface_query.buffer_varia"
#define VkglTestCase_023883_2 "ble.matrix_stride.named_block.no_qualifier.var_array_struct"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023883, VkglTestCase_023883_1, VkglTestCase_023883_2);

#define VkglTestCase_023884_1 "dEQP-GLES31.functional.program_interface_query.buffer_v"
#define VkglTestCase_023884_2 "ariable.matrix_stride.named_block.no_qualifier.var_array"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023884, VkglTestCase_023884_1, VkglTestCase_023884_2);

#define VkglTestCase_023885_1 "dEQP-GLES31.functional.program_interface_query.buffer_varia"
#define VkglTestCase_023885_2 "ble.matrix_stride.named_block.no_qualifier.var_struct_array"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023885, VkglTestCase_023885_1, VkglTestCase_023885_2);

#define VkglTestCase_023886_1 "dEQP-GLES31.functional.program_interface_query.buffer_vari"
#define VkglTestCase_023886_2 "able.matrix_stride.named_block.no_qualifier.var_array_array"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023886, VkglTestCase_023886_1, VkglTestCase_023886_2);

#define VkglTestCase_023887_1 "dEQP-GLES31.functional.program_interface_query.buffer_varia"
#define VkglTestCase_023887_2 "ble.matrix_stride.named_block.no_qualifier.var_unsized_array"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023887, VkglTestCase_023887_1, VkglTestCase_023887_2);
