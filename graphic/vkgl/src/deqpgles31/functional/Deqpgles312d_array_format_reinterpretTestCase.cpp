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
#include "../ActsDeqpgles310012TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_011765_1 "dEQP-GLES31.functional.image_load_store.2d"
#define VkglTestCase_011765_2 "_array.format_reinterpret.rgba32f_rgba32ui"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011765, VkglTestCase_011765_1, VkglTestCase_011765_2);

#define VkglTestCase_011766_1 "dEQP-GLES31.functional.image_load_store.2"
#define VkglTestCase_011766_2 "d_array.format_reinterpret.rgba32f_rgba32i"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011766, VkglTestCase_011766_1, VkglTestCase_011766_2);

#define VkglTestCase_011767_1 "dEQP-GLES31.functional.image_load_store.2d"
#define VkglTestCase_011767_2 "_array.format_reinterpret.rgba16f_rgba16ui"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011767, VkglTestCase_011767_1, VkglTestCase_011767_2);

#define VkglTestCase_011768_1 "dEQP-GLES31.functional.image_load_store.2"
#define VkglTestCase_011768_2 "d_array.format_reinterpret.rgba16f_rgba16i"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011768, VkglTestCase_011768_1, VkglTestCase_011768_2);

#define VkglTestCase_011769_1 "dEQP-GLES31.functional.image_load_store."
#define VkglTestCase_011769_2 "2d_array.format_reinterpret.r32f_rgba8ui"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011769, VkglTestCase_011769_1, VkglTestCase_011769_2);

#define VkglTestCase_011770_1 "dEQP-GLES31.functional.image_load_store"
#define VkglTestCase_011770_2 ".2d_array.format_reinterpret.r32f_r32ui"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011770, VkglTestCase_011770_1, VkglTestCase_011770_2);

#define VkglTestCase_011771_1 "dEQP-GLES31.functional.image_load_store"
#define VkglTestCase_011771_2 ".2d_array.format_reinterpret.r32f_rgba8i"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011771, VkglTestCase_011771_1, VkglTestCase_011771_2);

#define VkglTestCase_011772_1 "dEQP-GLES31.functional.image_load_stor"
#define VkglTestCase_011772_2 "e.2d_array.format_reinterpret.r32f_r32i"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011772, VkglTestCase_011772_1, VkglTestCase_011772_2);

#define VkglTestCase_011773_1 "dEQP-GLES31.functional.image_load_store"
#define VkglTestCase_011773_2 ".2d_array.format_reinterpret.r32f_rgba8"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011773, VkglTestCase_011773_1, VkglTestCase_011773_2);

#define VkglTestCase_011774_1 "dEQP-GLES31.functional.image_load_store.2d"
#define VkglTestCase_011774_2 "_array.format_reinterpret.r32f_rgba8_snorm"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011774, VkglTestCase_011774_1, VkglTestCase_011774_2);

#define VkglTestCase_011775_1 "dEQP-GLES31.functional.image_load_store.2d"
#define VkglTestCase_011775_2 "_array.format_reinterpret.rgba32ui_rgba32f"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011775, VkglTestCase_011775_1, VkglTestCase_011775_2);

#define VkglTestCase_011776_1 "dEQP-GLES31.functional.image_load_store.2d"
#define VkglTestCase_011776_2 "_array.format_reinterpret.rgba32ui_rgba32i"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011776, VkglTestCase_011776_1, VkglTestCase_011776_2);

#define VkglTestCase_011777_1 "dEQP-GLES31.functional.image_load_store.2d"
#define VkglTestCase_011777_2 "_array.format_reinterpret.rgba16ui_rgba16f"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011777, VkglTestCase_011777_1, VkglTestCase_011777_2);

#define VkglTestCase_011778_1 "dEQP-GLES31.functional.image_load_store.2d"
#define VkglTestCase_011778_2 "_array.format_reinterpret.rgba16ui_rgba16i"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011778, VkglTestCase_011778_1, VkglTestCase_011778_2);

#define VkglTestCase_011779_1 "dEQP-GLES31.functional.image_load_store."
#define VkglTestCase_011779_2 "2d_array.format_reinterpret.rgba8ui_r32f"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011779, VkglTestCase_011779_1, VkglTestCase_011779_2);

#define VkglTestCase_011780_1 "dEQP-GLES31.functional.image_load_store."
#define VkglTestCase_011780_2 "2d_array.format_reinterpret.rgba8ui_r32ui"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011780, VkglTestCase_011780_1, VkglTestCase_011780_2);

#define VkglTestCase_011781_1 "dEQP-GLES31.functional.image_load_store.2"
#define VkglTestCase_011781_2 "d_array.format_reinterpret.rgba8ui_rgba8i"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011781, VkglTestCase_011781_1, VkglTestCase_011781_2);

#define VkglTestCase_011782_1 "dEQP-GLES31.functional.image_load_store."
#define VkglTestCase_011782_2 "2d_array.format_reinterpret.rgba8ui_r32i"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011782, VkglTestCase_011782_1, VkglTestCase_011782_2);

