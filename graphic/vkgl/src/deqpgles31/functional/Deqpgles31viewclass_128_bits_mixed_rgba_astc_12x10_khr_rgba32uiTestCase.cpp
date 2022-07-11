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
#include "../ActsDeqpgles310036TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_035599_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits"
#define VkglTestCase_035599_2 "_mixed.rgba_astc_12x10_khr_rgba32ui.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035599, VkglTestCase_035599_1, VkglTestCase_035599_2);

#define VkglTestCase_035600_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits"
#define VkglTestCase_035600_2 "_mixed.rgba_astc_12x10_khr_rgba32ui.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035600, VkglTestCase_035600_1, VkglTestCase_035600_2);

#define VkglTestCase_035601_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bit"
#define VkglTestCase_035601_2 "s_mixed.rgba_astc_12x10_khr_rgba32ui.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035601, VkglTestCase_035601_1, VkglTestCase_035601_2);

#define VkglTestCase_035602_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
#define VkglTestCase_035602_2 "xed.rgba_astc_12x10_khr_rgba32ui.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035602, VkglTestCase_035602_1, VkglTestCase_035602_2);

#define VkglTestCase_035603_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_035603_2 "mixed.rgba_astc_12x10_khr_rgba32ui.texture2d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035603, VkglTestCase_035603_1, VkglTestCase_035603_2);

#define VkglTestCase_035604_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits"
#define VkglTestCase_035604_2 "_mixed.rgba_astc_12x10_khr_rgba32ui.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035604, VkglTestCase_035604_1, VkglTestCase_035604_2);

#define VkglTestCase_035605_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits"
#define VkglTestCase_035605_2 "_mixed.rgba_astc_12x10_khr_rgba32ui.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035605, VkglTestCase_035605_1, VkglTestCase_035605_2);

#define VkglTestCase_035606_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bit"
#define VkglTestCase_035606_2 "s_mixed.rgba_astc_12x10_khr_rgba32ui.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035606, VkglTestCase_035606_1, VkglTestCase_035606_2);

#define VkglTestCase_035607_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
#define VkglTestCase_035607_2 "xed.rgba_astc_12x10_khr_rgba32ui.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035607, VkglTestCase_035607_1, VkglTestCase_035607_2);

#define VkglTestCase_035608_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_035608_2 "mixed.rgba_astc_12x10_khr_rgba32ui.texture3d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035608, VkglTestCase_035608_1, VkglTestCase_035608_2);

#define VkglTestCase_035609_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bit"
#define VkglTestCase_035609_2 "s_mixed.rgba_astc_12x10_khr_rgba32ui.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035609, VkglTestCase_035609_1, VkglTestCase_035609_2);

#define VkglTestCase_035610_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bit"
#define VkglTestCase_035610_2 "s_mixed.rgba_astc_12x10_khr_rgba32ui.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035610, VkglTestCase_035610_1, VkglTestCase_035610_2);

#define VkglTestCase_035611_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_035611_2 "ts_mixed.rgba_astc_12x10_khr_rgba32ui.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035611, VkglTestCase_035611_1, VkglTestCase_035611_2);

#define VkglTestCase_035612_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_035612_2 "ixed.rgba_astc_12x10_khr_rgba32ui.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035612, VkglTestCase_035612_1, VkglTestCase_035612_2);

#define VkglTestCase_035613_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits"
#define VkglTestCase_035613_2 "_mixed.rgba_astc_12x10_khr_rgba32ui.cubemap_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035613, VkglTestCase_035613_1, VkglTestCase_035613_2);

#define VkglTestCase_035614_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
#define VkglTestCase_035614_2 "xed.rgba_astc_12x10_khr_rgba32ui.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035614, VkglTestCase_035614_1, VkglTestCase_035614_2);

#define VkglTestCase_035615_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
#define VkglTestCase_035615_2 "xed.rgba_astc_12x10_khr_rgba32ui.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035615, VkglTestCase_035615_1, VkglTestCase_035615_2);

#define VkglTestCase_035616_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_035616_2 "ixed.rgba_astc_12x10_khr_rgba32ui.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035616, VkglTestCase_035616_1, VkglTestCase_035616_2);

#define VkglTestCase_035617_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed"
#define VkglTestCase_035617_2 ".rgba_astc_12x10_khr_rgba32ui.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035617, VkglTestCase_035617_1, VkglTestCase_035617_2);

#define VkglTestCase_035618_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mix"
#define VkglTestCase_035618_2 "ed.rgba_astc_12x10_khr_rgba32ui.texture2d_array_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035618, VkglTestCase_035618_1, VkglTestCase_035618_2);
