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
#include "../ActsDeqpgles310025TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_024452_1 "dEQP-GLES31.functional.program_interface_query.bu"
#define VkglTestCase_024452_2 "ffer_variable.top_level_array_size.block_array.var"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024452, VkglTestCase_024452_1, VkglTestCase_024452_2);

#define VkglTestCase_024453_1 "dEQP-GLES31.functional.program_interface_query.buffer"
#define VkglTestCase_024453_2 "_variable.top_level_array_size.block_array.var_struct"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024453, VkglTestCase_024453_1, VkglTestCase_024453_2);

#define VkglTestCase_024454_1 "dEQP-GLES31.functional.program_interface_query.buffer_va"
#define VkglTestCase_024454_2 "riable.top_level_array_size.block_array.var_struct_struct"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024454, VkglTestCase_024454_1, VkglTestCase_024454_2);

#define VkglTestCase_024455_1 "dEQP-GLES31.functional.program_interface_query.buffer_variab"
#define VkglTestCase_024455_2 "le.top_level_array_size.block_array.var_struct_struct_struct"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024455, VkglTestCase_024455_1, VkglTestCase_024455_2);

#define VkglTestCase_024456_1 "dEQP-GLES31.functional.program_interface_query.buffer_varia"
#define VkglTestCase_024456_2 "ble.top_level_array_size.block_array.var_array_struct_struct"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024456, VkglTestCase_024456_1, VkglTestCase_024456_2);

#define VkglTestCase_024457_1 "dEQP-GLES31.functional.program_interface_query.buffer_va"
#define VkglTestCase_024457_2 "riable.top_level_array_size.block_array.var_array_struct"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024457, VkglTestCase_024457_1, VkglTestCase_024457_2);

#define VkglTestCase_024458_1 "dEQP-GLES31.functional.program_interface_query.buffer_varia"
#define VkglTestCase_024458_2 "ble.top_level_array_size.block_array.var_struct_array_struct"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024458, VkglTestCase_024458_1, VkglTestCase_024458_2);

#define VkglTestCase_024459_1 "dEQP-GLES31.functional.program_interface_query.buffer_varia"
#define VkglTestCase_024459_2 "ble.top_level_array_size.block_array.var_array_array_struct"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024459, VkglTestCase_024459_1, VkglTestCase_024459_2);

#define VkglTestCase_024460_1 "dEQP-GLES31.functional.program_interface_query.buffe"
#define VkglTestCase_024460_2 "r_variable.top_level_array_size.block_array.var_array"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024460, VkglTestCase_024460_1, VkglTestCase_024460_2);

#define VkglTestCase_024461_1 "dEQP-GLES31.functional.program_interface_query.buffer_va"
#define VkglTestCase_024461_2 "riable.top_level_array_size.block_array.var_struct_array"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024461, VkglTestCase_024461_1, VkglTestCase_024461_2);

#define VkglTestCase_024462_1 "dEQP-GLES31.functional.program_interface_query.buffer_varia"
#define VkglTestCase_024462_2 "ble.top_level_array_size.block_array.var_struct_struct_array"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024462, VkglTestCase_024462_1, VkglTestCase_024462_2);

#define VkglTestCase_024463_1 "dEQP-GLES31.functional.program_interface_query.buffer_varia"
#define VkglTestCase_024463_2 "ble.top_level_array_size.block_array.var_array_struct_array"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024463, VkglTestCase_024463_1, VkglTestCase_024463_2);

#define VkglTestCase_024464_1 "dEQP-GLES31.functional.program_interface_query.buffer_v"
#define VkglTestCase_024464_2 "ariable.top_level_array_size.block_array.var_array_array"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024464, VkglTestCase_024464_1, VkglTestCase_024464_2);

#define VkglTestCase_024465_1 "dEQP-GLES31.functional.program_interface_query.buffer_varia"
#define VkglTestCase_024465_2 "ble.top_level_array_size.block_array.var_struct_array_array"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024465, VkglTestCase_024465_1, VkglTestCase_024465_2);

#define VkglTestCase_024466_1 "dEQP-GLES31.functional.program_interface_query.buffer_vari"
#define VkglTestCase_024466_2 "able.top_level_array_size.block_array.var_array_array_array"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024466, VkglTestCase_024466_1, VkglTestCase_024466_2);

#define VkglTestCase_024467_1 "dEQP-GLES31.functional.program_interface_query.buffer_va"
#define VkglTestCase_024467_2 "riable.top_level_array_size.block_array.var_unsized_array"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024467, VkglTestCase_024467_1, VkglTestCase_024467_2);

#define VkglTestCase_024468_1 "dEQP-GLES31.functional.program_interface_query.buffer_variab"
#define VkglTestCase_024468_2 "le.top_level_array_size.block_array.var_struct_unsized_array"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024468, VkglTestCase_024468_1, VkglTestCase_024468_2);

#define VkglTestCase_024469_1 "dEQP-GLES31.functional.program_interface_query.buffer_variable."
#define VkglTestCase_024469_2 "top_level_array_size.block_array.var_struct_struct_unsized_array"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024469, VkglTestCase_024469_1, VkglTestCase_024469_2);

#define VkglTestCase_024470_1 "dEQP-GLES31.functional.program_interface_query.buffer_variable."
#define VkglTestCase_024470_2 "top_level_array_size.block_array.var_array_struct_unsized_array"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024470, VkglTestCase_024470_1, VkglTestCase_024470_2);

#define VkglTestCase_024471_1 "dEQP-GLES31.functional.program_interface_query.buffer_varia"
#define VkglTestCase_024471_2 "ble.top_level_array_size.block_array.var_array_unsized_array"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024471, VkglTestCase_024471_1, VkglTestCase_024471_2);

#define VkglTestCase_024472_1 "dEQP-GLES31.functional.program_interface_query.buffer_variable."
#define VkglTestCase_024472_2 "top_level_array_size.block_array.var_struct_array_unsized_array"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024472, VkglTestCase_024472_1, VkglTestCase_024472_2);

#define VkglTestCase_024473_1 "dEQP-GLES31.functional.program_interface_query.buffer_variable"
#define VkglTestCase_024473_2 ".top_level_array_size.block_array.var_array_array_unsized_array"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024473, VkglTestCase_024473_1, VkglTestCase_024473_2);
