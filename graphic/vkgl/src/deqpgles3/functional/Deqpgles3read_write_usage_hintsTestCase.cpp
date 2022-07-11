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

#define VkglTestCase_000593_1 "dEQP-GLES3.functional.buffer.map.rea"
#define VkglTestCase_000593_2 "d_write.usage_hints.array_stream_draw"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000593, VkglTestCase_000593_1, VkglTestCase_000593_2);

#define VkglTestCase_000594_1 "dEQP-GLES3.functional.buffer.map.rea"
#define VkglTestCase_000594_2 "d_write.usage_hints.array_stream_read"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000594, VkglTestCase_000594_1, VkglTestCase_000594_2);

#define VkglTestCase_000595_1 "dEQP-GLES3.functional.buffer.map.rea"
#define VkglTestCase_000595_2 "d_write.usage_hints.array_stream_copy"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000595, VkglTestCase_000595_1, VkglTestCase_000595_2);

#define VkglTestCase_000596_1 "dEQP-GLES3.functional.buffer.map.rea"
#define VkglTestCase_000596_2 "d_write.usage_hints.array_static_draw"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000596, VkglTestCase_000596_1, VkglTestCase_000596_2);

#define VkglTestCase_000597_1 "dEQP-GLES3.functional.buffer.map.rea"
#define VkglTestCase_000597_2 "d_write.usage_hints.array_static_read"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000597, VkglTestCase_000597_1, VkglTestCase_000597_2);

#define VkglTestCase_000598_1 "dEQP-GLES3.functional.buffer.map.rea"
#define VkglTestCase_000598_2 "d_write.usage_hints.array_static_copy"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000598, VkglTestCase_000598_1, VkglTestCase_000598_2);

#define VkglTestCase_000599_1 "dEQP-GLES3.functional.buffer.map.read"
#define VkglTestCase_000599_2 "_write.usage_hints.array_dynamic_draw"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000599, VkglTestCase_000599_1, VkglTestCase_000599_2);

#define VkglTestCase_000600_1 "dEQP-GLES3.functional.buffer.map.read"
#define VkglTestCase_000600_2 "_write.usage_hints.array_dynamic_read"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000600, VkglTestCase_000600_1, VkglTestCase_000600_2);

#define VkglTestCase_000601_1 "dEQP-GLES3.functional.buffer.map.read"
#define VkglTestCase_000601_2 "_write.usage_hints.array_dynamic_copy"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000601, VkglTestCase_000601_1, VkglTestCase_000601_2);

#define VkglTestCase_000602_1 "dEQP-GLES3.functional.buffer.map.read_"
#define VkglTestCase_000602_2 "write.usage_hints.copy_read_stream_draw"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000602, VkglTestCase_000602_1, VkglTestCase_000602_2);

#define VkglTestCase_000603_1 "dEQP-GLES3.functional.buffer.map.read_"
#define VkglTestCase_000603_2 "write.usage_hints.copy_read_stream_read"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000603, VkglTestCase_000603_1, VkglTestCase_000603_2);

#define VkglTestCase_000604_1 "dEQP-GLES3.functional.buffer.map.read_"
#define VkglTestCase_000604_2 "write.usage_hints.copy_read_stream_copy"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000604, VkglTestCase_000604_1, VkglTestCase_000604_2);

#define VkglTestCase_000605_1 "dEQP-GLES3.functional.buffer.map.read_"
#define VkglTestCase_000605_2 "write.usage_hints.copy_read_static_draw"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000605, VkglTestCase_000605_1, VkglTestCase_000605_2);

#define VkglTestCase_000606_1 "dEQP-GLES3.functional.buffer.map.read_"
#define VkglTestCase_000606_2 "write.usage_hints.copy_read_static_read"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000606, VkglTestCase_000606_1, VkglTestCase_000606_2);

