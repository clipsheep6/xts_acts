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

#define VkglTestCase_026580_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_026580_2 "iewclass_32_bits.r32f_rgba8.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026580, VkglTestCase_026580_1, VkglTestCase_026580_2);

#define VkglTestCase_026581_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_026581_2 "iewclass_32_bits.r32f_rgba8.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026581, VkglTestCase_026581_1, VkglTestCase_026581_2);

#define VkglTestCase_026582_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_026582_2 "viewclass_32_bits.r32f_rgba8.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026582, VkglTestCase_026582_1, VkglTestCase_026582_2);

#define VkglTestCase_026583_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_026583_2 "class_32_bits.r32f_rgba8.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026583, VkglTestCase_026583_1, VkglTestCase_026583_2);

#define VkglTestCase_026584_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_026584_2 "ewclass_32_bits.r32f_rgba8.texture2d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026584, VkglTestCase_026584_1, VkglTestCase_026584_2);

#define VkglTestCase_026585_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_026585_2 "iewclass_32_bits.r32f_rgba8.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026585, VkglTestCase_026585_1, VkglTestCase_026585_2);

#define VkglTestCase_026586_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_026586_2 "iewclass_32_bits.r32f_rgba8.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026586, VkglTestCase_026586_1, VkglTestCase_026586_2);

#define VkglTestCase_026587_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_026587_2 "viewclass_32_bits.r32f_rgba8.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026587, VkglTestCase_026587_1, VkglTestCase_026587_2);

#define VkglTestCase_026588_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_026588_2 "class_32_bits.r32f_rgba8.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026588, VkglTestCase_026588_1, VkglTestCase_026588_2);

#define VkglTestCase_026589_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_026589_2 "ewclass_32_bits.r32f_rgba8.texture3d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026589, VkglTestCase_026589_1, VkglTestCase_026589_2);

#define VkglTestCase_026590_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_026590_2 "viewclass_32_bits.r32f_rgba8.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026590, VkglTestCase_026590_1, VkglTestCase_026590_2);

#define VkglTestCase_026591_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_026591_2 "viewclass_32_bits.r32f_rgba8.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026591, VkglTestCase_026591_1, VkglTestCase_026591_2);

#define VkglTestCase_026592_1 "dEQP-GLES31.functional.copy_image.non_compressed"
#define VkglTestCase_026592_2 ".viewclass_32_bits.r32f_rgba8.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026592, VkglTestCase_026592_1, VkglTestCase_026592_2);

#define VkglTestCase_026593_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_026593_2 "wclass_32_bits.r32f_rgba8.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026593, VkglTestCase_026593_1, VkglTestCase_026593_2);

#define VkglTestCase_026594_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_026594_2 "iewclass_32_bits.r32f_rgba8.cubemap_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026594, VkglTestCase_026594_1, VkglTestCase_026594_2);

#define VkglTestCase_026595_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_026595_2 "class_32_bits.r32f_rgba8.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026595, VkglTestCase_026595_1, VkglTestCase_026595_2);

#define VkglTestCase_026596_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_026596_2 "class_32_bits.r32f_rgba8.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026596, VkglTestCase_026596_1, VkglTestCase_026596_2);

#define VkglTestCase_026597_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_026597_2 "wclass_32_bits.r32f_rgba8.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026597, VkglTestCase_026597_1, VkglTestCase_026597_2);

#define VkglTestCase_026598_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_026598_2 "ss_32_bits.r32f_rgba8.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026598, VkglTestCase_026598_1, VkglTestCase_026598_2);

#define VkglTestCase_026599_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_026599_2 "lass_32_bits.r32f_rgba8.texture2d_array_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026599, VkglTestCase_026599_1, VkglTestCase_026599_2);
