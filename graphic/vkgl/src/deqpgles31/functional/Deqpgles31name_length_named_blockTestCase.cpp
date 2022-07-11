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

#define VkglTestCase_020827_1 "dEQP-GLES31.functional.program_interface_"
#define VkglTestCase_020827_2 "query.uniform.name_length.named_block.var"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020827, VkglTestCase_020827_1, VkglTestCase_020827_2);

#define VkglTestCase_020828_1 "dEQP-GLES31.functional.program_interface_que"
#define VkglTestCase_020828_2 "ry.uniform.name_length.named_block.var_struct"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020828, VkglTestCase_020828_1, VkglTestCase_020828_2);

#define VkglTestCase_020829_1 "dEQP-GLES31.functional.program_interface_query.u"
#define VkglTestCase_020829_2 "niform.name_length.named_block.var_struct_struct"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020829, VkglTestCase_020829_1, VkglTestCase_020829_2);

#define VkglTestCase_020830_1 "dEQP-GLES31.functional.program_interface_query."
#define VkglTestCase_020830_2 "uniform.name_length.named_block.var_array_struct"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020830, VkglTestCase_020830_1, VkglTestCase_020830_2);

#define VkglTestCase_020831_1 "dEQP-GLES31.functional.program_interface_que"
#define VkglTestCase_020831_2 "ry.uniform.name_length.named_block.var_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020831, VkglTestCase_020831_1, VkglTestCase_020831_2);

#define VkglTestCase_020832_1 "dEQP-GLES31.functional.program_interface_query."
#define VkglTestCase_020832_2 "uniform.name_length.named_block.var_struct_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020832, VkglTestCase_020832_1, VkglTestCase_020832_2);

#define VkglTestCase_020833_1 "dEQP-GLES31.functional.program_interface_query."
#define VkglTestCase_020833_2 "uniform.name_length.named_block.var_array_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020833, VkglTestCase_020833_1, VkglTestCase_020833_2);
