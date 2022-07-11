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

#define VkglTestCase_026736_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_026736_2 "viewclass_32_bits.r32i_r32i.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026736, VkglTestCase_026736_1, VkglTestCase_026736_2);

#define VkglTestCase_026737_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_026737_2 "viewclass_32_bits.r32i_r32i.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026737, VkglTestCase_026737_1, VkglTestCase_026737_2);

#define VkglTestCase_026738_1 "dEQP-GLES31.functional.copy_image.non_compressed"
#define VkglTestCase_026738_2 ".viewclass_32_bits.r32i_r32i.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026738, VkglTestCase_026738_1, VkglTestCase_026738_2);

#define VkglTestCase_026739_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_026739_2 "wclass_32_bits.r32i_r32i.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026739, VkglTestCase_026739_1, VkglTestCase_026739_2);

#define VkglTestCase_026740_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_026740_2 "ewclass_32_bits.r32i_r32i.texture2d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026740, VkglTestCase_026740_1, VkglTestCase_026740_2);

#define VkglTestCase_026741_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_026741_2 "viewclass_32_bits.r32i_r32i.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026741, VkglTestCase_026741_1, VkglTestCase_026741_2);

#define VkglTestCase_026742_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_026742_2 "viewclass_32_bits.r32i_r32i.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026742, VkglTestCase_026742_1, VkglTestCase_026742_2);

#define VkglTestCase_026743_1 "dEQP-GLES31.functional.copy_image.non_compressed"
#define VkglTestCase_026743_2 ".viewclass_32_bits.r32i_r32i.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026743, VkglTestCase_026743_1, VkglTestCase_026743_2);

#define VkglTestCase_026744_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_026744_2 "wclass_32_bits.r32i_r32i.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026744, VkglTestCase_026744_1, VkglTestCase_026744_2);

#define VkglTestCase_026745_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_026745_2 "ewclass_32_bits.r32i_r32i.texture3d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026745, VkglTestCase_026745_1, VkglTestCase_026745_2);

#define VkglTestCase_026746_1 "dEQP-GLES31.functional.copy_image.non_compressed"
#define VkglTestCase_026746_2 ".viewclass_32_bits.r32i_r32i.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026746, VkglTestCase_026746_1, VkglTestCase_026746_2);

#define VkglTestCase_026747_1 "dEQP-GLES31.functional.copy_image.non_compressed"
#define VkglTestCase_026747_2 ".viewclass_32_bits.r32i_r32i.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026747, VkglTestCase_026747_1, VkglTestCase_026747_2);

#define VkglTestCase_026748_1 "dEQP-GLES31.functional.copy_image.non_compresse"
#define VkglTestCase_026748_2 "d.viewclass_32_bits.r32i_r32i.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026748, VkglTestCase_026748_1, VkglTestCase_026748_2);

#define VkglTestCase_026749_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_026749_2 "ewclass_32_bits.r32i_r32i.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026749, VkglTestCase_026749_1, VkglTestCase_026749_2);

#define VkglTestCase_026750_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_026750_2 "iewclass_32_bits.r32i_r32i.cubemap_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026750, VkglTestCase_026750_1, VkglTestCase_026750_2);

#define VkglTestCase_026751_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_026751_2 "wclass_32_bits.r32i_r32i.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026751, VkglTestCase_026751_1, VkglTestCase_026751_2);

#define VkglTestCase_026752_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_026752_2 "wclass_32_bits.r32i_r32i.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026752, VkglTestCase_026752_1, VkglTestCase_026752_2);

#define VkglTestCase_026753_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_026753_2 "ewclass_32_bits.r32i_r32i.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026753, VkglTestCase_026753_1, VkglTestCase_026753_2);

#define VkglTestCase_026754_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_026754_2 "ass_32_bits.r32i_r32i.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026754, VkglTestCase_026754_1, VkglTestCase_026754_2);

#define VkglTestCase_026755_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_026755_2 "lass_32_bits.r32i_r32i.texture2d_array_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026755, VkglTestCase_026755_1, VkglTestCase_026755_2);

#define VkglTestCase_026756_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_026756_2 "ewclass_32_bits.r32i_r32i.renderbuffer_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026756, VkglTestCase_026756_1, VkglTestCase_026756_2);

#define VkglTestCase_026757_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_026757_2 "ewclass_32_bits.r32i_r32i.renderbuffer_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026757, VkglTestCase_026757_1, VkglTestCase_026757_2);

#define VkglTestCase_026758_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_026758_2 "iewclass_32_bits.r32i_r32i.renderbuffer_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026758, VkglTestCase_026758_1, VkglTestCase_026758_2);

#define VkglTestCase_026759_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_026759_2 "lass_32_bits.r32i_r32i.renderbuffer_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026759, VkglTestCase_026759_1, VkglTestCase_026759_2);

#define VkglTestCase_026760_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_026760_2 "wclass_32_bits.r32i_r32i.renderbuffer_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026760, VkglTestCase_026760_1, VkglTestCase_026760_2);
