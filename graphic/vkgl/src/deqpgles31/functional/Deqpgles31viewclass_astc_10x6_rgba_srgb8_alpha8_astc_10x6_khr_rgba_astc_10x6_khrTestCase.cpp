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

#define VkglTestCase_033771_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_10x6_rgba"
#define VkglTestCase_033771_2 ".srgb8_alpha8_astc_10x6_khr_rgba_astc_10x6_khr.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033771, VkglTestCase_033771_1, VkglTestCase_033771_2);

#define VkglTestCase_033772_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_10x6_rgba"
#define VkglTestCase_033772_2 ".srgb8_alpha8_astc_10x6_khr_rgba_astc_10x6_khr.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033772, VkglTestCase_033772_1, VkglTestCase_033772_2);

#define VkglTestCase_033773_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_10x6_rgb"
#define VkglTestCase_033773_2 "a.srgb8_alpha8_astc_10x6_khr_rgba_astc_10x6_khr.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033773, VkglTestCase_033773_1, VkglTestCase_033773_2);

#define VkglTestCase_033774_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_10x6_rgba.sr"
#define VkglTestCase_033774_2 "gb8_alpha8_astc_10x6_khr_rgba_astc_10x6_khr.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033774, VkglTestCase_033774_1, VkglTestCase_033774_2);

#define VkglTestCase_033775_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_10x6_rgba"
#define VkglTestCase_033775_2 ".srgb8_alpha8_astc_10x6_khr_rgba_astc_10x6_khr.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033775, VkglTestCase_033775_1, VkglTestCase_033775_2);

#define VkglTestCase_033776_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_10x6_rgba"
#define VkglTestCase_033776_2 ".srgb8_alpha8_astc_10x6_khr_rgba_astc_10x6_khr.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033776, VkglTestCase_033776_1, VkglTestCase_033776_2);

#define VkglTestCase_033777_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_10x6_rgb"
#define VkglTestCase_033777_2 "a.srgb8_alpha8_astc_10x6_khr_rgba_astc_10x6_khr.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033777, VkglTestCase_033777_1, VkglTestCase_033777_2);

#define VkglTestCase_033778_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_10x6_rgba.sr"
#define VkglTestCase_033778_2 "gb8_alpha8_astc_10x6_khr_rgba_astc_10x6_khr.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033778, VkglTestCase_033778_1, VkglTestCase_033778_2);

#define VkglTestCase_033779_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_10x6_rgb"
#define VkglTestCase_033779_2 "a.srgb8_alpha8_astc_10x6_khr_rgba_astc_10x6_khr.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033779, VkglTestCase_033779_1, VkglTestCase_033779_2);

#define VkglTestCase_033780_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_10x6_rgb"
#define VkglTestCase_033780_2 "a.srgb8_alpha8_astc_10x6_khr_rgba_astc_10x6_khr.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033780, VkglTestCase_033780_1, VkglTestCase_033780_2);

#define VkglTestCase_033781_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_10x6_rg"
#define VkglTestCase_033781_2 "ba.srgb8_alpha8_astc_10x6_khr_rgba_astc_10x6_khr.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033781, VkglTestCase_033781_1, VkglTestCase_033781_2);

#define VkglTestCase_033782_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_10x6_rgba.s"
#define VkglTestCase_033782_2 "rgb8_alpha8_astc_10x6_khr_rgba_astc_10x6_khr.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033782, VkglTestCase_033782_1, VkglTestCase_033782_2);

#define VkglTestCase_033783_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_10x6_rgba.sr"
#define VkglTestCase_033783_2 "gb8_alpha8_astc_10x6_khr_rgba_astc_10x6_khr.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033783, VkglTestCase_033783_1, VkglTestCase_033783_2);

#define VkglTestCase_033784_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_10x6_rgba.sr"
#define VkglTestCase_033784_2 "gb8_alpha8_astc_10x6_khr_rgba_astc_10x6_khr.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033784, VkglTestCase_033784_1, VkglTestCase_033784_2);

#define VkglTestCase_033785_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_10x6_rgba.s"
#define VkglTestCase_033785_2 "rgb8_alpha8_astc_10x6_khr_rgba_astc_10x6_khr.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033785, VkglTestCase_033785_1, VkglTestCase_033785_2);

#define VkglTestCase_033786_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_10x6_rgba.srgb8"
#define VkglTestCase_033786_2 "_alpha8_astc_10x6_khr_rgba_astc_10x6_khr.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033786, VkglTestCase_033786_1, VkglTestCase_033786_2);
