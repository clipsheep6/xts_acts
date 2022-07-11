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

#define VkglTestCase_033179_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_4x4_rgb"
#define VkglTestCase_033179_2 "a.rgba_astc_4x4_khr_srgb8_alpha8_astc_4x4_khr.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033179, VkglTestCase_033179_1, VkglTestCase_033179_2);

#define VkglTestCase_033180_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_4x4_rgb"
#define VkglTestCase_033180_2 "a.rgba_astc_4x4_khr_srgb8_alpha8_astc_4x4_khr.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033180, VkglTestCase_033180_1, VkglTestCase_033180_2);

#define VkglTestCase_033181_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_4x4_rg"
#define VkglTestCase_033181_2 "ba.rgba_astc_4x4_khr_srgb8_alpha8_astc_4x4_khr.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033181, VkglTestCase_033181_1, VkglTestCase_033181_2);

#define VkglTestCase_033182_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_4x4_rgba.r"
#define VkglTestCase_033182_2 "gba_astc_4x4_khr_srgb8_alpha8_astc_4x4_khr.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033182, VkglTestCase_033182_1, VkglTestCase_033182_2);

#define VkglTestCase_033183_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_4x4_rgb"
#define VkglTestCase_033183_2 "a.rgba_astc_4x4_khr_srgb8_alpha8_astc_4x4_khr.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033183, VkglTestCase_033183_1, VkglTestCase_033183_2);

#define VkglTestCase_033184_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_4x4_rgb"
#define VkglTestCase_033184_2 "a.rgba_astc_4x4_khr_srgb8_alpha8_astc_4x4_khr.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033184, VkglTestCase_033184_1, VkglTestCase_033184_2);

#define VkglTestCase_033185_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_4x4_rg"
#define VkglTestCase_033185_2 "ba.rgba_astc_4x4_khr_srgb8_alpha8_astc_4x4_khr.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033185, VkglTestCase_033185_1, VkglTestCase_033185_2);

#define VkglTestCase_033186_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_4x4_rgba.r"
#define VkglTestCase_033186_2 "gba_astc_4x4_khr_srgb8_alpha8_astc_4x4_khr.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033186, VkglTestCase_033186_1, VkglTestCase_033186_2);

#define VkglTestCase_033187_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_4x4_rg"
#define VkglTestCase_033187_2 "ba.rgba_astc_4x4_khr_srgb8_alpha8_astc_4x4_khr.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033187, VkglTestCase_033187_1, VkglTestCase_033187_2);

#define VkglTestCase_033188_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_4x4_rg"
#define VkglTestCase_033188_2 "ba.rgba_astc_4x4_khr_srgb8_alpha8_astc_4x4_khr.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033188, VkglTestCase_033188_1, VkglTestCase_033188_2);

#define VkglTestCase_033189_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_4x4_r"
#define VkglTestCase_033189_2 "gba.rgba_astc_4x4_khr_srgb8_alpha8_astc_4x4_khr.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033189, VkglTestCase_033189_1, VkglTestCase_033189_2);

#define VkglTestCase_033190_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_4x4_rgba."
#define VkglTestCase_033190_2 "rgba_astc_4x4_khr_srgb8_alpha8_astc_4x4_khr.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033190, VkglTestCase_033190_1, VkglTestCase_033190_2);

#define VkglTestCase_033191_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_4x4_rgba.r"
#define VkglTestCase_033191_2 "gba_astc_4x4_khr_srgb8_alpha8_astc_4x4_khr.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033191, VkglTestCase_033191_1, VkglTestCase_033191_2);

#define VkglTestCase_033192_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_4x4_rgba.r"
#define VkglTestCase_033192_2 "gba_astc_4x4_khr_srgb8_alpha8_astc_4x4_khr.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033192, VkglTestCase_033192_1, VkglTestCase_033192_2);

#define VkglTestCase_033193_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_4x4_rgba."
#define VkglTestCase_033193_2 "rgba_astc_4x4_khr_srgb8_alpha8_astc_4x4_khr.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033193, VkglTestCase_033193_1, VkglTestCase_033193_2);

#define VkglTestCase_033194_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_4x4_rgba.rgba"
#define VkglTestCase_033194_2 "_astc_4x4_khr_srgb8_alpha8_astc_4x4_khr.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033194, VkglTestCase_033194_1, VkglTestCase_033194_2);
