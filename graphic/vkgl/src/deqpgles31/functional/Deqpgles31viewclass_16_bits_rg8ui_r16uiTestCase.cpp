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
#include "../ActsDeqpgles310033TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_032470_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_032470_2 "iewclass_16_bits.rg8ui_r16ui.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032470, VkglTestCase_032470_1, VkglTestCase_032470_2);

#define VkglTestCase_032471_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_032471_2 "iewclass_16_bits.rg8ui_r16ui.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032471, VkglTestCase_032471_1, VkglTestCase_032471_2);

#define VkglTestCase_032472_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_032472_2 "viewclass_16_bits.rg8ui_r16ui.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032472, VkglTestCase_032472_1, VkglTestCase_032472_2);

#define VkglTestCase_032473_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_032473_2 "class_16_bits.rg8ui_r16ui.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032473, VkglTestCase_032473_1, VkglTestCase_032473_2);

#define VkglTestCase_032474_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_032474_2 "wclass_16_bits.rg8ui_r16ui.texture2d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032474, VkglTestCase_032474_1, VkglTestCase_032474_2);

#define VkglTestCase_032475_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_032475_2 "iewclass_16_bits.rg8ui_r16ui.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032475, VkglTestCase_032475_1, VkglTestCase_032475_2);

#define VkglTestCase_032476_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_032476_2 "iewclass_16_bits.rg8ui_r16ui.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032476, VkglTestCase_032476_1, VkglTestCase_032476_2);

#define VkglTestCase_032477_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_032477_2 "viewclass_16_bits.rg8ui_r16ui.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032477, VkglTestCase_032477_1, VkglTestCase_032477_2);

#define VkglTestCase_032478_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_032478_2 "class_16_bits.rg8ui_r16ui.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032478, VkglTestCase_032478_1, VkglTestCase_032478_2);

#define VkglTestCase_032479_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_032479_2 "wclass_16_bits.rg8ui_r16ui.texture3d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032479, VkglTestCase_032479_1, VkglTestCase_032479_2);

#define VkglTestCase_032480_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_032480_2 "viewclass_16_bits.rg8ui_r16ui.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032480, VkglTestCase_032480_1, VkglTestCase_032480_2);

#define VkglTestCase_032481_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_032481_2 "viewclass_16_bits.rg8ui_r16ui.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032481, VkglTestCase_032481_1, VkglTestCase_032481_2);

#define VkglTestCase_032482_1 "dEQP-GLES31.functional.copy_image.non_compressed"
#define VkglTestCase_032482_2 ".viewclass_16_bits.rg8ui_r16ui.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032482, VkglTestCase_032482_1, VkglTestCase_032482_2);

#define VkglTestCase_032483_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_032483_2 "wclass_16_bits.rg8ui_r16ui.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032483, VkglTestCase_032483_1, VkglTestCase_032483_2);

#define VkglTestCase_032484_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_032484_2 "ewclass_16_bits.rg8ui_r16ui.cubemap_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032484, VkglTestCase_032484_1, VkglTestCase_032484_2);

#define VkglTestCase_032485_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_032485_2 "class_16_bits.rg8ui_r16ui.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032485, VkglTestCase_032485_1, VkglTestCase_032485_2);

#define VkglTestCase_032486_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_032486_2 "class_16_bits.rg8ui_r16ui.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032486, VkglTestCase_032486_1, VkglTestCase_032486_2);

#define VkglTestCase_032487_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_032487_2 "wclass_16_bits.rg8ui_r16ui.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032487, VkglTestCase_032487_1, VkglTestCase_032487_2);

#define VkglTestCase_032488_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_032488_2 "ss_16_bits.rg8ui_r16ui.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032488, VkglTestCase_032488_1, VkglTestCase_032488_2);

#define VkglTestCase_032489_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_032489_2 "ass_16_bits.rg8ui_r16ui.texture2d_array_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032489, VkglTestCase_032489_1, VkglTestCase_032489_2);

#define VkglTestCase_032490_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_032490_2 "wclass_16_bits.rg8ui_r16ui.renderbuffer_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032490, VkglTestCase_032490_1, VkglTestCase_032490_2);

#define VkglTestCase_032491_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_032491_2 "wclass_16_bits.rg8ui_r16ui.renderbuffer_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032491, VkglTestCase_032491_1, VkglTestCase_032491_2);

#define VkglTestCase_032492_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_032492_2 "ewclass_16_bits.rg8ui_r16ui.renderbuffer_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032492, VkglTestCase_032492_1, VkglTestCase_032492_2);

#define VkglTestCase_032493_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_032493_2 "ass_16_bits.rg8ui_r16ui.renderbuffer_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032493, VkglTestCase_032493_1, VkglTestCase_032493_2);

#define VkglTestCase_032494_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_032494_2 "class_16_bits.rg8ui_r16ui.renderbuffer_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032494, VkglTestCase_032494_1, VkglTestCase_032494_2);
