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

#define VkglTestCase_033883_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_10x10_rgba"
#define VkglTestCase_033883_2 ".rgba_astc_10x10_khr_srgb8_alpha8_astc_10x10_khr.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033883, VkglTestCase_033883_1, VkglTestCase_033883_2);

#define VkglTestCase_033884_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_10x10_rgba"
#define VkglTestCase_033884_2 ".rgba_astc_10x10_khr_srgb8_alpha8_astc_10x10_khr.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033884, VkglTestCase_033884_1, VkglTestCase_033884_2);

#define VkglTestCase_033885_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_10x10_rgb"
#define VkglTestCase_033885_2 "a.rgba_astc_10x10_khr_srgb8_alpha8_astc_10x10_khr.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033885, VkglTestCase_033885_1, VkglTestCase_033885_2);

#define VkglTestCase_033886_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_10x10_rgba.rg"
#define VkglTestCase_033886_2 "ba_astc_10x10_khr_srgb8_alpha8_astc_10x10_khr.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033886, VkglTestCase_033886_1, VkglTestCase_033886_2);

#define VkglTestCase_033887_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_10x10_rgba"
#define VkglTestCase_033887_2 ".rgba_astc_10x10_khr_srgb8_alpha8_astc_10x10_khr.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033887, VkglTestCase_033887_1, VkglTestCase_033887_2);

#define VkglTestCase_033888_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_10x10_rgba"
#define VkglTestCase_033888_2 ".rgba_astc_10x10_khr_srgb8_alpha8_astc_10x10_khr.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033888, VkglTestCase_033888_1, VkglTestCase_033888_2);

#define VkglTestCase_033889_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_10x10_rgb"
#define VkglTestCase_033889_2 "a.rgba_astc_10x10_khr_srgb8_alpha8_astc_10x10_khr.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033889, VkglTestCase_033889_1, VkglTestCase_033889_2);

#define VkglTestCase_033890_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_10x10_rgba.rg"
#define VkglTestCase_033890_2 "ba_astc_10x10_khr_srgb8_alpha8_astc_10x10_khr.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033890, VkglTestCase_033890_1, VkglTestCase_033890_2);

#define VkglTestCase_033891_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_10x10_rgb"
#define VkglTestCase_033891_2 "a.rgba_astc_10x10_khr_srgb8_alpha8_astc_10x10_khr.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033891, VkglTestCase_033891_1, VkglTestCase_033891_2);

#define VkglTestCase_033892_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_10x10_rgb"
#define VkglTestCase_033892_2 "a.rgba_astc_10x10_khr_srgb8_alpha8_astc_10x10_khr.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033892, VkglTestCase_033892_1, VkglTestCase_033892_2);

#define VkglTestCase_033893_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_10x10_rg"
#define VkglTestCase_033893_2 "ba.rgba_astc_10x10_khr_srgb8_alpha8_astc_10x10_khr.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033893, VkglTestCase_033893_1, VkglTestCase_033893_2);

#define VkglTestCase_033894_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_10x10_rgba.r"
#define VkglTestCase_033894_2 "gba_astc_10x10_khr_srgb8_alpha8_astc_10x10_khr.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033894, VkglTestCase_033894_1, VkglTestCase_033894_2);

#define VkglTestCase_033895_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_10x10_rgba.rg"
#define VkglTestCase_033895_2 "ba_astc_10x10_khr_srgb8_alpha8_astc_10x10_khr.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033895, VkglTestCase_033895_1, VkglTestCase_033895_2);

#define VkglTestCase_033896_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_10x10_rgba.rg"
#define VkglTestCase_033896_2 "ba_astc_10x10_khr_srgb8_alpha8_astc_10x10_khr.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033896, VkglTestCase_033896_1, VkglTestCase_033896_2);

#define VkglTestCase_033897_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_10x10_rgba.r"
#define VkglTestCase_033897_2 "gba_astc_10x10_khr_srgb8_alpha8_astc_10x10_khr.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033897, VkglTestCase_033897_1, VkglTestCase_033897_2);

#define VkglTestCase_033898_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_10x10_rgba.rgba_"
#define VkglTestCase_033898_2 "astc_10x10_khr_srgb8_alpha8_astc_10x10_khr.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033898, VkglTestCase_033898_1, VkglTestCase_033898_2);
