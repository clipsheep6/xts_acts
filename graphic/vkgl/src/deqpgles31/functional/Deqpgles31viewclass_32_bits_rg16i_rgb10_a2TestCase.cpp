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

#define VkglTestCase_027908_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_027908_2 "wclass_32_bits.rg16i_rgb10_a2.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027908, VkglTestCase_027908_1, VkglTestCase_027908_2);

#define VkglTestCase_027909_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_027909_2 "wclass_32_bits.rg16i_rgb10_a2.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027909, VkglTestCase_027909_1, VkglTestCase_027909_2);

#define VkglTestCase_027910_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_027910_2 "ewclass_32_bits.rg16i_rgb10_a2.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027910, VkglTestCase_027910_1, VkglTestCase_027910_2);

#define VkglTestCase_027911_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_027911_2 "ass_32_bits.rg16i_rgb10_a2.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027911, VkglTestCase_027911_1, VkglTestCase_027911_2);

#define VkglTestCase_027912_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_027912_2 "class_32_bits.rg16i_rgb10_a2.texture2d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027912, VkglTestCase_027912_1, VkglTestCase_027912_2);

#define VkglTestCase_027913_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_027913_2 "wclass_32_bits.rg16i_rgb10_a2.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027913, VkglTestCase_027913_1, VkglTestCase_027913_2);

#define VkglTestCase_027914_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_027914_2 "wclass_32_bits.rg16i_rgb10_a2.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027914, VkglTestCase_027914_1, VkglTestCase_027914_2);

#define VkglTestCase_027915_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_027915_2 "ewclass_32_bits.rg16i_rgb10_a2.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027915, VkglTestCase_027915_1, VkglTestCase_027915_2);

#define VkglTestCase_027916_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_027916_2 "ass_32_bits.rg16i_rgb10_a2.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027916, VkglTestCase_027916_1, VkglTestCase_027916_2);

#define VkglTestCase_027917_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_027917_2 "class_32_bits.rg16i_rgb10_a2.texture3d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027917, VkglTestCase_027917_1, VkglTestCase_027917_2);

#define VkglTestCase_027918_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_027918_2 "ewclass_32_bits.rg16i_rgb10_a2.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027918, VkglTestCase_027918_1, VkglTestCase_027918_2);

#define VkglTestCase_027919_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_027919_2 "ewclass_32_bits.rg16i_rgb10_a2.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027919, VkglTestCase_027919_1, VkglTestCase_027919_2);

#define VkglTestCase_027920_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_027920_2 "iewclass_32_bits.rg16i_rgb10_a2.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027920, VkglTestCase_027920_1, VkglTestCase_027920_2);

#define VkglTestCase_027921_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_027921_2 "lass_32_bits.rg16i_rgb10_a2.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027921, VkglTestCase_027921_1, VkglTestCase_027921_2);

#define VkglTestCase_027922_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_027922_2 "wclass_32_bits.rg16i_rgb10_a2.cubemap_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027922, VkglTestCase_027922_1, VkglTestCase_027922_2);

#define VkglTestCase_027923_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_027923_2 "ass_32_bits.rg16i_rgb10_a2.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027923, VkglTestCase_027923_1, VkglTestCase_027923_2);

#define VkglTestCase_027924_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_027924_2 "ass_32_bits.rg16i_rgb10_a2.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027924, VkglTestCase_027924_1, VkglTestCase_027924_2);

#define VkglTestCase_027925_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_027925_2 "lass_32_bits.rg16i_rgb10_a2.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027925, VkglTestCase_027925_1, VkglTestCase_027925_2);

#define VkglTestCase_027926_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass"
#define VkglTestCase_027926_2 "_32_bits.rg16i_rgb10_a2.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027926, VkglTestCase_027926_1, VkglTestCase_027926_2);

#define VkglTestCase_027927_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_027927_2 "ss_32_bits.rg16i_rgb10_a2.texture2d_array_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027927, VkglTestCase_027927_1, VkglTestCase_027927_2);

#define VkglTestCase_027928_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_027928_2 "class_32_bits.rg16i_rgb10_a2.renderbuffer_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027928, VkglTestCase_027928_1, VkglTestCase_027928_2);

#define VkglTestCase_027929_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_027929_2 "class_32_bits.rg16i_rgb10_a2.renderbuffer_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027929, VkglTestCase_027929_1, VkglTestCase_027929_2);

#define VkglTestCase_027930_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_027930_2 "wclass_32_bits.rg16i_rgb10_a2.renderbuffer_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027930, VkglTestCase_027930_1, VkglTestCase_027930_2);

#define VkglTestCase_027931_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_027931_2 "ss_32_bits.rg16i_rgb10_a2.renderbuffer_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027931, VkglTestCase_027931_1, VkglTestCase_027931_2);

#define VkglTestCase_027932_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_027932_2 "ass_32_bits.rg16i_rgb10_a2.renderbuffer_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027932, VkglTestCase_027932_1, VkglTestCase_027932_2);
