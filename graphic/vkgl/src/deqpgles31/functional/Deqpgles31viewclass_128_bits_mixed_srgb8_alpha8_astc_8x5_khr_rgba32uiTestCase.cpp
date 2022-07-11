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
#include "../ActsDeqpgles310036TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_035879_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
#define VkglTestCase_035879_2 "xed.srgb8_alpha8_astc_8x5_khr_rgba32ui.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035879, VkglTestCase_035879_1, VkglTestCase_035879_2);

#define VkglTestCase_035880_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
#define VkglTestCase_035880_2 "xed.srgb8_alpha8_astc_8x5_khr_rgba32ui.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035880, VkglTestCase_035880_1, VkglTestCase_035880_2);

#define VkglTestCase_035881_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_035881_2 "ixed.srgb8_alpha8_astc_8x5_khr_rgba32ui.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035881, VkglTestCase_035881_1, VkglTestCase_035881_2);

#define VkglTestCase_035882_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed"
#define VkglTestCase_035882_2 ".srgb8_alpha8_astc_8x5_khr_rgba32ui.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035882, VkglTestCase_035882_1, VkglTestCase_035882_2);

#define VkglTestCase_035883_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mix"
#define VkglTestCase_035883_2 "ed.srgb8_alpha8_astc_8x5_khr_rgba32ui.texture2d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035883, VkglTestCase_035883_1, VkglTestCase_035883_2);

#define VkglTestCase_035884_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
#define VkglTestCase_035884_2 "xed.srgb8_alpha8_astc_8x5_khr_rgba32ui.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035884, VkglTestCase_035884_1, VkglTestCase_035884_2);

#define VkglTestCase_035885_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
#define VkglTestCase_035885_2 "xed.srgb8_alpha8_astc_8x5_khr_rgba32ui.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035885, VkglTestCase_035885_1, VkglTestCase_035885_2);

#define VkglTestCase_035886_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_035886_2 "ixed.srgb8_alpha8_astc_8x5_khr_rgba32ui.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035886, VkglTestCase_035886_1, VkglTestCase_035886_2);

#define VkglTestCase_035887_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed"
#define VkglTestCase_035887_2 ".srgb8_alpha8_astc_8x5_khr_rgba32ui.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035887, VkglTestCase_035887_1, VkglTestCase_035887_2);

#define VkglTestCase_035888_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mix"
#define VkglTestCase_035888_2 "ed.srgb8_alpha8_astc_8x5_khr_rgba32ui.texture3d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035888, VkglTestCase_035888_1, VkglTestCase_035888_2);

#define VkglTestCase_035889_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_035889_2 "ixed.srgb8_alpha8_astc_8x5_khr_rgba32ui.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035889, VkglTestCase_035889_1, VkglTestCase_035889_2);

#define VkglTestCase_035890_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_035890_2 "ixed.srgb8_alpha8_astc_8x5_khr_rgba32ui.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035890, VkglTestCase_035890_1, VkglTestCase_035890_2);

#define VkglTestCase_035891_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_035891_2 "mixed.srgb8_alpha8_astc_8x5_khr_rgba32ui.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035891, VkglTestCase_035891_1, VkglTestCase_035891_2);

#define VkglTestCase_035892_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
#define VkglTestCase_035892_2 "d.srgb8_alpha8_astc_8x5_khr_rgba32ui.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035892, VkglTestCase_035892_1, VkglTestCase_035892_2);

#define VkglTestCase_035893_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
#define VkglTestCase_035893_2 "xed.srgb8_alpha8_astc_8x5_khr_rgba32ui.cubemap_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035893, VkglTestCase_035893_1, VkglTestCase_035893_2);

#define VkglTestCase_035894_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed"
#define VkglTestCase_035894_2 ".srgb8_alpha8_astc_8x5_khr_rgba32ui.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035894, VkglTestCase_035894_1, VkglTestCase_035894_2);

#define VkglTestCase_035895_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed"
#define VkglTestCase_035895_2 ".srgb8_alpha8_astc_8x5_khr_rgba32ui.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035895, VkglTestCase_035895_1, VkglTestCase_035895_2);

#define VkglTestCase_035896_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
#define VkglTestCase_035896_2 "d.srgb8_alpha8_astc_8x5_khr_rgba32ui.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035896, VkglTestCase_035896_1, VkglTestCase_035896_2);

#define VkglTestCase_035897_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed.sr"
#define VkglTestCase_035897_2 "gb8_alpha8_astc_8x5_khr_rgba32ui.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035897, VkglTestCase_035897_1, VkglTestCase_035897_2);

#define VkglTestCase_035898_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed."
#define VkglTestCase_035898_2 "srgb8_alpha8_astc_8x5_khr_rgba32ui.texture2d_array_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035898, VkglTestCase_035898_1, VkglTestCase_035898_2);