#define VkglTestCase_011783_1 "dEQP-GLES31.functional.image_load_store."
#define VkglTestCase_011783_2 "2d_array.format_reinterpret.rgba8ui_rgba8"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011783, VkglTestCase_011783_1, VkglTestCase_011783_2);

#define VkglTestCase_011784_1 "dEQP-GLES31.functional.image_load_store.2d_"
#define VkglTestCase_011784_2 "array.format_reinterpret.rgba8ui_rgba8_snorm"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011784, VkglTestCase_011784_1, VkglTestCase_011784_2);

#define VkglTestCase_011785_1 "dEQP-GLES31.functional.image_load_store"
#define VkglTestCase_011785_2 ".2d_array.format_reinterpret.r32ui_r32f"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011785, VkglTestCase_011785_1, VkglTestCase_011785_2);

#define VkglTestCase_011786_1 "dEQP-GLES31.functional.image_load_store."
#define VkglTestCase_011786_2 "2d_array.format_reinterpret.r32ui_rgba8ui"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011786, VkglTestCase_011786_1, VkglTestCase_011786_2);

#define VkglTestCase_011787_1 "dEQP-GLES31.functional.image_load_store."
#define VkglTestCase_011787_2 "2d_array.format_reinterpret.r32ui_rgba8i"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011787, VkglTestCase_011787_1, VkglTestCase_011787_2);

#define VkglTestCase_011788_1 "dEQP-GLES31.functional.image_load_store"
#define VkglTestCase_011788_2 ".2d_array.format_reinterpret.r32ui_r32i"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011788, VkglTestCase_011788_1, VkglTestCase_011788_2);

#define VkglTestCase_011789_1 "dEQP-GLES31.functional.image_load_store"
#define VkglTestCase_011789_2 ".2d_array.format_reinterpret.r32ui_rgba8"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011789, VkglTestCase_011789_1, VkglTestCase_011789_2);

#define VkglTestCase_011790_1 "dEQP-GLES31.functional.image_load_store.2d"
#define VkglTestCase_011790_2 "_array.format_reinterpret.r32ui_rgba8_snorm"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011790, VkglTestCase_011790_1, VkglTestCase_011790_2);

#define VkglTestCase_011791_1 "dEQP-GLES31.functional.image_load_store.2"
#define VkglTestCase_011791_2 "d_array.format_reinterpret.rgba32i_rgba32f"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011791, VkglTestCase_011791_1, VkglTestCase_011791_2);

#define VkglTestCase_011792_1 "dEQP-GLES31.functional.image_load_store.2d"
#define VkglTestCase_011792_2 "_array.format_reinterpret.rgba32i_rgba32ui"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011792, VkglTestCase_011792_1, VkglTestCase_011792_2);

#define VkglTestCase_011793_1 "dEQP-GLES31.functional.image_load_store.2"
#define VkglTestCase_011793_2 "d_array.format_reinterpret.rgba16i_rgba16f"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011793, VkglTestCase_011793_1, VkglTestCase_011793_2);

#define VkglTestCase_011794_1 "dEQP-GLES31.functional.image_load_store.2d"
#define VkglTestCase_011794_2 "_array.format_reinterpret.rgba16i_rgba16ui"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011794, VkglTestCase_011794_1, VkglTestCase_011794_2);

#define VkglTestCase_011795_1 "dEQP-GLES31.functional.image_load_store"
#define VkglTestCase_011795_2 ".2d_array.format_reinterpret.rgba8i_r32f"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011795, VkglTestCase_011795_1, VkglTestCase_011795_2);

#define VkglTestCase_011796_1 "dEQP-GLES31.functional.image_load_store.2"
#define VkglTestCase_011796_2 "d_array.format_reinterpret.rgba8i_rgba8ui"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011796, VkglTestCase_011796_1, VkglTestCase_011796_2);

#define VkglTestCase_011797_1 "dEQP-GLES31.functional.image_load_store."
#define VkglTestCase_011797_2 "2d_array.format_reinterpret.rgba8i_r32ui"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011797, VkglTestCase_011797_1, VkglTestCase_011797_2);

#define VkglTestCase_011798_1 "dEQP-GLES31.functional.image_load_store"
#define VkglTestCase_011798_2 ".2d_array.format_reinterpret.rgba8i_r32i"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011798, VkglTestCase_011798_1, VkglTestCase_011798_2);

#define VkglTestCase_011799_1 "dEQP-GLES31.functional.image_load_store."
#define VkglTestCase_011799_2 "2d_array.format_reinterpret.rgba8i_rgba8"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011799, VkglTestCase_011799_1, VkglTestCase_011799_2);

#define VkglTestCase_011800_1 "dEQP-GLES31.functional.image_load_store.2d_"
#define VkglTestCase_011800_2 "array.format_reinterpret.rgba8i_rgba8_snorm"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011800, VkglTestCase_011800_1, VkglTestCase_011800_2);

