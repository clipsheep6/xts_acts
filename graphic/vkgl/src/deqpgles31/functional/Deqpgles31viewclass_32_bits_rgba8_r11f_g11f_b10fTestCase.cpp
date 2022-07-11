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

#define VkglTestCase_028563_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_028563_2 "ass_32_bits.rgba8_r11f_g11f_b10f.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028563, VkglTestCase_028563_1, VkglTestCase_028563_2);

#define VkglTestCase_028564_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_028564_2 "ass_32_bits.rgba8_r11f_g11f_b10f.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028564, VkglTestCase_028564_1, VkglTestCase_028564_2);

#define VkglTestCase_028565_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_028565_2 "lass_32_bits.rgba8_r11f_g11f_b10f.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028565, VkglTestCase_028565_1, VkglTestCase_028565_2);

#define VkglTestCase_028566_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass"
#define VkglTestCase_028566_2 "_32_bits.rgba8_r11f_g11f_b10f.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028566, VkglTestCase_028566_1, VkglTestCase_028566_2);

#define VkglTestCase_028567_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_028567_2 "ass_32_bits.rgba8_r11f_g11f_b10f.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028567, VkglTestCase_028567_1, VkglTestCase_028567_2);

#define VkglTestCase_028568_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_028568_2 "ass_32_bits.rgba8_r11f_g11f_b10f.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028568, VkglTestCase_028568_1, VkglTestCase_028568_2);

#define VkglTestCase_028569_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_028569_2 "lass_32_bits.rgba8_r11f_g11f_b10f.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028569, VkglTestCase_028569_1, VkglTestCase_028569_2);

#define VkglTestCase_028570_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass"
#define VkglTestCase_028570_2 "_32_bits.rgba8_r11f_g11f_b10f.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028570, VkglTestCase_028570_1, VkglTestCase_028570_2);

#define VkglTestCase_028571_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_028571_2 "lass_32_bits.rgba8_r11f_g11f_b10f.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028571, VkglTestCase_028571_1, VkglTestCase_028571_2);

#define VkglTestCase_028572_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_028572_2 "lass_32_bits.rgba8_r11f_g11f_b10f.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028572, VkglTestCase_028572_1, VkglTestCase_028572_2);

#define VkglTestCase_028573_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_028573_2 "class_32_bits.rgba8_r11f_g11f_b10f.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028573, VkglTestCase_028573_1, VkglTestCase_028573_2);

#define VkglTestCase_028574_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_028574_2 "s_32_bits.rgba8_r11f_g11f_b10f.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028574, VkglTestCase_028574_1, VkglTestCase_028574_2);

#define VkglTestCase_028575_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass"
#define VkglTestCase_028575_2 "_32_bits.rgba8_r11f_g11f_b10f.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028575, VkglTestCase_028575_1, VkglTestCase_028575_2);

#define VkglTestCase_028576_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass"
#define VkglTestCase_028576_2 "_32_bits.rgba8_r11f_g11f_b10f.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028576, VkglTestCase_028576_1, VkglTestCase_028576_2);

#define VkglTestCase_028577_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_028577_2 "s_32_bits.rgba8_r11f_g11f_b10f.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028577, VkglTestCase_028577_1, VkglTestCase_028577_2);

#define VkglTestCase_028578_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_32"
#define VkglTestCase_028578_2 "_bits.rgba8_r11f_g11f_b10f.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028578, VkglTestCase_028578_1, VkglTestCase_028578_2);

#define VkglTestCase_028579_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_028579_2 "ss_32_bits.rgba8_r11f_g11f_b10f.renderbuffer_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028579, VkglTestCase_028579_1, VkglTestCase_028579_2);

#define VkglTestCase_028580_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_028580_2 "ss_32_bits.rgba8_r11f_g11f_b10f.renderbuffer_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028580, VkglTestCase_028580_1, VkglTestCase_028580_2);

#define VkglTestCase_028581_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_028581_2 "ass_32_bits.rgba8_r11f_g11f_b10f.renderbuffer_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028581, VkglTestCase_028581_1, VkglTestCase_028581_2);

#define VkglTestCase_028582_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_"
#define VkglTestCase_028582_2 "32_bits.rgba8_r11f_g11f_b10f.renderbuffer_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028582, VkglTestCase_028582_1, VkglTestCase_028582_2);
