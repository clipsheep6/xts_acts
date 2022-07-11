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
#include "../ActsDeqpgles310038TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_037359_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
#define VkglTestCase_037359_2 "xed.srgb8_alpha8_astc_12x10_khr_rgba32i.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037359, VkglTestCase_037359_1, VkglTestCase_037359_2);

#define VkglTestCase_037360_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
#define VkglTestCase_037360_2 "xed.srgb8_alpha8_astc_12x10_khr_rgba32i.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037360, VkglTestCase_037360_1, VkglTestCase_037360_2);

#define VkglTestCase_037361_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_037361_2 "ixed.srgb8_alpha8_astc_12x10_khr_rgba32i.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037361, VkglTestCase_037361_1, VkglTestCase_037361_2);

#define VkglTestCase_037362_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed"
#define VkglTestCase_037362_2 ".srgb8_alpha8_astc_12x10_khr_rgba32i.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037362, VkglTestCase_037362_1, VkglTestCase_037362_2);

#define VkglTestCase_037363_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
#define VkglTestCase_037363_2 "d.srgb8_alpha8_astc_12x10_khr_rgba32i.texture2d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037363, VkglTestCase_037363_1, VkglTestCase_037363_2);

#define VkglTestCase_037364_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
#define VkglTestCase_037364_2 "xed.srgb8_alpha8_astc_12x10_khr_rgba32i.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037364, VkglTestCase_037364_1, VkglTestCase_037364_2);

#define VkglTestCase_037365_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
#define VkglTestCase_037365_2 "xed.srgb8_alpha8_astc_12x10_khr_rgba32i.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037365, VkglTestCase_037365_1, VkglTestCase_037365_2);

#define VkglTestCase_037366_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_037366_2 "ixed.srgb8_alpha8_astc_12x10_khr_rgba32i.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037366, VkglTestCase_037366_1, VkglTestCase_037366_2);

#define VkglTestCase_037367_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed"
#define VkglTestCase_037367_2 ".srgb8_alpha8_astc_12x10_khr_rgba32i.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037367, VkglTestCase_037367_1, VkglTestCase_037367_2);

#define VkglTestCase_037368_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
#define VkglTestCase_037368_2 "d.srgb8_alpha8_astc_12x10_khr_rgba32i.texture3d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037368, VkglTestCase_037368_1, VkglTestCase_037368_2);

#define VkglTestCase_037369_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_037369_2 "ixed.srgb8_alpha8_astc_12x10_khr_rgba32i.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037369, VkglTestCase_037369_1, VkglTestCase_037369_2);

#define VkglTestCase_037370_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_037370_2 "ixed.srgb8_alpha8_astc_12x10_khr_rgba32i.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037370, VkglTestCase_037370_1, VkglTestCase_037370_2);

#define VkglTestCase_037371_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_037371_2 "mixed.srgb8_alpha8_astc_12x10_khr_rgba32i.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037371, VkglTestCase_037371_1, VkglTestCase_037371_2);

#define VkglTestCase_037372_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
#define VkglTestCase_037372_2 "d.srgb8_alpha8_astc_12x10_khr_rgba32i.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037372, VkglTestCase_037372_1, VkglTestCase_037372_2);

#define VkglTestCase_037373_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mix"
#define VkglTestCase_037373_2 "ed.srgb8_alpha8_astc_12x10_khr_rgba32i.cubemap_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037373, VkglTestCase_037373_1, VkglTestCase_037373_2);

#define VkglTestCase_037374_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed"
#define VkglTestCase_037374_2 ".srgb8_alpha8_astc_12x10_khr_rgba32i.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037374, VkglTestCase_037374_1, VkglTestCase_037374_2);

#define VkglTestCase_037375_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed"
#define VkglTestCase_037375_2 ".srgb8_alpha8_astc_12x10_khr_rgba32i.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037375, VkglTestCase_037375_1, VkglTestCase_037375_2);

#define VkglTestCase_037376_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
#define VkglTestCase_037376_2 "d.srgb8_alpha8_astc_12x10_khr_rgba32i.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037376, VkglTestCase_037376_1, VkglTestCase_037376_2);

#define VkglTestCase_037377_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed.sr"
#define VkglTestCase_037377_2 "gb8_alpha8_astc_12x10_khr_rgba32i.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037377, VkglTestCase_037377_1, VkglTestCase_037377_2);

#define VkglTestCase_037378_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed.s"
#define VkglTestCase_037378_2 "rgb8_alpha8_astc_12x10_khr_rgba32i.texture2d_array_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037378, VkglTestCase_037378_1, VkglTestCase_037378_2);
