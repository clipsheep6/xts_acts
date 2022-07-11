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

#define VkglTestCase_036159_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mix"
#define VkglTestCase_036159_2 "ed.srgb8_alpha8_astc_12x10_khr_rgba32ui.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036159, VkglTestCase_036159_1, VkglTestCase_036159_2);

#define VkglTestCase_036160_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mix"
#define VkglTestCase_036160_2 "ed.srgb8_alpha8_astc_12x10_khr_rgba32ui.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036160, VkglTestCase_036160_1, VkglTestCase_036160_2);

#define VkglTestCase_036161_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
#define VkglTestCase_036161_2 "xed.srgb8_alpha8_astc_12x10_khr_rgba32ui.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036161, VkglTestCase_036161_1, VkglTestCase_036161_2);

#define VkglTestCase_036162_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed."
#define VkglTestCase_036162_2 "srgb8_alpha8_astc_12x10_khr_rgba32ui.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036162, VkglTestCase_036162_1, VkglTestCase_036162_2);

#define VkglTestCase_036163_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
#define VkglTestCase_036163_2 "d.srgb8_alpha8_astc_12x10_khr_rgba32ui.texture2d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036163, VkglTestCase_036163_1, VkglTestCase_036163_2);

#define VkglTestCase_036164_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mix"
#define VkglTestCase_036164_2 "ed.srgb8_alpha8_astc_12x10_khr_rgba32ui.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036164, VkglTestCase_036164_1, VkglTestCase_036164_2);

#define VkglTestCase_036165_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mix"
#define VkglTestCase_036165_2 "ed.srgb8_alpha8_astc_12x10_khr_rgba32ui.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036165, VkglTestCase_036165_1, VkglTestCase_036165_2);

#define VkglTestCase_036166_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
#define VkglTestCase_036166_2 "xed.srgb8_alpha8_astc_12x10_khr_rgba32ui.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036166, VkglTestCase_036166_1, VkglTestCase_036166_2);

#define VkglTestCase_036167_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed."
#define VkglTestCase_036167_2 "srgb8_alpha8_astc_12x10_khr_rgba32ui.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036167, VkglTestCase_036167_1, VkglTestCase_036167_2);

#define VkglTestCase_036168_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
#define VkglTestCase_036168_2 "d.srgb8_alpha8_astc_12x10_khr_rgba32ui.texture3d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036168, VkglTestCase_036168_1, VkglTestCase_036168_2);

#define VkglTestCase_036169_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
#define VkglTestCase_036169_2 "xed.srgb8_alpha8_astc_12x10_khr_rgba32ui.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036169, VkglTestCase_036169_1, VkglTestCase_036169_2);

#define VkglTestCase_036170_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
#define VkglTestCase_036170_2 "xed.srgb8_alpha8_astc_12x10_khr_rgba32ui.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036170, VkglTestCase_036170_1, VkglTestCase_036170_2);

#define VkglTestCase_036171_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_036171_2 "ixed.srgb8_alpha8_astc_12x10_khr_rgba32ui.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036171, VkglTestCase_036171_1, VkglTestCase_036171_2);

#define VkglTestCase_036172_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed"
#define VkglTestCase_036172_2 ".srgb8_alpha8_astc_12x10_khr_rgba32ui.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036172, VkglTestCase_036172_1, VkglTestCase_036172_2);

#define VkglTestCase_036173_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mix"
#define VkglTestCase_036173_2 "ed.srgb8_alpha8_astc_12x10_khr_rgba32ui.cubemap_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036173, VkglTestCase_036173_1, VkglTestCase_036173_2);

#define VkglTestCase_036174_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed."
#define VkglTestCase_036174_2 "srgb8_alpha8_astc_12x10_khr_rgba32ui.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036174, VkglTestCase_036174_1, VkglTestCase_036174_2);

#define VkglTestCase_036175_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed."
#define VkglTestCase_036175_2 "srgb8_alpha8_astc_12x10_khr_rgba32ui.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036175, VkglTestCase_036175_1, VkglTestCase_036175_2);

#define VkglTestCase_036176_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed"
#define VkglTestCase_036176_2 ".srgb8_alpha8_astc_12x10_khr_rgba32ui.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036176, VkglTestCase_036176_1, VkglTestCase_036176_2);

#define VkglTestCase_036177_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed.srg"
#define VkglTestCase_036177_2 "b8_alpha8_astc_12x10_khr_rgba32ui.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036177, VkglTestCase_036177_1, VkglTestCase_036177_2);

#define VkglTestCase_036178_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed.s"
#define VkglTestCase_036178_2 "rgb8_alpha8_astc_12x10_khr_rgba32ui.texture2d_array_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036178, VkglTestCase_036178_1, VkglTestCase_036178_2);
