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
#include "../Deqpgles2BaseFunc.h"
#include "../ActsDeqpgles20012TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_011782_1 "dEQP-GLES2.functional.fragment_ops.bl"
#define VkglTestCase_011782_2 "end.rgb_func_alpha_func.src.zero_zero"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011782, VkglTestCase_011782_1, VkglTestCase_011782_2);

#define VkglTestCase_011783_1 "dEQP-GLES2.functional.fragment_ops.b"
#define VkglTestCase_011783_2 "lend.rgb_func_alpha_func.src.zero_one"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011783, VkglTestCase_011783_1, VkglTestCase_011783_2);

#define VkglTestCase_011784_1 "dEQP-GLES2.functional.fragment_ops.blen"
#define VkglTestCase_011784_2 "d.rgb_func_alpha_func.src.zero_src_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011784, VkglTestCase_011784_1, VkglTestCase_011784_2);

#define VkglTestCase_011785_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb"
#define VkglTestCase_011785_2 "_func_alpha_func.src.zero_one_minus_src_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011785, VkglTestCase_011785_1, VkglTestCase_011785_2);

#define VkglTestCase_011786_1 "dEQP-GLES2.functional.fragment_ops.blen"
#define VkglTestCase_011786_2 "d.rgb_func_alpha_func.src.zero_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011786, VkglTestCase_011786_1, VkglTestCase_011786_2);

#define VkglTestCase_011787_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb"
#define VkglTestCase_011787_2 "_func_alpha_func.src.zero_one_minus_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011787, VkglTestCase_011787_1, VkglTestCase_011787_2);

#define VkglTestCase_011788_1 "dEQP-GLES2.functional.fragment_ops.blen"
#define VkglTestCase_011788_2 "d.rgb_func_alpha_func.src.zero_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011788, VkglTestCase_011788_1, VkglTestCase_011788_2);

#define VkglTestCase_011789_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb"
#define VkglTestCase_011789_2 "_func_alpha_func.src.zero_one_minus_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011789, VkglTestCase_011789_1, VkglTestCase_011789_2);

#define VkglTestCase_011790_1 "dEQP-GLES2.functional.fragment_ops.blen"
#define VkglTestCase_011790_2 "d.rgb_func_alpha_func.src.zero_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011790, VkglTestCase_011790_1, VkglTestCase_011790_2);

#define VkglTestCase_011791_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb"
#define VkglTestCase_011791_2 "_func_alpha_func.src.zero_one_minus_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011791, VkglTestCase_011791_1, VkglTestCase_011791_2);

#define VkglTestCase_011792_1 "dEQP-GLES2.functional.fragment_ops.blend.r"
#define VkglTestCase_011792_2 "gb_func_alpha_func.src.zero_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011792, VkglTestCase_011792_1, VkglTestCase_011792_2);

#define VkglTestCase_011793_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb_fu"
#define VkglTestCase_011793_2 "nc_alpha_func.src.zero_one_minus_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011793, VkglTestCase_011793_1, VkglTestCase_011793_2);

#define VkglTestCase_011794_1 "dEQP-GLES2.functional.fragment_ops.blend.r"
#define VkglTestCase_011794_2 "gb_func_alpha_func.src.zero_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011794, VkglTestCase_011794_1, VkglTestCase_011794_2);

#define VkglTestCase_011795_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb_fu"
#define VkglTestCase_011795_2 "nc_alpha_func.src.zero_one_minus_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011795, VkglTestCase_011795_1, VkglTestCase_011795_2);

#define VkglTestCase_011796_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb"
#define VkglTestCase_011796_2 "_func_alpha_func.src.zero_src_alpha_saturate"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011796, VkglTestCase_011796_1, VkglTestCase_011796_2);

#define VkglTestCase_011797_1 "dEQP-GLES2.functional.fragment_ops.b"
#define VkglTestCase_011797_2 "lend.rgb_func_alpha_func.src.one_zero"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011797, VkglTestCase_011797_1, VkglTestCase_011797_2);

#define VkglTestCase_011798_1 "dEQP-GLES2.functional.fragment_ops.b"
#define VkglTestCase_011798_2 "lend.rgb_func_alpha_func.src.one_one"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011798, VkglTestCase_011798_1, VkglTestCase_011798_2);

#define VkglTestCase_011799_1 "dEQP-GLES2.functional.fragment_ops.blen"
#define VkglTestCase_011799_2 "d.rgb_func_alpha_func.src.one_src_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011799, VkglTestCase_011799_1, VkglTestCase_011799_2);

#define VkglTestCase_011800_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb"
#define VkglTestCase_011800_2 "_func_alpha_func.src.one_one_minus_src_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011800, VkglTestCase_011800_1, VkglTestCase_011800_2);

#define VkglTestCase_011801_1 "dEQP-GLES2.functional.fragment_ops.blen"
#define VkglTestCase_011801_2 "d.rgb_func_alpha_func.src.one_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011801, VkglTestCase_011801_1, VkglTestCase_011801_2);

#define VkglTestCase_011802_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb"
#define VkglTestCase_011802_2 "_func_alpha_func.src.one_one_minus_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011802, VkglTestCase_011802_1, VkglTestCase_011802_2);

#define VkglTestCase_011803_1 "dEQP-GLES2.functional.fragment_ops.blen"
#define VkglTestCase_011803_2 "d.rgb_func_alpha_func.src.one_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011803, VkglTestCase_011803_1, VkglTestCase_011803_2);

#define VkglTestCase_011804_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb"
#define VkglTestCase_011804_2 "_func_alpha_func.src.one_one_minus_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011804, VkglTestCase_011804_1, VkglTestCase_011804_2);

#define VkglTestCase_011805_1 "dEQP-GLES2.functional.fragment_ops.blen"
#define VkglTestCase_011805_2 "d.rgb_func_alpha_func.src.one_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011805, VkglTestCase_011805_1, VkglTestCase_011805_2);

#define VkglTestCase_011806_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb"
#define VkglTestCase_011806_2 "_func_alpha_func.src.one_one_minus_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011806, VkglTestCase_011806_1, VkglTestCase_011806_2);

#define VkglTestCase_011807_1 "dEQP-GLES2.functional.fragment_ops.blend."
#define VkglTestCase_011807_2 "rgb_func_alpha_func.src.one_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011807, VkglTestCase_011807_1, VkglTestCase_011807_2);

#define VkglTestCase_011808_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb_f"
#define VkglTestCase_011808_2 "unc_alpha_func.src.one_one_minus_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011808, VkglTestCase_011808_1, VkglTestCase_011808_2);