#define VkglTestCase_000607_1 "dEQP-GLES3.functional.buffer.map.read_"
#define VkglTestCase_000607_2 "write.usage_hints.copy_read_static_copy"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000607, VkglTestCase_000607_1, VkglTestCase_000607_2);

#define VkglTestCase_000608_1 "dEQP-GLES3.functional.buffer.map.read_w"
#define VkglTestCase_000608_2 "rite.usage_hints.copy_read_dynamic_draw"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000608, VkglTestCase_000608_1, VkglTestCase_000608_2);

#define VkglTestCase_000609_1 "dEQP-GLES3.functional.buffer.map.read_w"
#define VkglTestCase_000609_2 "rite.usage_hints.copy_read_dynamic_read"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000609, VkglTestCase_000609_1, VkglTestCase_000609_2);

#define VkglTestCase_000610_1 "dEQP-GLES3.functional.buffer.map.read_w"
#define VkglTestCase_000610_2 "rite.usage_hints.copy_read_dynamic_copy"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000610, VkglTestCase_000610_1, VkglTestCase_000610_2);

#define VkglTestCase_000611_1 "dEQP-GLES3.functional.buffer.map.read_w"
#define VkglTestCase_000611_2 "rite.usage_hints.copy_write_stream_draw"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000611, VkglTestCase_000611_1, VkglTestCase_000611_2);

#define VkglTestCase_000612_1 "dEQP-GLES3.functional.buffer.map.read_w"
#define VkglTestCase_000612_2 "rite.usage_hints.copy_write_stream_read"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000612, VkglTestCase_000612_1, VkglTestCase_000612_2);

#define VkglTestCase_000613_1 "dEQP-GLES3.functional.buffer.map.read_w"
#define VkglTestCase_000613_2 "rite.usage_hints.copy_write_stream_copy"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000613, VkglTestCase_000613_1, VkglTestCase_000613_2);

#define VkglTestCase_000614_1 "dEQP-GLES3.functional.buffer.map.read_w"
#define VkglTestCase_000614_2 "rite.usage_hints.copy_write_static_draw"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000614, VkglTestCase_000614_1, VkglTestCase_000614_2);

#define VkglTestCase_000615_1 "dEQP-GLES3.functional.buffer.map.read_w"
#define VkglTestCase_000615_2 "rite.usage_hints.copy_write_static_read"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000615, VkglTestCase_000615_1, VkglTestCase_000615_2);

#define VkglTestCase_000616_1 "dEQP-GLES3.functional.buffer.map.read_w"
#define VkglTestCase_000616_2 "rite.usage_hints.copy_write_static_copy"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000616, VkglTestCase_000616_1, VkglTestCase_000616_2);

#define VkglTestCase_000617_1 "dEQP-GLES3.functional.buffer.map.read_w"
#define VkglTestCase_000617_2 "rite.usage_hints.copy_write_dynamic_draw"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000617, VkglTestCase_000617_1, VkglTestCase_000617_2);

#define VkglTestCase_000618_1 "dEQP-GLES3.functional.buffer.map.read_w"
#define VkglTestCase_000618_2 "rite.usage_hints.copy_write_dynamic_read"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000618, VkglTestCase_000618_1, VkglTestCase_000618_2);

#define VkglTestCase_000619_1 "dEQP-GLES3.functional.buffer.map.read_w"
#define VkglTestCase_000619_2 "rite.usage_hints.copy_write_dynamic_copy"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000619, VkglTestCase_000619_1, VkglTestCase_000619_2);

#define VkglTestCase_000620_1 "dEQP-GLES3.functional.buffer.map.read_wr"
#define VkglTestCase_000620_2 "ite.usage_hints.element_array_stream_draw"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000620, VkglTestCase_000620_1, VkglTestCase_000620_2);

#define VkglTestCase_000621_1 "dEQP-GLES3.functional.buffer.map.read_wr"
#define VkglTestCase_000621_2 "ite.usage_hints.element_array_stream_read"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000621, VkglTestCase_000621_1, VkglTestCase_000621_2);

