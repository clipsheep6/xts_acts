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

#define VkglTestCase_033387_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_6x5_rgb"
#define VkglTestCase_033387_2 "a.srgb8_alpha8_astc_6x5_khr_rgba_astc_6x5_khr.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033387, VkglTestCase_033387_1, VkglTestCase_033387_2);

#define VkglTestCase_033388_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_6x5_rgb"
#define VkglTestCase_033388_2 "a.srgb8_alpha8_astc_6x5_khr_rgba_astc_6x5_khr.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033388, VkglTestCase_033388_1, VkglTestCase_033388_2);

#define VkglTestCase_033389_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_6x5_rg"
#define VkglTestCase_033389_2 "ba.srgb8_alpha8_astc_6x5_khr_rgba_astc_6x5_khr.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033389, VkglTestCase_033389_1, VkglTestCase_033389_2);

#define VkglTestCase_033390_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_6x5_rgba.s"
#define VkglTestCase_033390_2 "rgb8_alpha8_astc_6x5_khr_rgba_astc_6x5_khr.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033390, VkglTestCase_033390_1, VkglTestCase_033390_2);

#define VkglTestCase_033391_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_6x5_rgb"
#define VkglTestCase_033391_2 "a.srgb8_alpha8_astc_6x5_khr_rgba_astc_6x5_khr.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033391, VkglTestCase_033391_1, VkglTestCase_033391_2);

#define VkglTestCase_033392_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_6x5_rgb"
#define VkglTestCase_033392_2 "a.srgb8_alpha8_astc_6x5_khr_rgba_astc_6x5_khr.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033392, VkglTestCase_033392_1, VkglTestCase_033392_2);

#define VkglTestCase_033393_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_6x5_rg"
#define VkglTestCase_033393_2 "ba.srgb8_alpha8_astc_6x5_khr_rgba_astc_6x5_khr.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033393, VkglTestCase_033393_1, VkglTestCase_033393_2);

#define VkglTestCase_033394_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_6x5_rgba.s"
#define VkglTestCase_033394_2 "rgb8_alpha8_astc_6x5_khr_rgba_astc_6x5_khr.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033394, VkglTestCase_033394_1, VkglTestCase_033394_2);

#define VkglTestCase_033395_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_6x5_rg"
#define VkglTestCase_033395_2 "ba.srgb8_alpha8_astc_6x5_khr_rgba_astc_6x5_khr.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033395, VkglTestCase_033395_1, VkglTestCase_033395_2);

#define VkglTestCase_033396_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_6x5_rg"
#define VkglTestCase_033396_2 "ba.srgb8_alpha8_astc_6x5_khr_rgba_astc_6x5_khr.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033396, VkglTestCase_033396_1, VkglTestCase_033396_2);

#define VkglTestCase_033397_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_6x5_r"
#define VkglTestCase_033397_2 "gba.srgb8_alpha8_astc_6x5_khr_rgba_astc_6x5_khr.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033397, VkglTestCase_033397_1, VkglTestCase_033397_2);

#define VkglTestCase_033398_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_6x5_rgba."
#define VkglTestCase_033398_2 "srgb8_alpha8_astc_6x5_khr_rgba_astc_6x5_khr.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033398, VkglTestCase_033398_1, VkglTestCase_033398_2);

#define VkglTestCase_033399_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_6x5_rgba.s"
#define VkglTestCase_033399_2 "rgb8_alpha8_astc_6x5_khr_rgba_astc_6x5_khr.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033399, VkglTestCase_033399_1, VkglTestCase_033399_2);

#define VkglTestCase_033400_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_6x5_rgba.s"
#define VkglTestCase_033400_2 "rgb8_alpha8_astc_6x5_khr_rgba_astc_6x5_khr.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033400, VkglTestCase_033400_1, VkglTestCase_033400_2);

#define VkglTestCase_033401_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_6x5_rgba."
#define VkglTestCase_033401_2 "srgb8_alpha8_astc_6x5_khr_rgba_astc_6x5_khr.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033401, VkglTestCase_033401_1, VkglTestCase_033401_2);

#define VkglTestCase_033402_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_6x5_rgba.srgb"
#define VkglTestCase_033402_2 "8_alpha8_astc_6x5_khr_rgba_astc_6x5_khr.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033402, VkglTestCase_033402_1, VkglTestCase_033402_2);
