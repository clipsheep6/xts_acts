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

#define VkglTestCase_000665_1 "dEQP-GLES3.functional.buffe"
#define VkglTestCase_000665_2 "r.copy.basic.array_copy_read"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000665, VkglTestCase_000665_1, VkglTestCase_000665_2);

#define VkglTestCase_000666_1 "dEQP-GLES3.functional.buffer"
#define VkglTestCase_000666_2 ".copy.basic.array_copy_write"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000666, VkglTestCase_000666_1, VkglTestCase_000666_2);

#define VkglTestCase_000667_1 "dEQP-GLES3.functional.buffer."
#define VkglTestCase_000667_2 "copy.basic.array_element_array"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000667, VkglTestCase_000667_1, VkglTestCase_000667_2);

#define VkglTestCase_000668_1 "dEQP-GLES3.functional.buffer"
#define VkglTestCase_000668_2 ".copy.basic.array_pixel_pack"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000668, VkglTestCase_000668_1, VkglTestCase_000668_2);

#define VkglTestCase_000669_1 "dEQP-GLES3.functional.buffer."
#define VkglTestCase_000669_2 "copy.basic.array_pixel_unpack"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000669, VkglTestCase_000669_1, VkglTestCase_000669_2);

#define VkglTestCase_000670_1 "dEQP-GLES3.functional.buffer.cop"
#define VkglTestCase_000670_2 "y.basic.array_transform_feedback"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000670, VkglTestCase_000670_1, VkglTestCase_000670_2);

#define VkglTestCase_000671_1 "dEQP-GLES3.functional.buff"
#define VkglTestCase_000671_2 "er.copy.basic.array_uniform"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000671, VkglTestCase_000671_1, VkglTestCase_000671_2);

#define VkglTestCase_000672_1 "dEQP-GLES3.functional.buffe"
#define VkglTestCase_000672_2 "r.copy.basic.copy_read_array"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000672, VkglTestCase_000672_1, VkglTestCase_000672_2);

#define VkglTestCase_000673_1 "dEQP-GLES3.functional.buffer.c"
#define VkglTestCase_000673_2 "opy.basic.copy_read_copy_write"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000673, VkglTestCase_000673_1, VkglTestCase_000673_2);

#define VkglTestCase_000674_1 "dEQP-GLES3.functional.buffer.co"
#define VkglTestCase_000674_2 "py.basic.copy_read_element_array"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000674, VkglTestCase_000674_1, VkglTestCase_000674_2);

#define VkglTestCase_000675_1 "dEQP-GLES3.functional.buffer.c"
#define VkglTestCase_000675_2 "opy.basic.copy_read_pixel_pack"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000675, VkglTestCase_000675_1, VkglTestCase_000675_2);

#define VkglTestCase_000676_1 "dEQP-GLES3.functional.buffer.co"
#define VkglTestCase_000676_2 "py.basic.copy_read_pixel_unpack"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000676, VkglTestCase_000676_1, VkglTestCase_000676_2);

#define VkglTestCase_000677_1 "dEQP-GLES3.functional.buffer.copy."
#define VkglTestCase_000677_2 "basic.copy_read_transform_feedback"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000677, VkglTestCase_000677_1, VkglTestCase_000677_2);

#define VkglTestCase_000678_1 "dEQP-GLES3.functional.buffer"
#define VkglTestCase_000678_2 ".copy.basic.copy_read_uniform"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000678, VkglTestCase_000678_1, VkglTestCase_000678_2);

#define VkglTestCase_000679_1 "dEQP-GLES3.functional.buffer"
#define VkglTestCase_000679_2 ".copy.basic.copy_write_array"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000679, VkglTestCase_000679_1, VkglTestCase_000679_2);

#define VkglTestCase_000680_1 "dEQP-GLES3.functional.buffer.c"
#define VkglTestCase_000680_2 "opy.basic.copy_write_copy_read"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000680, VkglTestCase_000680_1, VkglTestCase_000680_2);

#define VkglTestCase_000681_1 "dEQP-GLES3.functional.buffer.cop"
#define VkglTestCase_000681_2 "y.basic.copy_write_element_array"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000681, VkglTestCase_000681_1, VkglTestCase_000681_2);

#define VkglTestCase_000682_1 "dEQP-GLES3.functional.buffer.c"
#define VkglTestCase_000682_2 "opy.basic.copy_write_pixel_pack"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000682, VkglTestCase_000682_1, VkglTestCase_000682_2);

#define VkglTestCase_000683_1 "dEQP-GLES3.functional.buffer.co"
#define VkglTestCase_000683_2 "py.basic.copy_write_pixel_unpack"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000683, VkglTestCase_000683_1, VkglTestCase_000683_2);

