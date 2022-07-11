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

#define VkglTestCase_027416_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_027416_2 "iewclass_32_bits.rg16f_r32i.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027416, VkglTestCase_027416_1, VkglTestCase_027416_2);

#define VkglTestCase_027417_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_027417_2 "iewclass_32_bits.rg16f_r32i.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027417, VkglTestCase_027417_1, VkglTestCase_027417_2);

#define VkglTestCase_027418_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_027418_2 "viewclass_32_bits.rg16f_r32i.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027418, VkglTestCase_027418_1, VkglTestCase_027418_2);

#define VkglTestCase_027419_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_027419_2 "class_32_bits.rg16f_r32i.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027419, VkglTestCase_027419_1, VkglTestCase_027419_2);

#define VkglTestCase_027420_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_027420_2 "ewclass_32_bits.rg16f_r32i.texture2d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027420, VkglTestCase_027420_1, VkglTestCase_027420_2);

#define VkglTestCase_027421_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_027421_2 "iewclass_32_bits.rg16f_r32i.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027421, VkglTestCase_027421_1, VkglTestCase_027421_2);

#define VkglTestCase_027422_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_027422_2 "iewclass_32_bits.rg16f_r32i.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027422, VkglTestCase_027422_1, VkglTestCase_027422_2);

#define VkglTestCase_027423_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_027423_2 "viewclass_32_bits.rg16f_r32i.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027423, VkglTestCase_027423_1, VkglTestCase_027423_2);

#define VkglTestCase_027424_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_027424_2 "class_32_bits.rg16f_r32i.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027424, VkglTestCase_027424_1, VkglTestCase_027424_2);

#define VkglTestCase_027425_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_027425_2 "ewclass_32_bits.rg16f_r32i.texture3d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027425, VkglTestCase_027425_1, VkglTestCase_027425_2);

#define VkglTestCase_027426_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_027426_2 "viewclass_32_bits.rg16f_r32i.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027426, VkglTestCase_027426_1, VkglTestCase_027426_2);

#define VkglTestCase_027427_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_027427_2 "viewclass_32_bits.rg16f_r32i.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027427, VkglTestCase_027427_1, VkglTestCase_027427_2);

#define VkglTestCase_027428_1 "dEQP-GLES31.functional.copy_image.non_compressed"
#define VkglTestCase_027428_2 ".viewclass_32_bits.rg16f_r32i.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027428, VkglTestCase_027428_1, VkglTestCase_027428_2);

#define VkglTestCase_027429_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_027429_2 "wclass_32_bits.rg16f_r32i.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027429, VkglTestCase_027429_1, VkglTestCase_027429_2);

#define VkglTestCase_027430_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_027430_2 "iewclass_32_bits.rg16f_r32i.cubemap_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027430, VkglTestCase_027430_1, VkglTestCase_027430_2);

#define VkglTestCase_027431_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_027431_2 "class_32_bits.rg16f_r32i.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027431, VkglTestCase_027431_1, VkglTestCase_027431_2);

#define VkglTestCase_027432_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_027432_2 "class_32_bits.rg16f_r32i.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027432, VkglTestCase_027432_1, VkglTestCase_027432_2);

#define VkglTestCase_027433_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_027433_2 "wclass_32_bits.rg16f_r32i.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027433, VkglTestCase_027433_1, VkglTestCase_027433_2);

#define VkglTestCase_027434_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_027434_2 "ss_32_bits.rg16f_r32i.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027434, VkglTestCase_027434_1, VkglTestCase_027434_2);

#define VkglTestCase_027435_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_027435_2 "lass_32_bits.rg16f_r32i.texture2d_array_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027435, VkglTestCase_027435_1, VkglTestCase_027435_2);
