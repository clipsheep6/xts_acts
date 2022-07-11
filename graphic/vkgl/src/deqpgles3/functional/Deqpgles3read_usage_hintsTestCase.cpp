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

#define VkglTestCase_000297_1 "dEQP-GLES3.functional.buffer.map."
#define VkglTestCase_000297_2 "read.usage_hints.array_stream_draw"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000297, VkglTestCase_000297_1, VkglTestCase_000297_2);

#define VkglTestCase_000298_1 "dEQP-GLES3.functional.buffer.map."
#define VkglTestCase_000298_2 "read.usage_hints.array_stream_read"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000298, VkglTestCase_000298_1, VkglTestCase_000298_2);

#define VkglTestCase_000299_1 "dEQP-GLES3.functional.buffer.map."
#define VkglTestCase_000299_2 "read.usage_hints.array_stream_copy"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000299, VkglTestCase_000299_1, VkglTestCase_000299_2);

#define VkglTestCase_000300_1 "dEQP-GLES3.functional.buffer.map."
#define VkglTestCase_000300_2 "read.usage_hints.array_static_draw"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000300, VkglTestCase_000300_1, VkglTestCase_000300_2);

#define VkglTestCase_000301_1 "dEQP-GLES3.functional.buffer.map."
#define VkglTestCase_000301_2 "read.usage_hints.array_static_read"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000301, VkglTestCase_000301_1, VkglTestCase_000301_2);

#define VkglTestCase_000302_1 "dEQP-GLES3.functional.buffer.map."
#define VkglTestCase_000302_2 "read.usage_hints.array_static_copy"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000302, VkglTestCase_000302_1, VkglTestCase_000302_2);

#define VkglTestCase_000303_1 "dEQP-GLES3.functional.buffer.map.r"
#define VkglTestCase_000303_2 "ead.usage_hints.array_dynamic_draw"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000303, VkglTestCase_000303_1, VkglTestCase_000303_2);

#define VkglTestCase_000304_1 "dEQP-GLES3.functional.buffer.map.r"
#define VkglTestCase_000304_2 "ead.usage_hints.array_dynamic_read"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000304, VkglTestCase_000304_1, VkglTestCase_000304_2);

#define VkglTestCase_000305_1 "dEQP-GLES3.functional.buffer.map.r"
#define VkglTestCase_000305_2 "ead.usage_hints.array_dynamic_copy"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000305, VkglTestCase_000305_1, VkglTestCase_000305_2);

#define VkglTestCase_000306_1 "dEQP-GLES3.functional.buffer.map.re"
#define VkglTestCase_000306_2 "ad.usage_hints.copy_read_stream_draw"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000306, VkglTestCase_000306_1, VkglTestCase_000306_2);

#define VkglTestCase_000307_1 "dEQP-GLES3.functional.buffer.map.re"
#define VkglTestCase_000307_2 "ad.usage_hints.copy_read_stream_read"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000307, VkglTestCase_000307_1, VkglTestCase_000307_2);

#define VkglTestCase_000308_1 "dEQP-GLES3.functional.buffer.map.re"
#define VkglTestCase_000308_2 "ad.usage_hints.copy_read_stream_copy"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000308, VkglTestCase_000308_1, VkglTestCase_000308_2);

#define VkglTestCase_000309_1 "dEQP-GLES3.functional.buffer.map.re"
#define VkglTestCase_000309_2 "ad.usage_hints.copy_read_static_draw"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000309, VkglTestCase_000309_1, VkglTestCase_000309_2);

#define VkglTestCase_000310_1 "dEQP-GLES3.functional.buffer.map.re"
#define VkglTestCase_000310_2 "ad.usage_hints.copy_read_static_read"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000310, VkglTestCase_000310_1, VkglTestCase_000310_2);

#define VkglTestCase_000311_1 "dEQP-GLES3.functional.buffer.map.re"
#define VkglTestCase_000311_2 "ad.usage_hints.copy_read_static_copy"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000311, VkglTestCase_000311_1, VkglTestCase_000311_2);

#define VkglTestCase_000312_1 "dEQP-GLES3.functional.buffer.map.rea"
#define VkglTestCase_000312_2 "d.usage_hints.copy_read_dynamic_draw"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000312, VkglTestCase_000312_1, VkglTestCase_000312_2);

#define VkglTestCase_000313_1 "dEQP-GLES3.functional.buffer.map.rea"
#define VkglTestCase_000313_2 "d.usage_hints.copy_read_dynamic_read"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000313, VkglTestCase_000313_1, VkglTestCase_000313_2);

#define VkglTestCase_000314_1 "dEQP-GLES3.functional.buffer.map.rea"
#define VkglTestCase_000314_2 "d.usage_hints.copy_read_dynamic_copy"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000314, VkglTestCase_000314_1, VkglTestCase_000314_2);

