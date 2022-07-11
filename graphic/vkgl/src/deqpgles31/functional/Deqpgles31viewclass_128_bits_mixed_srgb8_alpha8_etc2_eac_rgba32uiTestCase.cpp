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

#define VkglTestCase_035049_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_035049_2 "mixed.srgb8_alpha8_etc2_eac_rgba32ui.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035049, VkglTestCase_035049_1, VkglTestCase_035049_2);

#define VkglTestCase_035050_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_035050_2 "mixed.srgb8_alpha8_etc2_eac_rgba32ui.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035050, VkglTestCase_035050_1, VkglTestCase_035050_2);

#define VkglTestCase_035051_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits"
#define VkglTestCase_035051_2 "_mixed.srgb8_alpha8_etc2_eac_rgba32ui.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035051, VkglTestCase_035051_1, VkglTestCase_035051_2);

#define VkglTestCase_035052_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mix"
#define VkglTestCase_035052_2 "ed.srgb8_alpha8_etc2_eac_rgba32ui.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035052, VkglTestCase_035052_1, VkglTestCase_035052_2);

#define VkglTestCase_035053_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_035053_2 "ixed.srgb8_alpha8_etc2_eac_rgba32ui.texture2d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035053, VkglTestCase_035053_1, VkglTestCase_035053_2);

#define VkglTestCase_035054_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits"
#define VkglTestCase_035054_2 "_mixed.srgb8_alpha8_etc2_eac_rgba32ui.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035054, VkglTestCase_035054_1, VkglTestCase_035054_2);

#define VkglTestCase_035055_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits"
#define VkglTestCase_035055_2 "_mixed.srgb8_alpha8_etc2_eac_rgba32ui.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035055, VkglTestCase_035055_1, VkglTestCase_035055_2);

#define VkglTestCase_035056_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bit"
#define VkglTestCase_035056_2 "s_mixed.srgb8_alpha8_etc2_eac_rgba32ui.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035056, VkglTestCase_035056_1, VkglTestCase_035056_2);

#define VkglTestCase_035057_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
#define VkglTestCase_035057_2 "xed.srgb8_alpha8_etc2_eac_rgba32ui.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035057, VkglTestCase_035057_1, VkglTestCase_035057_2);

#define VkglTestCase_035058_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_035058_2 "mixed.srgb8_alpha8_etc2_eac_rgba32ui.cubemap_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035058, VkglTestCase_035058_1, VkglTestCase_035058_2);
