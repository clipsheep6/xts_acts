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
#include "../Deqpgles3BaseFunc.h"
#include "../ActsDeqpgles30039TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_038804_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_038804_2 "out.basic.fixed.rgba8_lowp_float"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038804, VkglTestCase_038804_1, VkglTestCase_038804_2);

#define VkglTestCase_038805_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_038805_2 "out.basic.fixed.rgba8_lowp_vec2"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038805, VkglTestCase_038805_1, VkglTestCase_038805_2);

#define VkglTestCase_038806_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_038806_2 "out.basic.fixed.rgba8_lowp_vec3"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038806, VkglTestCase_038806_1, VkglTestCase_038806_2);

#define VkglTestCase_038807_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_038807_2 "out.basic.fixed.rgba8_lowp_vec4"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038807, VkglTestCase_038807_1, VkglTestCase_038807_2);

#define VkglTestCase_038808_1 "dEQP-GLES3.functional.fragment_ou"
#define VkglTestCase_038808_2 "t.basic.fixed.rgba8_mediump_float"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038808, VkglTestCase_038808_1, VkglTestCase_038808_2);

#define VkglTestCase_038809_1 "dEQP-GLES3.functional.fragment_o"
#define VkglTestCase_038809_2 "ut.basic.fixed.rgba8_mediump_vec2"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038809, VkglTestCase_038809_1, VkglTestCase_038809_2);

#define VkglTestCase_038810_1 "dEQP-GLES3.functional.fragment_o"
#define VkglTestCase_038810_2 "ut.basic.fixed.rgba8_mediump_vec3"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038810, VkglTestCase_038810_1, VkglTestCase_038810_2);

#define VkglTestCase_038811_1 "dEQP-GLES3.functional.fragment_o"
#define VkglTestCase_038811_2 "ut.basic.fixed.rgba8_mediump_vec4"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038811, VkglTestCase_038811_1, VkglTestCase_038811_2);

#define VkglTestCase_038812_1 "dEQP-GLES3.functional.fragment_o"
#define VkglTestCase_038812_2 "ut.basic.fixed.rgba8_highp_float"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038812, VkglTestCase_038812_1, VkglTestCase_038812_2);

#define VkglTestCase_038813_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_038813_2 "out.basic.fixed.rgba8_highp_vec2"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038813, VkglTestCase_038813_1, VkglTestCase_038813_2);

#define VkglTestCase_038814_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_038814_2 "out.basic.fixed.rgba8_highp_vec3"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038814, VkglTestCase_038814_1, VkglTestCase_038814_2);

#define VkglTestCase_038815_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_038815_2 "out.basic.fixed.rgba8_highp_vec4"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038815, VkglTestCase_038815_1, VkglTestCase_038815_2);

#define VkglTestCase_038816_1 "dEQP-GLES3.functional.fragment_out."
#define VkglTestCase_038816_2 "basic.fixed.srgb8_alpha8_lowp_float"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038816, VkglTestCase_038816_1, VkglTestCase_038816_2);

#define VkglTestCase_038817_1 "dEQP-GLES3.functional.fragment_out"
#define VkglTestCase_038817_2 ".basic.fixed.srgb8_alpha8_lowp_vec2"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038817, VkglTestCase_038817_1, VkglTestCase_038817_2);

#define VkglTestCase_038818_1 "dEQP-GLES3.functional.fragment_out"
#define VkglTestCase_038818_2 ".basic.fixed.srgb8_alpha8_lowp_vec3"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038818, VkglTestCase_038818_1, VkglTestCase_038818_2);

#define VkglTestCase_038819_1 "dEQP-GLES3.functional.fragment_out"
#define VkglTestCase_038819_2 ".basic.fixed.srgb8_alpha8_lowp_vec4"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038819, VkglTestCase_038819_1, VkglTestCase_038819_2);

#define VkglTestCase_038820_1 "dEQP-GLES3.functional.fragment_out.b"
#define VkglTestCase_038820_2 "asic.fixed.srgb8_alpha8_mediump_float"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038820, VkglTestCase_038820_1, VkglTestCase_038820_2);

#define VkglTestCase_038821_1 "dEQP-GLES3.functional.fragment_out.b"
#define VkglTestCase_038821_2 "asic.fixed.srgb8_alpha8_mediump_vec2"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038821, VkglTestCase_038821_1, VkglTestCase_038821_2);

