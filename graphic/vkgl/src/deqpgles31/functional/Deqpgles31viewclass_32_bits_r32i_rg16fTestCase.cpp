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

#define VkglTestCase_026786_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_026786_2 "iewclass_32_bits.r32i_rg16f.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026786, VkglTestCase_026786_1, VkglTestCase_026786_2);

#define VkglTestCase_026787_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_026787_2 "iewclass_32_bits.r32i_rg16f.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026787, VkglTestCase_026787_1, VkglTestCase_026787_2);

#define VkglTestCase_026788_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_026788_2 "viewclass_32_bits.r32i_rg16f.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026788, VkglTestCase_026788_1, VkglTestCase_026788_2);

#define VkglTestCase_026789_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_026789_2 "class_32_bits.r32i_rg16f.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026789, VkglTestCase_026789_1, VkglTestCase_026789_2);

#define VkglTestCase_026790_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_026790_2 "iewclass_32_bits.r32i_rg16f.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026790, VkglTestCase_026790_1, VkglTestCase_026790_2);

#define VkglTestCase_026791_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_026791_2 "iewclass_32_bits.r32i_rg16f.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026791, VkglTestCase_026791_1, VkglTestCase_026791_2);

#define VkglTestCase_026792_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_026792_2 "viewclass_32_bits.r32i_rg16f.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026792, VkglTestCase_026792_1, VkglTestCase_026792_2);

#define VkglTestCase_026793_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_026793_2 "class_32_bits.r32i_rg16f.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026793, VkglTestCase_026793_1, VkglTestCase_026793_2);

#define VkglTestCase_026794_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_026794_2 "viewclass_32_bits.r32i_rg16f.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026794, VkglTestCase_026794_1, VkglTestCase_026794_2);

#define VkglTestCase_026795_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_026795_2 "viewclass_32_bits.r32i_rg16f.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026795, VkglTestCase_026795_1, VkglTestCase_026795_2);

#define VkglTestCase_026796_1 "dEQP-GLES31.functional.copy_image.non_compressed"
#define VkglTestCase_026796_2 ".viewclass_32_bits.r32i_rg16f.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026796, VkglTestCase_026796_1, VkglTestCase_026796_2);

#define VkglTestCase_026797_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_026797_2 "wclass_32_bits.r32i_rg16f.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026797, VkglTestCase_026797_1, VkglTestCase_026797_2);

#define VkglTestCase_026798_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_026798_2 "class_32_bits.r32i_rg16f.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026798, VkglTestCase_026798_1, VkglTestCase_026798_2);

#define VkglTestCase_026799_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_026799_2 "class_32_bits.r32i_rg16f.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026799, VkglTestCase_026799_1, VkglTestCase_026799_2);

#define VkglTestCase_026800_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_026800_2 "wclass_32_bits.r32i_rg16f.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026800, VkglTestCase_026800_1, VkglTestCase_026800_2);

#define VkglTestCase_026801_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_026801_2 "ss_32_bits.r32i_rg16f.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026801, VkglTestCase_026801_1, VkglTestCase_026801_2);

#define VkglTestCase_026802_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_026802_2 "ewclass_32_bits.r32i_rg16f.renderbuffer_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026802, VkglTestCase_026802_1, VkglTestCase_026802_2);

#define VkglTestCase_026803_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_026803_2 "ewclass_32_bits.r32i_rg16f.renderbuffer_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026803, VkglTestCase_026803_1, VkglTestCase_026803_2);

#define VkglTestCase_026804_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_026804_2 "iewclass_32_bits.r32i_rg16f.renderbuffer_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026804, VkglTestCase_026804_1, VkglTestCase_026804_2);

#define VkglTestCase_026805_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_026805_2 "lass_32_bits.r32i_rg16f.renderbuffer_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026805, VkglTestCase_026805_1, VkglTestCase_026805_2);
