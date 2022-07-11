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

#define VkglTestCase_030265_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_030265_2 "ass_32_bits.rgb10_a2_rgba8_snorm.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030265, VkglTestCase_030265_1, VkglTestCase_030265_2);

#define VkglTestCase_030266_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_030266_2 "ass_32_bits.rgb10_a2_rgba8_snorm.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030266, VkglTestCase_030266_1, VkglTestCase_030266_2);

#define VkglTestCase_030267_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_030267_2 "lass_32_bits.rgb10_a2_rgba8_snorm.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030267, VkglTestCase_030267_1, VkglTestCase_030267_2);

#define VkglTestCase_030268_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass"
#define VkglTestCase_030268_2 "_32_bits.rgb10_a2_rgba8_snorm.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030268, VkglTestCase_030268_1, VkglTestCase_030268_2);

#define VkglTestCase_030269_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_030269_2 "ass_32_bits.rgb10_a2_rgba8_snorm.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030269, VkglTestCase_030269_1, VkglTestCase_030269_2);

#define VkglTestCase_030270_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_030270_2 "ass_32_bits.rgb10_a2_rgba8_snorm.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030270, VkglTestCase_030270_1, VkglTestCase_030270_2);

#define VkglTestCase_030271_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_030271_2 "lass_32_bits.rgb10_a2_rgba8_snorm.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030271, VkglTestCase_030271_1, VkglTestCase_030271_2);

#define VkglTestCase_030272_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass"
#define VkglTestCase_030272_2 "_32_bits.rgb10_a2_rgba8_snorm.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030272, VkglTestCase_030272_1, VkglTestCase_030272_2);

#define VkglTestCase_030273_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_030273_2 "lass_32_bits.rgb10_a2_rgba8_snorm.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030273, VkglTestCase_030273_1, VkglTestCase_030273_2);

#define VkglTestCase_030274_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_030274_2 "lass_32_bits.rgb10_a2_rgba8_snorm.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030274, VkglTestCase_030274_1, VkglTestCase_030274_2);

#define VkglTestCase_030275_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_030275_2 "class_32_bits.rgb10_a2_rgba8_snorm.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030275, VkglTestCase_030275_1, VkglTestCase_030275_2);

#define VkglTestCase_030276_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_030276_2 "s_32_bits.rgb10_a2_rgba8_snorm.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030276, VkglTestCase_030276_1, VkglTestCase_030276_2);

#define VkglTestCase_030277_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass"
#define VkglTestCase_030277_2 "_32_bits.rgb10_a2_rgba8_snorm.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030277, VkglTestCase_030277_1, VkglTestCase_030277_2);

#define VkglTestCase_030278_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass"
#define VkglTestCase_030278_2 "_32_bits.rgb10_a2_rgba8_snorm.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030278, VkglTestCase_030278_1, VkglTestCase_030278_2);

#define VkglTestCase_030279_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_030279_2 "s_32_bits.rgb10_a2_rgba8_snorm.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030279, VkglTestCase_030279_1, VkglTestCase_030279_2);

#define VkglTestCase_030280_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_32"
#define VkglTestCase_030280_2 "_bits.rgb10_a2_rgba8_snorm.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030280, VkglTestCase_030280_1, VkglTestCase_030280_2);

#define VkglTestCase_030281_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_030281_2 "ss_32_bits.rgb10_a2_rgba8_snorm.renderbuffer_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030281, VkglTestCase_030281_1, VkglTestCase_030281_2);

#define VkglTestCase_030282_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_030282_2 "ss_32_bits.rgb10_a2_rgba8_snorm.renderbuffer_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030282, VkglTestCase_030282_1, VkglTestCase_030282_2);

#define VkglTestCase_030283_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_030283_2 "ass_32_bits.rgb10_a2_rgba8_snorm.renderbuffer_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030283, VkglTestCase_030283_1, VkglTestCase_030283_2);

#define VkglTestCase_030284_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_"
#define VkglTestCase_030284_2 "32_bits.rgb10_a2_rgba8_snorm.renderbuffer_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030284, VkglTestCase_030284_1, VkglTestCase_030284_2);
