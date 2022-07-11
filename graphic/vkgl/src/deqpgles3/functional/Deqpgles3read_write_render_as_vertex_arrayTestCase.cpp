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

#define VkglTestCase_000561_1 "dEQP-GLES3.functional.buffer.map.read_"
#define VkglTestCase_000561_2 "write.render_as_vertex_array.array_full"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000561, VkglTestCase_000561_1, VkglTestCase_000561_2);

#define VkglTestCase_000562_1 "dEQP-GLES3.functional.buffer.map.read_wr"
#define VkglTestCase_000562_2 "ite.render_as_vertex_array.array_partial"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000562, VkglTestCase_000562_1, VkglTestCase_000562_2);

#define VkglTestCase_000563_1 "dEQP-GLES3.functional.buffer.map.read_wr"
#define VkglTestCase_000563_2 "ite.render_as_vertex_array.copy_read_full"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000563, VkglTestCase_000563_1, VkglTestCase_000563_2);

#define VkglTestCase_000564_1 "dEQP-GLES3.functional.buffer.map.read_writ"
#define VkglTestCase_000564_2 "e.render_as_vertex_array.copy_read_partial"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000564, VkglTestCase_000564_1, VkglTestCase_000564_2);

#define VkglTestCase_000565_1 "dEQP-GLES3.functional.buffer.map.read_wri"
#define VkglTestCase_000565_2 "te.render_as_vertex_array.copy_write_full"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000565, VkglTestCase_000565_1, VkglTestCase_000565_2);

#define VkglTestCase_000566_1 "dEQP-GLES3.functional.buffer.map.read_writ"
#define VkglTestCase_000566_2 "e.render_as_vertex_array.copy_write_partial"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000566, VkglTestCase_000566_1, VkglTestCase_000566_2);

#define VkglTestCase_000567_1 "dEQP-GLES3.functional.buffer.map.read_writ"
#define VkglTestCase_000567_2 "e.render_as_vertex_array.element_array_full"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000567, VkglTestCase_000567_1, VkglTestCase_000567_2);

#define VkglTestCase_000568_1 "dEQP-GLES3.functional.buffer.map.read_write."
#define VkglTestCase_000568_2 "render_as_vertex_array.element_array_partial"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000568, VkglTestCase_000568_1, VkglTestCase_000568_2);

#define VkglTestCase_000569_1 "dEQP-GLES3.functional.buffer.map.read_wri"
#define VkglTestCase_000569_2 "te.render_as_vertex_array.pixel_pack_full"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000569, VkglTestCase_000569_1, VkglTestCase_000569_2);

#define VkglTestCase_000570_1 "dEQP-GLES3.functional.buffer.map.read_writ"
#define VkglTestCase_000570_2 "e.render_as_vertex_array.pixel_pack_partial"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000570, VkglTestCase_000570_1, VkglTestCase_000570_2);

#define VkglTestCase_000571_1 "dEQP-GLES3.functional.buffer.map.read_writ"
#define VkglTestCase_000571_2 "e.render_as_vertex_array.pixel_unpack_full"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000571, VkglTestCase_000571_1, VkglTestCase_000571_2);

#define VkglTestCase_000572_1 "dEQP-GLES3.functional.buffer.map.read_write"
#define VkglTestCase_000572_2 ".render_as_vertex_array.pixel_unpack_partial"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000572, VkglTestCase_000572_1, VkglTestCase_000572_2);

#define VkglTestCase_000573_1 "dEQP-GLES3.functional.buffer.map.read_write.r"
#define VkglTestCase_000573_2 "ender_as_vertex_array.transform_feedback_full"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000573, VkglTestCase_000573_1, VkglTestCase_000573_2);

#define VkglTestCase_000574_1 "dEQP-GLES3.functional.buffer.map.read_write.re"
#define VkglTestCase_000574_2 "nder_as_vertex_array.transform_feedback_partial"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000574, VkglTestCase_000574_1, VkglTestCase_000574_2);

#define VkglTestCase_000575_1 "dEQP-GLES3.functional.buffer.map.read_w"
#define VkglTestCase_000575_2 "rite.render_as_vertex_array.uniform_full"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000575, VkglTestCase_000575_1, VkglTestCase_000575_2);

#define VkglTestCase_000576_1 "dEQP-GLES3.functional.buffer.map.read_wri"
#define VkglTestCase_000576_2 "te.render_as_vertex_array.uniform_partial"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000576, VkglTestCase_000576_1, VkglTestCase_000576_2);
