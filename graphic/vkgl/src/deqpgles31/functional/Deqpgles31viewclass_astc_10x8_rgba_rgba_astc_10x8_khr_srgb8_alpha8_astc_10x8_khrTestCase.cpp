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

#define VkglTestCase_033819_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_10x8_rgba"
#define VkglTestCase_033819_2 ".rgba_astc_10x8_khr_srgb8_alpha8_astc_10x8_khr.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033819, VkglTestCase_033819_1, VkglTestCase_033819_2);

#define VkglTestCase_033820_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_10x8_rgba"
#define VkglTestCase_033820_2 ".rgba_astc_10x8_khr_srgb8_alpha8_astc_10x8_khr.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033820, VkglTestCase_033820_1, VkglTestCase_033820_2);

#define VkglTestCase_033821_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_10x8_rgb"
#define VkglTestCase_033821_2 "a.rgba_astc_10x8_khr_srgb8_alpha8_astc_10x8_khr.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033821, VkglTestCase_033821_1, VkglTestCase_033821_2);

#define VkglTestCase_033822_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_10x8_rgba.rg"
#define VkglTestCase_033822_2 "ba_astc_10x8_khr_srgb8_alpha8_astc_10x8_khr.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033822, VkglTestCase_033822_1, VkglTestCase_033822_2);

#define VkglTestCase_033823_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_10x8_rgba"
#define VkglTestCase_033823_2 ".rgba_astc_10x8_khr_srgb8_alpha8_astc_10x8_khr.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033823, VkglTestCase_033823_1, VkglTestCase_033823_2);

#define VkglTestCase_033824_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_10x8_rgba"
#define VkglTestCase_033824_2 ".rgba_astc_10x8_khr_srgb8_alpha8_astc_10x8_khr.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033824, VkglTestCase_033824_1, VkglTestCase_033824_2);

#define VkglTestCase_033825_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_10x8_rgb"
#define VkglTestCase_033825_2 "a.rgba_astc_10x8_khr_srgb8_alpha8_astc_10x8_khr.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033825, VkglTestCase_033825_1, VkglTestCase_033825_2);

#define VkglTestCase_033826_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_10x8_rgba.rg"
#define VkglTestCase_033826_2 "ba_astc_10x8_khr_srgb8_alpha8_astc_10x8_khr.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033826, VkglTestCase_033826_1, VkglTestCase_033826_2);

#define VkglTestCase_033827_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_10x8_rgb"
#define VkglTestCase_033827_2 "a.rgba_astc_10x8_khr_srgb8_alpha8_astc_10x8_khr.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033827, VkglTestCase_033827_1, VkglTestCase_033827_2);

#define VkglTestCase_033828_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_10x8_rgb"
#define VkglTestCase_033828_2 "a.rgba_astc_10x8_khr_srgb8_alpha8_astc_10x8_khr.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033828, VkglTestCase_033828_1, VkglTestCase_033828_2);

#define VkglTestCase_033829_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_10x8_rg"
#define VkglTestCase_033829_2 "ba.rgba_astc_10x8_khr_srgb8_alpha8_astc_10x8_khr.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033829, VkglTestCase_033829_1, VkglTestCase_033829_2);

#define VkglTestCase_033830_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_10x8_rgba.r"
#define VkglTestCase_033830_2 "gba_astc_10x8_khr_srgb8_alpha8_astc_10x8_khr.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033830, VkglTestCase_033830_1, VkglTestCase_033830_2);

#define VkglTestCase_033831_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_10x8_rgba.rg"
#define VkglTestCase_033831_2 "ba_astc_10x8_khr_srgb8_alpha8_astc_10x8_khr.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033831, VkglTestCase_033831_1, VkglTestCase_033831_2);

#define VkglTestCase_033832_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_10x8_rgba.rg"
#define VkglTestCase_033832_2 "ba_astc_10x8_khr_srgb8_alpha8_astc_10x8_khr.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033832, VkglTestCase_033832_1, VkglTestCase_033832_2);

#define VkglTestCase_033833_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_10x8_rgba.r"
#define VkglTestCase_033833_2 "gba_astc_10x8_khr_srgb8_alpha8_astc_10x8_khr.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033833, VkglTestCase_033833_1, VkglTestCase_033833_2);

#define VkglTestCase_033834_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_10x8_rgba.rgba_"
#define VkglTestCase_033834_2 "astc_10x8_khr_srgb8_alpha8_astc_10x8_khr.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033834, VkglTestCase_033834_1, VkglTestCase_033834_2);
