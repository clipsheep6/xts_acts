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
#include "../Deqpgles3BaseFunc.h"
#include "../ActsDeqpgles30001TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_000281_1 "dEQP-GLES3.functional.buffer."
#define VkglTestCase_000281_2 "map.read.map_write.array_full"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000281, VkglTestCase_000281_1, VkglTestCase_000281_2);

#define VkglTestCase_000282_1 "dEQP-GLES3.functional.buffer.m"
#define VkglTestCase_000282_2 "ap.read.map_write.array_partial"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000282, VkglTestCase_000282_1, VkglTestCase_000282_2);

#define VkglTestCase_000283_1 "dEQP-GLES3.functional.buffer.ma"
#define VkglTestCase_000283_2 "p.read.map_write.copy_read_full"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000283, VkglTestCase_000283_1, VkglTestCase_000283_2);

#define VkglTestCase_000284_1 "dEQP-GLES3.functional.buffer.map"
#define VkglTestCase_000284_2 ".read.map_write.copy_read_partial"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000284, VkglTestCase_000284_1, VkglTestCase_000284_2);

#define VkglTestCase_000285_1 "dEQP-GLES3.functional.buffer.ma"
#define VkglTestCase_000285_2 "p.read.map_write.copy_write_full"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000285, VkglTestCase_000285_1, VkglTestCase_000285_2);

#define VkglTestCase_000286_1 "dEQP-GLES3.functional.buffer.map."
#define VkglTestCase_000286_2 "read.map_write.copy_write_partial"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000286, VkglTestCase_000286_1, VkglTestCase_000286_2);

#define VkglTestCase_000287_1 "dEQP-GLES3.functional.buffer.map."
#define VkglTestCase_000287_2 "read.map_write.element_array_full"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000287, VkglTestCase_000287_1, VkglTestCase_000287_2);

#define VkglTestCase_000288_1 "dEQP-GLES3.functional.buffer.map.r"
#define VkglTestCase_000288_2 "ead.map_write.element_array_partial"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000288, VkglTestCase_000288_1, VkglTestCase_000288_2);

#define VkglTestCase_000289_1 "dEQP-GLES3.functional.buffer.ma"
#define VkglTestCase_000289_2 "p.read.map_write.pixel_pack_full"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000289, VkglTestCase_000289_1, VkglTestCase_000289_2);

#define VkglTestCase_000290_1 "dEQP-GLES3.functional.buffer.map."
#define VkglTestCase_000290_2 "read.map_write.pixel_pack_partial"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000290, VkglTestCase_000290_1, VkglTestCase_000290_2);

#define VkglTestCase_000291_1 "dEQP-GLES3.functional.buffer.map"
#define VkglTestCase_000291_2 ".read.map_write.pixel_unpack_full"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000291, VkglTestCase_000291_1, VkglTestCase_000291_2);

#define VkglTestCase_000292_1 "dEQP-GLES3.functional.buffer.map.r"
#define VkglTestCase_000292_2 "ead.map_write.pixel_unpack_partial"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000292, VkglTestCase_000292_1, VkglTestCase_000292_2);

#define VkglTestCase_000293_1 "dEQP-GLES3.functional.buffer.map.re"
#define VkglTestCase_000293_2 "ad.map_write.transform_feedback_full"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000293, VkglTestCase_000293_1, VkglTestCase_000293_2);

#define VkglTestCase_000294_1 "dEQP-GLES3.functional.buffer.map.read"
#define VkglTestCase_000294_2 ".map_write.transform_feedback_partial"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000294, VkglTestCase_000294_1, VkglTestCase_000294_2);

#define VkglTestCase_000295_1 "dEQP-GLES3.functional.buffer.m"
#define VkglTestCase_000295_2 "ap.read.map_write.uniform_full"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000295, VkglTestCase_000295_1, VkglTestCase_000295_2);

#define VkglTestCase_000296_1 "dEQP-GLES3.functional.buffer.ma"
#define VkglTestCase_000296_2 "p.read.map_write.uniform_partial"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000296, VkglTestCase_000296_1, VkglTestCase_000296_2);