#define VkglTestCase_011809_1 "dEQP-GLES2.functional.fragment_ops.blend."
#define VkglTestCase_011809_2 "rgb_func_alpha_func.src.one_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011809, VkglTestCase_011809_1, VkglTestCase_011809_2);

#define VkglTestCase_011810_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb_f"
#define VkglTestCase_011810_2 "unc_alpha_func.src.one_one_minus_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011810, VkglTestCase_011810_1, VkglTestCase_011810_2);

#define VkglTestCase_011811_1 "dEQP-GLES2.functional.fragment_ops.blend.rg"
#define VkglTestCase_011811_2 "b_func_alpha_func.src.one_src_alpha_saturate"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011811, VkglTestCase_011811_1, VkglTestCase_011811_2);

#define VkglTestCase_011812_1 "dEQP-GLES2.functional.fragment_ops.blen"
#define VkglTestCase_011812_2 "d.rgb_func_alpha_func.src.src_color_zero"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011812, VkglTestCase_011812_1, VkglTestCase_011812_2);

#define VkglTestCase_011813_1 "dEQP-GLES2.functional.fragment_ops.blen"
#define VkglTestCase_011813_2 "d.rgb_func_alpha_func.src.src_color_one"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011813, VkglTestCase_011813_1, VkglTestCase_011813_2);

#define VkglTestCase_011814_1 "dEQP-GLES2.functional.fragment_ops.blend.r"
#define VkglTestCase_011814_2 "gb_func_alpha_func.src.src_color_src_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011814, VkglTestCase_011814_1, VkglTestCase_011814_2);

#define VkglTestCase_011815_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb_fu"
#define VkglTestCase_011815_2 "nc_alpha_func.src.src_color_one_minus_src_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011815, VkglTestCase_011815_1, VkglTestCase_011815_2);

#define VkglTestCase_011816_1 "dEQP-GLES2.functional.fragment_ops.blend.r"
#define VkglTestCase_011816_2 "gb_func_alpha_func.src.src_color_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011816, VkglTestCase_011816_1, VkglTestCase_011816_2);

#define VkglTestCase_011817_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb_fu"
#define VkglTestCase_011817_2 "nc_alpha_func.src.src_color_one_minus_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011817, VkglTestCase_011817_1, VkglTestCase_011817_2);

#define VkglTestCase_011818_1 "dEQP-GLES2.functional.fragment_ops.blend.r"
#define VkglTestCase_011818_2 "gb_func_alpha_func.src.src_color_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011818, VkglTestCase_011818_1, VkglTestCase_011818_2);

#define VkglTestCase_011819_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb_fu"
#define VkglTestCase_011819_2 "nc_alpha_func.src.src_color_one_minus_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011819, VkglTestCase_011819_1, VkglTestCase_011819_2);

#define VkglTestCase_011820_1 "dEQP-GLES2.functional.fragment_ops.blend.r"
#define VkglTestCase_011820_2 "gb_func_alpha_func.src.src_color_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011820, VkglTestCase_011820_1, VkglTestCase_011820_2);

#define VkglTestCase_011821_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb_fu"
#define VkglTestCase_011821_2 "nc_alpha_func.src.src_color_one_minus_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011821, VkglTestCase_011821_1, VkglTestCase_011821_2);

#define VkglTestCase_011822_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb"
#define VkglTestCase_011822_2 "_func_alpha_func.src.src_color_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011822, VkglTestCase_011822_1, VkglTestCase_011822_2);

#define VkglTestCase_011823_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb_func"
#define VkglTestCase_011823_2 "_alpha_func.src.src_color_one_minus_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011823, VkglTestCase_011823_1, VkglTestCase_011823_2);

#define VkglTestCase_011824_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb"
#define VkglTestCase_011824_2 "_func_alpha_func.src.src_color_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011824, VkglTestCase_011824_1, VkglTestCase_011824_2);

#define VkglTestCase_011825_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb_func"
#define VkglTestCase_011825_2 "_alpha_func.src.src_color_one_minus_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011825, VkglTestCase_011825_1, VkglTestCase_011825_2);

#define VkglTestCase_011826_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb_f"
#define VkglTestCase_011826_2 "unc_alpha_func.src.src_color_src_alpha_saturate"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011826, VkglTestCase_011826_1, VkglTestCase_011826_2);

#define VkglTestCase_011827_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb"
#define VkglTestCase_011827_2 "_func_alpha_func.src.one_minus_src_color_zero"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011827, VkglTestCase_011827_1, VkglTestCase_011827_2);

#define VkglTestCase_011828_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb"
#define VkglTestCase_011828_2 "_func_alpha_func.src.one_minus_src_color_one"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011828, VkglTestCase_011828_1, VkglTestCase_011828_2);

#define VkglTestCase_011829_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb_fu"
#define VkglTestCase_011829_2 "nc_alpha_func.src.one_minus_src_color_src_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011829, VkglTestCase_011829_1, VkglTestCase_011829_2);

#define VkglTestCase_011830_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb_func_al"
#define VkglTestCase_011830_2 "pha_func.src.one_minus_src_color_one_minus_src_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011830, VkglTestCase_011830_1, VkglTestCase_011830_2);

#define VkglTestCase_011831_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb_fu"
#define VkglTestCase_011831_2 "nc_alpha_func.src.one_minus_src_color_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011831, VkglTestCase_011831_1, VkglTestCase_011831_2);

#define VkglTestCase_011832_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb_func_al"
#define VkglTestCase_011832_2 "pha_func.src.one_minus_src_color_one_minus_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011832, VkglTestCase_011832_1, VkglTestCase_011832_2);

#define VkglTestCase_011833_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb_fu"
#define VkglTestCase_011833_2 "nc_alpha_func.src.one_minus_src_color_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011833, VkglTestCase_011833_1, VkglTestCase_011833_2);

#define VkglTestCase_011834_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb_func_al"
#define VkglTestCase_011834_2 "pha_func.src.one_minus_src_color_one_minus_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011834, VkglTestCase_011834_1, VkglTestCase_011834_2);

#define VkglTestCase_011835_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb_fu"
#define VkglTestCase_011835_2 "nc_alpha_func.src.one_minus_src_color_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011835, VkglTestCase_011835_1, VkglTestCase_011835_2);

#define VkglTestCase_011836_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb_func_al"
#define VkglTestCase_011836_2 "pha_func.src.one_minus_src_color_one_minus_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011836, VkglTestCase_011836_1, VkglTestCase_011836_2);

