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

#define VkglTestCase_033307_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_5x5_rgb"
#define VkglTestCase_033307_2 "a.rgba_astc_5x5_khr_srgb8_alpha8_astc_5x5_khr.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033307, VkglTestCase_033307_1, VkglTestCase_033307_2);

#define VkglTestCase_033308_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_5x5_rgb"
#define VkglTestCase_033308_2 "a.rgba_astc_5x5_khr_srgb8_alpha8_astc_5x5_khr.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033308, VkglTestCase_033308_1, VkglTestCase_033308_2);

#define VkglTestCase_033309_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_5x5_rg"
#define VkglTestCase_033309_2 "ba.rgba_astc_5x5_khr_srgb8_alpha8_astc_5x5_khr.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033309, VkglTestCase_033309_1, VkglTestCase_033309_2);

#define VkglTestCase_033310_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_5x5_rgba.r"
#define VkglTestCase_033310_2 "gba_astc_5x5_khr_srgb8_alpha8_astc_5x5_khr.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033310, VkglTestCase_033310_1, VkglTestCase_033310_2);

#define VkglTestCase_033311_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_5x5_rgb"
#define VkglTestCase_033311_2 "a.rgba_astc_5x5_khr_srgb8_alpha8_astc_5x5_khr.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033311, VkglTestCase_033311_1, VkglTestCase_033311_2);

#define VkglTestCase_033312_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_5x5_rgb"
#define VkglTestCase_033312_2 "a.rgba_astc_5x5_khr_srgb8_alpha8_astc_5x5_khr.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033312, VkglTestCase_033312_1, VkglTestCase_033312_2);

#define VkglTestCase_033313_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_5x5_rg"
#define VkglTestCase_033313_2 "ba.rgba_astc_5x5_khr_srgb8_alpha8_astc_5x5_khr.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033313, VkglTestCase_033313_1, VkglTestCase_033313_2);

#define VkglTestCase_033314_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_5x5_rgba.r"
#define VkglTestCase_033314_2 "gba_astc_5x5_khr_srgb8_alpha8_astc_5x5_khr.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033314, VkglTestCase_033314_1, VkglTestCase_033314_2);

#define VkglTestCase_033315_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_5x5_rg"
#define VkglTestCase_033315_2 "ba.rgba_astc_5x5_khr_srgb8_alpha8_astc_5x5_khr.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033315, VkglTestCase_033315_1, VkglTestCase_033315_2);

#define VkglTestCase_033316_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_5x5_rg"
#define VkglTestCase_033316_2 "ba.rgba_astc_5x5_khr_srgb8_alpha8_astc_5x5_khr.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033316, VkglTestCase_033316_1, VkglTestCase_033316_2);

#define VkglTestCase_033317_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_5x5_r"
#define VkglTestCase_033317_2 "gba.rgba_astc_5x5_khr_srgb8_alpha8_astc_5x5_khr.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033317, VkglTestCase_033317_1, VkglTestCase_033317_2);

#define VkglTestCase_033318_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_5x5_rgba."
#define VkglTestCase_033318_2 "rgba_astc_5x5_khr_srgb8_alpha8_astc_5x5_khr.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033318, VkglTestCase_033318_1, VkglTestCase_033318_2);

#define VkglTestCase_033319_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_5x5_rgba.r"
#define VkglTestCase_033319_2 "gba_astc_5x5_khr_srgb8_alpha8_astc_5x5_khr.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033319, VkglTestCase_033319_1, VkglTestCase_033319_2);

#define VkglTestCase_033320_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_5x5_rgba.r"
#define VkglTestCase_033320_2 "gba_astc_5x5_khr_srgb8_alpha8_astc_5x5_khr.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033320, VkglTestCase_033320_1, VkglTestCase_033320_2);

#define VkglTestCase_033321_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_5x5_rgba."
#define VkglTestCase_033321_2 "rgba_astc_5x5_khr_srgb8_alpha8_astc_5x5_khr.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033321, VkglTestCase_033321_1, VkglTestCase_033321_2);

#define VkglTestCase_033322_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_5x5_rgba.rgba"
#define VkglTestCase_033322_2 "_astc_5x5_khr_srgb8_alpha8_astc_5x5_khr.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033322, VkglTestCase_033322_1, VkglTestCase_033322_2);