#define VkglTestCase_000622_1 "dEQP-GLES3.functional.buffer.map.read_wr"
#define VkglTestCase_000622_2 "ite.usage_hints.element_array_stream_copy"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000622, VkglTestCase_000622_1, VkglTestCase_000622_2);

#define VkglTestCase_000623_1 "dEQP-GLES3.functional.buffer.map.read_wr"
#define VkglTestCase_000623_2 "ite.usage_hints.element_array_static_draw"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000623, VkglTestCase_000623_1, VkglTestCase_000623_2);

#define VkglTestCase_000624_1 "dEQP-GLES3.functional.buffer.map.read_wr"
#define VkglTestCase_000624_2 "ite.usage_hints.element_array_static_read"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000624, VkglTestCase_000624_1, VkglTestCase_000624_2);

#define VkglTestCase_000625_1 "dEQP-GLES3.functional.buffer.map.read_wr"
#define VkglTestCase_000625_2 "ite.usage_hints.element_array_static_copy"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000625, VkglTestCase_000625_1, VkglTestCase_000625_2);

#define VkglTestCase_000626_1 "dEQP-GLES3.functional.buffer.map.read_wri"
#define VkglTestCase_000626_2 "te.usage_hints.element_array_dynamic_draw"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000626, VkglTestCase_000626_1, VkglTestCase_000626_2);

#define VkglTestCase_000627_1 "dEQP-GLES3.functional.buffer.map.read_wri"
#define VkglTestCase_000627_2 "te.usage_hints.element_array_dynamic_read"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000627, VkglTestCase_000627_1, VkglTestCase_000627_2);

#define VkglTestCase_000628_1 "dEQP-GLES3.functional.buffer.map.read_wri"
#define VkglTestCase_000628_2 "te.usage_hints.element_array_dynamic_copy"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000628, VkglTestCase_000628_1, VkglTestCase_000628_2);

#define VkglTestCase_000629_1 "dEQP-GLES3.functional.buffer.map.read_w"
#define VkglTestCase_000629_2 "rite.usage_hints.pixel_pack_stream_draw"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000629, VkglTestCase_000629_1, VkglTestCase_000629_2);

#define VkglTestCase_000630_1 "dEQP-GLES3.functional.buffer.map.read_w"
#define VkglTestCase_000630_2 "rite.usage_hints.pixel_pack_stream_read"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000630, VkglTestCase_000630_1, VkglTestCase_000630_2);

#define VkglTestCase_000631_1 "dEQP-GLES3.functional.buffer.map.read_w"
#define VkglTestCase_000631_2 "rite.usage_hints.pixel_pack_stream_copy"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000631, VkglTestCase_000631_1, VkglTestCase_000631_2);

#define VkglTestCase_000632_1 "dEQP-GLES3.functional.buffer.map.read_w"
#define VkglTestCase_000632_2 "rite.usage_hints.pixel_pack_static_draw"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000632, VkglTestCase_000632_1, VkglTestCase_000632_2);

#define VkglTestCase_000633_1 "dEQP-GLES3.functional.buffer.map.read_w"
#define VkglTestCase_000633_2 "rite.usage_hints.pixel_pack_static_read"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000633, VkglTestCase_000633_1, VkglTestCase_000633_2);

#define VkglTestCase_000634_1 "dEQP-GLES3.functional.buffer.map.read_w"
#define VkglTestCase_000634_2 "rite.usage_hints.pixel_pack_static_copy"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000634, VkglTestCase_000634_1, VkglTestCase_000634_2);

#define VkglTestCase_000635_1 "dEQP-GLES3.functional.buffer.map.read_w"
#define VkglTestCase_000635_2 "rite.usage_hints.pixel_pack_dynamic_draw"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000635, VkglTestCase_000635_1, VkglTestCase_000635_2);

