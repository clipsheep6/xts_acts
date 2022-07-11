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
#include "../ActsDeqpgles310037TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_036339_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_036339_2 "ts_mixed.rgba32i_rgba_astc_5x4_khr.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036339, VkglTestCase_036339_1, VkglTestCase_036339_2);

#define VkglTestCase_036340_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_036340_2 "ts_mixed.rgba32i_rgba_astc_5x4_khr.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036340, VkglTestCase_036340_1, VkglTestCase_036340_2);

#define VkglTestCase_036341_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_b"
#define VkglTestCase_036341_2 "its_mixed.rgba32i_rgba_astc_5x4_khr.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036341, VkglTestCase_036341_1, VkglTestCase_036341_2);

#define VkglTestCase_036342_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_036342_2 "mixed.rgba32i_rgba_astc_5x4_khr.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036342, VkglTestCase_036342_1, VkglTestCase_036342_2);

#define VkglTestCase_036343_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_036343_2 "ts_mixed.rgba32i_rgba_astc_5x4_khr.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036343, VkglTestCase_036343_1, VkglTestCase_036343_2);

#define VkglTestCase_036344_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_036344_2 "ts_mixed.rgba32i_rgba_astc_5x4_khr.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036344, VkglTestCase_036344_1, VkglTestCase_036344_2);

#define VkglTestCase_036345_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_b"
#define VkglTestCase_036345_2 "its_mixed.rgba32i_rgba_astc_5x4_khr.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036345, VkglTestCase_036345_1, VkglTestCase_036345_2);

#define VkglTestCase_036346_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_036346_2 "mixed.rgba32i_rgba_astc_5x4_khr.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036346, VkglTestCase_036346_1, VkglTestCase_036346_2);

#define VkglTestCase_036347_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_b"
#define VkglTestCase_036347_2 "its_mixed.rgba32i_rgba_astc_5x4_khr.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036347, VkglTestCase_036347_1, VkglTestCase_036347_2);

#define VkglTestCase_036348_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_b"
#define VkglTestCase_036348_2 "its_mixed.rgba32i_rgba_astc_5x4_khr.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036348, VkglTestCase_036348_1, VkglTestCase_036348_2);

#define VkglTestCase_036349_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_"
#define VkglTestCase_036349_2 "bits_mixed.rgba32i_rgba_astc_5x4_khr.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036349, VkglTestCase_036349_1, VkglTestCase_036349_2);

#define VkglTestCase_036350_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits"
#define VkglTestCase_036350_2 "_mixed.rgba32i_rgba_astc_5x4_khr.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036350, VkglTestCase_036350_1, VkglTestCase_036350_2);

#define VkglTestCase_036351_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_036351_2 "mixed.rgba32i_rgba_astc_5x4_khr.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036351, VkglTestCase_036351_1, VkglTestCase_036351_2);

#define VkglTestCase_036352_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_036352_2 "mixed.rgba32i_rgba_astc_5x4_khr.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036352, VkglTestCase_036352_1, VkglTestCase_036352_2);

#define VkglTestCase_036353_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits"
#define VkglTestCase_036353_2 "_mixed.rgba32i_rgba_astc_5x4_khr.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036353, VkglTestCase_036353_1, VkglTestCase_036353_2);

#define VkglTestCase_036354_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mix"
#define VkglTestCase_036354_2 "ed.rgba32i_rgba_astc_5x4_khr.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036354, VkglTestCase_036354_1, VkglTestCase_036354_2);

#define VkglTestCase_036355_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits"
#define VkglTestCase_036355_2 "_mixed.rgba32i_rgba_astc_5x4_khr.renderbuffer_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036355, VkglTestCase_036355_1, VkglTestCase_036355_2);

#define VkglTestCase_036356_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits"
#define VkglTestCase_036356_2 "_mixed.rgba32i_rgba_astc_5x4_khr.renderbuffer_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036356, VkglTestCase_036356_1, VkglTestCase_036356_2);

#define VkglTestCase_036357_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bit"
#define VkglTestCase_036357_2 "s_mixed.rgba32i_rgba_astc_5x4_khr.renderbuffer_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036357, VkglTestCase_036357_1, VkglTestCase_036357_2);

#define VkglTestCase_036358_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
#define VkglTestCase_036358_2 "xed.rgba32i_rgba_astc_5x4_khr.renderbuffer_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036358, VkglTestCase_036358_1, VkglTestCase_036358_2);
