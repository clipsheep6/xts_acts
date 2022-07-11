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

#define VkglTestCase_029138_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_029138_2 "ewclass_32_bits.rgba8ui_rg16i.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029138, VkglTestCase_029138_1, VkglTestCase_029138_2);

#define VkglTestCase_029139_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_029139_2 "ewclass_32_bits.rgba8ui_rg16i.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029139, VkglTestCase_029139_1, VkglTestCase_029139_2);

#define VkglTestCase_029140_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_029140_2 "iewclass_32_bits.rgba8ui_rg16i.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029140, VkglTestCase_029140_1, VkglTestCase_029140_2);

#define VkglTestCase_029141_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_029141_2 "lass_32_bits.rgba8ui_rg16i.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029141, VkglTestCase_029141_1, VkglTestCase_029141_2);

#define VkglTestCase_029142_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_029142_2 "class_32_bits.rgba8ui_rg16i.texture2d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029142, VkglTestCase_029142_1, VkglTestCase_029142_2);

#define VkglTestCase_029143_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_029143_2 "ewclass_32_bits.rgba8ui_rg16i.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029143, VkglTestCase_029143_1, VkglTestCase_029143_2);

#define VkglTestCase_029144_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_029144_2 "ewclass_32_bits.rgba8ui_rg16i.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029144, VkglTestCase_029144_1, VkglTestCase_029144_2);

#define VkglTestCase_029145_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_029145_2 "iewclass_32_bits.rgba8ui_rg16i.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029145, VkglTestCase_029145_1, VkglTestCase_029145_2);

#define VkglTestCase_029146_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_029146_2 "lass_32_bits.rgba8ui_rg16i.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029146, VkglTestCase_029146_1, VkglTestCase_029146_2);

#define VkglTestCase_029147_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_029147_2 "class_32_bits.rgba8ui_rg16i.texture3d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029147, VkglTestCase_029147_1, VkglTestCase_029147_2);

#define VkglTestCase_029148_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_029148_2 "iewclass_32_bits.rgba8ui_rg16i.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029148, VkglTestCase_029148_1, VkglTestCase_029148_2);

#define VkglTestCase_029149_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_029149_2 "iewclass_32_bits.rgba8ui_rg16i.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029149, VkglTestCase_029149_1, VkglTestCase_029149_2);

#define VkglTestCase_029150_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_029150_2 "viewclass_32_bits.rgba8ui_rg16i.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029150, VkglTestCase_029150_1, VkglTestCase_029150_2);

#define VkglTestCase_029151_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_029151_2 "class_32_bits.rgba8ui_rg16i.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029151, VkglTestCase_029151_1, VkglTestCase_029151_2);

#define VkglTestCase_029152_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_029152_2 "wclass_32_bits.rgba8ui_rg16i.cubemap_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029152, VkglTestCase_029152_1, VkglTestCase_029152_2);

#define VkglTestCase_029153_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_029153_2 "lass_32_bits.rgba8ui_rg16i.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029153, VkglTestCase_029153_1, VkglTestCase_029153_2);

#define VkglTestCase_029154_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_029154_2 "lass_32_bits.rgba8ui_rg16i.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029154, VkglTestCase_029154_1, VkglTestCase_029154_2);

#define VkglTestCase_029155_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_029155_2 "class_32_bits.rgba8ui_rg16i.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029155, VkglTestCase_029155_1, VkglTestCase_029155_2);

#define VkglTestCase_029156_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_029156_2 "s_32_bits.rgba8ui_rg16i.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029156, VkglTestCase_029156_1, VkglTestCase_029156_2);

#define VkglTestCase_029157_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_029157_2 "ss_32_bits.rgba8ui_rg16i.texture2d_array_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029157, VkglTestCase_029157_1, VkglTestCase_029157_2);

#define VkglTestCase_029158_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_029158_2 "class_32_bits.rgba8ui_rg16i.renderbuffer_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029158, VkglTestCase_029158_1, VkglTestCase_029158_2);

#define VkglTestCase_029159_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_029159_2 "class_32_bits.rgba8ui_rg16i.renderbuffer_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029159, VkglTestCase_029159_1, VkglTestCase_029159_2);

#define VkglTestCase_029160_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_029160_2 "wclass_32_bits.rgba8ui_rg16i.renderbuffer_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029160, VkglTestCase_029160_1, VkglTestCase_029160_2);

#define VkglTestCase_029161_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_029161_2 "ss_32_bits.rgba8ui_rg16i.renderbuffer_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029161, VkglTestCase_029161_1, VkglTestCase_029161_2);

#define VkglTestCase_029162_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_029162_2 "lass_32_bits.rgba8ui_rg16i.renderbuffer_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029162, VkglTestCase_029162_1, VkglTestCase_029162_2);
