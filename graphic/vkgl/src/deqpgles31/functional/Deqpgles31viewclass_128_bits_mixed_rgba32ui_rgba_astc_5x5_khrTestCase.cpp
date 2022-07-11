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

#define VkglTestCase_035179_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bit"
#define VkglTestCase_035179_2 "s_mixed.rgba32ui_rgba_astc_5x5_khr.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035179, VkglTestCase_035179_1, VkglTestCase_035179_2);

#define VkglTestCase_035180_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bit"
#define VkglTestCase_035180_2 "s_mixed.rgba32ui_rgba_astc_5x5_khr.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035180, VkglTestCase_035180_1, VkglTestCase_035180_2);

#define VkglTestCase_035181_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_035181_2 "ts_mixed.rgba32ui_rgba_astc_5x5_khr.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035181, VkglTestCase_035181_1, VkglTestCase_035181_2);

#define VkglTestCase_035182_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_035182_2 "ixed.rgba32ui_rgba_astc_5x5_khr.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035182, VkglTestCase_035182_1, VkglTestCase_035182_2);

#define VkglTestCase_035183_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bit"
#define VkglTestCase_035183_2 "s_mixed.rgba32ui_rgba_astc_5x5_khr.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035183, VkglTestCase_035183_1, VkglTestCase_035183_2);

#define VkglTestCase_035184_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bit"
#define VkglTestCase_035184_2 "s_mixed.rgba32ui_rgba_astc_5x5_khr.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035184, VkglTestCase_035184_1, VkglTestCase_035184_2);

#define VkglTestCase_035185_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_035185_2 "ts_mixed.rgba32ui_rgba_astc_5x5_khr.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035185, VkglTestCase_035185_1, VkglTestCase_035185_2);

#define VkglTestCase_035186_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_035186_2 "ixed.rgba32ui_rgba_astc_5x5_khr.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035186, VkglTestCase_035186_1, VkglTestCase_035186_2);

#define VkglTestCase_035187_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_035187_2 "ts_mixed.rgba32ui_rgba_astc_5x5_khr.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035187, VkglTestCase_035187_1, VkglTestCase_035187_2);

#define VkglTestCase_035188_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_035188_2 "ts_mixed.rgba32ui_rgba_astc_5x5_khr.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035188, VkglTestCase_035188_1, VkglTestCase_035188_2);

#define VkglTestCase_035189_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_b"
#define VkglTestCase_035189_2 "its_mixed.rgba32ui_rgba_astc_5x5_khr.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035189, VkglTestCase_035189_1, VkglTestCase_035189_2);

#define VkglTestCase_035190_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_035190_2 "mixed.rgba32ui_rgba_astc_5x5_khr.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035190, VkglTestCase_035190_1, VkglTestCase_035190_2);

#define VkglTestCase_035191_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_035191_2 "ixed.rgba32ui_rgba_astc_5x5_khr.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035191, VkglTestCase_035191_1, VkglTestCase_035191_2);

#define VkglTestCase_035192_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_035192_2 "ixed.rgba32ui_rgba_astc_5x5_khr.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035192, VkglTestCase_035192_1, VkglTestCase_035192_2);

#define VkglTestCase_035193_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_035193_2 "mixed.rgba32ui_rgba_astc_5x5_khr.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035193, VkglTestCase_035193_1, VkglTestCase_035193_2);

#define VkglTestCase_035194_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
#define VkglTestCase_035194_2 "d.rgba32ui_rgba_astc_5x5_khr.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035194, VkglTestCase_035194_1, VkglTestCase_035194_2);

#define VkglTestCase_035195_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits"
#define VkglTestCase_035195_2 "_mixed.rgba32ui_rgba_astc_5x5_khr.renderbuffer_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035195, VkglTestCase_035195_1, VkglTestCase_035195_2);

#define VkglTestCase_035196_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits"
#define VkglTestCase_035196_2 "_mixed.rgba32ui_rgba_astc_5x5_khr.renderbuffer_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035196, VkglTestCase_035196_1, VkglTestCase_035196_2);

#define VkglTestCase_035197_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bit"
#define VkglTestCase_035197_2 "s_mixed.rgba32ui_rgba_astc_5x5_khr.renderbuffer_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035197, VkglTestCase_035197_1, VkglTestCase_035197_2);

#define VkglTestCase_035198_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
#define VkglTestCase_035198_2 "xed.rgba32ui_rgba_astc_5x5_khr.renderbuffer_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035198, VkglTestCase_035198_1, VkglTestCase_035198_2);
