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

#define VkglTestCase_009932_1 "dEQP-GLES31.functional.ssbo.layout.mul"
#define VkglTestCase_009932_2 "ti_basic_types.per_block_buffer.shared"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009932, VkglTestCase_009932_1, VkglTestCase_009932_2);

#define VkglTestCase_009933_1 "dEQP-GLES31.functional.ssbo.layout.multi_basi"
#define VkglTestCase_009933_2 "c_types.per_block_buffer.shared_instance_array"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009933, VkglTestCase_009933_1, VkglTestCase_009933_2);

#define VkglTestCase_009934_1 "dEQP-GLES31.functional.ssbo.layout.mul"
#define VkglTestCase_009934_2 "ti_basic_types.per_block_buffer.packed"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009934, VkglTestCase_009934_1, VkglTestCase_009934_2);

#define VkglTestCase_009935_1 "dEQP-GLES31.functional.ssbo.layout.multi_basi"
#define VkglTestCase_009935_2 "c_types.per_block_buffer.packed_instance_array"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009935, VkglTestCase_009935_1, VkglTestCase_009935_2);

#define VkglTestCase_009936_1 "dEQP-GLES31.functional.ssbo.layout.mul"
#define VkglTestCase_009936_2 "ti_basic_types.per_block_buffer.std140"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009936, VkglTestCase_009936_1, VkglTestCase_009936_2);

#define VkglTestCase_009937_1 "dEQP-GLES31.functional.ssbo.layout.multi_basi"
#define VkglTestCase_009937_2 "c_types.per_block_buffer.std140_instance_array"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009937, VkglTestCase_009937_1, VkglTestCase_009937_2);

#define VkglTestCase_009938_1 "dEQP-GLES31.functional.ssbo.layout.mul"
#define VkglTestCase_009938_2 "ti_basic_types.per_block_buffer.std430"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009938, VkglTestCase_009938_1, VkglTestCase_009938_2);

#define VkglTestCase_009939_1 "dEQP-GLES31.functional.ssbo.layout.multi_basi"
#define VkglTestCase_009939_2 "c_types.per_block_buffer.std430_instance_array"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009939, VkglTestCase_009939_1, VkglTestCase_009939_2);
