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

#define VkglTestCase_034011_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_12x12_rgba"
#define VkglTestCase_034011_2 ".rgba_astc_12x12_khr_srgb8_alpha8_astc_12x12_khr.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034011, VkglTestCase_034011_1, VkglTestCase_034011_2);

#define VkglTestCase_034012_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_12x12_rgba"
#define VkglTestCase_034012_2 ".rgba_astc_12x12_khr_srgb8_alpha8_astc_12x12_khr.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034012, VkglTestCase_034012_1, VkglTestCase_034012_2);

#define VkglTestCase_034013_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_12x12_rgb"
#define VkglTestCase_034013_2 "a.rgba_astc_12x12_khr_srgb8_alpha8_astc_12x12_khr.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034013, VkglTestCase_034013_1, VkglTestCase_034013_2);

#define VkglTestCase_034014_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_12x12_rgba.rg"
#define VkglTestCase_034014_2 "ba_astc_12x12_khr_srgb8_alpha8_astc_12x12_khr.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034014, VkglTestCase_034014_1, VkglTestCase_034014_2);

#define VkglTestCase_034015_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_12x12_rgba"
#define VkglTestCase_034015_2 ".rgba_astc_12x12_khr_srgb8_alpha8_astc_12x12_khr.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034015, VkglTestCase_034015_1, VkglTestCase_034015_2);

#define VkglTestCase_034016_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_12x12_rgba"
#define VkglTestCase_034016_2 ".rgba_astc_12x12_khr_srgb8_alpha8_astc_12x12_khr.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034016, VkglTestCase_034016_1, VkglTestCase_034016_2);

#define VkglTestCase_034017_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_12x12_rgb"
#define VkglTestCase_034017_2 "a.rgba_astc_12x12_khr_srgb8_alpha8_astc_12x12_khr.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034017, VkglTestCase_034017_1, VkglTestCase_034017_2);

#define VkglTestCase_034018_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_12x12_rgba.rg"
#define VkglTestCase_034018_2 "ba_astc_12x12_khr_srgb8_alpha8_astc_12x12_khr.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034018, VkglTestCase_034018_1, VkglTestCase_034018_2);

#define VkglTestCase_034019_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_12x12_rgb"
#define VkglTestCase_034019_2 "a.rgba_astc_12x12_khr_srgb8_alpha8_astc_12x12_khr.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034019, VkglTestCase_034019_1, VkglTestCase_034019_2);

#define VkglTestCase_034020_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_12x12_rgb"
#define VkglTestCase_034020_2 "a.rgba_astc_12x12_khr_srgb8_alpha8_astc_12x12_khr.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034020, VkglTestCase_034020_1, VkglTestCase_034020_2);

#define VkglTestCase_034021_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_12x12_rg"
#define VkglTestCase_034021_2 "ba.rgba_astc_12x12_khr_srgb8_alpha8_astc_12x12_khr.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034021, VkglTestCase_034021_1, VkglTestCase_034021_2);

#define VkglTestCase_034022_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_12x12_rgba.r"
#define VkglTestCase_034022_2 "gba_astc_12x12_khr_srgb8_alpha8_astc_12x12_khr.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034022, VkglTestCase_034022_1, VkglTestCase_034022_2);

#define VkglTestCase_034023_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_12x12_rgba.rg"
#define VkglTestCase_034023_2 "ba_astc_12x12_khr_srgb8_alpha8_astc_12x12_khr.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034023, VkglTestCase_034023_1, VkglTestCase_034023_2);

#define VkglTestCase_034024_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_12x12_rgba.rg"
#define VkglTestCase_034024_2 "ba_astc_12x12_khr_srgb8_alpha8_astc_12x12_khr.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034024, VkglTestCase_034024_1, VkglTestCase_034024_2);

#define VkglTestCase_034025_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_12x12_rgba.r"
#define VkglTestCase_034025_2 "gba_astc_12x12_khr_srgb8_alpha8_astc_12x12_khr.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034025, VkglTestCase_034025_1, VkglTestCase_034025_2);

#define VkglTestCase_034026_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_12x12_rgba.rgba_"
#define VkglTestCase_034026_2 "astc_12x12_khr_srgb8_alpha8_astc_12x12_khr.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034026, VkglTestCase_034026_1, VkglTestCase_034026_2);
