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

#define VkglTestCase_027863_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_027863_2 "ass_32_bits.rg16i_r11f_g11f_b10f.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027863, VkglTestCase_027863_1, VkglTestCase_027863_2);

#define VkglTestCase_027864_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_027864_2 "ass_32_bits.rg16i_r11f_g11f_b10f.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027864, VkglTestCase_027864_1, VkglTestCase_027864_2);

#define VkglTestCase_027865_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_027865_2 "lass_32_bits.rg16i_r11f_g11f_b10f.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027865, VkglTestCase_027865_1, VkglTestCase_027865_2);

#define VkglTestCase_027866_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass"
#define VkglTestCase_027866_2 "_32_bits.rg16i_r11f_g11f_b10f.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027866, VkglTestCase_027866_1, VkglTestCase_027866_2);

#define VkglTestCase_027867_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_027867_2 "ass_32_bits.rg16i_r11f_g11f_b10f.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027867, VkglTestCase_027867_1, VkglTestCase_027867_2);

#define VkglTestCase_027868_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_027868_2 "ass_32_bits.rg16i_r11f_g11f_b10f.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027868, VkglTestCase_027868_1, VkglTestCase_027868_2);

#define VkglTestCase_027869_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_027869_2 "lass_32_bits.rg16i_r11f_g11f_b10f.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027869, VkglTestCase_027869_1, VkglTestCase_027869_2);

#define VkglTestCase_027870_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass"
#define VkglTestCase_027870_2 "_32_bits.rg16i_r11f_g11f_b10f.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027870, VkglTestCase_027870_1, VkglTestCase_027870_2);

#define VkglTestCase_027871_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_027871_2 "lass_32_bits.rg16i_r11f_g11f_b10f.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027871, VkglTestCase_027871_1, VkglTestCase_027871_2);

#define VkglTestCase_027872_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_027872_2 "lass_32_bits.rg16i_r11f_g11f_b10f.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027872, VkglTestCase_027872_1, VkglTestCase_027872_2);

#define VkglTestCase_027873_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_027873_2 "class_32_bits.rg16i_r11f_g11f_b10f.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027873, VkglTestCase_027873_1, VkglTestCase_027873_2);

#define VkglTestCase_027874_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_027874_2 "s_32_bits.rg16i_r11f_g11f_b10f.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027874, VkglTestCase_027874_1, VkglTestCase_027874_2);

#define VkglTestCase_027875_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass"
#define VkglTestCase_027875_2 "_32_bits.rg16i_r11f_g11f_b10f.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027875, VkglTestCase_027875_1, VkglTestCase_027875_2);

#define VkglTestCase_027876_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass"
#define VkglTestCase_027876_2 "_32_bits.rg16i_r11f_g11f_b10f.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027876, VkglTestCase_027876_1, VkglTestCase_027876_2);

#define VkglTestCase_027877_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_027877_2 "s_32_bits.rg16i_r11f_g11f_b10f.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027877, VkglTestCase_027877_1, VkglTestCase_027877_2);

#define VkglTestCase_027878_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_32"
#define VkglTestCase_027878_2 "_bits.rg16i_r11f_g11f_b10f.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027878, VkglTestCase_027878_1, VkglTestCase_027878_2);

#define VkglTestCase_027879_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_027879_2 "ss_32_bits.rg16i_r11f_g11f_b10f.renderbuffer_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027879, VkglTestCase_027879_1, VkglTestCase_027879_2);

#define VkglTestCase_027880_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_027880_2 "ss_32_bits.rg16i_r11f_g11f_b10f.renderbuffer_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027880, VkglTestCase_027880_1, VkglTestCase_027880_2);

#define VkglTestCase_027881_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_027881_2 "ass_32_bits.rg16i_r11f_g11f_b10f.renderbuffer_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027881, VkglTestCase_027881_1, VkglTestCase_027881_2);

#define VkglTestCase_027882_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_"
#define VkglTestCase_027882_2 "32_bits.rg16i_r11f_g11f_b10f.renderbuffer_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027882, VkglTestCase_027882_1, VkglTestCase_027882_2);
