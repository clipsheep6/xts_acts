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

#define VkglTestCase_029650_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_029650_2 "wclass_32_bits.rgb10_a2ui_r32i.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029650, VkglTestCase_029650_1, VkglTestCase_029650_2);

#define VkglTestCase_029651_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_029651_2 "wclass_32_bits.rgb10_a2ui_r32i.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029651, VkglTestCase_029651_1, VkglTestCase_029651_2);

#define VkglTestCase_029652_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_029652_2 "ewclass_32_bits.rgb10_a2ui_r32i.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029652, VkglTestCase_029652_1, VkglTestCase_029652_2);

#define VkglTestCase_029653_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_029653_2 "ass_32_bits.rgb10_a2ui_r32i.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029653, VkglTestCase_029653_1, VkglTestCase_029653_2);

#define VkglTestCase_029654_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_029654_2 "lass_32_bits.rgb10_a2ui_r32i.texture2d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029654, VkglTestCase_029654_1, VkglTestCase_029654_2);

#define VkglTestCase_029655_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_029655_2 "wclass_32_bits.rgb10_a2ui_r32i.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029655, VkglTestCase_029655_1, VkglTestCase_029655_2);

#define VkglTestCase_029656_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_029656_2 "wclass_32_bits.rgb10_a2ui_r32i.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029656, VkglTestCase_029656_1, VkglTestCase_029656_2);

#define VkglTestCase_029657_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_029657_2 "ewclass_32_bits.rgb10_a2ui_r32i.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029657, VkglTestCase_029657_1, VkglTestCase_029657_2);

#define VkglTestCase_029658_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_029658_2 "ass_32_bits.rgb10_a2ui_r32i.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029658, VkglTestCase_029658_1, VkglTestCase_029658_2);

#define VkglTestCase_029659_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_029659_2 "lass_32_bits.rgb10_a2ui_r32i.texture3d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029659, VkglTestCase_029659_1, VkglTestCase_029659_2);

#define VkglTestCase_029660_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_029660_2 "ewclass_32_bits.rgb10_a2ui_r32i.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029660, VkglTestCase_029660_1, VkglTestCase_029660_2);

#define VkglTestCase_029661_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_029661_2 "ewclass_32_bits.rgb10_a2ui_r32i.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029661, VkglTestCase_029661_1, VkglTestCase_029661_2);

#define VkglTestCase_029662_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_029662_2 "iewclass_32_bits.rgb10_a2ui_r32i.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029662, VkglTestCase_029662_1, VkglTestCase_029662_2);

#define VkglTestCase_029663_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_029663_2 "lass_32_bits.rgb10_a2ui_r32i.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029663, VkglTestCase_029663_1, VkglTestCase_029663_2);

#define VkglTestCase_029664_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_029664_2 "class_32_bits.rgb10_a2ui_r32i.cubemap_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029664, VkglTestCase_029664_1, VkglTestCase_029664_2);

#define VkglTestCase_029665_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_029665_2 "ass_32_bits.rgb10_a2ui_r32i.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029665, VkglTestCase_029665_1, VkglTestCase_029665_2);

#define VkglTestCase_029666_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_029666_2 "ass_32_bits.rgb10_a2ui_r32i.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029666, VkglTestCase_029666_1, VkglTestCase_029666_2);

#define VkglTestCase_029667_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_029667_2 "lass_32_bits.rgb10_a2ui_r32i.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029667, VkglTestCase_029667_1, VkglTestCase_029667_2);

#define VkglTestCase_029668_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass"
#define VkglTestCase_029668_2 "_32_bits.rgb10_a2ui_r32i.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029668, VkglTestCase_029668_1, VkglTestCase_029668_2);

#define VkglTestCase_029669_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_029669_2 "s_32_bits.rgb10_a2ui_r32i.texture2d_array_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029669, VkglTestCase_029669_1, VkglTestCase_029669_2);

#define VkglTestCase_029670_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_029670_2 "lass_32_bits.rgb10_a2ui_r32i.renderbuffer_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029670, VkglTestCase_029670_1, VkglTestCase_029670_2);

#define VkglTestCase_029671_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_029671_2 "lass_32_bits.rgb10_a2ui_r32i.renderbuffer_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029671, VkglTestCase_029671_1, VkglTestCase_029671_2);

#define VkglTestCase_029672_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_029672_2 "class_32_bits.rgb10_a2ui_r32i.renderbuffer_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029672, VkglTestCase_029672_1, VkglTestCase_029672_2);

#define VkglTestCase_029673_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_029673_2 "s_32_bits.rgb10_a2ui_r32i.renderbuffer_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029673, VkglTestCase_029673_1, VkglTestCase_029673_2);

#define VkglTestCase_029674_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_029674_2 "ass_32_bits.rgb10_a2ui_r32i.renderbuffer_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029674, VkglTestCase_029674_1, VkglTestCase_029674_2);
