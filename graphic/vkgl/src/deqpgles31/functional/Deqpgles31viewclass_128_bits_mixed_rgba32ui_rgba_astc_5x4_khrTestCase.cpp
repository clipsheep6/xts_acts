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

#define VkglTestCase_035139_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bit"
#define VkglTestCase_035139_2 "s_mixed.rgba32ui_rgba_astc_5x4_khr.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035139, VkglTestCase_035139_1, VkglTestCase_035139_2);

#define VkglTestCase_035140_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bit"
#define VkglTestCase_035140_2 "s_mixed.rgba32ui_rgba_astc_5x4_khr.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035140, VkglTestCase_035140_1, VkglTestCase_035140_2);

#define VkglTestCase_035141_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_035141_2 "ts_mixed.rgba32ui_rgba_astc_5x4_khr.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035141, VkglTestCase_035141_1, VkglTestCase_035141_2);

#define VkglTestCase_035142_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_035142_2 "ixed.rgba32ui_rgba_astc_5x4_khr.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035142, VkglTestCase_035142_1, VkglTestCase_035142_2);

#define VkglTestCase_035143_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bit"
#define VkglTestCase_035143_2 "s_mixed.rgba32ui_rgba_astc_5x4_khr.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035143, VkglTestCase_035143_1, VkglTestCase_035143_2);

#define VkglTestCase_035144_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bit"
#define VkglTestCase_035144_2 "s_mixed.rgba32ui_rgba_astc_5x4_khr.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035144, VkglTestCase_035144_1, VkglTestCase_035144_2);

#define VkglTestCase_035145_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_035145_2 "ts_mixed.rgba32ui_rgba_astc_5x4_khr.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035145, VkglTestCase_035145_1, VkglTestCase_035145_2);

#define VkglTestCase_035146_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_035146_2 "ixed.rgba32ui_rgba_astc_5x4_khr.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035146, VkglTestCase_035146_1, VkglTestCase_035146_2);

#define VkglTestCase_035147_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_035147_2 "ts_mixed.rgba32ui_rgba_astc_5x4_khr.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035147, VkglTestCase_035147_1, VkglTestCase_035147_2);

#define VkglTestCase_035148_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_035148_2 "ts_mixed.rgba32ui_rgba_astc_5x4_khr.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035148, VkglTestCase_035148_1, VkglTestCase_035148_2);

#define VkglTestCase_035149_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_b"
#define VkglTestCase_035149_2 "its_mixed.rgba32ui_rgba_astc_5x4_khr.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035149, VkglTestCase_035149_1, VkglTestCase_035149_2);

#define VkglTestCase_035150_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_035150_2 "mixed.rgba32ui_rgba_astc_5x4_khr.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035150, VkglTestCase_035150_1, VkglTestCase_035150_2);

#define VkglTestCase_035151_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_035151_2 "ixed.rgba32ui_rgba_astc_5x4_khr.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035151, VkglTestCase_035151_1, VkglTestCase_035151_2);

#define VkglTestCase_035152_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_035152_2 "ixed.rgba32ui_rgba_astc_5x4_khr.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035152, VkglTestCase_035152_1, VkglTestCase_035152_2);

#define VkglTestCase_035153_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_035153_2 "mixed.rgba32ui_rgba_astc_5x4_khr.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035153, VkglTestCase_035153_1, VkglTestCase_035153_2);

#define VkglTestCase_035154_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
#define VkglTestCase_035154_2 "d.rgba32ui_rgba_astc_5x4_khr.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035154, VkglTestCase_035154_1, VkglTestCase_035154_2);

#define VkglTestCase_035155_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits"
#define VkglTestCase_035155_2 "_mixed.rgba32ui_rgba_astc_5x4_khr.renderbuffer_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035155, VkglTestCase_035155_1, VkglTestCase_035155_2);

#define VkglTestCase_035156_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits"
#define VkglTestCase_035156_2 "_mixed.rgba32ui_rgba_astc_5x4_khr.renderbuffer_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035156, VkglTestCase_035156_1, VkglTestCase_035156_2);

#define VkglTestCase_035157_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bit"
#define VkglTestCase_035157_2 "s_mixed.rgba32ui_rgba_astc_5x4_khr.renderbuffer_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035157, VkglTestCase_035157_1, VkglTestCase_035157_2);

#define VkglTestCase_035158_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
#define VkglTestCase_035158_2 "xed.rgba32ui_rgba_astc_5x4_khr.renderbuffer_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035158, VkglTestCase_035158_1, VkglTestCase_035158_2);
