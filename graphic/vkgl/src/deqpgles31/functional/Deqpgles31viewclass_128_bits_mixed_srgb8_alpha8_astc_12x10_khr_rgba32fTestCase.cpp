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

#define VkglTestCase_034971_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
#define VkglTestCase_034971_2 "xed.srgb8_alpha8_astc_12x10_khr_rgba32f.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034971, VkglTestCase_034971_1, VkglTestCase_034971_2);

#define VkglTestCase_034972_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
#define VkglTestCase_034972_2 "xed.srgb8_alpha8_astc_12x10_khr_rgba32f.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034972, VkglTestCase_034972_1, VkglTestCase_034972_2);

#define VkglTestCase_034973_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_034973_2 "ixed.srgb8_alpha8_astc_12x10_khr_rgba32f.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034973, VkglTestCase_034973_1, VkglTestCase_034973_2);

#define VkglTestCase_034974_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed"
#define VkglTestCase_034974_2 ".srgb8_alpha8_astc_12x10_khr_rgba32f.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034974, VkglTestCase_034974_1, VkglTestCase_034974_2);

#define VkglTestCase_034975_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
#define VkglTestCase_034975_2 "xed.srgb8_alpha8_astc_12x10_khr_rgba32f.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034975, VkglTestCase_034975_1, VkglTestCase_034975_2);

#define VkglTestCase_034976_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
#define VkglTestCase_034976_2 "xed.srgb8_alpha8_astc_12x10_khr_rgba32f.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034976, VkglTestCase_034976_1, VkglTestCase_034976_2);

#define VkglTestCase_034977_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_034977_2 "ixed.srgb8_alpha8_astc_12x10_khr_rgba32f.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034977, VkglTestCase_034977_1, VkglTestCase_034977_2);

#define VkglTestCase_034978_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed"
#define VkglTestCase_034978_2 ".srgb8_alpha8_astc_12x10_khr_rgba32f.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034978, VkglTestCase_034978_1, VkglTestCase_034978_2);

#define VkglTestCase_034979_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_034979_2 "ixed.srgb8_alpha8_astc_12x10_khr_rgba32f.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034979, VkglTestCase_034979_1, VkglTestCase_034979_2);

#define VkglTestCase_034980_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_034980_2 "ixed.srgb8_alpha8_astc_12x10_khr_rgba32f.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034980, VkglTestCase_034980_1, VkglTestCase_034980_2);

#define VkglTestCase_034981_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_034981_2 "mixed.srgb8_alpha8_astc_12x10_khr_rgba32f.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034981, VkglTestCase_034981_1, VkglTestCase_034981_2);

#define VkglTestCase_034982_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
#define VkglTestCase_034982_2 "d.srgb8_alpha8_astc_12x10_khr_rgba32f.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034982, VkglTestCase_034982_1, VkglTestCase_034982_2);

#define VkglTestCase_034983_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed"
#define VkglTestCase_034983_2 ".srgb8_alpha8_astc_12x10_khr_rgba32f.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034983, VkglTestCase_034983_1, VkglTestCase_034983_2);

#define VkglTestCase_034984_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed"
#define VkglTestCase_034984_2 ".srgb8_alpha8_astc_12x10_khr_rgba32f.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034984, VkglTestCase_034984_1, VkglTestCase_034984_2);

#define VkglTestCase_034985_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
#define VkglTestCase_034985_2 "d.srgb8_alpha8_astc_12x10_khr_rgba32f.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034985, VkglTestCase_034985_1, VkglTestCase_034985_2);

#define VkglTestCase_034986_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed.sr"
#define VkglTestCase_034986_2 "gb8_alpha8_astc_12x10_khr_rgba32f.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034986, VkglTestCase_034986_1, VkglTestCase_034986_2);
