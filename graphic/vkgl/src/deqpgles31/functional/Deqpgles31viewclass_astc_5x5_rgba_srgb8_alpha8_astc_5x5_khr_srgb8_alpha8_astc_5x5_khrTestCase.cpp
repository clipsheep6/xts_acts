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

#define VkglTestCase_033339_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_5x5_rgba.sr"
#define VkglTestCase_033339_2 "gb8_alpha8_astc_5x5_khr_srgb8_alpha8_astc_5x5_khr.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033339, VkglTestCase_033339_1, VkglTestCase_033339_2);

#define VkglTestCase_033340_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_5x5_rgba.sr"
#define VkglTestCase_033340_2 "gb8_alpha8_astc_5x5_khr_srgb8_alpha8_astc_5x5_khr.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033340, VkglTestCase_033340_1, VkglTestCase_033340_2);

#define VkglTestCase_033341_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_5x5_rgba.s"
#define VkglTestCase_033341_2 "rgb8_alpha8_astc_5x5_khr_srgb8_alpha8_astc_5x5_khr.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033341, VkglTestCase_033341_1, VkglTestCase_033341_2);

#define VkglTestCase_033342_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_5x5_rgba.srgb8"
#define VkglTestCase_033342_2 "_alpha8_astc_5x5_khr_srgb8_alpha8_astc_5x5_khr.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033342, VkglTestCase_033342_1, VkglTestCase_033342_2);

#define VkglTestCase_033343_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_5x5_rgba.sr"
#define VkglTestCase_033343_2 "gb8_alpha8_astc_5x5_khr_srgb8_alpha8_astc_5x5_khr.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033343, VkglTestCase_033343_1, VkglTestCase_033343_2);

#define VkglTestCase_033344_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_5x5_rgba.sr"
#define VkglTestCase_033344_2 "gb8_alpha8_astc_5x5_khr_srgb8_alpha8_astc_5x5_khr.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033344, VkglTestCase_033344_1, VkglTestCase_033344_2);

#define VkglTestCase_033345_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_5x5_rgba.s"
#define VkglTestCase_033345_2 "rgb8_alpha8_astc_5x5_khr_srgb8_alpha8_astc_5x5_khr.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033345, VkglTestCase_033345_1, VkglTestCase_033345_2);

#define VkglTestCase_033346_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_5x5_rgba.srgb8"
#define VkglTestCase_033346_2 "_alpha8_astc_5x5_khr_srgb8_alpha8_astc_5x5_khr.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033346, VkglTestCase_033346_1, VkglTestCase_033346_2);

#define VkglTestCase_033347_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_5x5_rgba.s"
#define VkglTestCase_033347_2 "rgb8_alpha8_astc_5x5_khr_srgb8_alpha8_astc_5x5_khr.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033347, VkglTestCase_033347_1, VkglTestCase_033347_2);

#define VkglTestCase_033348_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_5x5_rgba.s"
#define VkglTestCase_033348_2 "rgb8_alpha8_astc_5x5_khr_srgb8_alpha8_astc_5x5_khr.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033348, VkglTestCase_033348_1, VkglTestCase_033348_2);

#define VkglTestCase_033349_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_5x5_rgba."
#define VkglTestCase_033349_2 "srgb8_alpha8_astc_5x5_khr_srgb8_alpha8_astc_5x5_khr.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033349, VkglTestCase_033349_1, VkglTestCase_033349_2);

#define VkglTestCase_033350_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_5x5_rgba.srgb"
#define VkglTestCase_033350_2 "8_alpha8_astc_5x5_khr_srgb8_alpha8_astc_5x5_khr.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033350, VkglTestCase_033350_1, VkglTestCase_033350_2);

#define VkglTestCase_033351_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_5x5_rgba.srgb8"
#define VkglTestCase_033351_2 "_alpha8_astc_5x5_khr_srgb8_alpha8_astc_5x5_khr.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033351, VkglTestCase_033351_1, VkglTestCase_033351_2);

#define VkglTestCase_033352_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_5x5_rgba.srgb8"
#define VkglTestCase_033352_2 "_alpha8_astc_5x5_khr_srgb8_alpha8_astc_5x5_khr.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033352, VkglTestCase_033352_1, VkglTestCase_033352_2);

#define VkglTestCase_033353_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_5x5_rgba.srgb"
#define VkglTestCase_033353_2 "8_alpha8_astc_5x5_khr_srgb8_alpha8_astc_5x5_khr.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033353, VkglTestCase_033353_1, VkglTestCase_033353_2);

#define VkglTestCase_033354_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_5x5_rgba.srgb8_al"
#define VkglTestCase_033354_2 "pha8_astc_5x5_khr_srgb8_alpha8_astc_5x5_khr.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033354, VkglTestCase_033354_1, VkglTestCase_033354_2);
