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

#define VkglTestCase_027668_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_027668_2 "iewclass_32_bits.rg16i_r32i.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027668, VkglTestCase_027668_1, VkglTestCase_027668_2);

#define VkglTestCase_027669_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_027669_2 "iewclass_32_bits.rg16i_r32i.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027669, VkglTestCase_027669_1, VkglTestCase_027669_2);

#define VkglTestCase_027670_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_027670_2 "viewclass_32_bits.rg16i_r32i.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027670, VkglTestCase_027670_1, VkglTestCase_027670_2);

#define VkglTestCase_027671_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_027671_2 "class_32_bits.rg16i_r32i.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027671, VkglTestCase_027671_1, VkglTestCase_027671_2);

#define VkglTestCase_027672_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_027672_2 "ewclass_32_bits.rg16i_r32i.texture2d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027672, VkglTestCase_027672_1, VkglTestCase_027672_2);

#define VkglTestCase_027673_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_027673_2 "iewclass_32_bits.rg16i_r32i.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027673, VkglTestCase_027673_1, VkglTestCase_027673_2);

#define VkglTestCase_027674_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_027674_2 "iewclass_32_bits.rg16i_r32i.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027674, VkglTestCase_027674_1, VkglTestCase_027674_2);

#define VkglTestCase_027675_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_027675_2 "viewclass_32_bits.rg16i_r32i.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027675, VkglTestCase_027675_1, VkglTestCase_027675_2);

#define VkglTestCase_027676_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_027676_2 "class_32_bits.rg16i_r32i.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027676, VkglTestCase_027676_1, VkglTestCase_027676_2);

#define VkglTestCase_027677_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_027677_2 "ewclass_32_bits.rg16i_r32i.texture3d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027677, VkglTestCase_027677_1, VkglTestCase_027677_2);

#define VkglTestCase_027678_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_027678_2 "viewclass_32_bits.rg16i_r32i.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027678, VkglTestCase_027678_1, VkglTestCase_027678_2);

#define VkglTestCase_027679_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_027679_2 "viewclass_32_bits.rg16i_r32i.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027679, VkglTestCase_027679_1, VkglTestCase_027679_2);

#define VkglTestCase_027680_1 "dEQP-GLES31.functional.copy_image.non_compressed"
#define VkglTestCase_027680_2 ".viewclass_32_bits.rg16i_r32i.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027680, VkglTestCase_027680_1, VkglTestCase_027680_2);

#define VkglTestCase_027681_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_027681_2 "wclass_32_bits.rg16i_r32i.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027681, VkglTestCase_027681_1, VkglTestCase_027681_2);

#define VkglTestCase_027682_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_027682_2 "iewclass_32_bits.rg16i_r32i.cubemap_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027682, VkglTestCase_027682_1, VkglTestCase_027682_2);

#define VkglTestCase_027683_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_027683_2 "class_32_bits.rg16i_r32i.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027683, VkglTestCase_027683_1, VkglTestCase_027683_2);

#define VkglTestCase_027684_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_027684_2 "class_32_bits.rg16i_r32i.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027684, VkglTestCase_027684_1, VkglTestCase_027684_2);

#define VkglTestCase_027685_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_027685_2 "wclass_32_bits.rg16i_r32i.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027685, VkglTestCase_027685_1, VkglTestCase_027685_2);

#define VkglTestCase_027686_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_027686_2 "ss_32_bits.rg16i_r32i.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027686, VkglTestCase_027686_1, VkglTestCase_027686_2);

#define VkglTestCase_027687_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_027687_2 "lass_32_bits.rg16i_r32i.texture2d_array_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027687, VkglTestCase_027687_1, VkglTestCase_027687_2);

#define VkglTestCase_027688_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_027688_2 "ewclass_32_bits.rg16i_r32i.renderbuffer_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027688, VkglTestCase_027688_1, VkglTestCase_027688_2);

#define VkglTestCase_027689_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_027689_2 "ewclass_32_bits.rg16i_r32i.renderbuffer_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027689, VkglTestCase_027689_1, VkglTestCase_027689_2);

#define VkglTestCase_027690_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_027690_2 "iewclass_32_bits.rg16i_r32i.renderbuffer_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027690, VkglTestCase_027690_1, VkglTestCase_027690_2);

#define VkglTestCase_027691_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_027691_2 "lass_32_bits.rg16i_r32i.renderbuffer_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027691, VkglTestCase_027691_1, VkglTestCase_027691_2);

#define VkglTestCase_027692_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_027692_2 "class_32_bits.rg16i_r32i.renderbuffer_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027692, VkglTestCase_027692_1, VkglTestCase_027692_2);
