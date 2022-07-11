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

#define VkglTestCase_009688_1 "dEQP-GLES31.functional.ssbo.layout.sing"
#define VkglTestCase_009688_2 "le_struct_array.per_block_buffer.shared"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009688, VkglTestCase_009688_1, VkglTestCase_009688_2);

#define VkglTestCase_009689_1 "dEQP-GLES31.functional.ssbo.layout.single_stru"
#define VkglTestCase_009689_2 "ct_array.per_block_buffer.shared_instance_array"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009689, VkglTestCase_009689_1, VkglTestCase_009689_2);

#define VkglTestCase_009690_1 "dEQP-GLES31.functional.ssbo.layout.sing"
#define VkglTestCase_009690_2 "le_struct_array.per_block_buffer.packed"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009690, VkglTestCase_009690_1, VkglTestCase_009690_2);

#define VkglTestCase_009691_1 "dEQP-GLES31.functional.ssbo.layout.single_stru"
#define VkglTestCase_009691_2 "ct_array.per_block_buffer.packed_instance_array"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009691, VkglTestCase_009691_1, VkglTestCase_009691_2);

#define VkglTestCase_009692_1 "dEQP-GLES31.functional.ssbo.layout.sing"
#define VkglTestCase_009692_2 "le_struct_array.per_block_buffer.std140"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009692, VkglTestCase_009692_1, VkglTestCase_009692_2);

#define VkglTestCase_009693_1 "dEQP-GLES31.functional.ssbo.layout.single_stru"
#define VkglTestCase_009693_2 "ct_array.per_block_buffer.std140_instance_array"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009693, VkglTestCase_009693_1, VkglTestCase_009693_2);

#define VkglTestCase_009694_1 "dEQP-GLES31.functional.ssbo.layout.sing"
#define VkglTestCase_009694_2 "le_struct_array.per_block_buffer.std430"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009694, VkglTestCase_009694_1, VkglTestCase_009694_2);

#define VkglTestCase_009695_1 "dEQP-GLES31.functional.ssbo.layout.single_stru"
#define VkglTestCase_009695_2 "ct_array.per_block_buffer.std430_instance_array"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009695, VkglTestCase_009695_1, VkglTestCase_009695_2);
