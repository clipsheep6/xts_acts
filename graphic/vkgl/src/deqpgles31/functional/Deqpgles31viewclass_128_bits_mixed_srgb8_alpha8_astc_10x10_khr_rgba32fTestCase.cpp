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

#define VkglTestCase_034939_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
#define VkglTestCase_034939_2 "xed.srgb8_alpha8_astc_10x10_khr_rgba32f.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034939, VkglTestCase_034939_1, VkglTestCase_034939_2);

#define VkglTestCase_034940_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
#define VkglTestCase_034940_2 "xed.srgb8_alpha8_astc_10x10_khr_rgba32f.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034940, VkglTestCase_034940_1, VkglTestCase_034940_2);

#define VkglTestCase_034941_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_034941_2 "ixed.srgb8_alpha8_astc_10x10_khr_rgba32f.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034941, VkglTestCase_034941_1, VkglTestCase_034941_2);

#define VkglTestCase_034942_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed"
#define VkglTestCase_034942_2 ".srgb8_alpha8_astc_10x10_khr_rgba32f.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034942, VkglTestCase_034942_1, VkglTestCase_034942_2);

#define VkglTestCase_034943_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
#define VkglTestCase_034943_2 "xed.srgb8_alpha8_astc_10x10_khr_rgba32f.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034943, VkglTestCase_034943_1, VkglTestCase_034943_2);

#define VkglTestCase_034944_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
#define VkglTestCase_034944_2 "xed.srgb8_alpha8_astc_10x10_khr_rgba32f.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034944, VkglTestCase_034944_1, VkglTestCase_034944_2);

#define VkglTestCase_034945_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_034945_2 "ixed.srgb8_alpha8_astc_10x10_khr_rgba32f.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034945, VkglTestCase_034945_1, VkglTestCase_034945_2);

#define VkglTestCase_034946_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed"
#define VkglTestCase_034946_2 ".srgb8_alpha8_astc_10x10_khr_rgba32f.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034946, VkglTestCase_034946_1, VkglTestCase_034946_2);

#define VkglTestCase_034947_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_034947_2 "ixed.srgb8_alpha8_astc_10x10_khr_rgba32f.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034947, VkglTestCase_034947_1, VkglTestCase_034947_2);

#define VkglTestCase_034948_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_034948_2 "ixed.srgb8_alpha8_astc_10x10_khr_rgba32f.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034948, VkglTestCase_034948_1, VkglTestCase_034948_2);

#define VkglTestCase_034949_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_034949_2 "mixed.srgb8_alpha8_astc_10x10_khr_rgba32f.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034949, VkglTestCase_034949_1, VkglTestCase_034949_2);

#define VkglTestCase_034950_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
#define VkglTestCase_034950_2 "d.srgb8_alpha8_astc_10x10_khr_rgba32f.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034950, VkglTestCase_034950_1, VkglTestCase_034950_2);

#define VkglTestCase_034951_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed"
#define VkglTestCase_034951_2 ".srgb8_alpha8_astc_10x10_khr_rgba32f.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034951, VkglTestCase_034951_1, VkglTestCase_034951_2);

#define VkglTestCase_034952_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed"
#define VkglTestCase_034952_2 ".srgb8_alpha8_astc_10x10_khr_rgba32f.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034952, VkglTestCase_034952_1, VkglTestCase_034952_2);

#define VkglTestCase_034953_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
#define VkglTestCase_034953_2 "d.srgb8_alpha8_astc_10x10_khr_rgba32f.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034953, VkglTestCase_034953_1, VkglTestCase_034953_2);

#define VkglTestCase_034954_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed.sr"
#define VkglTestCase_034954_2 "gb8_alpha8_astc_10x10_khr_rgba32f.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034954, VkglTestCase_034954_1, VkglTestCase_034954_2);
