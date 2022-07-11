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
#include "../ActsDeqpgles310035TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_034523_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bit"
#define VkglTestCase_034523_2 "s_mixed.rgba_astc_12x10_khr_rgba32f.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034523, VkglTestCase_034523_1, VkglTestCase_034523_2);

#define VkglTestCase_034524_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bit"
#define VkglTestCase_034524_2 "s_mixed.rgba_astc_12x10_khr_rgba32f.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034524, VkglTestCase_034524_1, VkglTestCase_034524_2);

#define VkglTestCase_034525_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_034525_2 "ts_mixed.rgba_astc_12x10_khr_rgba32f.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034525, VkglTestCase_034525_1, VkglTestCase_034525_2);

#define VkglTestCase_034526_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_034526_2 "ixed.rgba_astc_12x10_khr_rgba32f.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034526, VkglTestCase_034526_1, VkglTestCase_034526_2);

#define VkglTestCase_034527_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bit"
#define VkglTestCase_034527_2 "s_mixed.rgba_astc_12x10_khr_rgba32f.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034527, VkglTestCase_034527_1, VkglTestCase_034527_2);

#define VkglTestCase_034528_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bit"
#define VkglTestCase_034528_2 "s_mixed.rgba_astc_12x10_khr_rgba32f.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034528, VkglTestCase_034528_1, VkglTestCase_034528_2);

#define VkglTestCase_034529_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_034529_2 "ts_mixed.rgba_astc_12x10_khr_rgba32f.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034529, VkglTestCase_034529_1, VkglTestCase_034529_2);

#define VkglTestCase_034530_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_034530_2 "ixed.rgba_astc_12x10_khr_rgba32f.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034530, VkglTestCase_034530_1, VkglTestCase_034530_2);

#define VkglTestCase_034531_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_034531_2 "ts_mixed.rgba_astc_12x10_khr_rgba32f.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034531, VkglTestCase_034531_1, VkglTestCase_034531_2);

#define VkglTestCase_034532_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_034532_2 "ts_mixed.rgba_astc_12x10_khr_rgba32f.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034532, VkglTestCase_034532_1, VkglTestCase_034532_2);

#define VkglTestCase_034533_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_b"
#define VkglTestCase_034533_2 "its_mixed.rgba_astc_12x10_khr_rgba32f.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034533, VkglTestCase_034533_1, VkglTestCase_034533_2);

#define VkglTestCase_034534_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_034534_2 "mixed.rgba_astc_12x10_khr_rgba32f.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034534, VkglTestCase_034534_1, VkglTestCase_034534_2);

#define VkglTestCase_034535_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_034535_2 "ixed.rgba_astc_12x10_khr_rgba32f.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034535, VkglTestCase_034535_1, VkglTestCase_034535_2);

#define VkglTestCase_034536_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_034536_2 "ixed.rgba_astc_12x10_khr_rgba32f.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034536, VkglTestCase_034536_1, VkglTestCase_034536_2);

#define VkglTestCase_034537_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_034537_2 "mixed.rgba_astc_12x10_khr_rgba32f.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034537, VkglTestCase_034537_1, VkglTestCase_034537_2);

#define VkglTestCase_034538_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
#define VkglTestCase_034538_2 "d.rgba_astc_12x10_khr_rgba32f.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034538, VkglTestCase_034538_1, VkglTestCase_034538_2);
