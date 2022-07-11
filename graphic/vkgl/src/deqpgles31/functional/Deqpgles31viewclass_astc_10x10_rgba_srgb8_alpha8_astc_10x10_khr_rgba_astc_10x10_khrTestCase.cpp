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

#define VkglTestCase_033899_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_10x10_rgba"
#define VkglTestCase_033899_2 ".srgb8_alpha8_astc_10x10_khr_rgba_astc_10x10_khr.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033899, VkglTestCase_033899_1, VkglTestCase_033899_2);

#define VkglTestCase_033900_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_10x10_rgba"
#define VkglTestCase_033900_2 ".srgb8_alpha8_astc_10x10_khr_rgba_astc_10x10_khr.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033900, VkglTestCase_033900_1, VkglTestCase_033900_2);

#define VkglTestCase_033901_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_10x10_rgb"
#define VkglTestCase_033901_2 "a.srgb8_alpha8_astc_10x10_khr_rgba_astc_10x10_khr.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033901, VkglTestCase_033901_1, VkglTestCase_033901_2);

#define VkglTestCase_033902_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_10x10_rgba.sr"
#define VkglTestCase_033902_2 "gb8_alpha8_astc_10x10_khr_rgba_astc_10x10_khr.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033902, VkglTestCase_033902_1, VkglTestCase_033902_2);

#define VkglTestCase_033903_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_10x10_rgba"
#define VkglTestCase_033903_2 ".srgb8_alpha8_astc_10x10_khr_rgba_astc_10x10_khr.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033903, VkglTestCase_033903_1, VkglTestCase_033903_2);

#define VkglTestCase_033904_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_10x10_rgba"
#define VkglTestCase_033904_2 ".srgb8_alpha8_astc_10x10_khr_rgba_astc_10x10_khr.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033904, VkglTestCase_033904_1, VkglTestCase_033904_2);

#define VkglTestCase_033905_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_10x10_rgb"
#define VkglTestCase_033905_2 "a.srgb8_alpha8_astc_10x10_khr_rgba_astc_10x10_khr.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033905, VkglTestCase_033905_1, VkglTestCase_033905_2);

#define VkglTestCase_033906_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_10x10_rgba.sr"
#define VkglTestCase_033906_2 "gb8_alpha8_astc_10x10_khr_rgba_astc_10x10_khr.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033906, VkglTestCase_033906_1, VkglTestCase_033906_2);

#define VkglTestCase_033907_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_10x10_rgb"
#define VkglTestCase_033907_2 "a.srgb8_alpha8_astc_10x10_khr_rgba_astc_10x10_khr.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033907, VkglTestCase_033907_1, VkglTestCase_033907_2);

#define VkglTestCase_033908_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_10x10_rgb"
#define VkglTestCase_033908_2 "a.srgb8_alpha8_astc_10x10_khr_rgba_astc_10x10_khr.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033908, VkglTestCase_033908_1, VkglTestCase_033908_2);

#define VkglTestCase_033909_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_10x10_rg"
#define VkglTestCase_033909_2 "ba.srgb8_alpha8_astc_10x10_khr_rgba_astc_10x10_khr.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033909, VkglTestCase_033909_1, VkglTestCase_033909_2);

#define VkglTestCase_033910_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_10x10_rgba.s"
#define VkglTestCase_033910_2 "rgb8_alpha8_astc_10x10_khr_rgba_astc_10x10_khr.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033910, VkglTestCase_033910_1, VkglTestCase_033910_2);

#define VkglTestCase_033911_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_10x10_rgba.sr"
#define VkglTestCase_033911_2 "gb8_alpha8_astc_10x10_khr_rgba_astc_10x10_khr.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033911, VkglTestCase_033911_1, VkglTestCase_033911_2);

#define VkglTestCase_033912_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_10x10_rgba.sr"
#define VkglTestCase_033912_2 "gb8_alpha8_astc_10x10_khr_rgba_astc_10x10_khr.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033912, VkglTestCase_033912_1, VkglTestCase_033912_2);

#define VkglTestCase_033913_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_10x10_rgba.s"
#define VkglTestCase_033913_2 "rgb8_alpha8_astc_10x10_khr_rgba_astc_10x10_khr.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033913, VkglTestCase_033913_1, VkglTestCase_033913_2);

#define VkglTestCase_033914_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_10x10_rgba.srgb8"
#define VkglTestCase_033914_2 "_alpha8_astc_10x10_khr_rgba_astc_10x10_khr.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033914, VkglTestCase_033914_1, VkglTestCase_033914_2);
