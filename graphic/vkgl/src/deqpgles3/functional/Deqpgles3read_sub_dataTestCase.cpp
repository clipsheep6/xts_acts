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

#define VkglTestCase_000265_1 "dEQP-GLES3.functional.buffer"
#define VkglTestCase_000265_2 ".map.read.sub_data.array_full"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000265, VkglTestCase_000265_1, VkglTestCase_000265_2);

#define VkglTestCase_000266_1 "dEQP-GLES3.functional.buffer.m"
#define VkglTestCase_000266_2 "ap.read.sub_data.array_partial"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000266, VkglTestCase_000266_1, VkglTestCase_000266_2);

#define VkglTestCase_000267_1 "dEQP-GLES3.functional.buffer.m"
#define VkglTestCase_000267_2 "ap.read.sub_data.copy_read_full"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000267, VkglTestCase_000267_1, VkglTestCase_000267_2);

#define VkglTestCase_000268_1 "dEQP-GLES3.functional.buffer.map"
#define VkglTestCase_000268_2 ".read.sub_data.copy_read_partial"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000268, VkglTestCase_000268_1, VkglTestCase_000268_2);

#define VkglTestCase_000269_1 "dEQP-GLES3.functional.buffer.ma"
#define VkglTestCase_000269_2 "p.read.sub_data.copy_write_full"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000269, VkglTestCase_000269_1, VkglTestCase_000269_2);

#define VkglTestCase_000270_1 "dEQP-GLES3.functional.buffer.map"
#define VkglTestCase_000270_2 ".read.sub_data.copy_write_partial"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000270, VkglTestCase_000270_1, VkglTestCase_000270_2);

#define VkglTestCase_000271_1 "dEQP-GLES3.functional.buffer.map"
#define VkglTestCase_000271_2 ".read.sub_data.element_array_full"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000271, VkglTestCase_000271_1, VkglTestCase_000271_2);

#define VkglTestCase_000272_1 "dEQP-GLES3.functional.buffer.map.r"
#define VkglTestCase_000272_2 "ead.sub_data.element_array_partial"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000272, VkglTestCase_000272_1, VkglTestCase_000272_2);

#define VkglTestCase_000273_1 "dEQP-GLES3.functional.buffer.ma"
#define VkglTestCase_000273_2 "p.read.sub_data.pixel_pack_full"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000273, VkglTestCase_000273_1, VkglTestCase_000273_2);

#define VkglTestCase_000274_1 "dEQP-GLES3.functional.buffer.map"
#define VkglTestCase_000274_2 ".read.sub_data.pixel_pack_partial"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000274, VkglTestCase_000274_1, VkglTestCase_000274_2);

#define VkglTestCase_000275_1 "dEQP-GLES3.functional.buffer.map"
#define VkglTestCase_000275_2 ".read.sub_data.pixel_unpack_full"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000275, VkglTestCase_000275_1, VkglTestCase_000275_2);

#define VkglTestCase_000276_1 "dEQP-GLES3.functional.buffer.map."
#define VkglTestCase_000276_2 "read.sub_data.pixel_unpack_partial"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000276, VkglTestCase_000276_1, VkglTestCase_000276_2);

#define VkglTestCase_000277_1 "dEQP-GLES3.functional.buffer.map.re"
#define VkglTestCase_000277_2 "ad.sub_data.transform_feedback_full"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000277, VkglTestCase_000277_1, VkglTestCase_000277_2);

#define VkglTestCase_000278_1 "dEQP-GLES3.functional.buffer.map.rea"
#define VkglTestCase_000278_2 "d.sub_data.transform_feedback_partial"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000278, VkglTestCase_000278_1, VkglTestCase_000278_2);

#define VkglTestCase_000279_1 "dEQP-GLES3.functional.buffer."
#define VkglTestCase_000279_2 "map.read.sub_data.uniform_full"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000279, VkglTestCase_000279_1, VkglTestCase_000279_2);

#define VkglTestCase_000280_1 "dEQP-GLES3.functional.buffer.ma"
#define VkglTestCase_000280_2 "p.read.sub_data.uniform_partial"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000280, VkglTestCase_000280_1, VkglTestCase_000280_2);