#define VkglTestCase_011837_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb_func"
#define VkglTestCase_011837_2 "_alpha_func.src.one_minus_src_color_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011837, VkglTestCase_011837_1, VkglTestCase_011837_2);

#define VkglTestCase_011838_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb_func_alph"
#define VkglTestCase_011838_2 "a_func.src.one_minus_src_color_one_minus_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011838, VkglTestCase_011838_1, VkglTestCase_011838_2);

#define VkglTestCase_011839_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb_func"
#define VkglTestCase_011839_2 "_alpha_func.src.one_minus_src_color_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011839, VkglTestCase_011839_1, VkglTestCase_011839_2);

#define VkglTestCase_011840_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb_func_alph"
#define VkglTestCase_011840_2 "a_func.src.one_minus_src_color_one_minus_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011840, VkglTestCase_011840_1, VkglTestCase_011840_2);

#define VkglTestCase_011841_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb_func_a"
#define VkglTestCase_011841_2 "lpha_func.src.one_minus_src_color_src_alpha_saturate"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011841, VkglTestCase_011841_1, VkglTestCase_011841_2);

#define VkglTestCase_011842_1 "dEQP-GLES2.functional.fragment_ops.blen"
#define VkglTestCase_011842_2 "d.rgb_func_alpha_func.src.dst_color_zero"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011842, VkglTestCase_011842_1, VkglTestCase_011842_2);

#define VkglTestCase_011843_1 "dEQP-GLES2.functional.fragment_ops.blen"
#define VkglTestCase_011843_2 "d.rgb_func_alpha_func.src.dst_color_one"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011843, VkglTestCase_011843_1, VkglTestCase_011843_2);

#define VkglTestCase_011844_1 "dEQP-GLES2.functional.fragment_ops.blend.r"
#define VkglTestCase_011844_2 "gb_func_alpha_func.src.dst_color_src_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011844, VkglTestCase_011844_1, VkglTestCase_011844_2);

#define VkglTestCase_011845_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb_fu"
#define VkglTestCase_011845_2 "nc_alpha_func.src.dst_color_one_minus_src_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011845, VkglTestCase_011845_1, VkglTestCase_011845_2);

#define VkglTestCase_011846_1 "dEQP-GLES2.functional.fragment_ops.blend.r"
#define VkglTestCase_011846_2 "gb_func_alpha_func.src.dst_color_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011846, VkglTestCase_011846_1, VkglTestCase_011846_2);

#define VkglTestCase_011847_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb_fu"
#define VkglTestCase_011847_2 "nc_alpha_func.src.dst_color_one_minus_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011847, VkglTestCase_011847_1, VkglTestCase_011847_2);

#define VkglTestCase_011848_1 "dEQP-GLES2.functional.fragment_ops.blend.r"
#define VkglTestCase_011848_2 "gb_func_alpha_func.src.dst_color_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011848, VkglTestCase_011848_1, VkglTestCase_011848_2);

#define VkglTestCase_011849_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb_fu"
#define VkglTestCase_011849_2 "nc_alpha_func.src.dst_color_one_minus_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011849, VkglTestCase_011849_1, VkglTestCase_011849_2);

#define VkglTestCase_011850_1 "dEQP-GLES2.functional.fragment_ops.blend.r"
#define VkglTestCase_011850_2 "gb_func_alpha_func.src.dst_color_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011850, VkglTestCase_011850_1, VkglTestCase_011850_2);

#define VkglTestCase_011851_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb_fu"
#define VkglTestCase_011851_2 "nc_alpha_func.src.dst_color_one_minus_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011851, VkglTestCase_011851_1, VkglTestCase_011851_2);

#define VkglTestCase_011852_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb"
#define VkglTestCase_011852_2 "_func_alpha_func.src.dst_color_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011852, VkglTestCase_011852_1, VkglTestCase_011852_2);

#define VkglTestCase_011853_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb_func"
#define VkglTestCase_011853_2 "_alpha_func.src.dst_color_one_minus_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011853, VkglTestCase_011853_1, VkglTestCase_011853_2);

#define VkglTestCase_011854_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb"
#define VkglTestCase_011854_2 "_func_alpha_func.src.dst_color_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011854, VkglTestCase_011854_1, VkglTestCase_011854_2);

#define VkglTestCase_011855_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb_func"
#define VkglTestCase_011855_2 "_alpha_func.src.dst_color_one_minus_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011855, VkglTestCase_011855_1, VkglTestCase_011855_2);

#define VkglTestCase_011856_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb_f"
#define VkglTestCase_011856_2 "unc_alpha_func.src.dst_color_src_alpha_saturate"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011856, VkglTestCase_011856_1, VkglTestCase_011856_2);

#define VkglTestCase_011857_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb"
#define VkglTestCase_011857_2 "_func_alpha_func.src.one_minus_dst_color_zero"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011857, VkglTestCase_011857_1, VkglTestCase_011857_2);

#define VkglTestCase_011858_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb"
#define VkglTestCase_011858_2 "_func_alpha_func.src.one_minus_dst_color_one"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011858, VkglTestCase_011858_1, VkglTestCase_011858_2);

#define VkglTestCase_011859_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb_fu"
#define VkglTestCase_011859_2 "nc_alpha_func.src.one_minus_dst_color_src_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011859, VkglTestCase_011859_1, VkglTestCase_011859_2);

#define VkglTestCase_011860_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb_func_al"
#define VkglTestCase_011860_2 "pha_func.src.one_minus_dst_color_one_minus_src_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011860, VkglTestCase_011860_1, VkglTestCase_011860_2);

#define VkglTestCase_011861_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb_fu"
#define VkglTestCase_011861_2 "nc_alpha_func.src.one_minus_dst_color_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011861, VkglTestCase_011861_1, VkglTestCase_011861_2);

#define VkglTestCase_011862_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb_func_al"
#define VkglTestCase_011862_2 "pha_func.src.one_minus_dst_color_one_minus_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011862, VkglTestCase_011862_1, VkglTestCase_011862_2);

#define VkglTestCase_011863_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb_fu"
#define VkglTestCase_011863_2 "nc_alpha_func.src.one_minus_dst_color_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011863, VkglTestCase_011863_1, VkglTestCase_011863_2);

#define VkglTestCase_011864_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb_func_al"
#define VkglTestCase_011864_2 "pha_func.src.one_minus_dst_color_one_minus_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011864, VkglTestCase_011864_1, VkglTestCase_011864_2);

