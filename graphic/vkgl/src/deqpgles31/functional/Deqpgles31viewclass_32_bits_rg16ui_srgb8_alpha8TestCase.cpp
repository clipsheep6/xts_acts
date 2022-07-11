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

#define VkglTestCase_028303_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_028303_2 "lass_32_bits.rg16ui_srgb8_alpha8.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028303, VkglTestCase_028303_1, VkglTestCase_028303_2);

#define VkglTestCase_028304_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_028304_2 "lass_32_bits.rg16ui_srgb8_alpha8.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028304, VkglTestCase_028304_1, VkglTestCase_028304_2);

#define VkglTestCase_028305_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_028305_2 "class_32_bits.rg16ui_srgb8_alpha8.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028305, VkglTestCase_028305_1, VkglTestCase_028305_2);

#define VkglTestCase_028306_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_028306_2 "s_32_bits.rg16ui_srgb8_alpha8.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028306, VkglTestCase_028306_1, VkglTestCase_028306_2);

#define VkglTestCase_028307_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_028307_2 "ss_32_bits.rg16ui_srgb8_alpha8.texture2d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028307, VkglTestCase_028307_1, VkglTestCase_028307_2);

#define VkglTestCase_028308_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_028308_2 "lass_32_bits.rg16ui_srgb8_alpha8.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028308, VkglTestCase_028308_1, VkglTestCase_028308_2);

#define VkglTestCase_028309_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_028309_2 "lass_32_bits.rg16ui_srgb8_alpha8.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028309, VkglTestCase_028309_1, VkglTestCase_028309_2);

#define VkglTestCase_028310_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_028310_2 "class_32_bits.rg16ui_srgb8_alpha8.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028310, VkglTestCase_028310_1, VkglTestCase_028310_2);

#define VkglTestCase_028311_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_028311_2 "s_32_bits.rg16ui_srgb8_alpha8.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028311, VkglTestCase_028311_1, VkglTestCase_028311_2);

#define VkglTestCase_028312_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_028312_2 "ss_32_bits.rg16ui_srgb8_alpha8.texture3d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028312, VkglTestCase_028312_1, VkglTestCase_028312_2);

#define VkglTestCase_028313_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_028313_2 "class_32_bits.rg16ui_srgb8_alpha8.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028313, VkglTestCase_028313_1, VkglTestCase_028313_2);

#define VkglTestCase_028314_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_028314_2 "class_32_bits.rg16ui_srgb8_alpha8.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028314, VkglTestCase_028314_1, VkglTestCase_028314_2);

#define VkglTestCase_028315_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_028315_2 "wclass_32_bits.rg16ui_srgb8_alpha8.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028315, VkglTestCase_028315_1, VkglTestCase_028315_2);

#define VkglTestCase_028316_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_028316_2 "ss_32_bits.rg16ui_srgb8_alpha8.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028316, VkglTestCase_028316_1, VkglTestCase_028316_2);

#define VkglTestCase_028317_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_028317_2 "ass_32_bits.rg16ui_srgb8_alpha8.cubemap_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028317, VkglTestCase_028317_1, VkglTestCase_028317_2);

#define VkglTestCase_028318_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_028318_2 "s_32_bits.rg16ui_srgb8_alpha8.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028318, VkglTestCase_028318_1, VkglTestCase_028318_2);

#define VkglTestCase_028319_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_028319_2 "s_32_bits.rg16ui_srgb8_alpha8.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028319, VkglTestCase_028319_1, VkglTestCase_028319_2);

#define VkglTestCase_028320_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_028320_2 "ss_32_bits.rg16ui_srgb8_alpha8.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028320, VkglTestCase_028320_1, VkglTestCase_028320_2);

#define VkglTestCase_028321_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_3"
#define VkglTestCase_028321_2 "2_bits.rg16ui_srgb8_alpha8.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028321, VkglTestCase_028321_1, VkglTestCase_028321_2);

#define VkglTestCase_028322_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_"
#define VkglTestCase_028322_2 "32_bits.rg16ui_srgb8_alpha8.texture2d_array_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028322, VkglTestCase_028322_1, VkglTestCase_028322_2);

#define VkglTestCase_028323_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_028323_2 "ss_32_bits.rg16ui_srgb8_alpha8.renderbuffer_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028323, VkglTestCase_028323_1, VkglTestCase_028323_2);

#define VkglTestCase_028324_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_028324_2 "ss_32_bits.rg16ui_srgb8_alpha8.renderbuffer_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028324, VkglTestCase_028324_1, VkglTestCase_028324_2);

#define VkglTestCase_028325_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_028325_2 "ass_32_bits.rg16ui_srgb8_alpha8.renderbuffer_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028325, VkglTestCase_028325_1, VkglTestCase_028325_2);

#define VkglTestCase_028326_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_"
#define VkglTestCase_028326_2 "32_bits.rg16ui_srgb8_alpha8.renderbuffer_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028326, VkglTestCase_028326_1, VkglTestCase_028326_2);

#define VkglTestCase_028327_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_028327_2 "s_32_bits.rg16ui_srgb8_alpha8.renderbuffer_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028327, VkglTestCase_028327_1, VkglTestCase_028327_2);
