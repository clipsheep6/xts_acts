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

#define VkglTestCase_035859_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
#define VkglTestCase_035859_2 "xed.rgba32ui_srgb8_alpha8_astc_8x5_khr.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035859, VkglTestCase_035859_1, VkglTestCase_035859_2);

#define VkglTestCase_035860_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
#define VkglTestCase_035860_2 "xed.rgba32ui_srgb8_alpha8_astc_8x5_khr.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035860, VkglTestCase_035860_1, VkglTestCase_035860_2);

#define VkglTestCase_035861_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_035861_2 "ixed.rgba32ui_srgb8_alpha8_astc_8x5_khr.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035861, VkglTestCase_035861_1, VkglTestCase_035861_2);

#define VkglTestCase_035862_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed"
#define VkglTestCase_035862_2 ".rgba32ui_srgb8_alpha8_astc_8x5_khr.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035862, VkglTestCase_035862_1, VkglTestCase_035862_2);

#define VkglTestCase_035863_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
#define VkglTestCase_035863_2 "xed.rgba32ui_srgb8_alpha8_astc_8x5_khr.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035863, VkglTestCase_035863_1, VkglTestCase_035863_2);

#define VkglTestCase_035864_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
#define VkglTestCase_035864_2 "xed.rgba32ui_srgb8_alpha8_astc_8x5_khr.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035864, VkglTestCase_035864_1, VkglTestCase_035864_2);

#define VkglTestCase_035865_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_035865_2 "ixed.rgba32ui_srgb8_alpha8_astc_8x5_khr.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035865, VkglTestCase_035865_1, VkglTestCase_035865_2);

#define VkglTestCase_035866_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed"
#define VkglTestCase_035866_2 ".rgba32ui_srgb8_alpha8_astc_8x5_khr.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035866, VkglTestCase_035866_1, VkglTestCase_035866_2);

#define VkglTestCase_035867_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_035867_2 "ixed.rgba32ui_srgb8_alpha8_astc_8x5_khr.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035867, VkglTestCase_035867_1, VkglTestCase_035867_2);

#define VkglTestCase_035868_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_035868_2 "ixed.rgba32ui_srgb8_alpha8_astc_8x5_khr.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035868, VkglTestCase_035868_1, VkglTestCase_035868_2);

#define VkglTestCase_035869_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_035869_2 "mixed.rgba32ui_srgb8_alpha8_astc_8x5_khr.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035869, VkglTestCase_035869_1, VkglTestCase_035869_2);

#define VkglTestCase_035870_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
#define VkglTestCase_035870_2 "d.rgba32ui_srgb8_alpha8_astc_8x5_khr.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035870, VkglTestCase_035870_1, VkglTestCase_035870_2);

#define VkglTestCase_035871_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed"
#define VkglTestCase_035871_2 ".rgba32ui_srgb8_alpha8_astc_8x5_khr.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035871, VkglTestCase_035871_1, VkglTestCase_035871_2);

#define VkglTestCase_035872_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed"
#define VkglTestCase_035872_2 ".rgba32ui_srgb8_alpha8_astc_8x5_khr.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035872, VkglTestCase_035872_1, VkglTestCase_035872_2);

#define VkglTestCase_035873_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
#define VkglTestCase_035873_2 "d.rgba32ui_srgb8_alpha8_astc_8x5_khr.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035873, VkglTestCase_035873_1, VkglTestCase_035873_2);

#define VkglTestCase_035874_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed.rg"
#define VkglTestCase_035874_2 "ba32ui_srgb8_alpha8_astc_8x5_khr.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035874, VkglTestCase_035874_1, VkglTestCase_035874_2);

#define VkglTestCase_035875_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mix"
#define VkglTestCase_035875_2 "ed.rgba32ui_srgb8_alpha8_astc_8x5_khr.renderbuffer_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035875, VkglTestCase_035875_1, VkglTestCase_035875_2);

#define VkglTestCase_035876_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mix"
#define VkglTestCase_035876_2 "ed.rgba32ui_srgb8_alpha8_astc_8x5_khr.renderbuffer_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035876, VkglTestCase_035876_1, VkglTestCase_035876_2);

#define VkglTestCase_035877_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
#define VkglTestCase_035877_2 "xed.rgba32ui_srgb8_alpha8_astc_8x5_khr.renderbuffer_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035877, VkglTestCase_035877_1, VkglTestCase_035877_2);

#define VkglTestCase_035878_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed."
#define VkglTestCase_035878_2 "rgba32ui_srgb8_alpha8_astc_8x5_khr.renderbuffer_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035878, VkglTestCase_035878_1, VkglTestCase_035878_2);
