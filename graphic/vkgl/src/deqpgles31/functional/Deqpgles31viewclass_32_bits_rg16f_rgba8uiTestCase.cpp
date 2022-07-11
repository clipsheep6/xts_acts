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

#define VkglTestCase_027552_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_027552_2 "ewclass_32_bits.rg16f_rgba8ui.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027552, VkglTestCase_027552_1, VkglTestCase_027552_2);

#define VkglTestCase_027553_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_027553_2 "ewclass_32_bits.rg16f_rgba8ui.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027553, VkglTestCase_027553_1, VkglTestCase_027553_2);

#define VkglTestCase_027554_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_027554_2 "iewclass_32_bits.rg16f_rgba8ui.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027554, VkglTestCase_027554_1, VkglTestCase_027554_2);

#define VkglTestCase_027555_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_027555_2 "lass_32_bits.rg16f_rgba8ui.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027555, VkglTestCase_027555_1, VkglTestCase_027555_2);

#define VkglTestCase_027556_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_027556_2 "class_32_bits.rg16f_rgba8ui.texture2d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027556, VkglTestCase_027556_1, VkglTestCase_027556_2);

#define VkglTestCase_027557_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_027557_2 "ewclass_32_bits.rg16f_rgba8ui.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027557, VkglTestCase_027557_1, VkglTestCase_027557_2);

#define VkglTestCase_027558_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_027558_2 "ewclass_32_bits.rg16f_rgba8ui.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027558, VkglTestCase_027558_1, VkglTestCase_027558_2);

#define VkglTestCase_027559_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_027559_2 "iewclass_32_bits.rg16f_rgba8ui.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027559, VkglTestCase_027559_1, VkglTestCase_027559_2);

#define VkglTestCase_027560_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_027560_2 "lass_32_bits.rg16f_rgba8ui.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027560, VkglTestCase_027560_1, VkglTestCase_027560_2);

#define VkglTestCase_027561_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_027561_2 "class_32_bits.rg16f_rgba8ui.texture3d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027561, VkglTestCase_027561_1, VkglTestCase_027561_2);

#define VkglTestCase_027562_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_027562_2 "iewclass_32_bits.rg16f_rgba8ui.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027562, VkglTestCase_027562_1, VkglTestCase_027562_2);

#define VkglTestCase_027563_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_027563_2 "iewclass_32_bits.rg16f_rgba8ui.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027563, VkglTestCase_027563_1, VkglTestCase_027563_2);

#define VkglTestCase_027564_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_027564_2 "viewclass_32_bits.rg16f_rgba8ui.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027564, VkglTestCase_027564_1, VkglTestCase_027564_2);

#define VkglTestCase_027565_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_027565_2 "class_32_bits.rg16f_rgba8ui.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027565, VkglTestCase_027565_1, VkglTestCase_027565_2);

#define VkglTestCase_027566_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_027566_2 "wclass_32_bits.rg16f_rgba8ui.cubemap_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027566, VkglTestCase_027566_1, VkglTestCase_027566_2);

#define VkglTestCase_027567_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_027567_2 "lass_32_bits.rg16f_rgba8ui.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027567, VkglTestCase_027567_1, VkglTestCase_027567_2);

#define VkglTestCase_027568_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_027568_2 "lass_32_bits.rg16f_rgba8ui.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027568, VkglTestCase_027568_1, VkglTestCase_027568_2);

#define VkglTestCase_027569_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_027569_2 "class_32_bits.rg16f_rgba8ui.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027569, VkglTestCase_027569_1, VkglTestCase_027569_2);

#define VkglTestCase_027570_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_027570_2 "s_32_bits.rg16f_rgba8ui.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027570, VkglTestCase_027570_1, VkglTestCase_027570_2);

#define VkglTestCase_027571_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_027571_2 "ss_32_bits.rg16f_rgba8ui.texture2d_array_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027571, VkglTestCase_027571_1, VkglTestCase_027571_2);
