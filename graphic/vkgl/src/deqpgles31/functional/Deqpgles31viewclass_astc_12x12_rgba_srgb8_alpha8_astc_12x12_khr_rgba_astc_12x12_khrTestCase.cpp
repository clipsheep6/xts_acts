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

#define VkglTestCase_034027_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_12x12_rgba"
#define VkglTestCase_034027_2 ".srgb8_alpha8_astc_12x12_khr_rgba_astc_12x12_khr.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034027, VkglTestCase_034027_1, VkglTestCase_034027_2);

#define VkglTestCase_034028_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_12x12_rgba"
#define VkglTestCase_034028_2 ".srgb8_alpha8_astc_12x12_khr_rgba_astc_12x12_khr.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034028, VkglTestCase_034028_1, VkglTestCase_034028_2);

#define VkglTestCase_034029_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_12x12_rgb"
#define VkglTestCase_034029_2 "a.srgb8_alpha8_astc_12x12_khr_rgba_astc_12x12_khr.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034029, VkglTestCase_034029_1, VkglTestCase_034029_2);

#define VkglTestCase_034030_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_12x12_rgba.sr"
#define VkglTestCase_034030_2 "gb8_alpha8_astc_12x12_khr_rgba_astc_12x12_khr.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034030, VkglTestCase_034030_1, VkglTestCase_034030_2);

#define VkglTestCase_034031_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_12x12_rgba"
#define VkglTestCase_034031_2 ".srgb8_alpha8_astc_12x12_khr_rgba_astc_12x12_khr.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034031, VkglTestCase_034031_1, VkglTestCase_034031_2);

#define VkglTestCase_034032_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_12x12_rgba"
#define VkglTestCase_034032_2 ".srgb8_alpha8_astc_12x12_khr_rgba_astc_12x12_khr.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034032, VkglTestCase_034032_1, VkglTestCase_034032_2);

#define VkglTestCase_034033_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_12x12_rgb"
#define VkglTestCase_034033_2 "a.srgb8_alpha8_astc_12x12_khr_rgba_astc_12x12_khr.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034033, VkglTestCase_034033_1, VkglTestCase_034033_2);

#define VkglTestCase_034034_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_12x12_rgba.sr"
#define VkglTestCase_034034_2 "gb8_alpha8_astc_12x12_khr_rgba_astc_12x12_khr.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034034, VkglTestCase_034034_1, VkglTestCase_034034_2);

#define VkglTestCase_034035_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_12x12_rgb"
#define VkglTestCase_034035_2 "a.srgb8_alpha8_astc_12x12_khr_rgba_astc_12x12_khr.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034035, VkglTestCase_034035_1, VkglTestCase_034035_2);

#define VkglTestCase_034036_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_12x12_rgb"
#define VkglTestCase_034036_2 "a.srgb8_alpha8_astc_12x12_khr_rgba_astc_12x12_khr.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034036, VkglTestCase_034036_1, VkglTestCase_034036_2);

#define VkglTestCase_034037_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_12x12_rg"
#define VkglTestCase_034037_2 "ba.srgb8_alpha8_astc_12x12_khr_rgba_astc_12x12_khr.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034037, VkglTestCase_034037_1, VkglTestCase_034037_2);

#define VkglTestCase_034038_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_12x12_rgba.s"
#define VkglTestCase_034038_2 "rgb8_alpha8_astc_12x12_khr_rgba_astc_12x12_khr.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034038, VkglTestCase_034038_1, VkglTestCase_034038_2);

#define VkglTestCase_034039_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_12x12_rgba.sr"
#define VkglTestCase_034039_2 "gb8_alpha8_astc_12x12_khr_rgba_astc_12x12_khr.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034039, VkglTestCase_034039_1, VkglTestCase_034039_2);

#define VkglTestCase_034040_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_12x12_rgba.sr"
#define VkglTestCase_034040_2 "gb8_alpha8_astc_12x12_khr_rgba_astc_12x12_khr.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034040, VkglTestCase_034040_1, VkglTestCase_034040_2);

#define VkglTestCase_034041_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_12x12_rgba.s"
#define VkglTestCase_034041_2 "rgb8_alpha8_astc_12x12_khr_rgba_astc_12x12_khr.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034041, VkglTestCase_034041_1, VkglTestCase_034041_2);

#define VkglTestCase_034042_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_12x12_rgba.srgb8"
#define VkglTestCase_034042_2 "_alpha8_astc_12x12_khr_rgba_astc_12x12_khr.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034042, VkglTestCase_034042_1, VkglTestCase_034042_2);
