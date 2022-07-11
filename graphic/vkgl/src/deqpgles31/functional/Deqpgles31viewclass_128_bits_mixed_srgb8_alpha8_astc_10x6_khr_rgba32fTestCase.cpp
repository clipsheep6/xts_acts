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

#define VkglTestCase_034875_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
#define VkglTestCase_034875_2 "xed.srgb8_alpha8_astc_10x6_khr_rgba32f.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034875, VkglTestCase_034875_1, VkglTestCase_034875_2);

#define VkglTestCase_034876_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
#define VkglTestCase_034876_2 "xed.srgb8_alpha8_astc_10x6_khr_rgba32f.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034876, VkglTestCase_034876_1, VkglTestCase_034876_2);

#define VkglTestCase_034877_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_034877_2 "ixed.srgb8_alpha8_astc_10x6_khr_rgba32f.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034877, VkglTestCase_034877_1, VkglTestCase_034877_2);

#define VkglTestCase_034878_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed"
#define VkglTestCase_034878_2 ".srgb8_alpha8_astc_10x6_khr_rgba32f.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034878, VkglTestCase_034878_1, VkglTestCase_034878_2);

#define VkglTestCase_034879_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
#define VkglTestCase_034879_2 "xed.srgb8_alpha8_astc_10x6_khr_rgba32f.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034879, VkglTestCase_034879_1, VkglTestCase_034879_2);

#define VkglTestCase_034880_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
#define VkglTestCase_034880_2 "xed.srgb8_alpha8_astc_10x6_khr_rgba32f.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034880, VkglTestCase_034880_1, VkglTestCase_034880_2);

#define VkglTestCase_034881_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_034881_2 "ixed.srgb8_alpha8_astc_10x6_khr_rgba32f.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034881, VkglTestCase_034881_1, VkglTestCase_034881_2);

#define VkglTestCase_034882_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed"
#define VkglTestCase_034882_2 ".srgb8_alpha8_astc_10x6_khr_rgba32f.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034882, VkglTestCase_034882_1, VkglTestCase_034882_2);

#define VkglTestCase_034883_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_034883_2 "ixed.srgb8_alpha8_astc_10x6_khr_rgba32f.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034883, VkglTestCase_034883_1, VkglTestCase_034883_2);

#define VkglTestCase_034884_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_034884_2 "ixed.srgb8_alpha8_astc_10x6_khr_rgba32f.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034884, VkglTestCase_034884_1, VkglTestCase_034884_2);

#define VkglTestCase_034885_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_034885_2 "mixed.srgb8_alpha8_astc_10x6_khr_rgba32f.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034885, VkglTestCase_034885_1, VkglTestCase_034885_2);

#define VkglTestCase_034886_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
#define VkglTestCase_034886_2 "d.srgb8_alpha8_astc_10x6_khr_rgba32f.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034886, VkglTestCase_034886_1, VkglTestCase_034886_2);

#define VkglTestCase_034887_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed"
#define VkglTestCase_034887_2 ".srgb8_alpha8_astc_10x6_khr_rgba32f.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034887, VkglTestCase_034887_1, VkglTestCase_034887_2);

#define VkglTestCase_034888_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed"
#define VkglTestCase_034888_2 ".srgb8_alpha8_astc_10x6_khr_rgba32f.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034888, VkglTestCase_034888_1, VkglTestCase_034888_2);

#define VkglTestCase_034889_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
#define VkglTestCase_034889_2 "d.srgb8_alpha8_astc_10x6_khr_rgba32f.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034889, VkglTestCase_034889_1, VkglTestCase_034889_2);

#define VkglTestCase_034890_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed.sr"
#define VkglTestCase_034890_2 "gb8_alpha8_astc_10x6_khr_rgba32f.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034890, VkglTestCase_034890_1, VkglTestCase_034890_2);
