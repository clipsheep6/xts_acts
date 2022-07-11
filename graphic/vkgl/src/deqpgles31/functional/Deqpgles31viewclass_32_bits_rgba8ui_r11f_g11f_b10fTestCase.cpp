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

#define VkglTestCase_029263_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_029263_2 "ss_32_bits.rgba8ui_r11f_g11f_b10f.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029263, VkglTestCase_029263_1, VkglTestCase_029263_2);

#define VkglTestCase_029264_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_029264_2 "ss_32_bits.rgba8ui_r11f_g11f_b10f.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029264, VkglTestCase_029264_1, VkglTestCase_029264_2);

#define VkglTestCase_029265_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_029265_2 "ass_32_bits.rgba8ui_r11f_g11f_b10f.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029265, VkglTestCase_029265_1, VkglTestCase_029265_2);

#define VkglTestCase_029266_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_"
#define VkglTestCase_029266_2 "32_bits.rgba8ui_r11f_g11f_b10f.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029266, VkglTestCase_029266_1, VkglTestCase_029266_2);

#define VkglTestCase_029267_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_029267_2 "ss_32_bits.rgba8ui_r11f_g11f_b10f.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029267, VkglTestCase_029267_1, VkglTestCase_029267_2);

#define VkglTestCase_029268_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_029268_2 "ss_32_bits.rgba8ui_r11f_g11f_b10f.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029268, VkglTestCase_029268_1, VkglTestCase_029268_2);

#define VkglTestCase_029269_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_029269_2 "ass_32_bits.rgba8ui_r11f_g11f_b10f.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029269, VkglTestCase_029269_1, VkglTestCase_029269_2);

#define VkglTestCase_029270_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_"
#define VkglTestCase_029270_2 "32_bits.rgba8ui_r11f_g11f_b10f.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029270, VkglTestCase_029270_1, VkglTestCase_029270_2);

#define VkglTestCase_029271_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_029271_2 "ass_32_bits.rgba8ui_r11f_g11f_b10f.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029271, VkglTestCase_029271_1, VkglTestCase_029271_2);

#define VkglTestCase_029272_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_029272_2 "ass_32_bits.rgba8ui_r11f_g11f_b10f.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029272, VkglTestCase_029272_1, VkglTestCase_029272_2);

#define VkglTestCase_029273_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_029273_2 "lass_32_bits.rgba8ui_r11f_g11f_b10f.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029273, VkglTestCase_029273_1, VkglTestCase_029273_2);

#define VkglTestCase_029274_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass"
#define VkglTestCase_029274_2 "_32_bits.rgba8ui_r11f_g11f_b10f.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029274, VkglTestCase_029274_1, VkglTestCase_029274_2);

#define VkglTestCase_029275_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_"
#define VkglTestCase_029275_2 "32_bits.rgba8ui_r11f_g11f_b10f.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029275, VkglTestCase_029275_1, VkglTestCase_029275_2);

#define VkglTestCase_029276_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_"
#define VkglTestCase_029276_2 "32_bits.rgba8ui_r11f_g11f_b10f.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029276, VkglTestCase_029276_1, VkglTestCase_029276_2);

#define VkglTestCase_029277_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass"
#define VkglTestCase_029277_2 "_32_bits.rgba8ui_r11f_g11f_b10f.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029277, VkglTestCase_029277_1, VkglTestCase_029277_2);

#define VkglTestCase_029278_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_32_"
#define VkglTestCase_029278_2 "bits.rgba8ui_r11f_g11f_b10f.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029278, VkglTestCase_029278_1, VkglTestCase_029278_2);

#define VkglTestCase_029279_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_029279_2 "s_32_bits.rgba8ui_r11f_g11f_b10f.renderbuffer_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029279, VkglTestCase_029279_1, VkglTestCase_029279_2);

#define VkglTestCase_029280_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_029280_2 "s_32_bits.rgba8ui_r11f_g11f_b10f.renderbuffer_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029280, VkglTestCase_029280_1, VkglTestCase_029280_2);

#define VkglTestCase_029281_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_029281_2 "ss_32_bits.rgba8ui_r11f_g11f_b10f.renderbuffer_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029281, VkglTestCase_029281_1, VkglTestCase_029281_2);

#define VkglTestCase_029282_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_3"
#define VkglTestCase_029282_2 "2_bits.rgba8ui_r11f_g11f_b10f.renderbuffer_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029282, VkglTestCase_029282_1, VkglTestCase_029282_2);
