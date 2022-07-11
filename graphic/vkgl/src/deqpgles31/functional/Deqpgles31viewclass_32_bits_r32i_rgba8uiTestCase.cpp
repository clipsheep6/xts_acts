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
#include "../ActsDeqpgles310027TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_026906_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_026906_2 "ewclass_32_bits.r32i_rgba8ui.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026906, VkglTestCase_026906_1, VkglTestCase_026906_2);

#define VkglTestCase_026907_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_026907_2 "ewclass_32_bits.r32i_rgba8ui.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026907, VkglTestCase_026907_1, VkglTestCase_026907_2);

#define VkglTestCase_026908_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_026908_2 "iewclass_32_bits.r32i_rgba8ui.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026908, VkglTestCase_026908_1, VkglTestCase_026908_2);

#define VkglTestCase_026909_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_026909_2 "lass_32_bits.r32i_rgba8ui.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026909, VkglTestCase_026909_1, VkglTestCase_026909_2);

#define VkglTestCase_026910_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_026910_2 "wclass_32_bits.r32i_rgba8ui.texture2d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026910, VkglTestCase_026910_1, VkglTestCase_026910_2);

#define VkglTestCase_026911_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_026911_2 "ewclass_32_bits.r32i_rgba8ui.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026911, VkglTestCase_026911_1, VkglTestCase_026911_2);

#define VkglTestCase_026912_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_026912_2 "ewclass_32_bits.r32i_rgba8ui.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026912, VkglTestCase_026912_1, VkglTestCase_026912_2);

#define VkglTestCase_026913_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_026913_2 "iewclass_32_bits.r32i_rgba8ui.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026913, VkglTestCase_026913_1, VkglTestCase_026913_2);

#define VkglTestCase_026914_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_026914_2 "lass_32_bits.r32i_rgba8ui.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026914, VkglTestCase_026914_1, VkglTestCase_026914_2);

#define VkglTestCase_026915_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_026915_2 "wclass_32_bits.r32i_rgba8ui.texture3d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026915, VkglTestCase_026915_1, VkglTestCase_026915_2);

#define VkglTestCase_026916_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_026916_2 "iewclass_32_bits.r32i_rgba8ui.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026916, VkglTestCase_026916_1, VkglTestCase_026916_2);

#define VkglTestCase_026917_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_026917_2 "iewclass_32_bits.r32i_rgba8ui.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026917, VkglTestCase_026917_1, VkglTestCase_026917_2);

#define VkglTestCase_026918_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_026918_2 "viewclass_32_bits.r32i_rgba8ui.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026918, VkglTestCase_026918_1, VkglTestCase_026918_2);

#define VkglTestCase_026919_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_026919_2 "class_32_bits.r32i_rgba8ui.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026919, VkglTestCase_026919_1, VkglTestCase_026919_2);

#define VkglTestCase_026920_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_026920_2 "ewclass_32_bits.r32i_rgba8ui.cubemap_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026920, VkglTestCase_026920_1, VkglTestCase_026920_2);

#define VkglTestCase_026921_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_026921_2 "lass_32_bits.r32i_rgba8ui.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026921, VkglTestCase_026921_1, VkglTestCase_026921_2);

#define VkglTestCase_026922_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_026922_2 "lass_32_bits.r32i_rgba8ui.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026922, VkglTestCase_026922_1, VkglTestCase_026922_2);

#define VkglTestCase_026923_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_026923_2 "class_32_bits.r32i_rgba8ui.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026923, VkglTestCase_026923_1, VkglTestCase_026923_2);

#define VkglTestCase_026924_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_026924_2 "s_32_bits.r32i_rgba8ui.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026924, VkglTestCase_026924_1, VkglTestCase_026924_2);

#define VkglTestCase_026925_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_026925_2 "ass_32_bits.r32i_rgba8ui.texture2d_array_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026925, VkglTestCase_026925_1, VkglTestCase_026925_2);

#define VkglTestCase_026926_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_026926_2 "wclass_32_bits.r32i_rgba8ui.renderbuffer_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026926, VkglTestCase_026926_1, VkglTestCase_026926_2);

#define VkglTestCase_026927_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_026927_2 "wclass_32_bits.r32i_rgba8ui.renderbuffer_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026927, VkglTestCase_026927_1, VkglTestCase_026927_2);

#define VkglTestCase_026928_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_026928_2 "ewclass_32_bits.r32i_rgba8ui.renderbuffer_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026928, VkglTestCase_026928_1, VkglTestCase_026928_2);

#define VkglTestCase_026929_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_026929_2 "ass_32_bits.r32i_rgba8ui.renderbuffer_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026929, VkglTestCase_026929_1, VkglTestCase_026929_2);

#define VkglTestCase_026930_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_026930_2 "lass_32_bits.r32i_rgba8ui.renderbuffer_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026930, VkglTestCase_026930_1, VkglTestCase_026930_2);
