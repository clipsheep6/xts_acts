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

#define VkglTestCase_030502_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass"
#define VkglTestCase_030502_2 "_32_bits.rgba8_snorm_r11f_g11f_b10f.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030502, VkglTestCase_030502_1, VkglTestCase_030502_2);

#define VkglTestCase_030503_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass"
#define VkglTestCase_030503_2 "_32_bits.rgba8_snorm_r11f_g11f_b10f.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030503, VkglTestCase_030503_1, VkglTestCase_030503_2);

#define VkglTestCase_030504_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_030504_2 "s_32_bits.rgba8_snorm_r11f_g11f_b10f.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030504, VkglTestCase_030504_1, VkglTestCase_030504_2);

#define VkglTestCase_030505_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_32"
#define VkglTestCase_030505_2 "_bits.rgba8_snorm_r11f_g11f_b10f.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030505, VkglTestCase_030505_1, VkglTestCase_030505_2);

#define VkglTestCase_030506_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass"
#define VkglTestCase_030506_2 "_32_bits.rgba8_snorm_r11f_g11f_b10f.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030506, VkglTestCase_030506_1, VkglTestCase_030506_2);

#define VkglTestCase_030507_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass"
#define VkglTestCase_030507_2 "_32_bits.rgba8_snorm_r11f_g11f_b10f.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030507, VkglTestCase_030507_1, VkglTestCase_030507_2);

#define VkglTestCase_030508_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_030508_2 "s_32_bits.rgba8_snorm_r11f_g11f_b10f.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030508, VkglTestCase_030508_1, VkglTestCase_030508_2);

#define VkglTestCase_030509_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_32"
#define VkglTestCase_030509_2 "_bits.rgba8_snorm_r11f_g11f_b10f.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030509, VkglTestCase_030509_1, VkglTestCase_030509_2);

#define VkglTestCase_030510_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_030510_2 "s_32_bits.rgba8_snorm_r11f_g11f_b10f.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030510, VkglTestCase_030510_1, VkglTestCase_030510_2);

#define VkglTestCase_030511_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_030511_2 "s_32_bits.rgba8_snorm_r11f_g11f_b10f.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030511, VkglTestCase_030511_1, VkglTestCase_030511_2);

#define VkglTestCase_030512_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_030512_2 "ss_32_bits.rgba8_snorm_r11f_g11f_b10f.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030512, VkglTestCase_030512_1, VkglTestCase_030512_2);

#define VkglTestCase_030513_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_3"
#define VkglTestCase_030513_2 "2_bits.rgba8_snorm_r11f_g11f_b10f.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030513, VkglTestCase_030513_1, VkglTestCase_030513_2);

#define VkglTestCase_030514_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_32"
#define VkglTestCase_030514_2 "_bits.rgba8_snorm_r11f_g11f_b10f.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030514, VkglTestCase_030514_1, VkglTestCase_030514_2);

#define VkglTestCase_030515_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_32"
#define VkglTestCase_030515_2 "_bits.rgba8_snorm_r11f_g11f_b10f.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030515, VkglTestCase_030515_1, VkglTestCase_030515_2);

#define VkglTestCase_030516_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_3"
#define VkglTestCase_030516_2 "2_bits.rgba8_snorm_r11f_g11f_b10f.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030516, VkglTestCase_030516_1, VkglTestCase_030516_2);

#define VkglTestCase_030517_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_32_bi"
#define VkglTestCase_030517_2 "ts.rgba8_snorm_r11f_g11f_b10f.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030517, VkglTestCase_030517_1, VkglTestCase_030517_2);
