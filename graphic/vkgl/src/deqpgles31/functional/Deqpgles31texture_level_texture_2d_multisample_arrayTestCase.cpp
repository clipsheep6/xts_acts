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
#include "../ActsDeqpgles310016TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_015807_1 "dEQP-GLES31.functional.state_query.texture_lev"
#define VkglTestCase_015807_2 "el.texture_2d_multisample_array.samples_integer"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015807, VkglTestCase_015807_1, VkglTestCase_015807_2);

#define VkglTestCase_015808_1 "dEQP-GLES31.functional.state_query.texture_le"
#define VkglTestCase_015808_2 "vel.texture_2d_multisample_array.samples_float"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015808, VkglTestCase_015808_1, VkglTestCase_015808_2);

#define VkglTestCase_015809_1 "dEQP-GLES31.functional.state_query.texture_level.textu"
#define VkglTestCase_015809_2 "re_2d_multisample_array.fixed_sample_locations_integer"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015809, VkglTestCase_015809_1, VkglTestCase_015809_2);

#define VkglTestCase_015810_1 "dEQP-GLES31.functional.state_query.texture_level.text"
#define VkglTestCase_015810_2 "ure_2d_multisample_array.fixed_sample_locations_float"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015810, VkglTestCase_015810_1, VkglTestCase_015810_2);

#define VkglTestCase_015811_1 "dEQP-GLES31.functional.state_query.texture_le"
#define VkglTestCase_015811_2 "vel.texture_2d_multisample_array.width_integer"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015811, VkglTestCase_015811_1, VkglTestCase_015811_2);

#define VkglTestCase_015812_1 "dEQP-GLES31.functional.state_query.texture_l"
#define VkglTestCase_015812_2 "evel.texture_2d_multisample_array.width_float"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015812, VkglTestCase_015812_1, VkglTestCase_015812_2);

#define VkglTestCase_015813_1 "dEQP-GLES31.functional.state_query.texture_lev"
#define VkglTestCase_015813_2 "el.texture_2d_multisample_array.height_integer"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015813, VkglTestCase_015813_1, VkglTestCase_015813_2);

#define VkglTestCase_015814_1 "dEQP-GLES31.functional.state_query.texture_le"
#define VkglTestCase_015814_2 "vel.texture_2d_multisample_array.height_float"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015814, VkglTestCase_015814_1, VkglTestCase_015814_2);

#define VkglTestCase_015815_1 "dEQP-GLES31.functional.state_query.texture_le"
#define VkglTestCase_015815_2 "vel.texture_2d_multisample_array.depth_integer"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015815, VkglTestCase_015815_1, VkglTestCase_015815_2);

#define VkglTestCase_015816_1 "dEQP-GLES31.functional.state_query.texture_l"
#define VkglTestCase_015816_2 "evel.texture_2d_multisample_array.depth_float"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015816, VkglTestCase_015816_1, VkglTestCase_015816_2);

#define VkglTestCase_015817_1 "dEQP-GLES31.functional.state_query.texture_level.t"
#define VkglTestCase_015817_2 "exture_2d_multisample_array.internal_format_integer"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015817, VkglTestCase_015817_1, VkglTestCase_015817_2);

#define VkglTestCase_015818_1 "dEQP-GLES31.functional.state_query.texture_level."
#define VkglTestCase_015818_2 "texture_2d_multisample_array.internal_format_float"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015818, VkglTestCase_015818_1, VkglTestCase_015818_2);

#define VkglTestCase_015819_1 "dEQP-GLES31.functional.state_query.texture_leve"
#define VkglTestCase_015819_2 "l.texture_2d_multisample_array.red_size_integer"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015819, VkglTestCase_015819_1, VkglTestCase_015819_2);

#define VkglTestCase_015820_1 "dEQP-GLES31.functional.state_query.texture_lev"
#define VkglTestCase_015820_2 "el.texture_2d_multisample_array.red_size_float"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015820, VkglTestCase_015820_1, VkglTestCase_015820_2);

