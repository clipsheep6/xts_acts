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

#define VkglTestCase_035839_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
#define VkglTestCase_035839_2 "xed.srgb8_alpha8_astc_6x6_khr_rgba32ui.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035839, VkglTestCase_035839_1, VkglTestCase_035839_2);

#define VkglTestCase_035840_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
#define VkglTestCase_035840_2 "xed.srgb8_alpha8_astc_6x6_khr_rgba32ui.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035840, VkglTestCase_035840_1, VkglTestCase_035840_2);

#define VkglTestCase_035841_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_035841_2 "ixed.srgb8_alpha8_astc_6x6_khr_rgba32ui.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035841, VkglTestCase_035841_1, VkglTestCase_035841_2);

#define VkglTestCase_035842_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed"
#define VkglTestCase_035842_2 ".srgb8_alpha8_astc_6x6_khr_rgba32ui.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035842, VkglTestCase_035842_1, VkglTestCase_035842_2);

#define VkglTestCase_035843_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mix"
#define VkglTestCase_035843_2 "ed.srgb8_alpha8_astc_6x6_khr_rgba32ui.texture2d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035843, VkglTestCase_035843_1, VkglTestCase_035843_2);

#define VkglTestCase_035844_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
#define VkglTestCase_035844_2 "xed.srgb8_alpha8_astc_6x6_khr_rgba32ui.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035844, VkglTestCase_035844_1, VkglTestCase_035844_2);

#define VkglTestCase_035845_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
#define VkglTestCase_035845_2 "xed.srgb8_alpha8_astc_6x6_khr_rgba32ui.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035845, VkglTestCase_035845_1, VkglTestCase_035845_2);

#define VkglTestCase_035846_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_035846_2 "ixed.srgb8_alpha8_astc_6x6_khr_rgba32ui.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035846, VkglTestCase_035846_1, VkglTestCase_035846_2);

#define VkglTestCase_035847_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed"
#define VkglTestCase_035847_2 ".srgb8_alpha8_astc_6x6_khr_rgba32ui.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035847, VkglTestCase_035847_1, VkglTestCase_035847_2);

#define VkglTestCase_035848_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mix"
#define VkglTestCase_035848_2 "ed.srgb8_alpha8_astc_6x6_khr_rgba32ui.texture3d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035848, VkglTestCase_035848_1, VkglTestCase_035848_2);

#define VkglTestCase_035849_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_035849_2 "ixed.srgb8_alpha8_astc_6x6_khr_rgba32ui.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035849, VkglTestCase_035849_1, VkglTestCase_035849_2);

#define VkglTestCase_035850_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_035850_2 "ixed.srgb8_alpha8_astc_6x6_khr_rgba32ui.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035850, VkglTestCase_035850_1, VkglTestCase_035850_2);

#define VkglTestCase_035851_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_035851_2 "mixed.srgb8_alpha8_astc_6x6_khr_rgba32ui.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035851, VkglTestCase_035851_1, VkglTestCase_035851_2);

#define VkglTestCase_035852_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
#define VkglTestCase_035852_2 "d.srgb8_alpha8_astc_6x6_khr_rgba32ui.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035852, VkglTestCase_035852_1, VkglTestCase_035852_2);

#define VkglTestCase_035853_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
#define VkglTestCase_035853_2 "xed.srgb8_alpha8_astc_6x6_khr_rgba32ui.cubemap_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035853, VkglTestCase_035853_1, VkglTestCase_035853_2);

#define VkglTestCase_035854_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed"
#define VkglTestCase_035854_2 ".srgb8_alpha8_astc_6x6_khr_rgba32ui.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035854, VkglTestCase_035854_1, VkglTestCase_035854_2);

#define VkglTestCase_035855_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed"
#define VkglTestCase_035855_2 ".srgb8_alpha8_astc_6x6_khr_rgba32ui.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035855, VkglTestCase_035855_1, VkglTestCase_035855_2);

#define VkglTestCase_035856_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
#define VkglTestCase_035856_2 "d.srgb8_alpha8_astc_6x6_khr_rgba32ui.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035856, VkglTestCase_035856_1, VkglTestCase_035856_2);

#define VkglTestCase_035857_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed.sr"
#define VkglTestCase_035857_2 "gb8_alpha8_astc_6x6_khr_rgba32ui.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035857, VkglTestCase_035857_1, VkglTestCase_035857_2);

#define VkglTestCase_035858_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed."
#define VkglTestCase_035858_2 "srgb8_alpha8_astc_6x6_khr_rgba32ui.texture2d_array_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035858, VkglTestCase_035858_1, VkglTestCase_035858_2);
