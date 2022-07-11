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
#include "../ActsDeqpgles310001TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_000805_1 "dEQP-GLES31.functional.shaders.builtin_"
#define VkglTestCase_000805_2 "functions.common.ldexp.float_lowp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000805, VkglTestCase_000805_1, VkglTestCase_000805_2);

#define VkglTestCase_000806_1 "dEQP-GLES31.functional.shaders.builtin_f"
#define VkglTestCase_000806_2 "unctions.common.ldexp.float_lowp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000806, VkglTestCase_000806_1, VkglTestCase_000806_2);

#define VkglTestCase_000807_1 "dEQP-GLES31.functional.shaders.builtin_f"
#define VkglTestCase_000807_2 "unctions.common.ldexp.float_lowp_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000807, VkglTestCase_000807_1, VkglTestCase_000807_2);

#define VkglTestCase_000808_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_000808_2 "ctions.common.ldexp.float_lowp_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000808, VkglTestCase_000808_1, VkglTestCase_000808_2);

#define VkglTestCase_000809_1 "dEQP-GLES31.functional.shaders.builtin_fu"
#define VkglTestCase_000809_2 "nctions.common.ldexp.float_lowp_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000809, VkglTestCase_000809_1, VkglTestCase_000809_2);

#define VkglTestCase_000810_1 "dEQP-GLES31.functional.shaders.builtin_f"
#define VkglTestCase_000810_2 "unctions.common.ldexp.float_lowp_compute"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000810, VkglTestCase_000810_1, VkglTestCase_000810_2);

#define VkglTestCase_000811_1 "dEQP-GLES31.functional.shaders.builtin_fu"
#define VkglTestCase_000811_2 "nctions.common.ldexp.float_mediump_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000811, VkglTestCase_000811_1, VkglTestCase_000811_2);

#define VkglTestCase_000812_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_000812_2 "ctions.common.ldexp.float_mediump_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000812, VkglTestCase_000812_1, VkglTestCase_000812_2);

#define VkglTestCase_000813_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_000813_2 "ctions.common.ldexp.float_mediump_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000813, VkglTestCase_000813_1, VkglTestCase_000813_2);

#define VkglTestCase_000814_1 "dEQP-GLES31.functional.shaders.builtin_funct"
#define VkglTestCase_000814_2 "ions.common.ldexp.float_mediump_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000814, VkglTestCase_000814_1, VkglTestCase_000814_2);

#define VkglTestCase_000815_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_000815_2 "ctions.common.ldexp.float_mediump_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000815, VkglTestCase_000815_1, VkglTestCase_000815_2);

#define VkglTestCase_000816_1 "dEQP-GLES31.functional.shaders.builtin_fu"
#define VkglTestCase_000816_2 "nctions.common.ldexp.float_mediump_compute"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000816, VkglTestCase_000816_1, VkglTestCase_000816_2);

#define VkglTestCase_000817_1 "dEQP-GLES31.functional.shaders.builtin_f"
#define VkglTestCase_000817_2 "unctions.common.ldexp.float_highp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000817, VkglTestCase_000817_1, VkglTestCase_000817_2);

#define VkglTestCase_000818_1 "dEQP-GLES31.functional.shaders.builtin_fu"
#define VkglTestCase_000818_2 "nctions.common.ldexp.float_highp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000818, VkglTestCase_000818_1, VkglTestCase_000818_2);

#define VkglTestCase_000819_1 "dEQP-GLES31.functional.shaders.builtin_fu"
#define VkglTestCase_000819_2 "nctions.common.ldexp.float_highp_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000819, VkglTestCase_000819_1, VkglTestCase_000819_2);

#define VkglTestCase_000820_1 "dEQP-GLES31.functional.shaders.builtin_func"
#define VkglTestCase_000820_2 "tions.common.ldexp.float_highp_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000820, VkglTestCase_000820_1, VkglTestCase_000820_2);

#define VkglTestCase_000821_1 "dEQP-GLES31.functional.shaders.builtin_fu"
#define VkglTestCase_000821_2 "nctions.common.ldexp.float_highp_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000821, VkglTestCase_000821_1, VkglTestCase_000821_2);

#define VkglTestCase_000822_1 "dEQP-GLES31.functional.shaders.builtin_f"
#define VkglTestCase_000822_2 "unctions.common.ldexp.float_highp_compute"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000822, VkglTestCase_000822_1, VkglTestCase_000822_2);

