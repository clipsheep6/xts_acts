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

#define VkglTestCase_009736_1 "dEQP-GLES31.functional.ssbo.layout.2_level_"
#define VkglTestCase_009736_2 "unsized_struct_array.per_block_buffer.shared"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009736, VkglTestCase_009736_1, VkglTestCase_009736_2);

#define VkglTestCase_009737_1 "dEQP-GLES31.functional.ssbo.layout.2_level_unsized_"
#define VkglTestCase_009737_2 "struct_array.per_block_buffer.shared_instance_array"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009737, VkglTestCase_009737_1, VkglTestCase_009737_2);

#define VkglTestCase_009738_1 "dEQP-GLES31.functional.ssbo.layout.2_level_"
#define VkglTestCase_009738_2 "unsized_struct_array.per_block_buffer.packed"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009738, VkglTestCase_009738_1, VkglTestCase_009738_2);

#define VkglTestCase_009739_1 "dEQP-GLES31.functional.ssbo.layout.2_level_unsized_"
#define VkglTestCase_009739_2 "struct_array.per_block_buffer.packed_instance_array"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009739, VkglTestCase_009739_1, VkglTestCase_009739_2);

#define VkglTestCase_009740_1 "dEQP-GLES31.functional.ssbo.layout.2_level_"
#define VkglTestCase_009740_2 "unsized_struct_array.per_block_buffer.std140"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009740, VkglTestCase_009740_1, VkglTestCase_009740_2);

#define VkglTestCase_009741_1 "dEQP-GLES31.functional.ssbo.layout.2_level_unsized_"
#define VkglTestCase_009741_2 "struct_array.per_block_buffer.std140_instance_array"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009741, VkglTestCase_009741_1, VkglTestCase_009741_2);

#define VkglTestCase_009742_1 "dEQP-GLES31.functional.ssbo.layout.2_level_"
#define VkglTestCase_009742_2 "unsized_struct_array.per_block_buffer.std430"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009742, VkglTestCase_009742_1, VkglTestCase_009742_2);

#define VkglTestCase_009743_1 "dEQP-GLES31.functional.ssbo.layout.2_level_unsized_"
#define VkglTestCase_009743_2 "struct_array.per_block_buffer.std430_instance_array"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009743, VkglTestCase_009743_1, VkglTestCase_009743_2);