#define VkglTestCase_000684_1 "dEQP-GLES3.functional.buffer.copy."
#define VkglTestCase_000684_2 "basic.copy_write_transform_feedback"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000684, VkglTestCase_000684_1, VkglTestCase_000684_2);

#define VkglTestCase_000685_1 "dEQP-GLES3.functional.buffer."
#define VkglTestCase_000685_2 "copy.basic.copy_write_uniform"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000685, VkglTestCase_000685_1, VkglTestCase_000685_2);

#define VkglTestCase_000686_1 "dEQP-GLES3.functional.buffer."
#define VkglTestCase_000686_2 "copy.basic.element_array_array"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000686, VkglTestCase_000686_1, VkglTestCase_000686_2);

#define VkglTestCase_000687_1 "dEQP-GLES3.functional.buffer.co"
#define VkglTestCase_000687_2 "py.basic.element_array_copy_read"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000687, VkglTestCase_000687_1, VkglTestCase_000687_2);

#define VkglTestCase_000688_1 "dEQP-GLES3.functional.buffer.cop"
#define VkglTestCase_000688_2 "y.basic.element_array_copy_write"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000688, VkglTestCase_000688_1, VkglTestCase_000688_2);

#define VkglTestCase_000689_1 "dEQP-GLES3.functional.buffer.cop"
#define VkglTestCase_000689_2 "y.basic.element_array_pixel_pack"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000689, VkglTestCase_000689_1, VkglTestCase_000689_2);

#define VkglTestCase_000690_1 "dEQP-GLES3.functional.buffer.copy"
#define VkglTestCase_000690_2 ".basic.element_array_pixel_unpack"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000690, VkglTestCase_000690_1, VkglTestCase_000690_2);

#define VkglTestCase_000691_1 "dEQP-GLES3.functional.buffer.copy.ba"
#define VkglTestCase_000691_2 "sic.element_array_transform_feedback"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000691, VkglTestCase_000691_1, VkglTestCase_000691_2);

#define VkglTestCase_000692_1 "dEQP-GLES3.functional.buffer.c"
#define VkglTestCase_000692_2 "opy.basic.element_array_uniform"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000692, VkglTestCase_000692_1, VkglTestCase_000692_2);

#define VkglTestCase_000693_1 "dEQP-GLES3.functional.buffer"
#define VkglTestCase_000693_2 ".copy.basic.pixel_pack_array"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000693, VkglTestCase_000693_1, VkglTestCase_000693_2);

#define VkglTestCase_000694_1 "dEQP-GLES3.functional.buffer.c"
#define VkglTestCase_000694_2 "opy.basic.pixel_pack_copy_read"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000694, VkglTestCase_000694_1, VkglTestCase_000694_2);

#define VkglTestCase_000695_1 "dEQP-GLES3.functional.buffer.c"
#define VkglTestCase_000695_2 "opy.basic.pixel_pack_copy_write"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000695, VkglTestCase_000695_1, VkglTestCase_000695_2);

#define VkglTestCase_000696_1 "dEQP-GLES3.functional.buffer.cop"
#define VkglTestCase_000696_2 "y.basic.pixel_pack_element_array"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000696, VkglTestCase_000696_1, VkglTestCase_000696_2);

#define VkglTestCase_000697_1 "dEQP-GLES3.functional.buffer.co"
#define VkglTestCase_000697_2 "py.basic.pixel_pack_pixel_unpack"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000697, VkglTestCase_000697_1, VkglTestCase_000697_2);

#define VkglTestCase_000698_1 "dEQP-GLES3.functional.buffer.copy."
#define VkglTestCase_000698_2 "basic.pixel_pack_transform_feedback"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000698, VkglTestCase_000698_1, VkglTestCase_000698_2);

#define VkglTestCase_000699_1 "dEQP-GLES3.functional.buffer."
#define VkglTestCase_000699_2 "copy.basic.pixel_pack_uniform"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000699, VkglTestCase_000699_1, VkglTestCase_000699_2);

#define VkglTestCase_000700_1 "dEQP-GLES3.functional.buffer."
#define VkglTestCase_000700_2 "copy.basic.pixel_unpack_array"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000700, VkglTestCase_000700_1, VkglTestCase_000700_2);

#define VkglTestCase_000701_1 "dEQP-GLES3.functional.buffer.co"
#define VkglTestCase_000701_2 "py.basic.pixel_unpack_copy_read"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000701, VkglTestCase_000701_1, VkglTestCase_000701_2);

#define VkglTestCase_000702_1 "dEQP-GLES3.functional.buffer.co"
#define VkglTestCase_000702_2 "py.basic.pixel_unpack_copy_write"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000702, VkglTestCase_000702_1, VkglTestCase_000702_2);

