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

#define VkglTestCase_035259_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bit"
#define VkglTestCase_035259_2 "s_mixed.rgba32ui_rgba_astc_6x6_khr.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035259, VkglTestCase_035259_1, VkglTestCase_035259_2);

#define VkglTestCase_035260_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bit"
#define VkglTestCase_035260_2 "s_mixed.rgba32ui_rgba_astc_6x6_khr.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035260, VkglTestCase_035260_1, VkglTestCase_035260_2);

#define VkglTestCase_035261_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_035261_2 "ts_mixed.rgba32ui_rgba_astc_6x6_khr.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035261, VkglTestCase_035261_1, VkglTestCase_035261_2);

#define VkglTestCase_035262_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_035262_2 "ixed.rgba32ui_rgba_astc_6x6_khr.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035262, VkglTestCase_035262_1, VkglTestCase_035262_2);

#define VkglTestCase_035263_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bit"
#define VkglTestCase_035263_2 "s_mixed.rgba32ui_rgba_astc_6x6_khr.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035263, VkglTestCase_035263_1, VkglTestCase_035263_2);

#define VkglTestCase_035264_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bit"
#define VkglTestCase_035264_2 "s_mixed.rgba32ui_rgba_astc_6x6_khr.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035264, VkglTestCase_035264_1, VkglTestCase_035264_2);

#define VkglTestCase_035265_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_035265_2 "ts_mixed.rgba32ui_rgba_astc_6x6_khr.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035265, VkglTestCase_035265_1, VkglTestCase_035265_2);

#define VkglTestCase_035266_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_035266_2 "ixed.rgba32ui_rgba_astc_6x6_khr.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035266, VkglTestCase_035266_1, VkglTestCase_035266_2);

#define VkglTestCase_035267_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_035267_2 "ts_mixed.rgba32ui_rgba_astc_6x6_khr.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035267, VkglTestCase_035267_1, VkglTestCase_035267_2);

#define VkglTestCase_035268_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_035268_2 "ts_mixed.rgba32ui_rgba_astc_6x6_khr.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035268, VkglTestCase_035268_1, VkglTestCase_035268_2);

#define VkglTestCase_035269_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_b"
#define VkglTestCase_035269_2 "its_mixed.rgba32ui_rgba_astc_6x6_khr.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035269, VkglTestCase_035269_1, VkglTestCase_035269_2);

#define VkglTestCase_035270_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_035270_2 "mixed.rgba32ui_rgba_astc_6x6_khr.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035270, VkglTestCase_035270_1, VkglTestCase_035270_2);

#define VkglTestCase_035271_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_035271_2 "ixed.rgba32ui_rgba_astc_6x6_khr.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035271, VkglTestCase_035271_1, VkglTestCase_035271_2);

#define VkglTestCase_035272_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_035272_2 "ixed.rgba32ui_rgba_astc_6x6_khr.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035272, VkglTestCase_035272_1, VkglTestCase_035272_2);

#define VkglTestCase_035273_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_035273_2 "mixed.rgba32ui_rgba_astc_6x6_khr.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035273, VkglTestCase_035273_1, VkglTestCase_035273_2);

#define VkglTestCase_035274_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
#define VkglTestCase_035274_2 "d.rgba32ui_rgba_astc_6x6_khr.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035274, VkglTestCase_035274_1, VkglTestCase_035274_2);

#define VkglTestCase_035275_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits"
#define VkglTestCase_035275_2 "_mixed.rgba32ui_rgba_astc_6x6_khr.renderbuffer_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035275, VkglTestCase_035275_1, VkglTestCase_035275_2);

#define VkglTestCase_035276_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits"
#define VkglTestCase_035276_2 "_mixed.rgba32ui_rgba_astc_6x6_khr.renderbuffer_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035276, VkglTestCase_035276_1, VkglTestCase_035276_2);

#define VkglTestCase_035277_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bit"
#define VkglTestCase_035277_2 "s_mixed.rgba32ui_rgba_astc_6x6_khr.renderbuffer_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035277, VkglTestCase_035277_1, VkglTestCase_035277_2);

#define VkglTestCase_035278_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
#define VkglTestCase_035278_2 "xed.rgba32ui_rgba_astc_6x6_khr.renderbuffer_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035278, VkglTestCase_035278_1, VkglTestCase_035278_2);
