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

#define VkglTestCase_033659_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_8x8_rgba.sr"
#define VkglTestCase_033659_2 "gb8_alpha8_astc_8x8_khr_srgb8_alpha8_astc_8x8_khr.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033659, VkglTestCase_033659_1, VkglTestCase_033659_2);

#define VkglTestCase_033660_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_8x8_rgba.sr"
#define VkglTestCase_033660_2 "gb8_alpha8_astc_8x8_khr_srgb8_alpha8_astc_8x8_khr.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033660, VkglTestCase_033660_1, VkglTestCase_033660_2);

#define VkglTestCase_033661_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_8x8_rgba.s"
#define VkglTestCase_033661_2 "rgb8_alpha8_astc_8x8_khr_srgb8_alpha8_astc_8x8_khr.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033661, VkglTestCase_033661_1, VkglTestCase_033661_2);

#define VkglTestCase_033662_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_8x8_rgba.srgb8"
#define VkglTestCase_033662_2 "_alpha8_astc_8x8_khr_srgb8_alpha8_astc_8x8_khr.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033662, VkglTestCase_033662_1, VkglTestCase_033662_2);

#define VkglTestCase_033663_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_8x8_rgba.sr"
#define VkglTestCase_033663_2 "gb8_alpha8_astc_8x8_khr_srgb8_alpha8_astc_8x8_khr.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033663, VkglTestCase_033663_1, VkglTestCase_033663_2);

#define VkglTestCase_033664_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_8x8_rgba.sr"
#define VkglTestCase_033664_2 "gb8_alpha8_astc_8x8_khr_srgb8_alpha8_astc_8x8_khr.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033664, VkglTestCase_033664_1, VkglTestCase_033664_2);

#define VkglTestCase_033665_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_8x8_rgba.s"
#define VkglTestCase_033665_2 "rgb8_alpha8_astc_8x8_khr_srgb8_alpha8_astc_8x8_khr.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033665, VkglTestCase_033665_1, VkglTestCase_033665_2);

#define VkglTestCase_033666_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_8x8_rgba.srgb8"
#define VkglTestCase_033666_2 "_alpha8_astc_8x8_khr_srgb8_alpha8_astc_8x8_khr.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033666, VkglTestCase_033666_1, VkglTestCase_033666_2);

#define VkglTestCase_033667_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_8x8_rgba.s"
#define VkglTestCase_033667_2 "rgb8_alpha8_astc_8x8_khr_srgb8_alpha8_astc_8x8_khr.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033667, VkglTestCase_033667_1, VkglTestCase_033667_2);

#define VkglTestCase_033668_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_8x8_rgba.s"
#define VkglTestCase_033668_2 "rgb8_alpha8_astc_8x8_khr_srgb8_alpha8_astc_8x8_khr.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033668, VkglTestCase_033668_1, VkglTestCase_033668_2);

#define VkglTestCase_033669_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_8x8_rgba."
#define VkglTestCase_033669_2 "srgb8_alpha8_astc_8x8_khr_srgb8_alpha8_astc_8x8_khr.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033669, VkglTestCase_033669_1, VkglTestCase_033669_2);

#define VkglTestCase_033670_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_8x8_rgba.srgb"
#define VkglTestCase_033670_2 "8_alpha8_astc_8x8_khr_srgb8_alpha8_astc_8x8_khr.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033670, VkglTestCase_033670_1, VkglTestCase_033670_2);

#define VkglTestCase_033671_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_8x8_rgba.srgb8"
#define VkglTestCase_033671_2 "_alpha8_astc_8x8_khr_srgb8_alpha8_astc_8x8_khr.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033671, VkglTestCase_033671_1, VkglTestCase_033671_2);

#define VkglTestCase_033672_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_8x8_rgba.srgb8"
#define VkglTestCase_033672_2 "_alpha8_astc_8x8_khr_srgb8_alpha8_astc_8x8_khr.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033672, VkglTestCase_033672_1, VkglTestCase_033672_2);

#define VkglTestCase_033673_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_8x8_rgba.srgb"
#define VkglTestCase_033673_2 "8_alpha8_astc_8x8_khr_srgb8_alpha8_astc_8x8_khr.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033673, VkglTestCase_033673_1, VkglTestCase_033673_2);

#define VkglTestCase_033674_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_8x8_rgba.srgb8_al"
#define VkglTestCase_033674_2 "pha8_astc_8x8_khr_srgb8_alpha8_astc_8x8_khr.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033674, VkglTestCase_033674_1, VkglTestCase_033674_2);
