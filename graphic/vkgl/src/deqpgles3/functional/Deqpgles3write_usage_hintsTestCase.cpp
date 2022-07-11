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

#define VkglTestCase_000417_1 "dEQP-GLES3.functional.buffer.map.w"
#define VkglTestCase_000417_2 "rite.usage_hints.array_stream_draw"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000417, VkglTestCase_000417_1, VkglTestCase_000417_2);

#define VkglTestCase_000418_1 "dEQP-GLES3.functional.buffer.map.w"
#define VkglTestCase_000418_2 "rite.usage_hints.array_stream_read"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000418, VkglTestCase_000418_1, VkglTestCase_000418_2);

#define VkglTestCase_000419_1 "dEQP-GLES3.functional.buffer.map.w"
#define VkglTestCase_000419_2 "rite.usage_hints.array_stream_copy"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000419, VkglTestCase_000419_1, VkglTestCase_000419_2);

#define VkglTestCase_000420_1 "dEQP-GLES3.functional.buffer.map.w"
#define VkglTestCase_000420_2 "rite.usage_hints.array_static_draw"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000420, VkglTestCase_000420_1, VkglTestCase_000420_2);

#define VkglTestCase_000421_1 "dEQP-GLES3.functional.buffer.map.w"
#define VkglTestCase_000421_2 "rite.usage_hints.array_static_read"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000421, VkglTestCase_000421_1, VkglTestCase_000421_2);

#define VkglTestCase_000422_1 "dEQP-GLES3.functional.buffer.map.w"
#define VkglTestCase_000422_2 "rite.usage_hints.array_static_copy"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000422, VkglTestCase_000422_1, VkglTestCase_000422_2);

#define VkglTestCase_000423_1 "dEQP-GLES3.functional.buffer.map.w"
#define VkglTestCase_000423_2 "rite.usage_hints.array_dynamic_draw"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000423, VkglTestCase_000423_1, VkglTestCase_000423_2);

#define VkglTestCase_000424_1 "dEQP-GLES3.functional.buffer.map.w"
#define VkglTestCase_000424_2 "rite.usage_hints.array_dynamic_read"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000424, VkglTestCase_000424_1, VkglTestCase_000424_2);

#define VkglTestCase_000425_1 "dEQP-GLES3.functional.buffer.map.w"
#define VkglTestCase_000425_2 "rite.usage_hints.array_dynamic_copy"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000425, VkglTestCase_000425_1, VkglTestCase_000425_2);

#define VkglTestCase_000426_1 "dEQP-GLES3.functional.buffer.map.wri"
#define VkglTestCase_000426_2 "te.usage_hints.copy_read_stream_draw"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000426, VkglTestCase_000426_1, VkglTestCase_000426_2);

#define VkglTestCase_000427_1 "dEQP-GLES3.functional.buffer.map.wri"
#define VkglTestCase_000427_2 "te.usage_hints.copy_read_stream_read"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000427, VkglTestCase_000427_1, VkglTestCase_000427_2);

#define VkglTestCase_000428_1 "dEQP-GLES3.functional.buffer.map.wri"
#define VkglTestCase_000428_2 "te.usage_hints.copy_read_stream_copy"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000428, VkglTestCase_000428_1, VkglTestCase_000428_2);

#define VkglTestCase_000429_1 "dEQP-GLES3.functional.buffer.map.wri"
#define VkglTestCase_000429_2 "te.usage_hints.copy_read_static_draw"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000429, VkglTestCase_000429_1, VkglTestCase_000429_2);

#define VkglTestCase_000430_1 "dEQP-GLES3.functional.buffer.map.wri"
#define VkglTestCase_000430_2 "te.usage_hints.copy_read_static_read"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000430, VkglTestCase_000430_1, VkglTestCase_000430_2);

#define VkglTestCase_000431_1 "dEQP-GLES3.functional.buffer.map.wri"
#define VkglTestCase_000431_2 "te.usage_hints.copy_read_static_copy"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000431, VkglTestCase_000431_1, VkglTestCase_000431_2);

#define VkglTestCase_000432_1 "dEQP-GLES3.functional.buffer.map.wri"
#define VkglTestCase_000432_2 "te.usage_hints.copy_read_dynamic_draw"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000432, VkglTestCase_000432_1, VkglTestCase_000432_2);

#define VkglTestCase_000433_1 "dEQP-GLES3.functional.buffer.map.wri"
#define VkglTestCase_000433_2 "te.usage_hints.copy_read_dynamic_read"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000433, VkglTestCase_000433_1, VkglTestCase_000433_2);

#define VkglTestCase_000434_1 "dEQP-GLES3.functional.buffer.map.wri"
#define VkglTestCase_000434_2 "te.usage_hints.copy_read_dynamic_copy"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000434, VkglTestCase_000434_1, VkglTestCase_000434_2);

