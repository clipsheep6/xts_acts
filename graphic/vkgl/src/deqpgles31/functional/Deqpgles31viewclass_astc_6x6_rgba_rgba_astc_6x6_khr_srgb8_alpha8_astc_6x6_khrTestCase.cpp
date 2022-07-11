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
#include "../ActsDeqpgles310034TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_033435_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_6x6_rgb"
#define VkglTestCase_033435_2 "a.rgba_astc_6x6_khr_srgb8_alpha8_astc_6x6_khr.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033435, VkglTestCase_033435_1, VkglTestCase_033435_2);

#define VkglTestCase_033436_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_6x6_rgb"
#define VkglTestCase_033436_2 "a.rgba_astc_6x6_khr_srgb8_alpha8_astc_6x6_khr.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033436, VkglTestCase_033436_1, VkglTestCase_033436_2);

#define VkglTestCase_033437_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_6x6_rg"
#define VkglTestCase_033437_2 "ba.rgba_astc_6x6_khr_srgb8_alpha8_astc_6x6_khr.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033437, VkglTestCase_033437_1, VkglTestCase_033437_2);

#define VkglTestCase_033438_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_6x6_rgba.r"
#define VkglTestCase_033438_2 "gba_astc_6x6_khr_srgb8_alpha8_astc_6x6_khr.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033438, VkglTestCase_033438_1, VkglTestCase_033438_2);

#define VkglTestCase_033439_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_6x6_rgb"
#define VkglTestCase_033439_2 "a.rgba_astc_6x6_khr_srgb8_alpha8_astc_6x6_khr.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033439, VkglTestCase_033439_1, VkglTestCase_033439_2);

#define VkglTestCase_033440_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_6x6_rgb"
#define VkglTestCase_033440_2 "a.rgba_astc_6x6_khr_srgb8_alpha8_astc_6x6_khr.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033440, VkglTestCase_033440_1, VkglTestCase_033440_2);

#define VkglTestCase_033441_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_6x6_rg"
#define VkglTestCase_033441_2 "ba.rgba_astc_6x6_khr_srgb8_alpha8_astc_6x6_khr.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033441, VkglTestCase_033441_1, VkglTestCase_033441_2);

#define VkglTestCase_033442_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_6x6_rgba.r"
#define VkglTestCase_033442_2 "gba_astc_6x6_khr_srgb8_alpha8_astc_6x6_khr.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033442, VkglTestCase_033442_1, VkglTestCase_033442_2);

#define VkglTestCase_033443_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_6x6_rg"
#define VkglTestCase_033443_2 "ba.rgba_astc_6x6_khr_srgb8_alpha8_astc_6x6_khr.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033443, VkglTestCase_033443_1, VkglTestCase_033443_2);

#define VkglTestCase_033444_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_6x6_rg"
#define VkglTestCase_033444_2 "ba.rgba_astc_6x6_khr_srgb8_alpha8_astc_6x6_khr.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033444, VkglTestCase_033444_1, VkglTestCase_033444_2);

#define VkglTestCase_033445_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_6x6_r"
#define VkglTestCase_033445_2 "gba.rgba_astc_6x6_khr_srgb8_alpha8_astc_6x6_khr.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033445, VkglTestCase_033445_1, VkglTestCase_033445_2);

#define VkglTestCase_033446_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_6x6_rgba."
#define VkglTestCase_033446_2 "rgba_astc_6x6_khr_srgb8_alpha8_astc_6x6_khr.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033446, VkglTestCase_033446_1, VkglTestCase_033446_2);

#define VkglTestCase_033447_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_6x6_rgba.r"
#define VkglTestCase_033447_2 "gba_astc_6x6_khr_srgb8_alpha8_astc_6x6_khr.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033447, VkglTestCase_033447_1, VkglTestCase_033447_2);

#define VkglTestCase_033448_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_6x6_rgba.r"
#define VkglTestCase_033448_2 "gba_astc_6x6_khr_srgb8_alpha8_astc_6x6_khr.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033448, VkglTestCase_033448_1, VkglTestCase_033448_2);

#define VkglTestCase_033449_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_6x6_rgba."
#define VkglTestCase_033449_2 "rgba_astc_6x6_khr_srgb8_alpha8_astc_6x6_khr.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033449, VkglTestCase_033449_1, VkglTestCase_033449_2);

#define VkglTestCase_033450_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_6x6_rgba.rgba"
#define VkglTestCase_033450_2 "_astc_6x6_khr_srgb8_alpha8_astc_6x6_khr.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033450, VkglTestCase_033450_1, VkglTestCase_033450_2);
