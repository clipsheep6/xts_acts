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
#include "../ActsDeqpgles310030TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_029003_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_029003_2 "lass_32_bits.rgba8i_srgb8_alpha8.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029003, VkglTestCase_029003_1, VkglTestCase_029003_2);

#define VkglTestCase_029004_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_029004_2 "lass_32_bits.rgba8i_srgb8_alpha8.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029004, VkglTestCase_029004_1, VkglTestCase_029004_2);

#define VkglTestCase_029005_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_029005_2 "class_32_bits.rgba8i_srgb8_alpha8.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029005, VkglTestCase_029005_1, VkglTestCase_029005_2);

#define VkglTestCase_029006_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_029006_2 "s_32_bits.rgba8i_srgb8_alpha8.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029006, VkglTestCase_029006_1, VkglTestCase_029006_2);

#define VkglTestCase_029007_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_029007_2 "ss_32_bits.rgba8i_srgb8_alpha8.texture2d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029007, VkglTestCase_029007_1, VkglTestCase_029007_2);

#define VkglTestCase_029008_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_029008_2 "lass_32_bits.rgba8i_srgb8_alpha8.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029008, VkglTestCase_029008_1, VkglTestCase_029008_2);

#define VkglTestCase_029009_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_029009_2 "lass_32_bits.rgba8i_srgb8_alpha8.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029009, VkglTestCase_029009_1, VkglTestCase_029009_2);

#define VkglTestCase_029010_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_029010_2 "class_32_bits.rgba8i_srgb8_alpha8.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029010, VkglTestCase_029010_1, VkglTestCase_029010_2);

#define VkglTestCase_029011_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_029011_2 "s_32_bits.rgba8i_srgb8_alpha8.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029011, VkglTestCase_029011_1, VkglTestCase_029011_2);

#define VkglTestCase_029012_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_029012_2 "ss_32_bits.rgba8i_srgb8_alpha8.texture3d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029012, VkglTestCase_029012_1, VkglTestCase_029012_2);

#define VkglTestCase_029013_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_029013_2 "class_32_bits.rgba8i_srgb8_alpha8.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029013, VkglTestCase_029013_1, VkglTestCase_029013_2);

#define VkglTestCase_029014_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_029014_2 "class_32_bits.rgba8i_srgb8_alpha8.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029014, VkglTestCase_029014_1, VkglTestCase_029014_2);

#define VkglTestCase_029015_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_029015_2 "wclass_32_bits.rgba8i_srgb8_alpha8.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029015, VkglTestCase_029015_1, VkglTestCase_029015_2);

#define VkglTestCase_029016_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_029016_2 "ss_32_bits.rgba8i_srgb8_alpha8.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029016, VkglTestCase_029016_1, VkglTestCase_029016_2);

#define VkglTestCase_029017_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_029017_2 "ass_32_bits.rgba8i_srgb8_alpha8.cubemap_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029017, VkglTestCase_029017_1, VkglTestCase_029017_2);

#define VkglTestCase_029018_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_029018_2 "s_32_bits.rgba8i_srgb8_alpha8.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029018, VkglTestCase_029018_1, VkglTestCase_029018_2);

#define VkglTestCase_029019_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_029019_2 "s_32_bits.rgba8i_srgb8_alpha8.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029019, VkglTestCase_029019_1, VkglTestCase_029019_2);

#define VkglTestCase_029020_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_029020_2 "ss_32_bits.rgba8i_srgb8_alpha8.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029020, VkglTestCase_029020_1, VkglTestCase_029020_2);

#define VkglTestCase_029021_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_3"
#define VkglTestCase_029021_2 "2_bits.rgba8i_srgb8_alpha8.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029021, VkglTestCase_029021_1, VkglTestCase_029021_2);

#define VkglTestCase_029022_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_"
#define VkglTestCase_029022_2 "32_bits.rgba8i_srgb8_alpha8.texture2d_array_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029022, VkglTestCase_029022_1, VkglTestCase_029022_2);

#define VkglTestCase_029023_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_029023_2 "ss_32_bits.rgba8i_srgb8_alpha8.renderbuffer_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029023, VkglTestCase_029023_1, VkglTestCase_029023_2);

#define VkglTestCase_029024_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_029024_2 "ss_32_bits.rgba8i_srgb8_alpha8.renderbuffer_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029024, VkglTestCase_029024_1, VkglTestCase_029024_2);

#define VkglTestCase_029025_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_029025_2 "ass_32_bits.rgba8i_srgb8_alpha8.renderbuffer_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029025, VkglTestCase_029025_1, VkglTestCase_029025_2);

#define VkglTestCase_029026_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_"
#define VkglTestCase_029026_2 "32_bits.rgba8i_srgb8_alpha8.renderbuffer_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029026, VkglTestCase_029026_1, VkglTestCase_029026_2);

#define VkglTestCase_029027_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_029027_2 "s_32_bits.rgba8i_srgb8_alpha8.renderbuffer_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029027, VkglTestCase_029027_1, VkglTestCase_029027_2);
