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

#define VkglTestCase_009724_1 "dEQP-GLES31.functional.ssbo.layout.unsi"
#define VkglTestCase_009724_2 "zed_struct_array.per_block_buffer.shared"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009724, VkglTestCase_009724_1, VkglTestCase_009724_2);

#define VkglTestCase_009725_1 "dEQP-GLES31.functional.ssbo.layout.unsized_stru"
#define VkglTestCase_009725_2 "ct_array.per_block_buffer.shared_instance_array"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009725, VkglTestCase_009725_1, VkglTestCase_009725_2);

#define VkglTestCase_009726_1 "dEQP-GLES31.functional.ssbo.layout.unsi"
#define VkglTestCase_009726_2 "zed_struct_array.per_block_buffer.packed"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009726, VkglTestCase_009726_1, VkglTestCase_009726_2);

#define VkglTestCase_009727_1 "dEQP-GLES31.functional.ssbo.layout.unsized_stru"
#define VkglTestCase_009727_2 "ct_array.per_block_buffer.packed_instance_array"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009727, VkglTestCase_009727_1, VkglTestCase_009727_2);

#define VkglTestCase_009728_1 "dEQP-GLES31.functional.ssbo.layout.unsi"
#define VkglTestCase_009728_2 "zed_struct_array.per_block_buffer.std140"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009728, VkglTestCase_009728_1, VkglTestCase_009728_2);

#define VkglTestCase_009729_1 "dEQP-GLES31.functional.ssbo.layout.unsized_stru"
#define VkglTestCase_009729_2 "ct_array.per_block_buffer.std140_instance_array"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009729, VkglTestCase_009729_1, VkglTestCase_009729_2);

#define VkglTestCase_009730_1 "dEQP-GLES31.functional.ssbo.layout.unsi"
#define VkglTestCase_009730_2 "zed_struct_array.per_block_buffer.std430"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009730, VkglTestCase_009730_1, VkglTestCase_009730_2);

#define VkglTestCase_009731_1 "dEQP-GLES31.functional.ssbo.layout.unsized_stru"
#define VkglTestCase_009731_2 "ct_array.per_block_buffer.std430_instance_array"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009731, VkglTestCase_009731_1, VkglTestCase_009731_2);
