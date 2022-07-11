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

#define VkglTestCase_033835_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_10x8_rgba"
#define VkglTestCase_033835_2 ".srgb8_alpha8_astc_10x8_khr_rgba_astc_10x8_khr.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033835, VkglTestCase_033835_1, VkglTestCase_033835_2);

#define VkglTestCase_033836_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_10x8_rgba"
#define VkglTestCase_033836_2 ".srgb8_alpha8_astc_10x8_khr_rgba_astc_10x8_khr.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033836, VkglTestCase_033836_1, VkglTestCase_033836_2);

#define VkglTestCase_033837_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_10x8_rgb"
#define VkglTestCase_033837_2 "a.srgb8_alpha8_astc_10x8_khr_rgba_astc_10x8_khr.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033837, VkglTestCase_033837_1, VkglTestCase_033837_2);

#define VkglTestCase_033838_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_10x8_rgba.sr"
#define VkglTestCase_033838_2 "gb8_alpha8_astc_10x8_khr_rgba_astc_10x8_khr.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033838, VkglTestCase_033838_1, VkglTestCase_033838_2);

#define VkglTestCase_033839_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_10x8_rgba"
#define VkglTestCase_033839_2 ".srgb8_alpha8_astc_10x8_khr_rgba_astc_10x8_khr.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033839, VkglTestCase_033839_1, VkglTestCase_033839_2);

#define VkglTestCase_033840_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_10x8_rgba"
#define VkglTestCase_033840_2 ".srgb8_alpha8_astc_10x8_khr_rgba_astc_10x8_khr.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033840, VkglTestCase_033840_1, VkglTestCase_033840_2);

#define VkglTestCase_033841_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_10x8_rgb"
#define VkglTestCase_033841_2 "a.srgb8_alpha8_astc_10x8_khr_rgba_astc_10x8_khr.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033841, VkglTestCase_033841_1, VkglTestCase_033841_2);

#define VkglTestCase_033842_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_10x8_rgba.sr"
#define VkglTestCase_033842_2 "gb8_alpha8_astc_10x8_khr_rgba_astc_10x8_khr.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033842, VkglTestCase_033842_1, VkglTestCase_033842_2);

#define VkglTestCase_033843_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_10x8_rgb"
#define VkglTestCase_033843_2 "a.srgb8_alpha8_astc_10x8_khr_rgba_astc_10x8_khr.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033843, VkglTestCase_033843_1, VkglTestCase_033843_2);

#define VkglTestCase_033844_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_10x8_rgb"
#define VkglTestCase_033844_2 "a.srgb8_alpha8_astc_10x8_khr_rgba_astc_10x8_khr.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033844, VkglTestCase_033844_1, VkglTestCase_033844_2);

#define VkglTestCase_033845_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_10x8_rg"
#define VkglTestCase_033845_2 "ba.srgb8_alpha8_astc_10x8_khr_rgba_astc_10x8_khr.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033845, VkglTestCase_033845_1, VkglTestCase_033845_2);

#define VkglTestCase_033846_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_10x8_rgba.s"
#define VkglTestCase_033846_2 "rgb8_alpha8_astc_10x8_khr_rgba_astc_10x8_khr.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033846, VkglTestCase_033846_1, VkglTestCase_033846_2);

#define VkglTestCase_033847_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_10x8_rgba.sr"
#define VkglTestCase_033847_2 "gb8_alpha8_astc_10x8_khr_rgba_astc_10x8_khr.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033847, VkglTestCase_033847_1, VkglTestCase_033847_2);

#define VkglTestCase_033848_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_10x8_rgba.sr"
#define VkglTestCase_033848_2 "gb8_alpha8_astc_10x8_khr_rgba_astc_10x8_khr.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033848, VkglTestCase_033848_1, VkglTestCase_033848_2);

#define VkglTestCase_033849_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_10x8_rgba.s"
#define VkglTestCase_033849_2 "rgb8_alpha8_astc_10x8_khr_rgba_astc_10x8_khr.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033849, VkglTestCase_033849_1, VkglTestCase_033849_2);

#define VkglTestCase_033850_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_10x8_rgba.srgb8"
#define VkglTestCase_033850_2 "_alpha8_astc_10x8_khr_rgba_astc_10x8_khr.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033850, VkglTestCase_033850_1, VkglTestCase_033850_2);
