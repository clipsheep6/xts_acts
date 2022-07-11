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

#define VkglTestCase_029594_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass"
#define VkglTestCase_029594_2 "_32_bits.r11f_g11f_b10f_rgba8_snorm.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029594, VkglTestCase_029594_1, VkglTestCase_029594_2);

#define VkglTestCase_029595_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass"
#define VkglTestCase_029595_2 "_32_bits.r11f_g11f_b10f_rgba8_snorm.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029595, VkglTestCase_029595_1, VkglTestCase_029595_2);

#define VkglTestCase_029596_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_029596_2 "s_32_bits.r11f_g11f_b10f_rgba8_snorm.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029596, VkglTestCase_029596_1, VkglTestCase_029596_2);

#define VkglTestCase_029597_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_32"
#define VkglTestCase_029597_2 "_bits.r11f_g11f_b10f_rgba8_snorm.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029597, VkglTestCase_029597_1, VkglTestCase_029597_2);

#define VkglTestCase_029598_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass"
#define VkglTestCase_029598_2 "_32_bits.r11f_g11f_b10f_rgba8_snorm.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029598, VkglTestCase_029598_1, VkglTestCase_029598_2);

#define VkglTestCase_029599_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass"
#define VkglTestCase_029599_2 "_32_bits.r11f_g11f_b10f_rgba8_snorm.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029599, VkglTestCase_029599_1, VkglTestCase_029599_2);

#define VkglTestCase_029600_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_029600_2 "s_32_bits.r11f_g11f_b10f_rgba8_snorm.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029600, VkglTestCase_029600_1, VkglTestCase_029600_2);

#define VkglTestCase_029601_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_32"
#define VkglTestCase_029601_2 "_bits.r11f_g11f_b10f_rgba8_snorm.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029601, VkglTestCase_029601_1, VkglTestCase_029601_2);

#define VkglTestCase_029602_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_029602_2 "s_32_bits.r11f_g11f_b10f_rgba8_snorm.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029602, VkglTestCase_029602_1, VkglTestCase_029602_2);

#define VkglTestCase_029603_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_029603_2 "s_32_bits.r11f_g11f_b10f_rgba8_snorm.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029603, VkglTestCase_029603_1, VkglTestCase_029603_2);

#define VkglTestCase_029604_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_029604_2 "ss_32_bits.r11f_g11f_b10f_rgba8_snorm.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029604, VkglTestCase_029604_1, VkglTestCase_029604_2);

#define VkglTestCase_029605_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_3"
#define VkglTestCase_029605_2 "2_bits.r11f_g11f_b10f_rgba8_snorm.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029605, VkglTestCase_029605_1, VkglTestCase_029605_2);

#define VkglTestCase_029606_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_32"
#define VkglTestCase_029606_2 "_bits.r11f_g11f_b10f_rgba8_snorm.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029606, VkglTestCase_029606_1, VkglTestCase_029606_2);

#define VkglTestCase_029607_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_32"
#define VkglTestCase_029607_2 "_bits.r11f_g11f_b10f_rgba8_snorm.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029607, VkglTestCase_029607_1, VkglTestCase_029607_2);

#define VkglTestCase_029608_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_3"
#define VkglTestCase_029608_2 "2_bits.r11f_g11f_b10f_rgba8_snorm.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029608, VkglTestCase_029608_1, VkglTestCase_029608_2);

#define VkglTestCase_029609_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_32_bi"
#define VkglTestCase_029609_2 "ts.r11f_g11f_b10f_rgba8_snorm.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029609, VkglTestCase_029609_1, VkglTestCase_029609_2);
