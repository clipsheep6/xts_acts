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

#define VkglTestCase_000385_1 "dEQP-GLES3.functional.buffer.map.wri"
#define VkglTestCase_000385_2 "te.render_as_vertex_array.array_full"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000385, VkglTestCase_000385_1, VkglTestCase_000385_2);

#define VkglTestCase_000386_1 "dEQP-GLES3.functional.buffer.map.writ"
#define VkglTestCase_000386_2 "e.render_as_vertex_array.array_partial"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000386, VkglTestCase_000386_1, VkglTestCase_000386_2);

#define VkglTestCase_000387_1 "dEQP-GLES3.functional.buffer.map.write"
#define VkglTestCase_000387_2 ".render_as_vertex_array.copy_read_full"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000387, VkglTestCase_000387_1, VkglTestCase_000387_2);

#define VkglTestCase_000388_1 "dEQP-GLES3.functional.buffer.map.write."
#define VkglTestCase_000388_2 "render_as_vertex_array.copy_read_partial"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000388, VkglTestCase_000388_1, VkglTestCase_000388_2);

#define VkglTestCase_000389_1 "dEQP-GLES3.functional.buffer.map.write"
#define VkglTestCase_000389_2 ".render_as_vertex_array.copy_write_full"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000389, VkglTestCase_000389_1, VkglTestCase_000389_2);

#define VkglTestCase_000390_1 "dEQP-GLES3.functional.buffer.map.write.r"
#define VkglTestCase_000390_2 "ender_as_vertex_array.copy_write_partial"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000390, VkglTestCase_000390_1, VkglTestCase_000390_2);

#define VkglTestCase_000391_1 "dEQP-GLES3.functional.buffer.map.write.r"
#define VkglTestCase_000391_2 "ender_as_vertex_array.element_array_full"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000391, VkglTestCase_000391_1, VkglTestCase_000391_2);

#define VkglTestCase_000392_1 "dEQP-GLES3.functional.buffer.map.write.re"
#define VkglTestCase_000392_2 "nder_as_vertex_array.element_array_partial"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000392, VkglTestCase_000392_1, VkglTestCase_000392_2);

#define VkglTestCase_000393_1 "dEQP-GLES3.functional.buffer.map.write"
#define VkglTestCase_000393_2 ".render_as_vertex_array.pixel_pack_full"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000393, VkglTestCase_000393_1, VkglTestCase_000393_2);

#define VkglTestCase_000394_1 "dEQP-GLES3.functional.buffer.map.write.r"
#define VkglTestCase_000394_2 "ender_as_vertex_array.pixel_pack_partial"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000394, VkglTestCase_000394_1, VkglTestCase_000394_2);

#define VkglTestCase_000395_1 "dEQP-GLES3.functional.buffer.map.write."
#define VkglTestCase_000395_2 "render_as_vertex_array.pixel_unpack_full"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000395, VkglTestCase_000395_1, VkglTestCase_000395_2);

#define VkglTestCase_000396_1 "dEQP-GLES3.functional.buffer.map.write.re"
#define VkglTestCase_000396_2 "nder_as_vertex_array.pixel_unpack_partial"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000396, VkglTestCase_000396_1, VkglTestCase_000396_2);

#define VkglTestCase_000397_1 "dEQP-GLES3.functional.buffer.map.write.ren"
#define VkglTestCase_000397_2 "der_as_vertex_array.transform_feedback_full"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000397, VkglTestCase_000397_1, VkglTestCase_000397_2);

#define VkglTestCase_000398_1 "dEQP-GLES3.functional.buffer.map.write.rende"
#define VkglTestCase_000398_2 "r_as_vertex_array.transform_feedback_partial"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000398, VkglTestCase_000398_1, VkglTestCase_000398_2);

#define VkglTestCase_000399_1 "dEQP-GLES3.functional.buffer.map.writ"
#define VkglTestCase_000399_2 "e.render_as_vertex_array.uniform_full"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000399, VkglTestCase_000399_1, VkglTestCase_000399_2);

#define VkglTestCase_000400_1 "dEQP-GLES3.functional.buffer.map.write"
#define VkglTestCase_000400_2 ".render_as_vertex_array.uniform_partial"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000400, VkglTestCase_000400_1, VkglTestCase_000400_2);
