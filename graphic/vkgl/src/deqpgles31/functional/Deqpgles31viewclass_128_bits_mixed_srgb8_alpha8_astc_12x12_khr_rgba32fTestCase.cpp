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

#define VkglTestCase_035003_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
#define VkglTestCase_035003_2 "xed.srgb8_alpha8_astc_12x12_khr_rgba32f.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035003, VkglTestCase_035003_1, VkglTestCase_035003_2);

#define VkglTestCase_035004_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
#define VkglTestCase_035004_2 "xed.srgb8_alpha8_astc_12x12_khr_rgba32f.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035004, VkglTestCase_035004_1, VkglTestCase_035004_2);

#define VkglTestCase_035005_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_035005_2 "ixed.srgb8_alpha8_astc_12x12_khr_rgba32f.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035005, VkglTestCase_035005_1, VkglTestCase_035005_2);

#define VkglTestCase_035006_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed"
#define VkglTestCase_035006_2 ".srgb8_alpha8_astc_12x12_khr_rgba32f.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035006, VkglTestCase_035006_1, VkglTestCase_035006_2);

#define VkglTestCase_035007_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
#define VkglTestCase_035007_2 "xed.srgb8_alpha8_astc_12x12_khr_rgba32f.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035007, VkglTestCase_035007_1, VkglTestCase_035007_2);

#define VkglTestCase_035008_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
#define VkglTestCase_035008_2 "xed.srgb8_alpha8_astc_12x12_khr_rgba32f.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035008, VkglTestCase_035008_1, VkglTestCase_035008_2);

#define VkglTestCase_035009_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_035009_2 "ixed.srgb8_alpha8_astc_12x12_khr_rgba32f.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035009, VkglTestCase_035009_1, VkglTestCase_035009_2);

#define VkglTestCase_035010_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed"
#define VkglTestCase_035010_2 ".srgb8_alpha8_astc_12x12_khr_rgba32f.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035010, VkglTestCase_035010_1, VkglTestCase_035010_2);

#define VkglTestCase_035011_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_035011_2 "ixed.srgb8_alpha8_astc_12x12_khr_rgba32f.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035011, VkglTestCase_035011_1, VkglTestCase_035011_2);

#define VkglTestCase_035012_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_035012_2 "ixed.srgb8_alpha8_astc_12x12_khr_rgba32f.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035012, VkglTestCase_035012_1, VkglTestCase_035012_2);

#define VkglTestCase_035013_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_035013_2 "mixed.srgb8_alpha8_astc_12x12_khr_rgba32f.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035013, VkglTestCase_035013_1, VkglTestCase_035013_2);

#define VkglTestCase_035014_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
#define VkglTestCase_035014_2 "d.srgb8_alpha8_astc_12x12_khr_rgba32f.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035014, VkglTestCase_035014_1, VkglTestCase_035014_2);

#define VkglTestCase_035015_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed"
#define VkglTestCase_035015_2 ".srgb8_alpha8_astc_12x12_khr_rgba32f.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035015, VkglTestCase_035015_1, VkglTestCase_035015_2);

#define VkglTestCase_035016_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed"
#define VkglTestCase_035016_2 ".srgb8_alpha8_astc_12x12_khr_rgba32f.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035016, VkglTestCase_035016_1, VkglTestCase_035016_2);

#define VkglTestCase_035017_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
#define VkglTestCase_035017_2 "d.srgb8_alpha8_astc_12x12_khr_rgba32f.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035017, VkglTestCase_035017_1, VkglTestCase_035017_2);

#define VkglTestCase_035018_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed.sr"
#define VkglTestCase_035018_2 "gb8_alpha8_astc_12x12_khr_rgba32f.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035018, VkglTestCase_035018_1, VkglTestCase_035018_2);
