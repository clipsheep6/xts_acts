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

#define VkglTestCase_035659_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
#define VkglTestCase_035659_2 "xed.rgba32ui_srgb8_alpha8_astc_4x4_khr.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035659, VkglTestCase_035659_1, VkglTestCase_035659_2);

#define VkglTestCase_035660_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
#define VkglTestCase_035660_2 "xed.rgba32ui_srgb8_alpha8_astc_4x4_khr.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035660, VkglTestCase_035660_1, VkglTestCase_035660_2);

#define VkglTestCase_035661_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_035661_2 "ixed.rgba32ui_srgb8_alpha8_astc_4x4_khr.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035661, VkglTestCase_035661_1, VkglTestCase_035661_2);

#define VkglTestCase_035662_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed"
#define VkglTestCase_035662_2 ".rgba32ui_srgb8_alpha8_astc_4x4_khr.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035662, VkglTestCase_035662_1, VkglTestCase_035662_2);

#define VkglTestCase_035663_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
#define VkglTestCase_035663_2 "xed.rgba32ui_srgb8_alpha8_astc_4x4_khr.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035663, VkglTestCase_035663_1, VkglTestCase_035663_2);

#define VkglTestCase_035664_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
#define VkglTestCase_035664_2 "xed.rgba32ui_srgb8_alpha8_astc_4x4_khr.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035664, VkglTestCase_035664_1, VkglTestCase_035664_2);

#define VkglTestCase_035665_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_035665_2 "ixed.rgba32ui_srgb8_alpha8_astc_4x4_khr.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035665, VkglTestCase_035665_1, VkglTestCase_035665_2);

#define VkglTestCase_035666_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed"
#define VkglTestCase_035666_2 ".rgba32ui_srgb8_alpha8_astc_4x4_khr.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035666, VkglTestCase_035666_1, VkglTestCase_035666_2);

#define VkglTestCase_035667_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_035667_2 "ixed.rgba32ui_srgb8_alpha8_astc_4x4_khr.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035667, VkglTestCase_035667_1, VkglTestCase_035667_2);

#define VkglTestCase_035668_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_035668_2 "ixed.rgba32ui_srgb8_alpha8_astc_4x4_khr.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035668, VkglTestCase_035668_1, VkglTestCase_035668_2);

#define VkglTestCase_035669_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_035669_2 "mixed.rgba32ui_srgb8_alpha8_astc_4x4_khr.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035669, VkglTestCase_035669_1, VkglTestCase_035669_2);

#define VkglTestCase_035670_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
#define VkglTestCase_035670_2 "d.rgba32ui_srgb8_alpha8_astc_4x4_khr.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035670, VkglTestCase_035670_1, VkglTestCase_035670_2);

#define VkglTestCase_035671_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed"
#define VkglTestCase_035671_2 ".rgba32ui_srgb8_alpha8_astc_4x4_khr.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035671, VkglTestCase_035671_1, VkglTestCase_035671_2);

#define VkglTestCase_035672_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed"
#define VkglTestCase_035672_2 ".rgba32ui_srgb8_alpha8_astc_4x4_khr.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035672, VkglTestCase_035672_1, VkglTestCase_035672_2);

#define VkglTestCase_035673_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
#define VkglTestCase_035673_2 "d.rgba32ui_srgb8_alpha8_astc_4x4_khr.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035673, VkglTestCase_035673_1, VkglTestCase_035673_2);

#define VkglTestCase_035674_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed.rg"
#define VkglTestCase_035674_2 "ba32ui_srgb8_alpha8_astc_4x4_khr.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035674, VkglTestCase_035674_1, VkglTestCase_035674_2);

#define VkglTestCase_035675_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mix"
#define VkglTestCase_035675_2 "ed.rgba32ui_srgb8_alpha8_astc_4x4_khr.renderbuffer_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035675, VkglTestCase_035675_1, VkglTestCase_035675_2);

#define VkglTestCase_035676_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mix"
#define VkglTestCase_035676_2 "ed.rgba32ui_srgb8_alpha8_astc_4x4_khr.renderbuffer_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035676, VkglTestCase_035676_1, VkglTestCase_035676_2);

#define VkglTestCase_035677_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
#define VkglTestCase_035677_2 "xed.rgba32ui_srgb8_alpha8_astc_4x4_khr.renderbuffer_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035677, VkglTestCase_035677_1, VkglTestCase_035677_2);

#define VkglTestCase_035678_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed."
#define VkglTestCase_035678_2 "rgba32ui_srgb8_alpha8_astc_4x4_khr.renderbuffer_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035678, VkglTestCase_035678_1, VkglTestCase_035678_2);
