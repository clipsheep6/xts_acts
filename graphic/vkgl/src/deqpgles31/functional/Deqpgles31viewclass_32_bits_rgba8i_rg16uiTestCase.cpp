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

#define VkglTestCase_028813_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_028813_2 "ewclass_32_bits.rgba8i_rg16ui.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028813, VkglTestCase_028813_1, VkglTestCase_028813_2);

#define VkglTestCase_028814_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_028814_2 "ewclass_32_bits.rgba8i_rg16ui.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028814, VkglTestCase_028814_1, VkglTestCase_028814_2);

#define VkglTestCase_028815_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_028815_2 "iewclass_32_bits.rgba8i_rg16ui.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028815, VkglTestCase_028815_1, VkglTestCase_028815_2);

#define VkglTestCase_028816_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_028816_2 "lass_32_bits.rgba8i_rg16ui.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028816, VkglTestCase_028816_1, VkglTestCase_028816_2);

#define VkglTestCase_028817_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_028817_2 "class_32_bits.rgba8i_rg16ui.texture2d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028817, VkglTestCase_028817_1, VkglTestCase_028817_2);

#define VkglTestCase_028818_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_028818_2 "ewclass_32_bits.rgba8i_rg16ui.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028818, VkglTestCase_028818_1, VkglTestCase_028818_2);

#define VkglTestCase_028819_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_028819_2 "ewclass_32_bits.rgba8i_rg16ui.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028819, VkglTestCase_028819_1, VkglTestCase_028819_2);

#define VkglTestCase_028820_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_028820_2 "iewclass_32_bits.rgba8i_rg16ui.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028820, VkglTestCase_028820_1, VkglTestCase_028820_2);

#define VkglTestCase_028821_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_028821_2 "lass_32_bits.rgba8i_rg16ui.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028821, VkglTestCase_028821_1, VkglTestCase_028821_2);

#define VkglTestCase_028822_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_028822_2 "class_32_bits.rgba8i_rg16ui.texture3d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028822, VkglTestCase_028822_1, VkglTestCase_028822_2);

#define VkglTestCase_028823_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_028823_2 "iewclass_32_bits.rgba8i_rg16ui.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028823, VkglTestCase_028823_1, VkglTestCase_028823_2);

#define VkglTestCase_028824_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_028824_2 "iewclass_32_bits.rgba8i_rg16ui.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028824, VkglTestCase_028824_1, VkglTestCase_028824_2);

#define VkglTestCase_028825_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_028825_2 "viewclass_32_bits.rgba8i_rg16ui.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028825, VkglTestCase_028825_1, VkglTestCase_028825_2);

#define VkglTestCase_028826_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_028826_2 "class_32_bits.rgba8i_rg16ui.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028826, VkglTestCase_028826_1, VkglTestCase_028826_2);

#define VkglTestCase_028827_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_028827_2 "wclass_32_bits.rgba8i_rg16ui.cubemap_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028827, VkglTestCase_028827_1, VkglTestCase_028827_2);

#define VkglTestCase_028828_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_028828_2 "lass_32_bits.rgba8i_rg16ui.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028828, VkglTestCase_028828_1, VkglTestCase_028828_2);

#define VkglTestCase_028829_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_028829_2 "lass_32_bits.rgba8i_rg16ui.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028829, VkglTestCase_028829_1, VkglTestCase_028829_2);

#define VkglTestCase_028830_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_028830_2 "class_32_bits.rgba8i_rg16ui.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028830, VkglTestCase_028830_1, VkglTestCase_028830_2);

#define VkglTestCase_028831_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_028831_2 "s_32_bits.rgba8i_rg16ui.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028831, VkglTestCase_028831_1, VkglTestCase_028831_2);

#define VkglTestCase_028832_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_028832_2 "ss_32_bits.rgba8i_rg16ui.texture2d_array_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028832, VkglTestCase_028832_1, VkglTestCase_028832_2);

#define VkglTestCase_028833_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_028833_2 "class_32_bits.rgba8i_rg16ui.renderbuffer_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028833, VkglTestCase_028833_1, VkglTestCase_028833_2);

#define VkglTestCase_028834_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_028834_2 "class_32_bits.rgba8i_rg16ui.renderbuffer_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028834, VkglTestCase_028834_1, VkglTestCase_028834_2);

#define VkglTestCase_028835_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_028835_2 "wclass_32_bits.rgba8i_rg16ui.renderbuffer_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028835, VkglTestCase_028835_1, VkglTestCase_028835_2);

#define VkglTestCase_028836_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_028836_2 "ss_32_bits.rgba8i_rg16ui.renderbuffer_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028836, VkglTestCase_028836_1, VkglTestCase_028836_2);

#define VkglTestCase_028837_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_028837_2 "lass_32_bits.rgba8i_rg16ui.renderbuffer_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028837, VkglTestCase_028837_1, VkglTestCase_028837_2);