#define VkglTestCase_000823_1 "dEQP-GLES31.functional.shaders.builtin_"
#define VkglTestCase_000823_2 "functions.common.ldexp.vec2_lowp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000823, VkglTestCase_000823_1, VkglTestCase_000823_2);

#define VkglTestCase_000824_1 "dEQP-GLES31.functional.shaders.builtin_f"
#define VkglTestCase_000824_2 "unctions.common.ldexp.vec2_lowp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000824, VkglTestCase_000824_1, VkglTestCase_000824_2);

#define VkglTestCase_000825_1 "dEQP-GLES31.functional.shaders.builtin_f"
#define VkglTestCase_000825_2 "unctions.common.ldexp.vec2_lowp_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000825, VkglTestCase_000825_1, VkglTestCase_000825_2);

#define VkglTestCase_000826_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_000826_2 "ctions.common.ldexp.vec2_lowp_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000826, VkglTestCase_000826_1, VkglTestCase_000826_2);

#define VkglTestCase_000827_1 "dEQP-GLES31.functional.shaders.builtin_f"
#define VkglTestCase_000827_2 "unctions.common.ldexp.vec2_lowp_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000827, VkglTestCase_000827_1, VkglTestCase_000827_2);

#define VkglTestCase_000828_1 "dEQP-GLES31.functional.shaders.builtin_"
#define VkglTestCase_000828_2 "functions.common.ldexp.vec2_lowp_compute"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000828, VkglTestCase_000828_1, VkglTestCase_000828_2);

#define VkglTestCase_000829_1 "dEQP-GLES31.functional.shaders.builtin_f"
#define VkglTestCase_000829_2 "unctions.common.ldexp.vec2_mediump_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000829, VkglTestCase_000829_1, VkglTestCase_000829_2);

#define VkglTestCase_000830_1 "dEQP-GLES31.functional.shaders.builtin_fu"
#define VkglTestCase_000830_2 "nctions.common.ldexp.vec2_mediump_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000830, VkglTestCase_000830_1, VkglTestCase_000830_2);

#define VkglTestCase_000831_1 "dEQP-GLES31.functional.shaders.builtin_fu"
#define VkglTestCase_000831_2 "nctions.common.ldexp.vec2_mediump_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000831, VkglTestCase_000831_1, VkglTestCase_000831_2);

#define VkglTestCase_000832_1 "dEQP-GLES31.functional.shaders.builtin_func"
#define VkglTestCase_000832_2 "tions.common.ldexp.vec2_mediump_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000832, VkglTestCase_000832_1, VkglTestCase_000832_2);

#define VkglTestCase_000833_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_000833_2 "ctions.common.ldexp.vec2_mediump_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000833, VkglTestCase_000833_1, VkglTestCase_000833_2);

#define VkglTestCase_000834_1 "dEQP-GLES31.functional.shaders.builtin_fu"
#define VkglTestCase_000834_2 "nctions.common.ldexp.vec2_mediump_compute"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000834, VkglTestCase_000834_1, VkglTestCase_000834_2);

#define VkglTestCase_000835_1 "dEQP-GLES31.functional.shaders.builtin_"
#define VkglTestCase_000835_2 "functions.common.ldexp.vec2_highp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000835, VkglTestCase_000835_1, VkglTestCase_000835_2);

#define VkglTestCase_000836_1 "dEQP-GLES31.functional.shaders.builtin_f"
#define VkglTestCase_000836_2 "unctions.common.ldexp.vec2_highp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000836, VkglTestCase_000836_1, VkglTestCase_000836_2);

#define VkglTestCase_000837_1 "dEQP-GLES31.functional.shaders.builtin_f"
#define VkglTestCase_000837_2 "unctions.common.ldexp.vec2_highp_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000837, VkglTestCase_000837_1, VkglTestCase_000837_2);

#define VkglTestCase_000838_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_000838_2 "ctions.common.ldexp.vec2_highp_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000838, VkglTestCase_000838_1, VkglTestCase_000838_2);

#define VkglTestCase_000839_1 "dEQP-GLES31.functional.shaders.builtin_fu"
#define VkglTestCase_000839_2 "nctions.common.ldexp.vec2_highp_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000839, VkglTestCase_000839_1, VkglTestCase_000839_2);

#define VkglTestCase_000840_1 "dEQP-GLES31.functional.shaders.builtin_f"
#define VkglTestCase_000840_2 "unctions.common.ldexp.vec2_highp_compute"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000840, VkglTestCase_000840_1, VkglTestCase_000840_2);

