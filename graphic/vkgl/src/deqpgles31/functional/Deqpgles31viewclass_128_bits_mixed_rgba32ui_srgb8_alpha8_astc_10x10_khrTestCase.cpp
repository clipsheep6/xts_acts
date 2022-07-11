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

#define VkglTestCase_036099_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mix"
#define VkglTestCase_036099_2 "ed.rgba32ui_srgb8_alpha8_astc_10x10_khr.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036099, VkglTestCase_036099_1, VkglTestCase_036099_2);

#define VkglTestCase_036100_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mix"
#define VkglTestCase_036100_2 "ed.rgba32ui_srgb8_alpha8_astc_10x10_khr.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036100, VkglTestCase_036100_1, VkglTestCase_036100_2);

#define VkglTestCase_036101_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
#define VkglTestCase_036101_2 "xed.rgba32ui_srgb8_alpha8_astc_10x10_khr.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036101, VkglTestCase_036101_1, VkglTestCase_036101_2);

#define VkglTestCase_036102_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed."
#define VkglTestCase_036102_2 "rgba32ui_srgb8_alpha8_astc_10x10_khr.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036102, VkglTestCase_036102_1, VkglTestCase_036102_2);

#define VkglTestCase_036103_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mix"
#define VkglTestCase_036103_2 "ed.rgba32ui_srgb8_alpha8_astc_10x10_khr.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036103, VkglTestCase_036103_1, VkglTestCase_036103_2);

#define VkglTestCase_036104_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mix"
#define VkglTestCase_036104_2 "ed.rgba32ui_srgb8_alpha8_astc_10x10_khr.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036104, VkglTestCase_036104_1, VkglTestCase_036104_2);

#define VkglTestCase_036105_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
#define VkglTestCase_036105_2 "xed.rgba32ui_srgb8_alpha8_astc_10x10_khr.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036105, VkglTestCase_036105_1, VkglTestCase_036105_2);

#define VkglTestCase_036106_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed."
#define VkglTestCase_036106_2 "rgba32ui_srgb8_alpha8_astc_10x10_khr.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036106, VkglTestCase_036106_1, VkglTestCase_036106_2);

#define VkglTestCase_036107_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
#define VkglTestCase_036107_2 "xed.rgba32ui_srgb8_alpha8_astc_10x10_khr.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036107, VkglTestCase_036107_1, VkglTestCase_036107_2);

#define VkglTestCase_036108_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
#define VkglTestCase_036108_2 "xed.rgba32ui_srgb8_alpha8_astc_10x10_khr.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036108, VkglTestCase_036108_1, VkglTestCase_036108_2);

#define VkglTestCase_036109_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_036109_2 "ixed.rgba32ui_srgb8_alpha8_astc_10x10_khr.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036109, VkglTestCase_036109_1, VkglTestCase_036109_2);

#define VkglTestCase_036110_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed"
#define VkglTestCase_036110_2 ".rgba32ui_srgb8_alpha8_astc_10x10_khr.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036110, VkglTestCase_036110_1, VkglTestCase_036110_2);

#define VkglTestCase_036111_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed."
#define VkglTestCase_036111_2 "rgba32ui_srgb8_alpha8_astc_10x10_khr.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036111, VkglTestCase_036111_1, VkglTestCase_036111_2);

#define VkglTestCase_036112_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed."
#define VkglTestCase_036112_2 "rgba32ui_srgb8_alpha8_astc_10x10_khr.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036112, VkglTestCase_036112_1, VkglTestCase_036112_2);

#define VkglTestCase_036113_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed"
#define VkglTestCase_036113_2 ".rgba32ui_srgb8_alpha8_astc_10x10_khr.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036113, VkglTestCase_036113_1, VkglTestCase_036113_2);

#define VkglTestCase_036114_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed.rgb"
#define VkglTestCase_036114_2 "a32ui_srgb8_alpha8_astc_10x10_khr.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036114, VkglTestCase_036114_1, VkglTestCase_036114_2);

#define VkglTestCase_036115_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
#define VkglTestCase_036115_2 "d.rgba32ui_srgb8_alpha8_astc_10x10_khr.renderbuffer_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036115, VkglTestCase_036115_1, VkglTestCase_036115_2);

#define VkglTestCase_036116_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
#define VkglTestCase_036116_2 "d.rgba32ui_srgb8_alpha8_astc_10x10_khr.renderbuffer_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036116, VkglTestCase_036116_1, VkglTestCase_036116_2);

#define VkglTestCase_036117_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mix"
#define VkglTestCase_036117_2 "ed.rgba32ui_srgb8_alpha8_astc_10x10_khr.renderbuffer_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036117, VkglTestCase_036117_1, VkglTestCase_036117_2);

#define VkglTestCase_036118_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed.r"
#define VkglTestCase_036118_2 "gba32ui_srgb8_alpha8_astc_10x10_khr.renderbuffer_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036118, VkglTestCase_036118_1, VkglTestCase_036118_2);
