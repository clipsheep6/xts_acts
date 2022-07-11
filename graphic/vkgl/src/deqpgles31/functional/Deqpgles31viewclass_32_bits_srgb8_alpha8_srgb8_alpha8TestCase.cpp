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

#define VkglTestCase_030915_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_030915_2 "s_32_bits.srgb8_alpha8_srgb8_alpha8.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030915, VkglTestCase_030915_1, VkglTestCase_030915_2);

#define VkglTestCase_030916_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_030916_2 "s_32_bits.srgb8_alpha8_srgb8_alpha8.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030916, VkglTestCase_030916_1, VkglTestCase_030916_2);

#define VkglTestCase_030917_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_030917_2 "ss_32_bits.srgb8_alpha8_srgb8_alpha8.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030917, VkglTestCase_030917_1, VkglTestCase_030917_2);

#define VkglTestCase_030918_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_3"
#define VkglTestCase_030918_2 "2_bits.srgb8_alpha8_srgb8_alpha8.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030918, VkglTestCase_030918_1, VkglTestCase_030918_2);

#define VkglTestCase_030919_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_"
#define VkglTestCase_030919_2 "32_bits.srgb8_alpha8_srgb8_alpha8.texture2d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030919, VkglTestCase_030919_1, VkglTestCase_030919_2);

#define VkglTestCase_030920_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_030920_2 "s_32_bits.srgb8_alpha8_srgb8_alpha8.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030920, VkglTestCase_030920_1, VkglTestCase_030920_2);

#define VkglTestCase_030921_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_030921_2 "s_32_bits.srgb8_alpha8_srgb8_alpha8.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030921, VkglTestCase_030921_1, VkglTestCase_030921_2);

#define VkglTestCase_030922_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_030922_2 "ss_32_bits.srgb8_alpha8_srgb8_alpha8.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030922, VkglTestCase_030922_1, VkglTestCase_030922_2);

#define VkglTestCase_030923_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_3"
#define VkglTestCase_030923_2 "2_bits.srgb8_alpha8_srgb8_alpha8.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030923, VkglTestCase_030923_1, VkglTestCase_030923_2);

#define VkglTestCase_030924_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_"
#define VkglTestCase_030924_2 "32_bits.srgb8_alpha8_srgb8_alpha8.texture3d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030924, VkglTestCase_030924_1, VkglTestCase_030924_2);

#define VkglTestCase_030925_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_030925_2 "ss_32_bits.srgb8_alpha8_srgb8_alpha8.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030925, VkglTestCase_030925_1, VkglTestCase_030925_2);

#define VkglTestCase_030926_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_030926_2 "ss_32_bits.srgb8_alpha8_srgb8_alpha8.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030926, VkglTestCase_030926_1, VkglTestCase_030926_2);

#define VkglTestCase_030927_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_030927_2 "ass_32_bits.srgb8_alpha8_srgb8_alpha8.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030927, VkglTestCase_030927_1, VkglTestCase_030927_2);

#define VkglTestCase_030928_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_"
#define VkglTestCase_030928_2 "32_bits.srgb8_alpha8_srgb8_alpha8.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030928, VkglTestCase_030928_1, VkglTestCase_030928_2);

#define VkglTestCase_030929_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass"
#define VkglTestCase_030929_2 "_32_bits.srgb8_alpha8_srgb8_alpha8.cubemap_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030929, VkglTestCase_030929_1, VkglTestCase_030929_2);

#define VkglTestCase_030930_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_3"
#define VkglTestCase_030930_2 "2_bits.srgb8_alpha8_srgb8_alpha8.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030930, VkglTestCase_030930_1, VkglTestCase_030930_2);

#define VkglTestCase_030931_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_3"
#define VkglTestCase_030931_2 "2_bits.srgb8_alpha8_srgb8_alpha8.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030931, VkglTestCase_030931_1, VkglTestCase_030931_2);

#define VkglTestCase_030932_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_"
#define VkglTestCase_030932_2 "32_bits.srgb8_alpha8_srgb8_alpha8.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030932, VkglTestCase_030932_1, VkglTestCase_030932_2);

#define VkglTestCase_030933_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_32_b"
#define VkglTestCase_030933_2 "its.srgb8_alpha8_srgb8_alpha8.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030933, VkglTestCase_030933_1, VkglTestCase_030933_2);

#define VkglTestCase_030934_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_32_"
#define VkglTestCase_030934_2 "bits.srgb8_alpha8_srgb8_alpha8.texture2d_array_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030934, VkglTestCase_030934_1, VkglTestCase_030934_2);

#define VkglTestCase_030935_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_"
#define VkglTestCase_030935_2 "32_bits.srgb8_alpha8_srgb8_alpha8.renderbuffer_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030935, VkglTestCase_030935_1, VkglTestCase_030935_2);

#define VkglTestCase_030936_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_"
#define VkglTestCase_030936_2 "32_bits.srgb8_alpha8_srgb8_alpha8.renderbuffer_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030936, VkglTestCase_030936_1, VkglTestCase_030936_2);

#define VkglTestCase_030937_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass"
#define VkglTestCase_030937_2 "_32_bits.srgb8_alpha8_srgb8_alpha8.renderbuffer_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030937, VkglTestCase_030937_1, VkglTestCase_030937_2);

#define VkglTestCase_030938_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_32_"
#define VkglTestCase_030938_2 "bits.srgb8_alpha8_srgb8_alpha8.renderbuffer_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030938, VkglTestCase_030938_1, VkglTestCase_030938_2);

#define VkglTestCase_030939_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_3"
#define VkglTestCase_030939_2 "2_bits.srgb8_alpha8_srgb8_alpha8.renderbuffer_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030939, VkglTestCase_030939_1, VkglTestCase_030939_2);
