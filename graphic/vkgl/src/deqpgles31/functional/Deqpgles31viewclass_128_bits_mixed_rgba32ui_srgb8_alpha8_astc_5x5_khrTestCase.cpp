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

#define VkglTestCase_035739_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
#define VkglTestCase_035739_2 "xed.rgba32ui_srgb8_alpha8_astc_5x5_khr.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035739, VkglTestCase_035739_1, VkglTestCase_035739_2);

#define VkglTestCase_035740_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
#define VkglTestCase_035740_2 "xed.rgba32ui_srgb8_alpha8_astc_5x5_khr.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035740, VkglTestCase_035740_1, VkglTestCase_035740_2);

#define VkglTestCase_035741_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_035741_2 "ixed.rgba32ui_srgb8_alpha8_astc_5x5_khr.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035741, VkglTestCase_035741_1, VkglTestCase_035741_2);

#define VkglTestCase_035742_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed"
#define VkglTestCase_035742_2 ".rgba32ui_srgb8_alpha8_astc_5x5_khr.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035742, VkglTestCase_035742_1, VkglTestCase_035742_2);

#define VkglTestCase_035743_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
#define VkglTestCase_035743_2 "xed.rgba32ui_srgb8_alpha8_astc_5x5_khr.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035743, VkglTestCase_035743_1, VkglTestCase_035743_2);

#define VkglTestCase_035744_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
#define VkglTestCase_035744_2 "xed.rgba32ui_srgb8_alpha8_astc_5x5_khr.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035744, VkglTestCase_035744_1, VkglTestCase_035744_2);

#define VkglTestCase_035745_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_035745_2 "ixed.rgba32ui_srgb8_alpha8_astc_5x5_khr.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035745, VkglTestCase_035745_1, VkglTestCase_035745_2);

#define VkglTestCase_035746_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed"
#define VkglTestCase_035746_2 ".rgba32ui_srgb8_alpha8_astc_5x5_khr.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035746, VkglTestCase_035746_1, VkglTestCase_035746_2);

#define VkglTestCase_035747_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_035747_2 "ixed.rgba32ui_srgb8_alpha8_astc_5x5_khr.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035747, VkglTestCase_035747_1, VkglTestCase_035747_2);

#define VkglTestCase_035748_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_035748_2 "ixed.rgba32ui_srgb8_alpha8_astc_5x5_khr.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035748, VkglTestCase_035748_1, VkglTestCase_035748_2);

#define VkglTestCase_035749_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_035749_2 "mixed.rgba32ui_srgb8_alpha8_astc_5x5_khr.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035749, VkglTestCase_035749_1, VkglTestCase_035749_2);

#define VkglTestCase_035750_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
#define VkglTestCase_035750_2 "d.rgba32ui_srgb8_alpha8_astc_5x5_khr.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035750, VkglTestCase_035750_1, VkglTestCase_035750_2);

#define VkglTestCase_035751_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed"
#define VkglTestCase_035751_2 ".rgba32ui_srgb8_alpha8_astc_5x5_khr.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035751, VkglTestCase_035751_1, VkglTestCase_035751_2);

#define VkglTestCase_035752_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed"
#define VkglTestCase_035752_2 ".rgba32ui_srgb8_alpha8_astc_5x5_khr.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035752, VkglTestCase_035752_1, VkglTestCase_035752_2);

#define VkglTestCase_035753_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
#define VkglTestCase_035753_2 "d.rgba32ui_srgb8_alpha8_astc_5x5_khr.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035753, VkglTestCase_035753_1, VkglTestCase_035753_2);

#define VkglTestCase_035754_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed.rg"
#define VkglTestCase_035754_2 "ba32ui_srgb8_alpha8_astc_5x5_khr.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035754, VkglTestCase_035754_1, VkglTestCase_035754_2);

#define VkglTestCase_035755_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mix"
#define VkglTestCase_035755_2 "ed.rgba32ui_srgb8_alpha8_astc_5x5_khr.renderbuffer_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035755, VkglTestCase_035755_1, VkglTestCase_035755_2);

#define VkglTestCase_035756_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mix"
#define VkglTestCase_035756_2 "ed.rgba32ui_srgb8_alpha8_astc_5x5_khr.renderbuffer_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035756, VkglTestCase_035756_1, VkglTestCase_035756_2);

#define VkglTestCase_035757_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
#define VkglTestCase_035757_2 "xed.rgba32ui_srgb8_alpha8_astc_5x5_khr.renderbuffer_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035757, VkglTestCase_035757_1, VkglTestCase_035757_2);

#define VkglTestCase_035758_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed."
#define VkglTestCase_035758_2 "rgba32ui_srgb8_alpha8_astc_5x5_khr.renderbuffer_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035758, VkglTestCase_035758_1, VkglTestCase_035758_2);
