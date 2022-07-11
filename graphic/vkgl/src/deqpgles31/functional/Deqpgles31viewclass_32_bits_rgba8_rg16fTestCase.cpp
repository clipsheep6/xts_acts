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

#define VkglTestCase_028418_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_028418_2 "iewclass_32_bits.rgba8_rg16f.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028418, VkglTestCase_028418_1, VkglTestCase_028418_2);

#define VkglTestCase_028419_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_028419_2 "iewclass_32_bits.rgba8_rg16f.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028419, VkglTestCase_028419_1, VkglTestCase_028419_2);

#define VkglTestCase_028420_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_028420_2 "viewclass_32_bits.rgba8_rg16f.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028420, VkglTestCase_028420_1, VkglTestCase_028420_2);

#define VkglTestCase_028421_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_028421_2 "class_32_bits.rgba8_rg16f.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028421, VkglTestCase_028421_1, VkglTestCase_028421_2);

#define VkglTestCase_028422_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_028422_2 "iewclass_32_bits.rgba8_rg16f.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028422, VkglTestCase_028422_1, VkglTestCase_028422_2);

#define VkglTestCase_028423_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_028423_2 "iewclass_32_bits.rgba8_rg16f.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028423, VkglTestCase_028423_1, VkglTestCase_028423_2);

#define VkglTestCase_028424_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_028424_2 "viewclass_32_bits.rgba8_rg16f.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028424, VkglTestCase_028424_1, VkglTestCase_028424_2);

#define VkglTestCase_028425_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_028425_2 "class_32_bits.rgba8_rg16f.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028425, VkglTestCase_028425_1, VkglTestCase_028425_2);

#define VkglTestCase_028426_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_028426_2 "viewclass_32_bits.rgba8_rg16f.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028426, VkglTestCase_028426_1, VkglTestCase_028426_2);

#define VkglTestCase_028427_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_028427_2 "viewclass_32_bits.rgba8_rg16f.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028427, VkglTestCase_028427_1, VkglTestCase_028427_2);

#define VkglTestCase_028428_1 "dEQP-GLES31.functional.copy_image.non_compressed"
#define VkglTestCase_028428_2 ".viewclass_32_bits.rgba8_rg16f.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028428, VkglTestCase_028428_1, VkglTestCase_028428_2);

#define VkglTestCase_028429_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_028429_2 "wclass_32_bits.rgba8_rg16f.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028429, VkglTestCase_028429_1, VkglTestCase_028429_2);

#define VkglTestCase_028430_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_028430_2 "class_32_bits.rgba8_rg16f.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028430, VkglTestCase_028430_1, VkglTestCase_028430_2);

#define VkglTestCase_028431_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_028431_2 "class_32_bits.rgba8_rg16f.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028431, VkglTestCase_028431_1, VkglTestCase_028431_2);

#define VkglTestCase_028432_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_028432_2 "wclass_32_bits.rgba8_rg16f.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028432, VkglTestCase_028432_1, VkglTestCase_028432_2);

#define VkglTestCase_028433_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_028433_2 "ss_32_bits.rgba8_rg16f.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028433, VkglTestCase_028433_1, VkglTestCase_028433_2);

#define VkglTestCase_028434_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_028434_2 "wclass_32_bits.rgba8_rg16f.renderbuffer_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028434, VkglTestCase_028434_1, VkglTestCase_028434_2);

#define VkglTestCase_028435_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_028435_2 "wclass_32_bits.rgba8_rg16f.renderbuffer_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028435, VkglTestCase_028435_1, VkglTestCase_028435_2);

#define VkglTestCase_028436_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_028436_2 "ewclass_32_bits.rgba8_rg16f.renderbuffer_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028436, VkglTestCase_028436_1, VkglTestCase_028436_2);

#define VkglTestCase_028437_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_028437_2 "ass_32_bits.rgba8_rg16f.renderbuffer_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028437, VkglTestCase_028437_1, VkglTestCase_028437_2);