#define VkglTestCase_011865_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb_fu"
#define VkglTestCase_011865_2 "nc_alpha_func.src.one_minus_dst_color_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011865, VkglTestCase_011865_1, VkglTestCase_011865_2);

#define VkglTestCase_011866_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb_func_al"
#define VkglTestCase_011866_2 "pha_func.src.one_minus_dst_color_one_minus_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011866, VkglTestCase_011866_1, VkglTestCase_011866_2);

#define VkglTestCase_011867_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb_func"
#define VkglTestCase_011867_2 "_alpha_func.src.one_minus_dst_color_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011867, VkglTestCase_011867_1, VkglTestCase_011867_2);

#define VkglTestCase_011868_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb_func_alph"
#define VkglTestCase_011868_2 "a_func.src.one_minus_dst_color_one_minus_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011868, VkglTestCase_011868_1, VkglTestCase_011868_2);

#define VkglTestCase_011869_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb_func"
#define VkglTestCase_011869_2 "_alpha_func.src.one_minus_dst_color_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011869, VkglTestCase_011869_1, VkglTestCase_011869_2);

#define VkglTestCase_011870_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb_func_alph"
#define VkglTestCase_011870_2 "a_func.src.one_minus_dst_color_one_minus_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011870, VkglTestCase_011870_1, VkglTestCase_011870_2);

#define VkglTestCase_011871_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb_func_a"
#define VkglTestCase_011871_2 "lpha_func.src.one_minus_dst_color_src_alpha_saturate"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011871, VkglTestCase_011871_1, VkglTestCase_011871_2);

#define VkglTestCase_011872_1 "dEQP-GLES2.functional.fragment_ops.blen"
#define VkglTestCase_011872_2 "d.rgb_func_alpha_func.src.src_alpha_zero"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011872, VkglTestCase_011872_1, VkglTestCase_011872_2);

#define VkglTestCase_011873_1 "dEQP-GLES2.functional.fragment_ops.blen"
#define VkglTestCase_011873_2 "d.rgb_func_alpha_func.src.src_alpha_one"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011873, VkglTestCase_011873_1, VkglTestCase_011873_2);

#define VkglTestCase_011874_1 "dEQP-GLES2.functional.fragment_ops.blend.r"
#define VkglTestCase_011874_2 "gb_func_alpha_func.src.src_alpha_src_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011874, VkglTestCase_011874_1, VkglTestCase_011874_2);

#define VkglTestCase_011875_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb_fu"
#define VkglTestCase_011875_2 "nc_alpha_func.src.src_alpha_one_minus_src_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011875, VkglTestCase_011875_1, VkglTestCase_011875_2);

#define VkglTestCase_011876_1 "dEQP-GLES2.functional.fragment_ops.blend.r"
#define VkglTestCase_011876_2 "gb_func_alpha_func.src.src_alpha_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011876, VkglTestCase_011876_1, VkglTestCase_011876_2);

#define VkglTestCase_011877_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb_fu"
#define VkglTestCase_011877_2 "nc_alpha_func.src.src_alpha_one_minus_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011877, VkglTestCase_011877_1, VkglTestCase_011877_2);

#define VkglTestCase_011878_1 "dEQP-GLES2.functional.fragment_ops.blend.r"
#define VkglTestCase_011878_2 "gb_func_alpha_func.src.src_alpha_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011878, VkglTestCase_011878_1, VkglTestCase_011878_2);

#define VkglTestCase_011879_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb_fu"
#define VkglTestCase_011879_2 "nc_alpha_func.src.src_alpha_one_minus_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011879, VkglTestCase_011879_1, VkglTestCase_011879_2);

#define VkglTestCase_011880_1 "dEQP-GLES2.functional.fragment_ops.blend.r"
#define VkglTestCase_011880_2 "gb_func_alpha_func.src.src_alpha_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011880, VkglTestCase_011880_1, VkglTestCase_011880_2);

#define VkglTestCase_011881_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb_fu"
#define VkglTestCase_011881_2 "nc_alpha_func.src.src_alpha_one_minus_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011881, VkglTestCase_011881_1, VkglTestCase_011881_2);

#define VkglTestCase_011882_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb"
#define VkglTestCase_011882_2 "_func_alpha_func.src.src_alpha_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011882, VkglTestCase_011882_1, VkglTestCase_011882_2);

#define VkglTestCase_011883_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb_func"
#define VkglTestCase_011883_2 "_alpha_func.src.src_alpha_one_minus_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011883, VkglTestCase_011883_1, VkglTestCase_011883_2);

#define VkglTestCase_011884_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb"
#define VkglTestCase_011884_2 "_func_alpha_func.src.src_alpha_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011884, VkglTestCase_011884_1, VkglTestCase_011884_2);

#define VkglTestCase_011885_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb_func"
#define VkglTestCase_011885_2 "_alpha_func.src.src_alpha_one_minus_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011885, VkglTestCase_011885_1, VkglTestCase_011885_2);

#define VkglTestCase_011886_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb_f"
#define VkglTestCase_011886_2 "unc_alpha_func.src.src_alpha_src_alpha_saturate"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011886, VkglTestCase_011886_1, VkglTestCase_011886_2);

#define VkglTestCase_011887_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb"
#define VkglTestCase_011887_2 "_func_alpha_func.src.one_minus_src_alpha_zero"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011887, VkglTestCase_011887_1, VkglTestCase_011887_2);

#define VkglTestCase_011888_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb"
#define VkglTestCase_011888_2 "_func_alpha_func.src.one_minus_src_alpha_one"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011888, VkglTestCase_011888_1, VkglTestCase_011888_2);

#define VkglTestCase_011889_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb_fu"
#define VkglTestCase_011889_2 "nc_alpha_func.src.one_minus_src_alpha_src_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011889, VkglTestCase_011889_1, VkglTestCase_011889_2);

#define VkglTestCase_011890_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb_func_al"
#define VkglTestCase_011890_2 "pha_func.src.one_minus_src_alpha_one_minus_src_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011890, VkglTestCase_011890_1, VkglTestCase_011890_2);

#define VkglTestCase_011891_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb_fu"
#define VkglTestCase_011891_2 "nc_alpha_func.src.one_minus_src_alpha_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011891, VkglTestCase_011891_1, VkglTestCase_011891_2);

#define VkglTestCase_011892_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb_func_al"
#define VkglTestCase_011892_2 "pha_func.src.one_minus_src_alpha_one_minus_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011892, VkglTestCase_011892_1, VkglTestCase_011892_2);