#define VkglTestCase_000435_1 "dEQP-GLES3.functional.buffer.map.wri"
#define VkglTestCase_000435_2 "te.usage_hints.copy_write_stream_draw"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000435, VkglTestCase_000435_1, VkglTestCase_000435_2);

#define VkglTestCase_000436_1 "dEQP-GLES3.functional.buffer.map.wri"
#define VkglTestCase_000436_2 "te.usage_hints.copy_write_stream_read"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000436, VkglTestCase_000436_1, VkglTestCase_000436_2);

#define VkglTestCase_000437_1 "dEQP-GLES3.functional.buffer.map.wri"
#define VkglTestCase_000437_2 "te.usage_hints.copy_write_stream_copy"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000437, VkglTestCase_000437_1, VkglTestCase_000437_2);

#define VkglTestCase_000438_1 "dEQP-GLES3.functional.buffer.map.wri"
#define VkglTestCase_000438_2 "te.usage_hints.copy_write_static_draw"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000438, VkglTestCase_000438_1, VkglTestCase_000438_2);

#define VkglTestCase_000439_1 "dEQP-GLES3.functional.buffer.map.wri"
#define VkglTestCase_000439_2 "te.usage_hints.copy_write_static_read"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000439, VkglTestCase_000439_1, VkglTestCase_000439_2);

#define VkglTestCase_000440_1 "dEQP-GLES3.functional.buffer.map.wri"
#define VkglTestCase_000440_2 "te.usage_hints.copy_write_static_copy"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000440, VkglTestCase_000440_1, VkglTestCase_000440_2);

#define VkglTestCase_000441_1 "dEQP-GLES3.functional.buffer.map.writ"
#define VkglTestCase_000441_2 "e.usage_hints.copy_write_dynamic_draw"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000441, VkglTestCase_000441_1, VkglTestCase_000441_2);

#define VkglTestCase_000442_1 "dEQP-GLES3.functional.buffer.map.writ"
#define VkglTestCase_000442_2 "e.usage_hints.copy_write_dynamic_read"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000442, VkglTestCase_000442_1, VkglTestCase_000442_2);

#define VkglTestCase_000443_1 "dEQP-GLES3.functional.buffer.map.writ"
#define VkglTestCase_000443_2 "e.usage_hints.copy_write_dynamic_copy"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000443, VkglTestCase_000443_1, VkglTestCase_000443_2);

#define VkglTestCase_000444_1 "dEQP-GLES3.functional.buffer.map.write"
#define VkglTestCase_000444_2 ".usage_hints.element_array_stream_draw"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000444, VkglTestCase_000444_1, VkglTestCase_000444_2);

#define VkglTestCase_000445_1 "dEQP-GLES3.functional.buffer.map.write"
#define VkglTestCase_000445_2 ".usage_hints.element_array_stream_read"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000445, VkglTestCase_000445_1, VkglTestCase_000445_2);

#define VkglTestCase_000446_1 "dEQP-GLES3.functional.buffer.map.write"
#define VkglTestCase_000446_2 ".usage_hints.element_array_stream_copy"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000446, VkglTestCase_000446_1, VkglTestCase_000446_2);

#define VkglTestCase_000447_1 "dEQP-GLES3.functional.buffer.map.write"
#define VkglTestCase_000447_2 ".usage_hints.element_array_static_draw"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000447, VkglTestCase_000447_1, VkglTestCase_000447_2);

#define VkglTestCase_000448_1 "dEQP-GLES3.functional.buffer.map.write"
#define VkglTestCase_000448_2 ".usage_hints.element_array_static_read"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000448, VkglTestCase_000448_1, VkglTestCase_000448_2);

#define VkglTestCase_000449_1 "dEQP-GLES3.functional.buffer.map.write"
#define VkglTestCase_000449_2 ".usage_hints.element_array_static_copy"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000449, VkglTestCase_000449_1, VkglTestCase_000449_2);

#define VkglTestCase_000450_1 "dEQP-GLES3.functional.buffer.map.write"
#define VkglTestCase_000450_2 ".usage_hints.element_array_dynamic_draw"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000450, VkglTestCase_000450_1, VkglTestCase_000450_2);

#define VkglTestCase_000451_1 "dEQP-GLES3.functional.buffer.map.write"
#define VkglTestCase_000451_2 ".usage_hints.element_array_dynamic_read"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000451, VkglTestCase_000451_1, VkglTestCase_000451_2);

#define VkglTestCase_000452_1 "dEQP-GLES3.functional.buffer.map.write"
#define VkglTestCase_000452_2 ".usage_hints.element_array_dynamic_copy"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000452, VkglTestCase_000452_1, VkglTestCase_000452_2);