#define VkglTestCase_000315_1 "dEQP-GLES3.functional.buffer.map.rea"
#define VkglTestCase_000315_2 "d.usage_hints.copy_write_stream_draw"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000315, VkglTestCase_000315_1, VkglTestCase_000315_2);

#define VkglTestCase_000316_1 "dEQP-GLES3.functional.buffer.map.rea"
#define VkglTestCase_000316_2 "d.usage_hints.copy_write_stream_read"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000316, VkglTestCase_000316_1, VkglTestCase_000316_2);

#define VkglTestCase_000317_1 "dEQP-GLES3.functional.buffer.map.rea"
#define VkglTestCase_000317_2 "d.usage_hints.copy_write_stream_copy"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000317, VkglTestCase_000317_1, VkglTestCase_000317_2);

#define VkglTestCase_000318_1 "dEQP-GLES3.functional.buffer.map.rea"
#define VkglTestCase_000318_2 "d.usage_hints.copy_write_static_draw"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000318, VkglTestCase_000318_1, VkglTestCase_000318_2);

#define VkglTestCase_000319_1 "dEQP-GLES3.functional.buffer.map.rea"
#define VkglTestCase_000319_2 "d.usage_hints.copy_write_static_read"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000319, VkglTestCase_000319_1, VkglTestCase_000319_2);

#define VkglTestCase_000320_1 "dEQP-GLES3.functional.buffer.map.rea"
#define VkglTestCase_000320_2 "d.usage_hints.copy_write_static_copy"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000320, VkglTestCase_000320_1, VkglTestCase_000320_2);

#define VkglTestCase_000321_1 "dEQP-GLES3.functional.buffer.map.rea"
#define VkglTestCase_000321_2 "d.usage_hints.copy_write_dynamic_draw"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000321, VkglTestCase_000321_1, VkglTestCase_000321_2);

#define VkglTestCase_000322_1 "dEQP-GLES3.functional.buffer.map.rea"
#define VkglTestCase_000322_2 "d.usage_hints.copy_write_dynamic_read"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000322, VkglTestCase_000322_1, VkglTestCase_000322_2);

#define VkglTestCase_000323_1 "dEQP-GLES3.functional.buffer.map.rea"
#define VkglTestCase_000323_2 "d.usage_hints.copy_write_dynamic_copy"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000323, VkglTestCase_000323_1, VkglTestCase_000323_2);

#define VkglTestCase_000324_1 "dEQP-GLES3.functional.buffer.map.read"
#define VkglTestCase_000324_2 ".usage_hints.element_array_stream_draw"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000324, VkglTestCase_000324_1, VkglTestCase_000324_2);

#define VkglTestCase_000325_1 "dEQP-GLES3.functional.buffer.map.read"
#define VkglTestCase_000325_2 ".usage_hints.element_array_stream_read"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000325, VkglTestCase_000325_1, VkglTestCase_000325_2);

#define VkglTestCase_000326_1 "dEQP-GLES3.functional.buffer.map.read"
#define VkglTestCase_000326_2 ".usage_hints.element_array_stream_copy"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000326, VkglTestCase_000326_1, VkglTestCase_000326_2);

#define VkglTestCase_000327_1 "dEQP-GLES3.functional.buffer.map.read"
#define VkglTestCase_000327_2 ".usage_hints.element_array_static_draw"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000327, VkglTestCase_000327_1, VkglTestCase_000327_2);

#define VkglTestCase_000328_1 "dEQP-GLES3.functional.buffer.map.read"
#define VkglTestCase_000328_2 ".usage_hints.element_array_static_read"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000328, VkglTestCase_000328_1, VkglTestCase_000328_2);

#define VkglTestCase_000329_1 "dEQP-GLES3.functional.buffer.map.read"
#define VkglTestCase_000329_2 ".usage_hints.element_array_static_copy"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000329, VkglTestCase_000329_1, VkglTestCase_000329_2);

#define VkglTestCase_000330_1 "dEQP-GLES3.functional.buffer.map.read."
#define VkglTestCase_000330_2 "usage_hints.element_array_dynamic_draw"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000330, VkglTestCase_000330_1, VkglTestCase_000330_2);

#define VkglTestCase_000331_1 "dEQP-GLES3.functional.buffer.map.read."
#define VkglTestCase_000331_2 "usage_hints.element_array_dynamic_read"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000331, VkglTestCase_000331_1, VkglTestCase_000331_2);

#define VkglTestCase_000332_1 "dEQP-GLES3.functional.buffer.map.read."
#define VkglTestCase_000332_2 "usage_hints.element_array_dynamic_copy"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000332, VkglTestCase_000332_1, VkglTestCase_000332_2);

