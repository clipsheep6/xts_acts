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

#define VkglTestCase_033243_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_5x4_rgb"
#define VkglTestCase_033243_2 "a.rgba_astc_5x4_khr_srgb8_alpha8_astc_5x4_khr.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033243, VkglTestCase_033243_1, VkglTestCase_033243_2);

#define VkglTestCase_033244_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_5x4_rgb"
#define VkglTestCase_033244_2 "a.rgba_astc_5x4_khr_srgb8_alpha8_astc_5x4_khr.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033244, VkglTestCase_033244_1, VkglTestCase_033244_2);

#define VkglTestCase_033245_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_5x4_rg"
#define VkglTestCase_033245_2 "ba.rgba_astc_5x4_khr_srgb8_alpha8_astc_5x4_khr.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033245, VkglTestCase_033245_1, VkglTestCase_033245_2);

#define VkglTestCase_033246_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_5x4_rgba.r"
#define VkglTestCase_033246_2 "gba_astc_5x4_khr_srgb8_alpha8_astc_5x4_khr.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033246, VkglTestCase_033246_1, VkglTestCase_033246_2);

#define VkglTestCase_033247_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_5x4_rgb"
#define VkglTestCase_033247_2 "a.rgba_astc_5x4_khr_srgb8_alpha8_astc_5x4_khr.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033247, VkglTestCase_033247_1, VkglTestCase_033247_2);

#define VkglTestCase_033248_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_5x4_rgb"
#define VkglTestCase_033248_2 "a.rgba_astc_5x4_khr_srgb8_alpha8_astc_5x4_khr.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033248, VkglTestCase_033248_1, VkglTestCase_033248_2);

#define VkglTestCase_033249_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_5x4_rg"
#define VkglTestCase_033249_2 "ba.rgba_astc_5x4_khr_srgb8_alpha8_astc_5x4_khr.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033249, VkglTestCase_033249_1, VkglTestCase_033249_2);

#define VkglTestCase_033250_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_5x4_rgba.r"
#define VkglTestCase_033250_2 "gba_astc_5x4_khr_srgb8_alpha8_astc_5x4_khr.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033250, VkglTestCase_033250_1, VkglTestCase_033250_2);

#define VkglTestCase_033251_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_5x4_rg"
#define VkglTestCase_033251_2 "ba.rgba_astc_5x4_khr_srgb8_alpha8_astc_5x4_khr.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033251, VkglTestCase_033251_1, VkglTestCase_033251_2);

#define VkglTestCase_033252_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_5x4_rg"
#define VkglTestCase_033252_2 "ba.rgba_astc_5x4_khr_srgb8_alpha8_astc_5x4_khr.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033252, VkglTestCase_033252_1, VkglTestCase_033252_2);

#define VkglTestCase_033253_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_5x4_r"
#define VkglTestCase_033253_2 "gba.rgba_astc_5x4_khr_srgb8_alpha8_astc_5x4_khr.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033253, VkglTestCase_033253_1, VkglTestCase_033253_2);

#define VkglTestCase_033254_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_5x4_rgba."
#define VkglTestCase_033254_2 "rgba_astc_5x4_khr_srgb8_alpha8_astc_5x4_khr.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033254, VkglTestCase_033254_1, VkglTestCase_033254_2);

#define VkglTestCase_033255_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_5x4_rgba.r"
#define VkglTestCase_033255_2 "gba_astc_5x4_khr_srgb8_alpha8_astc_5x4_khr.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033255, VkglTestCase_033255_1, VkglTestCase_033255_2);

#define VkglTestCase_033256_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_5x4_rgba.r"
#define VkglTestCase_033256_2 "gba_astc_5x4_khr_srgb8_alpha8_astc_5x4_khr.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033256, VkglTestCase_033256_1, VkglTestCase_033256_2);

#define VkglTestCase_033257_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_5x4_rgba."
#define VkglTestCase_033257_2 "rgba_astc_5x4_khr_srgb8_alpha8_astc_5x4_khr.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033257, VkglTestCase_033257_1, VkglTestCase_033257_2);

#define VkglTestCase_033258_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_5x4_rgba.rgba"
#define VkglTestCase_033258_2 "_astc_5x4_khr_srgb8_alpha8_astc_5x4_khr.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033258, VkglTestCase_033258_1, VkglTestCase_033258_2);
