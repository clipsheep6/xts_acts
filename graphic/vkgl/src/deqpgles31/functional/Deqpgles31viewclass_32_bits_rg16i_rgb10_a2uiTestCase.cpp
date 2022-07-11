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

#define VkglTestCase_027883_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_027883_2 "class_32_bits.rg16i_rgb10_a2ui.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027883, VkglTestCase_027883_1, VkglTestCase_027883_2);

#define VkglTestCase_027884_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_027884_2 "class_32_bits.rg16i_rgb10_a2ui.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027884, VkglTestCase_027884_1, VkglTestCase_027884_2);

#define VkglTestCase_027885_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_027885_2 "wclass_32_bits.rg16i_rgb10_a2ui.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027885, VkglTestCase_027885_1, VkglTestCase_027885_2);

#define VkglTestCase_027886_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_027886_2 "ss_32_bits.rg16i_rgb10_a2ui.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027886, VkglTestCase_027886_1, VkglTestCase_027886_2);

#define VkglTestCase_027887_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_027887_2 "lass_32_bits.rg16i_rgb10_a2ui.texture2d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027887, VkglTestCase_027887_1, VkglTestCase_027887_2);

#define VkglTestCase_027888_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_027888_2 "class_32_bits.rg16i_rgb10_a2ui.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027888, VkglTestCase_027888_1, VkglTestCase_027888_2);

#define VkglTestCase_027889_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_027889_2 "class_32_bits.rg16i_rgb10_a2ui.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027889, VkglTestCase_027889_1, VkglTestCase_027889_2);

#define VkglTestCase_027890_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_027890_2 "wclass_32_bits.rg16i_rgb10_a2ui.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027890, VkglTestCase_027890_1, VkglTestCase_027890_2);

#define VkglTestCase_027891_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_027891_2 "ss_32_bits.rg16i_rgb10_a2ui.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027891, VkglTestCase_027891_1, VkglTestCase_027891_2);

#define VkglTestCase_027892_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_027892_2 "lass_32_bits.rg16i_rgb10_a2ui.texture3d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027892, VkglTestCase_027892_1, VkglTestCase_027892_2);

#define VkglTestCase_027893_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_027893_2 "wclass_32_bits.rg16i_rgb10_a2ui.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027893, VkglTestCase_027893_1, VkglTestCase_027893_2);

#define VkglTestCase_027894_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_027894_2 "wclass_32_bits.rg16i_rgb10_a2ui.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027894, VkglTestCase_027894_1, VkglTestCase_027894_2);

#define VkglTestCase_027895_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_027895_2 "ewclass_32_bits.rg16i_rgb10_a2ui.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027895, VkglTestCase_027895_1, VkglTestCase_027895_2);

#define VkglTestCase_027896_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_027896_2 "ass_32_bits.rg16i_rgb10_a2ui.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027896, VkglTestCase_027896_1, VkglTestCase_027896_2);

#define VkglTestCase_027897_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_027897_2 "class_32_bits.rg16i_rgb10_a2ui.cubemap_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027897, VkglTestCase_027897_1, VkglTestCase_027897_2);

#define VkglTestCase_027898_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_027898_2 "ss_32_bits.rg16i_rgb10_a2ui.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027898, VkglTestCase_027898_1, VkglTestCase_027898_2);

#define VkglTestCase_027899_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_027899_2 "ss_32_bits.rg16i_rgb10_a2ui.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027899, VkglTestCase_027899_1, VkglTestCase_027899_2);

#define VkglTestCase_027900_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_027900_2 "ass_32_bits.rg16i_rgb10_a2ui.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027900, VkglTestCase_027900_1, VkglTestCase_027900_2);

#define VkglTestCase_027901_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_"
#define VkglTestCase_027901_2 "32_bits.rg16i_rgb10_a2ui.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027901, VkglTestCase_027901_1, VkglTestCase_027901_2);

#define VkglTestCase_027902_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_027902_2 "s_32_bits.rg16i_rgb10_a2ui.texture2d_array_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027902, VkglTestCase_027902_1, VkglTestCase_027902_2);

#define VkglTestCase_027903_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_027903_2 "lass_32_bits.rg16i_rgb10_a2ui.renderbuffer_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027903, VkglTestCase_027903_1, VkglTestCase_027903_2);

#define VkglTestCase_027904_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_027904_2 "lass_32_bits.rg16i_rgb10_a2ui.renderbuffer_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027904, VkglTestCase_027904_1, VkglTestCase_027904_2);

#define VkglTestCase_027905_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_027905_2 "class_32_bits.rg16i_rgb10_a2ui.renderbuffer_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027905, VkglTestCase_027905_1, VkglTestCase_027905_2);

#define VkglTestCase_027906_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_027906_2 "s_32_bits.rg16i_rgb10_a2ui.renderbuffer_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027906, VkglTestCase_027906_1, VkglTestCase_027906_2);

#define VkglTestCase_027907_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_027907_2 "ss_32_bits.rg16i_rgb10_a2ui.renderbuffer_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027907, VkglTestCase_027907_1, VkglTestCase_027907_2);