#define VkglTestCase_038822_1 "dEQP-GLES3.functional.fragment_out.b"
#define VkglTestCase_038822_2 "asic.fixed.srgb8_alpha8_mediump_vec3"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038822, VkglTestCase_038822_1, VkglTestCase_038822_2);

#define VkglTestCase_038823_1 "dEQP-GLES3.functional.fragment_out.b"
#define VkglTestCase_038823_2 "asic.fixed.srgb8_alpha8_mediump_vec4"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038823, VkglTestCase_038823_1, VkglTestCase_038823_2);

#define VkglTestCase_038824_1 "dEQP-GLES3.functional.fragment_out."
#define VkglTestCase_038824_2 "basic.fixed.srgb8_alpha8_highp_float"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038824, VkglTestCase_038824_1, VkglTestCase_038824_2);

#define VkglTestCase_038825_1 "dEQP-GLES3.functional.fragment_out."
#define VkglTestCase_038825_2 "basic.fixed.srgb8_alpha8_highp_vec2"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038825, VkglTestCase_038825_1, VkglTestCase_038825_2);

#define VkglTestCase_038826_1 "dEQP-GLES3.functional.fragment_out."
#define VkglTestCase_038826_2 "basic.fixed.srgb8_alpha8_highp_vec3"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038826, VkglTestCase_038826_1, VkglTestCase_038826_2);

#define VkglTestCase_038827_1 "dEQP-GLES3.functional.fragment_out."
#define VkglTestCase_038827_2 "basic.fixed.srgb8_alpha8_highp_vec4"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038827, VkglTestCase_038827_1, VkglTestCase_038827_2);

#define VkglTestCase_038828_1 "dEQP-GLES3.functional.fragment_ou"
#define VkglTestCase_038828_2 "t.basic.fixed.rgb10_a2_lowp_float"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038828, VkglTestCase_038828_1, VkglTestCase_038828_2);

#define VkglTestCase_038829_1 "dEQP-GLES3.functional.fragment_o"
#define VkglTestCase_038829_2 "ut.basic.fixed.rgb10_a2_lowp_vec2"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038829, VkglTestCase_038829_1, VkglTestCase_038829_2);

#define VkglTestCase_038830_1 "dEQP-GLES3.functional.fragment_o"
#define VkglTestCase_038830_2 "ut.basic.fixed.rgb10_a2_lowp_vec3"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038830, VkglTestCase_038830_1, VkglTestCase_038830_2);

#define VkglTestCase_038831_1 "dEQP-GLES3.functional.fragment_o"
#define VkglTestCase_038831_2 "ut.basic.fixed.rgb10_a2_lowp_vec4"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038831, VkglTestCase_038831_1, VkglTestCase_038831_2);

#define VkglTestCase_038832_1 "dEQP-GLES3.functional.fragment_out"
#define VkglTestCase_038832_2 ".basic.fixed.rgb10_a2_mediump_float"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038832, VkglTestCase_038832_1, VkglTestCase_038832_2);

#define VkglTestCase_038833_1 "dEQP-GLES3.functional.fragment_out"
#define VkglTestCase_038833_2 ".basic.fixed.rgb10_a2_mediump_vec2"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038833, VkglTestCase_038833_1, VkglTestCase_038833_2);

#define VkglTestCase_038834_1 "dEQP-GLES3.functional.fragment_out"
#define VkglTestCase_038834_2 ".basic.fixed.rgb10_a2_mediump_vec3"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038834, VkglTestCase_038834_1, VkglTestCase_038834_2);

#define VkglTestCase_038835_1 "dEQP-GLES3.functional.fragment_out"
#define VkglTestCase_038835_2 ".basic.fixed.rgb10_a2_mediump_vec4"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038835, VkglTestCase_038835_1, VkglTestCase_038835_2);

#define VkglTestCase_038836_1 "dEQP-GLES3.functional.fragment_ou"
#define VkglTestCase_038836_2 "t.basic.fixed.rgb10_a2_highp_float"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038836, VkglTestCase_038836_1, VkglTestCase_038836_2);

#define VkglTestCase_038837_1 "dEQP-GLES3.functional.fragment_ou"
#define VkglTestCase_038837_2 "t.basic.fixed.rgb10_a2_highp_vec2"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038837, VkglTestCase_038837_1, VkglTestCase_038837_2);