#define VkglTestCase_011893_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb_fu"
#define VkglTestCase_011893_2 "nc_alpha_func.src.one_minus_src_alpha_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011893, VkglTestCase_011893_1, VkglTestCase_011893_2);

#define VkglTestCase_011894_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb_func_al"
#define VkglTestCase_011894_2 "pha_func.src.one_minus_src_alpha_one_minus_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011894, VkglTestCase_011894_1, VkglTestCase_011894_2);

#define VkglTestCase_011895_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb_fu"
#define VkglTestCase_011895_2 "nc_alpha_func.src.one_minus_src_alpha_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011895, VkglTestCase_011895_1, VkglTestCase_011895_2);

#define VkglTestCase_011896_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb_func_al"
#define VkglTestCase_011896_2 "pha_func.src.one_minus_src_alpha_one_minus_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011896, VkglTestCase_011896_1, VkglTestCase_011896_2);

#define VkglTestCase_011897_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb_func"
#define VkglTestCase_011897_2 "_alpha_func.src.one_minus_src_alpha_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011897, VkglTestCase_011897_1, VkglTestCase_011897_2);

#define VkglTestCase_011898_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb_func_alph"
#define VkglTestCase_011898_2 "a_func.src.one_minus_src_alpha_one_minus_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011898, VkglTestCase_011898_1, VkglTestCase_011898_2);

#define VkglTestCase_011899_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb_func"
#define VkglTestCase_011899_2 "_alpha_func.src.one_minus_src_alpha_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011899, VkglTestCase_011899_1, VkglTestCase_011899_2);

#define VkglTestCase_011900_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb_func_alph"
#define VkglTestCase_011900_2 "a_func.src.one_minus_src_alpha_one_minus_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011900, VkglTestCase_011900_1, VkglTestCase_011900_2);

#define VkglTestCase_011901_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb_func_a"
#define VkglTestCase_011901_2 "lpha_func.src.one_minus_src_alpha_src_alpha_saturate"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011901, VkglTestCase_011901_1, VkglTestCase_011901_2);

#define VkglTestCase_011902_1 "dEQP-GLES2.functional.fragment_ops.blen"
#define VkglTestCase_011902_2 "d.rgb_func_alpha_func.src.dst_alpha_zero"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011902, VkglTestCase_011902_1, VkglTestCase_011902_2);

#define VkglTestCase_011903_1 "dEQP-GLES2.functional.fragment_ops.blen"
#define VkglTestCase_011903_2 "d.rgb_func_alpha_func.src.dst_alpha_one"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011903, VkglTestCase_011903_1, VkglTestCase_011903_2);

#define VkglTestCase_011904_1 "dEQP-GLES2.functional.fragment_ops.blend.r"
#define VkglTestCase_011904_2 "gb_func_alpha_func.src.dst_alpha_src_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011904, VkglTestCase_011904_1, VkglTestCase_011904_2);

#define VkglTestCase_011905_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb_fu"
#define VkglTestCase_011905_2 "nc_alpha_func.src.dst_alpha_one_minus_src_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011905, VkglTestCase_011905_1, VkglTestCase_011905_2);

#define VkglTestCase_011906_1 "dEQP-GLES2.functional.fragment_ops.blend.r"
#define VkglTestCase_011906_2 "gb_func_alpha_func.src.dst_alpha_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011906, VkglTestCase_011906_1, VkglTestCase_011906_2);

#define VkglTestCase_011907_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb_fu"
#define VkglTestCase_011907_2 "nc_alpha_func.src.dst_alpha_one_minus_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011907, VkglTestCase_011907_1, VkglTestCase_011907_2);

#define VkglTestCase_011908_1 "dEQP-GLES2.functional.fragment_ops.blend.r"
#define VkglTestCase_011908_2 "gb_func_alpha_func.src.dst_alpha_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011908, VkglTestCase_011908_1, VkglTestCase_011908_2);

#define VkglTestCase_011909_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb_fu"
#define VkglTestCase_011909_2 "nc_alpha_func.src.dst_alpha_one_minus_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011909, VkglTestCase_011909_1, VkglTestCase_011909_2);

#define VkglTestCase_011910_1 "dEQP-GLES2.functional.fragment_ops.blend.r"
#define VkglTestCase_011910_2 "gb_func_alpha_func.src.dst_alpha_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011910, VkglTestCase_011910_1, VkglTestCase_011910_2);

#define VkglTestCase_011911_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb_fu"
#define VkglTestCase_011911_2 "nc_alpha_func.src.dst_alpha_one_minus_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011911, VkglTestCase_011911_1, VkglTestCase_011911_2);

#define VkglTestCase_011912_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb"
#define VkglTestCase_011912_2 "_func_alpha_func.src.dst_alpha_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011912, VkglTestCase_011912_1, VkglTestCase_011912_2);

#define VkglTestCase_011913_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb_func"
#define VkglTestCase_011913_2 "_alpha_func.src.dst_alpha_one_minus_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011913, VkglTestCase_011913_1, VkglTestCase_011913_2);

#define VkglTestCase_011914_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb"
#define VkglTestCase_011914_2 "_func_alpha_func.src.dst_alpha_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011914, VkglTestCase_011914_1, VkglTestCase_011914_2);

#define VkglTestCase_011915_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb_func"
#define VkglTestCase_011915_2 "_alpha_func.src.dst_alpha_one_minus_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011915, VkglTestCase_011915_1, VkglTestCase_011915_2);

#define VkglTestCase_011916_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb_f"
#define VkglTestCase_011916_2 "unc_alpha_func.src.dst_alpha_src_alpha_saturate"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011916, VkglTestCase_011916_1, VkglTestCase_011916_2);

#define VkglTestCase_011917_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb"
#define VkglTestCase_011917_2 "_func_alpha_func.src.one_minus_dst_alpha_zero"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011917, VkglTestCase_011917_1, VkglTestCase_011917_2);

#define VkglTestCase_011918_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb"
#define VkglTestCase_011918_2 "_func_alpha_func.src.one_minus_dst_alpha_one"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011918, VkglTestCase_011918_1, VkglTestCase_011918_2);

#define VkglTestCase_011919_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb_fu"
#define VkglTestCase_011919_2 "nc_alpha_func.src.one_minus_dst_alpha_src_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011919, VkglTestCase_011919_1, VkglTestCase_011919_2);

#define VkglTestCase_011920_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb_func_al"
#define VkglTestCase_011920_2 "pha_func.src.one_minus_dst_alpha_one_minus_src_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011920, VkglTestCase_011920_1, VkglTestCase_011920_2);

