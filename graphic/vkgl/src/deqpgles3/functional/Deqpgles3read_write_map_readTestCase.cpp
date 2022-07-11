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

#define VkglTestCase_000545_1 "dEQP-GLES3.functional.buffer.ma"
#define VkglTestCase_000545_2 "p.read_write.map_read.array_full"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000545, VkglTestCase_000545_1, VkglTestCase_000545_2);

#define VkglTestCase_000546_1 "dEQP-GLES3.functional.buffer.map."
#define VkglTestCase_000546_2 "read_write.map_read.array_partial"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000546, VkglTestCase_000546_1, VkglTestCase_000546_2);

#define VkglTestCase_000547_1 "dEQP-GLES3.functional.buffer.map."
#define VkglTestCase_000547_2 "read_write.map_read.copy_read_full"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000547, VkglTestCase_000547_1, VkglTestCase_000547_2);

#define VkglTestCase_000548_1 "dEQP-GLES3.functional.buffer.map.re"
#define VkglTestCase_000548_2 "ad_write.map_read.copy_read_partial"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000548, VkglTestCase_000548_1, VkglTestCase_000548_2);

#define VkglTestCase_000549_1 "dEQP-GLES3.functional.buffer.map.r"
#define VkglTestCase_000549_2 "ead_write.map_read.copy_write_full"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000549, VkglTestCase_000549_1, VkglTestCase_000549_2);

#define VkglTestCase_000550_1 "dEQP-GLES3.functional.buffer.map.re"
#define VkglTestCase_000550_2 "ad_write.map_read.copy_write_partial"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000550, VkglTestCase_000550_1, VkglTestCase_000550_2);

#define VkglTestCase_000551_1 "dEQP-GLES3.functional.buffer.map.re"
#define VkglTestCase_000551_2 "ad_write.map_read.element_array_full"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000551, VkglTestCase_000551_1, VkglTestCase_000551_2);

#define VkglTestCase_000552_1 "dEQP-GLES3.functional.buffer.map.read"
#define VkglTestCase_000552_2 "_write.map_read.element_array_partial"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000552, VkglTestCase_000552_1, VkglTestCase_000552_2);

#define VkglTestCase_000553_1 "dEQP-GLES3.functional.buffer.map.r"
#define VkglTestCase_000553_2 "ead_write.map_read.pixel_pack_full"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000553, VkglTestCase_000553_1, VkglTestCase_000553_2);

#define VkglTestCase_000554_1 "dEQP-GLES3.functional.buffer.map.re"
#define VkglTestCase_000554_2 "ad_write.map_read.pixel_pack_partial"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000554, VkglTestCase_000554_1, VkglTestCase_000554_2);

#define VkglTestCase_000555_1 "dEQP-GLES3.functional.buffer.map.re"
#define VkglTestCase_000555_2 "ad_write.map_read.pixel_unpack_full"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000555, VkglTestCase_000555_1, VkglTestCase_000555_2);

#define VkglTestCase_000556_1 "dEQP-GLES3.functional.buffer.map.rea"
#define VkglTestCase_000556_2 "d_write.map_read.pixel_unpack_partial"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000556, VkglTestCase_000556_1, VkglTestCase_000556_2);

#define VkglTestCase_000557_1 "dEQP-GLES3.functional.buffer.map.read_"
#define VkglTestCase_000557_2 "write.map_read.transform_feedback_full"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000557, VkglTestCase_000557_1, VkglTestCase_000557_2);

#define VkglTestCase_000558_1 "dEQP-GLES3.functional.buffer.map.read_w"
#define VkglTestCase_000558_2 "rite.map_read.transform_feedback_partial"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000558, VkglTestCase_000558_1, VkglTestCase_000558_2);

#define VkglTestCase_000559_1 "dEQP-GLES3.functional.buffer.map"
#define VkglTestCase_000559_2 ".read_write.map_read.uniform_full"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000559, VkglTestCase_000559_1, VkglTestCase_000559_2);

#define VkglTestCase_000560_1 "dEQP-GLES3.functional.buffer.map.r"
#define VkglTestCase_000560_2 "ead_write.map_read.uniform_partial"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000560, VkglTestCase_000560_1, VkglTestCase_000560_2);