#define VkglTestCase_038838_1 "dEQP-GLES3.functional.fragment_ou"
#define VkglTestCase_038838_2 "t.basic.fixed.rgb10_a2_highp_vec3"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038838, VkglTestCase_038838_1, VkglTestCase_038838_2);

#define VkglTestCase_038839_1 "dEQP-GLES3.functional.fragment_ou"
#define VkglTestCase_038839_2 "t.basic.fixed.rgb10_a2_highp_vec4"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038839, VkglTestCase_038839_1, VkglTestCase_038839_2);

#define VkglTestCase_038840_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_038840_2 "out.basic.fixed.rgba4_lowp_float"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038840, VkglTestCase_038840_1, VkglTestCase_038840_2);

#define VkglTestCase_038841_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_038841_2 "out.basic.fixed.rgba4_lowp_vec2"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038841, VkglTestCase_038841_1, VkglTestCase_038841_2);

#define VkglTestCase_038842_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_038842_2 "out.basic.fixed.rgba4_lowp_vec3"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038842, VkglTestCase_038842_1, VkglTestCase_038842_2);

#define VkglTestCase_038843_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_038843_2 "out.basic.fixed.rgba4_lowp_vec4"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038843, VkglTestCase_038843_1, VkglTestCase_038843_2);

#define VkglTestCase_038844_1 "dEQP-GLES3.functional.fragment_ou"
#define VkglTestCase_038844_2 "t.basic.fixed.rgba4_mediump_float"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038844, VkglTestCase_038844_1, VkglTestCase_038844_2);

#define VkglTestCase_038845_1 "dEQP-GLES3.functional.fragment_o"
#define VkglTestCase_038845_2 "ut.basic.fixed.rgba4_mediump_vec2"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038845, VkglTestCase_038845_1, VkglTestCase_038845_2);

#define VkglTestCase_038846_1 "dEQP-GLES3.functional.fragment_o"
#define VkglTestCase_038846_2 "ut.basic.fixed.rgba4_mediump_vec3"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038846, VkglTestCase_038846_1, VkglTestCase_038846_2);

#define VkglTestCase_038847_1 "dEQP-GLES3.functional.fragment_o"
#define VkglTestCase_038847_2 "ut.basic.fixed.rgba4_mediump_vec4"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038847, VkglTestCase_038847_1, VkglTestCase_038847_2);

#define VkglTestCase_038848_1 "dEQP-GLES3.functional.fragment_o"
#define VkglTestCase_038848_2 "ut.basic.fixed.rgba4_highp_float"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038848, VkglTestCase_038848_1, VkglTestCase_038848_2);

#define VkglTestCase_038849_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_038849_2 "out.basic.fixed.rgba4_highp_vec2"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038849, VkglTestCase_038849_1, VkglTestCase_038849_2);

#define VkglTestCase_038850_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_038850_2 "out.basic.fixed.rgba4_highp_vec3"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038850, VkglTestCase_038850_1, VkglTestCase_038850_2);

#define VkglTestCase_038851_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_038851_2 "out.basic.fixed.rgba4_highp_vec4"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038851, VkglTestCase_038851_1, VkglTestCase_038851_2);

#define VkglTestCase_038852_1 "dEQP-GLES3.functional.fragment_o"
#define VkglTestCase_038852_2 "ut.basic.fixed.rgb5_a1_lowp_float"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038852, VkglTestCase_038852_1, VkglTestCase_038852_2);

#define VkglTestCase_038853_1 "dEQP-GLES3.functional.fragment_o"
#define VkglTestCase_038853_2 "ut.basic.fixed.rgb5_a1_lowp_vec2"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038853, VkglTestCase_038853_1, VkglTestCase_038853_2);

#define VkglTestCase_038854_1 "dEQP-GLES3.functional.fragment_o"
#define VkglTestCase_038854_2 "ut.basic.fixed.rgb5_a1_lowp_vec3"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038854, VkglTestCase_038854_1, VkglTestCase_038854_2);

#define VkglTestCase_038855_1 "dEQP-GLES3.functional.fragment_o"
#define VkglTestCase_038855_2 "ut.basic.fixed.rgb5_a1_lowp_vec4"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038855, VkglTestCase_038855_1, VkglTestCase_038855_2);

#define VkglTestCase_038856_1 "dEQP-GLES3.functional.fragment_out"
#define VkglTestCase_038856_2 ".basic.fixed.rgb5_a1_mediump_float"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038856, VkglTestCase_038856_1, VkglTestCase_038856_2);

