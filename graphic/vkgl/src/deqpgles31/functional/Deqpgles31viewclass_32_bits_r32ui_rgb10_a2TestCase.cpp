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

#define VkglTestCase_027326_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_027326_2 "wclass_32_bits.r32ui_rgb10_a2.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027326, VkglTestCase_027326_1, VkglTestCase_027326_2);

#define VkglTestCase_027327_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_027327_2 "wclass_32_bits.r32ui_rgb10_a2.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027327, VkglTestCase_027327_1, VkglTestCase_027327_2);

#define VkglTestCase_027328_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_027328_2 "ewclass_32_bits.r32ui_rgb10_a2.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027328, VkglTestCase_027328_1, VkglTestCase_027328_2);

#define VkglTestCase_027329_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_027329_2 "ass_32_bits.r32ui_rgb10_a2.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027329, VkglTestCase_027329_1, VkglTestCase_027329_2);

#define VkglTestCase_027330_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_027330_2 "class_32_bits.r32ui_rgb10_a2.texture2d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027330, VkglTestCase_027330_1, VkglTestCase_027330_2);

#define VkglTestCase_027331_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_027331_2 "wclass_32_bits.r32ui_rgb10_a2.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027331, VkglTestCase_027331_1, VkglTestCase_027331_2);

#define VkglTestCase_027332_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_027332_2 "wclass_32_bits.r32ui_rgb10_a2.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027332, VkglTestCase_027332_1, VkglTestCase_027332_2);

#define VkglTestCase_027333_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_027333_2 "ewclass_32_bits.r32ui_rgb10_a2.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027333, VkglTestCase_027333_1, VkglTestCase_027333_2);

#define VkglTestCase_027334_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_027334_2 "ass_32_bits.r32ui_rgb10_a2.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027334, VkglTestCase_027334_1, VkglTestCase_027334_2);

#define VkglTestCase_027335_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_027335_2 "class_32_bits.r32ui_rgb10_a2.texture3d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027335, VkglTestCase_027335_1, VkglTestCase_027335_2);

#define VkglTestCase_027336_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_027336_2 "ewclass_32_bits.r32ui_rgb10_a2.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027336, VkglTestCase_027336_1, VkglTestCase_027336_2);

#define VkglTestCase_027337_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_027337_2 "ewclass_32_bits.r32ui_rgb10_a2.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027337, VkglTestCase_027337_1, VkglTestCase_027337_2);

#define VkglTestCase_027338_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_027338_2 "iewclass_32_bits.r32ui_rgb10_a2.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027338, VkglTestCase_027338_1, VkglTestCase_027338_2);

#define VkglTestCase_027339_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_027339_2 "lass_32_bits.r32ui_rgb10_a2.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027339, VkglTestCase_027339_1, VkglTestCase_027339_2);

#define VkglTestCase_027340_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_027340_2 "wclass_32_bits.r32ui_rgb10_a2.cubemap_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027340, VkglTestCase_027340_1, VkglTestCase_027340_2);

#define VkglTestCase_027341_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_027341_2 "ass_32_bits.r32ui_rgb10_a2.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027341, VkglTestCase_027341_1, VkglTestCase_027341_2);

#define VkglTestCase_027342_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_027342_2 "ass_32_bits.r32ui_rgb10_a2.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027342, VkglTestCase_027342_1, VkglTestCase_027342_2);

#define VkglTestCase_027343_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_027343_2 "lass_32_bits.r32ui_rgb10_a2.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027343, VkglTestCase_027343_1, VkglTestCase_027343_2);

#define VkglTestCase_027344_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass"
#define VkglTestCase_027344_2 "_32_bits.r32ui_rgb10_a2.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027344, VkglTestCase_027344_1, VkglTestCase_027344_2);

#define VkglTestCase_027345_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_027345_2 "ss_32_bits.r32ui_rgb10_a2.texture2d_array_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027345, VkglTestCase_027345_1, VkglTestCase_027345_2);

#define VkglTestCase_027346_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_027346_2 "class_32_bits.r32ui_rgb10_a2.renderbuffer_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027346, VkglTestCase_027346_1, VkglTestCase_027346_2);

#define VkglTestCase_027347_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_027347_2 "class_32_bits.r32ui_rgb10_a2.renderbuffer_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027347, VkglTestCase_027347_1, VkglTestCase_027347_2);

#define VkglTestCase_027348_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_027348_2 "wclass_32_bits.r32ui_rgb10_a2.renderbuffer_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027348, VkglTestCase_027348_1, VkglTestCase_027348_2);

#define VkglTestCase_027349_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_027349_2 "ss_32_bits.r32ui_rgb10_a2.renderbuffer_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027349, VkglTestCase_027349_1, VkglTestCase_027349_2);

#define VkglTestCase_027350_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_027350_2 "ass_32_bits.r32ui_rgb10_a2.renderbuffer_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027350, VkglTestCase_027350_1, VkglTestCase_027350_2);
