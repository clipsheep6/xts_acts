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

#define VkglTestCase_036819_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bit"
#define VkglTestCase_036819_2 "s_mixed.rgba32i_rgba_astc_12x12_khr.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036819, VkglTestCase_036819_1, VkglTestCase_036819_2);

#define VkglTestCase_036820_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bit"
#define VkglTestCase_036820_2 "s_mixed.rgba32i_rgba_astc_12x12_khr.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036820, VkglTestCase_036820_1, VkglTestCase_036820_2);

#define VkglTestCase_036821_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_036821_2 "ts_mixed.rgba32i_rgba_astc_12x12_khr.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036821, VkglTestCase_036821_1, VkglTestCase_036821_2);

#define VkglTestCase_036822_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_036822_2 "ixed.rgba32i_rgba_astc_12x12_khr.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036822, VkglTestCase_036822_1, VkglTestCase_036822_2);

#define VkglTestCase_036823_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bit"
#define VkglTestCase_036823_2 "s_mixed.rgba32i_rgba_astc_12x12_khr.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036823, VkglTestCase_036823_1, VkglTestCase_036823_2);

#define VkglTestCase_036824_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bit"
#define VkglTestCase_036824_2 "s_mixed.rgba32i_rgba_astc_12x12_khr.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036824, VkglTestCase_036824_1, VkglTestCase_036824_2);

#define VkglTestCase_036825_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_036825_2 "ts_mixed.rgba32i_rgba_astc_12x12_khr.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036825, VkglTestCase_036825_1, VkglTestCase_036825_2);

#define VkglTestCase_036826_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_036826_2 "ixed.rgba32i_rgba_astc_12x12_khr.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036826, VkglTestCase_036826_1, VkglTestCase_036826_2);

#define VkglTestCase_036827_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_036827_2 "ts_mixed.rgba32i_rgba_astc_12x12_khr.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036827, VkglTestCase_036827_1, VkglTestCase_036827_2);

#define VkglTestCase_036828_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_036828_2 "ts_mixed.rgba32i_rgba_astc_12x12_khr.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036828, VkglTestCase_036828_1, VkglTestCase_036828_2);

#define VkglTestCase_036829_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_b"
#define VkglTestCase_036829_2 "its_mixed.rgba32i_rgba_astc_12x12_khr.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036829, VkglTestCase_036829_1, VkglTestCase_036829_2);

#define VkglTestCase_036830_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_036830_2 "mixed.rgba32i_rgba_astc_12x12_khr.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036830, VkglTestCase_036830_1, VkglTestCase_036830_2);

#define VkglTestCase_036831_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_036831_2 "ixed.rgba32i_rgba_astc_12x12_khr.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036831, VkglTestCase_036831_1, VkglTestCase_036831_2);

#define VkglTestCase_036832_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_036832_2 "ixed.rgba32i_rgba_astc_12x12_khr.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036832, VkglTestCase_036832_1, VkglTestCase_036832_2);

#define VkglTestCase_036833_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_036833_2 "mixed.rgba32i_rgba_astc_12x12_khr.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036833, VkglTestCase_036833_1, VkglTestCase_036833_2);

#define VkglTestCase_036834_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
#define VkglTestCase_036834_2 "d.rgba32i_rgba_astc_12x12_khr.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036834, VkglTestCase_036834_1, VkglTestCase_036834_2);

#define VkglTestCase_036835_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_036835_2 "mixed.rgba32i_rgba_astc_12x12_khr.renderbuffer_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036835, VkglTestCase_036835_1, VkglTestCase_036835_2);

#define VkglTestCase_036836_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_036836_2 "mixed.rgba32i_rgba_astc_12x12_khr.renderbuffer_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036836, VkglTestCase_036836_1, VkglTestCase_036836_2);

#define VkglTestCase_036837_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits"
#define VkglTestCase_036837_2 "_mixed.rgba32i_rgba_astc_12x12_khr.renderbuffer_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036837, VkglTestCase_036837_1, VkglTestCase_036837_2);

#define VkglTestCase_036838_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mix"
#define VkglTestCase_036838_2 "ed.rgba32i_rgba_astc_12x12_khr.renderbuffer_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036838, VkglTestCase_036838_1, VkglTestCase_036838_2);