#define VkglTestCase_011921_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb_fu"
#define VkglTestCase_011921_2 "nc_alpha_func.src.one_minus_dst_alpha_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011921, VkglTestCase_011921_1, VkglTestCase_011921_2);

#define VkglTestCase_011922_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb_func_al"
#define VkglTestCase_011922_2 "pha_func.src.one_minus_dst_alpha_one_minus_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011922, VkglTestCase_011922_1, VkglTestCase_011922_2);

#define VkglTestCase_011923_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb_fu"
#define VkglTestCase_011923_2 "nc_alpha_func.src.one_minus_dst_alpha_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011923, VkglTestCase_011923_1, VkglTestCase_011923_2);

#define VkglTestCase_011924_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb_func_al"
#define VkglTestCase_011924_2 "pha_func.src.one_minus_dst_alpha_one_minus_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011924, VkglTestCase_011924_1, VkglTestCase_011924_2);

#define VkglTestCase_011925_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb_fu"
#define VkglTestCase_011925_2 "nc_alpha_func.src.one_minus_dst_alpha_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011925, VkglTestCase_011925_1, VkglTestCase_011925_2);

#define VkglTestCase_011926_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb_func_al"
#define VkglTestCase_011926_2 "pha_func.src.one_minus_dst_alpha_one_minus_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011926, VkglTestCase_011926_1, VkglTestCase_011926_2);

#define VkglTestCase_011927_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb_func"
#define VkglTestCase_011927_2 "_alpha_func.src.one_minus_dst_alpha_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011927, VkglTestCase_011927_1, VkglTestCase_011927_2);

#define VkglTestCase_011928_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb_func_alph"
#define VkglTestCase_011928_2 "a_func.src.one_minus_dst_alpha_one_minus_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011928, VkglTestCase_011928_1, VkglTestCase_011928_2);

#define VkglTestCase_011929_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb_func"
#define VkglTestCase_011929_2 "_alpha_func.src.one_minus_dst_alpha_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011929, VkglTestCase_011929_1, VkglTestCase_011929_2);

#define VkglTestCase_011930_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb_func_alph"
#define VkglTestCase_011930_2 "a_func.src.one_minus_dst_alpha_one_minus_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011930, VkglTestCase_011930_1, VkglTestCase_011930_2);

#define VkglTestCase_011931_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb_func_a"
#define VkglTestCase_011931_2 "lpha_func.src.one_minus_dst_alpha_src_alpha_saturate"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011931, VkglTestCase_011931_1, VkglTestCase_011931_2);

#define VkglTestCase_011932_1 "dEQP-GLES2.functional.fragment_ops.blend.r"
#define VkglTestCase_011932_2 "gb_func_alpha_func.src.constant_color_zero"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011932, VkglTestCase_011932_1, VkglTestCase_011932_2);

#define VkglTestCase_011933_1 "dEQP-GLES2.functional.fragment_ops.blend."
#define VkglTestCase_011933_2 "rgb_func_alpha_func.src.constant_color_one"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011933, VkglTestCase_011933_1, VkglTestCase_011933_2);

#define VkglTestCase_011934_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb"
#define VkglTestCase_011934_2 "_func_alpha_func.src.constant_color_src_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011934, VkglTestCase_011934_1, VkglTestCase_011934_2);

#define VkglTestCase_011935_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb_func"
#define VkglTestCase_011935_2 "_alpha_func.src.constant_color_one_minus_src_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011935, VkglTestCase_011935_1, VkglTestCase_011935_2);

#define VkglTestCase_011936_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb"
#define VkglTestCase_011936_2 "_func_alpha_func.src.constant_color_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011936, VkglTestCase_011936_1, VkglTestCase_011936_2);

#define VkglTestCase_011937_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb_func"
#define VkglTestCase_011937_2 "_alpha_func.src.constant_color_one_minus_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011937, VkglTestCase_011937_1, VkglTestCase_011937_2);

#define VkglTestCase_011938_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb"
#define VkglTestCase_011938_2 "_func_alpha_func.src.constant_color_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011938, VkglTestCase_011938_1, VkglTestCase_011938_2);

#define VkglTestCase_011939_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb_func"
#define VkglTestCase_011939_2 "_alpha_func.src.constant_color_one_minus_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011939, VkglTestCase_011939_1, VkglTestCase_011939_2);

#define VkglTestCase_011940_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb"
#define VkglTestCase_011940_2 "_func_alpha_func.src.constant_color_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011940, VkglTestCase_011940_1, VkglTestCase_011940_2);

#define VkglTestCase_011941_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb_func"
#define VkglTestCase_011941_2 "_alpha_func.src.constant_color_one_minus_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011941, VkglTestCase_011941_1, VkglTestCase_011941_2);

#define VkglTestCase_011942_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb_fu"
#define VkglTestCase_011942_2 "nc_alpha_func.src.constant_color_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011942, VkglTestCase_011942_1, VkglTestCase_011942_2);

#define VkglTestCase_011943_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb_func_al"
#define VkglTestCase_011943_2 "pha_func.src.constant_color_one_minus_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011943, VkglTestCase_011943_1, VkglTestCase_011943_2);

#define VkglTestCase_011944_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb_fu"
#define VkglTestCase_011944_2 "nc_alpha_func.src.constant_color_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011944, VkglTestCase_011944_1, VkglTestCase_011944_2);

#define VkglTestCase_011945_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb_func_al"
#define VkglTestCase_011945_2 "pha_func.src.constant_color_one_minus_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011945, VkglTestCase_011945_1, VkglTestCase_011945_2);

#define VkglTestCase_011946_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb_func"
#define VkglTestCase_011946_2 "_alpha_func.src.constant_color_src_alpha_saturate"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011946, VkglTestCase_011946_1, VkglTestCase_011946_2);

#define VkglTestCase_011947_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb_fu"
#define VkglTestCase_011947_2 "nc_alpha_func.src.one_minus_constant_color_zero"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011947, VkglTestCase_011947_1, VkglTestCase_011947_2);

#define VkglTestCase_011948_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb_f"
#define VkglTestCase_011948_2 "unc_alpha_func.src.one_minus_constant_color_one"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011948, VkglTestCase_011948_1, VkglTestCase_011948_2);

#define VkglTestCase_011949_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb_func"
#define VkglTestCase_011949_2 "_alpha_func.src.one_minus_constant_color_src_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011949, VkglTestCase_011949_1, VkglTestCase_011949_2);