#define VkglTestCase_000841_1 "dEQP-GLES31.functional.shaders.builtin_"
#define VkglTestCase_000841_2 "functions.common.ldexp.vec3_lowp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000841, VkglTestCase_000841_1, VkglTestCase_000841_2);

#define VkglTestCase_000842_1 "dEQP-GLES31.functional.shaders.builtin_f"
#define VkglTestCase_000842_2 "unctions.common.ldexp.vec3_lowp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000842, VkglTestCase_000842_1, VkglTestCase_000842_2);

#define VkglTestCase_000843_1 "dEQP-GLES31.functional.shaders.builtin_f"
#define VkglTestCase_000843_2 "unctions.common.ldexp.vec3_lowp_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000843, VkglTestCase_000843_1, VkglTestCase_000843_2);

#define VkglTestCase_000844_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_000844_2 "ctions.common.ldexp.vec3_lowp_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000844, VkglTestCase_000844_1, VkglTestCase_000844_2);

#define VkglTestCase_000845_1 "dEQP-GLES31.functional.shaders.builtin_f"
#define VkglTestCase_000845_2 "unctions.common.ldexp.vec3_lowp_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000845, VkglTestCase_000845_1, VkglTestCase_000845_2);

#define VkglTestCase_000846_1 "dEQP-GLES31.functional.shaders.builtin_"
#define VkglTestCase_000846_2 "functions.common.ldexp.vec3_lowp_compute"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000846, VkglTestCase_000846_1, VkglTestCase_000846_2);

#define VkglTestCase_000847_1 "dEQP-GLES31.functional.shaders.builtin_f"
#define VkglTestCase_000847_2 "unctions.common.ldexp.vec3_mediump_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000847, VkglTestCase_000847_1, VkglTestCase_000847_2);

#define VkglTestCase_000848_1 "dEQP-GLES31.functional.shaders.builtin_fu"
#define VkglTestCase_000848_2 "nctions.common.ldexp.vec3_mediump_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000848, VkglTestCase_000848_1, VkglTestCase_000848_2);

#define VkglTestCase_000849_1 "dEQP-GLES31.functional.shaders.builtin_fu"
#define VkglTestCase_000849_2 "nctions.common.ldexp.vec3_mediump_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000849, VkglTestCase_000849_1, VkglTestCase_000849_2);

#define VkglTestCase_000850_1 "dEQP-GLES31.functional.shaders.builtin_func"
#define VkglTestCase_000850_2 "tions.common.ldexp.vec3_mediump_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000850, VkglTestCase_000850_1, VkglTestCase_000850_2);

#define VkglTestCase_000851_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_000851_2 "ctions.common.ldexp.vec3_mediump_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000851, VkglTestCase_000851_1, VkglTestCase_000851_2);

#define VkglTestCase_000852_1 "dEQP-GLES31.functional.shaders.builtin_fu"
#define VkglTestCase_000852_2 "nctions.common.ldexp.vec3_mediump_compute"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000852, VkglTestCase_000852_1, VkglTestCase_000852_2);

#define VkglTestCase_000853_1 "dEQP-GLES31.functional.shaders.builtin_"
#define VkglTestCase_000853_2 "functions.common.ldexp.vec3_highp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000853, VkglTestCase_000853_1, VkglTestCase_000853_2);

#define VkglTestCase_000854_1 "dEQP-GLES31.functional.shaders.builtin_f"
#define VkglTestCase_000854_2 "unctions.common.ldexp.vec3_highp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000854, VkglTestCase_000854_1, VkglTestCase_000854_2);

#define VkglTestCase_000855_1 "dEQP-GLES31.functional.shaders.builtin_f"
#define VkglTestCase_000855_2 "unctions.common.ldexp.vec3_highp_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000855, VkglTestCase_000855_1, VkglTestCase_000855_2);

#define VkglTestCase_000856_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_000856_2 "ctions.common.ldexp.vec3_highp_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000856, VkglTestCase_000856_1, VkglTestCase_000856_2);

#define VkglTestCase_000857_1 "dEQP-GLES31.functional.shaders.builtin_fu"
#define VkglTestCase_000857_2 "nctions.common.ldexp.vec3_highp_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000857, VkglTestCase_000857_1, VkglTestCase_000857_2);

#define VkglTestCase_000858_1 "dEQP-GLES31.functional.shaders.builtin_f"
#define VkglTestCase_000858_2 "unctions.common.ldexp.vec3_highp_compute"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000858, VkglTestCase_000858_1, VkglTestCase_000858_2);

