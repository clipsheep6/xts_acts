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

#define VkglTestCase_035439_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bit"
#define VkglTestCase_035439_2 "s_mixed.rgba_astc_10x5_khr_rgba32ui.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035439, VkglTestCase_035439_1, VkglTestCase_035439_2);

#define VkglTestCase_035440_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bit"
#define VkglTestCase_035440_2 "s_mixed.rgba_astc_10x5_khr_rgba32ui.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035440, VkglTestCase_035440_1, VkglTestCase_035440_2);

#define VkglTestCase_035441_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_035441_2 "ts_mixed.rgba_astc_10x5_khr_rgba32ui.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035441, VkglTestCase_035441_1, VkglTestCase_035441_2);

#define VkglTestCase_035442_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_035442_2 "ixed.rgba_astc_10x5_khr_rgba32ui.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035442, VkglTestCase_035442_1, VkglTestCase_035442_2);

#define VkglTestCase_035443_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_035443_2 "mixed.rgba_astc_10x5_khr_rgba32ui.texture2d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035443, VkglTestCase_035443_1, VkglTestCase_035443_2);

#define VkglTestCase_035444_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bit"
#define VkglTestCase_035444_2 "s_mixed.rgba_astc_10x5_khr_rgba32ui.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035444, VkglTestCase_035444_1, VkglTestCase_035444_2);

#define VkglTestCase_035445_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bit"
#define VkglTestCase_035445_2 "s_mixed.rgba_astc_10x5_khr_rgba32ui.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035445, VkglTestCase_035445_1, VkglTestCase_035445_2);

#define VkglTestCase_035446_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_035446_2 "ts_mixed.rgba_astc_10x5_khr_rgba32ui.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035446, VkglTestCase_035446_1, VkglTestCase_035446_2);

#define VkglTestCase_035447_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_035447_2 "ixed.rgba_astc_10x5_khr_rgba32ui.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035447, VkglTestCase_035447_1, VkglTestCase_035447_2);

#define VkglTestCase_035448_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_035448_2 "mixed.rgba_astc_10x5_khr_rgba32ui.texture3d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035448, VkglTestCase_035448_1, VkglTestCase_035448_2);

#define VkglTestCase_035449_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_035449_2 "ts_mixed.rgba_astc_10x5_khr_rgba32ui.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035449, VkglTestCase_035449_1, VkglTestCase_035449_2);

#define VkglTestCase_035450_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_035450_2 "ts_mixed.rgba_astc_10x5_khr_rgba32ui.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035450, VkglTestCase_035450_1, VkglTestCase_035450_2);

#define VkglTestCase_035451_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_b"
#define VkglTestCase_035451_2 "its_mixed.rgba_astc_10x5_khr_rgba32ui.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035451, VkglTestCase_035451_1, VkglTestCase_035451_2);

#define VkglTestCase_035452_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_035452_2 "mixed.rgba_astc_10x5_khr_rgba32ui.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035452, VkglTestCase_035452_1, VkglTestCase_035452_2);

#define VkglTestCase_035453_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits"
#define VkglTestCase_035453_2 "_mixed.rgba_astc_10x5_khr_rgba32ui.cubemap_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035453, VkglTestCase_035453_1, VkglTestCase_035453_2);

#define VkglTestCase_035454_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_035454_2 "ixed.rgba_astc_10x5_khr_rgba32ui.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035454, VkglTestCase_035454_1, VkglTestCase_035454_2);

#define VkglTestCase_035455_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_035455_2 "ixed.rgba_astc_10x5_khr_rgba32ui.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035455, VkglTestCase_035455_1, VkglTestCase_035455_2);

#define VkglTestCase_035456_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_035456_2 "mixed.rgba_astc_10x5_khr_rgba32ui.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035456, VkglTestCase_035456_1, VkglTestCase_035456_2);

#define VkglTestCase_035457_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
#define VkglTestCase_035457_2 "d.rgba_astc_10x5_khr_rgba32ui.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035457, VkglTestCase_035457_1, VkglTestCase_035457_2);

#define VkglTestCase_035458_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mix"
#define VkglTestCase_035458_2 "ed.rgba_astc_10x5_khr_rgba32ui.texture2d_array_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035458, VkglTestCase_035458_1, VkglTestCase_035458_2);
