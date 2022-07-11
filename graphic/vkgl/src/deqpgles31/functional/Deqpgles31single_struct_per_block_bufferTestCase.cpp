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

#define VkglTestCase_009676_1 "dEQP-GLES31.functional.ssbo.layout.s"
#define VkglTestCase_009676_2 "ingle_struct.per_block_buffer.shared"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009676, VkglTestCase_009676_1, VkglTestCase_009676_2);

#define VkglTestCase_009677_1 "dEQP-GLES31.functional.ssbo.layout.single_s"
#define VkglTestCase_009677_2 "truct.per_block_buffer.shared_instance_array"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009677, VkglTestCase_009677_1, VkglTestCase_009677_2);

#define VkglTestCase_009678_1 "dEQP-GLES31.functional.ssbo.layout.s"
#define VkglTestCase_009678_2 "ingle_struct.per_block_buffer.packed"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009678, VkglTestCase_009678_1, VkglTestCase_009678_2);

#define VkglTestCase_009679_1 "dEQP-GLES31.functional.ssbo.layout.single_s"
#define VkglTestCase_009679_2 "truct.per_block_buffer.packed_instance_array"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009679, VkglTestCase_009679_1, VkglTestCase_009679_2);

#define VkglTestCase_009680_1 "dEQP-GLES31.functional.ssbo.layout.s"
#define VkglTestCase_009680_2 "ingle_struct.per_block_buffer.std140"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009680, VkglTestCase_009680_1, VkglTestCase_009680_2);

#define VkglTestCase_009681_1 "dEQP-GLES31.functional.ssbo.layout.single_s"
#define VkglTestCase_009681_2 "truct.per_block_buffer.std140_instance_array"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009681, VkglTestCase_009681_1, VkglTestCase_009681_2);

#define VkglTestCase_009682_1 "dEQP-GLES31.functional.ssbo.layout.s"
#define VkglTestCase_009682_2 "ingle_struct.per_block_buffer.std430"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009682, VkglTestCase_009682_1, VkglTestCase_009682_2);

#define VkglTestCase_009683_1 "dEQP-GLES31.functional.ssbo.layout.single_s"
#define VkglTestCase_009683_2 "truct.per_block_buffer.std430_instance_array"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009683, VkglTestCase_009683_1, VkglTestCase_009683_2);
