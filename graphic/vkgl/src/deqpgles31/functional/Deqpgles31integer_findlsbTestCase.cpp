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
#include "../ActsDeqpgles310002TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_001809_1 "dEQP-GLES31.functional.shaders.builtin_f"
#define VkglTestCase_001809_2 "unctions.integer.findlsb.int_lowp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001809, VkglTestCase_001809_1, VkglTestCase_001809_2);

#define VkglTestCase_001810_1 "dEQP-GLES31.functional.shaders.builtin_fu"
#define VkglTestCase_001810_2 "nctions.integer.findlsb.int_lowp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001810, VkglTestCase_001810_1, VkglTestCase_001810_2);

#define VkglTestCase_001811_1 "dEQP-GLES31.functional.shaders.builtin_fu"
#define VkglTestCase_001811_2 "nctions.integer.findlsb.int_lowp_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001811, VkglTestCase_001811_1, VkglTestCase_001811_2);

#define VkglTestCase_001812_1 "dEQP-GLES31.functional.shaders.builtin_func"
#define VkglTestCase_001812_2 "tions.integer.findlsb.int_lowp_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001812, VkglTestCase_001812_1, VkglTestCase_001812_2);

#define VkglTestCase_001813_1 "dEQP-GLES31.functional.shaders.builtin_fu"
#define VkglTestCase_001813_2 "nctions.integer.findlsb.int_lowp_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001813, VkglTestCase_001813_1, VkglTestCase_001813_2);

#define VkglTestCase_001814_1 "dEQP-GLES31.functional.shaders.builtin_f"
#define VkglTestCase_001814_2 "unctions.integer.findlsb.int_lowp_compute"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001814, VkglTestCase_001814_1, VkglTestCase_001814_2);

#define VkglTestCase_001815_1 "dEQP-GLES31.functional.shaders.builtin_fu"
#define VkglTestCase_001815_2 "nctions.integer.findlsb.int_mediump_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001815, VkglTestCase_001815_1, VkglTestCase_001815_2);

#define VkglTestCase_001816_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_001816_2 "ctions.integer.findlsb.int_mediump_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001816, VkglTestCase_001816_1, VkglTestCase_001816_2);

#define VkglTestCase_001817_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_001817_2 "ctions.integer.findlsb.int_mediump_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001817, VkglTestCase_001817_1, VkglTestCase_001817_2);

#define VkglTestCase_001818_1 "dEQP-GLES31.functional.shaders.builtin_funct"
#define VkglTestCase_001818_2 "ions.integer.findlsb.int_mediump_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001818, VkglTestCase_001818_1, VkglTestCase_001818_2);

#define VkglTestCase_001819_1 "dEQP-GLES31.functional.shaders.builtin_func"
#define VkglTestCase_001819_2 "tions.integer.findlsb.int_mediump_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001819, VkglTestCase_001819_1, VkglTestCase_001819_2);

#define VkglTestCase_001820_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_001820_2 "ctions.integer.findlsb.int_mediump_compute"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001820, VkglTestCase_001820_1, VkglTestCase_001820_2);

#define VkglTestCase_001821_1 "dEQP-GLES31.functional.shaders.builtin_f"
#define VkglTestCase_001821_2 "unctions.integer.findlsb.int_highp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001821, VkglTestCase_001821_1, VkglTestCase_001821_2);

#define VkglTestCase_001822_1 "dEQP-GLES31.functional.shaders.builtin_fu"
#define VkglTestCase_001822_2 "nctions.integer.findlsb.int_highp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001822, VkglTestCase_001822_1, VkglTestCase_001822_2);

#define VkglTestCase_001823_1 "dEQP-GLES31.functional.shaders.builtin_fu"
#define VkglTestCase_001823_2 "nctions.integer.findlsb.int_highp_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001823, VkglTestCase_001823_1, VkglTestCase_001823_2);

#define VkglTestCase_001824_1 "dEQP-GLES31.functional.shaders.builtin_func"
#define VkglTestCase_001824_2 "tions.integer.findlsb.int_highp_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001824, VkglTestCase_001824_1, VkglTestCase_001824_2);

#define VkglTestCase_001825_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_001825_2 "ctions.integer.findlsb.int_highp_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001825, VkglTestCase_001825_1, VkglTestCase_001825_2);

