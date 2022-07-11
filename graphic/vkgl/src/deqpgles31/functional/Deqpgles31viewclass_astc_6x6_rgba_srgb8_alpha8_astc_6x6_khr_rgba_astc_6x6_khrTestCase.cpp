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

#define VkglTestCase_033451_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_6x6_rgb"
#define VkglTestCase_033451_2 "a.srgb8_alpha8_astc_6x6_khr_rgba_astc_6x6_khr.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033451, VkglTestCase_033451_1, VkglTestCase_033451_2);

#define VkglTestCase_033452_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_6x6_rgb"
#define VkglTestCase_033452_2 "a.srgb8_alpha8_astc_6x6_khr_rgba_astc_6x6_khr.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033452, VkglTestCase_033452_1, VkglTestCase_033452_2);

#define VkglTestCase_033453_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_6x6_rg"
#define VkglTestCase_033453_2 "ba.srgb8_alpha8_astc_6x6_khr_rgba_astc_6x6_khr.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033453, VkglTestCase_033453_1, VkglTestCase_033453_2);

#define VkglTestCase_033454_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_6x6_rgba.s"
#define VkglTestCase_033454_2 "rgb8_alpha8_astc_6x6_khr_rgba_astc_6x6_khr.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033454, VkglTestCase_033454_1, VkglTestCase_033454_2);

#define VkglTestCase_033455_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_6x6_rgb"
#define VkglTestCase_033455_2 "a.srgb8_alpha8_astc_6x6_khr_rgba_astc_6x6_khr.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033455, VkglTestCase_033455_1, VkglTestCase_033455_2);

#define VkglTestCase_033456_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_6x6_rgb"
#define VkglTestCase_033456_2 "a.srgb8_alpha8_astc_6x6_khr_rgba_astc_6x6_khr.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033456, VkglTestCase_033456_1, VkglTestCase_033456_2);

#define VkglTestCase_033457_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_6x6_rg"
#define VkglTestCase_033457_2 "ba.srgb8_alpha8_astc_6x6_khr_rgba_astc_6x6_khr.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033457, VkglTestCase_033457_1, VkglTestCase_033457_2);

#define VkglTestCase_033458_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_6x6_rgba.s"
#define VkglTestCase_033458_2 "rgb8_alpha8_astc_6x6_khr_rgba_astc_6x6_khr.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033458, VkglTestCase_033458_1, VkglTestCase_033458_2);

#define VkglTestCase_033459_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_6x6_rg"
#define VkglTestCase_033459_2 "ba.srgb8_alpha8_astc_6x6_khr_rgba_astc_6x6_khr.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033459, VkglTestCase_033459_1, VkglTestCase_033459_2);

#define VkglTestCase_033460_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_6x6_rg"
#define VkglTestCase_033460_2 "ba.srgb8_alpha8_astc_6x6_khr_rgba_astc_6x6_khr.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033460, VkglTestCase_033460_1, VkglTestCase_033460_2);

#define VkglTestCase_033461_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_6x6_r"
#define VkglTestCase_033461_2 "gba.srgb8_alpha8_astc_6x6_khr_rgba_astc_6x6_khr.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033461, VkglTestCase_033461_1, VkglTestCase_033461_2);

#define VkglTestCase_033462_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_6x6_rgba."
#define VkglTestCase_033462_2 "srgb8_alpha8_astc_6x6_khr_rgba_astc_6x6_khr.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033462, VkglTestCase_033462_1, VkglTestCase_033462_2);

#define VkglTestCase_033463_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_6x6_rgba.s"
#define VkglTestCase_033463_2 "rgb8_alpha8_astc_6x6_khr_rgba_astc_6x6_khr.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033463, VkglTestCase_033463_1, VkglTestCase_033463_2);

#define VkglTestCase_033464_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_6x6_rgba.s"
#define VkglTestCase_033464_2 "rgb8_alpha8_astc_6x6_khr_rgba_astc_6x6_khr.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033464, VkglTestCase_033464_1, VkglTestCase_033464_2);

#define VkglTestCase_033465_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_6x6_rgba."
#define VkglTestCase_033465_2 "srgb8_alpha8_astc_6x6_khr_rgba_astc_6x6_khr.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033465, VkglTestCase_033465_1, VkglTestCase_033465_2);

#define VkglTestCase_033466_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_6x6_rgba.srgb"
#define VkglTestCase_033466_2 "8_alpha8_astc_6x6_khr_rgba_astc_6x6_khr.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033466, VkglTestCase_033466_1, VkglTestCase_033466_2);
