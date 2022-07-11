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

#define VkglTestCase_034715_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_034715_2 "ixed.srgb8_alpha8_astc_6x6_khr_rgba32f.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034715, VkglTestCase_034715_1, VkglTestCase_034715_2);

#define VkglTestCase_034716_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_034716_2 "ixed.srgb8_alpha8_astc_6x6_khr_rgba32f.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034716, VkglTestCase_034716_1, VkglTestCase_034716_2);

#define VkglTestCase_034717_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_034717_2 "mixed.srgb8_alpha8_astc_6x6_khr_rgba32f.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034717, VkglTestCase_034717_1, VkglTestCase_034717_2);

#define VkglTestCase_034718_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
#define VkglTestCase_034718_2 "d.srgb8_alpha8_astc_6x6_khr_rgba32f.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034718, VkglTestCase_034718_1, VkglTestCase_034718_2);

#define VkglTestCase_034719_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_034719_2 "ixed.srgb8_alpha8_astc_6x6_khr_rgba32f.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034719, VkglTestCase_034719_1, VkglTestCase_034719_2);

#define VkglTestCase_034720_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_034720_2 "ixed.srgb8_alpha8_astc_6x6_khr_rgba32f.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034720, VkglTestCase_034720_1, VkglTestCase_034720_2);

#define VkglTestCase_034721_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_034721_2 "mixed.srgb8_alpha8_astc_6x6_khr_rgba32f.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034721, VkglTestCase_034721_1, VkglTestCase_034721_2);

#define VkglTestCase_034722_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
#define VkglTestCase_034722_2 "d.srgb8_alpha8_astc_6x6_khr_rgba32f.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034722, VkglTestCase_034722_1, VkglTestCase_034722_2);

#define VkglTestCase_034723_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_034723_2 "mixed.srgb8_alpha8_astc_6x6_khr_rgba32f.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034723, VkglTestCase_034723_1, VkglTestCase_034723_2);

#define VkglTestCase_034724_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_034724_2 "mixed.srgb8_alpha8_astc_6x6_khr_rgba32f.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034724, VkglTestCase_034724_1, VkglTestCase_034724_2);

#define VkglTestCase_034725_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits"
#define VkglTestCase_034725_2 "_mixed.srgb8_alpha8_astc_6x6_khr_rgba32f.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034725, VkglTestCase_034725_1, VkglTestCase_034725_2);

#define VkglTestCase_034726_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mix"
#define VkglTestCase_034726_2 "ed.srgb8_alpha8_astc_6x6_khr_rgba32f.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034726, VkglTestCase_034726_1, VkglTestCase_034726_2);

#define VkglTestCase_034727_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
#define VkglTestCase_034727_2 "d.srgb8_alpha8_astc_6x6_khr_rgba32f.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034727, VkglTestCase_034727_1, VkglTestCase_034727_2);

#define VkglTestCase_034728_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
#define VkglTestCase_034728_2 "d.srgb8_alpha8_astc_6x6_khr_rgba32f.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034728, VkglTestCase_034728_1, VkglTestCase_034728_2);

#define VkglTestCase_034729_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mix"
#define VkglTestCase_034729_2 "ed.srgb8_alpha8_astc_6x6_khr_rgba32f.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034729, VkglTestCase_034729_1, VkglTestCase_034729_2);

#define VkglTestCase_034730_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed.s"
#define VkglTestCase_034730_2 "rgb8_alpha8_astc_6x6_khr_rgba32f.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034730, VkglTestCase_034730_1, VkglTestCase_034730_2);