#define VkglTestCase_001826_1 "dEQP-GLES31.functional.shaders.builtin_fu"
#define VkglTestCase_001826_2 "nctions.integer.findlsb.int_highp_compute"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001826, VkglTestCase_001826_1, VkglTestCase_001826_2);

#define VkglTestCase_001827_1 "dEQP-GLES31.functional.shaders.builtin_fu"
#define VkglTestCase_001827_2 "nctions.integer.findlsb.ivec2_lowp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001827, VkglTestCase_001827_1, VkglTestCase_001827_2);

#define VkglTestCase_001828_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_001828_2 "ctions.integer.findlsb.ivec2_lowp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001828, VkglTestCase_001828_1, VkglTestCase_001828_2);

#define VkglTestCase_001829_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_001829_2 "ctions.integer.findlsb.ivec2_lowp_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001829, VkglTestCase_001829_1, VkglTestCase_001829_2);

#define VkglTestCase_001830_1 "dEQP-GLES31.functional.shaders.builtin_funct"
#define VkglTestCase_001830_2 "ions.integer.findlsb.ivec2_lowp_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001830, VkglTestCase_001830_1, VkglTestCase_001830_2);

#define VkglTestCase_001831_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_001831_2 "ctions.integer.findlsb.ivec2_lowp_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001831, VkglTestCase_001831_1, VkglTestCase_001831_2);

#define VkglTestCase_001832_1 "dEQP-GLES31.functional.shaders.builtin_fu"
#define VkglTestCase_001832_2 "nctions.integer.findlsb.ivec2_lowp_compute"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001832, VkglTestCase_001832_1, VkglTestCase_001832_2);

#define VkglTestCase_001833_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_001833_2 "ctions.integer.findlsb.ivec2_mediump_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001833, VkglTestCase_001833_1, VkglTestCase_001833_2);

#define VkglTestCase_001834_1 "dEQP-GLES31.functional.shaders.builtin_func"
#define VkglTestCase_001834_2 "tions.integer.findlsb.ivec2_mediump_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001834, VkglTestCase_001834_1, VkglTestCase_001834_2);

#define VkglTestCase_001835_1 "dEQP-GLES31.functional.shaders.builtin_func"
#define VkglTestCase_001835_2 "tions.integer.findlsb.ivec2_mediump_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001835, VkglTestCase_001835_1, VkglTestCase_001835_2);

#define VkglTestCase_001836_1 "dEQP-GLES31.functional.shaders.builtin_functi"
#define VkglTestCase_001836_2 "ons.integer.findlsb.ivec2_mediump_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001836, VkglTestCase_001836_1, VkglTestCase_001836_2);

#define VkglTestCase_001837_1 "dEQP-GLES31.functional.shaders.builtin_funct"
#define VkglTestCase_001837_2 "ions.integer.findlsb.ivec2_mediump_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001837, VkglTestCase_001837_1, VkglTestCase_001837_2);

#define VkglTestCase_001838_1 "dEQP-GLES31.functional.shaders.builtin_func"
#define VkglTestCase_001838_2 "tions.integer.findlsb.ivec2_mediump_compute"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001838, VkglTestCase_001838_1, VkglTestCase_001838_2);

#define VkglTestCase_001839_1 "dEQP-GLES31.functional.shaders.builtin_fu"
#define VkglTestCase_001839_2 "nctions.integer.findlsb.ivec2_highp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001839, VkglTestCase_001839_1, VkglTestCase_001839_2);

#define VkglTestCase_001840_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_001840_2 "ctions.integer.findlsb.ivec2_highp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001840, VkglTestCase_001840_1, VkglTestCase_001840_2);

#define VkglTestCase_001841_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_001841_2 "ctions.integer.findlsb.ivec2_highp_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001841, VkglTestCase_001841_1, VkglTestCase_001841_2);

#define VkglTestCase_001842_1 "dEQP-GLES31.functional.shaders.builtin_funct"
#define VkglTestCase_001842_2 "ions.integer.findlsb.ivec2_highp_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001842, VkglTestCase_001842_1, VkglTestCase_001842_2);

#define VkglTestCase_001843_1 "dEQP-GLES31.functional.shaders.builtin_func"
#define VkglTestCase_001843_2 "tions.integer.findlsb.ivec2_highp_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001843, VkglTestCase_001843_1, VkglTestCase_001843_2);

