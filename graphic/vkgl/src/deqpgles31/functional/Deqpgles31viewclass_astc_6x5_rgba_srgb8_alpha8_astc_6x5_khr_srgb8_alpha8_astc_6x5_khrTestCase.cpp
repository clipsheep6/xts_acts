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

#define VkglTestCase_033403_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_6x5_rgba.sr"
#define VkglTestCase_033403_2 "gb8_alpha8_astc_6x5_khr_srgb8_alpha8_astc_6x5_khr.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033403, VkglTestCase_033403_1, VkglTestCase_033403_2);

#define VkglTestCase_033404_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_6x5_rgba.sr"
#define VkglTestCase_033404_2 "gb8_alpha8_astc_6x5_khr_srgb8_alpha8_astc_6x5_khr.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033404, VkglTestCase_033404_1, VkglTestCase_033404_2);

#define VkglTestCase_033405_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_6x5_rgba.s"
#define VkglTestCase_033405_2 "rgb8_alpha8_astc_6x5_khr_srgb8_alpha8_astc_6x5_khr.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033405, VkglTestCase_033405_1, VkglTestCase_033405_2);

#define VkglTestCase_033406_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_6x5_rgba.srgb8"
#define VkglTestCase_033406_2 "_alpha8_astc_6x5_khr_srgb8_alpha8_astc_6x5_khr.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033406, VkglTestCase_033406_1, VkglTestCase_033406_2);

#define VkglTestCase_033407_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_6x5_rgba.sr"
#define VkglTestCase_033407_2 "gb8_alpha8_astc_6x5_khr_srgb8_alpha8_astc_6x5_khr.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033407, VkglTestCase_033407_1, VkglTestCase_033407_2);

#define VkglTestCase_033408_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_6x5_rgba.sr"
#define VkglTestCase_033408_2 "gb8_alpha8_astc_6x5_khr_srgb8_alpha8_astc_6x5_khr.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033408, VkglTestCase_033408_1, VkglTestCase_033408_2);

#define VkglTestCase_033409_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_6x5_rgba.s"
#define VkglTestCase_033409_2 "rgb8_alpha8_astc_6x5_khr_srgb8_alpha8_astc_6x5_khr.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033409, VkglTestCase_033409_1, VkglTestCase_033409_2);

#define VkglTestCase_033410_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_6x5_rgba.srgb8"
#define VkglTestCase_033410_2 "_alpha8_astc_6x5_khr_srgb8_alpha8_astc_6x5_khr.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033410, VkglTestCase_033410_1, VkglTestCase_033410_2);

#define VkglTestCase_033411_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_6x5_rgba.s"
#define VkglTestCase_033411_2 "rgb8_alpha8_astc_6x5_khr_srgb8_alpha8_astc_6x5_khr.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033411, VkglTestCase_033411_1, VkglTestCase_033411_2);

#define VkglTestCase_033412_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_6x5_rgba.s"
#define VkglTestCase_033412_2 "rgb8_alpha8_astc_6x5_khr_srgb8_alpha8_astc_6x5_khr.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033412, VkglTestCase_033412_1, VkglTestCase_033412_2);

#define VkglTestCase_033413_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_6x5_rgba."
#define VkglTestCase_033413_2 "srgb8_alpha8_astc_6x5_khr_srgb8_alpha8_astc_6x5_khr.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033413, VkglTestCase_033413_1, VkglTestCase_033413_2);

#define VkglTestCase_033414_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_6x5_rgba.srgb"
#define VkglTestCase_033414_2 "8_alpha8_astc_6x5_khr_srgb8_alpha8_astc_6x5_khr.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033414, VkglTestCase_033414_1, VkglTestCase_033414_2);

#define VkglTestCase_033415_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_6x5_rgba.srgb8"
#define VkglTestCase_033415_2 "_alpha8_astc_6x5_khr_srgb8_alpha8_astc_6x5_khr.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033415, VkglTestCase_033415_1, VkglTestCase_033415_2);

#define VkglTestCase_033416_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_6x5_rgba.srgb8"
#define VkglTestCase_033416_2 "_alpha8_astc_6x5_khr_srgb8_alpha8_astc_6x5_khr.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033416, VkglTestCase_033416_1, VkglTestCase_033416_2);

#define VkglTestCase_033417_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_6x5_rgba.srgb"
#define VkglTestCase_033417_2 "8_alpha8_astc_6x5_khr_srgb8_alpha8_astc_6x5_khr.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033417, VkglTestCase_033417_1, VkglTestCase_033417_2);

#define VkglTestCase_033418_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_6x5_rgba.srgb8_al"
#define VkglTestCase_033418_2 "pha8_astc_6x5_khr_srgb8_alpha8_astc_6x5_khr.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033418, VkglTestCase_033418_1, VkglTestCase_033418_2);
