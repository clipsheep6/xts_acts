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

#define VkglTestCase_035579_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits"
#define VkglTestCase_035579_2 "_mixed.rgba32ui_rgba_astc_12x10_khr.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035579, VkglTestCase_035579_1, VkglTestCase_035579_2);

#define VkglTestCase_035580_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits"
#define VkglTestCase_035580_2 "_mixed.rgba32ui_rgba_astc_12x10_khr.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035580, VkglTestCase_035580_1, VkglTestCase_035580_2);

#define VkglTestCase_035581_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bit"
#define VkglTestCase_035581_2 "s_mixed.rgba32ui_rgba_astc_12x10_khr.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035581, VkglTestCase_035581_1, VkglTestCase_035581_2);

#define VkglTestCase_035582_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
#define VkglTestCase_035582_2 "xed.rgba32ui_rgba_astc_12x10_khr.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035582, VkglTestCase_035582_1, VkglTestCase_035582_2);

#define VkglTestCase_035583_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits"
#define VkglTestCase_035583_2 "_mixed.rgba32ui_rgba_astc_12x10_khr.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035583, VkglTestCase_035583_1, VkglTestCase_035583_2);

#define VkglTestCase_035584_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits"
#define VkglTestCase_035584_2 "_mixed.rgba32ui_rgba_astc_12x10_khr.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035584, VkglTestCase_035584_1, VkglTestCase_035584_2);

#define VkglTestCase_035585_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bit"
#define VkglTestCase_035585_2 "s_mixed.rgba32ui_rgba_astc_12x10_khr.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035585, VkglTestCase_035585_1, VkglTestCase_035585_2);

#define VkglTestCase_035586_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
#define VkglTestCase_035586_2 "xed.rgba32ui_rgba_astc_12x10_khr.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035586, VkglTestCase_035586_1, VkglTestCase_035586_2);

#define VkglTestCase_035587_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bit"
#define VkglTestCase_035587_2 "s_mixed.rgba32ui_rgba_astc_12x10_khr.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035587, VkglTestCase_035587_1, VkglTestCase_035587_2);

#define VkglTestCase_035588_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bit"
#define VkglTestCase_035588_2 "s_mixed.rgba32ui_rgba_astc_12x10_khr.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035588, VkglTestCase_035588_1, VkglTestCase_035588_2);

#define VkglTestCase_035589_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_035589_2 "ts_mixed.rgba32ui_rgba_astc_12x10_khr.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035589, VkglTestCase_035589_1, VkglTestCase_035589_2);

#define VkglTestCase_035590_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_035590_2 "ixed.rgba32ui_rgba_astc_12x10_khr.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035590, VkglTestCase_035590_1, VkglTestCase_035590_2);

#define VkglTestCase_035591_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
#define VkglTestCase_035591_2 "xed.rgba32ui_rgba_astc_12x10_khr.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035591, VkglTestCase_035591_1, VkglTestCase_035591_2);

#define VkglTestCase_035592_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
#define VkglTestCase_035592_2 "xed.rgba32ui_rgba_astc_12x10_khr.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035592, VkglTestCase_035592_1, VkglTestCase_035592_2);

#define VkglTestCase_035593_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_035593_2 "ixed.rgba32ui_rgba_astc_12x10_khr.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035593, VkglTestCase_035593_1, VkglTestCase_035593_2);

#define VkglTestCase_035594_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed"
#define VkglTestCase_035594_2 ".rgba32ui_rgba_astc_12x10_khr.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035594, VkglTestCase_035594_1, VkglTestCase_035594_2);

#define VkglTestCase_035595_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_035595_2 "mixed.rgba32ui_rgba_astc_12x10_khr.renderbuffer_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035595, VkglTestCase_035595_1, VkglTestCase_035595_2);

#define VkglTestCase_035596_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_035596_2 "mixed.rgba32ui_rgba_astc_12x10_khr.renderbuffer_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035596, VkglTestCase_035596_1, VkglTestCase_035596_2);

#define VkglTestCase_035597_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits"
#define VkglTestCase_035597_2 "_mixed.rgba32ui_rgba_astc_12x10_khr.renderbuffer_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035597, VkglTestCase_035597_1, VkglTestCase_035597_2);

#define VkglTestCase_035598_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mix"
#define VkglTestCase_035598_2 "ed.rgba32ui_rgba_astc_12x10_khr.renderbuffer_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035598, VkglTestCase_035598_1, VkglTestCase_035598_2);