#define VkglTestCase_001844_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_001844_2 "ctions.integer.findlsb.ivec2_highp_compute"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001844, VkglTestCase_001844_1, VkglTestCase_001844_2);

#define VkglTestCase_001845_1 "dEQP-GLES31.functional.shaders.builtin_fu"
#define VkglTestCase_001845_2 "nctions.integer.findlsb.ivec3_lowp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001845, VkglTestCase_001845_1, VkglTestCase_001845_2);

#define VkglTestCase_001846_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_001846_2 "ctions.integer.findlsb.ivec3_lowp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001846, VkglTestCase_001846_1, VkglTestCase_001846_2);

#define VkglTestCase_001847_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_001847_2 "ctions.integer.findlsb.ivec3_lowp_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001847, VkglTestCase_001847_1, VkglTestCase_001847_2);

#define VkglTestCase_001848_1 "dEQP-GLES31.functional.shaders.builtin_funct"
#define VkglTestCase_001848_2 "ions.integer.findlsb.ivec3_lowp_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001848, VkglTestCase_001848_1, VkglTestCase_001848_2);

#define VkglTestCase_001849_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_001849_2 "ctions.integer.findlsb.ivec3_lowp_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001849, VkglTestCase_001849_1, VkglTestCase_001849_2);

#define VkglTestCase_001850_1 "dEQP-GLES31.functional.shaders.builtin_fu"
#define VkglTestCase_001850_2 "nctions.integer.findlsb.ivec3_lowp_compute"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001850, VkglTestCase_001850_1, VkglTestCase_001850_2);

#define VkglTestCase_001851_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_001851_2 "ctions.integer.findlsb.ivec3_mediump_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001851, VkglTestCase_001851_1, VkglTestCase_001851_2);

#define VkglTestCase_001852_1 "dEQP-GLES31.functional.shaders.builtin_func"
#define VkglTestCase_001852_2 "tions.integer.findlsb.ivec3_mediump_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001852, VkglTestCase_001852_1, VkglTestCase_001852_2);

#define VkglTestCase_001853_1 "dEQP-GLES31.functional.shaders.builtin_func"
#define VkglTestCase_001853_2 "tions.integer.findlsb.ivec3_mediump_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001853, VkglTestCase_001853_1, VkglTestCase_001853_2);

#define VkglTestCase_001854_1 "dEQP-GLES31.functional.shaders.builtin_functi"
#define VkglTestCase_001854_2 "ons.integer.findlsb.ivec3_mediump_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001854, VkglTestCase_001854_1, VkglTestCase_001854_2);

#define VkglTestCase_001855_1 "dEQP-GLES31.functional.shaders.builtin_funct"
#define VkglTestCase_001855_2 "ions.integer.findlsb.ivec3_mediump_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001855, VkglTestCase_001855_1, VkglTestCase_001855_2);

#define VkglTestCase_001856_1 "dEQP-GLES31.functional.shaders.builtin_func"
#define VkglTestCase_001856_2 "tions.integer.findlsb.ivec3_mediump_compute"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001856, VkglTestCase_001856_1, VkglTestCase_001856_2);

#define VkglTestCase_001857_1 "dEQP-GLES31.functional.shaders.builtin_fu"
#define VkglTestCase_001857_2 "nctions.integer.findlsb.ivec3_highp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001857, VkglTestCase_001857_1, VkglTestCase_001857_2);

#define VkglTestCase_001858_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_001858_2 "ctions.integer.findlsb.ivec3_highp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001858, VkglTestCase_001858_1, VkglTestCase_001858_2);

#define VkglTestCase_001859_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_001859_2 "ctions.integer.findlsb.ivec3_highp_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001859, VkglTestCase_001859_1, VkglTestCase_001859_2);

#define VkglTestCase_001860_1 "dEQP-GLES31.functional.shaders.builtin_funct"
#define VkglTestCase_001860_2 "ions.integer.findlsb.ivec3_highp_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001860, VkglTestCase_001860_1, VkglTestCase_001860_2);

#define VkglTestCase_001861_1 "dEQP-GLES31.functional.shaders.builtin_func"
#define VkglTestCase_001861_2 "tions.integer.findlsb.ivec3_highp_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001861, VkglTestCase_001861_1, VkglTestCase_001861_2);

