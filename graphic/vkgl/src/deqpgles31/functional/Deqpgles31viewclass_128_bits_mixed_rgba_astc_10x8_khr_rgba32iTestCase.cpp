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
#include "../ActsDeqpgles310037TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_036719_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bit"
#define VkglTestCase_036719_2 "s_mixed.rgba_astc_10x8_khr_rgba32i.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036719, VkglTestCase_036719_1, VkglTestCase_036719_2);

#define VkglTestCase_036720_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bit"
#define VkglTestCase_036720_2 "s_mixed.rgba_astc_10x8_khr_rgba32i.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036720, VkglTestCase_036720_1, VkglTestCase_036720_2);

#define VkglTestCase_036721_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_036721_2 "ts_mixed.rgba_astc_10x8_khr_rgba32i.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036721, VkglTestCase_036721_1, VkglTestCase_036721_2);

#define VkglTestCase_036722_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_036722_2 "ixed.rgba_astc_10x8_khr_rgba32i.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036722, VkglTestCase_036722_1, VkglTestCase_036722_2);

#define VkglTestCase_036723_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits"
#define VkglTestCase_036723_2 "_mixed.rgba_astc_10x8_khr_rgba32i.texture2d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036723, VkglTestCase_036723_1, VkglTestCase_036723_2);

#define VkglTestCase_036724_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bit"
#define VkglTestCase_036724_2 "s_mixed.rgba_astc_10x8_khr_rgba32i.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036724, VkglTestCase_036724_1, VkglTestCase_036724_2);

#define VkglTestCase_036725_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bit"
#define VkglTestCase_036725_2 "s_mixed.rgba_astc_10x8_khr_rgba32i.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036725, VkglTestCase_036725_1, VkglTestCase_036725_2);

#define VkglTestCase_036726_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_036726_2 "ts_mixed.rgba_astc_10x8_khr_rgba32i.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036726, VkglTestCase_036726_1, VkglTestCase_036726_2);

#define VkglTestCase_036727_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_036727_2 "ixed.rgba_astc_10x8_khr_rgba32i.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036727, VkglTestCase_036727_1, VkglTestCase_036727_2);

#define VkglTestCase_036728_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits"
#define VkglTestCase_036728_2 "_mixed.rgba_astc_10x8_khr_rgba32i.texture3d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036728, VkglTestCase_036728_1, VkglTestCase_036728_2);

#define VkglTestCase_036729_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_036729_2 "ts_mixed.rgba_astc_10x8_khr_rgba32i.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036729, VkglTestCase_036729_1, VkglTestCase_036729_2);

#define VkglTestCase_036730_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_036730_2 "ts_mixed.rgba_astc_10x8_khr_rgba32i.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036730, VkglTestCase_036730_1, VkglTestCase_036730_2);

#define VkglTestCase_036731_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_b"
#define VkglTestCase_036731_2 "its_mixed.rgba_astc_10x8_khr_rgba32i.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036731, VkglTestCase_036731_1, VkglTestCase_036731_2);

#define VkglTestCase_036732_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_036732_2 "mixed.rgba_astc_10x8_khr_rgba32i.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036732, VkglTestCase_036732_1, VkglTestCase_036732_2);

#define VkglTestCase_036733_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bit"
#define VkglTestCase_036733_2 "s_mixed.rgba_astc_10x8_khr_rgba32i.cubemap_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036733, VkglTestCase_036733_1, VkglTestCase_036733_2);

#define VkglTestCase_036734_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_036734_2 "ixed.rgba_astc_10x8_khr_rgba32i.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036734, VkglTestCase_036734_1, VkglTestCase_036734_2);

#define VkglTestCase_036735_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_036735_2 "ixed.rgba_astc_10x8_khr_rgba32i.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036735, VkglTestCase_036735_1, VkglTestCase_036735_2);

#define VkglTestCase_036736_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_036736_2 "mixed.rgba_astc_10x8_khr_rgba32i.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036736, VkglTestCase_036736_1, VkglTestCase_036736_2);

#define VkglTestCase_036737_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
#define VkglTestCase_036737_2 "d.rgba_astc_10x8_khr_rgba32i.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036737, VkglTestCase_036737_1, VkglTestCase_036737_2);

#define VkglTestCase_036738_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
#define VkglTestCase_036738_2 "xed.rgba_astc_10x8_khr_rgba32i.texture2d_array_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036738, VkglTestCase_036738_1, VkglTestCase_036738_2);