#define VkglTestCase_015821_1 "dEQP-GLES31.functional.state_query.texture_level"
#define VkglTestCase_015821_2 ".texture_2d_multisample_array.green_size_integer"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015821, VkglTestCase_015821_1, VkglTestCase_015821_2);

#define VkglTestCase_015822_1 "dEQP-GLES31.functional.state_query.texture_leve"
#define VkglTestCase_015822_2 "l.texture_2d_multisample_array.green_size_float"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015822, VkglTestCase_015822_1, VkglTestCase_015822_2);

#define VkglTestCase_015823_1 "dEQP-GLES31.functional.state_query.texture_leve"
#define VkglTestCase_015823_2 "l.texture_2d_multisample_array.blue_size_integer"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015823, VkglTestCase_015823_1, VkglTestCase_015823_2);

#define VkglTestCase_015824_1 "dEQP-GLES31.functional.state_query.texture_lev"
#define VkglTestCase_015824_2 "el.texture_2d_multisample_array.blue_size_float"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015824, VkglTestCase_015824_1, VkglTestCase_015824_2);

#define VkglTestCase_015825_1 "dEQP-GLES31.functional.state_query.texture_level"
#define VkglTestCase_015825_2 ".texture_2d_multisample_array.alpha_size_integer"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015825, VkglTestCase_015825_1, VkglTestCase_015825_2);

#define VkglTestCase_015826_1 "dEQP-GLES31.functional.state_query.texture_leve"
#define VkglTestCase_015826_2 "l.texture_2d_multisample_array.alpha_size_float"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015826, VkglTestCase_015826_1, VkglTestCase_015826_2);

#define VkglTestCase_015827_1 "dEQP-GLES31.functional.state_query.texture_level"
#define VkglTestCase_015827_2 ".texture_2d_multisample_array.depth_size_integer"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015827, VkglTestCase_015827_1, VkglTestCase_015827_2);

#define VkglTestCase_015828_1 "dEQP-GLES31.functional.state_query.texture_leve"
#define VkglTestCase_015828_2 "l.texture_2d_multisample_array.depth_size_float"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015828, VkglTestCase_015828_1, VkglTestCase_015828_2);

#define VkglTestCase_015829_1 "dEQP-GLES31.functional.state_query.texture_level."
#define VkglTestCase_015829_2 "texture_2d_multisample_array.stencil_size_integer"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015829, VkglTestCase_015829_1, VkglTestCase_015829_2);

#define VkglTestCase_015830_1 "dEQP-GLES31.functional.state_query.texture_level"
#define VkglTestCase_015830_2 ".texture_2d_multisample_array.stencil_size_float"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015830, VkglTestCase_015830_1, VkglTestCase_015830_2);

#define VkglTestCase_015831_1 "dEQP-GLES31.functional.state_query.texture_level"
#define VkglTestCase_015831_2 ".texture_2d_multisample_array.shared_size_integer"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015831, VkglTestCase_015831_1, VkglTestCase_015831_2);

#define VkglTestCase_015832_1 "dEQP-GLES31.functional.state_query.texture_leve"
#define VkglTestCase_015832_2 "l.texture_2d_multisample_array.shared_size_float"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015832, VkglTestCase_015832_1, VkglTestCase_015832_2);

#define VkglTestCase_015833_1 "dEQP-GLES31.functional.state_query.texture_leve"
#define VkglTestCase_015833_2 "l.texture_2d_multisample_array.red_type_integer"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015833, VkglTestCase_015833_1, VkglTestCase_015833_2);

#define VkglTestCase_015834_1 "dEQP-GLES31.functional.state_query.texture_lev"
#define VkglTestCase_015834_2 "el.texture_2d_multisample_array.red_type_float"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015834, VkglTestCase_015834_1, VkglTestCase_015834_2);

#define VkglTestCase_015835_1 "dEQP-GLES31.functional.state_query.texture_level"
#define VkglTestCase_015835_2 ".texture_2d_multisample_array.green_type_integer"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015835, VkglTestCase_015835_1, VkglTestCase_015835_2);

