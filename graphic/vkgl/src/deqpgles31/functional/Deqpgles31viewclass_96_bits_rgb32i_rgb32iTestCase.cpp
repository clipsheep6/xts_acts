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
#include "../ActsDeqpgles310026TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_025508_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_025508_2 "ewclass_96_bits.rgb32i_rgb32i.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025508, VkglTestCase_025508_1, VkglTestCase_025508_2);

#define VkglTestCase_025509_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_025509_2 "ewclass_96_bits.rgb32i_rgb32i.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025509, VkglTestCase_025509_1, VkglTestCase_025509_2);

#define VkglTestCase_025510_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_025510_2 "iewclass_96_bits.rgb32i_rgb32i.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025510, VkglTestCase_025510_1, VkglTestCase_025510_2);

#define VkglTestCase_025511_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_025511_2 "lass_96_bits.rgb32i_rgb32i.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025511, VkglTestCase_025511_1, VkglTestCase_025511_2);

#define VkglTestCase_025512_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_025512_2 "ewclass_96_bits.rgb32i_rgb32i.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025512, VkglTestCase_025512_1, VkglTestCase_025512_2);

#define VkglTestCase_025513_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_025513_2 "ewclass_96_bits.rgb32i_rgb32i.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025513, VkglTestCase_025513_1, VkglTestCase_025513_2);

#define VkglTestCase_025514_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_025514_2 "iewclass_96_bits.rgb32i_rgb32i.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025514, VkglTestCase_025514_1, VkglTestCase_025514_2);

#define VkglTestCase_025515_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_025515_2 "lass_96_bits.rgb32i_rgb32i.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025515, VkglTestCase_025515_1, VkglTestCase_025515_2);

#define VkglTestCase_025516_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_025516_2 "iewclass_96_bits.rgb32i_rgb32i.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025516, VkglTestCase_025516_1, VkglTestCase_025516_2);

#define VkglTestCase_025517_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_025517_2 "iewclass_96_bits.rgb32i_rgb32i.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025517, VkglTestCase_025517_1, VkglTestCase_025517_2);

#define VkglTestCase_025518_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_025518_2 "viewclass_96_bits.rgb32i_rgb32i.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025518, VkglTestCase_025518_1, VkglTestCase_025518_2);

#define VkglTestCase_025519_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_025519_2 "class_96_bits.rgb32i_rgb32i.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025519, VkglTestCase_025519_1, VkglTestCase_025519_2);

#define VkglTestCase_025520_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_025520_2 "lass_96_bits.rgb32i_rgb32i.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025520, VkglTestCase_025520_1, VkglTestCase_025520_2);

#define VkglTestCase_025521_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_025521_2 "lass_96_bits.rgb32i_rgb32i.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025521, VkglTestCase_025521_1, VkglTestCase_025521_2);

#define VkglTestCase_025522_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_025522_2 "class_96_bits.rgb32i_rgb32i.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025522, VkglTestCase_025522_1, VkglTestCase_025522_2);

#define VkglTestCase_025523_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_025523_2 "s_96_bits.rgb32i_rgb32i.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025523, VkglTestCase_025523_1, VkglTestCase_025523_2);
