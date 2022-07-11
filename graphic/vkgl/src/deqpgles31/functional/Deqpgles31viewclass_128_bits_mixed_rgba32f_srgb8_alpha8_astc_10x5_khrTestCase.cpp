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

#define VkglTestCase_034827_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
#define VkglTestCase_034827_2 "xed.rgba32f_srgb8_alpha8_astc_10x5_khr.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034827, VkglTestCase_034827_1, VkglTestCase_034827_2);

#define VkglTestCase_034828_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
#define VkglTestCase_034828_2 "xed.rgba32f_srgb8_alpha8_astc_10x5_khr.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034828, VkglTestCase_034828_1, VkglTestCase_034828_2);

#define VkglTestCase_034829_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_034829_2 "ixed.rgba32f_srgb8_alpha8_astc_10x5_khr.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034829, VkglTestCase_034829_1, VkglTestCase_034829_2);

#define VkglTestCase_034830_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed"
#define VkglTestCase_034830_2 ".rgba32f_srgb8_alpha8_astc_10x5_khr.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034830, VkglTestCase_034830_1, VkglTestCase_034830_2);

#define VkglTestCase_034831_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
#define VkglTestCase_034831_2 "xed.rgba32f_srgb8_alpha8_astc_10x5_khr.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034831, VkglTestCase_034831_1, VkglTestCase_034831_2);

#define VkglTestCase_034832_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
#define VkglTestCase_034832_2 "xed.rgba32f_srgb8_alpha8_astc_10x5_khr.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034832, VkglTestCase_034832_1, VkglTestCase_034832_2);

#define VkglTestCase_034833_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_034833_2 "ixed.rgba32f_srgb8_alpha8_astc_10x5_khr.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034833, VkglTestCase_034833_1, VkglTestCase_034833_2);

#define VkglTestCase_034834_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed"
#define VkglTestCase_034834_2 ".rgba32f_srgb8_alpha8_astc_10x5_khr.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034834, VkglTestCase_034834_1, VkglTestCase_034834_2);

#define VkglTestCase_034835_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_034835_2 "ixed.rgba32f_srgb8_alpha8_astc_10x5_khr.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034835, VkglTestCase_034835_1, VkglTestCase_034835_2);

#define VkglTestCase_034836_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_034836_2 "ixed.rgba32f_srgb8_alpha8_astc_10x5_khr.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034836, VkglTestCase_034836_1, VkglTestCase_034836_2);

#define VkglTestCase_034837_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_034837_2 "mixed.rgba32f_srgb8_alpha8_astc_10x5_khr.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034837, VkglTestCase_034837_1, VkglTestCase_034837_2);

#define VkglTestCase_034838_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
#define VkglTestCase_034838_2 "d.rgba32f_srgb8_alpha8_astc_10x5_khr.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034838, VkglTestCase_034838_1, VkglTestCase_034838_2);

#define VkglTestCase_034839_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed"
#define VkglTestCase_034839_2 ".rgba32f_srgb8_alpha8_astc_10x5_khr.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034839, VkglTestCase_034839_1, VkglTestCase_034839_2);

#define VkglTestCase_034840_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed"
#define VkglTestCase_034840_2 ".rgba32f_srgb8_alpha8_astc_10x5_khr.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034840, VkglTestCase_034840_1, VkglTestCase_034840_2);

#define VkglTestCase_034841_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
#define VkglTestCase_034841_2 "d.rgba32f_srgb8_alpha8_astc_10x5_khr.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034841, VkglTestCase_034841_1, VkglTestCase_034841_2);

#define VkglTestCase_034842_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed.rg"
#define VkglTestCase_034842_2 "ba32f_srgb8_alpha8_astc_10x5_khr.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034842, VkglTestCase_034842_1, VkglTestCase_034842_2);
