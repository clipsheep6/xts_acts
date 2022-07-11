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
#include "../ActsDeqpgles310015TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_014065_1 "dEQP-GLES31.functional.texture.texture_"
#define VkglTestCase_014065_2 "buffer.modify.bufferdata.buffer_size_512"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014065, VkglTestCase_014065_1, VkglTestCase_014065_2);

#define VkglTestCase_014066_1 "dEQP-GLES31.functional.texture.texture_"
#define VkglTestCase_014066_2 "buffer.modify.bufferdata.buffer_size_513"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014066, VkglTestCase_014066_1, VkglTestCase_014066_2);

#define VkglTestCase_014067_1 "dEQP-GLES31.functional.texture.texture_b"
#define VkglTestCase_014067_2 "uffer.modify.bufferdata.buffer_size_65536"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014067, VkglTestCase_014067_1, VkglTestCase_014067_2);

#define VkglTestCase_014068_1 "dEQP-GLES31.functional.texture.texture_b"
#define VkglTestCase_014068_2 "uffer.modify.bufferdata.buffer_size_65537"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014068, VkglTestCase_014068_1, VkglTestCase_014068_2);

#define VkglTestCase_014069_1 "dEQP-GLES31.functional.texture.texture_bu"
#define VkglTestCase_014069_2 "ffer.modify.bufferdata.buffer_size_131071"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014069, VkglTestCase_014069_1, VkglTestCase_014069_2);

#define VkglTestCase_014070_1 "dEQP-GLES31.functional.texture.texture_"
#define VkglTestCase_014070_2 "buffer.modify.bufferdata.range_size_512"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014070, VkglTestCase_014070_1, VkglTestCase_014070_2);

#define VkglTestCase_014071_1 "dEQP-GLES31.functional.texture.texture_"
#define VkglTestCase_014071_2 "buffer.modify.bufferdata.range_size_513"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014071, VkglTestCase_014071_1, VkglTestCase_014071_2);

#define VkglTestCase_014072_1 "dEQP-GLES31.functional.texture.texture_b"
#define VkglTestCase_014072_2 "uffer.modify.bufferdata.range_size_65537"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014072, VkglTestCase_014072_1, VkglTestCase_014072_2);

#define VkglTestCase_014073_1 "dEQP-GLES31.functional.texture.texture_b"
#define VkglTestCase_014073_2 "uffer.modify.bufferdata.range_size_98304"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014073, VkglTestCase_014073_1, VkglTestCase_014073_2);

#define VkglTestCase_014074_1 "dEQP-GLES31.functional.texture.texture_bu"
#define VkglTestCase_014074_2 "ffer.modify.bufferdata.offset_1_alignments"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014074, VkglTestCase_014074_1, VkglTestCase_014074_2);

#define VkglTestCase_014075_1 "dEQP-GLES31.functional.texture.texture_bu"
#define VkglTestCase_014075_2 "ffer.modify.bufferdata.offset_7_alignments"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014075, VkglTestCase_014075_1, VkglTestCase_014075_2);
