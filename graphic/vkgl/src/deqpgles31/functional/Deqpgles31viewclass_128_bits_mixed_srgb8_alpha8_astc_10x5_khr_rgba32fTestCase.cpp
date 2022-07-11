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

#define VkglTestCase_034843_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
#define VkglTestCase_034843_2 "xed.srgb8_alpha8_astc_10x5_khr_rgba32f.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034843, VkglTestCase_034843_1, VkglTestCase_034843_2);

#define VkglTestCase_034844_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
#define VkglTestCase_034844_2 "xed.srgb8_alpha8_astc_10x5_khr_rgba32f.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034844, VkglTestCase_034844_1, VkglTestCase_034844_2);

#define VkglTestCase_034845_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_034845_2 "ixed.srgb8_alpha8_astc_10x5_khr_rgba32f.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034845, VkglTestCase_034845_1, VkglTestCase_034845_2);

#define VkglTestCase_034846_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed"
#define VkglTestCase_034846_2 ".srgb8_alpha8_astc_10x5_khr_rgba32f.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034846, VkglTestCase_034846_1, VkglTestCase_034846_2);

#define VkglTestCase_034847_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
#define VkglTestCase_034847_2 "xed.srgb8_alpha8_astc_10x5_khr_rgba32f.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034847, VkglTestCase_034847_1, VkglTestCase_034847_2);

#define VkglTestCase_034848_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
#define VkglTestCase_034848_2 "xed.srgb8_alpha8_astc_10x5_khr_rgba32f.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034848, VkglTestCase_034848_1, VkglTestCase_034848_2);

#define VkglTestCase_034849_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_034849_2 "ixed.srgb8_alpha8_astc_10x5_khr_rgba32f.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034849, VkglTestCase_034849_1, VkglTestCase_034849_2);

#define VkglTestCase_034850_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed"
#define VkglTestCase_034850_2 ".srgb8_alpha8_astc_10x5_khr_rgba32f.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034850, VkglTestCase_034850_1, VkglTestCase_034850_2);

#define VkglTestCase_034851_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_034851_2 "ixed.srgb8_alpha8_astc_10x5_khr_rgba32f.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034851, VkglTestCase_034851_1, VkglTestCase_034851_2);

#define VkglTestCase_034852_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_034852_2 "ixed.srgb8_alpha8_astc_10x5_khr_rgba32f.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034852, VkglTestCase_034852_1, VkglTestCase_034852_2);

#define VkglTestCase_034853_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_034853_2 "mixed.srgb8_alpha8_astc_10x5_khr_rgba32f.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034853, VkglTestCase_034853_1, VkglTestCase_034853_2);

#define VkglTestCase_034854_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
#define VkglTestCase_034854_2 "d.srgb8_alpha8_astc_10x5_khr_rgba32f.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034854, VkglTestCase_034854_1, VkglTestCase_034854_2);

#define VkglTestCase_034855_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed"
#define VkglTestCase_034855_2 ".srgb8_alpha8_astc_10x5_khr_rgba32f.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034855, VkglTestCase_034855_1, VkglTestCase_034855_2);

#define VkglTestCase_034856_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed"
#define VkglTestCase_034856_2 ".srgb8_alpha8_astc_10x5_khr_rgba32f.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034856, VkglTestCase_034856_1, VkglTestCase_034856_2);

#define VkglTestCase_034857_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
#define VkglTestCase_034857_2 "d.srgb8_alpha8_astc_10x5_khr_rgba32f.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034857, VkglTestCase_034857_1, VkglTestCase_034857_2);

#define VkglTestCase_034858_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed.sr"
#define VkglTestCase_034858_2 "gb8_alpha8_astc_10x5_khr_rgba32f.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034858, VkglTestCase_034858_1, VkglTestCase_034858_2);