#define VkglTestCase_015836_1 "dEQP-GLES31.functional.state_query.texture_leve"
#define VkglTestCase_015836_2 "l.texture_2d_multisample_array.green_type_float"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015836, VkglTestCase_015836_1, VkglTestCase_015836_2);

#define VkglTestCase_015837_1 "dEQP-GLES31.functional.state_query.texture_leve"
#define VkglTestCase_015837_2 "l.texture_2d_multisample_array.blue_type_integer"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015837, VkglTestCase_015837_1, VkglTestCase_015837_2);

#define VkglTestCase_015838_1 "dEQP-GLES31.functional.state_query.texture_lev"
#define VkglTestCase_015838_2 "el.texture_2d_multisample_array.blue_type_float"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015838, VkglTestCase_015838_1, VkglTestCase_015838_2);

#define VkglTestCase_015839_1 "dEQP-GLES31.functional.state_query.texture_level"
#define VkglTestCase_015839_2 ".texture_2d_multisample_array.alpha_type_integer"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015839, VkglTestCase_015839_1, VkglTestCase_015839_2);

#define VkglTestCase_015840_1 "dEQP-GLES31.functional.state_query.texture_leve"
#define VkglTestCase_015840_2 "l.texture_2d_multisample_array.alpha_type_float"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015840, VkglTestCase_015840_1, VkglTestCase_015840_2);

#define VkglTestCase_015841_1 "dEQP-GLES31.functional.state_query.texture_level"
#define VkglTestCase_015841_2 ".texture_2d_multisample_array.depth_type_integer"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015841, VkglTestCase_015841_1, VkglTestCase_015841_2);

#define VkglTestCase_015842_1 "dEQP-GLES31.functional.state_query.texture_leve"
#define VkglTestCase_015842_2 "l.texture_2d_multisample_array.depth_type_float"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015842, VkglTestCase_015842_1, VkglTestCase_015842_2);

#define VkglTestCase_015843_1 "dEQP-GLES31.functional.state_query.texture_level"
#define VkglTestCase_015843_2 ".texture_2d_multisample_array.compressed_integer"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015843, VkglTestCase_015843_1, VkglTestCase_015843_2);

#define VkglTestCase_015844_1 "dEQP-GLES31.functional.state_query.texture_leve"
#define VkglTestCase_015844_2 "l.texture_2d_multisample_array.compressed_float"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015844, VkglTestCase_015844_1, VkglTestCase_015844_2);

#define VkglTestCase_015845_1 "dEQP-GLES31.functional.state_query.texture_level.textur"
#define VkglTestCase_015845_2 "e_2d_multisample_array.buffer_data_store_binding_integer"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015845, VkglTestCase_015845_1, VkglTestCase_015845_2);

#define VkglTestCase_015846_1 "dEQP-GLES31.functional.state_query.texture_level.textu"
#define VkglTestCase_015846_2 "re_2d_multisample_array.buffer_data_store_binding_float"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015846, VkglTestCase_015846_1, VkglTestCase_015846_2);

#define VkglTestCase_015847_1 "dEQP-GLES31.functional.state_query.texture_level."
#define VkglTestCase_015847_2 "texture_2d_multisample_array.buffer_offset_integer"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015847, VkglTestCase_015847_1, VkglTestCase_015847_2);

#define VkglTestCase_015848_1 "dEQP-GLES31.functional.state_query.texture_level"
#define VkglTestCase_015848_2 ".texture_2d_multisample_array.buffer_offset_float"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015848, VkglTestCase_015848_1, VkglTestCase_015848_2);

#define VkglTestCase_015849_1 "dEQP-GLES31.functional.state_query.texture_level"
#define VkglTestCase_015849_2 ".texture_2d_multisample_array.buffer_size_integer"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015849, VkglTestCase_015849_1, VkglTestCase_015849_2);

#define VkglTestCase_015850_1 "dEQP-GLES31.functional.state_query.texture_leve"
#define VkglTestCase_015850_2 "l.texture_2d_multisample_array.buffer_size_float"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015850, VkglTestCase_015850_1, VkglTestCase_015850_2);