#define VkglTestCase_011801_1 "dEQP-GLES31.functional.image_load_stor"
#define VkglTestCase_011801_2 "e.2d_array.format_reinterpret.r32i_r32f"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011801, VkglTestCase_011801_1, VkglTestCase_011801_2);

#define VkglTestCase_011802_1 "dEQP-GLES31.functional.image_load_store."
#define VkglTestCase_011802_2 "2d_array.format_reinterpret.r32i_rgba8ui"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011802, VkglTestCase_011802_1, VkglTestCase_011802_2);

#define VkglTestCase_011803_1 "dEQP-GLES31.functional.image_load_store"
#define VkglTestCase_011803_2 ".2d_array.format_reinterpret.r32i_r32ui"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011803, VkglTestCase_011803_1, VkglTestCase_011803_2);

#define VkglTestCase_011804_1 "dEQP-GLES31.functional.image_load_store"
#define VkglTestCase_011804_2 ".2d_array.format_reinterpret.r32i_rgba8i"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011804, VkglTestCase_011804_1, VkglTestCase_011804_2);

#define VkglTestCase_011805_1 "dEQP-GLES31.functional.image_load_store"
#define VkglTestCase_011805_2 ".2d_array.format_reinterpret.r32i_rgba8"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011805, VkglTestCase_011805_1, VkglTestCase_011805_2);

#define VkglTestCase_011806_1 "dEQP-GLES31.functional.image_load_store.2d"
#define VkglTestCase_011806_2 "_array.format_reinterpret.r32i_rgba8_snorm"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011806, VkglTestCase_011806_1, VkglTestCase_011806_2);

#define VkglTestCase_011807_1 "dEQP-GLES31.functional.image_load_store"
#define VkglTestCase_011807_2 ".2d_array.format_reinterpret.rgba8_r32f"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011807, VkglTestCase_011807_1, VkglTestCase_011807_2);

#define VkglTestCase_011808_1 "dEQP-GLES31.functional.image_load_store."
#define VkglTestCase_011808_2 "2d_array.format_reinterpret.rgba8_rgba8ui"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011808, VkglTestCase_011808_1, VkglTestCase_011808_2);

#define VkglTestCase_011809_1 "dEQP-GLES31.functional.image_load_store"
#define VkglTestCase_011809_2 ".2d_array.format_reinterpret.rgba8_r32ui"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011809, VkglTestCase_011809_1, VkglTestCase_011809_2);

#define VkglTestCase_011810_1 "dEQP-GLES31.functional.image_load_store."
#define VkglTestCase_011810_2 "2d_array.format_reinterpret.rgba8_rgba8i"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011810, VkglTestCase_011810_1, VkglTestCase_011810_2);

#define VkglTestCase_011811_1 "dEQP-GLES31.functional.image_load_store"
#define VkglTestCase_011811_2 ".2d_array.format_reinterpret.rgba8_r32i"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011811, VkglTestCase_011811_1, VkglTestCase_011811_2);

#define VkglTestCase_011812_1 "dEQP-GLES31.functional.image_load_store.2d"
#define VkglTestCase_011812_2 "_array.format_reinterpret.rgba8_rgba8_snorm"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011812, VkglTestCase_011812_1, VkglTestCase_011812_2);

#define VkglTestCase_011813_1 "dEQP-GLES31.functional.image_load_store.2d"
#define VkglTestCase_011813_2 "_array.format_reinterpret.rgba8_snorm_r32f"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011813, VkglTestCase_011813_1, VkglTestCase_011813_2);

#define VkglTestCase_011814_1 "dEQP-GLES31.functional.image_load_store.2d_"
#define VkglTestCase_011814_2 "array.format_reinterpret.rgba8_snorm_rgba8ui"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011814, VkglTestCase_011814_1, VkglTestCase_011814_2);

#define VkglTestCase_011815_1 "dEQP-GLES31.functional.image_load_store.2d"
#define VkglTestCase_011815_2 "_array.format_reinterpret.rgba8_snorm_r32ui"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011815, VkglTestCase_011815_1, VkglTestCase_011815_2);

#define VkglTestCase_011816_1 "dEQP-GLES31.functional.image_load_store.2d_"
#define VkglTestCase_011816_2 "array.format_reinterpret.rgba8_snorm_rgba8i"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011816, VkglTestCase_011816_1, VkglTestCase_011816_2);

#define VkglTestCase_011817_1 "dEQP-GLES31.functional.image_load_store.2d"
#define VkglTestCase_011817_2 "_array.format_reinterpret.rgba8_snorm_r32i"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011817, VkglTestCase_011817_1, VkglTestCase_011817_2);

#define VkglTestCase_011818_1 "dEQP-GLES31.functional.image_load_store.2d"
#define VkglTestCase_011818_2 "_array.format_reinterpret.rgba8_snorm_rgba8"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011818, VkglTestCase_011818_1, VkglTestCase_011818_2);