#define VkglTestCase_000703_1 "dEQP-GLES3.functional.buffer.copy"
#define VkglTestCase_000703_2 ".basic.pixel_unpack_element_array"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000703, VkglTestCase_000703_1, VkglTestCase_000703_2);

#define VkglTestCase_000704_1 "dEQP-GLES3.functional.buffer.co"
#define VkglTestCase_000704_2 "py.basic.pixel_unpack_pixel_pack"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000704, VkglTestCase_000704_1, VkglTestCase_000704_2);

#define VkglTestCase_000705_1 "dEQP-GLES3.functional.buffer.copy.b"
#define VkglTestCase_000705_2 "asic.pixel_unpack_transform_feedback"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000705, VkglTestCase_000705_1, VkglTestCase_000705_2);

#define VkglTestCase_000706_1 "dEQP-GLES3.functional.buffer.c"
#define VkglTestCase_000706_2 "opy.basic.pixel_unpack_uniform"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000706, VkglTestCase_000706_1, VkglTestCase_000706_2);

#define VkglTestCase_000707_1 "dEQP-GLES3.functional.buffer.cop"
#define VkglTestCase_000707_2 "y.basic.transform_feedback_array"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000707, VkglTestCase_000707_1, VkglTestCase_000707_2);

#define VkglTestCase_000708_1 "dEQP-GLES3.functional.buffer.copy."
#define VkglTestCase_000708_2 "basic.transform_feedback_copy_read"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000708, VkglTestCase_000708_1, VkglTestCase_000708_2);

#define VkglTestCase_000709_1 "dEQP-GLES3.functional.buffer.copy."
#define VkglTestCase_000709_2 "basic.transform_feedback_copy_write"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000709, VkglTestCase_000709_1, VkglTestCase_000709_2);

#define VkglTestCase_000710_1 "dEQP-GLES3.functional.buffer.copy.ba"
#define VkglTestCase_000710_2 "sic.transform_feedback_element_array"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000710, VkglTestCase_000710_1, VkglTestCase_000710_2);

#define VkglTestCase_000711_1 "dEQP-GLES3.functional.buffer.copy."
#define VkglTestCase_000711_2 "basic.transform_feedback_pixel_pack"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000711, VkglTestCase_000711_1, VkglTestCase_000711_2);

#define VkglTestCase_000712_1 "dEQP-GLES3.functional.buffer.copy.b"
#define VkglTestCase_000712_2 "asic.transform_feedback_pixel_unpack"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000712, VkglTestCase_000712_1, VkglTestCase_000712_2);

#define VkglTestCase_000713_1 "dEQP-GLES3.functional.buffer.copy"
#define VkglTestCase_000713_2 ".basic.transform_feedback_uniform"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000713, VkglTestCase_000713_1, VkglTestCase_000713_2);

#define VkglTestCase_000714_1 "dEQP-GLES3.functional.buff"
#define VkglTestCase_000714_2 "er.copy.basic.uniform_array"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000714, VkglTestCase_000714_1, VkglTestCase_000714_2);

#define VkglTestCase_000715_1 "dEQP-GLES3.functional.buffer"
#define VkglTestCase_000715_2 ".copy.basic.uniform_copy_read"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000715, VkglTestCase_000715_1, VkglTestCase_000715_2);

#define VkglTestCase_000716_1 "dEQP-GLES3.functional.buffer."
#define VkglTestCase_000716_2 "copy.basic.uniform_copy_write"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000716, VkglTestCase_000716_1, VkglTestCase_000716_2);

#define VkglTestCase_000717_1 "dEQP-GLES3.functional.buffer.c"
#define VkglTestCase_000717_2 "opy.basic.uniform_element_array"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000717, VkglTestCase_000717_1, VkglTestCase_000717_2);

#define VkglTestCase_000718_1 "dEQP-GLES3.functional.buffer."
#define VkglTestCase_000718_2 "copy.basic.uniform_pixel_pack"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000718, VkglTestCase_000718_1, VkglTestCase_000718_2);

#define VkglTestCase_000719_1 "dEQP-GLES3.functional.buffer.c"
#define VkglTestCase_000719_2 "opy.basic.uniform_pixel_unpack"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000719, VkglTestCase_000719_1, VkglTestCase_000719_2);

#define VkglTestCase_000720_1 "dEQP-GLES3.functional.buffer.copy"
#define VkglTestCase_000720_2 ".basic.uniform_transform_feedback"
SHRINK_HWTEST_F(ActsDeqpgles30001TestSuite, TestCase_000720, VkglTestCase_000720_1, VkglTestCase_000720_2);