#define VkglTestCase_000333_1 "dEQP-GLES3.functional.buffer.map.rea"
#define VkglTestCase_000333_2 "d.usage_hints.pixel_pack_stream_draw"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000333, VkglTestCase_000333_1, VkglTestCase_000333_2);

#define VkglTestCase_000334_1 "dEQP-GLES3.functional.buffer.map.rea"
#define VkglTestCase_000334_2 "d.usage_hints.pixel_pack_stream_read"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000334, VkglTestCase_000334_1, VkglTestCase_000334_2);

#define VkglTestCase_000335_1 "dEQP-GLES3.functional.buffer.map.rea"
#define VkglTestCase_000335_2 "d.usage_hints.pixel_pack_stream_copy"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000335, VkglTestCase_000335_1, VkglTestCase_000335_2);

#define VkglTestCase_000336_1 "dEQP-GLES3.functional.buffer.map.rea"
#define VkglTestCase_000336_2 "d.usage_hints.pixel_pack_static_draw"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000336, VkglTestCase_000336_1, VkglTestCase_000336_2);

#define VkglTestCase_000337_1 "dEQP-GLES3.functional.buffer.map.rea"
#define VkglTestCase_000337_2 "d.usage_hints.pixel_pack_static_read"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000337, VkglTestCase_000337_1, VkglTestCase_000337_2);

#define VkglTestCase_000338_1 "dEQP-GLES3.functional.buffer.map.rea"
#define VkglTestCase_000338_2 "d.usage_hints.pixel_pack_static_copy"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000338, VkglTestCase_000338_1, VkglTestCase_000338_2);

#define VkglTestCase_000339_1 "dEQP-GLES3.functional.buffer.map.rea"
#define VkglTestCase_000339_2 "d.usage_hints.pixel_pack_dynamic_draw"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000339, VkglTestCase_000339_1, VkglTestCase_000339_2);

#define VkglTestCase_000340_1 "dEQP-GLES3.functional.buffer.map.rea"
#define VkglTestCase_000340_2 "d.usage_hints.pixel_pack_dynamic_read"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000340, VkglTestCase_000340_1, VkglTestCase_000340_2);

#define VkglTestCase_000341_1 "dEQP-GLES3.functional.buffer.map.rea"
#define VkglTestCase_000341_2 "d.usage_hints.pixel_pack_dynamic_copy"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000341, VkglTestCase_000341_1, VkglTestCase_000341_2);

#define VkglTestCase_000342_1 "dEQP-GLES3.functional.buffer.map.read"
#define VkglTestCase_000342_2 ".usage_hints.pixel_unpack_stream_draw"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000342, VkglTestCase_000342_1, VkglTestCase_000342_2);

#define VkglTestCase_000343_1 "dEQP-GLES3.functional.buffer.map.read"
#define VkglTestCase_000343_2 ".usage_hints.pixel_unpack_stream_read"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000343, VkglTestCase_000343_1, VkglTestCase_000343_2);

#define VkglTestCase_000344_1 "dEQP-GLES3.functional.buffer.map.read"
#define VkglTestCase_000344_2 ".usage_hints.pixel_unpack_stream_copy"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000344, VkglTestCase_000344_1, VkglTestCase_000344_2);

#define VkglTestCase_000345_1 "dEQP-GLES3.functional.buffer.map.read"
#define VkglTestCase_000345_2 ".usage_hints.pixel_unpack_static_draw"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000345, VkglTestCase_000345_1, VkglTestCase_000345_2);

#define VkglTestCase_000346_1 "dEQP-GLES3.functional.buffer.map.read"
#define VkglTestCase_000346_2 ".usage_hints.pixel_unpack_static_read"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000346, VkglTestCase_000346_1, VkglTestCase_000346_2);

#define VkglTestCase_000347_1 "dEQP-GLES3.functional.buffer.map.read"
#define VkglTestCase_000347_2 ".usage_hints.pixel_unpack_static_copy"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000347, VkglTestCase_000347_1, VkglTestCase_000347_2);

#define VkglTestCase_000348_1 "dEQP-GLES3.functional.buffer.map.read"
#define VkglTestCase_000348_2 ".usage_hints.pixel_unpack_dynamic_draw"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000348, VkglTestCase_000348_1, VkglTestCase_000348_2);

#define VkglTestCase_000349_1 "dEQP-GLES3.functional.buffer.map.read"
#define VkglTestCase_000349_2 ".usage_hints.pixel_unpack_dynamic_read"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000349, VkglTestCase_000349_1, VkglTestCase_000349_2);

#define VkglTestCase_000350_1 "dEQP-GLES3.functional.buffer.map.read"
#define VkglTestCase_000350_2 ".usage_hints.pixel_unpack_dynamic_copy"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000350, VkglTestCase_000350_1, VkglTestCase_000350_2);

