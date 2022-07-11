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

#define VkglTestCase_035319_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bit"
#define VkglTestCase_035319_2 "s_mixed.rgba_astc_8x5_khr_rgba32ui.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035319, VkglTestCase_035319_1, VkglTestCase_035319_2);

#define VkglTestCase_035320_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bit"
#define VkglTestCase_035320_2 "s_mixed.rgba_astc_8x5_khr_rgba32ui.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035320, VkglTestCase_035320_1, VkglTestCase_035320_2);

#define VkglTestCase_035321_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_035321_2 "ts_mixed.rgba_astc_8x5_khr_rgba32ui.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035321, VkglTestCase_035321_1, VkglTestCase_035321_2);

#define VkglTestCase_035322_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_035322_2 "ixed.rgba_astc_8x5_khr_rgba32ui.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035322, VkglTestCase_035322_1, VkglTestCase_035322_2);

#define VkglTestCase_035323_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits"
#define VkglTestCase_035323_2 "_mixed.rgba_astc_8x5_khr_rgba32ui.texture2d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035323, VkglTestCase_035323_1, VkglTestCase_035323_2);

#define VkglTestCase_035324_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bit"
#define VkglTestCase_035324_2 "s_mixed.rgba_astc_8x5_khr_rgba32ui.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035324, VkglTestCase_035324_1, VkglTestCase_035324_2);

#define VkglTestCase_035325_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bit"
#define VkglTestCase_035325_2 "s_mixed.rgba_astc_8x5_khr_rgba32ui.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035325, VkglTestCase_035325_1, VkglTestCase_035325_2);

#define VkglTestCase_035326_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_035326_2 "ts_mixed.rgba_astc_8x5_khr_rgba32ui.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035326, VkglTestCase_035326_1, VkglTestCase_035326_2);

#define VkglTestCase_035327_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_035327_2 "ixed.rgba_astc_8x5_khr_rgba32ui.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035327, VkglTestCase_035327_1, VkglTestCase_035327_2);

#define VkglTestCase_035328_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits"
#define VkglTestCase_035328_2 "_mixed.rgba_astc_8x5_khr_rgba32ui.texture3d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035328, VkglTestCase_035328_1, VkglTestCase_035328_2);

#define VkglTestCase_035329_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_035329_2 "ts_mixed.rgba_astc_8x5_khr_rgba32ui.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035329, VkglTestCase_035329_1, VkglTestCase_035329_2);

#define VkglTestCase_035330_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_035330_2 "ts_mixed.rgba_astc_8x5_khr_rgba32ui.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035330, VkglTestCase_035330_1, VkglTestCase_035330_2);

#define VkglTestCase_035331_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_b"
#define VkglTestCase_035331_2 "its_mixed.rgba_astc_8x5_khr_rgba32ui.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035331, VkglTestCase_035331_1, VkglTestCase_035331_2);

#define VkglTestCase_035332_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_035332_2 "mixed.rgba_astc_8x5_khr_rgba32ui.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035332, VkglTestCase_035332_1, VkglTestCase_035332_2);

#define VkglTestCase_035333_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bit"
#define VkglTestCase_035333_2 "s_mixed.rgba_astc_8x5_khr_rgba32ui.cubemap_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035333, VkglTestCase_035333_1, VkglTestCase_035333_2);

#define VkglTestCase_035334_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_035334_2 "ixed.rgba_astc_8x5_khr_rgba32ui.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035334, VkglTestCase_035334_1, VkglTestCase_035334_2);

#define VkglTestCase_035335_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_035335_2 "ixed.rgba_astc_8x5_khr_rgba32ui.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035335, VkglTestCase_035335_1, VkglTestCase_035335_2);

#define VkglTestCase_035336_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_035336_2 "mixed.rgba_astc_8x5_khr_rgba32ui.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035336, VkglTestCase_035336_1, VkglTestCase_035336_2);

#define VkglTestCase_035337_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
#define VkglTestCase_035337_2 "d.rgba_astc_8x5_khr_rgba32ui.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035337, VkglTestCase_035337_1, VkglTestCase_035337_2);

#define VkglTestCase_035338_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
#define VkglTestCase_035338_2 "xed.rgba_astc_8x5_khr_rgba32ui.texture2d_array_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035338, VkglTestCase_035338_1, VkglTestCase_035338_2);
