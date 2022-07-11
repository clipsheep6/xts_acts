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

#define VkglTestCase_026716_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_026716_2 "viewclass_32_bits.r32i_r32f.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026716, VkglTestCase_026716_1, VkglTestCase_026716_2);

#define VkglTestCase_026717_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_026717_2 "viewclass_32_bits.r32i_r32f.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026717, VkglTestCase_026717_1, VkglTestCase_026717_2);

#define VkglTestCase_026718_1 "dEQP-GLES31.functional.copy_image.non_compressed"
#define VkglTestCase_026718_2 ".viewclass_32_bits.r32i_r32f.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026718, VkglTestCase_026718_1, VkglTestCase_026718_2);

#define VkglTestCase_026719_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_026719_2 "wclass_32_bits.r32i_r32f.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026719, VkglTestCase_026719_1, VkglTestCase_026719_2);

#define VkglTestCase_026720_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_026720_2 "viewclass_32_bits.r32i_r32f.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026720, VkglTestCase_026720_1, VkglTestCase_026720_2);

#define VkglTestCase_026721_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_026721_2 "viewclass_32_bits.r32i_r32f.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026721, VkglTestCase_026721_1, VkglTestCase_026721_2);

#define VkglTestCase_026722_1 "dEQP-GLES31.functional.copy_image.non_compressed"
#define VkglTestCase_026722_2 ".viewclass_32_bits.r32i_r32f.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026722, VkglTestCase_026722_1, VkglTestCase_026722_2);

#define VkglTestCase_026723_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_026723_2 "wclass_32_bits.r32i_r32f.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026723, VkglTestCase_026723_1, VkglTestCase_026723_2);

#define VkglTestCase_026724_1 "dEQP-GLES31.functional.copy_image.non_compressed"
#define VkglTestCase_026724_2 ".viewclass_32_bits.r32i_r32f.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026724, VkglTestCase_026724_1, VkglTestCase_026724_2);

#define VkglTestCase_026725_1 "dEQP-GLES31.functional.copy_image.non_compressed"
#define VkglTestCase_026725_2 ".viewclass_32_bits.r32i_r32f.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026725, VkglTestCase_026725_1, VkglTestCase_026725_2);

#define VkglTestCase_026726_1 "dEQP-GLES31.functional.copy_image.non_compresse"
#define VkglTestCase_026726_2 "d.viewclass_32_bits.r32i_r32f.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026726, VkglTestCase_026726_1, VkglTestCase_026726_2);

#define VkglTestCase_026727_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_026727_2 "ewclass_32_bits.r32i_r32f.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026727, VkglTestCase_026727_1, VkglTestCase_026727_2);

#define VkglTestCase_026728_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_026728_2 "wclass_32_bits.r32i_r32f.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026728, VkglTestCase_026728_1, VkglTestCase_026728_2);

#define VkglTestCase_026729_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_026729_2 "wclass_32_bits.r32i_r32f.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026729, VkglTestCase_026729_1, VkglTestCase_026729_2);

#define VkglTestCase_026730_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_026730_2 "ewclass_32_bits.r32i_r32f.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026730, VkglTestCase_026730_1, VkglTestCase_026730_2);

#define VkglTestCase_026731_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_026731_2 "ass_32_bits.r32i_r32f.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026731, VkglTestCase_026731_1, VkglTestCase_026731_2);

#define VkglTestCase_026732_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_026732_2 "ewclass_32_bits.r32i_r32f.renderbuffer_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026732, VkglTestCase_026732_1, VkglTestCase_026732_2);

#define VkglTestCase_026733_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_026733_2 "ewclass_32_bits.r32i_r32f.renderbuffer_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026733, VkglTestCase_026733_1, VkglTestCase_026733_2);

#define VkglTestCase_026734_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_026734_2 "iewclass_32_bits.r32i_r32f.renderbuffer_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026734, VkglTestCase_026734_1, VkglTestCase_026734_2);

#define VkglTestCase_026735_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_026735_2 "lass_32_bits.r32i_r32f.renderbuffer_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026735, VkglTestCase_026735_1, VkglTestCase_026735_2);
