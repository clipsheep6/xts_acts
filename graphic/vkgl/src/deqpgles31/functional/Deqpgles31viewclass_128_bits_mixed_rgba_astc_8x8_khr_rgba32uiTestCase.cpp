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

#define VkglTestCase_035399_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bit"
#define VkglTestCase_035399_2 "s_mixed.rgba_astc_8x8_khr_rgba32ui.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035399, VkglTestCase_035399_1, VkglTestCase_035399_2);

#define VkglTestCase_035400_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bit"
#define VkglTestCase_035400_2 "s_mixed.rgba_astc_8x8_khr_rgba32ui.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035400, VkglTestCase_035400_1, VkglTestCase_035400_2);

#define VkglTestCase_035401_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_035401_2 "ts_mixed.rgba_astc_8x8_khr_rgba32ui.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035401, VkglTestCase_035401_1, VkglTestCase_035401_2);

#define VkglTestCase_035402_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_035402_2 "ixed.rgba_astc_8x8_khr_rgba32ui.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035402, VkglTestCase_035402_1, VkglTestCase_035402_2);

#define VkglTestCase_035403_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits"
#define VkglTestCase_035403_2 "_mixed.rgba_astc_8x8_khr_rgba32ui.texture2d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035403, VkglTestCase_035403_1, VkglTestCase_035403_2);

#define VkglTestCase_035404_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bit"
#define VkglTestCase_035404_2 "s_mixed.rgba_astc_8x8_khr_rgba32ui.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035404, VkglTestCase_035404_1, VkglTestCase_035404_2);

#define VkglTestCase_035405_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bit"
#define VkglTestCase_035405_2 "s_mixed.rgba_astc_8x8_khr_rgba32ui.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035405, VkglTestCase_035405_1, VkglTestCase_035405_2);

#define VkglTestCase_035406_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_035406_2 "ts_mixed.rgba_astc_8x8_khr_rgba32ui.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035406, VkglTestCase_035406_1, VkglTestCase_035406_2);

#define VkglTestCase_035407_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_035407_2 "ixed.rgba_astc_8x8_khr_rgba32ui.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035407, VkglTestCase_035407_1, VkglTestCase_035407_2);

#define VkglTestCase_035408_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits"
#define VkglTestCase_035408_2 "_mixed.rgba_astc_8x8_khr_rgba32ui.texture3d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035408, VkglTestCase_035408_1, VkglTestCase_035408_2);

#define VkglTestCase_035409_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_035409_2 "ts_mixed.rgba_astc_8x8_khr_rgba32ui.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035409, VkglTestCase_035409_1, VkglTestCase_035409_2);

#define VkglTestCase_035410_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_035410_2 "ts_mixed.rgba_astc_8x8_khr_rgba32ui.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035410, VkglTestCase_035410_1, VkglTestCase_035410_2);

#define VkglTestCase_035411_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_b"
#define VkglTestCase_035411_2 "its_mixed.rgba_astc_8x8_khr_rgba32ui.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035411, VkglTestCase_035411_1, VkglTestCase_035411_2);

#define VkglTestCase_035412_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_035412_2 "mixed.rgba_astc_8x8_khr_rgba32ui.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035412, VkglTestCase_035412_1, VkglTestCase_035412_2);

#define VkglTestCase_035413_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bit"
#define VkglTestCase_035413_2 "s_mixed.rgba_astc_8x8_khr_rgba32ui.cubemap_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035413, VkglTestCase_035413_1, VkglTestCase_035413_2);

#define VkglTestCase_035414_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_035414_2 "ixed.rgba_astc_8x8_khr_rgba32ui.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035414, VkglTestCase_035414_1, VkglTestCase_035414_2);

#define VkglTestCase_035415_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_035415_2 "ixed.rgba_astc_8x8_khr_rgba32ui.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035415, VkglTestCase_035415_1, VkglTestCase_035415_2);

#define VkglTestCase_035416_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_035416_2 "mixed.rgba_astc_8x8_khr_rgba32ui.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035416, VkglTestCase_035416_1, VkglTestCase_035416_2);

#define VkglTestCase_035417_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
#define VkglTestCase_035417_2 "d.rgba_astc_8x8_khr_rgba32ui.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035417, VkglTestCase_035417_1, VkglTestCase_035417_2);

#define VkglTestCase_035418_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
#define VkglTestCase_035418_2 "xed.rgba_astc_8x8_khr_rgba32ui.texture2d_array_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035418, VkglTestCase_035418_1, VkglTestCase_035418_2);
