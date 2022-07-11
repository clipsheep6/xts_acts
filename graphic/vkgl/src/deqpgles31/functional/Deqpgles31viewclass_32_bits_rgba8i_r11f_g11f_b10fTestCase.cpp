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
#include "../ActsDeqpgles310029TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_028913_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_028913_2 "ass_32_bits.rgba8i_r11f_g11f_b10f.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028913, VkglTestCase_028913_1, VkglTestCase_028913_2);

#define VkglTestCase_028914_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_028914_2 "ass_32_bits.rgba8i_r11f_g11f_b10f.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028914, VkglTestCase_028914_1, VkglTestCase_028914_2);

#define VkglTestCase_028915_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_028915_2 "lass_32_bits.rgba8i_r11f_g11f_b10f.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028915, VkglTestCase_028915_1, VkglTestCase_028915_2);

#define VkglTestCase_028916_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass"
#define VkglTestCase_028916_2 "_32_bits.rgba8i_r11f_g11f_b10f.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028916, VkglTestCase_028916_1, VkglTestCase_028916_2);

#define VkglTestCase_028917_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_028917_2 "ass_32_bits.rgba8i_r11f_g11f_b10f.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028917, VkglTestCase_028917_1, VkglTestCase_028917_2);

#define VkglTestCase_028918_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_028918_2 "ass_32_bits.rgba8i_r11f_g11f_b10f.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028918, VkglTestCase_028918_1, VkglTestCase_028918_2);

#define VkglTestCase_028919_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_028919_2 "lass_32_bits.rgba8i_r11f_g11f_b10f.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028919, VkglTestCase_028919_1, VkglTestCase_028919_2);

#define VkglTestCase_028920_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass"
#define VkglTestCase_028920_2 "_32_bits.rgba8i_r11f_g11f_b10f.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028920, VkglTestCase_028920_1, VkglTestCase_028920_2);

#define VkglTestCase_028921_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_028921_2 "lass_32_bits.rgba8i_r11f_g11f_b10f.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028921, VkglTestCase_028921_1, VkglTestCase_028921_2);

#define VkglTestCase_028922_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_028922_2 "lass_32_bits.rgba8i_r11f_g11f_b10f.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028922, VkglTestCase_028922_1, VkglTestCase_028922_2);

#define VkglTestCase_028923_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_028923_2 "class_32_bits.rgba8i_r11f_g11f_b10f.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028923, VkglTestCase_028923_1, VkglTestCase_028923_2);

#define VkglTestCase_028924_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_028924_2 "s_32_bits.rgba8i_r11f_g11f_b10f.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028924, VkglTestCase_028924_1, VkglTestCase_028924_2);

#define VkglTestCase_028925_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass"
#define VkglTestCase_028925_2 "_32_bits.rgba8i_r11f_g11f_b10f.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028925, VkglTestCase_028925_1, VkglTestCase_028925_2);

#define VkglTestCase_028926_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass"
#define VkglTestCase_028926_2 "_32_bits.rgba8i_r11f_g11f_b10f.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028926, VkglTestCase_028926_1, VkglTestCase_028926_2);

#define VkglTestCase_028927_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_028927_2 "s_32_bits.rgba8i_r11f_g11f_b10f.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028927, VkglTestCase_028927_1, VkglTestCase_028927_2);

#define VkglTestCase_028928_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_32"
#define VkglTestCase_028928_2 "_bits.rgba8i_r11f_g11f_b10f.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028928, VkglTestCase_028928_1, VkglTestCase_028928_2);

#define VkglTestCase_028929_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_028929_2 "s_32_bits.rgba8i_r11f_g11f_b10f.renderbuffer_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028929, VkglTestCase_028929_1, VkglTestCase_028929_2);

#define VkglTestCase_028930_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_028930_2 "s_32_bits.rgba8i_r11f_g11f_b10f.renderbuffer_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028930, VkglTestCase_028930_1, VkglTestCase_028930_2);

#define VkglTestCase_028931_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_028931_2 "ss_32_bits.rgba8i_r11f_g11f_b10f.renderbuffer_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028931, VkglTestCase_028931_1, VkglTestCase_028931_2);

#define VkglTestCase_028932_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_3"
#define VkglTestCase_028932_2 "2_bits.rgba8i_r11f_g11f_b10f.renderbuffer_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028932, VkglTestCase_028932_1, VkglTestCase_028932_2);
