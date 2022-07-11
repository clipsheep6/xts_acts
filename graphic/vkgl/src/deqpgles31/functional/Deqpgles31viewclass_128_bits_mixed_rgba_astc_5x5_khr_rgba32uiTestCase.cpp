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

#define VkglTestCase_035199_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bit"
#define VkglTestCase_035199_2 "s_mixed.rgba_astc_5x5_khr_rgba32ui.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035199, VkglTestCase_035199_1, VkglTestCase_035199_2);

#define VkglTestCase_035200_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bit"
#define VkglTestCase_035200_2 "s_mixed.rgba_astc_5x5_khr_rgba32ui.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035200, VkglTestCase_035200_1, VkglTestCase_035200_2);

#define VkglTestCase_035201_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_035201_2 "ts_mixed.rgba_astc_5x5_khr_rgba32ui.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035201, VkglTestCase_035201_1, VkglTestCase_035201_2);

#define VkglTestCase_035202_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_035202_2 "ixed.rgba_astc_5x5_khr_rgba32ui.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035202, VkglTestCase_035202_1, VkglTestCase_035202_2);

#define VkglTestCase_035203_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits"
#define VkglTestCase_035203_2 "_mixed.rgba_astc_5x5_khr_rgba32ui.texture2d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035203, VkglTestCase_035203_1, VkglTestCase_035203_2);

#define VkglTestCase_035204_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bit"
#define VkglTestCase_035204_2 "s_mixed.rgba_astc_5x5_khr_rgba32ui.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035204, VkglTestCase_035204_1, VkglTestCase_035204_2);

#define VkglTestCase_035205_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bit"
#define VkglTestCase_035205_2 "s_mixed.rgba_astc_5x5_khr_rgba32ui.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035205, VkglTestCase_035205_1, VkglTestCase_035205_2);

#define VkglTestCase_035206_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_035206_2 "ts_mixed.rgba_astc_5x5_khr_rgba32ui.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035206, VkglTestCase_035206_1, VkglTestCase_035206_2);

#define VkglTestCase_035207_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_035207_2 "ixed.rgba_astc_5x5_khr_rgba32ui.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035207, VkglTestCase_035207_1, VkglTestCase_035207_2);

#define VkglTestCase_035208_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits"
#define VkglTestCase_035208_2 "_mixed.rgba_astc_5x5_khr_rgba32ui.texture3d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035208, VkglTestCase_035208_1, VkglTestCase_035208_2);

#define VkglTestCase_035209_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_035209_2 "ts_mixed.rgba_astc_5x5_khr_rgba32ui.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035209, VkglTestCase_035209_1, VkglTestCase_035209_2);

#define VkglTestCase_035210_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_035210_2 "ts_mixed.rgba_astc_5x5_khr_rgba32ui.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035210, VkglTestCase_035210_1, VkglTestCase_035210_2);

#define VkglTestCase_035211_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_b"
#define VkglTestCase_035211_2 "its_mixed.rgba_astc_5x5_khr_rgba32ui.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035211, VkglTestCase_035211_1, VkglTestCase_035211_2);

#define VkglTestCase_035212_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_035212_2 "mixed.rgba_astc_5x5_khr_rgba32ui.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035212, VkglTestCase_035212_1, VkglTestCase_035212_2);

#define VkglTestCase_035213_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bit"
#define VkglTestCase_035213_2 "s_mixed.rgba_astc_5x5_khr_rgba32ui.cubemap_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035213, VkglTestCase_035213_1, VkglTestCase_035213_2);

#define VkglTestCase_035214_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_035214_2 "ixed.rgba_astc_5x5_khr_rgba32ui.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035214, VkglTestCase_035214_1, VkglTestCase_035214_2);

#define VkglTestCase_035215_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_035215_2 "ixed.rgba_astc_5x5_khr_rgba32ui.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035215, VkglTestCase_035215_1, VkglTestCase_035215_2);

#define VkglTestCase_035216_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_035216_2 "mixed.rgba_astc_5x5_khr_rgba32ui.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035216, VkglTestCase_035216_1, VkglTestCase_035216_2);

#define VkglTestCase_035217_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
#define VkglTestCase_035217_2 "d.rgba_astc_5x5_khr_rgba32ui.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035217, VkglTestCase_035217_1, VkglTestCase_035217_2);

#define VkglTestCase_035218_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
#define VkglTestCase_035218_2 "xed.rgba_astc_5x5_khr_rgba32ui.texture2d_array_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035218, VkglTestCase_035218_1, VkglTestCase_035218_2);
