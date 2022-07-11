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

#define VkglTestCase_036039_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
#define VkglTestCase_036039_2 "xed.srgb8_alpha8_astc_10x6_khr_rgba32ui.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036039, VkglTestCase_036039_1, VkglTestCase_036039_2);

#define VkglTestCase_036040_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
#define VkglTestCase_036040_2 "xed.srgb8_alpha8_astc_10x6_khr_rgba32ui.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036040, VkglTestCase_036040_1, VkglTestCase_036040_2);

#define VkglTestCase_036041_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_036041_2 "ixed.srgb8_alpha8_astc_10x6_khr_rgba32ui.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036041, VkglTestCase_036041_1, VkglTestCase_036041_2);

#define VkglTestCase_036042_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed"
#define VkglTestCase_036042_2 ".srgb8_alpha8_astc_10x6_khr_rgba32ui.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036042, VkglTestCase_036042_1, VkglTestCase_036042_2);

#define VkglTestCase_036043_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
#define VkglTestCase_036043_2 "d.srgb8_alpha8_astc_10x6_khr_rgba32ui.texture2d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036043, VkglTestCase_036043_1, VkglTestCase_036043_2);

#define VkglTestCase_036044_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
#define VkglTestCase_036044_2 "xed.srgb8_alpha8_astc_10x6_khr_rgba32ui.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036044, VkglTestCase_036044_1, VkglTestCase_036044_2);

#define VkglTestCase_036045_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
#define VkglTestCase_036045_2 "xed.srgb8_alpha8_astc_10x6_khr_rgba32ui.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036045, VkglTestCase_036045_1, VkglTestCase_036045_2);

#define VkglTestCase_036046_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_036046_2 "ixed.srgb8_alpha8_astc_10x6_khr_rgba32ui.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036046, VkglTestCase_036046_1, VkglTestCase_036046_2);

#define VkglTestCase_036047_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed"
#define VkglTestCase_036047_2 ".srgb8_alpha8_astc_10x6_khr_rgba32ui.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036047, VkglTestCase_036047_1, VkglTestCase_036047_2);

#define VkglTestCase_036048_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
#define VkglTestCase_036048_2 "d.srgb8_alpha8_astc_10x6_khr_rgba32ui.texture3d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036048, VkglTestCase_036048_1, VkglTestCase_036048_2);

#define VkglTestCase_036049_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_036049_2 "ixed.srgb8_alpha8_astc_10x6_khr_rgba32ui.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036049, VkglTestCase_036049_1, VkglTestCase_036049_2);

#define VkglTestCase_036050_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_036050_2 "ixed.srgb8_alpha8_astc_10x6_khr_rgba32ui.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036050, VkglTestCase_036050_1, VkglTestCase_036050_2);

#define VkglTestCase_036051_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_036051_2 "mixed.srgb8_alpha8_astc_10x6_khr_rgba32ui.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036051, VkglTestCase_036051_1, VkglTestCase_036051_2);

#define VkglTestCase_036052_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
#define VkglTestCase_036052_2 "d.srgb8_alpha8_astc_10x6_khr_rgba32ui.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036052, VkglTestCase_036052_1, VkglTestCase_036052_2);

#define VkglTestCase_036053_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mix"
#define VkglTestCase_036053_2 "ed.srgb8_alpha8_astc_10x6_khr_rgba32ui.cubemap_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036053, VkglTestCase_036053_1, VkglTestCase_036053_2);

#define VkglTestCase_036054_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed"
#define VkglTestCase_036054_2 ".srgb8_alpha8_astc_10x6_khr_rgba32ui.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036054, VkglTestCase_036054_1, VkglTestCase_036054_2);

#define VkglTestCase_036055_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed"
#define VkglTestCase_036055_2 ".srgb8_alpha8_astc_10x6_khr_rgba32ui.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036055, VkglTestCase_036055_1, VkglTestCase_036055_2);

#define VkglTestCase_036056_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
#define VkglTestCase_036056_2 "d.srgb8_alpha8_astc_10x6_khr_rgba32ui.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036056, VkglTestCase_036056_1, VkglTestCase_036056_2);

#define VkglTestCase_036057_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed.sr"
#define VkglTestCase_036057_2 "gb8_alpha8_astc_10x6_khr_rgba32ui.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036057, VkglTestCase_036057_1, VkglTestCase_036057_2);

#define VkglTestCase_036058_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed.s"
#define VkglTestCase_036058_2 "rgb8_alpha8_astc_10x6_khr_rgba32ui.texture2d_array_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036058, VkglTestCase_036058_1, VkglTestCase_036058_2);
