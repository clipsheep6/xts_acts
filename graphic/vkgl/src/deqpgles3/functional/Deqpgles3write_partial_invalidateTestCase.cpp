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

#define VkglTestCase_000505_1 "dEQP-GLES3.functional.buffer.map.wri"
#define VkglTestCase_000505_2 "te.partial_invalidate.array_write_all"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000505, VkglTestCase_000505_1, VkglTestCase_000505_2);

#define VkglTestCase_000506_1 "dEQP-GLES3.functional.buffer.map.write"
#define VkglTestCase_000506_2 ".partial_invalidate.array_write_partial"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000506, VkglTestCase_000506_1, VkglTestCase_000506_2);

#define VkglTestCase_000507_1 "dEQP-GLES3.functional.buffer.map.write"
#define VkglTestCase_000507_2 ".partial_invalidate.copy_read_write_all"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000507, VkglTestCase_000507_1, VkglTestCase_000507_2);

#define VkglTestCase_000508_1 "dEQP-GLES3.functional.buffer.map.write.p"
#define VkglTestCase_000508_2 "artial_invalidate.copy_read_write_partial"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000508, VkglTestCase_000508_1, VkglTestCase_000508_2);

#define VkglTestCase_000509_1 "dEQP-GLES3.functional.buffer.map.write."
#define VkglTestCase_000509_2 "partial_invalidate.copy_write_write_all"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000509, VkglTestCase_000509_1, VkglTestCase_000509_2);

#define VkglTestCase_000510_1 "dEQP-GLES3.functional.buffer.map.write.pa"
#define VkglTestCase_000510_2 "rtial_invalidate.copy_write_write_partial"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000510, VkglTestCase_000510_1, VkglTestCase_000510_2);

#define VkglTestCase_000511_1 "dEQP-GLES3.functional.buffer.map.write.p"
#define VkglTestCase_000511_2 "artial_invalidate.element_array_write_all"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000511, VkglTestCase_000511_1, VkglTestCase_000511_2);

#define VkglTestCase_000512_1 "dEQP-GLES3.functional.buffer.map.write.par"
#define VkglTestCase_000512_2 "tial_invalidate.element_array_write_partial"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000512, VkglTestCase_000512_1, VkglTestCase_000512_2);

#define VkglTestCase_000513_1 "dEQP-GLES3.functional.buffer.map.write."
#define VkglTestCase_000513_2 "partial_invalidate.pixel_pack_write_all"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000513, VkglTestCase_000513_1, VkglTestCase_000513_2);

#define VkglTestCase_000514_1 "dEQP-GLES3.functional.buffer.map.write.pa"
#define VkglTestCase_000514_2 "rtial_invalidate.pixel_pack_write_partial"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000514, VkglTestCase_000514_1, VkglTestCase_000514_2);

#define VkglTestCase_000515_1 "dEQP-GLES3.functional.buffer.map.write.p"
#define VkglTestCase_000515_2 "artial_invalidate.pixel_unpack_write_all"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000515, VkglTestCase_000515_1, VkglTestCase_000515_2);

#define VkglTestCase_000516_1 "dEQP-GLES3.functional.buffer.map.write.par"
#define VkglTestCase_000516_2 "tial_invalidate.pixel_unpack_write_partial"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000516, VkglTestCase_000516_1, VkglTestCase_000516_2);

#define VkglTestCase_000517_1 "dEQP-GLES3.functional.buffer.map.write.part"
#define VkglTestCase_000517_2 "ial_invalidate.transform_feedback_write_all"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000517, VkglTestCase_000517_1, VkglTestCase_000517_2);

#define VkglTestCase_000518_1 "dEQP-GLES3.functional.buffer.map.write.partia"
#define VkglTestCase_000518_2 "l_invalidate.transform_feedback_write_partial"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000518, VkglTestCase_000518_1, VkglTestCase_000518_2);

#define VkglTestCase_000519_1 "dEQP-GLES3.functional.buffer.map.writ"
#define VkglTestCase_000519_2 "e.partial_invalidate.uniform_write_all"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000519, VkglTestCase_000519_1, VkglTestCase_000519_2);

#define VkglTestCase_000520_1 "dEQP-GLES3.functional.buffer.map.write."
#define VkglTestCase_000520_2 "partial_invalidate.uniform_write_partial"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000520, VkglTestCase_000520_1, VkglTestCase_000520_2);
