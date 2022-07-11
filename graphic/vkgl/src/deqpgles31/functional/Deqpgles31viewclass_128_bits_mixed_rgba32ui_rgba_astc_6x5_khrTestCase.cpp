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

#define VkglTestCase_035219_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bit"
#define VkglTestCase_035219_2 "s_mixed.rgba32ui_rgba_astc_6x5_khr.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035219, VkglTestCase_035219_1, VkglTestCase_035219_2);

#define VkglTestCase_035220_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bit"
#define VkglTestCase_035220_2 "s_mixed.rgba32ui_rgba_astc_6x5_khr.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035220, VkglTestCase_035220_1, VkglTestCase_035220_2);

#define VkglTestCase_035221_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_035221_2 "ts_mixed.rgba32ui_rgba_astc_6x5_khr.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035221, VkglTestCase_035221_1, VkglTestCase_035221_2);

#define VkglTestCase_035222_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_035222_2 "ixed.rgba32ui_rgba_astc_6x5_khr.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035222, VkglTestCase_035222_1, VkglTestCase_035222_2);

#define VkglTestCase_035223_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bit"
#define VkglTestCase_035223_2 "s_mixed.rgba32ui_rgba_astc_6x5_khr.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035223, VkglTestCase_035223_1, VkglTestCase_035223_2);

#define VkglTestCase_035224_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bit"
#define VkglTestCase_035224_2 "s_mixed.rgba32ui_rgba_astc_6x5_khr.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035224, VkglTestCase_035224_1, VkglTestCase_035224_2);

#define VkglTestCase_035225_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_035225_2 "ts_mixed.rgba32ui_rgba_astc_6x5_khr.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035225, VkglTestCase_035225_1, VkglTestCase_035225_2);

#define VkglTestCase_035226_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_035226_2 "ixed.rgba32ui_rgba_astc_6x5_khr.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035226, VkglTestCase_035226_1, VkglTestCase_035226_2);

#define VkglTestCase_035227_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_035227_2 "ts_mixed.rgba32ui_rgba_astc_6x5_khr.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035227, VkglTestCase_035227_1, VkglTestCase_035227_2);

#define VkglTestCase_035228_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_035228_2 "ts_mixed.rgba32ui_rgba_astc_6x5_khr.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035228, VkglTestCase_035228_1, VkglTestCase_035228_2);

#define VkglTestCase_035229_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_b"
#define VkglTestCase_035229_2 "its_mixed.rgba32ui_rgba_astc_6x5_khr.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035229, VkglTestCase_035229_1, VkglTestCase_035229_2);

#define VkglTestCase_035230_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_035230_2 "mixed.rgba32ui_rgba_astc_6x5_khr.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035230, VkglTestCase_035230_1, VkglTestCase_035230_2);

#define VkglTestCase_035231_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_035231_2 "ixed.rgba32ui_rgba_astc_6x5_khr.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035231, VkglTestCase_035231_1, VkglTestCase_035231_2);

#define VkglTestCase_035232_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_035232_2 "ixed.rgba32ui_rgba_astc_6x5_khr.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035232, VkglTestCase_035232_1, VkglTestCase_035232_2);

#define VkglTestCase_035233_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_035233_2 "mixed.rgba32ui_rgba_astc_6x5_khr.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035233, VkglTestCase_035233_1, VkglTestCase_035233_2);

#define VkglTestCase_035234_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
#define VkglTestCase_035234_2 "d.rgba32ui_rgba_astc_6x5_khr.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035234, VkglTestCase_035234_1, VkglTestCase_035234_2);

#define VkglTestCase_035235_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits"
#define VkglTestCase_035235_2 "_mixed.rgba32ui_rgba_astc_6x5_khr.renderbuffer_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035235, VkglTestCase_035235_1, VkglTestCase_035235_2);

#define VkglTestCase_035236_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits"
#define VkglTestCase_035236_2 "_mixed.rgba32ui_rgba_astc_6x5_khr.renderbuffer_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035236, VkglTestCase_035236_1, VkglTestCase_035236_2);

#define VkglTestCase_035237_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bit"
#define VkglTestCase_035237_2 "s_mixed.rgba32ui_rgba_astc_6x5_khr.renderbuffer_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035237, VkglTestCase_035237_1, VkglTestCase_035237_2);

#define VkglTestCase_035238_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
#define VkglTestCase_035238_2 "xed.rgba32ui_rgba_astc_6x5_khr.renderbuffer_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035238, VkglTestCase_035238_1, VkglTestCase_035238_2);
