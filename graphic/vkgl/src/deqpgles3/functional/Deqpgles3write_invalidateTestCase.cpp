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

#define VkglTestCase_000489_1 "dEQP-GLES3.functional.buffer.map"
#define VkglTestCase_000489_2 ".write.invalidate.array_write_all"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000489, VkglTestCase_000489_1, VkglTestCase_000489_2);

#define VkglTestCase_000490_1 "dEQP-GLES3.functional.buffer.map.w"
#define VkglTestCase_000490_2 "rite.invalidate.array_write_partial"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000490, VkglTestCase_000490_1, VkglTestCase_000490_2);

#define VkglTestCase_000491_1 "dEQP-GLES3.functional.buffer.map.w"
#define VkglTestCase_000491_2 "rite.invalidate.copy_read_write_all"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000491, VkglTestCase_000491_1, VkglTestCase_000491_2);

#define VkglTestCase_000492_1 "dEQP-GLES3.functional.buffer.map.wri"
#define VkglTestCase_000492_2 "te.invalidate.copy_read_write_partial"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000492, VkglTestCase_000492_1, VkglTestCase_000492_2);

#define VkglTestCase_000493_1 "dEQP-GLES3.functional.buffer.map.wr"
#define VkglTestCase_000493_2 "ite.invalidate.copy_write_write_all"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000493, VkglTestCase_000493_1, VkglTestCase_000493_2);

#define VkglTestCase_000494_1 "dEQP-GLES3.functional.buffer.map.writ"
#define VkglTestCase_000494_2 "e.invalidate.copy_write_write_partial"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000494, VkglTestCase_000494_1, VkglTestCase_000494_2);

#define VkglTestCase_000495_1 "dEQP-GLES3.functional.buffer.map.wri"
#define VkglTestCase_000495_2 "te.invalidate.element_array_write_all"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000495, VkglTestCase_000495_1, VkglTestCase_000495_2);

#define VkglTestCase_000496_1 "dEQP-GLES3.functional.buffer.map.write"
#define VkglTestCase_000496_2 ".invalidate.element_array_write_partial"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000496, VkglTestCase_000496_1, VkglTestCase_000496_2);

#define VkglTestCase_000497_1 "dEQP-GLES3.functional.buffer.map.wr"
#define VkglTestCase_000497_2 "ite.invalidate.pixel_pack_write_all"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000497, VkglTestCase_000497_1, VkglTestCase_000497_2);

#define VkglTestCase_000498_1 "dEQP-GLES3.functional.buffer.map.writ"
#define VkglTestCase_000498_2 "e.invalidate.pixel_pack_write_partial"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000498, VkglTestCase_000498_1, VkglTestCase_000498_2);

#define VkglTestCase_000499_1 "dEQP-GLES3.functional.buffer.map.wri"
#define VkglTestCase_000499_2 "te.invalidate.pixel_unpack_write_all"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000499, VkglTestCase_000499_1, VkglTestCase_000499_2);

#define VkglTestCase_000500_1 "dEQP-GLES3.functional.buffer.map.write"
#define VkglTestCase_000500_2 ".invalidate.pixel_unpack_write_partial"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000500, VkglTestCase_000500_1, VkglTestCase_000500_2);

#define VkglTestCase_000501_1 "dEQP-GLES3.functional.buffer.map.write."
#define VkglTestCase_000501_2 "invalidate.transform_feedback_write_all"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000501, VkglTestCase_000501_1, VkglTestCase_000501_2);

#define VkglTestCase_000502_1 "dEQP-GLES3.functional.buffer.map.write.in"
#define VkglTestCase_000502_2 "validate.transform_feedback_write_partial"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000502, VkglTestCase_000502_1, VkglTestCase_000502_2);

#define VkglTestCase_000503_1 "dEQP-GLES3.functional.buffer.map."
#define VkglTestCase_000503_2 "write.invalidate.uniform_write_all"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000503, VkglTestCase_000503_1, VkglTestCase_000503_2);

#define VkglTestCase_000504_1 "dEQP-GLES3.functional.buffer.map.wr"
#define VkglTestCase_000504_2 "ite.invalidate.uniform_write_partial"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000504, VkglTestCase_000504_1, VkglTestCase_000504_2);
