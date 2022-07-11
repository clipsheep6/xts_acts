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

#define VkglTestCase_028258_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_028258_2 "wclass_32_bits.rg16ui_rgb10_a2.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028258, VkglTestCase_028258_1, VkglTestCase_028258_2);

#define VkglTestCase_028259_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_028259_2 "wclass_32_bits.rg16ui_rgb10_a2.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028259, VkglTestCase_028259_1, VkglTestCase_028259_2);

#define VkglTestCase_028260_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_028260_2 "ewclass_32_bits.rg16ui_rgb10_a2.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028260, VkglTestCase_028260_1, VkglTestCase_028260_2);

#define VkglTestCase_028261_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_028261_2 "ass_32_bits.rg16ui_rgb10_a2.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028261, VkglTestCase_028261_1, VkglTestCase_028261_2);

#define VkglTestCase_028262_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_028262_2 "lass_32_bits.rg16ui_rgb10_a2.texture2d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028262, VkglTestCase_028262_1, VkglTestCase_028262_2);

#define VkglTestCase_028263_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_028263_2 "wclass_32_bits.rg16ui_rgb10_a2.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028263, VkglTestCase_028263_1, VkglTestCase_028263_2);

#define VkglTestCase_028264_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_028264_2 "wclass_32_bits.rg16ui_rgb10_a2.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028264, VkglTestCase_028264_1, VkglTestCase_028264_2);

#define VkglTestCase_028265_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_028265_2 "ewclass_32_bits.rg16ui_rgb10_a2.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028265, VkglTestCase_028265_1, VkglTestCase_028265_2);

#define VkglTestCase_028266_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_028266_2 "ass_32_bits.rg16ui_rgb10_a2.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028266, VkglTestCase_028266_1, VkglTestCase_028266_2);

#define VkglTestCase_028267_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_028267_2 "lass_32_bits.rg16ui_rgb10_a2.texture3d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028267, VkglTestCase_028267_1, VkglTestCase_028267_2);

#define VkglTestCase_028268_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_028268_2 "ewclass_32_bits.rg16ui_rgb10_a2.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028268, VkglTestCase_028268_1, VkglTestCase_028268_2);

#define VkglTestCase_028269_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_028269_2 "ewclass_32_bits.rg16ui_rgb10_a2.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028269, VkglTestCase_028269_1, VkglTestCase_028269_2);

#define VkglTestCase_028270_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_028270_2 "iewclass_32_bits.rg16ui_rgb10_a2.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028270, VkglTestCase_028270_1, VkglTestCase_028270_2);

#define VkglTestCase_028271_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_028271_2 "lass_32_bits.rg16ui_rgb10_a2.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028271, VkglTestCase_028271_1, VkglTestCase_028271_2);

#define VkglTestCase_028272_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_028272_2 "class_32_bits.rg16ui_rgb10_a2.cubemap_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028272, VkglTestCase_028272_1, VkglTestCase_028272_2);

#define VkglTestCase_028273_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_028273_2 "ass_32_bits.rg16ui_rgb10_a2.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028273, VkglTestCase_028273_1, VkglTestCase_028273_2);

#define VkglTestCase_028274_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_028274_2 "ass_32_bits.rg16ui_rgb10_a2.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028274, VkglTestCase_028274_1, VkglTestCase_028274_2);

#define VkglTestCase_028275_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_028275_2 "lass_32_bits.rg16ui_rgb10_a2.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028275, VkglTestCase_028275_1, VkglTestCase_028275_2);

#define VkglTestCase_028276_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass"
#define VkglTestCase_028276_2 "_32_bits.rg16ui_rgb10_a2.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028276, VkglTestCase_028276_1, VkglTestCase_028276_2);

#define VkglTestCase_028277_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_028277_2 "s_32_bits.rg16ui_rgb10_a2.texture2d_array_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028277, VkglTestCase_028277_1, VkglTestCase_028277_2);

#define VkglTestCase_028278_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_028278_2 "lass_32_bits.rg16ui_rgb10_a2.renderbuffer_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028278, VkglTestCase_028278_1, VkglTestCase_028278_2);

#define VkglTestCase_028279_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_028279_2 "lass_32_bits.rg16ui_rgb10_a2.renderbuffer_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028279, VkglTestCase_028279_1, VkglTestCase_028279_2);

#define VkglTestCase_028280_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_028280_2 "class_32_bits.rg16ui_rgb10_a2.renderbuffer_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028280, VkglTestCase_028280_1, VkglTestCase_028280_2);

#define VkglTestCase_028281_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_028281_2 "s_32_bits.rg16ui_rgb10_a2.renderbuffer_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028281, VkglTestCase_028281_1, VkglTestCase_028281_2);

#define VkglTestCase_028282_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_028282_2 "ass_32_bits.rg16ui_rgb10_a2.renderbuffer_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028282, VkglTestCase_028282_1, VkglTestCase_028282_2);
