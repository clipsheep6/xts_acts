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

#define VkglTestCase_009712_1 "dEQP-GLES31.functional.ssbo.layout.single_"
#define VkglTestCase_009712_2 "nested_struct_array.per_block_buffer.shared"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009712, VkglTestCase_009712_1, VkglTestCase_009712_2);

#define VkglTestCase_009713_1 "dEQP-GLES31.functional.ssbo.layout.single_nested_s"
#define VkglTestCase_009713_2 "truct_array.per_block_buffer.shared_instance_array"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009713, VkglTestCase_009713_1, VkglTestCase_009713_2);

#define VkglTestCase_009714_1 "dEQP-GLES31.functional.ssbo.layout.single_"
#define VkglTestCase_009714_2 "nested_struct_array.per_block_buffer.packed"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009714, VkglTestCase_009714_1, VkglTestCase_009714_2);

#define VkglTestCase_009715_1 "dEQP-GLES31.functional.ssbo.layout.single_nested_s"
#define VkglTestCase_009715_2 "truct_array.per_block_buffer.packed_instance_array"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009715, VkglTestCase_009715_1, VkglTestCase_009715_2);

#define VkglTestCase_009716_1 "dEQP-GLES31.functional.ssbo.layout.single_"
#define VkglTestCase_009716_2 "nested_struct_array.per_block_buffer.std140"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009716, VkglTestCase_009716_1, VkglTestCase_009716_2);

#define VkglTestCase_009717_1 "dEQP-GLES31.functional.ssbo.layout.single_nested_s"
#define VkglTestCase_009717_2 "truct_array.per_block_buffer.std140_instance_array"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009717, VkglTestCase_009717_1, VkglTestCase_009717_2);

#define VkglTestCase_009718_1 "dEQP-GLES31.functional.ssbo.layout.single_"
#define VkglTestCase_009718_2 "nested_struct_array.per_block_buffer.std430"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009718, VkglTestCase_009718_1, VkglTestCase_009718_2);

#define VkglTestCase_009719_1 "dEQP-GLES31.functional.ssbo.layout.single_nested_s"
#define VkglTestCase_009719_2 "truct_array.per_block_buffer.std430_instance_array"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009719, VkglTestCase_009719_1, VkglTestCase_009719_2);
