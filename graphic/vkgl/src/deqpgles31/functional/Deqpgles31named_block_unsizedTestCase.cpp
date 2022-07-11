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

#define VkglTestCase_024039_1 "dEQP-GLES31.functional.program_interface_query.bu"
#define VkglTestCase_024039_2 "ffer_variable.name_length.named_block.unsized.var"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024039, VkglTestCase_024039_1, VkglTestCase_024039_2);

#define VkglTestCase_024040_1 "dEQP-GLES31.functional.program_interface_query.buffe"
#define VkglTestCase_024040_2 "r_variable.name_length.named_block.unsized.var_struct"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024040, VkglTestCase_024040_1, VkglTestCase_024040_2);

#define VkglTestCase_024041_1 "dEQP-GLES31.functional.program_interface_query.buffer_va"
#define VkglTestCase_024041_2 "riable.name_length.named_block.unsized.var_struct_struct"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024041, VkglTestCase_024041_1, VkglTestCase_024041_2);

#define VkglTestCase_024042_1 "dEQP-GLES31.functional.program_interface_query.buffer_v"
#define VkglTestCase_024042_2 "ariable.name_length.named_block.unsized.var_array_struct"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024042, VkglTestCase_024042_1, VkglTestCase_024042_2);

#define VkglTestCase_024043_1 "dEQP-GLES31.functional.program_interface_query.buffe"
#define VkglTestCase_024043_2 "r_variable.name_length.named_block.unsized.var_array"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024043, VkglTestCase_024043_1, VkglTestCase_024043_2);

#define VkglTestCase_024044_1 "dEQP-GLES31.functional.program_interface_query.buffer_v"
#define VkglTestCase_024044_2 "ariable.name_length.named_block.unsized.var_struct_array"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024044, VkglTestCase_024044_1, VkglTestCase_024044_2);

#define VkglTestCase_024045_1 "dEQP-GLES31.functional.program_interface_query.buffer_v"
#define VkglTestCase_024045_2 "ariable.name_length.named_block.unsized.var_array_array"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024045, VkglTestCase_024045_1, VkglTestCase_024045_2);

#define VkglTestCase_024105_1 "dEQP-GLES31.functional.program_interface_query"
#define VkglTestCase_024105_2 ".buffer_variable.offset.named_block.unsized.var"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024105, VkglTestCase_024105_1, VkglTestCase_024105_2);

#define VkglTestCase_024106_1 "dEQP-GLES31.functional.program_interface_query.buf"
#define VkglTestCase_024106_2 "fer_variable.offset.named_block.unsized.var_struct"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024106, VkglTestCase_024106_1, VkglTestCase_024106_2);

#define VkglTestCase_024107_1 "dEQP-GLES31.functional.program_interface_query.buffer"
#define VkglTestCase_024107_2 "_variable.offset.named_block.unsized.var_struct_struct"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024107, VkglTestCase_024107_1, VkglTestCase_024107_2);

#define VkglTestCase_024108_1 "dEQP-GLES31.functional.program_interface_query.buffer"
#define VkglTestCase_024108_2 "_variable.offset.named_block.unsized.var_array_struct"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024108, VkglTestCase_024108_1, VkglTestCase_024108_2);

#define VkglTestCase_024109_1 "dEQP-GLES31.functional.program_interface_query.bu"
#define VkglTestCase_024109_2 "ffer_variable.offset.named_block.unsized.var_array"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024109, VkglTestCase_024109_1, VkglTestCase_024109_2);

#define VkglTestCase_024110_1 "dEQP-GLES31.functional.program_interface_query.buffer"
#define VkglTestCase_024110_2 "_variable.offset.named_block.unsized.var_struct_array"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024110, VkglTestCase_024110_1, VkglTestCase_024110_2);

#define VkglTestCase_024111_1 "dEQP-GLES31.functional.program_interface_query.buffe"
#define VkglTestCase_024111_2 "r_variable.offset.named_block.unsized.var_array_array"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024111, VkglTestCase_024111_1, VkglTestCase_024111_2);
