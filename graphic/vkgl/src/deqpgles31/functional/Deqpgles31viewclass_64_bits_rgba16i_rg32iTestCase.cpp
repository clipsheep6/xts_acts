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

#define VkglTestCase_026080_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_026080_2 "ewclass_64_bits.rgba16i_rg32i.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026080, VkglTestCase_026080_1, VkglTestCase_026080_2);

#define VkglTestCase_026081_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_026081_2 "ewclass_64_bits.rgba16i_rg32i.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026081, VkglTestCase_026081_1, VkglTestCase_026081_2);

#define VkglTestCase_026082_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_026082_2 "iewclass_64_bits.rgba16i_rg32i.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026082, VkglTestCase_026082_1, VkglTestCase_026082_2);

#define VkglTestCase_026083_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_026083_2 "lass_64_bits.rgba16i_rg32i.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026083, VkglTestCase_026083_1, VkglTestCase_026083_2);

#define VkglTestCase_026084_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_026084_2 "class_64_bits.rgba16i_rg32i.texture2d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026084, VkglTestCase_026084_1, VkglTestCase_026084_2);

#define VkglTestCase_026085_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_026085_2 "ewclass_64_bits.rgba16i_rg32i.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026085, VkglTestCase_026085_1, VkglTestCase_026085_2);

#define VkglTestCase_026086_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_026086_2 "ewclass_64_bits.rgba16i_rg32i.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026086, VkglTestCase_026086_1, VkglTestCase_026086_2);

#define VkglTestCase_026087_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_026087_2 "iewclass_64_bits.rgba16i_rg32i.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026087, VkglTestCase_026087_1, VkglTestCase_026087_2);

#define VkglTestCase_026088_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_026088_2 "lass_64_bits.rgba16i_rg32i.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026088, VkglTestCase_026088_1, VkglTestCase_026088_2);

#define VkglTestCase_026089_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_026089_2 "class_64_bits.rgba16i_rg32i.texture3d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026089, VkglTestCase_026089_1, VkglTestCase_026089_2);

#define VkglTestCase_026090_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_026090_2 "iewclass_64_bits.rgba16i_rg32i.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026090, VkglTestCase_026090_1, VkglTestCase_026090_2);

#define VkglTestCase_026091_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_026091_2 "iewclass_64_bits.rgba16i_rg32i.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026091, VkglTestCase_026091_1, VkglTestCase_026091_2);

#define VkglTestCase_026092_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_026092_2 "viewclass_64_bits.rgba16i_rg32i.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026092, VkglTestCase_026092_1, VkglTestCase_026092_2);

#define VkglTestCase_026093_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_026093_2 "class_64_bits.rgba16i_rg32i.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026093, VkglTestCase_026093_1, VkglTestCase_026093_2);

#define VkglTestCase_026094_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_026094_2 "wclass_64_bits.rgba16i_rg32i.cubemap_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026094, VkglTestCase_026094_1, VkglTestCase_026094_2);

#define VkglTestCase_026095_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_026095_2 "lass_64_bits.rgba16i_rg32i.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026095, VkglTestCase_026095_1, VkglTestCase_026095_2);

#define VkglTestCase_026096_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_026096_2 "lass_64_bits.rgba16i_rg32i.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026096, VkglTestCase_026096_1, VkglTestCase_026096_2);

#define VkglTestCase_026097_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_026097_2 "class_64_bits.rgba16i_rg32i.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026097, VkglTestCase_026097_1, VkglTestCase_026097_2);

#define VkglTestCase_026098_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_026098_2 "s_64_bits.rgba16i_rg32i.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026098, VkglTestCase_026098_1, VkglTestCase_026098_2);

#define VkglTestCase_026099_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_026099_2 "ss_64_bits.rgba16i_rg32i.texture2d_array_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026099, VkglTestCase_026099_1, VkglTestCase_026099_2);

#define VkglTestCase_026100_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_026100_2 "class_64_bits.rgba16i_rg32i.renderbuffer_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026100, VkglTestCase_026100_1, VkglTestCase_026100_2);

#define VkglTestCase_026101_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_026101_2 "class_64_bits.rgba16i_rg32i.renderbuffer_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026101, VkglTestCase_026101_1, VkglTestCase_026101_2);

#define VkglTestCase_026102_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_026102_2 "wclass_64_bits.rgba16i_rg32i.renderbuffer_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026102, VkglTestCase_026102_1, VkglTestCase_026102_2);

#define VkglTestCase_026103_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_026103_2 "ss_64_bits.rgba16i_rg32i.renderbuffer_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026103, VkglTestCase_026103_1, VkglTestCase_026103_2);

#define VkglTestCase_026104_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_026104_2 "lass_64_bits.rgba16i_rg32i.renderbuffer_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026104, VkglTestCase_026104_1, VkglTestCase_026104_2);
