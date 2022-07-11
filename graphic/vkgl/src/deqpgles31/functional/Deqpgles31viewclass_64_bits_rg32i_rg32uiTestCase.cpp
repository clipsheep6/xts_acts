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
#include "../ActsDeqpgles310026TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_025729_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_025729_2 "ewclass_64_bits.rg32i_rg32ui.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025729, VkglTestCase_025729_1, VkglTestCase_025729_2);

#define VkglTestCase_025730_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_025730_2 "ewclass_64_bits.rg32i_rg32ui.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025730, VkglTestCase_025730_1, VkglTestCase_025730_2);

#define VkglTestCase_025731_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_025731_2 "iewclass_64_bits.rg32i_rg32ui.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025731, VkglTestCase_025731_1, VkglTestCase_025731_2);

#define VkglTestCase_025732_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_025732_2 "lass_64_bits.rg32i_rg32ui.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025732, VkglTestCase_025732_1, VkglTestCase_025732_2);

#define VkglTestCase_025733_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_025733_2 "wclass_64_bits.rg32i_rg32ui.texture2d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025733, VkglTestCase_025733_1, VkglTestCase_025733_2);

#define VkglTestCase_025734_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_025734_2 "ewclass_64_bits.rg32i_rg32ui.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025734, VkglTestCase_025734_1, VkglTestCase_025734_2);

#define VkglTestCase_025735_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_025735_2 "ewclass_64_bits.rg32i_rg32ui.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025735, VkglTestCase_025735_1, VkglTestCase_025735_2);

#define VkglTestCase_025736_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_025736_2 "iewclass_64_bits.rg32i_rg32ui.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025736, VkglTestCase_025736_1, VkglTestCase_025736_2);

#define VkglTestCase_025737_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_025737_2 "lass_64_bits.rg32i_rg32ui.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025737, VkglTestCase_025737_1, VkglTestCase_025737_2);

#define VkglTestCase_025738_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_025738_2 "wclass_64_bits.rg32i_rg32ui.texture3d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025738, VkglTestCase_025738_1, VkglTestCase_025738_2);

#define VkglTestCase_025739_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_025739_2 "iewclass_64_bits.rg32i_rg32ui.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025739, VkglTestCase_025739_1, VkglTestCase_025739_2);

#define VkglTestCase_025740_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_025740_2 "iewclass_64_bits.rg32i_rg32ui.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025740, VkglTestCase_025740_1, VkglTestCase_025740_2);

#define VkglTestCase_025741_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_025741_2 "viewclass_64_bits.rg32i_rg32ui.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025741, VkglTestCase_025741_1, VkglTestCase_025741_2);

#define VkglTestCase_025742_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_025742_2 "class_64_bits.rg32i_rg32ui.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025742, VkglTestCase_025742_1, VkglTestCase_025742_2);

#define VkglTestCase_025743_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_025743_2 "ewclass_64_bits.rg32i_rg32ui.cubemap_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025743, VkglTestCase_025743_1, VkglTestCase_025743_2);

#define VkglTestCase_025744_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_025744_2 "lass_64_bits.rg32i_rg32ui.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025744, VkglTestCase_025744_1, VkglTestCase_025744_2);

#define VkglTestCase_025745_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_025745_2 "lass_64_bits.rg32i_rg32ui.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025745, VkglTestCase_025745_1, VkglTestCase_025745_2);

#define VkglTestCase_025746_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_025746_2 "class_64_bits.rg32i_rg32ui.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025746, VkglTestCase_025746_1, VkglTestCase_025746_2);

#define VkglTestCase_025747_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_025747_2 "s_64_bits.rg32i_rg32ui.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025747, VkglTestCase_025747_1, VkglTestCase_025747_2);

#define VkglTestCase_025748_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_025748_2 "ass_64_bits.rg32i_rg32ui.texture2d_array_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025748, VkglTestCase_025748_1, VkglTestCase_025748_2);

#define VkglTestCase_025749_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_025749_2 "wclass_64_bits.rg32i_rg32ui.renderbuffer_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025749, VkglTestCase_025749_1, VkglTestCase_025749_2);

#define VkglTestCase_025750_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_025750_2 "wclass_64_bits.rg32i_rg32ui.renderbuffer_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025750, VkglTestCase_025750_1, VkglTestCase_025750_2);

#define VkglTestCase_025751_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_025751_2 "ewclass_64_bits.rg32i_rg32ui.renderbuffer_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025751, VkglTestCase_025751_1, VkglTestCase_025751_2);

#define VkglTestCase_025752_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_025752_2 "ass_64_bits.rg32i_rg32ui.renderbuffer_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025752, VkglTestCase_025752_1, VkglTestCase_025752_2);

#define VkglTestCase_025753_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_025753_2 "lass_64_bits.rg32i_rg32ui.renderbuffer_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025753, VkglTestCase_025753_1, VkglTestCase_025753_2);
