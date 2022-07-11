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
#include "../ActsDeqpgles310037TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_036839_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bit"
#define VkglTestCase_036839_2 "s_mixed.rgba_astc_12x12_khr_rgba32i.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036839, VkglTestCase_036839_1, VkglTestCase_036839_2);

#define VkglTestCase_036840_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bit"
#define VkglTestCase_036840_2 "s_mixed.rgba_astc_12x12_khr_rgba32i.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036840, VkglTestCase_036840_1, VkglTestCase_036840_2);

#define VkglTestCase_036841_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_036841_2 "ts_mixed.rgba_astc_12x12_khr_rgba32i.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036841, VkglTestCase_036841_1, VkglTestCase_036841_2);

#define VkglTestCase_036842_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_036842_2 "ixed.rgba_astc_12x12_khr_rgba32i.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036842, VkglTestCase_036842_1, VkglTestCase_036842_2);

#define VkglTestCase_036843_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_036843_2 "mixed.rgba_astc_12x12_khr_rgba32i.texture2d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036843, VkglTestCase_036843_1, VkglTestCase_036843_2);

#define VkglTestCase_036844_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bit"
#define VkglTestCase_036844_2 "s_mixed.rgba_astc_12x12_khr_rgba32i.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036844, VkglTestCase_036844_1, VkglTestCase_036844_2);

#define VkglTestCase_036845_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bit"
#define VkglTestCase_036845_2 "s_mixed.rgba_astc_12x12_khr_rgba32i.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036845, VkglTestCase_036845_1, VkglTestCase_036845_2);

#define VkglTestCase_036846_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_036846_2 "ts_mixed.rgba_astc_12x12_khr_rgba32i.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036846, VkglTestCase_036846_1, VkglTestCase_036846_2);

#define VkglTestCase_036847_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_036847_2 "ixed.rgba_astc_12x12_khr_rgba32i.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036847, VkglTestCase_036847_1, VkglTestCase_036847_2);

#define VkglTestCase_036848_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_036848_2 "mixed.rgba_astc_12x12_khr_rgba32i.texture3d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036848, VkglTestCase_036848_1, VkglTestCase_036848_2);

#define VkglTestCase_036849_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_036849_2 "ts_mixed.rgba_astc_12x12_khr_rgba32i.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036849, VkglTestCase_036849_1, VkglTestCase_036849_2);

#define VkglTestCase_036850_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_036850_2 "ts_mixed.rgba_astc_12x12_khr_rgba32i.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036850, VkglTestCase_036850_1, VkglTestCase_036850_2);

#define VkglTestCase_036851_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_b"
#define VkglTestCase_036851_2 "its_mixed.rgba_astc_12x12_khr_rgba32i.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036851, VkglTestCase_036851_1, VkglTestCase_036851_2);

#define VkglTestCase_036852_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_036852_2 "mixed.rgba_astc_12x12_khr_rgba32i.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036852, VkglTestCase_036852_1, VkglTestCase_036852_2);

#define VkglTestCase_036853_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits"
#define VkglTestCase_036853_2 "_mixed.rgba_astc_12x12_khr_rgba32i.cubemap_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036853, VkglTestCase_036853_1, VkglTestCase_036853_2);

#define VkglTestCase_036854_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_036854_2 "ixed.rgba_astc_12x12_khr_rgba32i.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036854, VkglTestCase_036854_1, VkglTestCase_036854_2);

#define VkglTestCase_036855_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_036855_2 "ixed.rgba_astc_12x12_khr_rgba32i.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036855, VkglTestCase_036855_1, VkglTestCase_036855_2);

#define VkglTestCase_036856_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_036856_2 "mixed.rgba_astc_12x12_khr_rgba32i.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036856, VkglTestCase_036856_1, VkglTestCase_036856_2);

#define VkglTestCase_036857_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
#define VkglTestCase_036857_2 "d.rgba_astc_12x12_khr_rgba32i.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036857, VkglTestCase_036857_1, VkglTestCase_036857_2);

#define VkglTestCase_036858_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mix"
#define VkglTestCase_036858_2 "ed.rgba_astc_12x12_khr_rgba32i.texture2d_array_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036858, VkglTestCase_036858_1, VkglTestCase_036858_2);