#define VkglTestCase_001862_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_001862_2 "ctions.integer.findlsb.ivec3_highp_compute"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001862, VkglTestCase_001862_1, VkglTestCase_001862_2);

#define VkglTestCase_001863_1 "dEQP-GLES31.functional.shaders.builtin_fu"
#define VkglTestCase_001863_2 "nctions.integer.findlsb.ivec4_lowp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001863, VkglTestCase_001863_1, VkglTestCase_001863_2);

#define VkglTestCase_001864_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_001864_2 "ctions.integer.findlsb.ivec4_lowp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001864, VkglTestCase_001864_1, VkglTestCase_001864_2);

#define VkglTestCase_001865_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_001865_2 "ctions.integer.findlsb.ivec4_lowp_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001865, VkglTestCase_001865_1, VkglTestCase_001865_2);

#define VkglTestCase_001866_1 "dEQP-GLES31.functional.shaders.builtin_funct"
#define VkglTestCase_001866_2 "ions.integer.findlsb.ivec4_lowp_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001866, VkglTestCase_001866_1, VkglTestCase_001866_2);

#define VkglTestCase_001867_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_001867_2 "ctions.integer.findlsb.ivec4_lowp_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001867, VkglTestCase_001867_1, VkglTestCase_001867_2);

#define VkglTestCase_001868_1 "dEQP-GLES31.functional.shaders.builtin_fu"
#define VkglTestCase_001868_2 "nctions.integer.findlsb.ivec4_lowp_compute"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001868, VkglTestCase_001868_1, VkglTestCase_001868_2);

#define VkglTestCase_001869_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_001869_2 "ctions.integer.findlsb.ivec4_mediump_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001869, VkglTestCase_001869_1, VkglTestCase_001869_2);

#define VkglTestCase_001870_1 "dEQP-GLES31.functional.shaders.builtin_func"
#define VkglTestCase_001870_2 "tions.integer.findlsb.ivec4_mediump_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001870, VkglTestCase_001870_1, VkglTestCase_001870_2);

#define VkglTestCase_001871_1 "dEQP-GLES31.functional.shaders.builtin_func"
#define VkglTestCase_001871_2 "tions.integer.findlsb.ivec4_mediump_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001871, VkglTestCase_001871_1, VkglTestCase_001871_2);

#define VkglTestCase_001872_1 "dEQP-GLES31.functional.shaders.builtin_functi"
#define VkglTestCase_001872_2 "ons.integer.findlsb.ivec4_mediump_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001872, VkglTestCase_001872_1, VkglTestCase_001872_2);

#define VkglTestCase_001873_1 "dEQP-GLES31.functional.shaders.builtin_funct"
#define VkglTestCase_001873_2 "ions.integer.findlsb.ivec4_mediump_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001873, VkglTestCase_001873_1, VkglTestCase_001873_2);

#define VkglTestCase_001874_1 "dEQP-GLES31.functional.shaders.builtin_func"
#define VkglTestCase_001874_2 "tions.integer.findlsb.ivec4_mediump_compute"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001874, VkglTestCase_001874_1, VkglTestCase_001874_2);

#define VkglTestCase_001875_1 "dEQP-GLES31.functional.shaders.builtin_fu"
#define VkglTestCase_001875_2 "nctions.integer.findlsb.ivec4_highp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001875, VkglTestCase_001875_1, VkglTestCase_001875_2);

#define VkglTestCase_001876_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_001876_2 "ctions.integer.findlsb.ivec4_highp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001876, VkglTestCase_001876_1, VkglTestCase_001876_2);

#define VkglTestCase_001877_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_001877_2 "ctions.integer.findlsb.ivec4_highp_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001877, VkglTestCase_001877_1, VkglTestCase_001877_2);

#define VkglTestCase_001878_1 "dEQP-GLES31.functional.shaders.builtin_funct"
#define VkglTestCase_001878_2 "ions.integer.findlsb.ivec4_highp_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001878, VkglTestCase_001878_1, VkglTestCase_001878_2);

#define VkglTestCase_001879_1 "dEQP-GLES31.functional.shaders.builtin_func"
#define VkglTestCase_001879_2 "tions.integer.findlsb.ivec4_highp_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001879, VkglTestCase_001879_1, VkglTestCase_001879_2);