#define VkglTestCase_011950_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb_func_alph"
#define VkglTestCase_011950_2 "a_func.src.one_minus_constant_color_one_minus_src_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011950, VkglTestCase_011950_1, VkglTestCase_011950_2);

#define VkglTestCase_011951_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb_func"
#define VkglTestCase_011951_2 "_alpha_func.src.one_minus_constant_color_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011951, VkglTestCase_011951_1, VkglTestCase_011951_2);

#define VkglTestCase_011952_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb_func_alph"
#define VkglTestCase_011952_2 "a_func.src.one_minus_constant_color_one_minus_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011952, VkglTestCase_011952_1, VkglTestCase_011952_2);

#define VkglTestCase_011953_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb_func"
#define VkglTestCase_011953_2 "_alpha_func.src.one_minus_constant_color_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011953, VkglTestCase_011953_1, VkglTestCase_011953_2);

#define VkglTestCase_011954_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb_func_alph"
#define VkglTestCase_011954_2 "a_func.src.one_minus_constant_color_one_minus_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011954, VkglTestCase_011954_1, VkglTestCase_011954_2);

#define VkglTestCase_011955_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb_func"
#define VkglTestCase_011955_2 "_alpha_func.src.one_minus_constant_color_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011955, VkglTestCase_011955_1, VkglTestCase_011955_2);

#define VkglTestCase_011956_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb_func_alph"
#define VkglTestCase_011956_2 "a_func.src.one_minus_constant_color_one_minus_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011956, VkglTestCase_011956_1, VkglTestCase_011956_2);

#define VkglTestCase_011957_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb_func_al"
#define VkglTestCase_011957_2 "pha_func.src.one_minus_constant_color_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011957, VkglTestCase_011957_1, VkglTestCase_011957_2);

#define VkglTestCase_011958_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb_func_alpha_f"
#define VkglTestCase_011958_2 "unc.src.one_minus_constant_color_one_minus_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011958, VkglTestCase_011958_1, VkglTestCase_011958_2);

#define VkglTestCase_011959_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb_func_al"
#define VkglTestCase_011959_2 "pha_func.src.one_minus_constant_color_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011959, VkglTestCase_011959_1, VkglTestCase_011959_2);

#define VkglTestCase_011960_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb_func_alpha_f"
#define VkglTestCase_011960_2 "unc.src.one_minus_constant_color_one_minus_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011960, VkglTestCase_011960_1, VkglTestCase_011960_2);

#define VkglTestCase_011961_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb_func_alph"
#define VkglTestCase_011961_2 "a_func.src.one_minus_constant_color_src_alpha_saturate"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011961, VkglTestCase_011961_1, VkglTestCase_011961_2);

#define VkglTestCase_011962_1 "dEQP-GLES2.functional.fragment_ops.blend.r"
#define VkglTestCase_011962_2 "gb_func_alpha_func.src.constant_alpha_zero"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011962, VkglTestCase_011962_1, VkglTestCase_011962_2);

#define VkglTestCase_011963_1 "dEQP-GLES2.functional.fragment_ops.blend."
#define VkglTestCase_011963_2 "rgb_func_alpha_func.src.constant_alpha_one"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011963, VkglTestCase_011963_1, VkglTestCase_011963_2);

#define VkglTestCase_011964_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb"
#define VkglTestCase_011964_2 "_func_alpha_func.src.constant_alpha_src_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011964, VkglTestCase_011964_1, VkglTestCase_011964_2);

#define VkglTestCase_011965_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb_func"
#define VkglTestCase_011965_2 "_alpha_func.src.constant_alpha_one_minus_src_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011965, VkglTestCase_011965_1, VkglTestCase_011965_2);

#define VkglTestCase_011966_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb"
#define VkglTestCase_011966_2 "_func_alpha_func.src.constant_alpha_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011966, VkglTestCase_011966_1, VkglTestCase_011966_2);

#define VkglTestCase_011967_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb_func"
#define VkglTestCase_011967_2 "_alpha_func.src.constant_alpha_one_minus_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011967, VkglTestCase_011967_1, VkglTestCase_011967_2);

#define VkglTestCase_011968_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb"
#define VkglTestCase_011968_2 "_func_alpha_func.src.constant_alpha_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011968, VkglTestCase_011968_1, VkglTestCase_011968_2);

#define VkglTestCase_011969_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb_func"
#define VkglTestCase_011969_2 "_alpha_func.src.constant_alpha_one_minus_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011969, VkglTestCase_011969_1, VkglTestCase_011969_2);

#define VkglTestCase_011970_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb"
#define VkglTestCase_011970_2 "_func_alpha_func.src.constant_alpha_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011970, VkglTestCase_011970_1, VkglTestCase_011970_2);

#define VkglTestCase_011971_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb_func"
#define VkglTestCase_011971_2 "_alpha_func.src.constant_alpha_one_minus_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011971, VkglTestCase_011971_1, VkglTestCase_011971_2);

#define VkglTestCase_011972_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb_fu"
#define VkglTestCase_011972_2 "nc_alpha_func.src.constant_alpha_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011972, VkglTestCase_011972_1, VkglTestCase_011972_2);

#define VkglTestCase_011973_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb_func_al"
#define VkglTestCase_011973_2 "pha_func.src.constant_alpha_one_minus_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011973, VkglTestCase_011973_1, VkglTestCase_011973_2);

#define VkglTestCase_011974_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb_fu"
#define VkglTestCase_011974_2 "nc_alpha_func.src.constant_alpha_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011974, VkglTestCase_011974_1, VkglTestCase_011974_2);

#define VkglTestCase_011975_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb_func_al"
#define VkglTestCase_011975_2 "pha_func.src.constant_alpha_one_minus_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011975, VkglTestCase_011975_1, VkglTestCase_011975_2);

#define VkglTestCase_011976_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb_func"
#define VkglTestCase_011976_2 "_alpha_func.src.constant_alpha_src_alpha_saturate"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011976, VkglTestCase_011976_1, VkglTestCase_011976_2);

#define VkglTestCase_011977_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb_fu"
#define VkglTestCase_011977_2 "nc_alpha_func.src.one_minus_constant_alpha_zero"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011977, VkglTestCase_011977_1, VkglTestCase_011977_2);

#define VkglTestCase_011978_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb_f"
#define VkglTestCase_011978_2 "unc_alpha_func.src.one_minus_constant_alpha_one"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011978, VkglTestCase_011978_1, VkglTestCase_011978_2);