#define VkglTestCase_000453_1 "dEQP-GLES3.functional.buffer.map.wri"
#define VkglTestCase_000453_2 "te.usage_hints.pixel_pack_stream_draw"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000453, VkglTestCase_000453_1, VkglTestCase_000453_2);

#define VkglTestCase_000454_1 "dEQP-GLES3.functional.buffer.map.wri"
#define VkglTestCase_000454_2 "te.usage_hints.pixel_pack_stream_read"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000454, VkglTestCase_000454_1, VkglTestCase_000454_2);

#define VkglTestCase_000455_1 "dEQP-GLES3.functional.buffer.map.wri"
#define VkglTestCase_000455_2 "te.usage_hints.pixel_pack_stream_copy"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000455, VkglTestCase_000455_1, VkglTestCase_000455_2);

#define VkglTestCase_000456_1 "dEQP-GLES3.functional.buffer.map.wri"
#define VkglTestCase_000456_2 "te.usage_hints.pixel_pack_static_draw"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000456, VkglTestCase_000456_1, VkglTestCase_000456_2);

#define VkglTestCase_000457_1 "dEQP-GLES3.functional.buffer.map.wri"
#define VkglTestCase_000457_2 "te.usage_hints.pixel_pack_static_read"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000457, VkglTestCase_000457_1, VkglTestCase_000457_2);

#define VkglTestCase_000458_1 "dEQP-GLES3.functional.buffer.map.wri"
#define VkglTestCase_000458_2 "te.usage_hints.pixel_pack_static_copy"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000458, VkglTestCase_000458_1, VkglTestCase_000458_2);

#define VkglTestCase_000459_1 "dEQP-GLES3.functional.buffer.map.writ"
#define VkglTestCase_000459_2 "e.usage_hints.pixel_pack_dynamic_draw"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000459, VkglTestCase_000459_1, VkglTestCase_000459_2);

#define VkglTestCase_000460_1 "dEQP-GLES3.functional.buffer.map.writ"
#define VkglTestCase_000460_2 "e.usage_hints.pixel_pack_dynamic_read"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000460, VkglTestCase_000460_1, VkglTestCase_000460_2);

#define VkglTestCase_000461_1 "dEQP-GLES3.functional.buffer.map.writ"
#define VkglTestCase_000461_2 "e.usage_hints.pixel_pack_dynamic_copy"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000461, VkglTestCase_000461_1, VkglTestCase_000461_2);

#define VkglTestCase_000462_1 "dEQP-GLES3.functional.buffer.map.writ"
#define VkglTestCase_000462_2 "e.usage_hints.pixel_unpack_stream_draw"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000462, VkglTestCase_000462_1, VkglTestCase_000462_2);

#define VkglTestCase_000463_1 "dEQP-GLES3.functional.buffer.map.writ"
#define VkglTestCase_000463_2 "e.usage_hints.pixel_unpack_stream_read"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000463, VkglTestCase_000463_1, VkglTestCase_000463_2);

#define VkglTestCase_000464_1 "dEQP-GLES3.functional.buffer.map.writ"
#define VkglTestCase_000464_2 "e.usage_hints.pixel_unpack_stream_copy"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000464, VkglTestCase_000464_1, VkglTestCase_000464_2);

#define VkglTestCase_000465_1 "dEQP-GLES3.functional.buffer.map.writ"
#define VkglTestCase_000465_2 "e.usage_hints.pixel_unpack_static_draw"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000465, VkglTestCase_000465_1, VkglTestCase_000465_2);

#define VkglTestCase_000466_1 "dEQP-GLES3.functional.buffer.map.writ"
#define VkglTestCase_000466_2 "e.usage_hints.pixel_unpack_static_read"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000466, VkglTestCase_000466_1, VkglTestCase_000466_2);

#define VkglTestCase_000467_1 "dEQP-GLES3.functional.buffer.map.writ"
#define VkglTestCase_000467_2 "e.usage_hints.pixel_unpack_static_copy"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000467, VkglTestCase_000467_1, VkglTestCase_000467_2);

#define VkglTestCase_000468_1 "dEQP-GLES3.functional.buffer.map.write"
#define VkglTestCase_000468_2 ".usage_hints.pixel_unpack_dynamic_draw"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000468, VkglTestCase_000468_1, VkglTestCase_000468_2);

#define VkglTestCase_000469_1 "dEQP-GLES3.functional.buffer.map.write"
#define VkglTestCase_000469_2 ".usage_hints.pixel_unpack_dynamic_read"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000469, VkglTestCase_000469_1, VkglTestCase_000469_2);

#define VkglTestCase_000470_1 "dEQP-GLES3.functional.buffer.map.write"
#define VkglTestCase_000470_2 ".usage_hints.pixel_unpack_dynamic_copy"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000470, VkglTestCase_000470_1, VkglTestCase_000470_2);

