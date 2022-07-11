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

#define VkglTestCase_027021_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_027021_2 "class_32_bits.r32i_srgb8_alpha8.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027021, VkglTestCase_027021_1, VkglTestCase_027021_2);

#define VkglTestCase_027022_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_027022_2 "class_32_bits.r32i_srgb8_alpha8.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027022, VkglTestCase_027022_1, VkglTestCase_027022_2);

#define VkglTestCase_027023_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_027023_2 "wclass_32_bits.r32i_srgb8_alpha8.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027023, VkglTestCase_027023_1, VkglTestCase_027023_2);

#define VkglTestCase_027024_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_027024_2 "ss_32_bits.r32i_srgb8_alpha8.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027024, VkglTestCase_027024_1, VkglTestCase_027024_2);

#define VkglTestCase_027025_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_027025_2 "ass_32_bits.r32i_srgb8_alpha8.texture2d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027025, VkglTestCase_027025_1, VkglTestCase_027025_2);

#define VkglTestCase_027026_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_027026_2 "class_32_bits.r32i_srgb8_alpha8.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027026, VkglTestCase_027026_1, VkglTestCase_027026_2);

#define VkglTestCase_027027_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_027027_2 "class_32_bits.r32i_srgb8_alpha8.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027027, VkglTestCase_027027_1, VkglTestCase_027027_2);

#define VkglTestCase_027028_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_027028_2 "wclass_32_bits.r32i_srgb8_alpha8.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027028, VkglTestCase_027028_1, VkglTestCase_027028_2);

#define VkglTestCase_027029_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_027029_2 "ss_32_bits.r32i_srgb8_alpha8.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027029, VkglTestCase_027029_1, VkglTestCase_027029_2);

#define VkglTestCase_027030_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_027030_2 "ass_32_bits.r32i_srgb8_alpha8.texture3d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027030, VkglTestCase_027030_1, VkglTestCase_027030_2);

#define VkglTestCase_027031_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_027031_2 "wclass_32_bits.r32i_srgb8_alpha8.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027031, VkglTestCase_027031_1, VkglTestCase_027031_2);

#define VkglTestCase_027032_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_027032_2 "wclass_32_bits.r32i_srgb8_alpha8.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027032, VkglTestCase_027032_1, VkglTestCase_027032_2);

#define VkglTestCase_027033_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_027033_2 "ewclass_32_bits.r32i_srgb8_alpha8.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027033, VkglTestCase_027033_1, VkglTestCase_027033_2);

#define VkglTestCase_027034_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_027034_2 "ass_32_bits.r32i_srgb8_alpha8.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027034, VkglTestCase_027034_1, VkglTestCase_027034_2);

#define VkglTestCase_027035_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_027035_2 "lass_32_bits.r32i_srgb8_alpha8.cubemap_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027035, VkglTestCase_027035_1, VkglTestCase_027035_2);

#define VkglTestCase_027036_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_027036_2 "ss_32_bits.r32i_srgb8_alpha8.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027036, VkglTestCase_027036_1, VkglTestCase_027036_2);

#define VkglTestCase_027037_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_027037_2 "ss_32_bits.r32i_srgb8_alpha8.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027037, VkglTestCase_027037_1, VkglTestCase_027037_2);

#define VkglTestCase_027038_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_027038_2 "ass_32_bits.r32i_srgb8_alpha8.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027038, VkglTestCase_027038_1, VkglTestCase_027038_2);

#define VkglTestCase_027039_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_"
#define VkglTestCase_027039_2 "32_bits.r32i_srgb8_alpha8.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027039, VkglTestCase_027039_1, VkglTestCase_027039_2);

#define VkglTestCase_027040_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass"
#define VkglTestCase_027040_2 "_32_bits.r32i_srgb8_alpha8.texture2d_array_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027040, VkglTestCase_027040_1, VkglTestCase_027040_2);

#define VkglTestCase_027041_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_027041_2 "ass_32_bits.r32i_srgb8_alpha8.renderbuffer_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027041, VkglTestCase_027041_1, VkglTestCase_027041_2);

#define VkglTestCase_027042_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_027042_2 "ass_32_bits.r32i_srgb8_alpha8.renderbuffer_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027042, VkglTestCase_027042_1, VkglTestCase_027042_2);

#define VkglTestCase_027043_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_027043_2 "lass_32_bits.r32i_srgb8_alpha8.renderbuffer_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027043, VkglTestCase_027043_1, VkglTestCase_027043_2);

#define VkglTestCase_027044_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass"
#define VkglTestCase_027044_2 "_32_bits.r32i_srgb8_alpha8.renderbuffer_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027044, VkglTestCase_027044_1, VkglTestCase_027044_2);

#define VkglTestCase_027045_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_027045_2 "ss_32_bits.r32i_srgb8_alpha8.renderbuffer_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027045, VkglTestCase_027045_1, VkglTestCase_027045_2);
