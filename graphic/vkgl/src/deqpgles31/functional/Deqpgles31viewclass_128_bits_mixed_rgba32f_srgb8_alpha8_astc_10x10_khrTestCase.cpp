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

#define VkglTestCase_034923_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
#define VkglTestCase_034923_2 "xed.rgba32f_srgb8_alpha8_astc_10x10_khr.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034923, VkglTestCase_034923_1, VkglTestCase_034923_2);

#define VkglTestCase_034924_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
#define VkglTestCase_034924_2 "xed.rgba32f_srgb8_alpha8_astc_10x10_khr.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034924, VkglTestCase_034924_1, VkglTestCase_034924_2);

#define VkglTestCase_034925_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_034925_2 "ixed.rgba32f_srgb8_alpha8_astc_10x10_khr.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034925, VkglTestCase_034925_1, VkglTestCase_034925_2);

#define VkglTestCase_034926_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed"
#define VkglTestCase_034926_2 ".rgba32f_srgb8_alpha8_astc_10x10_khr.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034926, VkglTestCase_034926_1, VkglTestCase_034926_2);

#define VkglTestCase_034927_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
#define VkglTestCase_034927_2 "xed.rgba32f_srgb8_alpha8_astc_10x10_khr.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034927, VkglTestCase_034927_1, VkglTestCase_034927_2);

#define VkglTestCase_034928_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
#define VkglTestCase_034928_2 "xed.rgba32f_srgb8_alpha8_astc_10x10_khr.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034928, VkglTestCase_034928_1, VkglTestCase_034928_2);

#define VkglTestCase_034929_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_034929_2 "ixed.rgba32f_srgb8_alpha8_astc_10x10_khr.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034929, VkglTestCase_034929_1, VkglTestCase_034929_2);

#define VkglTestCase_034930_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed"
#define VkglTestCase_034930_2 ".rgba32f_srgb8_alpha8_astc_10x10_khr.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034930, VkglTestCase_034930_1, VkglTestCase_034930_2);

#define VkglTestCase_034931_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_034931_2 "ixed.rgba32f_srgb8_alpha8_astc_10x10_khr.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034931, VkglTestCase_034931_1, VkglTestCase_034931_2);

#define VkglTestCase_034932_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_034932_2 "ixed.rgba32f_srgb8_alpha8_astc_10x10_khr.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034932, VkglTestCase_034932_1, VkglTestCase_034932_2);

#define VkglTestCase_034933_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_034933_2 "mixed.rgba32f_srgb8_alpha8_astc_10x10_khr.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034933, VkglTestCase_034933_1, VkglTestCase_034933_2);

#define VkglTestCase_034934_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
#define VkglTestCase_034934_2 "d.rgba32f_srgb8_alpha8_astc_10x10_khr.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034934, VkglTestCase_034934_1, VkglTestCase_034934_2);

#define VkglTestCase_034935_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed"
#define VkglTestCase_034935_2 ".rgba32f_srgb8_alpha8_astc_10x10_khr.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034935, VkglTestCase_034935_1, VkglTestCase_034935_2);

#define VkglTestCase_034936_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed"
#define VkglTestCase_034936_2 ".rgba32f_srgb8_alpha8_astc_10x10_khr.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034936, VkglTestCase_034936_1, VkglTestCase_034936_2);

#define VkglTestCase_034937_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
#define VkglTestCase_034937_2 "d.rgba32f_srgb8_alpha8_astc_10x10_khr.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034937, VkglTestCase_034937_1, VkglTestCase_034937_2);

#define VkglTestCase_034938_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed.rg"
#define VkglTestCase_034938_2 "ba32f_srgb8_alpha8_astc_10x10_khr.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034938, VkglTestCase_034938_1, VkglTestCase_034938_2);
