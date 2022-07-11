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

#define VkglTestCase_033259_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_5x4_rgb"
#define VkglTestCase_033259_2 "a.srgb8_alpha8_astc_5x4_khr_rgba_astc_5x4_khr.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033259, VkglTestCase_033259_1, VkglTestCase_033259_2);

#define VkglTestCase_033260_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_5x4_rgb"
#define VkglTestCase_033260_2 "a.srgb8_alpha8_astc_5x4_khr_rgba_astc_5x4_khr.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033260, VkglTestCase_033260_1, VkglTestCase_033260_2);

#define VkglTestCase_033261_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_5x4_rg"
#define VkglTestCase_033261_2 "ba.srgb8_alpha8_astc_5x4_khr_rgba_astc_5x4_khr.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033261, VkglTestCase_033261_1, VkglTestCase_033261_2);

#define VkglTestCase_033262_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_5x4_rgba.s"
#define VkglTestCase_033262_2 "rgb8_alpha8_astc_5x4_khr_rgba_astc_5x4_khr.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033262, VkglTestCase_033262_1, VkglTestCase_033262_2);

#define VkglTestCase_033263_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_5x4_rgb"
#define VkglTestCase_033263_2 "a.srgb8_alpha8_astc_5x4_khr_rgba_astc_5x4_khr.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033263, VkglTestCase_033263_1, VkglTestCase_033263_2);

#define VkglTestCase_033264_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_5x4_rgb"
#define VkglTestCase_033264_2 "a.srgb8_alpha8_astc_5x4_khr_rgba_astc_5x4_khr.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033264, VkglTestCase_033264_1, VkglTestCase_033264_2);

#define VkglTestCase_033265_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_5x4_rg"
#define VkglTestCase_033265_2 "ba.srgb8_alpha8_astc_5x4_khr_rgba_astc_5x4_khr.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033265, VkglTestCase_033265_1, VkglTestCase_033265_2);

#define VkglTestCase_033266_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_5x4_rgba.s"
#define VkglTestCase_033266_2 "rgb8_alpha8_astc_5x4_khr_rgba_astc_5x4_khr.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033266, VkglTestCase_033266_1, VkglTestCase_033266_2);

#define VkglTestCase_033267_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_5x4_rg"
#define VkglTestCase_033267_2 "ba.srgb8_alpha8_astc_5x4_khr_rgba_astc_5x4_khr.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033267, VkglTestCase_033267_1, VkglTestCase_033267_2);

#define VkglTestCase_033268_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_5x4_rg"
#define VkglTestCase_033268_2 "ba.srgb8_alpha8_astc_5x4_khr_rgba_astc_5x4_khr.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033268, VkglTestCase_033268_1, VkglTestCase_033268_2);

#define VkglTestCase_033269_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_5x4_r"
#define VkglTestCase_033269_2 "gba.srgb8_alpha8_astc_5x4_khr_rgba_astc_5x4_khr.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033269, VkglTestCase_033269_1, VkglTestCase_033269_2);

#define VkglTestCase_033270_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_5x4_rgba."
#define VkglTestCase_033270_2 "srgb8_alpha8_astc_5x4_khr_rgba_astc_5x4_khr.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033270, VkglTestCase_033270_1, VkglTestCase_033270_2);

#define VkglTestCase_033271_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_5x4_rgba.s"
#define VkglTestCase_033271_2 "rgb8_alpha8_astc_5x4_khr_rgba_astc_5x4_khr.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033271, VkglTestCase_033271_1, VkglTestCase_033271_2);

#define VkglTestCase_033272_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_5x4_rgba.s"
#define VkglTestCase_033272_2 "rgb8_alpha8_astc_5x4_khr_rgba_astc_5x4_khr.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033272, VkglTestCase_033272_1, VkglTestCase_033272_2);

#define VkglTestCase_033273_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_5x4_rgba."
#define VkglTestCase_033273_2 "srgb8_alpha8_astc_5x4_khr_rgba_astc_5x4_khr.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033273, VkglTestCase_033273_1, VkglTestCase_033273_2);

#define VkglTestCase_033274_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_5x4_rgba.srgb"
#define VkglTestCase_033274_2 "8_alpha8_astc_5x4_khr_rgba_astc_5x4_khr.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033274, VkglTestCase_033274_1, VkglTestCase_033274_2);