#define VkglTestCase_000636_1 "dEQP-GLES3.functional.buffer.map.read_w"
#define VkglTestCase_000636_2 "rite.usage_hints.pixel_pack_dynamic_read"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000636, VkglTestCase_000636_1, VkglTestCase_000636_2);

#define VkglTestCase_000637_1 "dEQP-GLES3.functional.buffer.map.read_w"
#define VkglTestCase_000637_2 "rite.usage_hints.pixel_pack_dynamic_copy"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000637, VkglTestCase_000637_1, VkglTestCase_000637_2);

#define VkglTestCase_000638_1 "dEQP-GLES3.functional.buffer.map.read_wr"
#define VkglTestCase_000638_2 "ite.usage_hints.pixel_unpack_stream_draw"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000638, VkglTestCase_000638_1, VkglTestCase_000638_2);

#define VkglTestCase_000639_1 "dEQP-GLES3.functional.buffer.map.read_wr"
#define VkglTestCase_000639_2 "ite.usage_hints.pixel_unpack_stream_read"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000639, VkglTestCase_000639_1, VkglTestCase_000639_2);

#define VkglTestCase_000640_1 "dEQP-GLES3.functional.buffer.map.read_wr"
#define VkglTestCase_000640_2 "ite.usage_hints.pixel_unpack_stream_copy"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000640, VkglTestCase_000640_1, VkglTestCase_000640_2);

#define VkglTestCase_000641_1 "dEQP-GLES3.functional.buffer.map.read_wr"
#define VkglTestCase_000641_2 "ite.usage_hints.pixel_unpack_static_draw"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000641, VkglTestCase_000641_1, VkglTestCase_000641_2);

#define VkglTestCase_000642_1 "dEQP-GLES3.functional.buffer.map.read_wr"
#define VkglTestCase_000642_2 "ite.usage_hints.pixel_unpack_static_read"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000642, VkglTestCase_000642_1, VkglTestCase_000642_2);

#define VkglTestCase_000643_1 "dEQP-GLES3.functional.buffer.map.read_wr"
#define VkglTestCase_000643_2 "ite.usage_hints.pixel_unpack_static_copy"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000643, VkglTestCase_000643_1, VkglTestCase_000643_2);

#define VkglTestCase_000644_1 "dEQP-GLES3.functional.buffer.map.read_wr"
#define VkglTestCase_000644_2 "ite.usage_hints.pixel_unpack_dynamic_draw"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000644, VkglTestCase_000644_1, VkglTestCase_000644_2);

#define VkglTestCase_000645_1 "dEQP-GLES3.functional.buffer.map.read_wr"
#define VkglTestCase_000645_2 "ite.usage_hints.pixel_unpack_dynamic_read"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000645, VkglTestCase_000645_1, VkglTestCase_000645_2);

#define VkglTestCase_000646_1 "dEQP-GLES3.functional.buffer.map.read_wr"
#define VkglTestCase_000646_2 "ite.usage_hints.pixel_unpack_dynamic_copy"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000646, VkglTestCase_000646_1, VkglTestCase_000646_2);

#define VkglTestCase_000647_1 "dEQP-GLES3.functional.buffer.map.read_write"
#define VkglTestCase_000647_2 ".usage_hints.transform_feedback_stream_draw"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000647, VkglTestCase_000647_1, VkglTestCase_000647_2);

#define VkglTestCase_000648_1 "dEQP-GLES3.functional.buffer.map.read_write"
#define VkglTestCase_000648_2 ".usage_hints.transform_feedback_stream_read"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000648, VkglTestCase_000648_1, VkglTestCase_000648_2);

#define VkglTestCase_000649_1 "dEQP-GLES3.functional.buffer.map.read_write"
#define VkglTestCase_000649_2 ".usage_hints.transform_feedback_stream_copy"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000649, VkglTestCase_000649_1, VkglTestCase_000649_2);