#define VkglTestCase_001880_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_001880_2 "ctions.integer.findlsb.ivec4_highp_compute"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001880, VkglTestCase_001880_1, VkglTestCase_001880_2);

#define VkglTestCase_001881_1 "dEQP-GLES31.functional.shaders.builtin_f"
#define VkglTestCase_001881_2 "unctions.integer.findlsb.uint_lowp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001881, VkglTestCase_001881_1, VkglTestCase_001881_2);

#define VkglTestCase_001882_1 "dEQP-GLES31.functional.shaders.builtin_fu"
#define VkglTestCase_001882_2 "nctions.integer.findlsb.uint_lowp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001882, VkglTestCase_001882_1, VkglTestCase_001882_2);

#define VkglTestCase_001883_1 "dEQP-GLES31.functional.shaders.builtin_fu"
#define VkglTestCase_001883_2 "nctions.integer.findlsb.uint_lowp_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001883, VkglTestCase_001883_1, VkglTestCase_001883_2);

#define VkglTestCase_001884_1 "dEQP-GLES31.functional.shaders.builtin_func"
#define VkglTestCase_001884_2 "tions.integer.findlsb.uint_lowp_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001884, VkglTestCase_001884_1, VkglTestCase_001884_2);

#define VkglTestCase_001885_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_001885_2 "ctions.integer.findlsb.uint_lowp_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001885, VkglTestCase_001885_1, VkglTestCase_001885_2);

#define VkglTestCase_001886_1 "dEQP-GLES31.functional.shaders.builtin_fu"
#define VkglTestCase_001886_2 "nctions.integer.findlsb.uint_lowp_compute"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001886, VkglTestCase_001886_1, VkglTestCase_001886_2);

#define VkglTestCase_001887_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_001887_2 "ctions.integer.findlsb.uint_mediump_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001887, VkglTestCase_001887_1, VkglTestCase_001887_2);

#define VkglTestCase_001888_1 "dEQP-GLES31.functional.shaders.builtin_func"
#define VkglTestCase_001888_2 "tions.integer.findlsb.uint_mediump_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001888, VkglTestCase_001888_1, VkglTestCase_001888_2);

#define VkglTestCase_001889_1 "dEQP-GLES31.functional.shaders.builtin_func"
#define VkglTestCase_001889_2 "tions.integer.findlsb.uint_mediump_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001889, VkglTestCase_001889_1, VkglTestCase_001889_2);

#define VkglTestCase_001890_1 "dEQP-GLES31.functional.shaders.builtin_functi"
#define VkglTestCase_001890_2 "ons.integer.findlsb.uint_mediump_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001890, VkglTestCase_001890_1, VkglTestCase_001890_2);

#define VkglTestCase_001891_1 "dEQP-GLES31.functional.shaders.builtin_func"
#define VkglTestCase_001891_2 "tions.integer.findlsb.uint_mediump_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001891, VkglTestCase_001891_1, VkglTestCase_001891_2);

#define VkglTestCase_001892_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_001892_2 "ctions.integer.findlsb.uint_mediump_compute"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001892, VkglTestCase_001892_1, VkglTestCase_001892_2);

#define VkglTestCase_001893_1 "dEQP-GLES31.functional.shaders.builtin_fu"
#define VkglTestCase_001893_2 "nctions.integer.findlsb.uint_highp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001893, VkglTestCase_001893_1, VkglTestCase_001893_2);

#define VkglTestCase_001894_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_001894_2 "ctions.integer.findlsb.uint_highp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001894, VkglTestCase_001894_1, VkglTestCase_001894_2);

#define VkglTestCase_001895_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_001895_2 "ctions.integer.findlsb.uint_highp_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001895, VkglTestCase_001895_1, VkglTestCase_001895_2);

#define VkglTestCase_001896_1 "dEQP-GLES31.functional.shaders.builtin_funct"
#define VkglTestCase_001896_2 "ions.integer.findlsb.uint_highp_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001896, VkglTestCase_001896_1, VkglTestCase_001896_2);

#define VkglTestCase_001897_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_001897_2 "ctions.integer.findlsb.uint_highp_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001897, VkglTestCase_001897_1, VkglTestCase_001897_2);

#define VkglTestCase_001898_1 "dEQP-GLES31.functional.shaders.builtin_fu"
#define VkglTestCase_001898_2 "nctions.integer.findlsb.uint_highp_compute"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001898, VkglTestCase_001898_1, VkglTestCase_001898_2);

