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

#define VkglTestCase_000369_1 "dEQP-GLES3.functional.buffer."
#define VkglTestCase_000369_2 "map.write.map_read.array_full"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000369, VkglTestCase_000369_1, VkglTestCase_000369_2);

#define VkglTestCase_000370_1 "dEQP-GLES3.functional.buffer.m"
#define VkglTestCase_000370_2 "ap.write.map_read.array_partial"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000370, VkglTestCase_000370_1, VkglTestCase_000370_2);

#define VkglTestCase_000371_1 "dEQP-GLES3.functional.buffer.ma"
#define VkglTestCase_000371_2 "p.write.map_read.copy_read_full"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000371, VkglTestCase_000371_1, VkglTestCase_000371_2);

#define VkglTestCase_000372_1 "dEQP-GLES3.functional.buffer.map"
#define VkglTestCase_000372_2 ".write.map_read.copy_read_partial"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000372, VkglTestCase_000372_1, VkglTestCase_000372_2);

#define VkglTestCase_000373_1 "dEQP-GLES3.functional.buffer.ma"
#define VkglTestCase_000373_2 "p.write.map_read.copy_write_full"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000373, VkglTestCase_000373_1, VkglTestCase_000373_2);

#define VkglTestCase_000374_1 "dEQP-GLES3.functional.buffer.map."
#define VkglTestCase_000374_2 "write.map_read.copy_write_partial"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000374, VkglTestCase_000374_1, VkglTestCase_000374_2);

#define VkglTestCase_000375_1 "dEQP-GLES3.functional.buffer.map."
#define VkglTestCase_000375_2 "write.map_read.element_array_full"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000375, VkglTestCase_000375_1, VkglTestCase_000375_2);

#define VkglTestCase_000376_1 "dEQP-GLES3.functional.buffer.map.w"
#define VkglTestCase_000376_2 "rite.map_read.element_array_partial"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000376, VkglTestCase_000376_1, VkglTestCase_000376_2);

#define VkglTestCase_000377_1 "dEQP-GLES3.functional.buffer.ma"
#define VkglTestCase_000377_2 "p.write.map_read.pixel_pack_full"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000377, VkglTestCase_000377_1, VkglTestCase_000377_2);

#define VkglTestCase_000378_1 "dEQP-GLES3.functional.buffer.map."
#define VkglTestCase_000378_2 "write.map_read.pixel_pack_partial"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000378, VkglTestCase_000378_1, VkglTestCase_000378_2);

#define VkglTestCase_000379_1 "dEQP-GLES3.functional.buffer.map"
#define VkglTestCase_000379_2 ".write.map_read.pixel_unpack_full"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000379, VkglTestCase_000379_1, VkglTestCase_000379_2);

#define VkglTestCase_000380_1 "dEQP-GLES3.functional.buffer.map.w"
#define VkglTestCase_000380_2 "rite.map_read.pixel_unpack_partial"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000380, VkglTestCase_000380_1, VkglTestCase_000380_2);

#define VkglTestCase_000381_1 "dEQP-GLES3.functional.buffer.map.wr"
#define VkglTestCase_000381_2 "ite.map_read.transform_feedback_full"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000381, VkglTestCase_000381_1, VkglTestCase_000381_2);

#define VkglTestCase_000382_1 "dEQP-GLES3.functional.buffer.map.writ"
#define VkglTestCase_000382_2 "e.map_read.transform_feedback_partial"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000382, VkglTestCase_000382_1, VkglTestCase_000382_2);

#define VkglTestCase_000383_1 "dEQP-GLES3.functional.buffer.m"
#define VkglTestCase_000383_2 "ap.write.map_read.uniform_full"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000383, VkglTestCase_000383_1, VkglTestCase_000383_2);

#define VkglTestCase_000384_1 "dEQP-GLES3.functional.buffer.ma"
#define VkglTestCase_000384_2 "p.write.map_read.uniform_partial"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000384, VkglTestCase_000384_1, VkglTestCase_000384_2);
