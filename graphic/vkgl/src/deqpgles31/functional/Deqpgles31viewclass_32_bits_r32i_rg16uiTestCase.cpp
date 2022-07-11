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

#define VkglTestCase_026831_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_026831_2 "iewclass_32_bits.r32i_rg16ui.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026831, VkglTestCase_026831_1, VkglTestCase_026831_2);

#define VkglTestCase_026832_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_026832_2 "iewclass_32_bits.r32i_rg16ui.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026832, VkglTestCase_026832_1, VkglTestCase_026832_2);

#define VkglTestCase_026833_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_026833_2 "viewclass_32_bits.r32i_rg16ui.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026833, VkglTestCase_026833_1, VkglTestCase_026833_2);

#define VkglTestCase_026834_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_026834_2 "class_32_bits.r32i_rg16ui.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026834, VkglTestCase_026834_1, VkglTestCase_026834_2);

#define VkglTestCase_026835_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_026835_2 "wclass_32_bits.r32i_rg16ui.texture2d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026835, VkglTestCase_026835_1, VkglTestCase_026835_2);

#define VkglTestCase_026836_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_026836_2 "iewclass_32_bits.r32i_rg16ui.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026836, VkglTestCase_026836_1, VkglTestCase_026836_2);

#define VkglTestCase_026837_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_026837_2 "iewclass_32_bits.r32i_rg16ui.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026837, VkglTestCase_026837_1, VkglTestCase_026837_2);

#define VkglTestCase_026838_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_026838_2 "viewclass_32_bits.r32i_rg16ui.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026838, VkglTestCase_026838_1, VkglTestCase_026838_2);

#define VkglTestCase_026839_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_026839_2 "class_32_bits.r32i_rg16ui.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026839, VkglTestCase_026839_1, VkglTestCase_026839_2);

#define VkglTestCase_026840_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_026840_2 "wclass_32_bits.r32i_rg16ui.texture3d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026840, VkglTestCase_026840_1, VkglTestCase_026840_2);

#define VkglTestCase_026841_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_026841_2 "viewclass_32_bits.r32i_rg16ui.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026841, VkglTestCase_026841_1, VkglTestCase_026841_2);

#define VkglTestCase_026842_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_026842_2 "viewclass_32_bits.r32i_rg16ui.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026842, VkglTestCase_026842_1, VkglTestCase_026842_2);

#define VkglTestCase_026843_1 "dEQP-GLES31.functional.copy_image.non_compressed"
#define VkglTestCase_026843_2 ".viewclass_32_bits.r32i_rg16ui.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026843, VkglTestCase_026843_1, VkglTestCase_026843_2);

#define VkglTestCase_026844_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_026844_2 "wclass_32_bits.r32i_rg16ui.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026844, VkglTestCase_026844_1, VkglTestCase_026844_2);

#define VkglTestCase_026845_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_026845_2 "ewclass_32_bits.r32i_rg16ui.cubemap_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026845, VkglTestCase_026845_1, VkglTestCase_026845_2);

#define VkglTestCase_026846_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_026846_2 "class_32_bits.r32i_rg16ui.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026846, VkglTestCase_026846_1, VkglTestCase_026846_2);

#define VkglTestCase_026847_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_026847_2 "class_32_bits.r32i_rg16ui.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026847, VkglTestCase_026847_1, VkglTestCase_026847_2);

#define VkglTestCase_026848_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_026848_2 "wclass_32_bits.r32i_rg16ui.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026848, VkglTestCase_026848_1, VkglTestCase_026848_2);

#define VkglTestCase_026849_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_026849_2 "ss_32_bits.r32i_rg16ui.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026849, VkglTestCase_026849_1, VkglTestCase_026849_2);

#define VkglTestCase_026850_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_026850_2 "ass_32_bits.r32i_rg16ui.texture2d_array_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026850, VkglTestCase_026850_1, VkglTestCase_026850_2);

#define VkglTestCase_026851_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_026851_2 "wclass_32_bits.r32i_rg16ui.renderbuffer_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026851, VkglTestCase_026851_1, VkglTestCase_026851_2);

#define VkglTestCase_026852_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_026852_2 "wclass_32_bits.r32i_rg16ui.renderbuffer_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026852, VkglTestCase_026852_1, VkglTestCase_026852_2);

#define VkglTestCase_026853_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_026853_2 "ewclass_32_bits.r32i_rg16ui.renderbuffer_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026853, VkglTestCase_026853_1, VkglTestCase_026853_2);

#define VkglTestCase_026854_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_026854_2 "ass_32_bits.r32i_rg16ui.renderbuffer_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026854, VkglTestCase_026854_1, VkglTestCase_026854_2);

#define VkglTestCase_026855_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_026855_2 "class_32_bits.r32i_rg16ui.renderbuffer_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026855, VkglTestCase_026855_1, VkglTestCase_026855_2);
