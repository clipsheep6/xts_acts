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
#include "../ActsDeqpgles310010TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_009700_1 "dEQP-GLES31.functional.ssbo.layout.sing"
#define VkglTestCase_009700_2 "le_nested_struct.per_block_buffer.shared"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009700, VkglTestCase_009700_1, VkglTestCase_009700_2);

#define VkglTestCase_009701_1 "dEQP-GLES31.functional.ssbo.layout.single_neste"
#define VkglTestCase_009701_2 "d_struct.per_block_buffer.shared_instance_array"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009701, VkglTestCase_009701_1, VkglTestCase_009701_2);

#define VkglTestCase_009702_1 "dEQP-GLES31.functional.ssbo.layout.sing"
#define VkglTestCase_009702_2 "le_nested_struct.per_block_buffer.packed"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009702, VkglTestCase_009702_1, VkglTestCase_009702_2);

#define VkglTestCase_009703_1 "dEQP-GLES31.functional.ssbo.layout.single_neste"
#define VkglTestCase_009703_2 "d_struct.per_block_buffer.packed_instance_array"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009703, VkglTestCase_009703_1, VkglTestCase_009703_2);

#define VkglTestCase_009704_1 "dEQP-GLES31.functional.ssbo.layout.sing"
#define VkglTestCase_009704_2 "le_nested_struct.per_block_buffer.std140"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009704, VkglTestCase_009704_1, VkglTestCase_009704_2);

#define VkglTestCase_009705_1 "dEQP-GLES31.functional.ssbo.layout.single_neste"
#define VkglTestCase_009705_2 "d_struct.per_block_buffer.std140_instance_array"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009705, VkglTestCase_009705_1, VkglTestCase_009705_2);

#define VkglTestCase_009706_1 "dEQP-GLES31.functional.ssbo.layout.sing"
#define VkglTestCase_009706_2 "le_nested_struct.per_block_buffer.std430"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009706, VkglTestCase_009706_1, VkglTestCase_009706_2);

#define VkglTestCase_009707_1 "dEQP-GLES31.functional.ssbo.layout.single_neste"
#define VkglTestCase_009707_2 "d_struct.per_block_buffer.std430_instance_array"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009707, VkglTestCase_009707_1, VkglTestCase_009707_2);
