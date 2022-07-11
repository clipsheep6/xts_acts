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

#define VkglTestCase_033627_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_8x8_rgb"
#define VkglTestCase_033627_2 "a.rgba_astc_8x8_khr_srgb8_alpha8_astc_8x8_khr.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033627, VkglTestCase_033627_1, VkglTestCase_033627_2);

#define VkglTestCase_033628_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_8x8_rgb"
#define VkglTestCase_033628_2 "a.rgba_astc_8x8_khr_srgb8_alpha8_astc_8x8_khr.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033628, VkglTestCase_033628_1, VkglTestCase_033628_2);

#define VkglTestCase_033629_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_8x8_rg"
#define VkglTestCase_033629_2 "ba.rgba_astc_8x8_khr_srgb8_alpha8_astc_8x8_khr.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033629, VkglTestCase_033629_1, VkglTestCase_033629_2);

#define VkglTestCase_033630_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_8x8_rgba.r"
#define VkglTestCase_033630_2 "gba_astc_8x8_khr_srgb8_alpha8_astc_8x8_khr.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033630, VkglTestCase_033630_1, VkglTestCase_033630_2);

#define VkglTestCase_033631_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_8x8_rgb"
#define VkglTestCase_033631_2 "a.rgba_astc_8x8_khr_srgb8_alpha8_astc_8x8_khr.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033631, VkglTestCase_033631_1, VkglTestCase_033631_2);

#define VkglTestCase_033632_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_8x8_rgb"
#define VkglTestCase_033632_2 "a.rgba_astc_8x8_khr_srgb8_alpha8_astc_8x8_khr.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033632, VkglTestCase_033632_1, VkglTestCase_033632_2);

#define VkglTestCase_033633_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_8x8_rg"
#define VkglTestCase_033633_2 "ba.rgba_astc_8x8_khr_srgb8_alpha8_astc_8x8_khr.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033633, VkglTestCase_033633_1, VkglTestCase_033633_2);

#define VkglTestCase_033634_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_8x8_rgba.r"
#define VkglTestCase_033634_2 "gba_astc_8x8_khr_srgb8_alpha8_astc_8x8_khr.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033634, VkglTestCase_033634_1, VkglTestCase_033634_2);

#define VkglTestCase_033635_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_8x8_rg"
#define VkglTestCase_033635_2 "ba.rgba_astc_8x8_khr_srgb8_alpha8_astc_8x8_khr.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033635, VkglTestCase_033635_1, VkglTestCase_033635_2);

#define VkglTestCase_033636_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_8x8_rg"
#define VkglTestCase_033636_2 "ba.rgba_astc_8x8_khr_srgb8_alpha8_astc_8x8_khr.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033636, VkglTestCase_033636_1, VkglTestCase_033636_2);

#define VkglTestCase_033637_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_8x8_r"
#define VkglTestCase_033637_2 "gba.rgba_astc_8x8_khr_srgb8_alpha8_astc_8x8_khr.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033637, VkglTestCase_033637_1, VkglTestCase_033637_2);

#define VkglTestCase_033638_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_8x8_rgba."
#define VkglTestCase_033638_2 "rgba_astc_8x8_khr_srgb8_alpha8_astc_8x8_khr.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033638, VkglTestCase_033638_1, VkglTestCase_033638_2);

#define VkglTestCase_033639_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_8x8_rgba.r"
#define VkglTestCase_033639_2 "gba_astc_8x8_khr_srgb8_alpha8_astc_8x8_khr.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033639, VkglTestCase_033639_1, VkglTestCase_033639_2);

#define VkglTestCase_033640_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_8x8_rgba.r"
#define VkglTestCase_033640_2 "gba_astc_8x8_khr_srgb8_alpha8_astc_8x8_khr.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033640, VkglTestCase_033640_1, VkglTestCase_033640_2);

#define VkglTestCase_033641_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_8x8_rgba."
#define VkglTestCase_033641_2 "rgba_astc_8x8_khr_srgb8_alpha8_astc_8x8_khr.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033641, VkglTestCase_033641_1, VkglTestCase_033641_2);

#define VkglTestCase_033642_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_8x8_rgba.rgba"
#define VkglTestCase_033642_2 "_astc_8x8_khr_srgb8_alpha8_astc_8x8_khr.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033642, VkglTestCase_033642_1, VkglTestCase_033642_2);