#define VkglTestCase_001899_1 "dEQP-GLES31.functional.shaders.builtin_fu"
#define VkglTestCase_001899_2 "nctions.integer.findlsb.uvec2_lowp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001899, VkglTestCase_001899_1, VkglTestCase_001899_2);

#define VkglTestCase_001900_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_001900_2 "ctions.integer.findlsb.uvec2_lowp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001900, VkglTestCase_001900_1, VkglTestCase_001900_2);

#define VkglTestCase_001901_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_001901_2 "ctions.integer.findlsb.uvec2_lowp_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001901, VkglTestCase_001901_1, VkglTestCase_001901_2);

#define VkglTestCase_001902_1 "dEQP-GLES31.functional.shaders.builtin_funct"
#define VkglTestCase_001902_2 "ions.integer.findlsb.uvec2_lowp_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001902, VkglTestCase_001902_1, VkglTestCase_001902_2);

#define VkglTestCase_001903_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_001903_2 "ctions.integer.findlsb.uvec2_lowp_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001903, VkglTestCase_001903_1, VkglTestCase_001903_2);

#define VkglTestCase_001904_1 "dEQP-GLES31.functional.shaders.builtin_fu"
#define VkglTestCase_001904_2 "nctions.integer.findlsb.uvec2_lowp_compute"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001904, VkglTestCase_001904_1, VkglTestCase_001904_2);

#define VkglTestCase_001905_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_001905_2 "ctions.integer.findlsb.uvec2_mediump_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001905, VkglTestCase_001905_1, VkglTestCase_001905_2);

#define VkglTestCase_001906_1 "dEQP-GLES31.functional.shaders.builtin_func"
#define VkglTestCase_001906_2 "tions.integer.findlsb.uvec2_mediump_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001906, VkglTestCase_001906_1, VkglTestCase_001906_2);

#define VkglTestCase_001907_1 "dEQP-GLES31.functional.shaders.builtin_func"
#define VkglTestCase_001907_2 "tions.integer.findlsb.uvec2_mediump_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001907, VkglTestCase_001907_1, VkglTestCase_001907_2);

#define VkglTestCase_001908_1 "dEQP-GLES31.functional.shaders.builtin_functi"
#define VkglTestCase_001908_2 "ons.integer.findlsb.uvec2_mediump_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001908, VkglTestCase_001908_1, VkglTestCase_001908_2);

#define VkglTestCase_001909_1 "dEQP-GLES31.functional.shaders.builtin_funct"
#define VkglTestCase_001909_2 "ions.integer.findlsb.uvec2_mediump_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001909, VkglTestCase_001909_1, VkglTestCase_001909_2);

#define VkglTestCase_001910_1 "dEQP-GLES31.functional.shaders.builtin_func"
#define VkglTestCase_001910_2 "tions.integer.findlsb.uvec2_mediump_compute"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001910, VkglTestCase_001910_1, VkglTestCase_001910_2);

#define VkglTestCase_001911_1 "dEQP-GLES31.functional.shaders.builtin_fu"
#define VkglTestCase_001911_2 "nctions.integer.findlsb.uvec2_highp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001911, VkglTestCase_001911_1, VkglTestCase_001911_2);

#define VkglTestCase_001912_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_001912_2 "ctions.integer.findlsb.uvec2_highp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001912, VkglTestCase_001912_1, VkglTestCase_001912_2);

#define VkglTestCase_001913_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_001913_2 "ctions.integer.findlsb.uvec2_highp_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001913, VkglTestCase_001913_1, VkglTestCase_001913_2);

#define VkglTestCase_001914_1 "dEQP-GLES31.functional.shaders.builtin_funct"
#define VkglTestCase_001914_2 "ions.integer.findlsb.uvec2_highp_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001914, VkglTestCase_001914_1, VkglTestCase_001914_2);

#define VkglTestCase_001915_1 "dEQP-GLES31.functional.shaders.builtin_func"
#define VkglTestCase_001915_2 "tions.integer.findlsb.uvec2_highp_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001915, VkglTestCase_001915_1, VkglTestCase_001915_2);

#define VkglTestCase_001916_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_001916_2 "ctions.integer.findlsb.uvec2_highp_compute"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001916, VkglTestCase_001916_1, VkglTestCase_001916_2);