#define VkglTestCase_038857_1 "dEQP-GLES3.functional.fragment_ou"
#define VkglTestCase_038857_2 "t.basic.fixed.rgb5_a1_mediump_vec2"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038857, VkglTestCase_038857_1, VkglTestCase_038857_2);

#define VkglTestCase_038858_1 "dEQP-GLES3.functional.fragment_ou"
#define VkglTestCase_038858_2 "t.basic.fixed.rgb5_a1_mediump_vec3"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038858, VkglTestCase_038858_1, VkglTestCase_038858_2);

#define VkglTestCase_038859_1 "dEQP-GLES3.functional.fragment_ou"
#define VkglTestCase_038859_2 "t.basic.fixed.rgb5_a1_mediump_vec4"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038859, VkglTestCase_038859_1, VkglTestCase_038859_2);

#define VkglTestCase_038860_1 "dEQP-GLES3.functional.fragment_ou"
#define VkglTestCase_038860_2 "t.basic.fixed.rgb5_a1_highp_float"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038860, VkglTestCase_038860_1, VkglTestCase_038860_2);

#define VkglTestCase_038861_1 "dEQP-GLES3.functional.fragment_o"
#define VkglTestCase_038861_2 "ut.basic.fixed.rgb5_a1_highp_vec2"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038861, VkglTestCase_038861_1, VkglTestCase_038861_2);

#define VkglTestCase_038862_1 "dEQP-GLES3.functional.fragment_o"
#define VkglTestCase_038862_2 "ut.basic.fixed.rgb5_a1_highp_vec3"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038862, VkglTestCase_038862_1, VkglTestCase_038862_2);

#define VkglTestCase_038863_1 "dEQP-GLES3.functional.fragment_o"
#define VkglTestCase_038863_2 "ut.basic.fixed.rgb5_a1_highp_vec4"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038863, VkglTestCase_038863_1, VkglTestCase_038863_2);

#define VkglTestCase_038864_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_038864_2 "out.basic.fixed.rgb8_lowp_float"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038864, VkglTestCase_038864_1, VkglTestCase_038864_2);

#define VkglTestCase_038865_1 "dEQP-GLES3.functional.fragment"
#define VkglTestCase_038865_2 "_out.basic.fixed.rgb8_lowp_vec2"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038865, VkglTestCase_038865_1, VkglTestCase_038865_2);

#define VkglTestCase_038866_1 "dEQP-GLES3.functional.fragment"
#define VkglTestCase_038866_2 "_out.basic.fixed.rgb8_lowp_vec3"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038866, VkglTestCase_038866_1, VkglTestCase_038866_2);

#define VkglTestCase_038867_1 "dEQP-GLES3.functional.fragment"
#define VkglTestCase_038867_2 "_out.basic.fixed.rgb8_lowp_vec4"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038867, VkglTestCase_038867_1, VkglTestCase_038867_2);

#define VkglTestCase_038868_1 "dEQP-GLES3.functional.fragment_o"
#define VkglTestCase_038868_2 "ut.basic.fixed.rgb8_mediump_float"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038868, VkglTestCase_038868_1, VkglTestCase_038868_2);

#define VkglTestCase_038869_1 "dEQP-GLES3.functional.fragment_o"
#define VkglTestCase_038869_2 "ut.basic.fixed.rgb8_mediump_vec2"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038869, VkglTestCase_038869_1, VkglTestCase_038869_2);

#define VkglTestCase_038870_1 "dEQP-GLES3.functional.fragment_o"
#define VkglTestCase_038870_2 "ut.basic.fixed.rgb8_mediump_vec3"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038870, VkglTestCase_038870_1, VkglTestCase_038870_2);

#define VkglTestCase_038871_1 "dEQP-GLES3.functional.fragment_o"
#define VkglTestCase_038871_2 "ut.basic.fixed.rgb8_mediump_vec4"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038871, VkglTestCase_038871_1, VkglTestCase_038871_2);

#define VkglTestCase_038872_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_038872_2 "out.basic.fixed.rgb8_highp_float"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038872, VkglTestCase_038872_1, VkglTestCase_038872_2);

#define VkglTestCase_038873_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_038873_2 "out.basic.fixed.rgb8_highp_vec2"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038873, VkglTestCase_038873_1, VkglTestCase_038873_2);

