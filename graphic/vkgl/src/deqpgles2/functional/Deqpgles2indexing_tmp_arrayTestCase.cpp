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
#include "../ActsDeqpgles20003TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_002835_1 "dEQP-GLES2.functional.shaders.indexing.tmp_"
#define VkglTestCase_002835_2 "array.float_static_write_static_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002835, VkglTestCase_002835_1, VkglTestCase_002835_2);

#define VkglTestCase_002836_1 "dEQP-GLES2.functional.shaders.indexing.tmp_a"
#define VkglTestCase_002836_2 "rray.float_static_write_static_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002836, VkglTestCase_002836_1, VkglTestCase_002836_2);

#define VkglTestCase_002837_1 "dEQP-GLES2.functional.shaders.indexing.tmp_"
#define VkglTestCase_002837_2 "array.float_static_write_dynamic_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002837, VkglTestCase_002837_1, VkglTestCase_002837_2);

#define VkglTestCase_002838_1 "dEQP-GLES2.functional.shaders.indexing.tmp_a"
#define VkglTestCase_002838_2 "rray.float_static_write_dynamic_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002838, VkglTestCase_002838_1, VkglTestCase_002838_2);

#define VkglTestCase_002839_1 "dEQP-GLES2.functional.shaders.indexing.tmp_ar"
#define VkglTestCase_002839_2 "ray.float_static_write_static_loop_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002839, VkglTestCase_002839_1, VkglTestCase_002839_2);

#define VkglTestCase_002840_1 "dEQP-GLES2.functional.shaders.indexing.tmp_arr"
#define VkglTestCase_002840_2 "ay.float_static_write_static_loop_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002840, VkglTestCase_002840_1, VkglTestCase_002840_2);

#define VkglTestCase_002841_1 "dEQP-GLES2.functional.shaders.indexing.tmp_arr"
#define VkglTestCase_002841_2 "ay.float_static_write_dynamic_loop_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002841, VkglTestCase_002841_1, VkglTestCase_002841_2);

#define VkglTestCase_002842_1 "dEQP-GLES2.functional.shaders.indexing.tmp_arra"
#define VkglTestCase_002842_2 "y.float_static_write_dynamic_loop_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002842, VkglTestCase_002842_1, VkglTestCase_002842_2);

#define VkglTestCase_002843_1 "dEQP-GLES2.functional.shaders.indexing.tmp_"
#define VkglTestCase_002843_2 "array.float_dynamic_write_static_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002843, VkglTestCase_002843_1, VkglTestCase_002843_2);

#define VkglTestCase_002844_1 "dEQP-GLES2.functional.shaders.indexing.tmp_a"
#define VkglTestCase_002844_2 "rray.float_dynamic_write_static_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002844, VkglTestCase_002844_1, VkglTestCase_002844_2);

#define VkglTestCase_002845_1 "dEQP-GLES2.functional.shaders.indexing.tmp_a"
#define VkglTestCase_002845_2 "rray.float_dynamic_write_dynamic_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002845, VkglTestCase_002845_1, VkglTestCase_002845_2);

#define VkglTestCase_002846_1 "dEQP-GLES2.functional.shaders.indexing.tmp_ar"
#define VkglTestCase_002846_2 "ray.float_dynamic_write_dynamic_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002846, VkglTestCase_002846_1, VkglTestCase_002846_2);

#define VkglTestCase_002847_1 "dEQP-GLES2.functional.shaders.indexing.tmp_arr"
#define VkglTestCase_002847_2 "ay.float_dynamic_write_static_loop_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002847, VkglTestCase_002847_1, VkglTestCase_002847_2);

#define VkglTestCase_002848_1 "dEQP-GLES2.functional.shaders.indexing.tmp_arra"
#define VkglTestCase_002848_2 "y.float_dynamic_write_static_loop_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002848, VkglTestCase_002848_1, VkglTestCase_002848_2);

#define VkglTestCase_002849_1 "dEQP-GLES2.functional.shaders.indexing.tmp_arr"
#define VkglTestCase_002849_2 "ay.float_dynamic_write_dynamic_loop_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002849, VkglTestCase_002849_1, VkglTestCase_002849_2);

#define VkglTestCase_002850_1 "dEQP-GLES2.functional.shaders.indexing.tmp_arra"
#define VkglTestCase_002850_2 "y.float_dynamic_write_dynamic_loop_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002850, VkglTestCase_002850_1, VkglTestCase_002850_2);

#define VkglTestCase_002851_1 "dEQP-GLES2.functional.shaders.indexing.tmp_ar"
#define VkglTestCase_002851_2 "ray.float_static_loop_write_static_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002851, VkglTestCase_002851_1, VkglTestCase_002851_2);

#define VkglTestCase_002852_1 "dEQP-GLES2.functional.shaders.indexing.tmp_arr"
#define VkglTestCase_002852_2 "ay.float_static_loop_write_static_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002852, VkglTestCase_002852_1, VkglTestCase_002852_2);

#define VkglTestCase_002853_1 "dEQP-GLES2.functional.shaders.indexing.tmp_arr"
#define VkglTestCase_002853_2 "ay.float_static_loop_write_dynamic_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002853, VkglTestCase_002853_1, VkglTestCase_002853_2);

#define VkglTestCase_002854_1 "dEQP-GLES2.functional.shaders.indexing.tmp_arra"
#define VkglTestCase_002854_2 "y.float_static_loop_write_dynamic_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002854, VkglTestCase_002854_1, VkglTestCase_002854_2);

