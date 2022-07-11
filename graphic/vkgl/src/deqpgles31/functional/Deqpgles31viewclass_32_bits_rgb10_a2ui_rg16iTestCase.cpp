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
#include "../ActsDeqpgles310030TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_029720_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_029720_2 "class_32_bits.rgb10_a2ui_rg16i.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029720, VkglTestCase_029720_1, VkglTestCase_029720_2);

#define VkglTestCase_029721_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_029721_2 "class_32_bits.rgb10_a2ui_rg16i.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029721, VkglTestCase_029721_1, VkglTestCase_029721_2);

#define VkglTestCase_029722_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_029722_2 "wclass_32_bits.rgb10_a2ui_rg16i.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029722, VkglTestCase_029722_1, VkglTestCase_029722_2);

#define VkglTestCase_029723_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_029723_2 "ss_32_bits.rgb10_a2ui_rg16i.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029723, VkglTestCase_029723_1, VkglTestCase_029723_2);

#define VkglTestCase_029724_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_029724_2 "lass_32_bits.rgb10_a2ui_rg16i.texture2d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029724, VkglTestCase_029724_1, VkglTestCase_029724_2);

#define VkglTestCase_029725_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_029725_2 "class_32_bits.rgb10_a2ui_rg16i.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029725, VkglTestCase_029725_1, VkglTestCase_029725_2);

#define VkglTestCase_029726_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_029726_2 "class_32_bits.rgb10_a2ui_rg16i.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029726, VkglTestCase_029726_1, VkglTestCase_029726_2);

#define VkglTestCase_029727_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_029727_2 "wclass_32_bits.rgb10_a2ui_rg16i.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029727, VkglTestCase_029727_1, VkglTestCase_029727_2);

#define VkglTestCase_029728_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_029728_2 "ss_32_bits.rgb10_a2ui_rg16i.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029728, VkglTestCase_029728_1, VkglTestCase_029728_2);

#define VkglTestCase_029729_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_029729_2 "lass_32_bits.rgb10_a2ui_rg16i.texture3d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029729, VkglTestCase_029729_1, VkglTestCase_029729_2);

#define VkglTestCase_029730_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_029730_2 "wclass_32_bits.rgb10_a2ui_rg16i.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029730, VkglTestCase_029730_1, VkglTestCase_029730_2);

#define VkglTestCase_029731_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_029731_2 "wclass_32_bits.rgb10_a2ui_rg16i.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029731, VkglTestCase_029731_1, VkglTestCase_029731_2);

#define VkglTestCase_029732_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_029732_2 "ewclass_32_bits.rgb10_a2ui_rg16i.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029732, VkglTestCase_029732_1, VkglTestCase_029732_2);

#define VkglTestCase_029733_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_029733_2 "ass_32_bits.rgb10_a2ui_rg16i.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029733, VkglTestCase_029733_1, VkglTestCase_029733_2);

#define VkglTestCase_029734_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_029734_2 "class_32_bits.rgb10_a2ui_rg16i.cubemap_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029734, VkglTestCase_029734_1, VkglTestCase_029734_2);

#define VkglTestCase_029735_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_029735_2 "ss_32_bits.rgb10_a2ui_rg16i.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029735, VkglTestCase_029735_1, VkglTestCase_029735_2);

#define VkglTestCase_029736_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_029736_2 "ss_32_bits.rgb10_a2ui_rg16i.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029736, VkglTestCase_029736_1, VkglTestCase_029736_2);

#define VkglTestCase_029737_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_029737_2 "ass_32_bits.rgb10_a2ui_rg16i.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029737, VkglTestCase_029737_1, VkglTestCase_029737_2);

#define VkglTestCase_029738_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_"
#define VkglTestCase_029738_2 "32_bits.rgb10_a2ui_rg16i.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029738, VkglTestCase_029738_1, VkglTestCase_029738_2);

#define VkglTestCase_029739_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_029739_2 "s_32_bits.rgb10_a2ui_rg16i.texture2d_array_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029739, VkglTestCase_029739_1, VkglTestCase_029739_2);

#define VkglTestCase_029740_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_029740_2 "lass_32_bits.rgb10_a2ui_rg16i.renderbuffer_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029740, VkglTestCase_029740_1, VkglTestCase_029740_2);

#define VkglTestCase_029741_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_029741_2 "lass_32_bits.rgb10_a2ui_rg16i.renderbuffer_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029741, VkglTestCase_029741_1, VkglTestCase_029741_2);

#define VkglTestCase_029742_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_029742_2 "class_32_bits.rgb10_a2ui_rg16i.renderbuffer_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029742, VkglTestCase_029742_1, VkglTestCase_029742_2);

#define VkglTestCase_029743_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_029743_2 "s_32_bits.rgb10_a2ui_rg16i.renderbuffer_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029743, VkglTestCase_029743_1, VkglTestCase_029743_2);

#define VkglTestCase_029744_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_029744_2 "ss_32_bits.rgb10_a2ui_rg16i.renderbuffer_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029744, VkglTestCase_029744_1, VkglTestCase_029744_2);