#define VkglTestCase_038874_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_038874_2 "out.basic.fixed.rgb8_highp_vec3"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038874, VkglTestCase_038874_1, VkglTestCase_038874_2);

#define VkglTestCase_038875_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_038875_2 "out.basic.fixed.rgb8_highp_vec4"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038875, VkglTestCase_038875_1, VkglTestCase_038875_2);

#define VkglTestCase_038876_1 "dEQP-GLES3.functional.fragment_o"
#define VkglTestCase_038876_2 "ut.basic.fixed.rgb565_lowp_float"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038876, VkglTestCase_038876_1, VkglTestCase_038876_2);

#define VkglTestCase_038877_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_038877_2 "out.basic.fixed.rgb565_lowp_vec2"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038877, VkglTestCase_038877_1, VkglTestCase_038877_2);

#define VkglTestCase_038878_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_038878_2 "out.basic.fixed.rgb565_lowp_vec3"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038878, VkglTestCase_038878_1, VkglTestCase_038878_2);

#define VkglTestCase_038879_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_038879_2 "out.basic.fixed.rgb565_lowp_vec4"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038879, VkglTestCase_038879_1, VkglTestCase_038879_2);

#define VkglTestCase_038880_1 "dEQP-GLES3.functional.fragment_ou"
#define VkglTestCase_038880_2 "t.basic.fixed.rgb565_mediump_float"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038880, VkglTestCase_038880_1, VkglTestCase_038880_2);

#define VkglTestCase_038881_1 "dEQP-GLES3.functional.fragment_ou"
#define VkglTestCase_038881_2 "t.basic.fixed.rgb565_mediump_vec2"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038881, VkglTestCase_038881_1, VkglTestCase_038881_2);

#define VkglTestCase_038882_1 "dEQP-GLES3.functional.fragment_ou"
#define VkglTestCase_038882_2 "t.basic.fixed.rgb565_mediump_vec3"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038882, VkglTestCase_038882_1, VkglTestCase_038882_2);

#define VkglTestCase_038883_1 "dEQP-GLES3.functional.fragment_ou"
#define VkglTestCase_038883_2 "t.basic.fixed.rgb565_mediump_vec4"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038883, VkglTestCase_038883_1, VkglTestCase_038883_2);

#define VkglTestCase_038884_1 "dEQP-GLES3.functional.fragment_o"
#define VkglTestCase_038884_2 "ut.basic.fixed.rgb565_highp_float"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038884, VkglTestCase_038884_1, VkglTestCase_038884_2);

#define VkglTestCase_038885_1 "dEQP-GLES3.functional.fragment_o"
#define VkglTestCase_038885_2 "ut.basic.fixed.rgb565_highp_vec2"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038885, VkglTestCase_038885_1, VkglTestCase_038885_2);

#define VkglTestCase_038886_1 "dEQP-GLES3.functional.fragment_o"
#define VkglTestCase_038886_2 "ut.basic.fixed.rgb565_highp_vec3"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038886, VkglTestCase_038886_1, VkglTestCase_038886_2);

#define VkglTestCase_038887_1 "dEQP-GLES3.functional.fragment_o"
#define VkglTestCase_038887_2 "ut.basic.fixed.rgb565_highp_vec4"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038887, VkglTestCase_038887_1, VkglTestCase_038887_2);

#define VkglTestCase_038888_1 "dEQP-GLES3.functional.fragment"
#define VkglTestCase_038888_2 "_out.basic.fixed.rg8_lowp_float"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038888, VkglTestCase_038888_1, VkglTestCase_038888_2);

#define VkglTestCase_038889_1 "dEQP-GLES3.functional.fragment"
#define VkglTestCase_038889_2 "_out.basic.fixed.rg8_lowp_vec2"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038889, VkglTestCase_038889_1, VkglTestCase_038889_2);

#define VkglTestCase_038890_1 "dEQP-GLES3.functional.fragment"
#define VkglTestCase_038890_2 "_out.basic.fixed.rg8_lowp_vec3"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038890, VkglTestCase_038890_1, VkglTestCase_038890_2);

#define VkglTestCase_038891_1 "dEQP-GLES3.functional.fragment"
#define VkglTestCase_038891_2 "_out.basic.fixed.rg8_lowp_vec4"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038891, VkglTestCase_038891_1, VkglTestCase_038891_2);

#define VkglTestCase_038892_1 "dEQP-GLES3.functional.fragment_o"
#define VkglTestCase_038892_2 "ut.basic.fixed.rg8_mediump_float"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038892, VkglTestCase_038892_1, VkglTestCase_038892_2);