#define VkglTestCase_011979_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb_func"
#define VkglTestCase_011979_2 "_alpha_func.src.one_minus_constant_alpha_src_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011979, VkglTestCase_011979_1, VkglTestCase_011979_2);

#define VkglTestCase_011980_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb_func_alph"
#define VkglTestCase_011980_2 "a_func.src.one_minus_constant_alpha_one_minus_src_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011980, VkglTestCase_011980_1, VkglTestCase_011980_2);

#define VkglTestCase_011981_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb_func"
#define VkglTestCase_011981_2 "_alpha_func.src.one_minus_constant_alpha_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011981, VkglTestCase_011981_1, VkglTestCase_011981_2);

#define VkglTestCase_011982_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb_func_alph"
#define VkglTestCase_011982_2 "a_func.src.one_minus_constant_alpha_one_minus_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011982, VkglTestCase_011982_1, VkglTestCase_011982_2);

#define VkglTestCase_011983_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb_func"
#define VkglTestCase_011983_2 "_alpha_func.src.one_minus_constant_alpha_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011983, VkglTestCase_011983_1, VkglTestCase_011983_2);

#define VkglTestCase_011984_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb_func_alph"
#define VkglTestCase_011984_2 "a_func.src.one_minus_constant_alpha_one_minus_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011984, VkglTestCase_011984_1, VkglTestCase_011984_2);

#define VkglTestCase_011985_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb_func"
#define VkglTestCase_011985_2 "_alpha_func.src.one_minus_constant_alpha_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011985, VkglTestCase_011985_1, VkglTestCase_011985_2);

#define VkglTestCase_011986_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb_func_alph"
#define VkglTestCase_011986_2 "a_func.src.one_minus_constant_alpha_one_minus_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011986, VkglTestCase_011986_1, VkglTestCase_011986_2);

#define VkglTestCase_011987_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb_func_al"
#define VkglTestCase_011987_2 "pha_func.src.one_minus_constant_alpha_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011987, VkglTestCase_011987_1, VkglTestCase_011987_2);

#define VkglTestCase_011988_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb_func_alpha_f"
#define VkglTestCase_011988_2 "unc.src.one_minus_constant_alpha_one_minus_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011988, VkglTestCase_011988_1, VkglTestCase_011988_2);

#define VkglTestCase_011989_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb_func_al"
#define VkglTestCase_011989_2 "pha_func.src.one_minus_constant_alpha_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011989, VkglTestCase_011989_1, VkglTestCase_011989_2);

#define VkglTestCase_011990_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb_func_alpha_f"
#define VkglTestCase_011990_2 "unc.src.one_minus_constant_alpha_one_minus_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011990, VkglTestCase_011990_1, VkglTestCase_011990_2);

#define VkglTestCase_011991_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb_func_alph"
#define VkglTestCase_011991_2 "a_func.src.one_minus_constant_alpha_src_alpha_saturate"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011991, VkglTestCase_011991_1, VkglTestCase_011991_2);

#define VkglTestCase_011992_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb"
#define VkglTestCase_011992_2 "_func_alpha_func.src.src_alpha_saturate_zero"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011992, VkglTestCase_011992_1, VkglTestCase_011992_2);

#define VkglTestCase_011993_1 "dEQP-GLES2.functional.fragment_ops.blend.rg"
#define VkglTestCase_011993_2 "b_func_alpha_func.src.src_alpha_saturate_one"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011993, VkglTestCase_011993_1, VkglTestCase_011993_2);

#define VkglTestCase_011994_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb_f"
#define VkglTestCase_011994_2 "unc_alpha_func.src.src_alpha_saturate_src_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011994, VkglTestCase_011994_1, VkglTestCase_011994_2);

#define VkglTestCase_011995_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb_func_a"
#define VkglTestCase_011995_2 "lpha_func.src.src_alpha_saturate_one_minus_src_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011995, VkglTestCase_011995_1, VkglTestCase_011995_2);

#define VkglTestCase_011996_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb_f"
#define VkglTestCase_011996_2 "unc_alpha_func.src.src_alpha_saturate_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011996, VkglTestCase_011996_1, VkglTestCase_011996_2);

#define VkglTestCase_011997_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb_func_a"
#define VkglTestCase_011997_2 "lpha_func.src.src_alpha_saturate_one_minus_dst_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011997, VkglTestCase_011997_1, VkglTestCase_011997_2);

#define VkglTestCase_011998_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb_f"
#define VkglTestCase_011998_2 "unc_alpha_func.src.src_alpha_saturate_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011998, VkglTestCase_011998_1, VkglTestCase_011998_2);

#define VkglTestCase_011999_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb_func_a"
#define VkglTestCase_011999_2 "lpha_func.src.src_alpha_saturate_one_minus_src_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011999, VkglTestCase_011999_1, VkglTestCase_011999_2);

#define VkglTestCase_012000_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb_f"
#define VkglTestCase_012000_2 "unc_alpha_func.src.src_alpha_saturate_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_012000, VkglTestCase_012000_1, VkglTestCase_012000_2);

#define VkglTestCase_012001_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb_func_a"
#define VkglTestCase_012001_2 "lpha_func.src.src_alpha_saturate_one_minus_dst_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_012001, VkglTestCase_012001_1, VkglTestCase_012001_2);

#define VkglTestCase_012002_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb_func"
#define VkglTestCase_012002_2 "_alpha_func.src.src_alpha_saturate_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_012002, VkglTestCase_012002_1, VkglTestCase_012002_2);

#define VkglTestCase_012003_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb_func_alph"
#define VkglTestCase_012003_2 "a_func.src.src_alpha_saturate_one_minus_constant_color"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_012003, VkglTestCase_012003_1, VkglTestCase_012003_2);

#define VkglTestCase_012004_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb_func"
#define VkglTestCase_012004_2 "_alpha_func.src.src_alpha_saturate_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_012004, VkglTestCase_012004_1, VkglTestCase_012004_2);

#define VkglTestCase_012005_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb_func_alph"
#define VkglTestCase_012005_2 "a_func.src.src_alpha_saturate_one_minus_constant_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_012005, VkglTestCase_012005_1, VkglTestCase_012005_2);

#define VkglTestCase_012006_1 "dEQP-GLES2.functional.fragment_ops.blend.rgb_func_a"
#define VkglTestCase_012006_2 "lpha_func.src.src_alpha_saturate_src_alpha_saturate"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_012006, VkglTestCase_012006_1, VkglTestCase_012006_2);
