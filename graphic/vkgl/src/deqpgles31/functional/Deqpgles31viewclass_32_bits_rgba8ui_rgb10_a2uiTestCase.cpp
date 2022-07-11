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

#define VkglTestCase_029283_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_029283_2 "lass_32_bits.rgba8ui_rgb10_a2ui.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029283, VkglTestCase_029283_1, VkglTestCase_029283_2);

#define VkglTestCase_029284_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_029284_2 "lass_32_bits.rgba8ui_rgb10_a2ui.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029284, VkglTestCase_029284_1, VkglTestCase_029284_2);

#define VkglTestCase_029285_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_029285_2 "class_32_bits.rgba8ui_rgb10_a2ui.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029285, VkglTestCase_029285_1, VkglTestCase_029285_2);

#define VkglTestCase_029286_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_029286_2 "s_32_bits.rgba8ui_rgb10_a2ui.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029286, VkglTestCase_029286_1, VkglTestCase_029286_2);

#define VkglTestCase_029287_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_029287_2 "ass_32_bits.rgba8ui_rgb10_a2ui.texture2d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029287, VkglTestCase_029287_1, VkglTestCase_029287_2);

#define VkglTestCase_029288_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_029288_2 "lass_32_bits.rgba8ui_rgb10_a2ui.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029288, VkglTestCase_029288_1, VkglTestCase_029288_2);

#define VkglTestCase_029289_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_029289_2 "lass_32_bits.rgba8ui_rgb10_a2ui.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029289, VkglTestCase_029289_1, VkglTestCase_029289_2);

#define VkglTestCase_029290_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_029290_2 "class_32_bits.rgba8ui_rgb10_a2ui.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029290, VkglTestCase_029290_1, VkglTestCase_029290_2);

#define VkglTestCase_029291_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_029291_2 "s_32_bits.rgba8ui_rgb10_a2ui.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029291, VkglTestCase_029291_1, VkglTestCase_029291_2);

#define VkglTestCase_029292_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_029292_2 "ass_32_bits.rgba8ui_rgb10_a2ui.texture3d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029292, VkglTestCase_029292_1, VkglTestCase_029292_2);

#define VkglTestCase_029293_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_029293_2 "class_32_bits.rgba8ui_rgb10_a2ui.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029293, VkglTestCase_029293_1, VkglTestCase_029293_2);

#define VkglTestCase_029294_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_029294_2 "class_32_bits.rgba8ui_rgb10_a2ui.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029294, VkglTestCase_029294_1, VkglTestCase_029294_2);

#define VkglTestCase_029295_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_029295_2 "wclass_32_bits.rgba8ui_rgb10_a2ui.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029295, VkglTestCase_029295_1, VkglTestCase_029295_2);

#define VkglTestCase_029296_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_029296_2 "ss_32_bits.rgba8ui_rgb10_a2ui.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029296, VkglTestCase_029296_1, VkglTestCase_029296_2);

#define VkglTestCase_029297_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_029297_2 "lass_32_bits.rgba8ui_rgb10_a2ui.cubemap_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029297, VkglTestCase_029297_1, VkglTestCase_029297_2);

#define VkglTestCase_029298_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_029298_2 "s_32_bits.rgba8ui_rgb10_a2ui.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029298, VkglTestCase_029298_1, VkglTestCase_029298_2);

#define VkglTestCase_029299_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_029299_2 "s_32_bits.rgba8ui_rgb10_a2ui.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029299, VkglTestCase_029299_1, VkglTestCase_029299_2);

#define VkglTestCase_029300_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_029300_2 "ss_32_bits.rgba8ui_rgb10_a2ui.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029300, VkglTestCase_029300_1, VkglTestCase_029300_2);

#define VkglTestCase_029301_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_3"
#define VkglTestCase_029301_2 "2_bits.rgba8ui_rgb10_a2ui.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029301, VkglTestCase_029301_1, VkglTestCase_029301_2);

#define VkglTestCase_029302_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass"
#define VkglTestCase_029302_2 "_32_bits.rgba8ui_rgb10_a2ui.texture2d_array_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029302, VkglTestCase_029302_1, VkglTestCase_029302_2);

#define VkglTestCase_029303_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_029303_2 "ass_32_bits.rgba8ui_rgb10_a2ui.renderbuffer_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029303, VkglTestCase_029303_1, VkglTestCase_029303_2);

#define VkglTestCase_029304_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_029304_2 "ass_32_bits.rgba8ui_rgb10_a2ui.renderbuffer_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029304, VkglTestCase_029304_1, VkglTestCase_029304_2);

#define VkglTestCase_029305_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_029305_2 "lass_32_bits.rgba8ui_rgb10_a2ui.renderbuffer_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029305, VkglTestCase_029305_1, VkglTestCase_029305_2);

#define VkglTestCase_029306_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass"
#define VkglTestCase_029306_2 "_32_bits.rgba8ui_rgb10_a2ui.renderbuffer_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029306, VkglTestCase_029306_1, VkglTestCase_029306_2);

#define VkglTestCase_029307_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_029307_2 "s_32_bits.rgba8ui_rgb10_a2ui.renderbuffer_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029307, VkglTestCase_029307_1, VkglTestCase_029307_2);