#define VkglTestCase_000859_1 "dEQP-GLES31.functional.shaders.builtin_"
#define VkglTestCase_000859_2 "functions.common.ldexp.vec4_lowp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000859, VkglTestCase_000859_1, VkglTestCase_000859_2);

#define VkglTestCase_000860_1 "dEQP-GLES31.functional.shaders.builtin_f"
#define VkglTestCase_000860_2 "unctions.common.ldexp.vec4_lowp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000860, VkglTestCase_000860_1, VkglTestCase_000860_2);

#define VkglTestCase_000861_1 "dEQP-GLES31.functional.shaders.builtin_f"
#define VkglTestCase_000861_2 "unctions.common.ldexp.vec4_lowp_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000861, VkglTestCase_000861_1, VkglTestCase_000861_2);

#define VkglTestCase_000862_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_000862_2 "ctions.common.ldexp.vec4_lowp_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000862, VkglTestCase_000862_1, VkglTestCase_000862_2);

#define VkglTestCase_000863_1 "dEQP-GLES31.functional.shaders.builtin_f"
#define VkglTestCase_000863_2 "unctions.common.ldexp.vec4_lowp_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000863, VkglTestCase_000863_1, VkglTestCase_000863_2);

#define VkglTestCase_000864_1 "dEQP-GLES31.functional.shaders.builtin_"
#define VkglTestCase_000864_2 "functions.common.ldexp.vec4_lowp_compute"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000864, VkglTestCase_000864_1, VkglTestCase_000864_2);

#define VkglTestCase_000865_1 "dEQP-GLES31.functional.shaders.builtin_f"
#define VkglTestCase_000865_2 "unctions.common.ldexp.vec4_mediump_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000865, VkglTestCase_000865_1, VkglTestCase_000865_2);

#define VkglTestCase_000866_1 "dEQP-GLES31.functional.shaders.builtin_fu"
#define VkglTestCase_000866_2 "nctions.common.ldexp.vec4_mediump_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000866, VkglTestCase_000866_1, VkglTestCase_000866_2);

#define VkglTestCase_000867_1 "dEQP-GLES31.functional.shaders.builtin_fu"
#define VkglTestCase_000867_2 "nctions.common.ldexp.vec4_mediump_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000867, VkglTestCase_000867_1, VkglTestCase_000867_2);

#define VkglTestCase_000868_1 "dEQP-GLES31.functional.shaders.builtin_func"
#define VkglTestCase_000868_2 "tions.common.ldexp.vec4_mediump_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000868, VkglTestCase_000868_1, VkglTestCase_000868_2);

#define VkglTestCase_000869_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_000869_2 "ctions.common.ldexp.vec4_mediump_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000869, VkglTestCase_000869_1, VkglTestCase_000869_2);

#define VkglTestCase_000870_1 "dEQP-GLES31.functional.shaders.builtin_fu"
#define VkglTestCase_000870_2 "nctions.common.ldexp.vec4_mediump_compute"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000870, VkglTestCase_000870_1, VkglTestCase_000870_2);

#define VkglTestCase_000871_1 "dEQP-GLES31.functional.shaders.builtin_"
#define VkglTestCase_000871_2 "functions.common.ldexp.vec4_highp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000871, VkglTestCase_000871_1, VkglTestCase_000871_2);

#define VkglTestCase_000872_1 "dEQP-GLES31.functional.shaders.builtin_f"
#define VkglTestCase_000872_2 "unctions.common.ldexp.vec4_highp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000872, VkglTestCase_000872_1, VkglTestCase_000872_2);

#define VkglTestCase_000873_1 "dEQP-GLES31.functional.shaders.builtin_f"
#define VkglTestCase_000873_2 "unctions.common.ldexp.vec4_highp_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000873, VkglTestCase_000873_1, VkglTestCase_000873_2);

#define VkglTestCase_000874_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_000874_2 "ctions.common.ldexp.vec4_highp_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000874, VkglTestCase_000874_1, VkglTestCase_000874_2);

#define VkglTestCase_000875_1 "dEQP-GLES31.functional.shaders.builtin_fu"
#define VkglTestCase_000875_2 "nctions.common.ldexp.vec4_highp_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000875, VkglTestCase_000875_1, VkglTestCase_000875_2);

#define VkglTestCase_000876_1 "dEQP-GLES31.functional.shaders.builtin_f"
#define VkglTestCase_000876_2 "unctions.common.ldexp.vec4_highp_compute"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000876, VkglTestCase_000876_1, VkglTestCase_000876_2);
