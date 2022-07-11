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
#include "../ActsDeqpgles310029TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_028653_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_028653_2 "lass_32_bits.rgba8_srgb8_alpha8.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028653, VkglTestCase_028653_1, VkglTestCase_028653_2);

#define VkglTestCase_028654_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_028654_2 "lass_32_bits.rgba8_srgb8_alpha8.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028654, VkglTestCase_028654_1, VkglTestCase_028654_2);

#define VkglTestCase_028655_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_028655_2 "class_32_bits.rgba8_srgb8_alpha8.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028655, VkglTestCase_028655_1, VkglTestCase_028655_2);

#define VkglTestCase_028656_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_028656_2 "s_32_bits.rgba8_srgb8_alpha8.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028656, VkglTestCase_028656_1, VkglTestCase_028656_2);

#define VkglTestCase_028657_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_028657_2 "ass_32_bits.rgba8_srgb8_alpha8.texture2d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028657, VkglTestCase_028657_1, VkglTestCase_028657_2);

#define VkglTestCase_028658_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_028658_2 "lass_32_bits.rgba8_srgb8_alpha8.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028658, VkglTestCase_028658_1, VkglTestCase_028658_2);

#define VkglTestCase_028659_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_028659_2 "lass_32_bits.rgba8_srgb8_alpha8.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028659, VkglTestCase_028659_1, VkglTestCase_028659_2);

#define VkglTestCase_028660_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_028660_2 "class_32_bits.rgba8_srgb8_alpha8.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028660, VkglTestCase_028660_1, VkglTestCase_028660_2);

#define VkglTestCase_028661_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_028661_2 "s_32_bits.rgba8_srgb8_alpha8.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028661, VkglTestCase_028661_1, VkglTestCase_028661_2);

#define VkglTestCase_028662_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_028662_2 "ass_32_bits.rgba8_srgb8_alpha8.texture3d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028662, VkglTestCase_028662_1, VkglTestCase_028662_2);

#define VkglTestCase_028663_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_028663_2 "class_32_bits.rgba8_srgb8_alpha8.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028663, VkglTestCase_028663_1, VkglTestCase_028663_2);

#define VkglTestCase_028664_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_028664_2 "class_32_bits.rgba8_srgb8_alpha8.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028664, VkglTestCase_028664_1, VkglTestCase_028664_2);

#define VkglTestCase_028665_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_028665_2 "wclass_32_bits.rgba8_srgb8_alpha8.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028665, VkglTestCase_028665_1, VkglTestCase_028665_2);

#define VkglTestCase_028666_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_028666_2 "ss_32_bits.rgba8_srgb8_alpha8.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028666, VkglTestCase_028666_1, VkglTestCase_028666_2);

#define VkglTestCase_028667_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_028667_2 "lass_32_bits.rgba8_srgb8_alpha8.cubemap_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028667, VkglTestCase_028667_1, VkglTestCase_028667_2);

#define VkglTestCase_028668_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_028668_2 "s_32_bits.rgba8_srgb8_alpha8.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028668, VkglTestCase_028668_1, VkglTestCase_028668_2);

#define VkglTestCase_028669_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_028669_2 "s_32_bits.rgba8_srgb8_alpha8.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028669, VkglTestCase_028669_1, VkglTestCase_028669_2);

#define VkglTestCase_028670_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_028670_2 "ss_32_bits.rgba8_srgb8_alpha8.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028670, VkglTestCase_028670_1, VkglTestCase_028670_2);

#define VkglTestCase_028671_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_3"
#define VkglTestCase_028671_2 "2_bits.rgba8_srgb8_alpha8.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028671, VkglTestCase_028671_1, VkglTestCase_028671_2);

#define VkglTestCase_028672_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass"
#define VkglTestCase_028672_2 "_32_bits.rgba8_srgb8_alpha8.texture2d_array_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028672, VkglTestCase_028672_1, VkglTestCase_028672_2);

#define VkglTestCase_028673_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_028673_2 "ass_32_bits.rgba8_srgb8_alpha8.renderbuffer_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028673, VkglTestCase_028673_1, VkglTestCase_028673_2);

#define VkglTestCase_028674_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_028674_2 "ass_32_bits.rgba8_srgb8_alpha8.renderbuffer_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028674, VkglTestCase_028674_1, VkglTestCase_028674_2);

#define VkglTestCase_028675_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_028675_2 "lass_32_bits.rgba8_srgb8_alpha8.renderbuffer_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028675, VkglTestCase_028675_1, VkglTestCase_028675_2);

#define VkglTestCase_028676_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass"
#define VkglTestCase_028676_2 "_32_bits.rgba8_srgb8_alpha8.renderbuffer_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028676, VkglTestCase_028676_1, VkglTestCase_028676_2);

#define VkglTestCase_028677_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_028677_2 "s_32_bits.rgba8_srgb8_alpha8.renderbuffer_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028677, VkglTestCase_028677_1, VkglTestCase_028677_2);
