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

#define VkglTestCase_029333_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_029333_2 "lass_32_bits.rgba8ui_rgba8_snorm.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029333, VkglTestCase_029333_1, VkglTestCase_029333_2);

#define VkglTestCase_029334_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_029334_2 "lass_32_bits.rgba8ui_rgba8_snorm.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029334, VkglTestCase_029334_1, VkglTestCase_029334_2);

#define VkglTestCase_029335_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_029335_2 "class_32_bits.rgba8ui_rgba8_snorm.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029335, VkglTestCase_029335_1, VkglTestCase_029335_2);

#define VkglTestCase_029336_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_029336_2 "s_32_bits.rgba8ui_rgba8_snorm.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029336, VkglTestCase_029336_1, VkglTestCase_029336_2);

#define VkglTestCase_029337_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_029337_2 "lass_32_bits.rgba8ui_rgba8_snorm.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029337, VkglTestCase_029337_1, VkglTestCase_029337_2);

#define VkglTestCase_029338_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_029338_2 "lass_32_bits.rgba8ui_rgba8_snorm.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029338, VkglTestCase_029338_1, VkglTestCase_029338_2);

#define VkglTestCase_029339_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_029339_2 "class_32_bits.rgba8ui_rgba8_snorm.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029339, VkglTestCase_029339_1, VkglTestCase_029339_2);

#define VkglTestCase_029340_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_029340_2 "s_32_bits.rgba8ui_rgba8_snorm.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029340, VkglTestCase_029340_1, VkglTestCase_029340_2);

#define VkglTestCase_029341_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_029341_2 "class_32_bits.rgba8ui_rgba8_snorm.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029341, VkglTestCase_029341_1, VkglTestCase_029341_2);

#define VkglTestCase_029342_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_029342_2 "class_32_bits.rgba8ui_rgba8_snorm.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029342, VkglTestCase_029342_1, VkglTestCase_029342_2);

#define VkglTestCase_029343_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_029343_2 "wclass_32_bits.rgba8ui_rgba8_snorm.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029343, VkglTestCase_029343_1, VkglTestCase_029343_2);

#define VkglTestCase_029344_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_029344_2 "ss_32_bits.rgba8ui_rgba8_snorm.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029344, VkglTestCase_029344_1, VkglTestCase_029344_2);

#define VkglTestCase_029345_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_029345_2 "s_32_bits.rgba8ui_rgba8_snorm.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029345, VkglTestCase_029345_1, VkglTestCase_029345_2);

#define VkglTestCase_029346_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_029346_2 "s_32_bits.rgba8ui_rgba8_snorm.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029346, VkglTestCase_029346_1, VkglTestCase_029346_2);

#define VkglTestCase_029347_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_029347_2 "ss_32_bits.rgba8ui_rgba8_snorm.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029347, VkglTestCase_029347_1, VkglTestCase_029347_2);

#define VkglTestCase_029348_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_3"
#define VkglTestCase_029348_2 "2_bits.rgba8ui_rgba8_snorm.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029348, VkglTestCase_029348_1, VkglTestCase_029348_2);

#define VkglTestCase_029349_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_029349_2 "ss_32_bits.rgba8ui_rgba8_snorm.renderbuffer_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029349, VkglTestCase_029349_1, VkglTestCase_029349_2);

#define VkglTestCase_029350_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_029350_2 "ss_32_bits.rgba8ui_rgba8_snorm.renderbuffer_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029350, VkglTestCase_029350_1, VkglTestCase_029350_2);

#define VkglTestCase_029351_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_029351_2 "ass_32_bits.rgba8ui_rgba8_snorm.renderbuffer_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029351, VkglTestCase_029351_1, VkglTestCase_029351_2);

#define VkglTestCase_029352_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_"
#define VkglTestCase_029352_2 "32_bits.rgba8ui_rgba8_snorm.renderbuffer_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029352, VkglTestCase_029352_1, VkglTestCase_029352_2);