#define VkglTestCase_002855_1 "dEQP-GLES2.functional.shaders.indexing.tmp_array"
#define VkglTestCase_002855_2 ".float_static_loop_write_static_loop_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002855, VkglTestCase_002855_1, VkglTestCase_002855_2);

#define VkglTestCase_002856_1 "dEQP-GLES2.functional.shaders.indexing.tmp_array."
#define VkglTestCase_002856_2 "float_static_loop_write_static_loop_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002856, VkglTestCase_002856_1, VkglTestCase_002856_2);

#define VkglTestCase_002857_1 "dEQP-GLES2.functional.shaders.indexing.tmp_array"
#define VkglTestCase_002857_2 ".float_static_loop_write_dynamic_loop_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002857, VkglTestCase_002857_1, VkglTestCase_002857_2);

#define VkglTestCase_002858_1 "dEQP-GLES2.functional.shaders.indexing.tmp_array."
#define VkglTestCase_002858_2 "float_static_loop_write_dynamic_loop_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002858, VkglTestCase_002858_1, VkglTestCase_002858_2);

#define VkglTestCase_002859_1 "dEQP-GLES2.functional.shaders.indexing.tmp_arr"
#define VkglTestCase_002859_2 "ay.float_dynamic_loop_write_static_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002859, VkglTestCase_002859_1, VkglTestCase_002859_2);

#define VkglTestCase_002860_1 "dEQP-GLES2.functional.shaders.indexing.tmp_arra"
#define VkglTestCase_002860_2 "y.float_dynamic_loop_write_static_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002860, VkglTestCase_002860_1, VkglTestCase_002860_2);

#define VkglTestCase_002861_1 "dEQP-GLES2.functional.shaders.indexing.tmp_arr"
#define VkglTestCase_002861_2 "ay.float_dynamic_loop_write_dynamic_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002861, VkglTestCase_002861_1, VkglTestCase_002861_2);

#define VkglTestCase_002862_1 "dEQP-GLES2.functional.shaders.indexing.tmp_arra"
#define VkglTestCase_002862_2 "y.float_dynamic_loop_write_dynamic_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002862, VkglTestCase_002862_1, VkglTestCase_002862_2);

#define VkglTestCase_002863_1 "dEQP-GLES2.functional.shaders.indexing.tmp_array"
#define VkglTestCase_002863_2 ".float_dynamic_loop_write_static_loop_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002863, VkglTestCase_002863_1, VkglTestCase_002863_2);

#define VkglTestCase_002864_1 "dEQP-GLES2.functional.shaders.indexing.tmp_array."
#define VkglTestCase_002864_2 "float_dynamic_loop_write_static_loop_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002864, VkglTestCase_002864_1, VkglTestCase_002864_2);

#define VkglTestCase_002865_1 "dEQP-GLES2.functional.shaders.indexing.tmp_array."
#define VkglTestCase_002865_2 "float_dynamic_loop_write_dynamic_loop_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002865, VkglTestCase_002865_1, VkglTestCase_002865_2);

#define VkglTestCase_002866_1 "dEQP-GLES2.functional.shaders.indexing.tmp_array.f"
#define VkglTestCase_002866_2 "loat_dynamic_loop_write_dynamic_loop_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002866, VkglTestCase_002866_1, VkglTestCase_002866_2);

#define VkglTestCase_002867_1 "dEQP-GLES2.functional.shaders.indexing.tmp"
#define VkglTestCase_002867_2 "_array.float_const_write_static_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002867, VkglTestCase_002867_1, VkglTestCase_002867_2);

#define VkglTestCase_002868_1 "dEQP-GLES2.functional.shaders.indexing.tmp_"
#define VkglTestCase_002868_2 "array.float_const_write_static_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002868, VkglTestCase_002868_1, VkglTestCase_002868_2);

#define VkglTestCase_002869_1 "dEQP-GLES2.functional.shaders.indexing.tmp_"
#define VkglTestCase_002869_2 "array.float_const_write_dynamic_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002869, VkglTestCase_002869_1, VkglTestCase_002869_2);

#define VkglTestCase_002870_1 "dEQP-GLES2.functional.shaders.indexing.tmp_a"
#define VkglTestCase_002870_2 "rray.float_const_write_dynamic_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002870, VkglTestCase_002870_1, VkglTestCase_002870_2);

#define VkglTestCase_002871_1 "dEQP-GLES2.functional.shaders.indexing.tmp_ar"
#define VkglTestCase_002871_2 "ray.float_const_write_static_loop_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002871, VkglTestCase_002871_1, VkglTestCase_002871_2);

#define VkglTestCase_002872_1 "dEQP-GLES2.functional.shaders.indexing.tmp_arr"
#define VkglTestCase_002872_2 "ay.float_const_write_static_loop_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002872, VkglTestCase_002872_1, VkglTestCase_002872_2);

#define VkglTestCase_002873_1 "dEQP-GLES2.functional.shaders.indexing.tmp_ar"
#define VkglTestCase_002873_2 "ray.float_const_write_dynamic_loop_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002873, VkglTestCase_002873_1, VkglTestCase_002873_2);

#define VkglTestCase_002874_1 "dEQP-GLES2.functional.shaders.indexing.tmp_arr"
#define VkglTestCase_002874_2 "ay.float_const_write_dynamic_loop_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002874, VkglTestCase_002874_1, VkglTestCase_002874_2);

