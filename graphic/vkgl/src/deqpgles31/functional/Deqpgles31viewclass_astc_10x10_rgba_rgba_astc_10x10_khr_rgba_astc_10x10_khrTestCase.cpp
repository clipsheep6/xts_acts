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

#define VkglTestCase_033867_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_10x10_"
#define VkglTestCase_033867_2 "rgba.rgba_astc_10x10_khr_rgba_astc_10x10_khr.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033867, VkglTestCase_033867_1, VkglTestCase_033867_2);

#define VkglTestCase_033868_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_10x10_"
#define VkglTestCase_033868_2 "rgba.rgba_astc_10x10_khr_rgba_astc_10x10_khr.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033868, VkglTestCase_033868_1, VkglTestCase_033868_2);

#define VkglTestCase_033869_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_10x10"
#define VkglTestCase_033869_2 "_rgba.rgba_astc_10x10_khr_rgba_astc_10x10_khr.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033869, VkglTestCase_033869_1, VkglTestCase_033869_2);

#define VkglTestCase_033870_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_10x10_rgb"
#define VkglTestCase_033870_2 "a.rgba_astc_10x10_khr_rgba_astc_10x10_khr.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033870, VkglTestCase_033870_1, VkglTestCase_033870_2);

#define VkglTestCase_033871_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_10x10_"
#define VkglTestCase_033871_2 "rgba.rgba_astc_10x10_khr_rgba_astc_10x10_khr.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033871, VkglTestCase_033871_1, VkglTestCase_033871_2);

#define VkglTestCase_033872_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_10x10_"
#define VkglTestCase_033872_2 "rgba.rgba_astc_10x10_khr_rgba_astc_10x10_khr.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033872, VkglTestCase_033872_1, VkglTestCase_033872_2);

#define VkglTestCase_033873_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_10x10"
#define VkglTestCase_033873_2 "_rgba.rgba_astc_10x10_khr_rgba_astc_10x10_khr.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033873, VkglTestCase_033873_1, VkglTestCase_033873_2);

#define VkglTestCase_033874_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_10x10_rgb"
#define VkglTestCase_033874_2 "a.rgba_astc_10x10_khr_rgba_astc_10x10_khr.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033874, VkglTestCase_033874_1, VkglTestCase_033874_2);

#define VkglTestCase_033875_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_10x10"
#define VkglTestCase_033875_2 "_rgba.rgba_astc_10x10_khr_rgba_astc_10x10_khr.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033875, VkglTestCase_033875_1, VkglTestCase_033875_2);

#define VkglTestCase_033876_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_10x10"
#define VkglTestCase_033876_2 "_rgba.rgba_astc_10x10_khr_rgba_astc_10x10_khr.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033876, VkglTestCase_033876_1, VkglTestCase_033876_2);

#define VkglTestCase_033877_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_10x1"
#define VkglTestCase_033877_2 "0_rgba.rgba_astc_10x10_khr_rgba_astc_10x10_khr.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033877, VkglTestCase_033877_1, VkglTestCase_033877_2);

#define VkglTestCase_033878_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_10x10_rg"
#define VkglTestCase_033878_2 "ba.rgba_astc_10x10_khr_rgba_astc_10x10_khr.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033878, VkglTestCase_033878_1, VkglTestCase_033878_2);

#define VkglTestCase_033879_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_10x10_rgb"
#define VkglTestCase_033879_2 "a.rgba_astc_10x10_khr_rgba_astc_10x10_khr.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033879, VkglTestCase_033879_1, VkglTestCase_033879_2);

#define VkglTestCase_033880_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_10x10_rgb"
#define VkglTestCase_033880_2 "a.rgba_astc_10x10_khr_rgba_astc_10x10_khr.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033880, VkglTestCase_033880_1, VkglTestCase_033880_2);

#define VkglTestCase_033881_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_10x10_rg"
#define VkglTestCase_033881_2 "ba.rgba_astc_10x10_khr_rgba_astc_10x10_khr.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033881, VkglTestCase_033881_1, VkglTestCase_033881_2);

#define VkglTestCase_033882_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_10x10_rgba.r"
#define VkglTestCase_033882_2 "gba_astc_10x10_khr_rgba_astc_10x10_khr.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033882, VkglTestCase_033882_1, VkglTestCase_033882_2);
