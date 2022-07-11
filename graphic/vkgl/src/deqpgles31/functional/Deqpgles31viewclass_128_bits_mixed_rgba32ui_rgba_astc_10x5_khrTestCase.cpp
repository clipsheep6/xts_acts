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

#define VkglTestCase_035419_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bit"
#define VkglTestCase_035419_2 "s_mixed.rgba32ui_rgba_astc_10x5_khr.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035419, VkglTestCase_035419_1, VkglTestCase_035419_2);

#define VkglTestCase_035420_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bit"
#define VkglTestCase_035420_2 "s_mixed.rgba32ui_rgba_astc_10x5_khr.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035420, VkglTestCase_035420_1, VkglTestCase_035420_2);

#define VkglTestCase_035421_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_035421_2 "ts_mixed.rgba32ui_rgba_astc_10x5_khr.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035421, VkglTestCase_035421_1, VkglTestCase_035421_2);

#define VkglTestCase_035422_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_035422_2 "ixed.rgba32ui_rgba_astc_10x5_khr.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035422, VkglTestCase_035422_1, VkglTestCase_035422_2);

#define VkglTestCase_035423_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bit"
#define VkglTestCase_035423_2 "s_mixed.rgba32ui_rgba_astc_10x5_khr.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035423, VkglTestCase_035423_1, VkglTestCase_035423_2);

#define VkglTestCase_035424_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bit"
#define VkglTestCase_035424_2 "s_mixed.rgba32ui_rgba_astc_10x5_khr.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035424, VkglTestCase_035424_1, VkglTestCase_035424_2);

#define VkglTestCase_035425_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_035425_2 "ts_mixed.rgba32ui_rgba_astc_10x5_khr.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035425, VkglTestCase_035425_1, VkglTestCase_035425_2);

#define VkglTestCase_035426_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_035426_2 "ixed.rgba32ui_rgba_astc_10x5_khr.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035426, VkglTestCase_035426_1, VkglTestCase_035426_2);

#define VkglTestCase_035427_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_035427_2 "ts_mixed.rgba32ui_rgba_astc_10x5_khr.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035427, VkglTestCase_035427_1, VkglTestCase_035427_2);

#define VkglTestCase_035428_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_035428_2 "ts_mixed.rgba32ui_rgba_astc_10x5_khr.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035428, VkglTestCase_035428_1, VkglTestCase_035428_2);

#define VkglTestCase_035429_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_b"
#define VkglTestCase_035429_2 "its_mixed.rgba32ui_rgba_astc_10x5_khr.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035429, VkglTestCase_035429_1, VkglTestCase_035429_2);

#define VkglTestCase_035430_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_035430_2 "mixed.rgba32ui_rgba_astc_10x5_khr.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035430, VkglTestCase_035430_1, VkglTestCase_035430_2);

#define VkglTestCase_035431_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_035431_2 "ixed.rgba32ui_rgba_astc_10x5_khr.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035431, VkglTestCase_035431_1, VkglTestCase_035431_2);

#define VkglTestCase_035432_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_035432_2 "ixed.rgba32ui_rgba_astc_10x5_khr.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035432, VkglTestCase_035432_1, VkglTestCase_035432_2);

#define VkglTestCase_035433_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_035433_2 "mixed.rgba32ui_rgba_astc_10x5_khr.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035433, VkglTestCase_035433_1, VkglTestCase_035433_2);

#define VkglTestCase_035434_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
#define VkglTestCase_035434_2 "d.rgba32ui_rgba_astc_10x5_khr.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035434, VkglTestCase_035434_1, VkglTestCase_035434_2);

#define VkglTestCase_035435_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_035435_2 "mixed.rgba32ui_rgba_astc_10x5_khr.renderbuffer_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035435, VkglTestCase_035435_1, VkglTestCase_035435_2);

#define VkglTestCase_035436_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_035436_2 "mixed.rgba32ui_rgba_astc_10x5_khr.renderbuffer_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035436, VkglTestCase_035436_1, VkglTestCase_035436_2);

#define VkglTestCase_035437_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits"
#define VkglTestCase_035437_2 "_mixed.rgba32ui_rgba_astc_10x5_khr.renderbuffer_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035437, VkglTestCase_035437_1, VkglTestCase_035437_2);

#define VkglTestCase_035438_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mix"
#define VkglTestCase_035438_2 "ed.rgba32ui_rgba_astc_10x5_khr.renderbuffer_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035438, VkglTestCase_035438_1, VkglTestCase_035438_2);
