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
#include "../ActsDeqpgles310030TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_029118_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_029118_2 "ewclass_32_bits.rgba8ui_rg16f.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029118, VkglTestCase_029118_1, VkglTestCase_029118_2);

#define VkglTestCase_029119_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_029119_2 "ewclass_32_bits.rgba8ui_rg16f.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029119, VkglTestCase_029119_1, VkglTestCase_029119_2);

#define VkglTestCase_029120_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_029120_2 "iewclass_32_bits.rgba8ui_rg16f.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029120, VkglTestCase_029120_1, VkglTestCase_029120_2);

#define VkglTestCase_029121_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_029121_2 "lass_32_bits.rgba8ui_rg16f.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029121, VkglTestCase_029121_1, VkglTestCase_029121_2);

#define VkglTestCase_029122_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_029122_2 "ewclass_32_bits.rgba8ui_rg16f.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029122, VkglTestCase_029122_1, VkglTestCase_029122_2);

#define VkglTestCase_029123_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_029123_2 "ewclass_32_bits.rgba8ui_rg16f.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029123, VkglTestCase_029123_1, VkglTestCase_029123_2);

#define VkglTestCase_029124_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_029124_2 "iewclass_32_bits.rgba8ui_rg16f.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029124, VkglTestCase_029124_1, VkglTestCase_029124_2);

#define VkglTestCase_029125_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_029125_2 "lass_32_bits.rgba8ui_rg16f.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029125, VkglTestCase_029125_1, VkglTestCase_029125_2);

#define VkglTestCase_029126_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_029126_2 "iewclass_32_bits.rgba8ui_rg16f.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029126, VkglTestCase_029126_1, VkglTestCase_029126_2);

#define VkglTestCase_029127_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_029127_2 "iewclass_32_bits.rgba8ui_rg16f.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029127, VkglTestCase_029127_1, VkglTestCase_029127_2);

#define VkglTestCase_029128_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_029128_2 "viewclass_32_bits.rgba8ui_rg16f.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029128, VkglTestCase_029128_1, VkglTestCase_029128_2);

#define VkglTestCase_029129_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_029129_2 "class_32_bits.rgba8ui_rg16f.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029129, VkglTestCase_029129_1, VkglTestCase_029129_2);

#define VkglTestCase_029130_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_029130_2 "lass_32_bits.rgba8ui_rg16f.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029130, VkglTestCase_029130_1, VkglTestCase_029130_2);

#define VkglTestCase_029131_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_029131_2 "lass_32_bits.rgba8ui_rg16f.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029131, VkglTestCase_029131_1, VkglTestCase_029131_2);

#define VkglTestCase_029132_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_029132_2 "class_32_bits.rgba8ui_rg16f.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029132, VkglTestCase_029132_1, VkglTestCase_029132_2);

#define VkglTestCase_029133_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_029133_2 "s_32_bits.rgba8ui_rg16f.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029133, VkglTestCase_029133_1, VkglTestCase_029133_2);

#define VkglTestCase_029134_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_029134_2 "class_32_bits.rgba8ui_rg16f.renderbuffer_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029134, VkglTestCase_029134_1, VkglTestCase_029134_2);

#define VkglTestCase_029135_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_029135_2 "class_32_bits.rgba8ui_rg16f.renderbuffer_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029135, VkglTestCase_029135_1, VkglTestCase_029135_2);

#define VkglTestCase_029136_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_029136_2 "wclass_32_bits.rgba8ui_rg16f.renderbuffer_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029136, VkglTestCase_029136_1, VkglTestCase_029136_2);

#define VkglTestCase_029137_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_029137_2 "ss_32_bits.rgba8ui_rg16f.renderbuffer_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029137, VkglTestCase_029137_1, VkglTestCase_029137_2);
