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

#define VkglTestCase_035039_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_035039_2 "mixed.rgba32ui_srgb8_alpha8_etc2_eac.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035039, VkglTestCase_035039_1, VkglTestCase_035039_2);

#define VkglTestCase_035040_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits"
#define VkglTestCase_035040_2 "_mixed.rgba32ui_srgb8_alpha8_etc2_eac.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035040, VkglTestCase_035040_1, VkglTestCase_035040_2);

#define VkglTestCase_035041_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_035041_2 "mixed.rgba32ui_srgb8_alpha8_etc2_eac.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035041, VkglTestCase_035041_1, VkglTestCase_035041_2);

#define VkglTestCase_035042_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits"
#define VkglTestCase_035042_2 "_mixed.rgba32ui_srgb8_alpha8_etc2_eac.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035042, VkglTestCase_035042_1, VkglTestCase_035042_2);

#define VkglTestCase_035043_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits"
#define VkglTestCase_035043_2 "_mixed.rgba32ui_srgb8_alpha8_etc2_eac.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035043, VkglTestCase_035043_1, VkglTestCase_035043_2);

#define VkglTestCase_035044_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bit"
#define VkglTestCase_035044_2 "s_mixed.rgba32ui_srgb8_alpha8_etc2_eac.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035044, VkglTestCase_035044_1, VkglTestCase_035044_2);

#define VkglTestCase_035045_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mix"
#define VkglTestCase_035045_2 "ed.rgba32ui_srgb8_alpha8_etc2_eac.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035045, VkglTestCase_035045_1, VkglTestCase_035045_2);

#define VkglTestCase_035046_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
#define VkglTestCase_035046_2 "xed.rgba32ui_srgb8_alpha8_etc2_eac.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035046, VkglTestCase_035046_1, VkglTestCase_035046_2);

#define VkglTestCase_035047_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_035047_2 "ixed.rgba32ui_srgb8_alpha8_etc2_eac.renderbuffer_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035047, VkglTestCase_035047_1, VkglTestCase_035047_2);

#define VkglTestCase_035048_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_035048_2 "mixed.rgba32ui_srgb8_alpha8_etc2_eac.renderbuffer_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035048, VkglTestCase_035048_1, VkglTestCase_035048_2);
