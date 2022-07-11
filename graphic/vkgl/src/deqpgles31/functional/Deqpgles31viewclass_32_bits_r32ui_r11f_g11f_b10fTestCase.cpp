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

#define VkglTestCase_027281_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_027281_2 "ass_32_bits.r32ui_r11f_g11f_b10f.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027281, VkglTestCase_027281_1, VkglTestCase_027281_2);

#define VkglTestCase_027282_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_027282_2 "ass_32_bits.r32ui_r11f_g11f_b10f.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027282, VkglTestCase_027282_1, VkglTestCase_027282_2);

#define VkglTestCase_027283_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_027283_2 "lass_32_bits.r32ui_r11f_g11f_b10f.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027283, VkglTestCase_027283_1, VkglTestCase_027283_2);

#define VkglTestCase_027284_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass"
#define VkglTestCase_027284_2 "_32_bits.r32ui_r11f_g11f_b10f.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027284, VkglTestCase_027284_1, VkglTestCase_027284_2);

#define VkglTestCase_027285_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_027285_2 "ass_32_bits.r32ui_r11f_g11f_b10f.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027285, VkglTestCase_027285_1, VkglTestCase_027285_2);

#define VkglTestCase_027286_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_027286_2 "ass_32_bits.r32ui_r11f_g11f_b10f.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027286, VkglTestCase_027286_1, VkglTestCase_027286_2);

#define VkglTestCase_027287_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_027287_2 "lass_32_bits.r32ui_r11f_g11f_b10f.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027287, VkglTestCase_027287_1, VkglTestCase_027287_2);

#define VkglTestCase_027288_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass"
#define VkglTestCase_027288_2 "_32_bits.r32ui_r11f_g11f_b10f.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027288, VkglTestCase_027288_1, VkglTestCase_027288_2);

#define VkglTestCase_027289_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_027289_2 "lass_32_bits.r32ui_r11f_g11f_b10f.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027289, VkglTestCase_027289_1, VkglTestCase_027289_2);

#define VkglTestCase_027290_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_027290_2 "lass_32_bits.r32ui_r11f_g11f_b10f.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027290, VkglTestCase_027290_1, VkglTestCase_027290_2);

#define VkglTestCase_027291_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_027291_2 "class_32_bits.r32ui_r11f_g11f_b10f.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027291, VkglTestCase_027291_1, VkglTestCase_027291_2);

#define VkglTestCase_027292_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_027292_2 "s_32_bits.r32ui_r11f_g11f_b10f.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027292, VkglTestCase_027292_1, VkglTestCase_027292_2);

#define VkglTestCase_027293_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass"
#define VkglTestCase_027293_2 "_32_bits.r32ui_r11f_g11f_b10f.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027293, VkglTestCase_027293_1, VkglTestCase_027293_2);

#define VkglTestCase_027294_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass"
#define VkglTestCase_027294_2 "_32_bits.r32ui_r11f_g11f_b10f.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027294, VkglTestCase_027294_1, VkglTestCase_027294_2);

#define VkglTestCase_027295_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_027295_2 "s_32_bits.r32ui_r11f_g11f_b10f.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027295, VkglTestCase_027295_1, VkglTestCase_027295_2);

#define VkglTestCase_027296_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_32"
#define VkglTestCase_027296_2 "_bits.r32ui_r11f_g11f_b10f.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027296, VkglTestCase_027296_1, VkglTestCase_027296_2);

#define VkglTestCase_027297_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_027297_2 "ss_32_bits.r32ui_r11f_g11f_b10f.renderbuffer_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027297, VkglTestCase_027297_1, VkglTestCase_027297_2);

#define VkglTestCase_027298_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_027298_2 "ss_32_bits.r32ui_r11f_g11f_b10f.renderbuffer_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027298, VkglTestCase_027298_1, VkglTestCase_027298_2);

#define VkglTestCase_027299_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_027299_2 "ass_32_bits.r32ui_r11f_g11f_b10f.renderbuffer_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027299, VkglTestCase_027299_1, VkglTestCase_027299_2);

#define VkglTestCase_027300_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_"
#define VkglTestCase_027300_2 "32_bits.r32ui_r11f_g11f_b10f.renderbuffer_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027300, VkglTestCase_027300_1, VkglTestCase_027300_2);
