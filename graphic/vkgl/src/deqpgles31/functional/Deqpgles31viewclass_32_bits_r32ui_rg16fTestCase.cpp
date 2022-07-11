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

#define VkglTestCase_027136_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_027136_2 "iewclass_32_bits.r32ui_rg16f.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027136, VkglTestCase_027136_1, VkglTestCase_027136_2);

#define VkglTestCase_027137_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_027137_2 "iewclass_32_bits.r32ui_rg16f.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027137, VkglTestCase_027137_1, VkglTestCase_027137_2);

#define VkglTestCase_027138_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_027138_2 "viewclass_32_bits.r32ui_rg16f.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027138, VkglTestCase_027138_1, VkglTestCase_027138_2);

#define VkglTestCase_027139_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_027139_2 "class_32_bits.r32ui_rg16f.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027139, VkglTestCase_027139_1, VkglTestCase_027139_2);

#define VkglTestCase_027140_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_027140_2 "iewclass_32_bits.r32ui_rg16f.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027140, VkglTestCase_027140_1, VkglTestCase_027140_2);

#define VkglTestCase_027141_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_027141_2 "iewclass_32_bits.r32ui_rg16f.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027141, VkglTestCase_027141_1, VkglTestCase_027141_2);

#define VkglTestCase_027142_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_027142_2 "viewclass_32_bits.r32ui_rg16f.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027142, VkglTestCase_027142_1, VkglTestCase_027142_2);

#define VkglTestCase_027143_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_027143_2 "class_32_bits.r32ui_rg16f.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027143, VkglTestCase_027143_1, VkglTestCase_027143_2);

#define VkglTestCase_027144_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_027144_2 "viewclass_32_bits.r32ui_rg16f.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027144, VkglTestCase_027144_1, VkglTestCase_027144_2);

#define VkglTestCase_027145_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_027145_2 "viewclass_32_bits.r32ui_rg16f.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027145, VkglTestCase_027145_1, VkglTestCase_027145_2);

#define VkglTestCase_027146_1 "dEQP-GLES31.functional.copy_image.non_compressed"
#define VkglTestCase_027146_2 ".viewclass_32_bits.r32ui_rg16f.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027146, VkglTestCase_027146_1, VkglTestCase_027146_2);

#define VkglTestCase_027147_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_027147_2 "wclass_32_bits.r32ui_rg16f.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027147, VkglTestCase_027147_1, VkglTestCase_027147_2);

#define VkglTestCase_027148_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_027148_2 "class_32_bits.r32ui_rg16f.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027148, VkglTestCase_027148_1, VkglTestCase_027148_2);

#define VkglTestCase_027149_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_027149_2 "class_32_bits.r32ui_rg16f.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027149, VkglTestCase_027149_1, VkglTestCase_027149_2);

#define VkglTestCase_027150_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_027150_2 "wclass_32_bits.r32ui_rg16f.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027150, VkglTestCase_027150_1, VkglTestCase_027150_2);

#define VkglTestCase_027151_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_027151_2 "ss_32_bits.r32ui_rg16f.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027151, VkglTestCase_027151_1, VkglTestCase_027151_2);

#define VkglTestCase_027152_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_027152_2 "wclass_32_bits.r32ui_rg16f.renderbuffer_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027152, VkglTestCase_027152_1, VkglTestCase_027152_2);

#define VkglTestCase_027153_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_027153_2 "wclass_32_bits.r32ui_rg16f.renderbuffer_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027153, VkglTestCase_027153_1, VkglTestCase_027153_2);

#define VkglTestCase_027154_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_027154_2 "ewclass_32_bits.r32ui_rg16f.renderbuffer_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027154, VkglTestCase_027154_1, VkglTestCase_027154_2);

#define VkglTestCase_027155_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_027155_2 "ass_32_bits.r32ui_rg16f.renderbuffer_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027155, VkglTestCase_027155_1, VkglTestCase_027155_2);
