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

#define VkglTestCase_028438_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_028438_2 "iewclass_32_bits.rgba8_rg16i.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028438, VkglTestCase_028438_1, VkglTestCase_028438_2);

#define VkglTestCase_028439_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_028439_2 "iewclass_32_bits.rgba8_rg16i.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028439, VkglTestCase_028439_1, VkglTestCase_028439_2);

#define VkglTestCase_028440_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_028440_2 "viewclass_32_bits.rgba8_rg16i.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028440, VkglTestCase_028440_1, VkglTestCase_028440_2);

#define VkglTestCase_028441_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_028441_2 "class_32_bits.rgba8_rg16i.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028441, VkglTestCase_028441_1, VkglTestCase_028441_2);

#define VkglTestCase_028442_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_028442_2 "wclass_32_bits.rgba8_rg16i.texture2d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028442, VkglTestCase_028442_1, VkglTestCase_028442_2);

#define VkglTestCase_028443_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_028443_2 "iewclass_32_bits.rgba8_rg16i.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028443, VkglTestCase_028443_1, VkglTestCase_028443_2);

#define VkglTestCase_028444_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_028444_2 "iewclass_32_bits.rgba8_rg16i.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028444, VkglTestCase_028444_1, VkglTestCase_028444_2);

#define VkglTestCase_028445_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_028445_2 "viewclass_32_bits.rgba8_rg16i.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028445, VkglTestCase_028445_1, VkglTestCase_028445_2);

#define VkglTestCase_028446_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_028446_2 "class_32_bits.rgba8_rg16i.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028446, VkglTestCase_028446_1, VkglTestCase_028446_2);

#define VkglTestCase_028447_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_028447_2 "wclass_32_bits.rgba8_rg16i.texture3d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028447, VkglTestCase_028447_1, VkglTestCase_028447_2);

#define VkglTestCase_028448_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_028448_2 "viewclass_32_bits.rgba8_rg16i.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028448, VkglTestCase_028448_1, VkglTestCase_028448_2);

#define VkglTestCase_028449_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_028449_2 "viewclass_32_bits.rgba8_rg16i.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028449, VkglTestCase_028449_1, VkglTestCase_028449_2);

#define VkglTestCase_028450_1 "dEQP-GLES31.functional.copy_image.non_compressed"
#define VkglTestCase_028450_2 ".viewclass_32_bits.rgba8_rg16i.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028450, VkglTestCase_028450_1, VkglTestCase_028450_2);

#define VkglTestCase_028451_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_028451_2 "wclass_32_bits.rgba8_rg16i.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028451, VkglTestCase_028451_1, VkglTestCase_028451_2);

#define VkglTestCase_028452_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_028452_2 "ewclass_32_bits.rgba8_rg16i.cubemap_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028452, VkglTestCase_028452_1, VkglTestCase_028452_2);

#define VkglTestCase_028453_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_028453_2 "class_32_bits.rgba8_rg16i.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028453, VkglTestCase_028453_1, VkglTestCase_028453_2);

#define VkglTestCase_028454_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_028454_2 "class_32_bits.rgba8_rg16i.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028454, VkglTestCase_028454_1, VkglTestCase_028454_2);

#define VkglTestCase_028455_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_028455_2 "wclass_32_bits.rgba8_rg16i.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028455, VkglTestCase_028455_1, VkglTestCase_028455_2);

#define VkglTestCase_028456_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_028456_2 "ss_32_bits.rgba8_rg16i.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028456, VkglTestCase_028456_1, VkglTestCase_028456_2);

#define VkglTestCase_028457_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_028457_2 "ass_32_bits.rgba8_rg16i.texture2d_array_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028457, VkglTestCase_028457_1, VkglTestCase_028457_2);

#define VkglTestCase_028458_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_028458_2 "wclass_32_bits.rgba8_rg16i.renderbuffer_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028458, VkglTestCase_028458_1, VkglTestCase_028458_2);

#define VkglTestCase_028459_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_028459_2 "wclass_32_bits.rgba8_rg16i.renderbuffer_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028459, VkglTestCase_028459_1, VkglTestCase_028459_2);

#define VkglTestCase_028460_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_028460_2 "ewclass_32_bits.rgba8_rg16i.renderbuffer_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028460, VkglTestCase_028460_1, VkglTestCase_028460_2);

#define VkglTestCase_028461_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_028461_2 "ass_32_bits.rgba8_rg16i.renderbuffer_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028461, VkglTestCase_028461_1, VkglTestCase_028461_2);

#define VkglTestCase_028462_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_028462_2 "class_32_bits.rgba8_rg16i.renderbuffer_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028462, VkglTestCase_028462_1, VkglTestCase_028462_2);
