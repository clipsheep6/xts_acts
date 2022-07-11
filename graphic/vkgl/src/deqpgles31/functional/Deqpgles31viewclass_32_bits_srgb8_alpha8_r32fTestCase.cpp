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

#define VkglTestCase_030610_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_030610_2 "class_32_bits.srgb8_alpha8_r32f.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030610, VkglTestCase_030610_1, VkglTestCase_030610_2);

#define VkglTestCase_030611_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_030611_2 "class_32_bits.srgb8_alpha8_r32f.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030611, VkglTestCase_030611_1, VkglTestCase_030611_2);

#define VkglTestCase_030612_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_030612_2 "wclass_32_bits.srgb8_alpha8_r32f.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030612, VkglTestCase_030612_1, VkglTestCase_030612_2);

#define VkglTestCase_030613_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_030613_2 "ss_32_bits.srgb8_alpha8_r32f.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030613, VkglTestCase_030613_1, VkglTestCase_030613_2);

#define VkglTestCase_030614_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_030614_2 "class_32_bits.srgb8_alpha8_r32f.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030614, VkglTestCase_030614_1, VkglTestCase_030614_2);

#define VkglTestCase_030615_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_030615_2 "class_32_bits.srgb8_alpha8_r32f.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030615, VkglTestCase_030615_1, VkglTestCase_030615_2);

#define VkglTestCase_030616_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_030616_2 "wclass_32_bits.srgb8_alpha8_r32f.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030616, VkglTestCase_030616_1, VkglTestCase_030616_2);

#define VkglTestCase_030617_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_030617_2 "ss_32_bits.srgb8_alpha8_r32f.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030617, VkglTestCase_030617_1, VkglTestCase_030617_2);

#define VkglTestCase_030618_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_030618_2 "wclass_32_bits.srgb8_alpha8_r32f.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030618, VkglTestCase_030618_1, VkglTestCase_030618_2);

#define VkglTestCase_030619_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_030619_2 "wclass_32_bits.srgb8_alpha8_r32f.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030619, VkglTestCase_030619_1, VkglTestCase_030619_2);

#define VkglTestCase_030620_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_030620_2 "ewclass_32_bits.srgb8_alpha8_r32f.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030620, VkglTestCase_030620_1, VkglTestCase_030620_2);

#define VkglTestCase_030621_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_030621_2 "ass_32_bits.srgb8_alpha8_r32f.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030621, VkglTestCase_030621_1, VkglTestCase_030621_2);

#define VkglTestCase_030622_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_030622_2 "ss_32_bits.srgb8_alpha8_r32f.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030622, VkglTestCase_030622_1, VkglTestCase_030622_2);

#define VkglTestCase_030623_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_030623_2 "ss_32_bits.srgb8_alpha8_r32f.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030623, VkglTestCase_030623_1, VkglTestCase_030623_2);

#define VkglTestCase_030624_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_030624_2 "ass_32_bits.srgb8_alpha8_r32f.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030624, VkglTestCase_030624_1, VkglTestCase_030624_2);

#define VkglTestCase_030625_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_"
#define VkglTestCase_030625_2 "32_bits.srgb8_alpha8_r32f.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030625, VkglTestCase_030625_1, VkglTestCase_030625_2);

#define VkglTestCase_030626_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_030626_2 "ass_32_bits.srgb8_alpha8_r32f.renderbuffer_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030626, VkglTestCase_030626_1, VkglTestCase_030626_2);

#define VkglTestCase_030627_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_030627_2 "ass_32_bits.srgb8_alpha8_r32f.renderbuffer_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030627, VkglTestCase_030627_1, VkglTestCase_030627_2);

#define VkglTestCase_030628_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_030628_2 "lass_32_bits.srgb8_alpha8_r32f.renderbuffer_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030628, VkglTestCase_030628_1, VkglTestCase_030628_2);

#define VkglTestCase_030629_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass"
#define VkglTestCase_030629_2 "_32_bits.srgb8_alpha8_r32f.renderbuffer_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030629, VkglTestCase_030629_1, VkglTestCase_030629_2);
