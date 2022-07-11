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

#define VkglTestCase_027436_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_027436_2 "iewclass_32_bits.rg16f_r32ui.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027436, VkglTestCase_027436_1, VkglTestCase_027436_2);

#define VkglTestCase_027437_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_027437_2 "iewclass_32_bits.rg16f_r32ui.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027437, VkglTestCase_027437_1, VkglTestCase_027437_2);

#define VkglTestCase_027438_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_027438_2 "viewclass_32_bits.rg16f_r32ui.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027438, VkglTestCase_027438_1, VkglTestCase_027438_2);

#define VkglTestCase_027439_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_027439_2 "class_32_bits.rg16f_r32ui.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027439, VkglTestCase_027439_1, VkglTestCase_027439_2);

#define VkglTestCase_027440_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_027440_2 "wclass_32_bits.rg16f_r32ui.texture2d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027440, VkglTestCase_027440_1, VkglTestCase_027440_2);

#define VkglTestCase_027441_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_027441_2 "iewclass_32_bits.rg16f_r32ui.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027441, VkglTestCase_027441_1, VkglTestCase_027441_2);

#define VkglTestCase_027442_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_027442_2 "iewclass_32_bits.rg16f_r32ui.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027442, VkglTestCase_027442_1, VkglTestCase_027442_2);

#define VkglTestCase_027443_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_027443_2 "viewclass_32_bits.rg16f_r32ui.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027443, VkglTestCase_027443_1, VkglTestCase_027443_2);

#define VkglTestCase_027444_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_027444_2 "class_32_bits.rg16f_r32ui.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027444, VkglTestCase_027444_1, VkglTestCase_027444_2);

#define VkglTestCase_027445_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_027445_2 "wclass_32_bits.rg16f_r32ui.texture3d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027445, VkglTestCase_027445_1, VkglTestCase_027445_2);

#define VkglTestCase_027446_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_027446_2 "viewclass_32_bits.rg16f_r32ui.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027446, VkglTestCase_027446_1, VkglTestCase_027446_2);

#define VkglTestCase_027447_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_027447_2 "viewclass_32_bits.rg16f_r32ui.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027447, VkglTestCase_027447_1, VkglTestCase_027447_2);

#define VkglTestCase_027448_1 "dEQP-GLES31.functional.copy_image.non_compressed"
#define VkglTestCase_027448_2 ".viewclass_32_bits.rg16f_r32ui.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027448, VkglTestCase_027448_1, VkglTestCase_027448_2);

#define VkglTestCase_027449_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_027449_2 "wclass_32_bits.rg16f_r32ui.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027449, VkglTestCase_027449_1, VkglTestCase_027449_2);

#define VkglTestCase_027450_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_027450_2 "ewclass_32_bits.rg16f_r32ui.cubemap_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027450, VkglTestCase_027450_1, VkglTestCase_027450_2);

#define VkglTestCase_027451_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_027451_2 "class_32_bits.rg16f_r32ui.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027451, VkglTestCase_027451_1, VkglTestCase_027451_2);

#define VkglTestCase_027452_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_027452_2 "class_32_bits.rg16f_r32ui.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027452, VkglTestCase_027452_1, VkglTestCase_027452_2);

#define VkglTestCase_027453_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_027453_2 "wclass_32_bits.rg16f_r32ui.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027453, VkglTestCase_027453_1, VkglTestCase_027453_2);

#define VkglTestCase_027454_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_027454_2 "ss_32_bits.rg16f_r32ui.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027454, VkglTestCase_027454_1, VkglTestCase_027454_2);

#define VkglTestCase_027455_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_027455_2 "ass_32_bits.rg16f_r32ui.texture2d_array_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027455, VkglTestCase_027455_1, VkglTestCase_027455_2);
