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
#include "../ActsDeqpgles310035TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_034667_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_034667_2 "ixed.rgba32f_srgb8_alpha8_astc_6x5_khr.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034667, VkglTestCase_034667_1, VkglTestCase_034667_2);

#define VkglTestCase_034668_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_034668_2 "ixed.rgba32f_srgb8_alpha8_astc_6x5_khr.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034668, VkglTestCase_034668_1, VkglTestCase_034668_2);

#define VkglTestCase_034669_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_034669_2 "mixed.rgba32f_srgb8_alpha8_astc_6x5_khr.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034669, VkglTestCase_034669_1, VkglTestCase_034669_2);

#define VkglTestCase_034670_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
#define VkglTestCase_034670_2 "d.rgba32f_srgb8_alpha8_astc_6x5_khr.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034670, VkglTestCase_034670_1, VkglTestCase_034670_2);

#define VkglTestCase_034671_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_034671_2 "ixed.rgba32f_srgb8_alpha8_astc_6x5_khr.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034671, VkglTestCase_034671_1, VkglTestCase_034671_2);

#define VkglTestCase_034672_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_034672_2 "ixed.rgba32f_srgb8_alpha8_astc_6x5_khr.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034672, VkglTestCase_034672_1, VkglTestCase_034672_2);

#define VkglTestCase_034673_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_034673_2 "mixed.rgba32f_srgb8_alpha8_astc_6x5_khr.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034673, VkglTestCase_034673_1, VkglTestCase_034673_2);

#define VkglTestCase_034674_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
#define VkglTestCase_034674_2 "d.rgba32f_srgb8_alpha8_astc_6x5_khr.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034674, VkglTestCase_034674_1, VkglTestCase_034674_2);

#define VkglTestCase_034675_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_034675_2 "mixed.rgba32f_srgb8_alpha8_astc_6x5_khr.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034675, VkglTestCase_034675_1, VkglTestCase_034675_2);

#define VkglTestCase_034676_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_034676_2 "mixed.rgba32f_srgb8_alpha8_astc_6x5_khr.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034676, VkglTestCase_034676_1, VkglTestCase_034676_2);

#define VkglTestCase_034677_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits"
#define VkglTestCase_034677_2 "_mixed.rgba32f_srgb8_alpha8_astc_6x5_khr.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034677, VkglTestCase_034677_1, VkglTestCase_034677_2);

#define VkglTestCase_034678_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mix"
#define VkglTestCase_034678_2 "ed.rgba32f_srgb8_alpha8_astc_6x5_khr.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034678, VkglTestCase_034678_1, VkglTestCase_034678_2);

#define VkglTestCase_034679_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
#define VkglTestCase_034679_2 "d.rgba32f_srgb8_alpha8_astc_6x5_khr.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034679, VkglTestCase_034679_1, VkglTestCase_034679_2);

#define VkglTestCase_034680_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
#define VkglTestCase_034680_2 "d.rgba32f_srgb8_alpha8_astc_6x5_khr.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034680, VkglTestCase_034680_1, VkglTestCase_034680_2);

#define VkglTestCase_034681_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mix"
#define VkglTestCase_034681_2 "ed.rgba32f_srgb8_alpha8_astc_6x5_khr.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034681, VkglTestCase_034681_1, VkglTestCase_034681_2);

#define VkglTestCase_034682_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed.r"
#define VkglTestCase_034682_2 "gba32f_srgb8_alpha8_astc_6x5_khr.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034682, VkglTestCase_034682_1, VkglTestCase_034682_2);