#define VkglTestCase_002875_1 "dEQP-GLES2.functional.shaders.indexing.tmp"
#define VkglTestCase_002875_2 "_array.vec2_static_write_static_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002875, VkglTestCase_002875_1, VkglTestCase_002875_2);

#define VkglTestCase_002876_1 "dEQP-GLES2.functional.shaders.indexing.tmp_"
#define VkglTestCase_002876_2 "array.vec2_static_write_static_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002876, VkglTestCase_002876_1, VkglTestCase_002876_2);

#define VkglTestCase_002877_1 "dEQP-GLES2.functional.shaders.indexing.tmp_"
#define VkglTestCase_002877_2 "array.vec2_static_write_dynamic_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002877, VkglTestCase_002877_1, VkglTestCase_002877_2);

#define VkglTestCase_002878_1 "dEQP-GLES2.functional.shaders.indexing.tmp_a"
#define VkglTestCase_002878_2 "rray.vec2_static_write_dynamic_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002878, VkglTestCase_002878_1, VkglTestCase_002878_2);

#define VkglTestCase_002879_1 "dEQP-GLES2.functional.shaders.indexing.tmp_ar"
#define VkglTestCase_002879_2 "ray.vec2_static_write_static_loop_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002879, VkglTestCase_002879_1, VkglTestCase_002879_2);

#define VkglTestCase_002880_1 "dEQP-GLES2.functional.shaders.indexing.tmp_arr"
#define VkglTestCase_002880_2 "ay.vec2_static_write_static_loop_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002880, VkglTestCase_002880_1, VkglTestCase_002880_2);

#define VkglTestCase_002881_1 "dEQP-GLES2.functional.shaders.indexing.tmp_ar"
#define VkglTestCase_002881_2 "ray.vec2_static_write_dynamic_loop_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002881, VkglTestCase_002881_1, VkglTestCase_002881_2);

#define VkglTestCase_002882_1 "dEQP-GLES2.functional.shaders.indexing.tmp_arr"
#define VkglTestCase_002882_2 "ay.vec2_static_write_dynamic_loop_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002882, VkglTestCase_002882_1, VkglTestCase_002882_2);

#define VkglTestCase_002883_1 "dEQP-GLES2.functional.shaders.indexing.tmp_"
#define VkglTestCase_002883_2 "array.vec2_dynamic_write_static_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002883, VkglTestCase_002883_1, VkglTestCase_002883_2);

#define VkglTestCase_002884_1 "dEQP-GLES2.functional.shaders.indexing.tmp_a"
#define VkglTestCase_002884_2 "rray.vec2_dynamic_write_static_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002884, VkglTestCase_002884_1, VkglTestCase_002884_2);

#define VkglTestCase_002885_1 "dEQP-GLES2.functional.shaders.indexing.tmp_"
#define VkglTestCase_002885_2 "array.vec2_dynamic_write_dynamic_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002885, VkglTestCase_002885_1, VkglTestCase_002885_2);

#define VkglTestCase_002886_1 "dEQP-GLES2.functional.shaders.indexing.tmp_a"
#define VkglTestCase_002886_2 "rray.vec2_dynamic_write_dynamic_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002886, VkglTestCase_002886_1, VkglTestCase_002886_2);

#define VkglTestCase_002887_1 "dEQP-GLES2.functional.shaders.indexing.tmp_ar"
#define VkglTestCase_002887_2 "ray.vec2_dynamic_write_static_loop_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002887, VkglTestCase_002887_1, VkglTestCase_002887_2);

#define VkglTestCase_002888_1 "dEQP-GLES2.functional.shaders.indexing.tmp_arr"
#define VkglTestCase_002888_2 "ay.vec2_dynamic_write_static_loop_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002888, VkglTestCase_002888_1, VkglTestCase_002888_2);

#define VkglTestCase_002889_1 "dEQP-GLES2.functional.shaders.indexing.tmp_arr"
#define VkglTestCase_002889_2 "ay.vec2_dynamic_write_dynamic_loop_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002889, VkglTestCase_002889_1, VkglTestCase_002889_2);

#define VkglTestCase_002890_1 "dEQP-GLES2.functional.shaders.indexing.tmp_arra"
#define VkglTestCase_002890_2 "y.vec2_dynamic_write_dynamic_loop_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002890, VkglTestCase_002890_1, VkglTestCase_002890_2);

#define VkglTestCase_002891_1 "dEQP-GLES2.functional.shaders.indexing.tmp_ar"
#define VkglTestCase_002891_2 "ray.vec2_static_loop_write_static_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002891, VkglTestCase_002891_1, VkglTestCase_002891_2);

#define VkglTestCase_002892_1 "dEQP-GLES2.functional.shaders.indexing.tmp_arr"
#define VkglTestCase_002892_2 "ay.vec2_static_loop_write_static_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002892, VkglTestCase_002892_1, VkglTestCase_002892_2);

#define VkglTestCase_002893_1 "dEQP-GLES2.functional.shaders.indexing.tmp_ar"
#define VkglTestCase_002893_2 "ray.vec2_static_loop_write_dynamic_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002893, VkglTestCase_002893_1, VkglTestCase_002893_2);

#define VkglTestCase_002894_1 "dEQP-GLES2.functional.shaders.indexing.tmp_arr"
#define VkglTestCase_002894_2 "ay.vec2_static_loop_write_dynamic_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002894, VkglTestCase_002894_1, VkglTestCase_002894_2);

