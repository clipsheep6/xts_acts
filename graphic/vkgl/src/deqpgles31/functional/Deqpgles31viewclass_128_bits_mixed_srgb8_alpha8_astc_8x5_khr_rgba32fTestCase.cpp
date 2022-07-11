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

#define VkglTestCase_034747_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_034747_2 "ixed.srgb8_alpha8_astc_8x5_khr_rgba32f.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034747, VkglTestCase_034747_1, VkglTestCase_034747_2);

#define VkglTestCase_034748_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_034748_2 "ixed.srgb8_alpha8_astc_8x5_khr_rgba32f.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034748, VkglTestCase_034748_1, VkglTestCase_034748_2);

#define VkglTestCase_034749_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_034749_2 "mixed.srgb8_alpha8_astc_8x5_khr_rgba32f.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034749, VkglTestCase_034749_1, VkglTestCase_034749_2);

#define VkglTestCase_034750_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
#define VkglTestCase_034750_2 "d.srgb8_alpha8_astc_8x5_khr_rgba32f.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034750, VkglTestCase_034750_1, VkglTestCase_034750_2);

#define VkglTestCase_034751_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_034751_2 "ixed.srgb8_alpha8_astc_8x5_khr_rgba32f.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034751, VkglTestCase_034751_1, VkglTestCase_034751_2);

#define VkglTestCase_034752_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_034752_2 "ixed.srgb8_alpha8_astc_8x5_khr_rgba32f.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034752, VkglTestCase_034752_1, VkglTestCase_034752_2);

#define VkglTestCase_034753_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_034753_2 "mixed.srgb8_alpha8_astc_8x5_khr_rgba32f.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034753, VkglTestCase_034753_1, VkglTestCase_034753_2);

#define VkglTestCase_034754_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
#define VkglTestCase_034754_2 "d.srgb8_alpha8_astc_8x5_khr_rgba32f.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034754, VkglTestCase_034754_1, VkglTestCase_034754_2);

#define VkglTestCase_034755_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_034755_2 "mixed.srgb8_alpha8_astc_8x5_khr_rgba32f.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034755, VkglTestCase_034755_1, VkglTestCase_034755_2);

#define VkglTestCase_034756_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_034756_2 "mixed.srgb8_alpha8_astc_8x5_khr_rgba32f.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034756, VkglTestCase_034756_1, VkglTestCase_034756_2);

#define VkglTestCase_034757_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits"
#define VkglTestCase_034757_2 "_mixed.srgb8_alpha8_astc_8x5_khr_rgba32f.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034757, VkglTestCase_034757_1, VkglTestCase_034757_2);

#define VkglTestCase_034758_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mix"
#define VkglTestCase_034758_2 "ed.srgb8_alpha8_astc_8x5_khr_rgba32f.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034758, VkglTestCase_034758_1, VkglTestCase_034758_2);

#define VkglTestCase_034759_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
#define VkglTestCase_034759_2 "d.srgb8_alpha8_astc_8x5_khr_rgba32f.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034759, VkglTestCase_034759_1, VkglTestCase_034759_2);

#define VkglTestCase_034760_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
#define VkglTestCase_034760_2 "d.srgb8_alpha8_astc_8x5_khr_rgba32f.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034760, VkglTestCase_034760_1, VkglTestCase_034760_2);

#define VkglTestCase_034761_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mix"
#define VkglTestCase_034761_2 "ed.srgb8_alpha8_astc_8x5_khr_rgba32f.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034761, VkglTestCase_034761_1, VkglTestCase_034761_2);

#define VkglTestCase_034762_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed.s"
#define VkglTestCase_034762_2 "rgb8_alpha8_astc_8x5_khr_rgba32f.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034762, VkglTestCase_034762_1, VkglTestCase_034762_2);
