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

#define VkglTestCase_026640_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_026640_2 "wclass_32_bits.r32f_rgb10_a2ui.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026640, VkglTestCase_026640_1, VkglTestCase_026640_2);

#define VkglTestCase_026641_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_026641_2 "wclass_32_bits.r32f_rgb10_a2ui.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026641, VkglTestCase_026641_1, VkglTestCase_026641_2);

#define VkglTestCase_026642_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_026642_2 "ewclass_32_bits.r32f_rgb10_a2ui.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026642, VkglTestCase_026642_1, VkglTestCase_026642_2);

#define VkglTestCase_026643_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_026643_2 "ass_32_bits.r32f_rgb10_a2ui.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026643, VkglTestCase_026643_1, VkglTestCase_026643_2);

#define VkglTestCase_026644_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_026644_2 "lass_32_bits.r32f_rgb10_a2ui.texture2d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026644, VkglTestCase_026644_1, VkglTestCase_026644_2);

#define VkglTestCase_026645_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_026645_2 "wclass_32_bits.r32f_rgb10_a2ui.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026645, VkglTestCase_026645_1, VkglTestCase_026645_2);

#define VkglTestCase_026646_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_026646_2 "wclass_32_bits.r32f_rgb10_a2ui.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026646, VkglTestCase_026646_1, VkglTestCase_026646_2);

#define VkglTestCase_026647_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_026647_2 "ewclass_32_bits.r32f_rgb10_a2ui.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026647, VkglTestCase_026647_1, VkglTestCase_026647_2);

#define VkglTestCase_026648_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_026648_2 "ass_32_bits.r32f_rgb10_a2ui.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026648, VkglTestCase_026648_1, VkglTestCase_026648_2);

#define VkglTestCase_026649_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_026649_2 "lass_32_bits.r32f_rgb10_a2ui.texture3d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026649, VkglTestCase_026649_1, VkglTestCase_026649_2);

#define VkglTestCase_026650_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_026650_2 "ewclass_32_bits.r32f_rgb10_a2ui.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026650, VkglTestCase_026650_1, VkglTestCase_026650_2);

#define VkglTestCase_026651_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_026651_2 "ewclass_32_bits.r32f_rgb10_a2ui.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026651, VkglTestCase_026651_1, VkglTestCase_026651_2);

#define VkglTestCase_026652_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_026652_2 "iewclass_32_bits.r32f_rgb10_a2ui.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026652, VkglTestCase_026652_1, VkglTestCase_026652_2);

#define VkglTestCase_026653_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_026653_2 "lass_32_bits.r32f_rgb10_a2ui.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026653, VkglTestCase_026653_1, VkglTestCase_026653_2);

#define VkglTestCase_026654_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_026654_2 "class_32_bits.r32f_rgb10_a2ui.cubemap_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026654, VkglTestCase_026654_1, VkglTestCase_026654_2);

#define VkglTestCase_026655_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_026655_2 "ass_32_bits.r32f_rgb10_a2ui.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026655, VkglTestCase_026655_1, VkglTestCase_026655_2);

#define VkglTestCase_026656_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_026656_2 "ass_32_bits.r32f_rgb10_a2ui.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026656, VkglTestCase_026656_1, VkglTestCase_026656_2);

#define VkglTestCase_026657_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_026657_2 "lass_32_bits.r32f_rgb10_a2ui.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026657, VkglTestCase_026657_1, VkglTestCase_026657_2);

#define VkglTestCase_026658_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass"
#define VkglTestCase_026658_2 "_32_bits.r32f_rgb10_a2ui.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026658, VkglTestCase_026658_1, VkglTestCase_026658_2);

#define VkglTestCase_026659_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_026659_2 "s_32_bits.r32f_rgb10_a2ui.texture2d_array_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026659, VkglTestCase_026659_1, VkglTestCase_026659_2);