#define VkglTestCase_002895_1 "dEQP-GLES2.functional.shaders.indexing.tmp_arra"
#define VkglTestCase_002895_2 "y.vec2_static_loop_write_static_loop_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002895, VkglTestCase_002895_1, VkglTestCase_002895_2);

#define VkglTestCase_002896_1 "dEQP-GLES2.functional.shaders.indexing.tmp_array"
#define VkglTestCase_002896_2 ".vec2_static_loop_write_static_loop_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002896, VkglTestCase_002896_1, VkglTestCase_002896_2);

#define VkglTestCase_002897_1 "dEQP-GLES2.functional.shaders.indexing.tmp_array"
#define VkglTestCase_002897_2 ".vec2_static_loop_write_dynamic_loop_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002897, VkglTestCase_002897_1, VkglTestCase_002897_2);

#define VkglTestCase_002898_1 "dEQP-GLES2.functional.shaders.indexing.tmp_array."
#define VkglTestCase_002898_2 "vec2_static_loop_write_dynamic_loop_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002898, VkglTestCase_002898_1, VkglTestCase_002898_2);

#define VkglTestCase_002899_1 "dEQP-GLES2.functional.shaders.indexing.tmp_ar"
#define VkglTestCase_002899_2 "ray.vec2_dynamic_loop_write_static_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002899, VkglTestCase_002899_1, VkglTestCase_002899_2);

#define VkglTestCase_002900_1 "dEQP-GLES2.functional.shaders.indexing.tmp_arr"
#define VkglTestCase_002900_2 "ay.vec2_dynamic_loop_write_static_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002900, VkglTestCase_002900_1, VkglTestCase_002900_2);

#define VkglTestCase_002901_1 "dEQP-GLES2.functional.shaders.indexing.tmp_arr"
#define VkglTestCase_002901_2 "ay.vec2_dynamic_loop_write_dynamic_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002901, VkglTestCase_002901_1, VkglTestCase_002901_2);

#define VkglTestCase_002902_1 "dEQP-GLES2.functional.shaders.indexing.tmp_arra"
#define VkglTestCase_002902_2 "y.vec2_dynamic_loop_write_dynamic_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002902, VkglTestCase_002902_1, VkglTestCase_002902_2);

#define VkglTestCase_002903_1 "dEQP-GLES2.functional.shaders.indexing.tmp_array"
#define VkglTestCase_002903_2 ".vec2_dynamic_loop_write_static_loop_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002903, VkglTestCase_002903_1, VkglTestCase_002903_2);

#define VkglTestCase_002904_1 "dEQP-GLES2.functional.shaders.indexing.tmp_array."
#define VkglTestCase_002904_2 "vec2_dynamic_loop_write_static_loop_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002904, VkglTestCase_002904_1, VkglTestCase_002904_2);

#define VkglTestCase_002905_1 "dEQP-GLES2.functional.shaders.indexing.tmp_array"
#define VkglTestCase_002905_2 ".vec2_dynamic_loop_write_dynamic_loop_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002905, VkglTestCase_002905_1, VkglTestCase_002905_2);

#define VkglTestCase_002906_1 "dEQP-GLES2.functional.shaders.indexing.tmp_array."
#define VkglTestCase_002906_2 "vec2_dynamic_loop_write_dynamic_loop_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002906, VkglTestCase_002906_1, VkglTestCase_002906_2);

#define VkglTestCase_002907_1 "dEQP-GLES2.functional.shaders.indexing.tmp"
#define VkglTestCase_002907_2 "_array.vec2_const_write_static_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002907, VkglTestCase_002907_1, VkglTestCase_002907_2);

#define VkglTestCase_002908_1 "dEQP-GLES2.functional.shaders.indexing.tmp_"
#define VkglTestCase_002908_2 "array.vec2_const_write_static_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002908, VkglTestCase_002908_1, VkglTestCase_002908_2);

#define VkglTestCase_002909_1 "dEQP-GLES2.functional.shaders.indexing.tmp"
#define VkglTestCase_002909_2 "_array.vec2_const_write_dynamic_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002909, VkglTestCase_002909_1, VkglTestCase_002909_2);

#define VkglTestCase_002910_1 "dEQP-GLES2.functional.shaders.indexing.tmp_"
#define VkglTestCase_002910_2 "array.vec2_const_write_dynamic_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002910, VkglTestCase_002910_1, VkglTestCase_002910_2);

#define VkglTestCase_002911_1 "dEQP-GLES2.functional.shaders.indexing.tmp_a"
#define VkglTestCase_002911_2 "rray.vec2_const_write_static_loop_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002911, VkglTestCase_002911_1, VkglTestCase_002911_2);

#define VkglTestCase_002912_1 "dEQP-GLES2.functional.shaders.indexing.tmp_ar"
#define VkglTestCase_002912_2 "ray.vec2_const_write_static_loop_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002912, VkglTestCase_002912_1, VkglTestCase_002912_2);

#define VkglTestCase_002913_1 "dEQP-GLES2.functional.shaders.indexing.tmp_ar"
#define VkglTestCase_002913_2 "ray.vec2_const_write_dynamic_loop_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002913, VkglTestCase_002913_1, VkglTestCase_002913_2);

#define VkglTestCase_002914_1 "dEQP-GLES2.functional.shaders.indexing.tmp_arr"
#define VkglTestCase_002914_2 "ay.vec2_const_write_dynamic_loop_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002914, VkglTestCase_002914_1, VkglTestCase_002914_2);

