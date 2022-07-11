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

#define VkglTestCase_035159_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bit"
#define VkglTestCase_035159_2 "s_mixed.rgba_astc_5x4_khr_rgba32ui.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035159, VkglTestCase_035159_1, VkglTestCase_035159_2);

#define VkglTestCase_035160_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bit"
#define VkglTestCase_035160_2 "s_mixed.rgba_astc_5x4_khr_rgba32ui.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035160, VkglTestCase_035160_1, VkglTestCase_035160_2);

#define VkglTestCase_035161_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_035161_2 "ts_mixed.rgba_astc_5x4_khr_rgba32ui.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035161, VkglTestCase_035161_1, VkglTestCase_035161_2);

#define VkglTestCase_035162_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_035162_2 "ixed.rgba_astc_5x4_khr_rgba32ui.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035162, VkglTestCase_035162_1, VkglTestCase_035162_2);

#define VkglTestCase_035163_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits"
#define VkglTestCase_035163_2 "_mixed.rgba_astc_5x4_khr_rgba32ui.texture2d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035163, VkglTestCase_035163_1, VkglTestCase_035163_2);

#define VkglTestCase_035164_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bit"
#define VkglTestCase_035164_2 "s_mixed.rgba_astc_5x4_khr_rgba32ui.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035164, VkglTestCase_035164_1, VkglTestCase_035164_2);

#define VkglTestCase_035165_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bit"
#define VkglTestCase_035165_2 "s_mixed.rgba_astc_5x4_khr_rgba32ui.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035165, VkglTestCase_035165_1, VkglTestCase_035165_2);

#define VkglTestCase_035166_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_035166_2 "ts_mixed.rgba_astc_5x4_khr_rgba32ui.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035166, VkglTestCase_035166_1, VkglTestCase_035166_2);

#define VkglTestCase_035167_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_035167_2 "ixed.rgba_astc_5x4_khr_rgba32ui.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035167, VkglTestCase_035167_1, VkglTestCase_035167_2);

#define VkglTestCase_035168_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits"
#define VkglTestCase_035168_2 "_mixed.rgba_astc_5x4_khr_rgba32ui.texture3d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035168, VkglTestCase_035168_1, VkglTestCase_035168_2);

#define VkglTestCase_035169_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_035169_2 "ts_mixed.rgba_astc_5x4_khr_rgba32ui.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035169, VkglTestCase_035169_1, VkglTestCase_035169_2);

#define VkglTestCase_035170_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_035170_2 "ts_mixed.rgba_astc_5x4_khr_rgba32ui.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035170, VkglTestCase_035170_1, VkglTestCase_035170_2);

#define VkglTestCase_035171_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_b"
#define VkglTestCase_035171_2 "its_mixed.rgba_astc_5x4_khr_rgba32ui.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035171, VkglTestCase_035171_1, VkglTestCase_035171_2);

#define VkglTestCase_035172_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_035172_2 "mixed.rgba_astc_5x4_khr_rgba32ui.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035172, VkglTestCase_035172_1, VkglTestCase_035172_2);

#define VkglTestCase_035173_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bit"
#define VkglTestCase_035173_2 "s_mixed.rgba_astc_5x4_khr_rgba32ui.cubemap_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035173, VkglTestCase_035173_1, VkglTestCase_035173_2);

#define VkglTestCase_035174_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_035174_2 "ixed.rgba_astc_5x4_khr_rgba32ui.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035174, VkglTestCase_035174_1, VkglTestCase_035174_2);

#define VkglTestCase_035175_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_035175_2 "ixed.rgba_astc_5x4_khr_rgba32ui.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035175, VkglTestCase_035175_1, VkglTestCase_035175_2);

#define VkglTestCase_035176_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_035176_2 "mixed.rgba_astc_5x4_khr_rgba32ui.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035176, VkglTestCase_035176_1, VkglTestCase_035176_2);

#define VkglTestCase_035177_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
#define VkglTestCase_035177_2 "d.rgba_astc_5x4_khr_rgba32ui.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035177, VkglTestCase_035177_1, VkglTestCase_035177_2);

#define VkglTestCase_035178_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
#define VkglTestCase_035178_2 "xed.rgba_astc_5x4_khr_rgba32ui.texture2d_array_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035178, VkglTestCase_035178_1, VkglTestCase_035178_2);
