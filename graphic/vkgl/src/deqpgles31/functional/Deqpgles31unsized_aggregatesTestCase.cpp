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

#define VkglTestCase_023537_1 "dEQP-GLES31.functional.program_interface_query.buffer_vari"
#define VkglTestCase_023537_2 "able.array_size.named_block.unsized.aggregates.float_struct"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023537, VkglTestCase_023537_1, VkglTestCase_023537_2);

#define VkglTestCase_023538_1 "dEQP-GLES31.functional.program_interface_query.buffer_vari"
#define VkglTestCase_023538_2 "able.array_size.named_block.unsized.aggregates.float_array"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023538, VkglTestCase_023538_1, VkglTestCase_023538_2);

#define VkglTestCase_023539_1 "dEQP-GLES31.functional.program_interface_query.buffer_"
#define VkglTestCase_023539_2 "variable.array_size.named_block.unsized.aggregates.bool"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023539, VkglTestCase_023539_1, VkglTestCase_023539_2);

#define VkglTestCase_023540_1 "dEQP-GLES31.functional.program_interface_query.buffer_vari"
#define VkglTestCase_023540_2 "able.array_size.named_block.unsized.aggregates.bvec3_struct"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023540, VkglTestCase_023540_1, VkglTestCase_023540_2);

#define VkglTestCase_023541_1 "dEQP-GLES31.functional.program_interface_query.buffer_vari"
#define VkglTestCase_023541_2 "able.array_size.named_block.unsized.aggregates.bvec3_array"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023541, VkglTestCase_023541_1, VkglTestCase_023541_2);

#define VkglTestCase_023542_1 "dEQP-GLES31.functional.program_interface_query.buffer_vari"
#define VkglTestCase_023542_2 "able.array_size.named_block.unsized.aggregates.vec4_struct"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023542, VkglTestCase_023542_1, VkglTestCase_023542_2);

#define VkglTestCase_023543_1 "dEQP-GLES31.functional.program_interface_query.buffer_var"
#define VkglTestCase_023543_2 "iable.array_size.named_block.unsized.aggregates.vec4_array"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023543, VkglTestCase_023543_1, VkglTestCase_023543_2);

#define VkglTestCase_023544_1 "dEQP-GLES31.functional.program_interface_query.buffer_vari"
#define VkglTestCase_023544_2 "able.array_size.named_block.unsized.aggregates.ivec2_struct"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023544, VkglTestCase_023544_1, VkglTestCase_023544_2);

#define VkglTestCase_023545_1 "dEQP-GLES31.functional.program_interface_query.buffer_vari"
#define VkglTestCase_023545_2 "able.array_size.named_block.unsized.aggregates.ivec2_array"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023545, VkglTestCase_023545_1, VkglTestCase_023545_2);

#define VkglTestCase_023650_1 "dEQP-GLES31.functional.program_interface_query.buffer_varia"
#define VkglTestCase_023650_2 "ble.array_stride.named_block.unsized.aggregates.float_struct"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023650, VkglTestCase_023650_1, VkglTestCase_023650_2);

#define VkglTestCase_023651_1 "dEQP-GLES31.functional.program_interface_query.buffer_varia"
#define VkglTestCase_023651_2 "ble.array_stride.named_block.unsized.aggregates.float_array"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023651, VkglTestCase_023651_1, VkglTestCase_023651_2);

#define VkglTestCase_023652_1 "dEQP-GLES31.functional.program_interface_query.buffer_v"
#define VkglTestCase_023652_2 "ariable.array_stride.named_block.unsized.aggregates.bool"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023652, VkglTestCase_023652_1, VkglTestCase_023652_2);

#define VkglTestCase_023653_1 "dEQP-GLES31.functional.program_interface_query.buffer_varia"
#define VkglTestCase_023653_2 "ble.array_stride.named_block.unsized.aggregates.bvec3_struct"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023653, VkglTestCase_023653_1, VkglTestCase_023653_2);

#define VkglTestCase_023654_1 "dEQP-GLES31.functional.program_interface_query.buffer_varia"
#define VkglTestCase_023654_2 "ble.array_stride.named_block.unsized.aggregates.bvec3_array"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023654, VkglTestCase_023654_1, VkglTestCase_023654_2);

#define VkglTestCase_023655_1 "dEQP-GLES31.functional.program_interface_query.buffer_varia"
#define VkglTestCase_023655_2 "ble.array_stride.named_block.unsized.aggregates.vec4_struct"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023655, VkglTestCase_023655_1, VkglTestCase_023655_2);

#define VkglTestCase_023656_1 "dEQP-GLES31.functional.program_interface_query.buffer_vari"
#define VkglTestCase_023656_2 "able.array_stride.named_block.unsized.aggregates.vec4_array"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023656, VkglTestCase_023656_1, VkglTestCase_023656_2);

#define VkglTestCase_023657_1 "dEQP-GLES31.functional.program_interface_query.buffer_varia"
#define VkglTestCase_023657_2 "ble.array_stride.named_block.unsized.aggregates.ivec2_struct"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023657, VkglTestCase_023657_1, VkglTestCase_023657_2);

#define VkglTestCase_023658_1 "dEQP-GLES31.functional.program_interface_query.buffer_varia"
#define VkglTestCase_023658_2 "ble.array_stride.named_block.unsized.aggregates.ivec2_array"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023658, VkglTestCase_023658_1, VkglTestCase_023658_2);