#define VkglTestCase_002915_1 "dEQP-GLES2.functional.shaders.indexing.tmp"
#define VkglTestCase_002915_2 "_array.vec3_static_write_static_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002915, VkglTestCase_002915_1, VkglTestCase_002915_2);

#define VkglTestCase_002916_1 "dEQP-GLES2.functional.shaders.indexing.tmp_"
#define VkglTestCase_002916_2 "array.vec3_static_write_static_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002916, VkglTestCase_002916_1, VkglTestCase_002916_2);

#define VkglTestCase_002917_1 "dEQP-GLES2.functional.shaders.indexing.tmp_"
#define VkglTestCase_002917_2 "array.vec3_static_write_dynamic_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002917, VkglTestCase_002917_1, VkglTestCase_002917_2);

#define VkglTestCase_002918_1 "dEQP-GLES2.functional.shaders.indexing.tmp_a"
#define VkglTestCase_002918_2 "rray.vec3_static_write_dynamic_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002918, VkglTestCase_002918_1, VkglTestCase_002918_2);

#define VkglTestCase_002919_1 "dEQP-GLES2.functional.shaders.indexing.tmp_ar"
#define VkglTestCase_002919_2 "ray.vec3_static_write_static_loop_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002919, VkglTestCase_002919_1, VkglTestCase_002919_2);

#define VkglTestCase_002920_1 "dEQP-GLES2.functional.shaders.indexing.tmp_arr"
#define VkglTestCase_002920_2 "ay.vec3_static_write_static_loop_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002920, VkglTestCase_002920_1, VkglTestCase_002920_2);

#define VkglTestCase_002921_1 "dEQP-GLES2.functional.shaders.indexing.tmp_ar"
#define VkglTestCase_002921_2 "ray.vec3_static_write_dynamic_loop_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002921, VkglTestCase_002921_1, VkglTestCase_002921_2);

#define VkglTestCase_002922_1 "dEQP-GLES2.functional.shaders.indexing.tmp_arr"
#define VkglTestCase_002922_2 "ay.vec3_static_write_dynamic_loop_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002922, VkglTestCase_002922_1, VkglTestCase_002922_2);

#define VkglTestCase_002923_1 "dEQP-GLES2.functional.shaders.indexing.tmp_"
#define VkglTestCase_002923_2 "array.vec3_dynamic_write_static_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002923, VkglTestCase_002923_1, VkglTestCase_002923_2);

#define VkglTestCase_002924_1 "dEQP-GLES2.functional.shaders.indexing.tmp_a"
#define VkglTestCase_002924_2 "rray.vec3_dynamic_write_static_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002924, VkglTestCase_002924_1, VkglTestCase_002924_2);

#define VkglTestCase_002925_1 "dEQP-GLES2.functional.shaders.indexing.tmp_"
#define VkglTestCase_002925_2 "array.vec3_dynamic_write_dynamic_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002925, VkglTestCase_002925_1, VkglTestCase_002925_2);

#define VkglTestCase_002926_1 "dEQP-GLES2.functional.shaders.indexing.tmp_a"
#define VkglTestCase_002926_2 "rray.vec3_dynamic_write_dynamic_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002926, VkglTestCase_002926_1, VkglTestCase_002926_2);

#define VkglTestCase_002927_1 "dEQP-GLES2.functional.shaders.indexing.tmp_ar"
#define VkglTestCase_002927_2 "ray.vec3_dynamic_write_static_loop_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002927, VkglTestCase_002927_1, VkglTestCase_002927_2);

#define VkglTestCase_002928_1 "dEQP-GLES2.functional.shaders.indexing.tmp_arr"
#define VkglTestCase_002928_2 "ay.vec3_dynamic_write_static_loop_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002928, VkglTestCase_002928_1, VkglTestCase_002928_2);

#define VkglTestCase_002929_1 "dEQP-GLES2.functional.shaders.indexing.tmp_arr"
#define VkglTestCase_002929_2 "ay.vec3_dynamic_write_dynamic_loop_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002929, VkglTestCase_002929_1, VkglTestCase_002929_2);

#define VkglTestCase_002930_1 "dEQP-GLES2.functional.shaders.indexing.tmp_arra"
#define VkglTestCase_002930_2 "y.vec3_dynamic_write_dynamic_loop_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002930, VkglTestCase_002930_1, VkglTestCase_002930_2);

#define VkglTestCase_002931_1 "dEQP-GLES2.functional.shaders.indexing.tmp_ar"
#define VkglTestCase_002931_2 "ray.vec3_static_loop_write_static_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002931, VkglTestCase_002931_1, VkglTestCase_002931_2);

#define VkglTestCase_002932_1 "dEQP-GLES2.functional.shaders.indexing.tmp_arr"
#define VkglTestCase_002932_2 "ay.vec3_static_loop_write_static_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002932, VkglTestCase_002932_1, VkglTestCase_002932_2);

#define VkglTestCase_002933_1 "dEQP-GLES2.functional.shaders.indexing.tmp_ar"
#define VkglTestCase_002933_2 "ray.vec3_static_loop_write_dynamic_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002933, VkglTestCase_002933_1, VkglTestCase_002933_2);

#define VkglTestCase_002934_1 "dEQP-GLES2.functional.shaders.indexing.tmp_arr"
#define VkglTestCase_002934_2 "ay.vec3_static_loop_write_dynamic_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002934, VkglTestCase_002934_1, VkglTestCase_002934_2);

