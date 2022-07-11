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

#define VkglTestCase_035299_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bit"
#define VkglTestCase_035299_2 "s_mixed.rgba32ui_rgba_astc_8x5_khr.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035299, VkglTestCase_035299_1, VkglTestCase_035299_2);

#define VkglTestCase_035300_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bit"
#define VkglTestCase_035300_2 "s_mixed.rgba32ui_rgba_astc_8x5_khr.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035300, VkglTestCase_035300_1, VkglTestCase_035300_2);

#define VkglTestCase_035301_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_035301_2 "ts_mixed.rgba32ui_rgba_astc_8x5_khr.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035301, VkglTestCase_035301_1, VkglTestCase_035301_2);

#define VkglTestCase_035302_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_035302_2 "ixed.rgba32ui_rgba_astc_8x5_khr.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035302, VkglTestCase_035302_1, VkglTestCase_035302_2);

#define VkglTestCase_035303_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bit"
#define VkglTestCase_035303_2 "s_mixed.rgba32ui_rgba_astc_8x5_khr.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035303, VkglTestCase_035303_1, VkglTestCase_035303_2);

#define VkglTestCase_035304_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bit"
#define VkglTestCase_035304_2 "s_mixed.rgba32ui_rgba_astc_8x5_khr.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035304, VkglTestCase_035304_1, VkglTestCase_035304_2);

#define VkglTestCase_035305_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_035305_2 "ts_mixed.rgba32ui_rgba_astc_8x5_khr.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035305, VkglTestCase_035305_1, VkglTestCase_035305_2);

#define VkglTestCase_035306_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_035306_2 "ixed.rgba32ui_rgba_astc_8x5_khr.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035306, VkglTestCase_035306_1, VkglTestCase_035306_2);

#define VkglTestCase_035307_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_035307_2 "ts_mixed.rgba32ui_rgba_astc_8x5_khr.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035307, VkglTestCase_035307_1, VkglTestCase_035307_2);

#define VkglTestCase_035308_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_035308_2 "ts_mixed.rgba32ui_rgba_astc_8x5_khr.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035308, VkglTestCase_035308_1, VkglTestCase_035308_2);

#define VkglTestCase_035309_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_b"
#define VkglTestCase_035309_2 "its_mixed.rgba32ui_rgba_astc_8x5_khr.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035309, VkglTestCase_035309_1, VkglTestCase_035309_2);

#define VkglTestCase_035310_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_035310_2 "mixed.rgba32ui_rgba_astc_8x5_khr.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035310, VkglTestCase_035310_1, VkglTestCase_035310_2);

#define VkglTestCase_035311_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_035311_2 "ixed.rgba32ui_rgba_astc_8x5_khr.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035311, VkglTestCase_035311_1, VkglTestCase_035311_2);

#define VkglTestCase_035312_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_035312_2 "ixed.rgba32ui_rgba_astc_8x5_khr.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035312, VkglTestCase_035312_1, VkglTestCase_035312_2);

#define VkglTestCase_035313_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_035313_2 "mixed.rgba32ui_rgba_astc_8x5_khr.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035313, VkglTestCase_035313_1, VkglTestCase_035313_2);

#define VkglTestCase_035314_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
#define VkglTestCase_035314_2 "d.rgba32ui_rgba_astc_8x5_khr.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035314, VkglTestCase_035314_1, VkglTestCase_035314_2);

#define VkglTestCase_035315_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits"
#define VkglTestCase_035315_2 "_mixed.rgba32ui_rgba_astc_8x5_khr.renderbuffer_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035315, VkglTestCase_035315_1, VkglTestCase_035315_2);

#define VkglTestCase_035316_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits"
#define VkglTestCase_035316_2 "_mixed.rgba32ui_rgba_astc_8x5_khr.renderbuffer_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035316, VkglTestCase_035316_1, VkglTestCase_035316_2);

#define VkglTestCase_035317_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bit"
#define VkglTestCase_035317_2 "s_mixed.rgba32ui_rgba_astc_8x5_khr.renderbuffer_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035317, VkglTestCase_035317_1, VkglTestCase_035317_2);

#define VkglTestCase_035318_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
#define VkglTestCase_035318_2 "xed.rgba32ui_rgba_astc_8x5_khr.renderbuffer_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035318, VkglTestCase_035318_1, VkglTestCase_035318_2);