#define VkglTestCase_000650_1 "dEQP-GLES3.functional.buffer.map.read_write"
#define VkglTestCase_000650_2 ".usage_hints.transform_feedback_static_draw"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000650, VkglTestCase_000650_1, VkglTestCase_000650_2);

#define VkglTestCase_000651_1 "dEQP-GLES3.functional.buffer.map.read_write"
#define VkglTestCase_000651_2 ".usage_hints.transform_feedback_static_read"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000651, VkglTestCase_000651_1, VkglTestCase_000651_2);

#define VkglTestCase_000652_1 "dEQP-GLES3.functional.buffer.map.read_write"
#define VkglTestCase_000652_2 ".usage_hints.transform_feedback_static_copy"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000652, VkglTestCase_000652_1, VkglTestCase_000652_2);

#define VkglTestCase_000653_1 "dEQP-GLES3.functional.buffer.map.read_write"
#define VkglTestCase_000653_2 ".usage_hints.transform_feedback_dynamic_draw"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000653, VkglTestCase_000653_1, VkglTestCase_000653_2);

#define VkglTestCase_000654_1 "dEQP-GLES3.functional.buffer.map.read_write"
#define VkglTestCase_000654_2 ".usage_hints.transform_feedback_dynamic_read"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000654, VkglTestCase_000654_1, VkglTestCase_000654_2);

#define VkglTestCase_000655_1 "dEQP-GLES3.functional.buffer.map.read_write"
#define VkglTestCase_000655_2 ".usage_hints.transform_feedback_dynamic_copy"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000655, VkglTestCase_000655_1, VkglTestCase_000655_2);

#define VkglTestCase_000656_1 "dEQP-GLES3.functional.buffer.map.read"
#define VkglTestCase_000656_2 "_write.usage_hints.uniform_stream_draw"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000656, VkglTestCase_000656_1, VkglTestCase_000656_2);

#define VkglTestCase_000657_1 "dEQP-GLES3.functional.buffer.map.read"
#define VkglTestCase_000657_2 "_write.usage_hints.uniform_stream_read"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000657, VkglTestCase_000657_1, VkglTestCase_000657_2);

#define VkglTestCase_000658_1 "dEQP-GLES3.functional.buffer.map.read"
#define VkglTestCase_000658_2 "_write.usage_hints.uniform_stream_copy"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000658, VkglTestCase_000658_1, VkglTestCase_000658_2);

#define VkglTestCase_000659_1 "dEQP-GLES3.functional.buffer.map.read"
#define VkglTestCase_000659_2 "_write.usage_hints.uniform_static_draw"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000659, VkglTestCase_000659_1, VkglTestCase_000659_2);

#define VkglTestCase_000660_1 "dEQP-GLES3.functional.buffer.map.read"
#define VkglTestCase_000660_2 "_write.usage_hints.uniform_static_read"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000660, VkglTestCase_000660_1, VkglTestCase_000660_2);

#define VkglTestCase_000661_1 "dEQP-GLES3.functional.buffer.map.read"
#define VkglTestCase_000661_2 "_write.usage_hints.uniform_static_copy"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000661, VkglTestCase_000661_1, VkglTestCase_000661_2);

#define VkglTestCase_000662_1 "dEQP-GLES3.functional.buffer.map.read_"
#define VkglTestCase_000662_2 "write.usage_hints.uniform_dynamic_draw"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000662, VkglTestCase_000662_1, VkglTestCase_000662_2);

#define VkglTestCase_000663_1 "dEQP-GLES3.functional.buffer.map.read_"
#define VkglTestCase_000663_2 "write.usage_hints.uniform_dynamic_read"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000663, VkglTestCase_000663_1, VkglTestCase_000663_2);

#define VkglTestCase_000664_1 "dEQP-GLES3.functional.buffer.map.read_"
#define VkglTestCase_000664_2 "write.usage_hints.uniform_dynamic_copy"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000664, VkglTestCase_000664_1, VkglTestCase_000664_2);
