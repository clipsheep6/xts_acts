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

#define VkglTestCase_036699_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bit"
#define VkglTestCase_036699_2 "s_mixed.rgba32i_rgba_astc_10x8_khr.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036699, VkglTestCase_036699_1, VkglTestCase_036699_2);

#define VkglTestCase_036700_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bit"
#define VkglTestCase_036700_2 "s_mixed.rgba32i_rgba_astc_10x8_khr.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036700, VkglTestCase_036700_1, VkglTestCase_036700_2);

#define VkglTestCase_036701_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_036701_2 "ts_mixed.rgba32i_rgba_astc_10x8_khr.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036701, VkglTestCase_036701_1, VkglTestCase_036701_2);

#define VkglTestCase_036702_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_036702_2 "ixed.rgba32i_rgba_astc_10x8_khr.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036702, VkglTestCase_036702_1, VkglTestCase_036702_2);

#define VkglTestCase_036703_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bit"
#define VkglTestCase_036703_2 "s_mixed.rgba32i_rgba_astc_10x8_khr.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036703, VkglTestCase_036703_1, VkglTestCase_036703_2);

#define VkglTestCase_036704_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bit"
#define VkglTestCase_036704_2 "s_mixed.rgba32i_rgba_astc_10x8_khr.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036704, VkglTestCase_036704_1, VkglTestCase_036704_2);

#define VkglTestCase_036705_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_036705_2 "ts_mixed.rgba32i_rgba_astc_10x8_khr.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036705, VkglTestCase_036705_1, VkglTestCase_036705_2);

#define VkglTestCase_036706_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_036706_2 "ixed.rgba32i_rgba_astc_10x8_khr.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036706, VkglTestCase_036706_1, VkglTestCase_036706_2);

#define VkglTestCase_036707_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_036707_2 "ts_mixed.rgba32i_rgba_astc_10x8_khr.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036707, VkglTestCase_036707_1, VkglTestCase_036707_2);

#define VkglTestCase_036708_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_036708_2 "ts_mixed.rgba32i_rgba_astc_10x8_khr.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036708, VkglTestCase_036708_1, VkglTestCase_036708_2);

#define VkglTestCase_036709_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_b"
#define VkglTestCase_036709_2 "its_mixed.rgba32i_rgba_astc_10x8_khr.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036709, VkglTestCase_036709_1, VkglTestCase_036709_2);

#define VkglTestCase_036710_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_036710_2 "mixed.rgba32i_rgba_astc_10x8_khr.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036710, VkglTestCase_036710_1, VkglTestCase_036710_2);

#define VkglTestCase_036711_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_036711_2 "ixed.rgba32i_rgba_astc_10x8_khr.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036711, VkglTestCase_036711_1, VkglTestCase_036711_2);

#define VkglTestCase_036712_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_036712_2 "ixed.rgba32i_rgba_astc_10x8_khr.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036712, VkglTestCase_036712_1, VkglTestCase_036712_2);

#define VkglTestCase_036713_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_036713_2 "mixed.rgba32i_rgba_astc_10x8_khr.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036713, VkglTestCase_036713_1, VkglTestCase_036713_2);

#define VkglTestCase_036714_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
#define VkglTestCase_036714_2 "d.rgba32i_rgba_astc_10x8_khr.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036714, VkglTestCase_036714_1, VkglTestCase_036714_2);

#define VkglTestCase_036715_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits"
#define VkglTestCase_036715_2 "_mixed.rgba32i_rgba_astc_10x8_khr.renderbuffer_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036715, VkglTestCase_036715_1, VkglTestCase_036715_2);

#define VkglTestCase_036716_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits"
#define VkglTestCase_036716_2 "_mixed.rgba32i_rgba_astc_10x8_khr.renderbuffer_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036716, VkglTestCase_036716_1, VkglTestCase_036716_2);

#define VkglTestCase_036717_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bit"
#define VkglTestCase_036717_2 "s_mixed.rgba32i_rgba_astc_10x8_khr.renderbuffer_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036717, VkglTestCase_036717_1, VkglTestCase_036717_2);

#define VkglTestCase_036718_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
#define VkglTestCase_036718_2 "xed.rgba32i_rgba_astc_10x8_khr.renderbuffer_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036718, VkglTestCase_036718_1, VkglTestCase_036718_2);
