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

#define VkglTestCase_033691_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_10x5_rgba"
#define VkglTestCase_033691_2 ".rgba_astc_10x5_khr_srgb8_alpha8_astc_10x5_khr.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033691, VkglTestCase_033691_1, VkglTestCase_033691_2);

#define VkglTestCase_033692_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_10x5_rgba"
#define VkglTestCase_033692_2 ".rgba_astc_10x5_khr_srgb8_alpha8_astc_10x5_khr.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033692, VkglTestCase_033692_1, VkglTestCase_033692_2);

#define VkglTestCase_033693_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_10x5_rgb"
#define VkglTestCase_033693_2 "a.rgba_astc_10x5_khr_srgb8_alpha8_astc_10x5_khr.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033693, VkglTestCase_033693_1, VkglTestCase_033693_2);

#define VkglTestCase_033694_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_10x5_rgba.rg"
#define VkglTestCase_033694_2 "ba_astc_10x5_khr_srgb8_alpha8_astc_10x5_khr.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033694, VkglTestCase_033694_1, VkglTestCase_033694_2);

#define VkglTestCase_033695_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_10x5_rgba"
#define VkglTestCase_033695_2 ".rgba_astc_10x5_khr_srgb8_alpha8_astc_10x5_khr.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033695, VkglTestCase_033695_1, VkglTestCase_033695_2);

#define VkglTestCase_033696_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_10x5_rgba"
#define VkglTestCase_033696_2 ".rgba_astc_10x5_khr_srgb8_alpha8_astc_10x5_khr.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033696, VkglTestCase_033696_1, VkglTestCase_033696_2);

#define VkglTestCase_033697_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_10x5_rgb"
#define VkglTestCase_033697_2 "a.rgba_astc_10x5_khr_srgb8_alpha8_astc_10x5_khr.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033697, VkglTestCase_033697_1, VkglTestCase_033697_2);

#define VkglTestCase_033698_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_10x5_rgba.rg"
#define VkglTestCase_033698_2 "ba_astc_10x5_khr_srgb8_alpha8_astc_10x5_khr.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033698, VkglTestCase_033698_1, VkglTestCase_033698_2);

#define VkglTestCase_033699_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_10x5_rgb"
#define VkglTestCase_033699_2 "a.rgba_astc_10x5_khr_srgb8_alpha8_astc_10x5_khr.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033699, VkglTestCase_033699_1, VkglTestCase_033699_2);

#define VkglTestCase_033700_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_10x5_rgb"
#define VkglTestCase_033700_2 "a.rgba_astc_10x5_khr_srgb8_alpha8_astc_10x5_khr.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033700, VkglTestCase_033700_1, VkglTestCase_033700_2);

#define VkglTestCase_033701_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_10x5_rg"
#define VkglTestCase_033701_2 "ba.rgba_astc_10x5_khr_srgb8_alpha8_astc_10x5_khr.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033701, VkglTestCase_033701_1, VkglTestCase_033701_2);

#define VkglTestCase_033702_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_10x5_rgba.r"
#define VkglTestCase_033702_2 "gba_astc_10x5_khr_srgb8_alpha8_astc_10x5_khr.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033702, VkglTestCase_033702_1, VkglTestCase_033702_2);

#define VkglTestCase_033703_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_10x5_rgba.rg"
#define VkglTestCase_033703_2 "ba_astc_10x5_khr_srgb8_alpha8_astc_10x5_khr.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033703, VkglTestCase_033703_1, VkglTestCase_033703_2);

#define VkglTestCase_033704_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_10x5_rgba.rg"
#define VkglTestCase_033704_2 "ba_astc_10x5_khr_srgb8_alpha8_astc_10x5_khr.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033704, VkglTestCase_033704_1, VkglTestCase_033704_2);

#define VkglTestCase_033705_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_10x5_rgba.r"
#define VkglTestCase_033705_2 "gba_astc_10x5_khr_srgb8_alpha8_astc_10x5_khr.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033705, VkglTestCase_033705_1, VkglTestCase_033705_2);

#define VkglTestCase_033706_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_10x5_rgba.rgba_"
#define VkglTestCase_033706_2 "astc_10x5_khr_srgb8_alpha8_astc_10x5_khr.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033706, VkglTestCase_033706_1, VkglTestCase_033706_2);
