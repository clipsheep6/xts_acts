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
#include "../Deqpgles31BaseFunc.h"
#include "../ActsDeqpgles310032TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_031785_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_031785_2 "viewclass_16_bits.r16i_r16i.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031785, VkglTestCase_031785_1, VkglTestCase_031785_2);

#define VkglTestCase_031786_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_031786_2 "viewclass_16_bits.r16i_r16i.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031786, VkglTestCase_031786_1, VkglTestCase_031786_2);

#define VkglTestCase_031787_1 "dEQP-GLES31.functional.copy_image.non_compressed"
#define VkglTestCase_031787_2 ".viewclass_16_bits.r16i_r16i.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031787, VkglTestCase_031787_1, VkglTestCase_031787_2);

#define VkglTestCase_031788_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_031788_2 "wclass_16_bits.r16i_r16i.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031788, VkglTestCase_031788_1, VkglTestCase_031788_2);

#define VkglTestCase_031789_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_031789_2 "ewclass_16_bits.r16i_r16i.texture2d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031789, VkglTestCase_031789_1, VkglTestCase_031789_2);

#define VkglTestCase_031790_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_031790_2 "viewclass_16_bits.r16i_r16i.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031790, VkglTestCase_031790_1, VkglTestCase_031790_2);

#define VkglTestCase_031791_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_031791_2 "viewclass_16_bits.r16i_r16i.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031791, VkglTestCase_031791_1, VkglTestCase_031791_2);

#define VkglTestCase_031792_1 "dEQP-GLES31.functional.copy_image.non_compressed"
#define VkglTestCase_031792_2 ".viewclass_16_bits.r16i_r16i.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031792, VkglTestCase_031792_1, VkglTestCase_031792_2);

#define VkglTestCase_031793_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_031793_2 "wclass_16_bits.r16i_r16i.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031793, VkglTestCase_031793_1, VkglTestCase_031793_2);

#define VkglTestCase_031794_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_031794_2 "ewclass_16_bits.r16i_r16i.texture3d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031794, VkglTestCase_031794_1, VkglTestCase_031794_2);

#define VkglTestCase_031795_1 "dEQP-GLES31.functional.copy_image.non_compressed"
#define VkglTestCase_031795_2 ".viewclass_16_bits.r16i_r16i.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031795, VkglTestCase_031795_1, VkglTestCase_031795_2);

#define VkglTestCase_031796_1 "dEQP-GLES31.functional.copy_image.non_compressed"
#define VkglTestCase_031796_2 ".viewclass_16_bits.r16i_r16i.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031796, VkglTestCase_031796_1, VkglTestCase_031796_2);

#define VkglTestCase_031797_1 "dEQP-GLES31.functional.copy_image.non_compresse"
#define VkglTestCase_031797_2 "d.viewclass_16_bits.r16i_r16i.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031797, VkglTestCase_031797_1, VkglTestCase_031797_2);

#define VkglTestCase_031798_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_031798_2 "ewclass_16_bits.r16i_r16i.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031798, VkglTestCase_031798_1, VkglTestCase_031798_2);

#define VkglTestCase_031799_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_031799_2 "iewclass_16_bits.r16i_r16i.cubemap_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031799, VkglTestCase_031799_1, VkglTestCase_031799_2);

#define VkglTestCase_031800_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_031800_2 "wclass_16_bits.r16i_r16i.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031800, VkglTestCase_031800_1, VkglTestCase_031800_2);

#define VkglTestCase_031801_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_031801_2 "wclass_16_bits.r16i_r16i.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031801, VkglTestCase_031801_1, VkglTestCase_031801_2);

#define VkglTestCase_031802_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_031802_2 "ewclass_16_bits.r16i_r16i.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031802, VkglTestCase_031802_1, VkglTestCase_031802_2);

#define VkglTestCase_031803_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_031803_2 "ass_16_bits.r16i_r16i.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031803, VkglTestCase_031803_1, VkglTestCase_031803_2);

#define VkglTestCase_031804_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_031804_2 "lass_16_bits.r16i_r16i.texture2d_array_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031804, VkglTestCase_031804_1, VkglTestCase_031804_2);

#define VkglTestCase_031805_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_031805_2 "ewclass_16_bits.r16i_r16i.renderbuffer_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031805, VkglTestCase_031805_1, VkglTestCase_031805_2);

#define VkglTestCase_031806_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_031806_2 "ewclass_16_bits.r16i_r16i.renderbuffer_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031806, VkglTestCase_031806_1, VkglTestCase_031806_2);

#define VkglTestCase_031807_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_031807_2 "iewclass_16_bits.r16i_r16i.renderbuffer_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031807, VkglTestCase_031807_1, VkglTestCase_031807_2);

#define VkglTestCase_031808_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_031808_2 "lass_16_bits.r16i_r16i.renderbuffer_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031808, VkglTestCase_031808_1, VkglTestCase_031808_2);

#define VkglTestCase_031809_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_031809_2 "wclass_16_bits.r16i_r16i.renderbuffer_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031809, VkglTestCase_031809_1, VkglTestCase_031809_2);
