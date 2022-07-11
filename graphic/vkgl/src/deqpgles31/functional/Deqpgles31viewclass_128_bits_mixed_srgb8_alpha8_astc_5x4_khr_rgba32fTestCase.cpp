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

#define VkglTestCase_034619_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_034619_2 "ixed.srgb8_alpha8_astc_5x4_khr_rgba32f.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034619, VkglTestCase_034619_1, VkglTestCase_034619_2);

#define VkglTestCase_034620_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_034620_2 "ixed.srgb8_alpha8_astc_5x4_khr_rgba32f.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034620, VkglTestCase_034620_1, VkglTestCase_034620_2);

#define VkglTestCase_034621_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_034621_2 "mixed.srgb8_alpha8_astc_5x4_khr_rgba32f.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034621, VkglTestCase_034621_1, VkglTestCase_034621_2);

#define VkglTestCase_034622_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
#define VkglTestCase_034622_2 "d.srgb8_alpha8_astc_5x4_khr_rgba32f.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034622, VkglTestCase_034622_1, VkglTestCase_034622_2);

#define VkglTestCase_034623_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_034623_2 "ixed.srgb8_alpha8_astc_5x4_khr_rgba32f.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034623, VkglTestCase_034623_1, VkglTestCase_034623_2);

#define VkglTestCase_034624_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_034624_2 "ixed.srgb8_alpha8_astc_5x4_khr_rgba32f.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034624, VkglTestCase_034624_1, VkglTestCase_034624_2);

#define VkglTestCase_034625_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_034625_2 "mixed.srgb8_alpha8_astc_5x4_khr_rgba32f.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034625, VkglTestCase_034625_1, VkglTestCase_034625_2);

#define VkglTestCase_034626_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
#define VkglTestCase_034626_2 "d.srgb8_alpha8_astc_5x4_khr_rgba32f.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034626, VkglTestCase_034626_1, VkglTestCase_034626_2);

#define VkglTestCase_034627_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_034627_2 "mixed.srgb8_alpha8_astc_5x4_khr_rgba32f.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034627, VkglTestCase_034627_1, VkglTestCase_034627_2);

#define VkglTestCase_034628_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_034628_2 "mixed.srgb8_alpha8_astc_5x4_khr_rgba32f.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034628, VkglTestCase_034628_1, VkglTestCase_034628_2);

#define VkglTestCase_034629_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits"
#define VkglTestCase_034629_2 "_mixed.srgb8_alpha8_astc_5x4_khr_rgba32f.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034629, VkglTestCase_034629_1, VkglTestCase_034629_2);

#define VkglTestCase_034630_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mix"
#define VkglTestCase_034630_2 "ed.srgb8_alpha8_astc_5x4_khr_rgba32f.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034630, VkglTestCase_034630_1, VkglTestCase_034630_2);

#define VkglTestCase_034631_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
#define VkglTestCase_034631_2 "d.srgb8_alpha8_astc_5x4_khr_rgba32f.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034631, VkglTestCase_034631_1, VkglTestCase_034631_2);

#define VkglTestCase_034632_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
#define VkglTestCase_034632_2 "d.srgb8_alpha8_astc_5x4_khr_rgba32f.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034632, VkglTestCase_034632_1, VkglTestCase_034632_2);

#define VkglTestCase_034633_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mix"
#define VkglTestCase_034633_2 "ed.srgb8_alpha8_astc_5x4_khr_rgba32f.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034633, VkglTestCase_034633_1, VkglTestCase_034633_2);

#define VkglTestCase_034634_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed.s"
#define VkglTestCase_034634_2 "rgb8_alpha8_astc_5x4_khr_rgba32f.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034634, VkglTestCase_034634_1, VkglTestCase_034634_2);
