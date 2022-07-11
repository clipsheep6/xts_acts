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

#define VkglTestCase_000537_1 "dEQP-GLES3.functional.buffer."
#define VkglTestCase_000537_2 "map.write.unsynchronized.array"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000537, VkglTestCase_000537_1, VkglTestCase_000537_2);

#define VkglTestCase_000538_1 "dEQP-GLES3.functional.buffer.ma"
#define VkglTestCase_000538_2 "p.write.unsynchronized.copy_read"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000538, VkglTestCase_000538_1, VkglTestCase_000538_2);

#define VkglTestCase_000539_1 "dEQP-GLES3.functional.buffer.map"
#define VkglTestCase_000539_2 ".write.unsynchronized.copy_write"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000539, VkglTestCase_000539_1, VkglTestCase_000539_2);

#define VkglTestCase_000540_1 "dEQP-GLES3.functional.buffer.map."
#define VkglTestCase_000540_2 "write.unsynchronized.element_array"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000540, VkglTestCase_000540_1, VkglTestCase_000540_2);

#define VkglTestCase_000541_1 "dEQP-GLES3.functional.buffer.map"
#define VkglTestCase_000541_2 ".write.unsynchronized.pixel_pack"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000541, VkglTestCase_000541_1, VkglTestCase_000541_2);

#define VkglTestCase_000542_1 "dEQP-GLES3.functional.buffer.map."
#define VkglTestCase_000542_2 "write.unsynchronized.pixel_unpack"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000542, VkglTestCase_000542_1, VkglTestCase_000542_2);

#define VkglTestCase_000543_1 "dEQP-GLES3.functional.buffer.map.wri"
#define VkglTestCase_000543_2 "te.unsynchronized.transform_feedback"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000543, VkglTestCase_000543_1, VkglTestCase_000543_2);

#define VkglTestCase_000544_1 "dEQP-GLES3.functional.buffer.m"
#define VkglTestCase_000544_2 "ap.write.unsynchronized.uniform"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000544, VkglTestCase_000544_1, VkglTestCase_000544_2);
