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

#define VkglTestCase_009748_1 "dEQP-GLES31.functional.ssbo.layout.unsized_"
#define VkglTestCase_009748_2 "nested_struct_array.per_block_buffer.shared"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009748, VkglTestCase_009748_1, VkglTestCase_009748_2);

#define VkglTestCase_009749_1 "dEQP-GLES31.functional.ssbo.layout.unsized_nested_"
#define VkglTestCase_009749_2 "struct_array.per_block_buffer.shared_instance_array"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009749, VkglTestCase_009749_1, VkglTestCase_009749_2);

#define VkglTestCase_009750_1 "dEQP-GLES31.functional.ssbo.layout.unsized_"
#define VkglTestCase_009750_2 "nested_struct_array.per_block_buffer.packed"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009750, VkglTestCase_009750_1, VkglTestCase_009750_2);

#define VkglTestCase_009751_1 "dEQP-GLES31.functional.ssbo.layout.unsized_nested_"
#define VkglTestCase_009751_2 "struct_array.per_block_buffer.packed_instance_array"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009751, VkglTestCase_009751_1, VkglTestCase_009751_2);

#define VkglTestCase_009752_1 "dEQP-GLES31.functional.ssbo.layout.unsized_"
#define VkglTestCase_009752_2 "nested_struct_array.per_block_buffer.std140"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009752, VkglTestCase_009752_1, VkglTestCase_009752_2);

#define VkglTestCase_009753_1 "dEQP-GLES31.functional.ssbo.layout.unsized_nested_"
#define VkglTestCase_009753_2 "struct_array.per_block_buffer.std140_instance_array"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009753, VkglTestCase_009753_1, VkglTestCase_009753_2);

#define VkglTestCase_009754_1 "dEQP-GLES31.functional.ssbo.layout.unsized_"
#define VkglTestCase_009754_2 "nested_struct_array.per_block_buffer.std430"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009754, VkglTestCase_009754_1, VkglTestCase_009754_2);

#define VkglTestCase_009755_1 "dEQP-GLES31.functional.ssbo.layout.unsized_nested_"
#define VkglTestCase_009755_2 "struct_array.per_block_buffer.std430_instance_array"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009755, VkglTestCase_009755_1, VkglTestCase_009755_2);
