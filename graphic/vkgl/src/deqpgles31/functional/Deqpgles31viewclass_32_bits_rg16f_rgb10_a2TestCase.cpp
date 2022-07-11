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

#define VkglTestCase_027592_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_027592_2 "wclass_32_bits.rg16f_rgb10_a2.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027592, VkglTestCase_027592_1, VkglTestCase_027592_2);

#define VkglTestCase_027593_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_027593_2 "wclass_32_bits.rg16f_rgb10_a2.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027593, VkglTestCase_027593_1, VkglTestCase_027593_2);

#define VkglTestCase_027594_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_027594_2 "ewclass_32_bits.rg16f_rgb10_a2.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027594, VkglTestCase_027594_1, VkglTestCase_027594_2);

#define VkglTestCase_027595_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_027595_2 "ass_32_bits.rg16f_rgb10_a2.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027595, VkglTestCase_027595_1, VkglTestCase_027595_2);

#define VkglTestCase_027596_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_027596_2 "class_32_bits.rg16f_rgb10_a2.texture2d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027596, VkglTestCase_027596_1, VkglTestCase_027596_2);

#define VkglTestCase_027597_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_027597_2 "wclass_32_bits.rg16f_rgb10_a2.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027597, VkglTestCase_027597_1, VkglTestCase_027597_2);

#define VkglTestCase_027598_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_027598_2 "wclass_32_bits.rg16f_rgb10_a2.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027598, VkglTestCase_027598_1, VkglTestCase_027598_2);

#define VkglTestCase_027599_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_027599_2 "ewclass_32_bits.rg16f_rgb10_a2.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027599, VkglTestCase_027599_1, VkglTestCase_027599_2);

#define VkglTestCase_027600_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_027600_2 "ass_32_bits.rg16f_rgb10_a2.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027600, VkglTestCase_027600_1, VkglTestCase_027600_2);

#define VkglTestCase_027601_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_027601_2 "class_32_bits.rg16f_rgb10_a2.texture3d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027601, VkglTestCase_027601_1, VkglTestCase_027601_2);

#define VkglTestCase_027602_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_027602_2 "ewclass_32_bits.rg16f_rgb10_a2.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027602, VkglTestCase_027602_1, VkglTestCase_027602_2);

#define VkglTestCase_027603_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_027603_2 "ewclass_32_bits.rg16f_rgb10_a2.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027603, VkglTestCase_027603_1, VkglTestCase_027603_2);

#define VkglTestCase_027604_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_027604_2 "iewclass_32_bits.rg16f_rgb10_a2.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027604, VkglTestCase_027604_1, VkglTestCase_027604_2);

#define VkglTestCase_027605_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_027605_2 "lass_32_bits.rg16f_rgb10_a2.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027605, VkglTestCase_027605_1, VkglTestCase_027605_2);

#define VkglTestCase_027606_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_027606_2 "wclass_32_bits.rg16f_rgb10_a2.cubemap_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027606, VkglTestCase_027606_1, VkglTestCase_027606_2);

#define VkglTestCase_027607_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_027607_2 "ass_32_bits.rg16f_rgb10_a2.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027607, VkglTestCase_027607_1, VkglTestCase_027607_2);

#define VkglTestCase_027608_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_027608_2 "ass_32_bits.rg16f_rgb10_a2.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027608, VkglTestCase_027608_1, VkglTestCase_027608_2);

#define VkglTestCase_027609_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_027609_2 "lass_32_bits.rg16f_rgb10_a2.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027609, VkglTestCase_027609_1, VkglTestCase_027609_2);

#define VkglTestCase_027610_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass"
#define VkglTestCase_027610_2 "_32_bits.rg16f_rgb10_a2.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027610, VkglTestCase_027610_1, VkglTestCase_027610_2);

#define VkglTestCase_027611_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_027611_2 "ss_32_bits.rg16f_rgb10_a2.texture2d_array_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027611, VkglTestCase_027611_1, VkglTestCase_027611_2);
