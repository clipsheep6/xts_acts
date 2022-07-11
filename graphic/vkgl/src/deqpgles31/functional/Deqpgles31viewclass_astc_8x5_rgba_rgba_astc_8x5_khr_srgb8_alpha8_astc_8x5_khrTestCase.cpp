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

#define VkglTestCase_033499_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_8x5_rgb"
#define VkglTestCase_033499_2 "a.rgba_astc_8x5_khr_srgb8_alpha8_astc_8x5_khr.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033499, VkglTestCase_033499_1, VkglTestCase_033499_2);

#define VkglTestCase_033500_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_8x5_rgb"
#define VkglTestCase_033500_2 "a.rgba_astc_8x5_khr_srgb8_alpha8_astc_8x5_khr.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033500, VkglTestCase_033500_1, VkglTestCase_033500_2);

#define VkglTestCase_033501_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_8x5_rg"
#define VkglTestCase_033501_2 "ba.rgba_astc_8x5_khr_srgb8_alpha8_astc_8x5_khr.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033501, VkglTestCase_033501_1, VkglTestCase_033501_2);

#define VkglTestCase_033502_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_8x5_rgba.r"
#define VkglTestCase_033502_2 "gba_astc_8x5_khr_srgb8_alpha8_astc_8x5_khr.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033502, VkglTestCase_033502_1, VkglTestCase_033502_2);

#define VkglTestCase_033503_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_8x5_rgb"
#define VkglTestCase_033503_2 "a.rgba_astc_8x5_khr_srgb8_alpha8_astc_8x5_khr.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033503, VkglTestCase_033503_1, VkglTestCase_033503_2);

#define VkglTestCase_033504_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_8x5_rgb"
#define VkglTestCase_033504_2 "a.rgba_astc_8x5_khr_srgb8_alpha8_astc_8x5_khr.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033504, VkglTestCase_033504_1, VkglTestCase_033504_2);

#define VkglTestCase_033505_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_8x5_rg"
#define VkglTestCase_033505_2 "ba.rgba_astc_8x5_khr_srgb8_alpha8_astc_8x5_khr.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033505, VkglTestCase_033505_1, VkglTestCase_033505_2);

#define VkglTestCase_033506_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_8x5_rgba.r"
#define VkglTestCase_033506_2 "gba_astc_8x5_khr_srgb8_alpha8_astc_8x5_khr.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033506, VkglTestCase_033506_1, VkglTestCase_033506_2);

#define VkglTestCase_033507_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_8x5_rg"
#define VkglTestCase_033507_2 "ba.rgba_astc_8x5_khr_srgb8_alpha8_astc_8x5_khr.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033507, VkglTestCase_033507_1, VkglTestCase_033507_2);

#define VkglTestCase_033508_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_8x5_rg"
#define VkglTestCase_033508_2 "ba.rgba_astc_8x5_khr_srgb8_alpha8_astc_8x5_khr.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033508, VkglTestCase_033508_1, VkglTestCase_033508_2);

#define VkglTestCase_033509_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_8x5_r"
#define VkglTestCase_033509_2 "gba.rgba_astc_8x5_khr_srgb8_alpha8_astc_8x5_khr.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033509, VkglTestCase_033509_1, VkglTestCase_033509_2);

#define VkglTestCase_033510_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_8x5_rgba."
#define VkglTestCase_033510_2 "rgba_astc_8x5_khr_srgb8_alpha8_astc_8x5_khr.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033510, VkglTestCase_033510_1, VkglTestCase_033510_2);

#define VkglTestCase_033511_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_8x5_rgba.r"
#define VkglTestCase_033511_2 "gba_astc_8x5_khr_srgb8_alpha8_astc_8x5_khr.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033511, VkglTestCase_033511_1, VkglTestCase_033511_2);

#define VkglTestCase_033512_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_8x5_rgba.r"
#define VkglTestCase_033512_2 "gba_astc_8x5_khr_srgb8_alpha8_astc_8x5_khr.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033512, VkglTestCase_033512_1, VkglTestCase_033512_2);

#define VkglTestCase_033513_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_8x5_rgba."
#define VkglTestCase_033513_2 "rgba_astc_8x5_khr_srgb8_alpha8_astc_8x5_khr.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033513, VkglTestCase_033513_1, VkglTestCase_033513_2);

#define VkglTestCase_033514_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_8x5_rgba.rgba"
#define VkglTestCase_033514_2 "_astc_8x5_khr_srgb8_alpha8_astc_8x5_khr.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033514, VkglTestCase_033514_1, VkglTestCase_033514_2);
