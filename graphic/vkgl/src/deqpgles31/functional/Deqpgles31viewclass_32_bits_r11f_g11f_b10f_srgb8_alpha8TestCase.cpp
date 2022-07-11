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

#define VkglTestCase_029610_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass"
#define VkglTestCase_029610_2 "_32_bits.r11f_g11f_b10f_srgb8_alpha8.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029610, VkglTestCase_029610_1, VkglTestCase_029610_2);

#define VkglTestCase_029611_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass"
#define VkglTestCase_029611_2 "_32_bits.r11f_g11f_b10f_srgb8_alpha8.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029611, VkglTestCase_029611_1, VkglTestCase_029611_2);

#define VkglTestCase_029612_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_029612_2 "s_32_bits.r11f_g11f_b10f_srgb8_alpha8.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029612, VkglTestCase_029612_1, VkglTestCase_029612_2);

#define VkglTestCase_029613_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_32"
#define VkglTestCase_029613_2 "_bits.r11f_g11f_b10f_srgb8_alpha8.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029613, VkglTestCase_029613_1, VkglTestCase_029613_2);

#define VkglTestCase_029614_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_3"
#define VkglTestCase_029614_2 "2_bits.r11f_g11f_b10f_srgb8_alpha8.texture2d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029614, VkglTestCase_029614_1, VkglTestCase_029614_2);

#define VkglTestCase_029615_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass"
#define VkglTestCase_029615_2 "_32_bits.r11f_g11f_b10f_srgb8_alpha8.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029615, VkglTestCase_029615_1, VkglTestCase_029615_2);

#define VkglTestCase_029616_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass"
#define VkglTestCase_029616_2 "_32_bits.r11f_g11f_b10f_srgb8_alpha8.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029616, VkglTestCase_029616_1, VkglTestCase_029616_2);

#define VkglTestCase_029617_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_029617_2 "s_32_bits.r11f_g11f_b10f_srgb8_alpha8.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029617, VkglTestCase_029617_1, VkglTestCase_029617_2);

#define VkglTestCase_029618_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_32"
#define VkglTestCase_029618_2 "_bits.r11f_g11f_b10f_srgb8_alpha8.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029618, VkglTestCase_029618_1, VkglTestCase_029618_2);

#define VkglTestCase_029619_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_3"
#define VkglTestCase_029619_2 "2_bits.r11f_g11f_b10f_srgb8_alpha8.texture3d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029619, VkglTestCase_029619_1, VkglTestCase_029619_2);

#define VkglTestCase_029620_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_029620_2 "s_32_bits.r11f_g11f_b10f_srgb8_alpha8.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029620, VkglTestCase_029620_1, VkglTestCase_029620_2);

#define VkglTestCase_029621_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_029621_2 "s_32_bits.r11f_g11f_b10f_srgb8_alpha8.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029621, VkglTestCase_029621_1, VkglTestCase_029621_2);

#define VkglTestCase_029622_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_029622_2 "ss_32_bits.r11f_g11f_b10f_srgb8_alpha8.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029622, VkglTestCase_029622_1, VkglTestCase_029622_2);

#define VkglTestCase_029623_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_3"
#define VkglTestCase_029623_2 "2_bits.r11f_g11f_b10f_srgb8_alpha8.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029623, VkglTestCase_029623_1, VkglTestCase_029623_2);

#define VkglTestCase_029624_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_"
#define VkglTestCase_029624_2 "32_bits.r11f_g11f_b10f_srgb8_alpha8.cubemap_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029624, VkglTestCase_029624_1, VkglTestCase_029624_2);

#define VkglTestCase_029625_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_32"
#define VkglTestCase_029625_2 "_bits.r11f_g11f_b10f_srgb8_alpha8.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029625, VkglTestCase_029625_1, VkglTestCase_029625_2);

#define VkglTestCase_029626_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_32"
#define VkglTestCase_029626_2 "_bits.r11f_g11f_b10f_srgb8_alpha8.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029626, VkglTestCase_029626_1, VkglTestCase_029626_2);

#define VkglTestCase_029627_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_3"
#define VkglTestCase_029627_2 "2_bits.r11f_g11f_b10f_srgb8_alpha8.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029627, VkglTestCase_029627_1, VkglTestCase_029627_2);

#define VkglTestCase_029628_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_32_bi"
#define VkglTestCase_029628_2 "ts.r11f_g11f_b10f_srgb8_alpha8.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029628, VkglTestCase_029628_1, VkglTestCase_029628_2);

#define VkglTestCase_029629_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_32_b"
#define VkglTestCase_029629_2 "its.r11f_g11f_b10f_srgb8_alpha8.texture2d_array_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029629, VkglTestCase_029629_1, VkglTestCase_029629_2);
