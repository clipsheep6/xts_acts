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

#define VkglTestCase_000577_1 "dEQP-GLES3.functional.buffer.map.read_"
#define VkglTestCase_000577_2 "write.render_as_index_array.array_full"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000577, VkglTestCase_000577_1, VkglTestCase_000577_2);

#define VkglTestCase_000578_1 "dEQP-GLES3.functional.buffer.map.read_w"
#define VkglTestCase_000578_2 "rite.render_as_index_array.array_partial"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000578, VkglTestCase_000578_1, VkglTestCase_000578_2);

#define VkglTestCase_000579_1 "dEQP-GLES3.functional.buffer.map.read_wr"
#define VkglTestCase_000579_2 "ite.render_as_index_array.copy_read_full"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000579, VkglTestCase_000579_1, VkglTestCase_000579_2);

#define VkglTestCase_000580_1 "dEQP-GLES3.functional.buffer.map.read_wri"
#define VkglTestCase_000580_2 "te.render_as_index_array.copy_read_partial"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000580, VkglTestCase_000580_1, VkglTestCase_000580_2);

#define VkglTestCase_000581_1 "dEQP-GLES3.functional.buffer.map.read_wr"
#define VkglTestCase_000581_2 "ite.render_as_index_array.copy_write_full"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000581, VkglTestCase_000581_1, VkglTestCase_000581_2);

#define VkglTestCase_000582_1 "dEQP-GLES3.functional.buffer.map.read_writ"
#define VkglTestCase_000582_2 "e.render_as_index_array.copy_write_partial"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000582, VkglTestCase_000582_1, VkglTestCase_000582_2);

#define VkglTestCase_000583_1 "dEQP-GLES3.functional.buffer.map.read_writ"
#define VkglTestCase_000583_2 "e.render_as_index_array.element_array_full"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000583, VkglTestCase_000583_1, VkglTestCase_000583_2);

#define VkglTestCase_000584_1 "dEQP-GLES3.functional.buffer.map.read_write"
#define VkglTestCase_000584_2 ".render_as_index_array.element_array_partial"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000584, VkglTestCase_000584_1, VkglTestCase_000584_2);

#define VkglTestCase_000585_1 "dEQP-GLES3.functional.buffer.map.read_wr"
#define VkglTestCase_000585_2 "ite.render_as_index_array.pixel_pack_full"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000585, VkglTestCase_000585_1, VkglTestCase_000585_2);

#define VkglTestCase_000586_1 "dEQP-GLES3.functional.buffer.map.read_writ"
#define VkglTestCase_000586_2 "e.render_as_index_array.pixel_pack_partial"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000586, VkglTestCase_000586_1, VkglTestCase_000586_2);

#define VkglTestCase_000587_1 "dEQP-GLES3.functional.buffer.map.read_wri"
#define VkglTestCase_000587_2 "te.render_as_index_array.pixel_unpack_full"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000587, VkglTestCase_000587_1, VkglTestCase_000587_2);

#define VkglTestCase_000588_1 "dEQP-GLES3.functional.buffer.map.read_write"
#define VkglTestCase_000588_2 ".render_as_index_array.pixel_unpack_partial"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000588, VkglTestCase_000588_1, VkglTestCase_000588_2);

#define VkglTestCase_000589_1 "dEQP-GLES3.functional.buffer.map.read_write."
#define VkglTestCase_000589_2 "render_as_index_array.transform_feedback_full"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000589, VkglTestCase_000589_1, VkglTestCase_000589_2);

#define VkglTestCase_000590_1 "dEQP-GLES3.functional.buffer.map.read_write.re"
#define VkglTestCase_000590_2 "nder_as_index_array.transform_feedback_partial"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000590, VkglTestCase_000590_1, VkglTestCase_000590_2);

#define VkglTestCase_000591_1 "dEQP-GLES3.functional.buffer.map.read_w"
#define VkglTestCase_000591_2 "rite.render_as_index_array.uniform_full"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000591, VkglTestCase_000591_1, VkglTestCase_000591_2);

#define VkglTestCase_000592_1 "dEQP-GLES3.functional.buffer.map.read_wr"
#define VkglTestCase_000592_2 "ite.render_as_index_array.uniform_partial"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000592, VkglTestCase_000592_1, VkglTestCase_000592_2);
