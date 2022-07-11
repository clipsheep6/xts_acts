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

#define VkglTestCase_024408_1 "dEQP-GLES31.functional.program_interface_query.bu"
#define VkglTestCase_024408_2 "ffer_variable.top_level_array_size.named_block.var"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024408, VkglTestCase_024408_1, VkglTestCase_024408_2);

#define VkglTestCase_024409_1 "dEQP-GLES31.functional.program_interface_query.buffer"
#define VkglTestCase_024409_2 "_variable.top_level_array_size.named_block.var_struct"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024409, VkglTestCase_024409_1, VkglTestCase_024409_2);

#define VkglTestCase_024410_1 "dEQP-GLES31.functional.program_interface_query.buffer_va"
#define VkglTestCase_024410_2 "riable.top_level_array_size.named_block.var_struct_struct"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024410, VkglTestCase_024410_1, VkglTestCase_024410_2);

#define VkglTestCase_024411_1 "dEQP-GLES31.functional.program_interface_query.buffer_variab"
#define VkglTestCase_024411_2 "le.top_level_array_size.named_block.var_struct_struct_struct"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024411, VkglTestCase_024411_1, VkglTestCase_024411_2);

#define VkglTestCase_024412_1 "dEQP-GLES31.functional.program_interface_query.buffer_varia"
#define VkglTestCase_024412_2 "ble.top_level_array_size.named_block.var_array_struct_struct"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024412, VkglTestCase_024412_1, VkglTestCase_024412_2);

#define VkglTestCase_024413_1 "dEQP-GLES31.functional.program_interface_query.buffer_va"
#define VkglTestCase_024413_2 "riable.top_level_array_size.named_block.var_array_struct"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024413, VkglTestCase_024413_1, VkglTestCase_024413_2);

#define VkglTestCase_024414_1 "dEQP-GLES31.functional.program_interface_query.buffer_varia"
#define VkglTestCase_024414_2 "ble.top_level_array_size.named_block.var_struct_array_struct"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024414, VkglTestCase_024414_1, VkglTestCase_024414_2);

#define VkglTestCase_024415_1 "dEQP-GLES31.functional.program_interface_query.buffer_varia"
#define VkglTestCase_024415_2 "ble.top_level_array_size.named_block.var_array_array_struct"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024415, VkglTestCase_024415_1, VkglTestCase_024415_2);

#define VkglTestCase_024416_1 "dEQP-GLES31.functional.program_interface_query.buffe"
#define VkglTestCase_024416_2 "r_variable.top_level_array_size.named_block.var_array"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024416, VkglTestCase_024416_1, VkglTestCase_024416_2);

#define VkglTestCase_024417_1 "dEQP-GLES31.functional.program_interface_query.buffer_va"
#define VkglTestCase_024417_2 "riable.top_level_array_size.named_block.var_struct_array"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024417, VkglTestCase_024417_1, VkglTestCase_024417_2);

#define VkglTestCase_024418_1 "dEQP-GLES31.functional.program_interface_query.buffer_varia"
#define VkglTestCase_024418_2 "ble.top_level_array_size.named_block.var_struct_struct_array"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024418, VkglTestCase_024418_1, VkglTestCase_024418_2);

#define VkglTestCase_024419_1 "dEQP-GLES31.functional.program_interface_query.buffer_varia"
#define VkglTestCase_024419_2 "ble.top_level_array_size.named_block.var_array_struct_array"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024419, VkglTestCase_024419_1, VkglTestCase_024419_2);

#define VkglTestCase_024420_1 "dEQP-GLES31.functional.program_interface_query.buffer_v"
#define VkglTestCase_024420_2 "ariable.top_level_array_size.named_block.var_array_array"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024420, VkglTestCase_024420_1, VkglTestCase_024420_2);

#define VkglTestCase_024421_1 "dEQP-GLES31.functional.program_interface_query.buffer_varia"
#define VkglTestCase_024421_2 "ble.top_level_array_size.named_block.var_struct_array_array"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024421, VkglTestCase_024421_1, VkglTestCase_024421_2);

#define VkglTestCase_024422_1 "dEQP-GLES31.functional.program_interface_query.buffer_vari"
#define VkglTestCase_024422_2 "able.top_level_array_size.named_block.var_array_array_array"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024422, VkglTestCase_024422_1, VkglTestCase_024422_2);

#define VkglTestCase_024423_1 "dEQP-GLES31.functional.program_interface_query.buffer_va"
#define VkglTestCase_024423_2 "riable.top_level_array_size.named_block.var_unsized_array"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024423, VkglTestCase_024423_1, VkglTestCase_024423_2);

#define VkglTestCase_024424_1 "dEQP-GLES31.functional.program_interface_query.buffer_variab"
#define VkglTestCase_024424_2 "le.top_level_array_size.named_block.var_struct_unsized_array"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024424, VkglTestCase_024424_1, VkglTestCase_024424_2);

#define VkglTestCase_024425_1 "dEQP-GLES31.functional.program_interface_query.buffer_variable."
#define VkglTestCase_024425_2 "top_level_array_size.named_block.var_struct_struct_unsized_array"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024425, VkglTestCase_024425_1, VkglTestCase_024425_2);

#define VkglTestCase_024426_1 "dEQP-GLES31.functional.program_interface_query.buffer_variable."
#define VkglTestCase_024426_2 "top_level_array_size.named_block.var_array_struct_unsized_array"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024426, VkglTestCase_024426_1, VkglTestCase_024426_2);

#define VkglTestCase_024427_1 "dEQP-GLES31.functional.program_interface_query.buffer_varia"
#define VkglTestCase_024427_2 "ble.top_level_array_size.named_block.var_array_unsized_array"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024427, VkglTestCase_024427_1, VkglTestCase_024427_2);

#define VkglTestCase_024428_1 "dEQP-GLES31.functional.program_interface_query.buffer_variable."
#define VkglTestCase_024428_2 "top_level_array_size.named_block.var_struct_array_unsized_array"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024428, VkglTestCase_024428_1, VkglTestCase_024428_2);

#define VkglTestCase_024429_1 "dEQP-GLES31.functional.program_interface_query.buffer_variable"
#define VkglTestCase_024429_2 ".top_level_array_size.named_block.var_array_array_unsized_array"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024429, VkglTestCase_024429_1, VkglTestCase_024429_2);
