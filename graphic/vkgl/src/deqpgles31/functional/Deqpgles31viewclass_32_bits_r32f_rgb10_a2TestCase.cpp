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
#include "../ActsDeqpgles310027TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_026660_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_026660_2 "ewclass_32_bits.r32f_rgb10_a2.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026660, VkglTestCase_026660_1, VkglTestCase_026660_2);

#define VkglTestCase_026661_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_026661_2 "ewclass_32_bits.r32f_rgb10_a2.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026661, VkglTestCase_026661_1, VkglTestCase_026661_2);

#define VkglTestCase_026662_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_026662_2 "iewclass_32_bits.r32f_rgb10_a2.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026662, VkglTestCase_026662_1, VkglTestCase_026662_2);

#define VkglTestCase_026663_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_026663_2 "lass_32_bits.r32f_rgb10_a2.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026663, VkglTestCase_026663_1, VkglTestCase_026663_2);

#define VkglTestCase_026664_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_026664_2 "class_32_bits.r32f_rgb10_a2.texture2d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026664, VkglTestCase_026664_1, VkglTestCase_026664_2);

#define VkglTestCase_026665_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_026665_2 "ewclass_32_bits.r32f_rgb10_a2.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026665, VkglTestCase_026665_1, VkglTestCase_026665_2);

#define VkglTestCase_026666_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_026666_2 "ewclass_32_bits.r32f_rgb10_a2.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026666, VkglTestCase_026666_1, VkglTestCase_026666_2);

#define VkglTestCase_026667_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_026667_2 "iewclass_32_bits.r32f_rgb10_a2.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026667, VkglTestCase_026667_1, VkglTestCase_026667_2);

#define VkglTestCase_026668_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_026668_2 "lass_32_bits.r32f_rgb10_a2.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026668, VkglTestCase_026668_1, VkglTestCase_026668_2);

#define VkglTestCase_026669_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_026669_2 "class_32_bits.r32f_rgb10_a2.texture3d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026669, VkglTestCase_026669_1, VkglTestCase_026669_2);

#define VkglTestCase_026670_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_026670_2 "iewclass_32_bits.r32f_rgb10_a2.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026670, VkglTestCase_026670_1, VkglTestCase_026670_2);

#define VkglTestCase_026671_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_026671_2 "iewclass_32_bits.r32f_rgb10_a2.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026671, VkglTestCase_026671_1, VkglTestCase_026671_2);

#define VkglTestCase_026672_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_026672_2 "viewclass_32_bits.r32f_rgb10_a2.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026672, VkglTestCase_026672_1, VkglTestCase_026672_2);

#define VkglTestCase_026673_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_026673_2 "class_32_bits.r32f_rgb10_a2.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026673, VkglTestCase_026673_1, VkglTestCase_026673_2);

#define VkglTestCase_026674_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_026674_2 "wclass_32_bits.r32f_rgb10_a2.cubemap_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026674, VkglTestCase_026674_1, VkglTestCase_026674_2);

#define VkglTestCase_026675_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_026675_2 "lass_32_bits.r32f_rgb10_a2.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026675, VkglTestCase_026675_1, VkglTestCase_026675_2);

#define VkglTestCase_026676_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_026676_2 "lass_32_bits.r32f_rgb10_a2.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026676, VkglTestCase_026676_1, VkglTestCase_026676_2);

#define VkglTestCase_026677_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_026677_2 "class_32_bits.r32f_rgb10_a2.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026677, VkglTestCase_026677_1, VkglTestCase_026677_2);

#define VkglTestCase_026678_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_026678_2 "s_32_bits.r32f_rgb10_a2.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026678, VkglTestCase_026678_1, VkglTestCase_026678_2);

#define VkglTestCase_026679_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_026679_2 "ss_32_bits.r32f_rgb10_a2.texture2d_array_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026679, VkglTestCase_026679_1, VkglTestCase_026679_2);