#define VkglTestCase_001917_1 "dEQP-GLES31.functional.shaders.builtin_fu"
#define VkglTestCase_001917_2 "nctions.integer.findlsb.uvec3_lowp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001917, VkglTestCase_001917_1, VkglTestCase_001917_2);

#define VkglTestCase_001918_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_001918_2 "ctions.integer.findlsb.uvec3_lowp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001918, VkglTestCase_001918_1, VkglTestCase_001918_2);

#define VkglTestCase_001919_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_001919_2 "ctions.integer.findlsb.uvec3_lowp_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001919, VkglTestCase_001919_1, VkglTestCase_001919_2);

#define VkglTestCase_001920_1 "dEQP-GLES31.functional.shaders.builtin_funct"
#define VkglTestCase_001920_2 "ions.integer.findlsb.uvec3_lowp_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001920, VkglTestCase_001920_1, VkglTestCase_001920_2);

#define VkglTestCase_001921_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_001921_2 "ctions.integer.findlsb.uvec3_lowp_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001921, VkglTestCase_001921_1, VkglTestCase_001921_2);

#define VkglTestCase_001922_1 "dEQP-GLES31.functional.shaders.builtin_fu"
#define VkglTestCase_001922_2 "nctions.integer.findlsb.uvec3_lowp_compute"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001922, VkglTestCase_001922_1, VkglTestCase_001922_2);

#define VkglTestCase_001923_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_001923_2 "ctions.integer.findlsb.uvec3_mediump_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001923, VkglTestCase_001923_1, VkglTestCase_001923_2);

#define VkglTestCase_001924_1 "dEQP-GLES31.functional.shaders.builtin_func"
#define VkglTestCase_001924_2 "tions.integer.findlsb.uvec3_mediump_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001924, VkglTestCase_001924_1, VkglTestCase_001924_2);

#define VkglTestCase_001925_1 "dEQP-GLES31.functional.shaders.builtin_func"
#define VkglTestCase_001925_2 "tions.integer.findlsb.uvec3_mediump_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001925, VkglTestCase_001925_1, VkglTestCase_001925_2);

#define VkglTestCase_001926_1 "dEQP-GLES31.functional.shaders.builtin_functi"
#define VkglTestCase_001926_2 "ons.integer.findlsb.uvec3_mediump_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001926, VkglTestCase_001926_1, VkglTestCase_001926_2);

#define VkglTestCase_001927_1 "dEQP-GLES31.functional.shaders.builtin_funct"
#define VkglTestCase_001927_2 "ions.integer.findlsb.uvec3_mediump_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001927, VkglTestCase_001927_1, VkglTestCase_001927_2);

#define VkglTestCase_001928_1 "dEQP-GLES31.functional.shaders.builtin_func"
#define VkglTestCase_001928_2 "tions.integer.findlsb.uvec3_mediump_compute"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001928, VkglTestCase_001928_1, VkglTestCase_001928_2);

#define VkglTestCase_001929_1 "dEQP-GLES31.functional.shaders.builtin_fu"
#define VkglTestCase_001929_2 "nctions.integer.findlsb.uvec3_highp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001929, VkglTestCase_001929_1, VkglTestCase_001929_2);

#define VkglTestCase_001930_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_001930_2 "ctions.integer.findlsb.uvec3_highp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001930, VkglTestCase_001930_1, VkglTestCase_001930_2);

#define VkglTestCase_001931_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_001931_2 "ctions.integer.findlsb.uvec3_highp_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001931, VkglTestCase_001931_1, VkglTestCase_001931_2);

#define VkglTestCase_001932_1 "dEQP-GLES31.functional.shaders.builtin_funct"
#define VkglTestCase_001932_2 "ions.integer.findlsb.uvec3_highp_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001932, VkglTestCase_001932_1, VkglTestCase_001932_2);

#define VkglTestCase_001933_1 "dEQP-GLES31.functional.shaders.builtin_func"
#define VkglTestCase_001933_2 "tions.integer.findlsb.uvec3_highp_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001933, VkglTestCase_001933_1, VkglTestCase_001933_2);

#define VkglTestCase_001934_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_001934_2 "ctions.integer.findlsb.uvec3_highp_compute"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001934, VkglTestCase_001934_1, VkglTestCase_001934_2);

