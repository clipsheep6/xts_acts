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

#define VkglTestCase_030422_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_030422_2 "lass_32_bits.rgba8_snorm_rg16ui.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030422, VkglTestCase_030422_1, VkglTestCase_030422_2);

#define VkglTestCase_030423_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_030423_2 "lass_32_bits.rgba8_snorm_rg16ui.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030423, VkglTestCase_030423_1, VkglTestCase_030423_2);

#define VkglTestCase_030424_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_030424_2 "class_32_bits.rgba8_snorm_rg16ui.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030424, VkglTestCase_030424_1, VkglTestCase_030424_2);

#define VkglTestCase_030425_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_030425_2 "s_32_bits.rgba8_snorm_rg16ui.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030425, VkglTestCase_030425_1, VkglTestCase_030425_2);

#define VkglTestCase_030426_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_030426_2 "ass_32_bits.rgba8_snorm_rg16ui.texture2d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030426, VkglTestCase_030426_1, VkglTestCase_030426_2);

#define VkglTestCase_030427_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_030427_2 "lass_32_bits.rgba8_snorm_rg16ui.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030427, VkglTestCase_030427_1, VkglTestCase_030427_2);

#define VkglTestCase_030428_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_030428_2 "lass_32_bits.rgba8_snorm_rg16ui.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030428, VkglTestCase_030428_1, VkglTestCase_030428_2);

#define VkglTestCase_030429_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_030429_2 "class_32_bits.rgba8_snorm_rg16ui.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030429, VkglTestCase_030429_1, VkglTestCase_030429_2);

#define VkglTestCase_030430_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_030430_2 "s_32_bits.rgba8_snorm_rg16ui.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030430, VkglTestCase_030430_1, VkglTestCase_030430_2);

#define VkglTestCase_030431_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_030431_2 "ass_32_bits.rgba8_snorm_rg16ui.texture3d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030431, VkglTestCase_030431_1, VkglTestCase_030431_2);

#define VkglTestCase_030432_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_030432_2 "class_32_bits.rgba8_snorm_rg16ui.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030432, VkglTestCase_030432_1, VkglTestCase_030432_2);

#define VkglTestCase_030433_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_030433_2 "class_32_bits.rgba8_snorm_rg16ui.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030433, VkglTestCase_030433_1, VkglTestCase_030433_2);

#define VkglTestCase_030434_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_030434_2 "wclass_32_bits.rgba8_snorm_rg16ui.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030434, VkglTestCase_030434_1, VkglTestCase_030434_2);

#define VkglTestCase_030435_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_030435_2 "ss_32_bits.rgba8_snorm_rg16ui.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030435, VkglTestCase_030435_1, VkglTestCase_030435_2);

#define VkglTestCase_030436_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_030436_2 "lass_32_bits.rgba8_snorm_rg16ui.cubemap_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030436, VkglTestCase_030436_1, VkglTestCase_030436_2);

#define VkglTestCase_030437_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_030437_2 "s_32_bits.rgba8_snorm_rg16ui.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030437, VkglTestCase_030437_1, VkglTestCase_030437_2);

#define VkglTestCase_030438_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_030438_2 "s_32_bits.rgba8_snorm_rg16ui.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030438, VkglTestCase_030438_1, VkglTestCase_030438_2);

#define VkglTestCase_030439_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_030439_2 "ss_32_bits.rgba8_snorm_rg16ui.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030439, VkglTestCase_030439_1, VkglTestCase_030439_2);

#define VkglTestCase_030440_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_3"
#define VkglTestCase_030440_2 "2_bits.rgba8_snorm_rg16ui.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030440, VkglTestCase_030440_1, VkglTestCase_030440_2);

#define VkglTestCase_030441_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass"
#define VkglTestCase_030441_2 "_32_bits.rgba8_snorm_rg16ui.texture2d_array_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030441, VkglTestCase_030441_1, VkglTestCase_030441_2);
