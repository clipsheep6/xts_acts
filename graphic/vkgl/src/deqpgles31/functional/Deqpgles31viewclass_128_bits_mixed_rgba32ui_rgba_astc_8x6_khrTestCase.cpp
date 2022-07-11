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

#define VkglTestCase_035339_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bit"
#define VkglTestCase_035339_2 "s_mixed.rgba32ui_rgba_astc_8x6_khr.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035339, VkglTestCase_035339_1, VkglTestCase_035339_2);

#define VkglTestCase_035340_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bit"
#define VkglTestCase_035340_2 "s_mixed.rgba32ui_rgba_astc_8x6_khr.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035340, VkglTestCase_035340_1, VkglTestCase_035340_2);

#define VkglTestCase_035341_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_035341_2 "ts_mixed.rgba32ui_rgba_astc_8x6_khr.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035341, VkglTestCase_035341_1, VkglTestCase_035341_2);

#define VkglTestCase_035342_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_035342_2 "ixed.rgba32ui_rgba_astc_8x6_khr.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035342, VkglTestCase_035342_1, VkglTestCase_035342_2);

#define VkglTestCase_035343_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bit"
#define VkglTestCase_035343_2 "s_mixed.rgba32ui_rgba_astc_8x6_khr.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035343, VkglTestCase_035343_1, VkglTestCase_035343_2);

#define VkglTestCase_035344_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bit"
#define VkglTestCase_035344_2 "s_mixed.rgba32ui_rgba_astc_8x6_khr.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035344, VkglTestCase_035344_1, VkglTestCase_035344_2);

#define VkglTestCase_035345_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_035345_2 "ts_mixed.rgba32ui_rgba_astc_8x6_khr.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035345, VkglTestCase_035345_1, VkglTestCase_035345_2);

#define VkglTestCase_035346_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_035346_2 "ixed.rgba32ui_rgba_astc_8x6_khr.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035346, VkglTestCase_035346_1, VkglTestCase_035346_2);

#define VkglTestCase_035347_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_035347_2 "ts_mixed.rgba32ui_rgba_astc_8x6_khr.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035347, VkglTestCase_035347_1, VkglTestCase_035347_2);

#define VkglTestCase_035348_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_035348_2 "ts_mixed.rgba32ui_rgba_astc_8x6_khr.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035348, VkglTestCase_035348_1, VkglTestCase_035348_2);

#define VkglTestCase_035349_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_b"
#define VkglTestCase_035349_2 "its_mixed.rgba32ui_rgba_astc_8x6_khr.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035349, VkglTestCase_035349_1, VkglTestCase_035349_2);

#define VkglTestCase_035350_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_035350_2 "mixed.rgba32ui_rgba_astc_8x6_khr.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035350, VkglTestCase_035350_1, VkglTestCase_035350_2);

#define VkglTestCase_035351_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_035351_2 "ixed.rgba32ui_rgba_astc_8x6_khr.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035351, VkglTestCase_035351_1, VkglTestCase_035351_2);

#define VkglTestCase_035352_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_035352_2 "ixed.rgba32ui_rgba_astc_8x6_khr.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035352, VkglTestCase_035352_1, VkglTestCase_035352_2);

#define VkglTestCase_035353_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_035353_2 "mixed.rgba32ui_rgba_astc_8x6_khr.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035353, VkglTestCase_035353_1, VkglTestCase_035353_2);

#define VkglTestCase_035354_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
#define VkglTestCase_035354_2 "d.rgba32ui_rgba_astc_8x6_khr.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035354, VkglTestCase_035354_1, VkglTestCase_035354_2);

#define VkglTestCase_035355_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits"
#define VkglTestCase_035355_2 "_mixed.rgba32ui_rgba_astc_8x6_khr.renderbuffer_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035355, VkglTestCase_035355_1, VkglTestCase_035355_2);

#define VkglTestCase_035356_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits"
#define VkglTestCase_035356_2 "_mixed.rgba32ui_rgba_astc_8x6_khr.renderbuffer_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035356, VkglTestCase_035356_1, VkglTestCase_035356_2);

#define VkglTestCase_035357_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bit"
#define VkglTestCase_035357_2 "s_mixed.rgba32ui_rgba_astc_8x6_khr.renderbuffer_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035357, VkglTestCase_035357_1, VkglTestCase_035357_2);

#define VkglTestCase_035358_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
#define VkglTestCase_035358_2 "xed.rgba32ui_rgba_astc_8x6_khr.renderbuffer_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035358, VkglTestCase_035358_1, VkglTestCase_035358_2);