#define VkglTestCase_001935_1 "dEQP-GLES31.functional.shaders.builtin_fu"
#define VkglTestCase_001935_2 "nctions.integer.findlsb.uvec4_lowp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001935, VkglTestCase_001935_1, VkglTestCase_001935_2);

#define VkglTestCase_001936_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_001936_2 "ctions.integer.findlsb.uvec4_lowp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001936, VkglTestCase_001936_1, VkglTestCase_001936_2);

#define VkglTestCase_001937_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_001937_2 "ctions.integer.findlsb.uvec4_lowp_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001937, VkglTestCase_001937_1, VkglTestCase_001937_2);

#define VkglTestCase_001938_1 "dEQP-GLES31.functional.shaders.builtin_funct"
#define VkglTestCase_001938_2 "ions.integer.findlsb.uvec4_lowp_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001938, VkglTestCase_001938_1, VkglTestCase_001938_2);

#define VkglTestCase_001939_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_001939_2 "ctions.integer.findlsb.uvec4_lowp_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001939, VkglTestCase_001939_1, VkglTestCase_001939_2);

#define VkglTestCase_001940_1 "dEQP-GLES31.functional.shaders.builtin_fu"
#define VkglTestCase_001940_2 "nctions.integer.findlsb.uvec4_lowp_compute"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001940, VkglTestCase_001940_1, VkglTestCase_001940_2);

#define VkglTestCase_001941_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_001941_2 "ctions.integer.findlsb.uvec4_mediump_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001941, VkglTestCase_001941_1, VkglTestCase_001941_2);

#define VkglTestCase_001942_1 "dEQP-GLES31.functional.shaders.builtin_func"
#define VkglTestCase_001942_2 "tions.integer.findlsb.uvec4_mediump_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001942, VkglTestCase_001942_1, VkglTestCase_001942_2);

#define VkglTestCase_001943_1 "dEQP-GLES31.functional.shaders.builtin_func"
#define VkglTestCase_001943_2 "tions.integer.findlsb.uvec4_mediump_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001943, VkglTestCase_001943_1, VkglTestCase_001943_2);

#define VkglTestCase_001944_1 "dEQP-GLES31.functional.shaders.builtin_functi"
#define VkglTestCase_001944_2 "ons.integer.findlsb.uvec4_mediump_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001944, VkglTestCase_001944_1, VkglTestCase_001944_2);

#define VkglTestCase_001945_1 "dEQP-GLES31.functional.shaders.builtin_funct"
#define VkglTestCase_001945_2 "ions.integer.findlsb.uvec4_mediump_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001945, VkglTestCase_001945_1, VkglTestCase_001945_2);

#define VkglTestCase_001946_1 "dEQP-GLES31.functional.shaders.builtin_func"
#define VkglTestCase_001946_2 "tions.integer.findlsb.uvec4_mediump_compute"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001946, VkglTestCase_001946_1, VkglTestCase_001946_2);

#define VkglTestCase_001947_1 "dEQP-GLES31.functional.shaders.builtin_fu"
#define VkglTestCase_001947_2 "nctions.integer.findlsb.uvec4_highp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001947, VkglTestCase_001947_1, VkglTestCase_001947_2);

#define VkglTestCase_001948_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_001948_2 "ctions.integer.findlsb.uvec4_highp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001948, VkglTestCase_001948_1, VkglTestCase_001948_2);

#define VkglTestCase_001949_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_001949_2 "ctions.integer.findlsb.uvec4_highp_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001949, VkglTestCase_001949_1, VkglTestCase_001949_2);

#define VkglTestCase_001950_1 "dEQP-GLES31.functional.shaders.builtin_funct"
#define VkglTestCase_001950_2 "ions.integer.findlsb.uvec4_highp_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001950, VkglTestCase_001950_1, VkglTestCase_001950_2);

#define VkglTestCase_001951_1 "dEQP-GLES31.functional.shaders.builtin_func"
#define VkglTestCase_001951_2 "tions.integer.findlsb.uvec4_highp_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001951, VkglTestCase_001951_1, VkglTestCase_001951_2);

#define VkglTestCase_001952_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_001952_2 "ctions.integer.findlsb.uvec4_highp_compute"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001952, VkglTestCase_001952_1, VkglTestCase_001952_2);
