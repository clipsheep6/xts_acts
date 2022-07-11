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

#define VkglTestCase_028718_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_028718_2 "iewclass_32_bits.rgba8i_r32i.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028718, VkglTestCase_028718_1, VkglTestCase_028718_2);

#define VkglTestCase_028719_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_028719_2 "iewclass_32_bits.rgba8i_r32i.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028719, VkglTestCase_028719_1, VkglTestCase_028719_2);

#define VkglTestCase_028720_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_028720_2 "viewclass_32_bits.rgba8i_r32i.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028720, VkglTestCase_028720_1, VkglTestCase_028720_2);

#define VkglTestCase_028721_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_028721_2 "class_32_bits.rgba8i_r32i.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028721, VkglTestCase_028721_1, VkglTestCase_028721_2);

#define VkglTestCase_028722_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_028722_2 "wclass_32_bits.rgba8i_r32i.texture2d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028722, VkglTestCase_028722_1, VkglTestCase_028722_2);

#define VkglTestCase_028723_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_028723_2 "iewclass_32_bits.rgba8i_r32i.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028723, VkglTestCase_028723_1, VkglTestCase_028723_2);

#define VkglTestCase_028724_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_028724_2 "iewclass_32_bits.rgba8i_r32i.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028724, VkglTestCase_028724_1, VkglTestCase_028724_2);

#define VkglTestCase_028725_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_028725_2 "viewclass_32_bits.rgba8i_r32i.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028725, VkglTestCase_028725_1, VkglTestCase_028725_2);

#define VkglTestCase_028726_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_028726_2 "class_32_bits.rgba8i_r32i.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028726, VkglTestCase_028726_1, VkglTestCase_028726_2);

#define VkglTestCase_028727_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_028727_2 "wclass_32_bits.rgba8i_r32i.texture3d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028727, VkglTestCase_028727_1, VkglTestCase_028727_2);

#define VkglTestCase_028728_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_028728_2 "viewclass_32_bits.rgba8i_r32i.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028728, VkglTestCase_028728_1, VkglTestCase_028728_2);

#define VkglTestCase_028729_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_028729_2 "viewclass_32_bits.rgba8i_r32i.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028729, VkglTestCase_028729_1, VkglTestCase_028729_2);

#define VkglTestCase_028730_1 "dEQP-GLES31.functional.copy_image.non_compressed"
#define VkglTestCase_028730_2 ".viewclass_32_bits.rgba8i_r32i.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028730, VkglTestCase_028730_1, VkglTestCase_028730_2);

#define VkglTestCase_028731_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_028731_2 "wclass_32_bits.rgba8i_r32i.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028731, VkglTestCase_028731_1, VkglTestCase_028731_2);

#define VkglTestCase_028732_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_028732_2 "ewclass_32_bits.rgba8i_r32i.cubemap_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028732, VkglTestCase_028732_1, VkglTestCase_028732_2);

#define VkglTestCase_028733_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_028733_2 "class_32_bits.rgba8i_r32i.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028733, VkglTestCase_028733_1, VkglTestCase_028733_2);

#define VkglTestCase_028734_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_028734_2 "class_32_bits.rgba8i_r32i.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028734, VkglTestCase_028734_1, VkglTestCase_028734_2);

#define VkglTestCase_028735_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_028735_2 "wclass_32_bits.rgba8i_r32i.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028735, VkglTestCase_028735_1, VkglTestCase_028735_2);

#define VkglTestCase_028736_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_028736_2 "ss_32_bits.rgba8i_r32i.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028736, VkglTestCase_028736_1, VkglTestCase_028736_2);

#define VkglTestCase_028737_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_028737_2 "ass_32_bits.rgba8i_r32i.texture2d_array_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028737, VkglTestCase_028737_1, VkglTestCase_028737_2);

#define VkglTestCase_028738_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_028738_2 "wclass_32_bits.rgba8i_r32i.renderbuffer_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028738, VkglTestCase_028738_1, VkglTestCase_028738_2);

#define VkglTestCase_028739_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_028739_2 "wclass_32_bits.rgba8i_r32i.renderbuffer_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028739, VkglTestCase_028739_1, VkglTestCase_028739_2);

#define VkglTestCase_028740_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_028740_2 "ewclass_32_bits.rgba8i_r32i.renderbuffer_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028740, VkglTestCase_028740_1, VkglTestCase_028740_2);

#define VkglTestCase_028741_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_028741_2 "ass_32_bits.rgba8i_r32i.renderbuffer_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028741, VkglTestCase_028741_1, VkglTestCase_028741_2);

#define VkglTestCase_028742_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_028742_2 "class_32_bits.rgba8i_r32i.renderbuffer_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028742, VkglTestCase_028742_1, VkglTestCase_028742_2);
