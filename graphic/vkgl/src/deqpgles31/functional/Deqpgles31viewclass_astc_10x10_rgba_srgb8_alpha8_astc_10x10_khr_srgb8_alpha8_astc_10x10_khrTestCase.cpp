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

#define VkglTestCase_033915_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_10x10_rgba.srg"
#define VkglTestCase_033915_2 "b8_alpha8_astc_10x10_khr_srgb8_alpha8_astc_10x10_khr.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033915, VkglTestCase_033915_1, VkglTestCase_033915_2);

#define VkglTestCase_033916_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_10x10_rgba.srg"
#define VkglTestCase_033916_2 "b8_alpha8_astc_10x10_khr_srgb8_alpha8_astc_10x10_khr.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033916, VkglTestCase_033916_1, VkglTestCase_033916_2);

#define VkglTestCase_033917_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_10x10_rgba.sr"
#define VkglTestCase_033917_2 "gb8_alpha8_astc_10x10_khr_srgb8_alpha8_astc_10x10_khr.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033917, VkglTestCase_033917_1, VkglTestCase_033917_2);

#define VkglTestCase_033918_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_10x10_rgba.srgb8_"
#define VkglTestCase_033918_2 "alpha8_astc_10x10_khr_srgb8_alpha8_astc_10x10_khr.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033918, VkglTestCase_033918_1, VkglTestCase_033918_2);

#define VkglTestCase_033919_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_10x10_rgba.srg"
#define VkglTestCase_033919_2 "b8_alpha8_astc_10x10_khr_srgb8_alpha8_astc_10x10_khr.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033919, VkglTestCase_033919_1, VkglTestCase_033919_2);

#define VkglTestCase_033920_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_10x10_rgba.srg"
#define VkglTestCase_033920_2 "b8_alpha8_astc_10x10_khr_srgb8_alpha8_astc_10x10_khr.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033920, VkglTestCase_033920_1, VkglTestCase_033920_2);

#define VkglTestCase_033921_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_10x10_rgba.sr"
#define VkglTestCase_033921_2 "gb8_alpha8_astc_10x10_khr_srgb8_alpha8_astc_10x10_khr.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033921, VkglTestCase_033921_1, VkglTestCase_033921_2);

#define VkglTestCase_033922_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_10x10_rgba.srgb8_"
#define VkglTestCase_033922_2 "alpha8_astc_10x10_khr_srgb8_alpha8_astc_10x10_khr.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033922, VkglTestCase_033922_1, VkglTestCase_033922_2);

#define VkglTestCase_033923_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_10x10_rgba.sr"
#define VkglTestCase_033923_2 "gb8_alpha8_astc_10x10_khr_srgb8_alpha8_astc_10x10_khr.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033923, VkglTestCase_033923_1, VkglTestCase_033923_2);

#define VkglTestCase_033924_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_10x10_rgba.sr"
#define VkglTestCase_033924_2 "gb8_alpha8_astc_10x10_khr_srgb8_alpha8_astc_10x10_khr.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033924, VkglTestCase_033924_1, VkglTestCase_033924_2);

#define VkglTestCase_033925_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_10x10_rgba.s"
#define VkglTestCase_033925_2 "rgb8_alpha8_astc_10x10_khr_srgb8_alpha8_astc_10x10_khr.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033925, VkglTestCase_033925_1, VkglTestCase_033925_2);

#define VkglTestCase_033926_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_10x10_rgba.srgb8"
#define VkglTestCase_033926_2 "_alpha8_astc_10x10_khr_srgb8_alpha8_astc_10x10_khr.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033926, VkglTestCase_033926_1, VkglTestCase_033926_2);

#define VkglTestCase_033927_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_10x10_rgba.srgb8_"
#define VkglTestCase_033927_2 "alpha8_astc_10x10_khr_srgb8_alpha8_astc_10x10_khr.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033927, VkglTestCase_033927_1, VkglTestCase_033927_2);

#define VkglTestCase_033928_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_10x10_rgba.srgb8_"
#define VkglTestCase_033928_2 "alpha8_astc_10x10_khr_srgb8_alpha8_astc_10x10_khr.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033928, VkglTestCase_033928_1, VkglTestCase_033928_2);

#define VkglTestCase_033929_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_10x10_rgba.srgb8"
#define VkglTestCase_033929_2 "_alpha8_astc_10x10_khr_srgb8_alpha8_astc_10x10_khr.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033929, VkglTestCase_033929_1, VkglTestCase_033929_2);

#define VkglTestCase_033930_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_10x10_rgba.srgb8_alp"
#define VkglTestCase_033930_2 "ha8_astc_10x10_khr_srgb8_alpha8_astc_10x10_khr.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033930, VkglTestCase_033930_1, VkglTestCase_033930_2);
