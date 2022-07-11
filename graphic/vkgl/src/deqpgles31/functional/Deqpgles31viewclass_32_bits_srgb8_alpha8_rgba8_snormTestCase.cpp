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
#include "../ActsDeqpgles310031TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_030895_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_030895_2 "s_32_bits.srgb8_alpha8_rgba8_snorm.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030895, VkglTestCase_030895_1, VkglTestCase_030895_2);

#define VkglTestCase_030896_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_030896_2 "s_32_bits.srgb8_alpha8_rgba8_snorm.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030896, VkglTestCase_030896_1, VkglTestCase_030896_2);

#define VkglTestCase_030897_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_030897_2 "ss_32_bits.srgb8_alpha8_rgba8_snorm.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030897, VkglTestCase_030897_1, VkglTestCase_030897_2);

#define VkglTestCase_030898_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_3"
#define VkglTestCase_030898_2 "2_bits.srgb8_alpha8_rgba8_snorm.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030898, VkglTestCase_030898_1, VkglTestCase_030898_2);

#define VkglTestCase_030899_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_030899_2 "s_32_bits.srgb8_alpha8_rgba8_snorm.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030899, VkglTestCase_030899_1, VkglTestCase_030899_2);

#define VkglTestCase_030900_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_030900_2 "s_32_bits.srgb8_alpha8_rgba8_snorm.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030900, VkglTestCase_030900_1, VkglTestCase_030900_2);

#define VkglTestCase_030901_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_030901_2 "ss_32_bits.srgb8_alpha8_rgba8_snorm.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030901, VkglTestCase_030901_1, VkglTestCase_030901_2);

#define VkglTestCase_030902_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_3"
#define VkglTestCase_030902_2 "2_bits.srgb8_alpha8_rgba8_snorm.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030902, VkglTestCase_030902_1, VkglTestCase_030902_2);

#define VkglTestCase_030903_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_030903_2 "ss_32_bits.srgb8_alpha8_rgba8_snorm.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030903, VkglTestCase_030903_1, VkglTestCase_030903_2);

#define VkglTestCase_030904_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_030904_2 "ss_32_bits.srgb8_alpha8_rgba8_snorm.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030904, VkglTestCase_030904_1, VkglTestCase_030904_2);

#define VkglTestCase_030905_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_030905_2 "ass_32_bits.srgb8_alpha8_rgba8_snorm.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030905, VkglTestCase_030905_1, VkglTestCase_030905_2);

#define VkglTestCase_030906_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_"
#define VkglTestCase_030906_2 "32_bits.srgb8_alpha8_rgba8_snorm.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030906, VkglTestCase_030906_1, VkglTestCase_030906_2);

#define VkglTestCase_030907_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_3"
#define VkglTestCase_030907_2 "2_bits.srgb8_alpha8_rgba8_snorm.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030907, VkglTestCase_030907_1, VkglTestCase_030907_2);

#define VkglTestCase_030908_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_3"
#define VkglTestCase_030908_2 "2_bits.srgb8_alpha8_rgba8_snorm.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030908, VkglTestCase_030908_1, VkglTestCase_030908_2);

#define VkglTestCase_030909_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_"
#define VkglTestCase_030909_2 "32_bits.srgb8_alpha8_rgba8_snorm.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030909, VkglTestCase_030909_1, VkglTestCase_030909_2);

#define VkglTestCase_030910_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_32_b"
#define VkglTestCase_030910_2 "its.srgb8_alpha8_rgba8_snorm.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030910, VkglTestCase_030910_1, VkglTestCase_030910_2);

#define VkglTestCase_030911_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass"
#define VkglTestCase_030911_2 "_32_bits.srgb8_alpha8_rgba8_snorm.renderbuffer_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030911, VkglTestCase_030911_1, VkglTestCase_030911_2);

#define VkglTestCase_030912_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass"
#define VkglTestCase_030912_2 "_32_bits.srgb8_alpha8_rgba8_snorm.renderbuffer_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030912, VkglTestCase_030912_1, VkglTestCase_030912_2);

#define VkglTestCase_030913_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_030913_2 "s_32_bits.srgb8_alpha8_rgba8_snorm.renderbuffer_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030913, VkglTestCase_030913_1, VkglTestCase_030913_2);

#define VkglTestCase_030914_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_32"
#define VkglTestCase_030914_2 "_bits.srgb8_alpha8_rgba8_snorm.renderbuffer_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030914, VkglTestCase_030914_1, VkglTestCase_030914_2);
