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

#define VkglTestCase_030655_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_030655_2 "lass_32_bits.srgb8_alpha8_r32ui.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030655, VkglTestCase_030655_1, VkglTestCase_030655_2);

#define VkglTestCase_030656_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_030656_2 "lass_32_bits.srgb8_alpha8_r32ui.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030656, VkglTestCase_030656_1, VkglTestCase_030656_2);

#define VkglTestCase_030657_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_030657_2 "class_32_bits.srgb8_alpha8_r32ui.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030657, VkglTestCase_030657_1, VkglTestCase_030657_2);

#define VkglTestCase_030658_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_030658_2 "s_32_bits.srgb8_alpha8_r32ui.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030658, VkglTestCase_030658_1, VkglTestCase_030658_2);

#define VkglTestCase_030659_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_030659_2 "ass_32_bits.srgb8_alpha8_r32ui.texture2d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030659, VkglTestCase_030659_1, VkglTestCase_030659_2);

#define VkglTestCase_030660_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_030660_2 "lass_32_bits.srgb8_alpha8_r32ui.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030660, VkglTestCase_030660_1, VkglTestCase_030660_2);

#define VkglTestCase_030661_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_030661_2 "lass_32_bits.srgb8_alpha8_r32ui.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030661, VkglTestCase_030661_1, VkglTestCase_030661_2);

#define VkglTestCase_030662_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_030662_2 "class_32_bits.srgb8_alpha8_r32ui.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030662, VkglTestCase_030662_1, VkglTestCase_030662_2);

#define VkglTestCase_030663_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_030663_2 "s_32_bits.srgb8_alpha8_r32ui.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030663, VkglTestCase_030663_1, VkglTestCase_030663_2);

#define VkglTestCase_030664_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_030664_2 "ass_32_bits.srgb8_alpha8_r32ui.texture3d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030664, VkglTestCase_030664_1, VkglTestCase_030664_2);

#define VkglTestCase_030665_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_030665_2 "class_32_bits.srgb8_alpha8_r32ui.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030665, VkglTestCase_030665_1, VkglTestCase_030665_2);

#define VkglTestCase_030666_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_030666_2 "class_32_bits.srgb8_alpha8_r32ui.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030666, VkglTestCase_030666_1, VkglTestCase_030666_2);

#define VkglTestCase_030667_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_030667_2 "wclass_32_bits.srgb8_alpha8_r32ui.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030667, VkglTestCase_030667_1, VkglTestCase_030667_2);

#define VkglTestCase_030668_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_030668_2 "ss_32_bits.srgb8_alpha8_r32ui.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030668, VkglTestCase_030668_1, VkglTestCase_030668_2);

#define VkglTestCase_030669_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_030669_2 "lass_32_bits.srgb8_alpha8_r32ui.cubemap_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030669, VkglTestCase_030669_1, VkglTestCase_030669_2);

#define VkglTestCase_030670_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_030670_2 "s_32_bits.srgb8_alpha8_r32ui.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030670, VkglTestCase_030670_1, VkglTestCase_030670_2);

#define VkglTestCase_030671_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_030671_2 "s_32_bits.srgb8_alpha8_r32ui.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030671, VkglTestCase_030671_1, VkglTestCase_030671_2);

#define VkglTestCase_030672_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_030672_2 "ss_32_bits.srgb8_alpha8_r32ui.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030672, VkglTestCase_030672_1, VkglTestCase_030672_2);

#define VkglTestCase_030673_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_3"
#define VkglTestCase_030673_2 "2_bits.srgb8_alpha8_r32ui.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030673, VkglTestCase_030673_1, VkglTestCase_030673_2);

#define VkglTestCase_030674_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass"
#define VkglTestCase_030674_2 "_32_bits.srgb8_alpha8_r32ui.texture2d_array_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030674, VkglTestCase_030674_1, VkglTestCase_030674_2);

#define VkglTestCase_030675_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_030675_2 "ass_32_bits.srgb8_alpha8_r32ui.renderbuffer_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030675, VkglTestCase_030675_1, VkglTestCase_030675_2);

#define VkglTestCase_030676_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_030676_2 "ass_32_bits.srgb8_alpha8_r32ui.renderbuffer_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030676, VkglTestCase_030676_1, VkglTestCase_030676_2);

#define VkglTestCase_030677_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_030677_2 "lass_32_bits.srgb8_alpha8_r32ui.renderbuffer_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030677, VkglTestCase_030677_1, VkglTestCase_030677_2);

#define VkglTestCase_030678_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass"
#define VkglTestCase_030678_2 "_32_bits.srgb8_alpha8_r32ui.renderbuffer_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030678, VkglTestCase_030678_1, VkglTestCase_030678_2);

#define VkglTestCase_030679_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_030679_2 "s_32_bits.srgb8_alpha8_r32ui.renderbuffer_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030679, VkglTestCase_030679_1, VkglTestCase_030679_2);
