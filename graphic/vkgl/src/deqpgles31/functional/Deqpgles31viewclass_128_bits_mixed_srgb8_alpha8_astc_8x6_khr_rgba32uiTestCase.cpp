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
#include "../ActsDeqpgles310036TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_035919_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
#define VkglTestCase_035919_2 "xed.srgb8_alpha8_astc_8x6_khr_rgba32ui.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035919, VkglTestCase_035919_1, VkglTestCase_035919_2);

#define VkglTestCase_035920_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
#define VkglTestCase_035920_2 "xed.srgb8_alpha8_astc_8x6_khr_rgba32ui.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035920, VkglTestCase_035920_1, VkglTestCase_035920_2);

#define VkglTestCase_035921_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_035921_2 "ixed.srgb8_alpha8_astc_8x6_khr_rgba32ui.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035921, VkglTestCase_035921_1, VkglTestCase_035921_2);

#define VkglTestCase_035922_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed"
#define VkglTestCase_035922_2 ".srgb8_alpha8_astc_8x6_khr_rgba32ui.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035922, VkglTestCase_035922_1, VkglTestCase_035922_2);

#define VkglTestCase_035923_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mix"
#define VkglTestCase_035923_2 "ed.srgb8_alpha8_astc_8x6_khr_rgba32ui.texture2d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035923, VkglTestCase_035923_1, VkglTestCase_035923_2);

#define VkglTestCase_035924_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
#define VkglTestCase_035924_2 "xed.srgb8_alpha8_astc_8x6_khr_rgba32ui.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035924, VkglTestCase_035924_1, VkglTestCase_035924_2);

#define VkglTestCase_035925_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
#define VkglTestCase_035925_2 "xed.srgb8_alpha8_astc_8x6_khr_rgba32ui.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035925, VkglTestCase_035925_1, VkglTestCase_035925_2);

#define VkglTestCase_035926_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_035926_2 "ixed.srgb8_alpha8_astc_8x6_khr_rgba32ui.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035926, VkglTestCase_035926_1, VkglTestCase_035926_2);

#define VkglTestCase_035927_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed"
#define VkglTestCase_035927_2 ".srgb8_alpha8_astc_8x6_khr_rgba32ui.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035927, VkglTestCase_035927_1, VkglTestCase_035927_2);

#define VkglTestCase_035928_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mix"
#define VkglTestCase_035928_2 "ed.srgb8_alpha8_astc_8x6_khr_rgba32ui.texture3d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035928, VkglTestCase_035928_1, VkglTestCase_035928_2);

#define VkglTestCase_035929_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_035929_2 "ixed.srgb8_alpha8_astc_8x6_khr_rgba32ui.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035929, VkglTestCase_035929_1, VkglTestCase_035929_2);

#define VkglTestCase_035930_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_035930_2 "ixed.srgb8_alpha8_astc_8x6_khr_rgba32ui.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035930, VkglTestCase_035930_1, VkglTestCase_035930_2);

#define VkglTestCase_035931_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_035931_2 "mixed.srgb8_alpha8_astc_8x6_khr_rgba32ui.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035931, VkglTestCase_035931_1, VkglTestCase_035931_2);

#define VkglTestCase_035932_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
#define VkglTestCase_035932_2 "d.srgb8_alpha8_astc_8x6_khr_rgba32ui.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035932, VkglTestCase_035932_1, VkglTestCase_035932_2);

#define VkglTestCase_035933_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
#define VkglTestCase_035933_2 "xed.srgb8_alpha8_astc_8x6_khr_rgba32ui.cubemap_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035933, VkglTestCase_035933_1, VkglTestCase_035933_2);

#define VkglTestCase_035934_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed"
#define VkglTestCase_035934_2 ".srgb8_alpha8_astc_8x6_khr_rgba32ui.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035934, VkglTestCase_035934_1, VkglTestCase_035934_2);

#define VkglTestCase_035935_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed"
#define VkglTestCase_035935_2 ".srgb8_alpha8_astc_8x6_khr_rgba32ui.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035935, VkglTestCase_035935_1, VkglTestCase_035935_2);

#define VkglTestCase_035936_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
#define VkglTestCase_035936_2 "d.srgb8_alpha8_astc_8x6_khr_rgba32ui.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035936, VkglTestCase_035936_1, VkglTestCase_035936_2);

#define VkglTestCase_035937_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed.sr"
#define VkglTestCase_035937_2 "gb8_alpha8_astc_8x6_khr_rgba32ui.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035937, VkglTestCase_035937_1, VkglTestCase_035937_2);

#define VkglTestCase_035938_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed."
#define VkglTestCase_035938_2 "srgb8_alpha8_astc_8x6_khr_rgba32ui.texture2d_array_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035938, VkglTestCase_035938_1, VkglTestCase_035938_2);
