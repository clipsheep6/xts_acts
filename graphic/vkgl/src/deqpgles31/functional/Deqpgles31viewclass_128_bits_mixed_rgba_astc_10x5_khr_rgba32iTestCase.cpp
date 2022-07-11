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
#include "../ActsDeqpgles310037TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_036639_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bit"
#define VkglTestCase_036639_2 "s_mixed.rgba_astc_10x5_khr_rgba32i.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036639, VkglTestCase_036639_1, VkglTestCase_036639_2);

#define VkglTestCase_036640_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bit"
#define VkglTestCase_036640_2 "s_mixed.rgba_astc_10x5_khr_rgba32i.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036640, VkglTestCase_036640_1, VkglTestCase_036640_2);

#define VkglTestCase_036641_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_036641_2 "ts_mixed.rgba_astc_10x5_khr_rgba32i.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036641, VkglTestCase_036641_1, VkglTestCase_036641_2);

#define VkglTestCase_036642_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_036642_2 "ixed.rgba_astc_10x5_khr_rgba32i.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036642, VkglTestCase_036642_1, VkglTestCase_036642_2);

#define VkglTestCase_036643_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits"
#define VkglTestCase_036643_2 "_mixed.rgba_astc_10x5_khr_rgba32i.texture2d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036643, VkglTestCase_036643_1, VkglTestCase_036643_2);

#define VkglTestCase_036644_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bit"
#define VkglTestCase_036644_2 "s_mixed.rgba_astc_10x5_khr_rgba32i.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036644, VkglTestCase_036644_1, VkglTestCase_036644_2);

#define VkglTestCase_036645_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bit"
#define VkglTestCase_036645_2 "s_mixed.rgba_astc_10x5_khr_rgba32i.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036645, VkglTestCase_036645_1, VkglTestCase_036645_2);

#define VkglTestCase_036646_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_036646_2 "ts_mixed.rgba_astc_10x5_khr_rgba32i.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036646, VkglTestCase_036646_1, VkglTestCase_036646_2);

#define VkglTestCase_036647_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_036647_2 "ixed.rgba_astc_10x5_khr_rgba32i.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036647, VkglTestCase_036647_1, VkglTestCase_036647_2);

#define VkglTestCase_036648_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits"
#define VkglTestCase_036648_2 "_mixed.rgba_astc_10x5_khr_rgba32i.texture3d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036648, VkglTestCase_036648_1, VkglTestCase_036648_2);

#define VkglTestCase_036649_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_036649_2 "ts_mixed.rgba_astc_10x5_khr_rgba32i.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036649, VkglTestCase_036649_1, VkglTestCase_036649_2);

#define VkglTestCase_036650_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_036650_2 "ts_mixed.rgba_astc_10x5_khr_rgba32i.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036650, VkglTestCase_036650_1, VkglTestCase_036650_2);

#define VkglTestCase_036651_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_b"
#define VkglTestCase_036651_2 "its_mixed.rgba_astc_10x5_khr_rgba32i.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036651, VkglTestCase_036651_1, VkglTestCase_036651_2);

#define VkglTestCase_036652_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_036652_2 "mixed.rgba_astc_10x5_khr_rgba32i.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036652, VkglTestCase_036652_1, VkglTestCase_036652_2);

#define VkglTestCase_036653_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bit"
#define VkglTestCase_036653_2 "s_mixed.rgba_astc_10x5_khr_rgba32i.cubemap_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036653, VkglTestCase_036653_1, VkglTestCase_036653_2);

#define VkglTestCase_036654_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_036654_2 "ixed.rgba_astc_10x5_khr_rgba32i.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036654, VkglTestCase_036654_1, VkglTestCase_036654_2);

#define VkglTestCase_036655_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_036655_2 "ixed.rgba_astc_10x5_khr_rgba32i.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036655, VkglTestCase_036655_1, VkglTestCase_036655_2);

#define VkglTestCase_036656_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_036656_2 "mixed.rgba_astc_10x5_khr_rgba32i.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036656, VkglTestCase_036656_1, VkglTestCase_036656_2);

#define VkglTestCase_036657_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
#define VkglTestCase_036657_2 "d.rgba_astc_10x5_khr_rgba32i.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036657, VkglTestCase_036657_1, VkglTestCase_036657_2);

#define VkglTestCase_036658_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
#define VkglTestCase_036658_2 "xed.rgba_astc_10x5_khr_rgba32i.texture2d_array_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036658, VkglTestCase_036658_1, VkglTestCase_036658_2);
