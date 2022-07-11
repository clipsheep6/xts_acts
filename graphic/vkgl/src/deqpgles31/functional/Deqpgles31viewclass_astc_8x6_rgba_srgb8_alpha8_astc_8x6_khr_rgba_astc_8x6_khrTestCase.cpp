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

#define VkglTestCase_033579_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_8x6_rgb"
#define VkglTestCase_033579_2 "a.srgb8_alpha8_astc_8x6_khr_rgba_astc_8x6_khr.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033579, VkglTestCase_033579_1, VkglTestCase_033579_2);

#define VkglTestCase_033580_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_8x6_rgb"
#define VkglTestCase_033580_2 "a.srgb8_alpha8_astc_8x6_khr_rgba_astc_8x6_khr.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033580, VkglTestCase_033580_1, VkglTestCase_033580_2);

#define VkglTestCase_033581_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_8x6_rg"
#define VkglTestCase_033581_2 "ba.srgb8_alpha8_astc_8x6_khr_rgba_astc_8x6_khr.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033581, VkglTestCase_033581_1, VkglTestCase_033581_2);

#define VkglTestCase_033582_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_8x6_rgba.s"
#define VkglTestCase_033582_2 "rgb8_alpha8_astc_8x6_khr_rgba_astc_8x6_khr.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033582, VkglTestCase_033582_1, VkglTestCase_033582_2);

#define VkglTestCase_033583_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_8x6_rgb"
#define VkglTestCase_033583_2 "a.srgb8_alpha8_astc_8x6_khr_rgba_astc_8x6_khr.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033583, VkglTestCase_033583_1, VkglTestCase_033583_2);

#define VkglTestCase_033584_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_8x6_rgb"
#define VkglTestCase_033584_2 "a.srgb8_alpha8_astc_8x6_khr_rgba_astc_8x6_khr.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033584, VkglTestCase_033584_1, VkglTestCase_033584_2);

#define VkglTestCase_033585_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_8x6_rg"
#define VkglTestCase_033585_2 "ba.srgb8_alpha8_astc_8x6_khr_rgba_astc_8x6_khr.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033585, VkglTestCase_033585_1, VkglTestCase_033585_2);

#define VkglTestCase_033586_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_8x6_rgba.s"
#define VkglTestCase_033586_2 "rgb8_alpha8_astc_8x6_khr_rgba_astc_8x6_khr.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033586, VkglTestCase_033586_1, VkglTestCase_033586_2);

#define VkglTestCase_033587_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_8x6_rg"
#define VkglTestCase_033587_2 "ba.srgb8_alpha8_astc_8x6_khr_rgba_astc_8x6_khr.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033587, VkglTestCase_033587_1, VkglTestCase_033587_2);

#define VkglTestCase_033588_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_8x6_rg"
#define VkglTestCase_033588_2 "ba.srgb8_alpha8_astc_8x6_khr_rgba_astc_8x6_khr.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033588, VkglTestCase_033588_1, VkglTestCase_033588_2);

#define VkglTestCase_033589_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_8x6_r"
#define VkglTestCase_033589_2 "gba.srgb8_alpha8_astc_8x6_khr_rgba_astc_8x6_khr.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033589, VkglTestCase_033589_1, VkglTestCase_033589_2);

#define VkglTestCase_033590_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_8x6_rgba."
#define VkglTestCase_033590_2 "srgb8_alpha8_astc_8x6_khr_rgba_astc_8x6_khr.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033590, VkglTestCase_033590_1, VkglTestCase_033590_2);

#define VkglTestCase_033591_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_8x6_rgba.s"
#define VkglTestCase_033591_2 "rgb8_alpha8_astc_8x6_khr_rgba_astc_8x6_khr.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033591, VkglTestCase_033591_1, VkglTestCase_033591_2);

#define VkglTestCase_033592_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_8x6_rgba.s"
#define VkglTestCase_033592_2 "rgb8_alpha8_astc_8x6_khr_rgba_astc_8x6_khr.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033592, VkglTestCase_033592_1, VkglTestCase_033592_2);

#define VkglTestCase_033593_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_8x6_rgba."
#define VkglTestCase_033593_2 "srgb8_alpha8_astc_8x6_khr_rgba_astc_8x6_khr.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033593, VkglTestCase_033593_1, VkglTestCase_033593_2);

#define VkglTestCase_033594_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_8x6_rgba.srgb"
#define VkglTestCase_033594_2 "8_alpha8_astc_8x6_khr_rgba_astc_8x6_khr.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033594, VkglTestCase_033594_1, VkglTestCase_033594_2);
