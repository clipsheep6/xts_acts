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
#include "../ActsDeqpgles310028TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_027953_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_027953_2 "lass_32_bits.rg16i_srgb8_alpha8.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027953, VkglTestCase_027953_1, VkglTestCase_027953_2);

#define VkglTestCase_027954_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_027954_2 "lass_32_bits.rg16i_srgb8_alpha8.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027954, VkglTestCase_027954_1, VkglTestCase_027954_2);

#define VkglTestCase_027955_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_027955_2 "class_32_bits.rg16i_srgb8_alpha8.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027955, VkglTestCase_027955_1, VkglTestCase_027955_2);

#define VkglTestCase_027956_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_027956_2 "s_32_bits.rg16i_srgb8_alpha8.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027956, VkglTestCase_027956_1, VkglTestCase_027956_2);

#define VkglTestCase_027957_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_027957_2 "ass_32_bits.rg16i_srgb8_alpha8.texture2d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027957, VkglTestCase_027957_1, VkglTestCase_027957_2);

#define VkglTestCase_027958_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_027958_2 "lass_32_bits.rg16i_srgb8_alpha8.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027958, VkglTestCase_027958_1, VkglTestCase_027958_2);

#define VkglTestCase_027959_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_027959_2 "lass_32_bits.rg16i_srgb8_alpha8.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027959, VkglTestCase_027959_1, VkglTestCase_027959_2);

#define VkglTestCase_027960_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_027960_2 "class_32_bits.rg16i_srgb8_alpha8.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027960, VkglTestCase_027960_1, VkglTestCase_027960_2);

#define VkglTestCase_027961_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_027961_2 "s_32_bits.rg16i_srgb8_alpha8.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027961, VkglTestCase_027961_1, VkglTestCase_027961_2);

#define VkglTestCase_027962_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_027962_2 "ass_32_bits.rg16i_srgb8_alpha8.texture3d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027962, VkglTestCase_027962_1, VkglTestCase_027962_2);

#define VkglTestCase_027963_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_027963_2 "class_32_bits.rg16i_srgb8_alpha8.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027963, VkglTestCase_027963_1, VkglTestCase_027963_2);

#define VkglTestCase_027964_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_027964_2 "class_32_bits.rg16i_srgb8_alpha8.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027964, VkglTestCase_027964_1, VkglTestCase_027964_2);

#define VkglTestCase_027965_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_027965_2 "wclass_32_bits.rg16i_srgb8_alpha8.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027965, VkglTestCase_027965_1, VkglTestCase_027965_2);

#define VkglTestCase_027966_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_027966_2 "ss_32_bits.rg16i_srgb8_alpha8.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027966, VkglTestCase_027966_1, VkglTestCase_027966_2);

#define VkglTestCase_027967_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_027967_2 "lass_32_bits.rg16i_srgb8_alpha8.cubemap_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027967, VkglTestCase_027967_1, VkglTestCase_027967_2);

#define VkglTestCase_027968_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_027968_2 "s_32_bits.rg16i_srgb8_alpha8.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027968, VkglTestCase_027968_1, VkglTestCase_027968_2);

#define VkglTestCase_027969_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_027969_2 "s_32_bits.rg16i_srgb8_alpha8.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027969, VkglTestCase_027969_1, VkglTestCase_027969_2);

#define VkglTestCase_027970_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_027970_2 "ss_32_bits.rg16i_srgb8_alpha8.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027970, VkglTestCase_027970_1, VkglTestCase_027970_2);

#define VkglTestCase_027971_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_3"
#define VkglTestCase_027971_2 "2_bits.rg16i_srgb8_alpha8.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027971, VkglTestCase_027971_1, VkglTestCase_027971_2);

#define VkglTestCase_027972_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass"
#define VkglTestCase_027972_2 "_32_bits.rg16i_srgb8_alpha8.texture2d_array_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027972, VkglTestCase_027972_1, VkglTestCase_027972_2);

#define VkglTestCase_027973_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_027973_2 "ass_32_bits.rg16i_srgb8_alpha8.renderbuffer_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027973, VkglTestCase_027973_1, VkglTestCase_027973_2);

#define VkglTestCase_027974_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_027974_2 "ass_32_bits.rg16i_srgb8_alpha8.renderbuffer_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027974, VkglTestCase_027974_1, VkglTestCase_027974_2);

#define VkglTestCase_027975_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_027975_2 "lass_32_bits.rg16i_srgb8_alpha8.renderbuffer_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027975, VkglTestCase_027975_1, VkglTestCase_027975_2);

#define VkglTestCase_027976_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass"
#define VkglTestCase_027976_2 "_32_bits.rg16i_srgb8_alpha8.renderbuffer_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027976, VkglTestCase_027976_1, VkglTestCase_027976_2);

#define VkglTestCase_027977_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_027977_2 "s_32_bits.rg16i_srgb8_alpha8.renderbuffer_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027977, VkglTestCase_027977_1, VkglTestCase_027977_2);
