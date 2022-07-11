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

#define VkglTestCase_030725_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_030725_2 "lass_32_bits.srgb8_alpha8_rg16ui.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030725, VkglTestCase_030725_1, VkglTestCase_030725_2);

#define VkglTestCase_030726_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_030726_2 "lass_32_bits.srgb8_alpha8_rg16ui.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030726, VkglTestCase_030726_1, VkglTestCase_030726_2);

#define VkglTestCase_030727_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_030727_2 "class_32_bits.srgb8_alpha8_rg16ui.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030727, VkglTestCase_030727_1, VkglTestCase_030727_2);

#define VkglTestCase_030728_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_030728_2 "s_32_bits.srgb8_alpha8_rg16ui.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030728, VkglTestCase_030728_1, VkglTestCase_030728_2);

#define VkglTestCase_030729_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_030729_2 "ss_32_bits.srgb8_alpha8_rg16ui.texture2d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030729, VkglTestCase_030729_1, VkglTestCase_030729_2);

#define VkglTestCase_030730_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_030730_2 "lass_32_bits.srgb8_alpha8_rg16ui.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030730, VkglTestCase_030730_1, VkglTestCase_030730_2);

#define VkglTestCase_030731_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_030731_2 "lass_32_bits.srgb8_alpha8_rg16ui.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030731, VkglTestCase_030731_1, VkglTestCase_030731_2);

#define VkglTestCase_030732_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_030732_2 "class_32_bits.srgb8_alpha8_rg16ui.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030732, VkglTestCase_030732_1, VkglTestCase_030732_2);

#define VkglTestCase_030733_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_030733_2 "s_32_bits.srgb8_alpha8_rg16ui.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030733, VkglTestCase_030733_1, VkglTestCase_030733_2);

#define VkglTestCase_030734_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_030734_2 "ss_32_bits.srgb8_alpha8_rg16ui.texture3d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030734, VkglTestCase_030734_1, VkglTestCase_030734_2);

#define VkglTestCase_030735_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_030735_2 "class_32_bits.srgb8_alpha8_rg16ui.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030735, VkglTestCase_030735_1, VkglTestCase_030735_2);

#define VkglTestCase_030736_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_030736_2 "class_32_bits.srgb8_alpha8_rg16ui.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030736, VkglTestCase_030736_1, VkglTestCase_030736_2);

#define VkglTestCase_030737_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_030737_2 "wclass_32_bits.srgb8_alpha8_rg16ui.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030737, VkglTestCase_030737_1, VkglTestCase_030737_2);

#define VkglTestCase_030738_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_030738_2 "ss_32_bits.srgb8_alpha8_rg16ui.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030738, VkglTestCase_030738_1, VkglTestCase_030738_2);

#define VkglTestCase_030739_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_030739_2 "ass_32_bits.srgb8_alpha8_rg16ui.cubemap_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030739, VkglTestCase_030739_1, VkglTestCase_030739_2);

#define VkglTestCase_030740_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_030740_2 "s_32_bits.srgb8_alpha8_rg16ui.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030740, VkglTestCase_030740_1, VkglTestCase_030740_2);

#define VkglTestCase_030741_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_030741_2 "s_32_bits.srgb8_alpha8_rg16ui.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030741, VkglTestCase_030741_1, VkglTestCase_030741_2);

#define VkglTestCase_030742_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_030742_2 "ss_32_bits.srgb8_alpha8_rg16ui.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030742, VkglTestCase_030742_1, VkglTestCase_030742_2);

#define VkglTestCase_030743_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_3"
#define VkglTestCase_030743_2 "2_bits.srgb8_alpha8_rg16ui.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030743, VkglTestCase_030743_1, VkglTestCase_030743_2);

#define VkglTestCase_030744_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_"
#define VkglTestCase_030744_2 "32_bits.srgb8_alpha8_rg16ui.texture2d_array_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030744, VkglTestCase_030744_1, VkglTestCase_030744_2);

#define VkglTestCase_030745_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_030745_2 "ss_32_bits.srgb8_alpha8_rg16ui.renderbuffer_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030745, VkglTestCase_030745_1, VkglTestCase_030745_2);

#define VkglTestCase_030746_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_030746_2 "ss_32_bits.srgb8_alpha8_rg16ui.renderbuffer_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030746, VkglTestCase_030746_1, VkglTestCase_030746_2);

#define VkglTestCase_030747_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_030747_2 "ass_32_bits.srgb8_alpha8_rg16ui.renderbuffer_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030747, VkglTestCase_030747_1, VkglTestCase_030747_2);

#define VkglTestCase_030748_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_"
#define VkglTestCase_030748_2 "32_bits.srgb8_alpha8_rg16ui.renderbuffer_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030748, VkglTestCase_030748_1, VkglTestCase_030748_2);

#define VkglTestCase_030749_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_030749_2 "s_32_bits.srgb8_alpha8_rg16ui.renderbuffer_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030749, VkglTestCase_030749_1, VkglTestCase_030749_2);
