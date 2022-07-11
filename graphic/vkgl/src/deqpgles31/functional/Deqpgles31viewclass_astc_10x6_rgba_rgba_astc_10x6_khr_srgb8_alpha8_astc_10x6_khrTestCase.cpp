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

#define VkglTestCase_033755_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_10x6_rgba"
#define VkglTestCase_033755_2 ".rgba_astc_10x6_khr_srgb8_alpha8_astc_10x6_khr.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033755, VkglTestCase_033755_1, VkglTestCase_033755_2);

#define VkglTestCase_033756_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_10x6_rgba"
#define VkglTestCase_033756_2 ".rgba_astc_10x6_khr_srgb8_alpha8_astc_10x6_khr.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033756, VkglTestCase_033756_1, VkglTestCase_033756_2);

#define VkglTestCase_033757_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_10x6_rgb"
#define VkglTestCase_033757_2 "a.rgba_astc_10x6_khr_srgb8_alpha8_astc_10x6_khr.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033757, VkglTestCase_033757_1, VkglTestCase_033757_2);

#define VkglTestCase_033758_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_10x6_rgba.rg"
#define VkglTestCase_033758_2 "ba_astc_10x6_khr_srgb8_alpha8_astc_10x6_khr.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033758, VkglTestCase_033758_1, VkglTestCase_033758_2);

#define VkglTestCase_033759_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_10x6_rgba"
#define VkglTestCase_033759_2 ".rgba_astc_10x6_khr_srgb8_alpha8_astc_10x6_khr.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033759, VkglTestCase_033759_1, VkglTestCase_033759_2);

#define VkglTestCase_033760_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_10x6_rgba"
#define VkglTestCase_033760_2 ".rgba_astc_10x6_khr_srgb8_alpha8_astc_10x6_khr.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033760, VkglTestCase_033760_1, VkglTestCase_033760_2);

#define VkglTestCase_033761_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_10x6_rgb"
#define VkglTestCase_033761_2 "a.rgba_astc_10x6_khr_srgb8_alpha8_astc_10x6_khr.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033761, VkglTestCase_033761_1, VkglTestCase_033761_2);

#define VkglTestCase_033762_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_10x6_rgba.rg"
#define VkglTestCase_033762_2 "ba_astc_10x6_khr_srgb8_alpha8_astc_10x6_khr.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033762, VkglTestCase_033762_1, VkglTestCase_033762_2);

#define VkglTestCase_033763_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_10x6_rgb"
#define VkglTestCase_033763_2 "a.rgba_astc_10x6_khr_srgb8_alpha8_astc_10x6_khr.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033763, VkglTestCase_033763_1, VkglTestCase_033763_2);

#define VkglTestCase_033764_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_10x6_rgb"
#define VkglTestCase_033764_2 "a.rgba_astc_10x6_khr_srgb8_alpha8_astc_10x6_khr.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033764, VkglTestCase_033764_1, VkglTestCase_033764_2);

#define VkglTestCase_033765_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_10x6_rg"
#define VkglTestCase_033765_2 "ba.rgba_astc_10x6_khr_srgb8_alpha8_astc_10x6_khr.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033765, VkglTestCase_033765_1, VkglTestCase_033765_2);

#define VkglTestCase_033766_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_10x6_rgba.r"
#define VkglTestCase_033766_2 "gba_astc_10x6_khr_srgb8_alpha8_astc_10x6_khr.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033766, VkglTestCase_033766_1, VkglTestCase_033766_2);

#define VkglTestCase_033767_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_10x6_rgba.rg"
#define VkglTestCase_033767_2 "ba_astc_10x6_khr_srgb8_alpha8_astc_10x6_khr.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033767, VkglTestCase_033767_1, VkglTestCase_033767_2);

#define VkglTestCase_033768_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_10x6_rgba.rg"
#define VkglTestCase_033768_2 "ba_astc_10x6_khr_srgb8_alpha8_astc_10x6_khr.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033768, VkglTestCase_033768_1, VkglTestCase_033768_2);

#define VkglTestCase_033769_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_10x6_rgba.r"
#define VkglTestCase_033769_2 "gba_astc_10x6_khr_srgb8_alpha8_astc_10x6_khr.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033769, VkglTestCase_033769_1, VkglTestCase_033769_2);

#define VkglTestCase_033770_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_10x6_rgba.rgba_"
#define VkglTestCase_033770_2 "astc_10x6_khr_srgb8_alpha8_astc_10x6_khr.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033770, VkglTestCase_033770_1, VkglTestCase_033770_2);
