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
#include "../ActsDeqpgles310031TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_030574_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_030574_2 "s_32_bits.rgba8_snorm_srgb8_alpha8.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030574, VkglTestCase_030574_1, VkglTestCase_030574_2);

#define VkglTestCase_030575_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_030575_2 "s_32_bits.rgba8_snorm_srgb8_alpha8.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030575, VkglTestCase_030575_1, VkglTestCase_030575_2);

#define VkglTestCase_030576_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_030576_2 "ss_32_bits.rgba8_snorm_srgb8_alpha8.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030576, VkglTestCase_030576_1, VkglTestCase_030576_2);

#define VkglTestCase_030577_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_3"
#define VkglTestCase_030577_2 "2_bits.rgba8_snorm_srgb8_alpha8.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030577, VkglTestCase_030577_1, VkglTestCase_030577_2);

#define VkglTestCase_030578_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass"
#define VkglTestCase_030578_2 "_32_bits.rgba8_snorm_srgb8_alpha8.texture2d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030578, VkglTestCase_030578_1, VkglTestCase_030578_2);

#define VkglTestCase_030579_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_030579_2 "s_32_bits.rgba8_snorm_srgb8_alpha8.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030579, VkglTestCase_030579_1, VkglTestCase_030579_2);

#define VkglTestCase_030580_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_030580_2 "s_32_bits.rgba8_snorm_srgb8_alpha8.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030580, VkglTestCase_030580_1, VkglTestCase_030580_2);

#define VkglTestCase_030581_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_030581_2 "ss_32_bits.rgba8_snorm_srgb8_alpha8.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030581, VkglTestCase_030581_1, VkglTestCase_030581_2);

#define VkglTestCase_030582_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_3"
#define VkglTestCase_030582_2 "2_bits.rgba8_snorm_srgb8_alpha8.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030582, VkglTestCase_030582_1, VkglTestCase_030582_2);

#define VkglTestCase_030583_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass"
#define VkglTestCase_030583_2 "_32_bits.rgba8_snorm_srgb8_alpha8.texture3d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030583, VkglTestCase_030583_1, VkglTestCase_030583_2);

#define VkglTestCase_030584_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_030584_2 "ss_32_bits.rgba8_snorm_srgb8_alpha8.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030584, VkglTestCase_030584_1, VkglTestCase_030584_2);

#define VkglTestCase_030585_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_030585_2 "ss_32_bits.rgba8_snorm_srgb8_alpha8.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030585, VkglTestCase_030585_1, VkglTestCase_030585_2);

#define VkglTestCase_030586_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_030586_2 "ass_32_bits.rgba8_snorm_srgb8_alpha8.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030586, VkglTestCase_030586_1, VkglTestCase_030586_2);

#define VkglTestCase_030587_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_"
#define VkglTestCase_030587_2 "32_bits.rgba8_snorm_srgb8_alpha8.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030587, VkglTestCase_030587_1, VkglTestCase_030587_2);

#define VkglTestCase_030588_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_030588_2 "s_32_bits.rgba8_snorm_srgb8_alpha8.cubemap_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030588, VkglTestCase_030588_1, VkglTestCase_030588_2);

#define VkglTestCase_030589_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_3"
#define VkglTestCase_030589_2 "2_bits.rgba8_snorm_srgb8_alpha8.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030589, VkglTestCase_030589_1, VkglTestCase_030589_2);

#define VkglTestCase_030590_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_3"
#define VkglTestCase_030590_2 "2_bits.rgba8_snorm_srgb8_alpha8.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030590, VkglTestCase_030590_1, VkglTestCase_030590_2);

#define VkglTestCase_030591_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_"
#define VkglTestCase_030591_2 "32_bits.rgba8_snorm_srgb8_alpha8.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030591, VkglTestCase_030591_1, VkglTestCase_030591_2);

#define VkglTestCase_030592_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_32_b"
#define VkglTestCase_030592_2 "its.rgba8_snorm_srgb8_alpha8.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030592, VkglTestCase_030592_1, VkglTestCase_030592_2);

#define VkglTestCase_030593_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_32"
#define VkglTestCase_030593_2 "_bits.rgba8_snorm_srgb8_alpha8.texture2d_array_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030593, VkglTestCase_030593_1, VkglTestCase_030593_2);
