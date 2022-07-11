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

#define VkglTestCase_035279_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bit"
#define VkglTestCase_035279_2 "s_mixed.rgba_astc_6x6_khr_rgba32ui.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035279, VkglTestCase_035279_1, VkglTestCase_035279_2);

#define VkglTestCase_035280_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bit"
#define VkglTestCase_035280_2 "s_mixed.rgba_astc_6x6_khr_rgba32ui.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035280, VkglTestCase_035280_1, VkglTestCase_035280_2);

#define VkglTestCase_035281_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_035281_2 "ts_mixed.rgba_astc_6x6_khr_rgba32ui.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035281, VkglTestCase_035281_1, VkglTestCase_035281_2);

#define VkglTestCase_035282_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_035282_2 "ixed.rgba_astc_6x6_khr_rgba32ui.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035282, VkglTestCase_035282_1, VkglTestCase_035282_2);

#define VkglTestCase_035283_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits"
#define VkglTestCase_035283_2 "_mixed.rgba_astc_6x6_khr_rgba32ui.texture2d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035283, VkglTestCase_035283_1, VkglTestCase_035283_2);

#define VkglTestCase_035284_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bit"
#define VkglTestCase_035284_2 "s_mixed.rgba_astc_6x6_khr_rgba32ui.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035284, VkglTestCase_035284_1, VkglTestCase_035284_2);

#define VkglTestCase_035285_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bit"
#define VkglTestCase_035285_2 "s_mixed.rgba_astc_6x6_khr_rgba32ui.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035285, VkglTestCase_035285_1, VkglTestCase_035285_2);

#define VkglTestCase_035286_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_035286_2 "ts_mixed.rgba_astc_6x6_khr_rgba32ui.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035286, VkglTestCase_035286_1, VkglTestCase_035286_2);

#define VkglTestCase_035287_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_035287_2 "ixed.rgba_astc_6x6_khr_rgba32ui.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035287, VkglTestCase_035287_1, VkglTestCase_035287_2);

#define VkglTestCase_035288_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits"
#define VkglTestCase_035288_2 "_mixed.rgba_astc_6x6_khr_rgba32ui.texture3d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035288, VkglTestCase_035288_1, VkglTestCase_035288_2);

#define VkglTestCase_035289_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_035289_2 "ts_mixed.rgba_astc_6x6_khr_rgba32ui.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035289, VkglTestCase_035289_1, VkglTestCase_035289_2);

#define VkglTestCase_035290_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_035290_2 "ts_mixed.rgba_astc_6x6_khr_rgba32ui.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035290, VkglTestCase_035290_1, VkglTestCase_035290_2);

#define VkglTestCase_035291_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_b"
#define VkglTestCase_035291_2 "its_mixed.rgba_astc_6x6_khr_rgba32ui.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035291, VkglTestCase_035291_1, VkglTestCase_035291_2);

#define VkglTestCase_035292_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_035292_2 "mixed.rgba_astc_6x6_khr_rgba32ui.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035292, VkglTestCase_035292_1, VkglTestCase_035292_2);

#define VkglTestCase_035293_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bit"
#define VkglTestCase_035293_2 "s_mixed.rgba_astc_6x6_khr_rgba32ui.cubemap_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035293, VkglTestCase_035293_1, VkglTestCase_035293_2);

#define VkglTestCase_035294_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_035294_2 "ixed.rgba_astc_6x6_khr_rgba32ui.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035294, VkglTestCase_035294_1, VkglTestCase_035294_2);

#define VkglTestCase_035295_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_035295_2 "ixed.rgba_astc_6x6_khr_rgba32ui.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035295, VkglTestCase_035295_1, VkglTestCase_035295_2);

#define VkglTestCase_035296_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_035296_2 "mixed.rgba_astc_6x6_khr_rgba32ui.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035296, VkglTestCase_035296_1, VkglTestCase_035296_2);

#define VkglTestCase_035297_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
#define VkglTestCase_035297_2 "d.rgba_astc_6x6_khr_rgba32ui.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035297, VkglTestCase_035297_1, VkglTestCase_035297_2);

#define VkglTestCase_035298_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
#define VkglTestCase_035298_2 "xed.rgba_astc_6x6_khr_rgba32ui.texture2d_array_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035298, VkglTestCase_035298_1, VkglTestCase_035298_2);
