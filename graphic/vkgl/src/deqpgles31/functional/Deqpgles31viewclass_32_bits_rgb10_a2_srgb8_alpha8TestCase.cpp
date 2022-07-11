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

#define VkglTestCase_030285_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_030285_2 "ass_32_bits.rgb10_a2_srgb8_alpha8.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030285, VkglTestCase_030285_1, VkglTestCase_030285_2);

#define VkglTestCase_030286_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_030286_2 "ass_32_bits.rgb10_a2_srgb8_alpha8.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030286, VkglTestCase_030286_1, VkglTestCase_030286_2);

#define VkglTestCase_030287_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_030287_2 "lass_32_bits.rgb10_a2_srgb8_alpha8.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030287, VkglTestCase_030287_1, VkglTestCase_030287_2);

#define VkglTestCase_030288_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass"
#define VkglTestCase_030288_2 "_32_bits.rgb10_a2_srgb8_alpha8.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030288, VkglTestCase_030288_1, VkglTestCase_030288_2);

#define VkglTestCase_030289_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_030289_2 "s_32_bits.rgb10_a2_srgb8_alpha8.texture2d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030289, VkglTestCase_030289_1, VkglTestCase_030289_2);

#define VkglTestCase_030290_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_030290_2 "ass_32_bits.rgb10_a2_srgb8_alpha8.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030290, VkglTestCase_030290_1, VkglTestCase_030290_2);

#define VkglTestCase_030291_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_030291_2 "ass_32_bits.rgb10_a2_srgb8_alpha8.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030291, VkglTestCase_030291_1, VkglTestCase_030291_2);

#define VkglTestCase_030292_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_030292_2 "lass_32_bits.rgb10_a2_srgb8_alpha8.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030292, VkglTestCase_030292_1, VkglTestCase_030292_2);

#define VkglTestCase_030293_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass"
#define VkglTestCase_030293_2 "_32_bits.rgb10_a2_srgb8_alpha8.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030293, VkglTestCase_030293_1, VkglTestCase_030293_2);

#define VkglTestCase_030294_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_030294_2 "s_32_bits.rgb10_a2_srgb8_alpha8.texture3d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030294, VkglTestCase_030294_1, VkglTestCase_030294_2);

#define VkglTestCase_030295_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_030295_2 "lass_32_bits.rgb10_a2_srgb8_alpha8.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030295, VkglTestCase_030295_1, VkglTestCase_030295_2);

#define VkglTestCase_030296_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_030296_2 "lass_32_bits.rgb10_a2_srgb8_alpha8.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030296, VkglTestCase_030296_1, VkglTestCase_030296_2);

#define VkglTestCase_030297_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_030297_2 "class_32_bits.rgb10_a2_srgb8_alpha8.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030297, VkglTestCase_030297_1, VkglTestCase_030297_2);

#define VkglTestCase_030298_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_030298_2 "s_32_bits.rgb10_a2_srgb8_alpha8.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030298, VkglTestCase_030298_1, VkglTestCase_030298_2);

#define VkglTestCase_030299_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_030299_2 "ss_32_bits.rgb10_a2_srgb8_alpha8.cubemap_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030299, VkglTestCase_030299_1, VkglTestCase_030299_2);

#define VkglTestCase_030300_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass"
#define VkglTestCase_030300_2 "_32_bits.rgb10_a2_srgb8_alpha8.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030300, VkglTestCase_030300_1, VkglTestCase_030300_2);

#define VkglTestCase_030301_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass"
#define VkglTestCase_030301_2 "_32_bits.rgb10_a2_srgb8_alpha8.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030301, VkglTestCase_030301_1, VkglTestCase_030301_2);

#define VkglTestCase_030302_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_030302_2 "s_32_bits.rgb10_a2_srgb8_alpha8.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030302, VkglTestCase_030302_1, VkglTestCase_030302_2);

#define VkglTestCase_030303_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_32"
#define VkglTestCase_030303_2 "_bits.rgb10_a2_srgb8_alpha8.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030303, VkglTestCase_030303_1, VkglTestCase_030303_2);

#define VkglTestCase_030304_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_3"
#define VkglTestCase_030304_2 "2_bits.rgb10_a2_srgb8_alpha8.texture2d_array_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030304, VkglTestCase_030304_1, VkglTestCase_030304_2);

#define VkglTestCase_030305_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_030305_2 "s_32_bits.rgb10_a2_srgb8_alpha8.renderbuffer_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030305, VkglTestCase_030305_1, VkglTestCase_030305_2);

#define VkglTestCase_030306_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_030306_2 "s_32_bits.rgb10_a2_srgb8_alpha8.renderbuffer_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030306, VkglTestCase_030306_1, VkglTestCase_030306_2);

#define VkglTestCase_030307_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_030307_2 "ss_32_bits.rgb10_a2_srgb8_alpha8.renderbuffer_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030307, VkglTestCase_030307_1, VkglTestCase_030307_2);

#define VkglTestCase_030308_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_3"
#define VkglTestCase_030308_2 "2_bits.rgb10_a2_srgb8_alpha8.renderbuffer_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030308, VkglTestCase_030308_1, VkglTestCase_030308_2);

#define VkglTestCase_030309_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass"
#define VkglTestCase_030309_2 "_32_bits.rgb10_a2_srgb8_alpha8.renderbuffer_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030309, VkglTestCase_030309_1, VkglTestCase_030309_2);