#define VkglTestCase_002935_1 "dEQP-GLES2.functional.shaders.indexing.tmp_arra"
#define VkglTestCase_002935_2 "y.vec3_static_loop_write_static_loop_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002935, VkglTestCase_002935_1, VkglTestCase_002935_2);

#define VkglTestCase_002936_1 "dEQP-GLES2.functional.shaders.indexing.tmp_array"
#define VkglTestCase_002936_2 ".vec3_static_loop_write_static_loop_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002936, VkglTestCase_002936_1, VkglTestCase_002936_2);

#define VkglTestCase_002937_1 "dEQP-GLES2.functional.shaders.indexing.tmp_array"
#define VkglTestCase_002937_2 ".vec3_static_loop_write_dynamic_loop_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002937, VkglTestCase_002937_1, VkglTestCase_002937_2);

#define VkglTestCase_002938_1 "dEQP-GLES2.functional.shaders.indexing.tmp_array."
#define VkglTestCase_002938_2 "vec3_static_loop_write_dynamic_loop_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002938, VkglTestCase_002938_1, VkglTestCase_002938_2);

#define VkglTestCase_002939_1 "dEQP-GLES2.functional.shaders.indexing.tmp_ar"
#define VkglTestCase_002939_2 "ray.vec3_dynamic_loop_write_static_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002939, VkglTestCase_002939_1, VkglTestCase_002939_2);

#define VkglTestCase_002940_1 "dEQP-GLES2.functional.shaders.indexing.tmp_arr"
#define VkglTestCase_002940_2 "ay.vec3_dynamic_loop_write_static_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002940, VkglTestCase_002940_1, VkglTestCase_002940_2);

#define VkglTestCase_002941_1 "dEQP-GLES2.functional.shaders.indexing.tmp_arr"
#define VkglTestCase_002941_2 "ay.vec3_dynamic_loop_write_dynamic_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002941, VkglTestCase_002941_1, VkglTestCase_002941_2);

#define VkglTestCase_002942_1 "dEQP-GLES2.functional.shaders.indexing.tmp_arra"
#define VkglTestCase_002942_2 "y.vec3_dynamic_loop_write_dynamic_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002942, VkglTestCase_002942_1, VkglTestCase_002942_2);

#define VkglTestCase_002943_1 "dEQP-GLES2.functional.shaders.indexing.tmp_array"
#define VkglTestCase_002943_2 ".vec3_dynamic_loop_write_static_loop_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002943, VkglTestCase_002943_1, VkglTestCase_002943_2);

#define VkglTestCase_002944_1 "dEQP-GLES2.functional.shaders.indexing.tmp_array."
#define VkglTestCase_002944_2 "vec3_dynamic_loop_write_static_loop_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002944, VkglTestCase_002944_1, VkglTestCase_002944_2);

#define VkglTestCase_002945_1 "dEQP-GLES2.functional.shaders.indexing.tmp_array"
#define VkglTestCase_002945_2 ".vec3_dynamic_loop_write_dynamic_loop_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002945, VkglTestCase_002945_1, VkglTestCase_002945_2);

#define VkglTestCase_002946_1 "dEQP-GLES2.functional.shaders.indexing.tmp_array."
#define VkglTestCase_002946_2 "vec3_dynamic_loop_write_dynamic_loop_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002946, VkglTestCase_002946_1, VkglTestCase_002946_2);

#define VkglTestCase_002947_1 "dEQP-GLES2.functional.shaders.indexing.tmp"
#define VkglTestCase_002947_2 "_array.vec3_const_write_static_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002947, VkglTestCase_002947_1, VkglTestCase_002947_2);

#define VkglTestCase_002948_1 "dEQP-GLES2.functional.shaders.indexing.tmp_"
#define VkglTestCase_002948_2 "array.vec3_const_write_static_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002948, VkglTestCase_002948_1, VkglTestCase_002948_2);

#define VkglTestCase_002949_1 "dEQP-GLES2.functional.shaders.indexing.tmp"
#define VkglTestCase_002949_2 "_array.vec3_const_write_dynamic_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002949, VkglTestCase_002949_1, VkglTestCase_002949_2);

#define VkglTestCase_002950_1 "dEQP-GLES2.functional.shaders.indexing.tmp_"
#define VkglTestCase_002950_2 "array.vec3_const_write_dynamic_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002950, VkglTestCase_002950_1, VkglTestCase_002950_2);

#define VkglTestCase_002951_1 "dEQP-GLES2.functional.shaders.indexing.tmp_a"
#define VkglTestCase_002951_2 "rray.vec3_const_write_static_loop_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002951, VkglTestCase_002951_1, VkglTestCase_002951_2);

#define VkglTestCase_002952_1 "dEQP-GLES2.functional.shaders.indexing.tmp_ar"
#define VkglTestCase_002952_2 "ray.vec3_const_write_static_loop_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002952, VkglTestCase_002952_1, VkglTestCase_002952_2);

#define VkglTestCase_002953_1 "dEQP-GLES2.functional.shaders.indexing.tmp_ar"
#define VkglTestCase_002953_2 "ray.vec3_const_write_dynamic_loop_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002953, VkglTestCase_002953_1, VkglTestCase_002953_2);

#define VkglTestCase_002954_1 "dEQP-GLES2.functional.shaders.indexing.tmp_arr"
#define VkglTestCase_002954_2 "ay.vec3_const_write_dynamic_loop_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002954, VkglTestCase_002954_1, VkglTestCase_002954_2);

