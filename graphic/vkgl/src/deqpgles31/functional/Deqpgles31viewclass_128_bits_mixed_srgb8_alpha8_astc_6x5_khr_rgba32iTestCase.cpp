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

#define VkglTestCase_036999_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_036999_2 "ixed.srgb8_alpha8_astc_6x5_khr_rgba32i.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036999, VkglTestCase_036999_1, VkglTestCase_036999_2);

#define VkglTestCase_037000_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_037000_2 "ixed.srgb8_alpha8_astc_6x5_khr_rgba32i.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_037000, VkglTestCase_037000_1, VkglTestCase_037000_2);

#define VkglTestCase_037001_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_037001_2 "mixed.srgb8_alpha8_astc_6x5_khr_rgba32i.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_037001, VkglTestCase_037001_1, VkglTestCase_037001_2);

#define VkglTestCase_037002_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
#define VkglTestCase_037002_2 "d.srgb8_alpha8_astc_6x5_khr_rgba32i.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_037002, VkglTestCase_037002_1, VkglTestCase_037002_2);

#define VkglTestCase_037003_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mix"
#define VkglTestCase_037003_2 "ed.srgb8_alpha8_astc_6x5_khr_rgba32i.texture2d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_037003, VkglTestCase_037003_1, VkglTestCase_037003_2);

#define VkglTestCase_037004_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_037004_2 "ixed.srgb8_alpha8_astc_6x5_khr_rgba32i.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_037004, VkglTestCase_037004_1, VkglTestCase_037004_2);

#define VkglTestCase_037005_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_037005_2 "ixed.srgb8_alpha8_astc_6x5_khr_rgba32i.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_037005, VkglTestCase_037005_1, VkglTestCase_037005_2);

#define VkglTestCase_037006_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_037006_2 "mixed.srgb8_alpha8_astc_6x5_khr_rgba32i.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_037006, VkglTestCase_037006_1, VkglTestCase_037006_2);

#define VkglTestCase_037007_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
#define VkglTestCase_037007_2 "d.srgb8_alpha8_astc_6x5_khr_rgba32i.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_037007, VkglTestCase_037007_1, VkglTestCase_037007_2);

#define VkglTestCase_037008_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mix"
#define VkglTestCase_037008_2 "ed.srgb8_alpha8_astc_6x5_khr_rgba32i.texture3d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_037008, VkglTestCase_037008_1, VkglTestCase_037008_2);

#define VkglTestCase_037009_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_037009_2 "mixed.srgb8_alpha8_astc_6x5_khr_rgba32i.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_037009, VkglTestCase_037009_1, VkglTestCase_037009_2);

#define VkglTestCase_037010_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_037010_2 "mixed.srgb8_alpha8_astc_6x5_khr_rgba32i.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_037010, VkglTestCase_037010_1, VkglTestCase_037010_2);

#define VkglTestCase_037011_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits"
#define VkglTestCase_037011_2 "_mixed.srgb8_alpha8_astc_6x5_khr_rgba32i.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_037011, VkglTestCase_037011_1, VkglTestCase_037011_2);

#define VkglTestCase_037012_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mix"
#define VkglTestCase_037012_2 "ed.srgb8_alpha8_astc_6x5_khr_rgba32i.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_037012, VkglTestCase_037012_1, VkglTestCase_037012_2);

#define VkglTestCase_037013_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
#define VkglTestCase_037013_2 "xed.srgb8_alpha8_astc_6x5_khr_rgba32i.cubemap_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_037013, VkglTestCase_037013_1, VkglTestCase_037013_2);

#define VkglTestCase_037014_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
#define VkglTestCase_037014_2 "d.srgb8_alpha8_astc_6x5_khr_rgba32i.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_037014, VkglTestCase_037014_1, VkglTestCase_037014_2);

#define VkglTestCase_037015_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
#define VkglTestCase_037015_2 "d.srgb8_alpha8_astc_6x5_khr_rgba32i.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_037015, VkglTestCase_037015_1, VkglTestCase_037015_2);

#define VkglTestCase_037016_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mix"
#define VkglTestCase_037016_2 "ed.srgb8_alpha8_astc_6x5_khr_rgba32i.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_037016, VkglTestCase_037016_1, VkglTestCase_037016_2);

#define VkglTestCase_037017_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed.s"
#define VkglTestCase_037017_2 "rgb8_alpha8_astc_6x5_khr_rgba32i.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_037017, VkglTestCase_037017_1, VkglTestCase_037017_2);

#define VkglTestCase_037018_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed."
#define VkglTestCase_037018_2 "srgb8_alpha8_astc_6x5_khr_rgba32i.texture2d_array_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_037018, VkglTestCase_037018_1, VkglTestCase_037018_2);
