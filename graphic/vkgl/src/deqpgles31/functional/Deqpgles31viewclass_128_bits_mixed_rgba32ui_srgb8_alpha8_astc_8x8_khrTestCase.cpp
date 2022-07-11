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

#define VkglTestCase_035939_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
#define VkglTestCase_035939_2 "xed.rgba32ui_srgb8_alpha8_astc_8x8_khr.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035939, VkglTestCase_035939_1, VkglTestCase_035939_2);

#define VkglTestCase_035940_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
#define VkglTestCase_035940_2 "xed.rgba32ui_srgb8_alpha8_astc_8x8_khr.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035940, VkglTestCase_035940_1, VkglTestCase_035940_2);

#define VkglTestCase_035941_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_035941_2 "ixed.rgba32ui_srgb8_alpha8_astc_8x8_khr.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035941, VkglTestCase_035941_1, VkglTestCase_035941_2);

#define VkglTestCase_035942_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed"
#define VkglTestCase_035942_2 ".rgba32ui_srgb8_alpha8_astc_8x8_khr.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035942, VkglTestCase_035942_1, VkglTestCase_035942_2);

#define VkglTestCase_035943_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
#define VkglTestCase_035943_2 "xed.rgba32ui_srgb8_alpha8_astc_8x8_khr.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035943, VkglTestCase_035943_1, VkglTestCase_035943_2);

#define VkglTestCase_035944_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
#define VkglTestCase_035944_2 "xed.rgba32ui_srgb8_alpha8_astc_8x8_khr.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035944, VkglTestCase_035944_1, VkglTestCase_035944_2);

#define VkglTestCase_035945_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_035945_2 "ixed.rgba32ui_srgb8_alpha8_astc_8x8_khr.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035945, VkglTestCase_035945_1, VkglTestCase_035945_2);

#define VkglTestCase_035946_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed"
#define VkglTestCase_035946_2 ".rgba32ui_srgb8_alpha8_astc_8x8_khr.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035946, VkglTestCase_035946_1, VkglTestCase_035946_2);

#define VkglTestCase_035947_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_035947_2 "ixed.rgba32ui_srgb8_alpha8_astc_8x8_khr.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035947, VkglTestCase_035947_1, VkglTestCase_035947_2);

#define VkglTestCase_035948_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_035948_2 "ixed.rgba32ui_srgb8_alpha8_astc_8x8_khr.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035948, VkglTestCase_035948_1, VkglTestCase_035948_2);

#define VkglTestCase_035949_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_035949_2 "mixed.rgba32ui_srgb8_alpha8_astc_8x8_khr.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035949, VkglTestCase_035949_1, VkglTestCase_035949_2);

#define VkglTestCase_035950_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
#define VkglTestCase_035950_2 "d.rgba32ui_srgb8_alpha8_astc_8x8_khr.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035950, VkglTestCase_035950_1, VkglTestCase_035950_2);

#define VkglTestCase_035951_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed"
#define VkglTestCase_035951_2 ".rgba32ui_srgb8_alpha8_astc_8x8_khr.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035951, VkglTestCase_035951_1, VkglTestCase_035951_2);

#define VkglTestCase_035952_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed"
#define VkglTestCase_035952_2 ".rgba32ui_srgb8_alpha8_astc_8x8_khr.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035952, VkglTestCase_035952_1, VkglTestCase_035952_2);

#define VkglTestCase_035953_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
#define VkglTestCase_035953_2 "d.rgba32ui_srgb8_alpha8_astc_8x8_khr.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035953, VkglTestCase_035953_1, VkglTestCase_035953_2);

#define VkglTestCase_035954_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed.rg"
#define VkglTestCase_035954_2 "ba32ui_srgb8_alpha8_astc_8x8_khr.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035954, VkglTestCase_035954_1, VkglTestCase_035954_2);

#define VkglTestCase_035955_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mix"
#define VkglTestCase_035955_2 "ed.rgba32ui_srgb8_alpha8_astc_8x8_khr.renderbuffer_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035955, VkglTestCase_035955_1, VkglTestCase_035955_2);

#define VkglTestCase_035956_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mix"
#define VkglTestCase_035956_2 "ed.rgba32ui_srgb8_alpha8_astc_8x8_khr.renderbuffer_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035956, VkglTestCase_035956_1, VkglTestCase_035956_2);

#define VkglTestCase_035957_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
#define VkglTestCase_035957_2 "xed.rgba32ui_srgb8_alpha8_astc_8x8_khr.renderbuffer_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035957, VkglTestCase_035957_1, VkglTestCase_035957_2);

#define VkglTestCase_035958_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed."
#define VkglTestCase_035958_2 "rgba32ui_srgb8_alpha8_astc_8x8_khr.renderbuffer_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035958, VkglTestCase_035958_1, VkglTestCase_035958_2);
