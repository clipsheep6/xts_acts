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

#define VkglTestCase_033275_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_5x4_rgba.sr"
#define VkglTestCase_033275_2 "gb8_alpha8_astc_5x4_khr_srgb8_alpha8_astc_5x4_khr.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033275, VkglTestCase_033275_1, VkglTestCase_033275_2);

#define VkglTestCase_033276_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_5x4_rgba.sr"
#define VkglTestCase_033276_2 "gb8_alpha8_astc_5x4_khr_srgb8_alpha8_astc_5x4_khr.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033276, VkglTestCase_033276_1, VkglTestCase_033276_2);

#define VkglTestCase_033277_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_5x4_rgba.s"
#define VkglTestCase_033277_2 "rgb8_alpha8_astc_5x4_khr_srgb8_alpha8_astc_5x4_khr.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033277, VkglTestCase_033277_1, VkglTestCase_033277_2);

#define VkglTestCase_033278_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_5x4_rgba.srgb8"
#define VkglTestCase_033278_2 "_alpha8_astc_5x4_khr_srgb8_alpha8_astc_5x4_khr.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033278, VkglTestCase_033278_1, VkglTestCase_033278_2);

#define VkglTestCase_033279_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_5x4_rgba.sr"
#define VkglTestCase_033279_2 "gb8_alpha8_astc_5x4_khr_srgb8_alpha8_astc_5x4_khr.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033279, VkglTestCase_033279_1, VkglTestCase_033279_2);

#define VkglTestCase_033280_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_5x4_rgba.sr"
#define VkglTestCase_033280_2 "gb8_alpha8_astc_5x4_khr_srgb8_alpha8_astc_5x4_khr.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033280, VkglTestCase_033280_1, VkglTestCase_033280_2);

#define VkglTestCase_033281_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_5x4_rgba.s"
#define VkglTestCase_033281_2 "rgb8_alpha8_astc_5x4_khr_srgb8_alpha8_astc_5x4_khr.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033281, VkglTestCase_033281_1, VkglTestCase_033281_2);

#define VkglTestCase_033282_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_5x4_rgba.srgb8"
#define VkglTestCase_033282_2 "_alpha8_astc_5x4_khr_srgb8_alpha8_astc_5x4_khr.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033282, VkglTestCase_033282_1, VkglTestCase_033282_2);

#define VkglTestCase_033283_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_5x4_rgba.s"
#define VkglTestCase_033283_2 "rgb8_alpha8_astc_5x4_khr_srgb8_alpha8_astc_5x4_khr.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033283, VkglTestCase_033283_1, VkglTestCase_033283_2);

#define VkglTestCase_033284_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_5x4_rgba.s"
#define VkglTestCase_033284_2 "rgb8_alpha8_astc_5x4_khr_srgb8_alpha8_astc_5x4_khr.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033284, VkglTestCase_033284_1, VkglTestCase_033284_2);

#define VkglTestCase_033285_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_5x4_rgba."
#define VkglTestCase_033285_2 "srgb8_alpha8_astc_5x4_khr_srgb8_alpha8_astc_5x4_khr.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033285, VkglTestCase_033285_1, VkglTestCase_033285_2);

#define VkglTestCase_033286_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_5x4_rgba.srgb"
#define VkglTestCase_033286_2 "8_alpha8_astc_5x4_khr_srgb8_alpha8_astc_5x4_khr.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033286, VkglTestCase_033286_1, VkglTestCase_033286_2);

#define VkglTestCase_033287_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_5x4_rgba.srgb8"
#define VkglTestCase_033287_2 "_alpha8_astc_5x4_khr_srgb8_alpha8_astc_5x4_khr.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033287, VkglTestCase_033287_1, VkglTestCase_033287_2);

#define VkglTestCase_033288_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_5x4_rgba.srgb8"
#define VkglTestCase_033288_2 "_alpha8_astc_5x4_khr_srgb8_alpha8_astc_5x4_khr.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033288, VkglTestCase_033288_1, VkglTestCase_033288_2);

#define VkglTestCase_033289_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_5x4_rgba.srgb"
#define VkglTestCase_033289_2 "8_alpha8_astc_5x4_khr_srgb8_alpha8_astc_5x4_khr.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033289, VkglTestCase_033289_1, VkglTestCase_033289_2);

#define VkglTestCase_033290_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_5x4_rgba.srgb8_al"
#define VkglTestCase_033290_2 "pha8_astc_5x4_khr_srgb8_alpha8_astc_5x4_khr.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033290, VkglTestCase_033290_1, VkglTestCase_033290_2);