#define VkglTestCase_002955_1 "dEQP-GLES2.functional.shaders.indexing.tmp"
#define VkglTestCase_002955_2 "_array.vec4_static_write_static_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002955, VkglTestCase_002955_1, VkglTestCase_002955_2);

#define VkglTestCase_002956_1 "dEQP-GLES2.functional.shaders.indexing.tmp_"
#define VkglTestCase_002956_2 "array.vec4_static_write_static_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002956, VkglTestCase_002956_1, VkglTestCase_002956_2);

#define VkglTestCase_002957_1 "dEQP-GLES2.functional.shaders.indexing.tmp_"
#define VkglTestCase_002957_2 "array.vec4_static_write_dynamic_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002957, VkglTestCase_002957_1, VkglTestCase_002957_2);

#define VkglTestCase_002958_1 "dEQP-GLES2.functional.shaders.indexing.tmp_a"
#define VkglTestCase_002958_2 "rray.vec4_static_write_dynamic_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002958, VkglTestCase_002958_1, VkglTestCase_002958_2);

#define VkglTestCase_002959_1 "dEQP-GLES2.functional.shaders.indexing.tmp_ar"
#define VkglTestCase_002959_2 "ray.vec4_static_write_static_loop_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002959, VkglTestCase_002959_1, VkglTestCase_002959_2);

#define VkglTestCase_002960_1 "dEQP-GLES2.functional.shaders.indexing.tmp_arr"
#define VkglTestCase_002960_2 "ay.vec4_static_write_static_loop_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002960, VkglTestCase_002960_1, VkglTestCase_002960_2);

#define VkglTestCase_002961_1 "dEQP-GLES2.functional.shaders.indexing.tmp_ar"
#define VkglTestCase_002961_2 "ray.vec4_static_write_dynamic_loop_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002961, VkglTestCase_002961_1, VkglTestCase_002961_2);

#define VkglTestCase_002962_1 "dEQP-GLES2.functional.shaders.indexing.tmp_arr"
#define VkglTestCase_002962_2 "ay.vec4_static_write_dynamic_loop_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002962, VkglTestCase_002962_1, VkglTestCase_002962_2);

#define VkglTestCase_002963_1 "dEQP-GLES2.functional.shaders.indexing.tmp_"
#define VkglTestCase_002963_2 "array.vec4_dynamic_write_static_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002963, VkglTestCase_002963_1, VkglTestCase_002963_2);

#define VkglTestCase_002964_1 "dEQP-GLES2.functional.shaders.indexing.tmp_a"
#define VkglTestCase_002964_2 "rray.vec4_dynamic_write_static_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002964, VkglTestCase_002964_1, VkglTestCase_002964_2);

#define VkglTestCase_002965_1 "dEQP-GLES2.functional.shaders.indexing.tmp_"
#define VkglTestCase_002965_2 "array.vec4_dynamic_write_dynamic_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002965, VkglTestCase_002965_1, VkglTestCase_002965_2);

#define VkglTestCase_002966_1 "dEQP-GLES2.functional.shaders.indexing.tmp_a"
#define VkglTestCase_002966_2 "rray.vec4_dynamic_write_dynamic_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002966, VkglTestCase_002966_1, VkglTestCase_002966_2);

#define VkglTestCase_002967_1 "dEQP-GLES2.functional.shaders.indexing.tmp_ar"
#define VkglTestCase_002967_2 "ray.vec4_dynamic_write_static_loop_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002967, VkglTestCase_002967_1, VkglTestCase_002967_2);

#define VkglTestCase_002968_1 "dEQP-GLES2.functional.shaders.indexing.tmp_arr"
#define VkglTestCase_002968_2 "ay.vec4_dynamic_write_static_loop_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002968, VkglTestCase_002968_1, VkglTestCase_002968_2);

#define VkglTestCase_002969_1 "dEQP-GLES2.functional.shaders.indexing.tmp_arr"
#define VkglTestCase_002969_2 "ay.vec4_dynamic_write_dynamic_loop_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002969, VkglTestCase_002969_1, VkglTestCase_002969_2);

#define VkglTestCase_002970_1 "dEQP-GLES2.functional.shaders.indexing.tmp_arra"
#define VkglTestCase_002970_2 "y.vec4_dynamic_write_dynamic_loop_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002970, VkglTestCase_002970_1, VkglTestCase_002970_2);

#define VkglTestCase_002971_1 "dEQP-GLES2.functional.shaders.indexing.tmp_ar"
#define VkglTestCase_002971_2 "ray.vec4_static_loop_write_static_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002971, VkglTestCase_002971_1, VkglTestCase_002971_2);

#define VkglTestCase_002972_1 "dEQP-GLES2.functional.shaders.indexing.tmp_arr"
#define VkglTestCase_002972_2 "ay.vec4_static_loop_write_static_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002972, VkglTestCase_002972_1, VkglTestCase_002972_2);

#define VkglTestCase_002973_1 "dEQP-GLES2.functional.shaders.indexing.tmp_ar"
#define VkglTestCase_002973_2 "ray.vec4_static_loop_write_dynamic_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002973, VkglTestCase_002973_1, VkglTestCase_002973_2);

#define VkglTestCase_002974_1 "dEQP-GLES2.functional.shaders.indexing.tmp_arr"
#define VkglTestCase_002974_2 "ay.vec4_static_loop_write_dynamic_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002974, VkglTestCase_002974_1, VkglTestCase_002974_2);

