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

#define VkglTestCase_035999_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
#define VkglTestCase_035999_2 "xed.srgb8_alpha8_astc_10x5_khr_rgba32ui.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035999, VkglTestCase_035999_1, VkglTestCase_035999_2);

#define VkglTestCase_036000_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
#define VkglTestCase_036000_2 "xed.srgb8_alpha8_astc_10x5_khr_rgba32ui.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_036000, VkglTestCase_036000_1, VkglTestCase_036000_2);

#define VkglTestCase_036001_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_036001_2 "ixed.srgb8_alpha8_astc_10x5_khr_rgba32ui.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_036001, VkglTestCase_036001_1, VkglTestCase_036001_2);

#define VkglTestCase_036002_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed"
#define VkglTestCase_036002_2 ".srgb8_alpha8_astc_10x5_khr_rgba32ui.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_036002, VkglTestCase_036002_1, VkglTestCase_036002_2);

#define VkglTestCase_036003_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
#define VkglTestCase_036003_2 "d.srgb8_alpha8_astc_10x5_khr_rgba32ui.texture2d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_036003, VkglTestCase_036003_1, VkglTestCase_036003_2);

#define VkglTestCase_036004_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
#define VkglTestCase_036004_2 "xed.srgb8_alpha8_astc_10x5_khr_rgba32ui.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_036004, VkglTestCase_036004_1, VkglTestCase_036004_2);

#define VkglTestCase_036005_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
#define VkglTestCase_036005_2 "xed.srgb8_alpha8_astc_10x5_khr_rgba32ui.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_036005, VkglTestCase_036005_1, VkglTestCase_036005_2);

#define VkglTestCase_036006_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_036006_2 "ixed.srgb8_alpha8_astc_10x5_khr_rgba32ui.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_036006, VkglTestCase_036006_1, VkglTestCase_036006_2);

#define VkglTestCase_036007_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed"
#define VkglTestCase_036007_2 ".srgb8_alpha8_astc_10x5_khr_rgba32ui.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_036007, VkglTestCase_036007_1, VkglTestCase_036007_2);

#define VkglTestCase_036008_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
#define VkglTestCase_036008_2 "d.srgb8_alpha8_astc_10x5_khr_rgba32ui.texture3d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_036008, VkglTestCase_036008_1, VkglTestCase_036008_2);

#define VkglTestCase_036009_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_036009_2 "ixed.srgb8_alpha8_astc_10x5_khr_rgba32ui.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_036009, VkglTestCase_036009_1, VkglTestCase_036009_2);

#define VkglTestCase_036010_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_036010_2 "ixed.srgb8_alpha8_astc_10x5_khr_rgba32ui.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_036010, VkglTestCase_036010_1, VkglTestCase_036010_2);

#define VkglTestCase_036011_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_036011_2 "mixed.srgb8_alpha8_astc_10x5_khr_rgba32ui.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_036011, VkglTestCase_036011_1, VkglTestCase_036011_2);

#define VkglTestCase_036012_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
#define VkglTestCase_036012_2 "d.srgb8_alpha8_astc_10x5_khr_rgba32ui.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_036012, VkglTestCase_036012_1, VkglTestCase_036012_2);

#define VkglTestCase_036013_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mix"
#define VkglTestCase_036013_2 "ed.srgb8_alpha8_astc_10x5_khr_rgba32ui.cubemap_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_036013, VkglTestCase_036013_1, VkglTestCase_036013_2);

#define VkglTestCase_036014_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed"
#define VkglTestCase_036014_2 ".srgb8_alpha8_astc_10x5_khr_rgba32ui.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_036014, VkglTestCase_036014_1, VkglTestCase_036014_2);

#define VkglTestCase_036015_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed"
#define VkglTestCase_036015_2 ".srgb8_alpha8_astc_10x5_khr_rgba32ui.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_036015, VkglTestCase_036015_1, VkglTestCase_036015_2);

#define VkglTestCase_036016_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
#define VkglTestCase_036016_2 "d.srgb8_alpha8_astc_10x5_khr_rgba32ui.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_036016, VkglTestCase_036016_1, VkglTestCase_036016_2);

#define VkglTestCase_036017_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed.sr"
#define VkglTestCase_036017_2 "gb8_alpha8_astc_10x5_khr_rgba32ui.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_036017, VkglTestCase_036017_1, VkglTestCase_036017_2);

#define VkglTestCase_036018_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed.s"
#define VkglTestCase_036018_2 "rgb8_alpha8_astc_10x5_khr_rgba32ui.texture2d_array_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_036018, VkglTestCase_036018_1, VkglTestCase_036018_2);
