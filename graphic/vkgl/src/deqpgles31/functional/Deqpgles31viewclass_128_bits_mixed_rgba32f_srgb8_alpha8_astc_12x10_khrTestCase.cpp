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

#define VkglTestCase_034955_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
#define VkglTestCase_034955_2 "xed.rgba32f_srgb8_alpha8_astc_12x10_khr.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034955, VkglTestCase_034955_1, VkglTestCase_034955_2);

#define VkglTestCase_034956_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
#define VkglTestCase_034956_2 "xed.rgba32f_srgb8_alpha8_astc_12x10_khr.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034956, VkglTestCase_034956_1, VkglTestCase_034956_2);

#define VkglTestCase_034957_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_034957_2 "ixed.rgba32f_srgb8_alpha8_astc_12x10_khr.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034957, VkglTestCase_034957_1, VkglTestCase_034957_2);

#define VkglTestCase_034958_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed"
#define VkglTestCase_034958_2 ".rgba32f_srgb8_alpha8_astc_12x10_khr.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034958, VkglTestCase_034958_1, VkglTestCase_034958_2);

#define VkglTestCase_034959_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
#define VkglTestCase_034959_2 "xed.rgba32f_srgb8_alpha8_astc_12x10_khr.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034959, VkglTestCase_034959_1, VkglTestCase_034959_2);

#define VkglTestCase_034960_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
#define VkglTestCase_034960_2 "xed.rgba32f_srgb8_alpha8_astc_12x10_khr.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034960, VkglTestCase_034960_1, VkglTestCase_034960_2);

#define VkglTestCase_034961_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_034961_2 "ixed.rgba32f_srgb8_alpha8_astc_12x10_khr.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034961, VkglTestCase_034961_1, VkglTestCase_034961_2);

#define VkglTestCase_034962_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed"
#define VkglTestCase_034962_2 ".rgba32f_srgb8_alpha8_astc_12x10_khr.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034962, VkglTestCase_034962_1, VkglTestCase_034962_2);

#define VkglTestCase_034963_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_034963_2 "ixed.rgba32f_srgb8_alpha8_astc_12x10_khr.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034963, VkglTestCase_034963_1, VkglTestCase_034963_2);

#define VkglTestCase_034964_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_034964_2 "ixed.rgba32f_srgb8_alpha8_astc_12x10_khr.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034964, VkglTestCase_034964_1, VkglTestCase_034964_2);

#define VkglTestCase_034965_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_034965_2 "mixed.rgba32f_srgb8_alpha8_astc_12x10_khr.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034965, VkglTestCase_034965_1, VkglTestCase_034965_2);

#define VkglTestCase_034966_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
#define VkglTestCase_034966_2 "d.rgba32f_srgb8_alpha8_astc_12x10_khr.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034966, VkglTestCase_034966_1, VkglTestCase_034966_2);

#define VkglTestCase_034967_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed"
#define VkglTestCase_034967_2 ".rgba32f_srgb8_alpha8_astc_12x10_khr.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034967, VkglTestCase_034967_1, VkglTestCase_034967_2);

#define VkglTestCase_034968_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed"
#define VkglTestCase_034968_2 ".rgba32f_srgb8_alpha8_astc_12x10_khr.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034968, VkglTestCase_034968_1, VkglTestCase_034968_2);

#define VkglTestCase_034969_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
#define VkglTestCase_034969_2 "d.rgba32f_srgb8_alpha8_astc_12x10_khr.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034969, VkglTestCase_034969_1, VkglTestCase_034969_2);

#define VkglTestCase_034970_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed.rg"
#define VkglTestCase_034970_2 "ba32f_srgb8_alpha8_astc_12x10_khr.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034970, VkglTestCase_034970_1, VkglTestCase_034970_2);