#define VkglTestCase_038893_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_038893_2 "out.basic.fixed.rg8_mediump_vec2"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038893, VkglTestCase_038893_1, VkglTestCase_038893_2);

#define VkglTestCase_038894_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_038894_2 "out.basic.fixed.rg8_mediump_vec3"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038894, VkglTestCase_038894_1, VkglTestCase_038894_2);

#define VkglTestCase_038895_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_038895_2 "out.basic.fixed.rg8_mediump_vec4"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038895, VkglTestCase_038895_1, VkglTestCase_038895_2);

#define VkglTestCase_038896_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_038896_2 "out.basic.fixed.rg8_highp_float"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038896, VkglTestCase_038896_1, VkglTestCase_038896_2);

#define VkglTestCase_038897_1 "dEQP-GLES3.functional.fragment"
#define VkglTestCase_038897_2 "_out.basic.fixed.rg8_highp_vec2"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038897, VkglTestCase_038897_1, VkglTestCase_038897_2);

#define VkglTestCase_038898_1 "dEQP-GLES3.functional.fragment"
#define VkglTestCase_038898_2 "_out.basic.fixed.rg8_highp_vec3"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038898, VkglTestCase_038898_1, VkglTestCase_038898_2);

#define VkglTestCase_038899_1 "dEQP-GLES3.functional.fragment"
#define VkglTestCase_038899_2 "_out.basic.fixed.rg8_highp_vec4"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038899, VkglTestCase_038899_1, VkglTestCase_038899_2);

#define VkglTestCase_038900_1 "dEQP-GLES3.functional.fragment"
#define VkglTestCase_038900_2 "_out.basic.fixed.r8_lowp_float"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038900, VkglTestCase_038900_1, VkglTestCase_038900_2);

#define VkglTestCase_038901_1 "dEQP-GLES3.functional.fragmen"
#define VkglTestCase_038901_2 "t_out.basic.fixed.r8_lowp_vec2"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038901, VkglTestCase_038901_1, VkglTestCase_038901_2);

#define VkglTestCase_038902_1 "dEQP-GLES3.functional.fragmen"
#define VkglTestCase_038902_2 "t_out.basic.fixed.r8_lowp_vec3"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038902, VkglTestCase_038902_1, VkglTestCase_038902_2);

#define VkglTestCase_038903_1 "dEQP-GLES3.functional.fragmen"
#define VkglTestCase_038903_2 "t_out.basic.fixed.r8_lowp_vec4"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038903, VkglTestCase_038903_1, VkglTestCase_038903_2);

#define VkglTestCase_038904_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_038904_2 "out.basic.fixed.r8_mediump_float"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038904, VkglTestCase_038904_1, VkglTestCase_038904_2);

#define VkglTestCase_038905_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_038905_2 "out.basic.fixed.r8_mediump_vec2"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038905, VkglTestCase_038905_1, VkglTestCase_038905_2);

#define VkglTestCase_038906_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_038906_2 "out.basic.fixed.r8_mediump_vec3"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038906, VkglTestCase_038906_1, VkglTestCase_038906_2);

#define VkglTestCase_038907_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_038907_2 "out.basic.fixed.r8_mediump_vec4"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038907, VkglTestCase_038907_1, VkglTestCase_038907_2);

#define VkglTestCase_038908_1 "dEQP-GLES3.functional.fragment"
#define VkglTestCase_038908_2 "_out.basic.fixed.r8_highp_float"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038908, VkglTestCase_038908_1, VkglTestCase_038908_2);

#define VkglTestCase_038909_1 "dEQP-GLES3.functional.fragment"
#define VkglTestCase_038909_2 "_out.basic.fixed.r8_highp_vec2"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038909, VkglTestCase_038909_1, VkglTestCase_038909_2);

#define VkglTestCase_038910_1 "dEQP-GLES3.functional.fragment"
#define VkglTestCase_038910_2 "_out.basic.fixed.r8_highp_vec3"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038910, VkglTestCase_038910_1, VkglTestCase_038910_2);

#define VkglTestCase_038911_1 "dEQP-GLES3.functional.fragment"
#define VkglTestCase_038911_2 "_out.basic.fixed.r8_highp_vec4"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038911, VkglTestCase_038911_1, VkglTestCase_038911_2);
