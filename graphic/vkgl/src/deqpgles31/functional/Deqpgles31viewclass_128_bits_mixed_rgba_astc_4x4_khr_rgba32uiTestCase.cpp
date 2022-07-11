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

#define VkglTestCase_035119_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bit"
#define VkglTestCase_035119_2 "s_mixed.rgba_astc_4x4_khr_rgba32ui.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035119, VkglTestCase_035119_1, VkglTestCase_035119_2);

#define VkglTestCase_035120_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bit"
#define VkglTestCase_035120_2 "s_mixed.rgba_astc_4x4_khr_rgba32ui.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035120, VkglTestCase_035120_1, VkglTestCase_035120_2);

#define VkglTestCase_035121_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_035121_2 "ts_mixed.rgba_astc_4x4_khr_rgba32ui.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035121, VkglTestCase_035121_1, VkglTestCase_035121_2);

#define VkglTestCase_035122_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_035122_2 "ixed.rgba_astc_4x4_khr_rgba32ui.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035122, VkglTestCase_035122_1, VkglTestCase_035122_2);

#define VkglTestCase_035123_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits"
#define VkglTestCase_035123_2 "_mixed.rgba_astc_4x4_khr_rgba32ui.texture2d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035123, VkglTestCase_035123_1, VkglTestCase_035123_2);

#define VkglTestCase_035124_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bit"
#define VkglTestCase_035124_2 "s_mixed.rgba_astc_4x4_khr_rgba32ui.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035124, VkglTestCase_035124_1, VkglTestCase_035124_2);

#define VkglTestCase_035125_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bit"
#define VkglTestCase_035125_2 "s_mixed.rgba_astc_4x4_khr_rgba32ui.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035125, VkglTestCase_035125_1, VkglTestCase_035125_2);

#define VkglTestCase_035126_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_035126_2 "ts_mixed.rgba_astc_4x4_khr_rgba32ui.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035126, VkglTestCase_035126_1, VkglTestCase_035126_2);

#define VkglTestCase_035127_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_035127_2 "ixed.rgba_astc_4x4_khr_rgba32ui.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035127, VkglTestCase_035127_1, VkglTestCase_035127_2);

#define VkglTestCase_035128_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits"
#define VkglTestCase_035128_2 "_mixed.rgba_astc_4x4_khr_rgba32ui.texture3d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035128, VkglTestCase_035128_1, VkglTestCase_035128_2);

#define VkglTestCase_035129_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_035129_2 "ts_mixed.rgba_astc_4x4_khr_rgba32ui.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035129, VkglTestCase_035129_1, VkglTestCase_035129_2);

#define VkglTestCase_035130_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_035130_2 "ts_mixed.rgba_astc_4x4_khr_rgba32ui.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035130, VkglTestCase_035130_1, VkglTestCase_035130_2);

#define VkglTestCase_035131_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_b"
#define VkglTestCase_035131_2 "its_mixed.rgba_astc_4x4_khr_rgba32ui.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035131, VkglTestCase_035131_1, VkglTestCase_035131_2);

#define VkglTestCase_035132_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_035132_2 "mixed.rgba_astc_4x4_khr_rgba32ui.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035132, VkglTestCase_035132_1, VkglTestCase_035132_2);

#define VkglTestCase_035133_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bit"
#define VkglTestCase_035133_2 "s_mixed.rgba_astc_4x4_khr_rgba32ui.cubemap_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035133, VkglTestCase_035133_1, VkglTestCase_035133_2);

#define VkglTestCase_035134_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_035134_2 "ixed.rgba_astc_4x4_khr_rgba32ui.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035134, VkglTestCase_035134_1, VkglTestCase_035134_2);

#define VkglTestCase_035135_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_035135_2 "ixed.rgba_astc_4x4_khr_rgba32ui.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035135, VkglTestCase_035135_1, VkglTestCase_035135_2);

#define VkglTestCase_035136_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_035136_2 "mixed.rgba_astc_4x4_khr_rgba32ui.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035136, VkglTestCase_035136_1, VkglTestCase_035136_2);

#define VkglTestCase_035137_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
#define VkglTestCase_035137_2 "d.rgba_astc_4x4_khr_rgba32ui.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035137, VkglTestCase_035137_1, VkglTestCase_035137_2);

#define VkglTestCase_035138_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
#define VkglTestCase_035138_2 "xed.rgba_astc_4x4_khr_rgba32ui.texture2d_array_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035138, VkglTestCase_035138_1, VkglTestCase_035138_2);