#define VkglTestCase_000471_1 "dEQP-GLES3.functional.buffer.map.write.u"
#define VkglTestCase_000471_2 "sage_hints.transform_feedback_stream_draw"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000471, VkglTestCase_000471_1, VkglTestCase_000471_2);

#define VkglTestCase_000472_1 "dEQP-GLES3.functional.buffer.map.write.u"
#define VkglTestCase_000472_2 "sage_hints.transform_feedback_stream_read"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000472, VkglTestCase_000472_1, VkglTestCase_000472_2);

#define VkglTestCase_000473_1 "dEQP-GLES3.functional.buffer.map.write.u"
#define VkglTestCase_000473_2 "sage_hints.transform_feedback_stream_copy"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000473, VkglTestCase_000473_1, VkglTestCase_000473_2);

#define VkglTestCase_000474_1 "dEQP-GLES3.functional.buffer.map.write.u"
#define VkglTestCase_000474_2 "sage_hints.transform_feedback_static_draw"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000474, VkglTestCase_000474_1, VkglTestCase_000474_2);

#define VkglTestCase_000475_1 "dEQP-GLES3.functional.buffer.map.write.u"
#define VkglTestCase_000475_2 "sage_hints.transform_feedback_static_read"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000475, VkglTestCase_000475_1, VkglTestCase_000475_2);

#define VkglTestCase_000476_1 "dEQP-GLES3.functional.buffer.map.write.u"
#define VkglTestCase_000476_2 "sage_hints.transform_feedback_static_copy"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000476, VkglTestCase_000476_1, VkglTestCase_000476_2);

#define VkglTestCase_000477_1 "dEQP-GLES3.functional.buffer.map.write.us"
#define VkglTestCase_000477_2 "age_hints.transform_feedback_dynamic_draw"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000477, VkglTestCase_000477_1, VkglTestCase_000477_2);

#define VkglTestCase_000478_1 "dEQP-GLES3.functional.buffer.map.write.us"
#define VkglTestCase_000478_2 "age_hints.transform_feedback_dynamic_read"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000478, VkglTestCase_000478_1, VkglTestCase_000478_2);

#define VkglTestCase_000479_1 "dEQP-GLES3.functional.buffer.map.write.us"
#define VkglTestCase_000479_2 "age_hints.transform_feedback_dynamic_copy"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000479, VkglTestCase_000479_1, VkglTestCase_000479_2);

#define VkglTestCase_000480_1 "dEQP-GLES3.functional.buffer.map.wr"
#define VkglTestCase_000480_2 "ite.usage_hints.uniform_stream_draw"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000480, VkglTestCase_000480_1, VkglTestCase_000480_2);

#define VkglTestCase_000481_1 "dEQP-GLES3.functional.buffer.map.wr"
#define VkglTestCase_000481_2 "ite.usage_hints.uniform_stream_read"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000481, VkglTestCase_000481_1, VkglTestCase_000481_2);

#define VkglTestCase_000482_1 "dEQP-GLES3.functional.buffer.map.wr"
#define VkglTestCase_000482_2 "ite.usage_hints.uniform_stream_copy"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000482, VkglTestCase_000482_1, VkglTestCase_000482_2);

#define VkglTestCase_000483_1 "dEQP-GLES3.functional.buffer.map.wr"
#define VkglTestCase_000483_2 "ite.usage_hints.uniform_static_draw"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000483, VkglTestCase_000483_1, VkglTestCase_000483_2);

#define VkglTestCase_000484_1 "dEQP-GLES3.functional.buffer.map.wr"
#define VkglTestCase_000484_2 "ite.usage_hints.uniform_static_read"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000484, VkglTestCase_000484_1, VkglTestCase_000484_2);

#define VkglTestCase_000485_1 "dEQP-GLES3.functional.buffer.map.wr"
#define VkglTestCase_000485_2 "ite.usage_hints.uniform_static_copy"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000485, VkglTestCase_000485_1, VkglTestCase_000485_2);

#define VkglTestCase_000486_1 "dEQP-GLES3.functional.buffer.map.wr"
#define VkglTestCase_000486_2 "ite.usage_hints.uniform_dynamic_draw"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000486, VkglTestCase_000486_1, VkglTestCase_000486_2);

#define VkglTestCase_000487_1 "dEQP-GLES3.functional.buffer.map.wr"
#define VkglTestCase_000487_2 "ite.usage_hints.uniform_dynamic_read"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000487, VkglTestCase_000487_1, VkglTestCase_000487_2);

#define VkglTestCase_000488_1 "dEQP-GLES3.functional.buffer.map.wr"
#define VkglTestCase_000488_2 "ite.usage_hints.uniform_dynamic_copy"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000488, VkglTestCase_000488_1, VkglTestCase_000488_2);
