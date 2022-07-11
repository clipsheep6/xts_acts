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

#define VkglTestCase_023531_1 "dEQP-GLES31.functional.program_interface_query.buffe"
#define VkglTestCase_023531_2 "r_variable.array_size.named_block.unsized.types.float"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023531, VkglTestCase_023531_1, VkglTestCase_023531_2);

#define VkglTestCase_023532_1 "dEQP-GLES31.functional.program_interface_query.buff"
#define VkglTestCase_023532_2 "er_variable.array_size.named_block.unsized.types.int"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023532, VkglTestCase_023532_1, VkglTestCase_023532_2);

#define VkglTestCase_023533_1 "dEQP-GLES31.functional.program_interface_query.buffe"
#define VkglTestCase_023533_2 "r_variable.array_size.named_block.unsized.types.uint"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023533, VkglTestCase_023533_1, VkglTestCase_023533_2);

#define VkglTestCase_023534_1 "dEQP-GLES31.functional.program_interface_query.buffe"
#define VkglTestCase_023534_2 "r_variable.array_size.named_block.unsized.types.bool"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023534, VkglTestCase_023534_1, VkglTestCase_023534_2);

#define VkglTestCase_023535_1 "dEQP-GLES31.functional.program_interface_query.buffe"
#define VkglTestCase_023535_2 "r_variable.array_size.named_block.unsized.types.vec3"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023535, VkglTestCase_023535_1, VkglTestCase_023535_2);

#define VkglTestCase_023536_1 "dEQP-GLES31.functional.program_interface_query.buffe"
#define VkglTestCase_023536_2 "r_variable.array_size.named_block.unsized.types.vec4"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023536, VkglTestCase_023536_1, VkglTestCase_023536_2);

#define VkglTestCase_023644_1 "dEQP-GLES31.functional.program_interface_query.buffer"
#define VkglTestCase_023644_2 "_variable.array_stride.named_block.unsized.types.float"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023644, VkglTestCase_023644_1, VkglTestCase_023644_2);

#define VkglTestCase_023645_1 "dEQP-GLES31.functional.program_interface_query.buffe"
#define VkglTestCase_023645_2 "r_variable.array_stride.named_block.unsized.types.int"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023645, VkglTestCase_023645_1, VkglTestCase_023645_2);

#define VkglTestCase_023646_1 "dEQP-GLES31.functional.program_interface_query.buffer"
#define VkglTestCase_023646_2 "_variable.array_stride.named_block.unsized.types.uint"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023646, VkglTestCase_023646_1, VkglTestCase_023646_2);

#define VkglTestCase_023647_1 "dEQP-GLES31.functional.program_interface_query.buffer"
#define VkglTestCase_023647_2 "_variable.array_stride.named_block.unsized.types.bool"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023647, VkglTestCase_023647_1, VkglTestCase_023647_2);

#define VkglTestCase_023648_1 "dEQP-GLES31.functional.program_interface_query.buffer"
#define VkglTestCase_023648_2 "_variable.array_stride.named_block.unsized.types.vec3"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023648, VkglTestCase_023648_1, VkglTestCase_023648_2);

#define VkglTestCase_023649_1 "dEQP-GLES31.functional.program_interface_query.buffer"
#define VkglTestCase_023649_2 "_variable.array_stride.named_block.unsized.types.vec4"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023649, VkglTestCase_023649_1, VkglTestCase_023649_2);
