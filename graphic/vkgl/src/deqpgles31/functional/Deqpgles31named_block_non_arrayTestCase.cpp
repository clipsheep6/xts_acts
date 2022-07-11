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

#define VkglTestCase_023485_1 "dEQP-GLES31.functional.program_interface_query.buf"
#define VkglTestCase_023485_2 "fer_variable.array_size.named_block.non_array.float"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023485, VkglTestCase_023485_1, VkglTestCase_023485_2);

#define VkglTestCase_023486_1 "dEQP-GLES31.functional.program_interface_query.bu"
#define VkglTestCase_023486_2 "ffer_variable.array_size.named_block.non_array.int"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023486, VkglTestCase_023486_1, VkglTestCase_023486_2);

#define VkglTestCase_023487_1 "dEQP-GLES31.functional.program_interface_query.buf"
#define VkglTestCase_023487_2 "fer_variable.array_size.named_block.non_array.uint"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023487, VkglTestCase_023487_1, VkglTestCase_023487_2);

#define VkglTestCase_023488_1 "dEQP-GLES31.functional.program_interface_query.buf"
#define VkglTestCase_023488_2 "fer_variable.array_size.named_block.non_array.bool"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023488, VkglTestCase_023488_1, VkglTestCase_023488_2);

#define VkglTestCase_023489_1 "dEQP-GLES31.functional.program_interface_query.buf"
#define VkglTestCase_023489_2 "fer_variable.array_size.named_block.non_array.vec3"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023489, VkglTestCase_023489_1, VkglTestCase_023489_2);

#define VkglTestCase_023490_1 "dEQP-GLES31.functional.program_interface_query.buf"
#define VkglTestCase_023490_2 "fer_variable.array_size.named_block.non_array.vec4"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023490, VkglTestCase_023490_1, VkglTestCase_023490_2);

#define VkglTestCase_023598_1 "dEQP-GLES31.functional.program_interface_query.buff"
#define VkglTestCase_023598_2 "er_variable.array_stride.named_block.non_array.float"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023598, VkglTestCase_023598_1, VkglTestCase_023598_2);

#define VkglTestCase_023599_1 "dEQP-GLES31.functional.program_interface_query.buf"
#define VkglTestCase_023599_2 "fer_variable.array_stride.named_block.non_array.int"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023599, VkglTestCase_023599_1, VkglTestCase_023599_2);

#define VkglTestCase_023600_1 "dEQP-GLES31.functional.program_interface_query.buff"
#define VkglTestCase_023600_2 "er_variable.array_stride.named_block.non_array.uint"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023600, VkglTestCase_023600_1, VkglTestCase_023600_2);

#define VkglTestCase_023601_1 "dEQP-GLES31.functional.program_interface_query.buff"
#define VkglTestCase_023601_2 "er_variable.array_stride.named_block.non_array.bool"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023601, VkglTestCase_023601_1, VkglTestCase_023601_2);

#define VkglTestCase_023602_1 "dEQP-GLES31.functional.program_interface_query.buff"
#define VkglTestCase_023602_2 "er_variable.array_stride.named_block.non_array.vec3"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023602, VkglTestCase_023602_1, VkglTestCase_023602_2);

#define VkglTestCase_023603_1 "dEQP-GLES31.functional.program_interface_query.buff"
#define VkglTestCase_023603_2 "er_variable.array_stride.named_block.non_array.vec4"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023603, VkglTestCase_023603_1, VkglTestCase_023603_2);
