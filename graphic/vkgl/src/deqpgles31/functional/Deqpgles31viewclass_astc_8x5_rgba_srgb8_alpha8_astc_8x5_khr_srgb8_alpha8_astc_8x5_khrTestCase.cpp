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

#define VkglTestCase_033531_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_8x5_rgba.sr"
#define VkglTestCase_033531_2 "gb8_alpha8_astc_8x5_khr_srgb8_alpha8_astc_8x5_khr.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033531, VkglTestCase_033531_1, VkglTestCase_033531_2);

#define VkglTestCase_033532_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_8x5_rgba.sr"
#define VkglTestCase_033532_2 "gb8_alpha8_astc_8x5_khr_srgb8_alpha8_astc_8x5_khr.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033532, VkglTestCase_033532_1, VkglTestCase_033532_2);

#define VkglTestCase_033533_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_8x5_rgba.s"
#define VkglTestCase_033533_2 "rgb8_alpha8_astc_8x5_khr_srgb8_alpha8_astc_8x5_khr.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033533, VkglTestCase_033533_1, VkglTestCase_033533_2);

#define VkglTestCase_033534_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_8x5_rgba.srgb8"
#define VkglTestCase_033534_2 "_alpha8_astc_8x5_khr_srgb8_alpha8_astc_8x5_khr.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033534, VkglTestCase_033534_1, VkglTestCase_033534_2);

#define VkglTestCase_033535_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_8x5_rgba.sr"
#define VkglTestCase_033535_2 "gb8_alpha8_astc_8x5_khr_srgb8_alpha8_astc_8x5_khr.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033535, VkglTestCase_033535_1, VkglTestCase_033535_2);

#define VkglTestCase_033536_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_8x5_rgba.sr"
#define VkglTestCase_033536_2 "gb8_alpha8_astc_8x5_khr_srgb8_alpha8_astc_8x5_khr.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033536, VkglTestCase_033536_1, VkglTestCase_033536_2);

#define VkglTestCase_033537_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_8x5_rgba.s"
#define VkglTestCase_033537_2 "rgb8_alpha8_astc_8x5_khr_srgb8_alpha8_astc_8x5_khr.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033537, VkglTestCase_033537_1, VkglTestCase_033537_2);

#define VkglTestCase_033538_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_8x5_rgba.srgb8"
#define VkglTestCase_033538_2 "_alpha8_astc_8x5_khr_srgb8_alpha8_astc_8x5_khr.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033538, VkglTestCase_033538_1, VkglTestCase_033538_2);

#define VkglTestCase_033539_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_8x5_rgba.s"
#define VkglTestCase_033539_2 "rgb8_alpha8_astc_8x5_khr_srgb8_alpha8_astc_8x5_khr.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033539, VkglTestCase_033539_1, VkglTestCase_033539_2);

#define VkglTestCase_033540_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_8x5_rgba.s"
#define VkglTestCase_033540_2 "rgb8_alpha8_astc_8x5_khr_srgb8_alpha8_astc_8x5_khr.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033540, VkglTestCase_033540_1, VkglTestCase_033540_2);

#define VkglTestCase_033541_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_8x5_rgba."
#define VkglTestCase_033541_2 "srgb8_alpha8_astc_8x5_khr_srgb8_alpha8_astc_8x5_khr.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033541, VkglTestCase_033541_1, VkglTestCase_033541_2);

#define VkglTestCase_033542_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_8x5_rgba.srgb"
#define VkglTestCase_033542_2 "8_alpha8_astc_8x5_khr_srgb8_alpha8_astc_8x5_khr.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033542, VkglTestCase_033542_1, VkglTestCase_033542_2);

#define VkglTestCase_033543_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_8x5_rgba.srgb8"
#define VkglTestCase_033543_2 "_alpha8_astc_8x5_khr_srgb8_alpha8_astc_8x5_khr.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033543, VkglTestCase_033543_1, VkglTestCase_033543_2);

#define VkglTestCase_033544_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_8x5_rgba.srgb8"
#define VkglTestCase_033544_2 "_alpha8_astc_8x5_khr_srgb8_alpha8_astc_8x5_khr.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033544, VkglTestCase_033544_1, VkglTestCase_033544_2);

#define VkglTestCase_033545_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_8x5_rgba.srgb"
#define VkglTestCase_033545_2 "8_alpha8_astc_8x5_khr_srgb8_alpha8_astc_8x5_khr.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033545, VkglTestCase_033545_1, VkglTestCase_033545_2);

#define VkglTestCase_033546_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_8x5_rgba.srgb8_al"
#define VkglTestCase_033546_2 "pha8_astc_8x5_khr_srgb8_alpha8_astc_8x5_khr.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033546, VkglTestCase_033546_1, VkglTestCase_033546_2);