#define VkglTestCase_000351_1 "dEQP-GLES3.functional.buffer.map.read.us"
#define VkglTestCase_000351_2 "age_hints.transform_feedback_stream_draw"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000351, VkglTestCase_000351_1, VkglTestCase_000351_2);

#define VkglTestCase_000352_1 "dEQP-GLES3.functional.buffer.map.read.us"
#define VkglTestCase_000352_2 "age_hints.transform_feedback_stream_read"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000352, VkglTestCase_000352_1, VkglTestCase_000352_2);

#define VkglTestCase_000353_1 "dEQP-GLES3.functional.buffer.map.read.us"
#define VkglTestCase_000353_2 "age_hints.transform_feedback_stream_copy"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000353, VkglTestCase_000353_1, VkglTestCase_000353_2);

#define VkglTestCase_000354_1 "dEQP-GLES3.functional.buffer.map.read.us"
#define VkglTestCase_000354_2 "age_hints.transform_feedback_static_draw"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000354, VkglTestCase_000354_1, VkglTestCase_000354_2);

#define VkglTestCase_000355_1 "dEQP-GLES3.functional.buffer.map.read.us"
#define VkglTestCase_000355_2 "age_hints.transform_feedback_static_read"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000355, VkglTestCase_000355_1, VkglTestCase_000355_2);

#define VkglTestCase_000356_1 "dEQP-GLES3.functional.buffer.map.read.us"
#define VkglTestCase_000356_2 "age_hints.transform_feedback_static_copy"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000356, VkglTestCase_000356_1, VkglTestCase_000356_2);

#define VkglTestCase_000357_1 "dEQP-GLES3.functional.buffer.map.read.us"
#define VkglTestCase_000357_2 "age_hints.transform_feedback_dynamic_draw"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000357, VkglTestCase_000357_1, VkglTestCase_000357_2);

#define VkglTestCase_000358_1 "dEQP-GLES3.functional.buffer.map.read.us"
#define VkglTestCase_000358_2 "age_hints.transform_feedback_dynamic_read"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000358, VkglTestCase_000358_1, VkglTestCase_000358_2);

#define VkglTestCase_000359_1 "dEQP-GLES3.functional.buffer.map.read.us"
#define VkglTestCase_000359_2 "age_hints.transform_feedback_dynamic_copy"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000359, VkglTestCase_000359_1, VkglTestCase_000359_2);

#define VkglTestCase_000360_1 "dEQP-GLES3.functional.buffer.map.r"
#define VkglTestCase_000360_2 "ead.usage_hints.uniform_stream_draw"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000360, VkglTestCase_000360_1, VkglTestCase_000360_2);

#define VkglTestCase_000361_1 "dEQP-GLES3.functional.buffer.map.r"
#define VkglTestCase_000361_2 "ead.usage_hints.uniform_stream_read"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000361, VkglTestCase_000361_1, VkglTestCase_000361_2);

#define VkglTestCase_000362_1 "dEQP-GLES3.functional.buffer.map.r"
#define VkglTestCase_000362_2 "ead.usage_hints.uniform_stream_copy"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000362, VkglTestCase_000362_1, VkglTestCase_000362_2);

#define VkglTestCase_000363_1 "dEQP-GLES3.functional.buffer.map.r"
#define VkglTestCase_000363_2 "ead.usage_hints.uniform_static_draw"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000363, VkglTestCase_000363_1, VkglTestCase_000363_2);

#define VkglTestCase_000364_1 "dEQP-GLES3.functional.buffer.map.r"
#define VkglTestCase_000364_2 "ead.usage_hints.uniform_static_read"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000364, VkglTestCase_000364_1, VkglTestCase_000364_2);

#define VkglTestCase_000365_1 "dEQP-GLES3.functional.buffer.map.r"
#define VkglTestCase_000365_2 "ead.usage_hints.uniform_static_copy"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000365, VkglTestCase_000365_1, VkglTestCase_000365_2);

#define VkglTestCase_000366_1 "dEQP-GLES3.functional.buffer.map.re"
#define VkglTestCase_000366_2 "ad.usage_hints.uniform_dynamic_draw"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000366, VkglTestCase_000366_1, VkglTestCase_000366_2);

#define VkglTestCase_000367_1 "dEQP-GLES3.functional.buffer.map.re"
#define VkglTestCase_000367_2 "ad.usage_hints.uniform_dynamic_read"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000367, VkglTestCase_000367_1, VkglTestCase_000367_2);

#define VkglTestCase_000368_1 "dEQP-GLES3.functional.buffer.map.re"
#define VkglTestCase_000368_2 "ad.usage_hints.uniform_dynamic_copy"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000368, VkglTestCase_000368_1, VkglTestCase_000368_2);