#define VkglTestCase_002975_1 "dEQP-GLES2.functional.shaders.indexing.tmp_arra"
#define VkglTestCase_002975_2 "y.vec4_static_loop_write_static_loop_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002975, VkglTestCase_002975_1, VkglTestCase_002975_2);

#define VkglTestCase_002976_1 "dEQP-GLES2.functional.shaders.indexing.tmp_array"
#define VkglTestCase_002976_2 ".vec4_static_loop_write_static_loop_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002976, VkglTestCase_002976_1, VkglTestCase_002976_2);

#define VkglTestCase_002977_1 "dEQP-GLES2.functional.shaders.indexing.tmp_array"
#define VkglTestCase_002977_2 ".vec4_static_loop_write_dynamic_loop_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002977, VkglTestCase_002977_1, VkglTestCase_002977_2);

#define VkglTestCase_002978_1 "dEQP-GLES2.functional.shaders.indexing.tmp_array."
#define VkglTestCase_002978_2 "vec4_static_loop_write_dynamic_loop_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002978, VkglTestCase_002978_1, VkglTestCase_002978_2);

#define VkglTestCase_002979_1 "dEQP-GLES2.functional.shaders.indexing.tmp_ar"
#define VkglTestCase_002979_2 "ray.vec4_dynamic_loop_write_static_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002979, VkglTestCase_002979_1, VkglTestCase_002979_2);

#define VkglTestCase_002980_1 "dEQP-GLES2.functional.shaders.indexing.tmp_arr"
#define VkglTestCase_002980_2 "ay.vec4_dynamic_loop_write_static_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002980, VkglTestCase_002980_1, VkglTestCase_002980_2);

#define VkglTestCase_002981_1 "dEQP-GLES2.functional.shaders.indexing.tmp_arr"
#define VkglTestCase_002981_2 "ay.vec4_dynamic_loop_write_dynamic_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002981, VkglTestCase_002981_1, VkglTestCase_002981_2);

#define VkglTestCase_002982_1 "dEQP-GLES2.functional.shaders.indexing.tmp_arra"
#define VkglTestCase_002982_2 "y.vec4_dynamic_loop_write_dynamic_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002982, VkglTestCase_002982_1, VkglTestCase_002982_2);

#define VkglTestCase_002983_1 "dEQP-GLES2.functional.shaders.indexing.tmp_array"
#define VkglTestCase_002983_2 ".vec4_dynamic_loop_write_static_loop_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002983, VkglTestCase_002983_1, VkglTestCase_002983_2);

#define VkglTestCase_002984_1 "dEQP-GLES2.functional.shaders.indexing.tmp_array."
#define VkglTestCase_002984_2 "vec4_dynamic_loop_write_static_loop_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002984, VkglTestCase_002984_1, VkglTestCase_002984_2);

#define VkglTestCase_002985_1 "dEQP-GLES2.functional.shaders.indexing.tmp_array"
#define VkglTestCase_002985_2 ".vec4_dynamic_loop_write_dynamic_loop_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002985, VkglTestCase_002985_1, VkglTestCase_002985_2);

#define VkglTestCase_002986_1 "dEQP-GLES2.functional.shaders.indexing.tmp_array."
#define VkglTestCase_002986_2 "vec4_dynamic_loop_write_dynamic_loop_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002986, VkglTestCase_002986_1, VkglTestCase_002986_2);

#define VkglTestCase_002987_1 "dEQP-GLES2.functional.shaders.indexing.tmp"
#define VkglTestCase_002987_2 "_array.vec4_const_write_static_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002987, VkglTestCase_002987_1, VkglTestCase_002987_2);

#define VkglTestCase_002988_1 "dEQP-GLES2.functional.shaders.indexing.tmp_"
#define VkglTestCase_002988_2 "array.vec4_const_write_static_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002988, VkglTestCase_002988_1, VkglTestCase_002988_2);

#define VkglTestCase_002989_1 "dEQP-GLES2.functional.shaders.indexing.tmp"
#define VkglTestCase_002989_2 "_array.vec4_const_write_dynamic_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002989, VkglTestCase_002989_1, VkglTestCase_002989_2);

#define VkglTestCase_002990_1 "dEQP-GLES2.functional.shaders.indexing.tmp_"
#define VkglTestCase_002990_2 "array.vec4_const_write_dynamic_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002990, VkglTestCase_002990_1, VkglTestCase_002990_2);

#define VkglTestCase_002991_1 "dEQP-GLES2.functional.shaders.indexing.tmp_a"
#define VkglTestCase_002991_2 "rray.vec4_const_write_static_loop_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002991, VkglTestCase_002991_1, VkglTestCase_002991_2);

#define VkglTestCase_002992_1 "dEQP-GLES2.functional.shaders.indexing.tmp_ar"
#define VkglTestCase_002992_2 "ray.vec4_const_write_static_loop_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002992, VkglTestCase_002992_1, VkglTestCase_002992_2);

#define VkglTestCase_002993_1 "dEQP-GLES2.functional.shaders.indexing.tmp_ar"
#define VkglTestCase_002993_2 "ray.vec4_const_write_dynamic_loop_read_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002993, VkglTestCase_002993_1, VkglTestCase_002993_2);

#define VkglTestCase_002994_1 "dEQP-GLES2.functional.shaders.indexing.tmp_arr"
#define VkglTestCase_002994_2 "ay.vec4_const_write_dynamic_loop_read_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002994, VkglTestCase_002994_1, VkglTestCase_002994_2);
