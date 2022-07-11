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
#include "../ActsDeqpgles310036TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_035979_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
#define VkglTestCase_035979_2 "xed.rgba32ui_srgb8_alpha8_astc_10x5_khr.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035979, VkglTestCase_035979_1, VkglTestCase_035979_2);

#define VkglTestCase_035980_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
#define VkglTestCase_035980_2 "xed.rgba32ui_srgb8_alpha8_astc_10x5_khr.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035980, VkglTestCase_035980_1, VkglTestCase_035980_2);

#define VkglTestCase_035981_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_035981_2 "ixed.rgba32ui_srgb8_alpha8_astc_10x5_khr.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035981, VkglTestCase_035981_1, VkglTestCase_035981_2);

#define VkglTestCase_035982_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed"
#define VkglTestCase_035982_2 ".rgba32ui_srgb8_alpha8_astc_10x5_khr.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035982, VkglTestCase_035982_1, VkglTestCase_035982_2);

#define VkglTestCase_035983_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
#define VkglTestCase_035983_2 "xed.rgba32ui_srgb8_alpha8_astc_10x5_khr.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035983, VkglTestCase_035983_1, VkglTestCase_035983_2);

#define VkglTestCase_035984_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
#define VkglTestCase_035984_2 "xed.rgba32ui_srgb8_alpha8_astc_10x5_khr.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035984, VkglTestCase_035984_1, VkglTestCase_035984_2);

#define VkglTestCase_035985_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_035985_2 "ixed.rgba32ui_srgb8_alpha8_astc_10x5_khr.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035985, VkglTestCase_035985_1, VkglTestCase_035985_2);

#define VkglTestCase_035986_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed"
#define VkglTestCase_035986_2 ".rgba32ui_srgb8_alpha8_astc_10x5_khr.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035986, VkglTestCase_035986_1, VkglTestCase_035986_2);

#define VkglTestCase_035987_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_035987_2 "ixed.rgba32ui_srgb8_alpha8_astc_10x5_khr.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035987, VkglTestCase_035987_1, VkglTestCase_035987_2);

#define VkglTestCase_035988_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_035988_2 "ixed.rgba32ui_srgb8_alpha8_astc_10x5_khr.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035988, VkglTestCase_035988_1, VkglTestCase_035988_2);

#define VkglTestCase_035989_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_035989_2 "mixed.rgba32ui_srgb8_alpha8_astc_10x5_khr.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035989, VkglTestCase_035989_1, VkglTestCase_035989_2);

#define VkglTestCase_035990_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
#define VkglTestCase_035990_2 "d.rgba32ui_srgb8_alpha8_astc_10x5_khr.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035990, VkglTestCase_035990_1, VkglTestCase_035990_2);

#define VkglTestCase_035991_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed"
#define VkglTestCase_035991_2 ".rgba32ui_srgb8_alpha8_astc_10x5_khr.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035991, VkglTestCase_035991_1, VkglTestCase_035991_2);

#define VkglTestCase_035992_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed"
#define VkglTestCase_035992_2 ".rgba32ui_srgb8_alpha8_astc_10x5_khr.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035992, VkglTestCase_035992_1, VkglTestCase_035992_2);

#define VkglTestCase_035993_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
#define VkglTestCase_035993_2 "d.rgba32ui_srgb8_alpha8_astc_10x5_khr.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035993, VkglTestCase_035993_1, VkglTestCase_035993_2);

#define VkglTestCase_035994_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed.rg"
#define VkglTestCase_035994_2 "ba32ui_srgb8_alpha8_astc_10x5_khr.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035994, VkglTestCase_035994_1, VkglTestCase_035994_2);

#define VkglTestCase_035995_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
#define VkglTestCase_035995_2 "d.rgba32ui_srgb8_alpha8_astc_10x5_khr.renderbuffer_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035995, VkglTestCase_035995_1, VkglTestCase_035995_2);

#define VkglTestCase_035996_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
#define VkglTestCase_035996_2 "d.rgba32ui_srgb8_alpha8_astc_10x5_khr.renderbuffer_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035996, VkglTestCase_035996_1, VkglTestCase_035996_2);

#define VkglTestCase_035997_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mix"
#define VkglTestCase_035997_2 "ed.rgba32ui_srgb8_alpha8_astc_10x5_khr.renderbuffer_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035997, VkglTestCase_035997_1, VkglTestCase_035997_2);

#define VkglTestCase_035998_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed.r"
#define VkglTestCase_035998_2 "gba32ui_srgb8_alpha8_astc_10x5_khr.renderbuffer_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035998, VkglTestCase_035998_1, VkglTestCase_035998_2);
