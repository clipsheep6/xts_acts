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

#define VkglTestCase_035679_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
#define VkglTestCase_035679_2 "xed.srgb8_alpha8_astc_4x4_khr_rgba32ui.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035679, VkglTestCase_035679_1, VkglTestCase_035679_2);

#define VkglTestCase_035680_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
#define VkglTestCase_035680_2 "xed.srgb8_alpha8_astc_4x4_khr_rgba32ui.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035680, VkglTestCase_035680_1, VkglTestCase_035680_2);

#define VkglTestCase_035681_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_035681_2 "ixed.srgb8_alpha8_astc_4x4_khr_rgba32ui.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035681, VkglTestCase_035681_1, VkglTestCase_035681_2);

#define VkglTestCase_035682_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed"
#define VkglTestCase_035682_2 ".srgb8_alpha8_astc_4x4_khr_rgba32ui.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035682, VkglTestCase_035682_1, VkglTestCase_035682_2);

#define VkglTestCase_035683_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mix"
#define VkglTestCase_035683_2 "ed.srgb8_alpha8_astc_4x4_khr_rgba32ui.texture2d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035683, VkglTestCase_035683_1, VkglTestCase_035683_2);

#define VkglTestCase_035684_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
#define VkglTestCase_035684_2 "xed.srgb8_alpha8_astc_4x4_khr_rgba32ui.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035684, VkglTestCase_035684_1, VkglTestCase_035684_2);

#define VkglTestCase_035685_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
#define VkglTestCase_035685_2 "xed.srgb8_alpha8_astc_4x4_khr_rgba32ui.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035685, VkglTestCase_035685_1, VkglTestCase_035685_2);

#define VkglTestCase_035686_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_035686_2 "ixed.srgb8_alpha8_astc_4x4_khr_rgba32ui.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035686, VkglTestCase_035686_1, VkglTestCase_035686_2);

#define VkglTestCase_035687_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed"
#define VkglTestCase_035687_2 ".srgb8_alpha8_astc_4x4_khr_rgba32ui.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035687, VkglTestCase_035687_1, VkglTestCase_035687_2);

#define VkglTestCase_035688_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mix"
#define VkglTestCase_035688_2 "ed.srgb8_alpha8_astc_4x4_khr_rgba32ui.texture3d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035688, VkglTestCase_035688_1, VkglTestCase_035688_2);

#define VkglTestCase_035689_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_035689_2 "ixed.srgb8_alpha8_astc_4x4_khr_rgba32ui.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035689, VkglTestCase_035689_1, VkglTestCase_035689_2);

#define VkglTestCase_035690_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_035690_2 "ixed.srgb8_alpha8_astc_4x4_khr_rgba32ui.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035690, VkglTestCase_035690_1, VkglTestCase_035690_2);

#define VkglTestCase_035691_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_035691_2 "mixed.srgb8_alpha8_astc_4x4_khr_rgba32ui.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035691, VkglTestCase_035691_1, VkglTestCase_035691_2);

#define VkglTestCase_035692_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
#define VkglTestCase_035692_2 "d.srgb8_alpha8_astc_4x4_khr_rgba32ui.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035692, VkglTestCase_035692_1, VkglTestCase_035692_2);

#define VkglTestCase_035693_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
#define VkglTestCase_035693_2 "xed.srgb8_alpha8_astc_4x4_khr_rgba32ui.cubemap_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035693, VkglTestCase_035693_1, VkglTestCase_035693_2);

#define VkglTestCase_035694_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed"
#define VkglTestCase_035694_2 ".srgb8_alpha8_astc_4x4_khr_rgba32ui.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035694, VkglTestCase_035694_1, VkglTestCase_035694_2);

#define VkglTestCase_035695_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed"
#define VkglTestCase_035695_2 ".srgb8_alpha8_astc_4x4_khr_rgba32ui.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035695, VkglTestCase_035695_1, VkglTestCase_035695_2);

#define VkglTestCase_035696_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
#define VkglTestCase_035696_2 "d.srgb8_alpha8_astc_4x4_khr_rgba32ui.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035696, VkglTestCase_035696_1, VkglTestCase_035696_2);

#define VkglTestCase_035697_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed.sr"
#define VkglTestCase_035697_2 "gb8_alpha8_astc_4x4_khr_rgba32ui.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035697, VkglTestCase_035697_1, VkglTestCase_035697_2);

#define VkglTestCase_035698_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed."
#define VkglTestCase_035698_2 "srgb8_alpha8_astc_4x4_khr_rgba32ui.texture2d_array_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035698, VkglTestCase_035698_1, VkglTestCase_035698_2);
