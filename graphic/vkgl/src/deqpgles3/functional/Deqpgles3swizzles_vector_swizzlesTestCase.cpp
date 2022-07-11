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

<<<<<<< HEAD
#include <climits>
#include <gtest/gtest.h>
#include "../Deqpgles3BaseFunc.h"
#include "../ActsDeqpgles30003TestSuite.h"
#include "shrinkdefine.h"
=======
#include <gtest/gtest.h>
#include "../Deqpgles3BaseFunc.h"
#include "../ActsDeqpgles30003TestSuite.h"
>>>>>>> 119876a9a4cc1abc142c2cbcacfd0e9275690a87

using namespace std;
using namespace testing::ext;
using namespace OHOS;

<<<<<<< HEAD
#define VkglTestCase_002846_1 "dEQP-GLES3.functional.shaders.swizzles"
#define VkglTestCase_002846_2 ".vector_swizzles.mediump_vec2_x_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002846, VkglTestCase_002846_1, VkglTestCase_002846_2);

#define VkglTestCase_002847_1 "dEQP-GLES3.functional.shaders.swizzles."
#define VkglTestCase_002847_2 "vector_swizzles.mediump_vec2_x_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002847, VkglTestCase_002847_1, VkglTestCase_002847_2);

#define VkglTestCase_002848_1 "dEQP-GLES3.functional.shaders.swizzles"
#define VkglTestCase_002848_2 ".vector_swizzles.mediump_vec2_xx_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002848, VkglTestCase_002848_1, VkglTestCase_002848_2);

#define VkglTestCase_002849_1 "dEQP-GLES3.functional.shaders.swizzles."
#define VkglTestCase_002849_2 "vector_swizzles.mediump_vec2_xx_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002849, VkglTestCase_002849_1, VkglTestCase_002849_2);

#define VkglTestCase_002850_1 "dEQP-GLES3.functional.shaders.swizzles"
#define VkglTestCase_002850_2 ".vector_swizzles.mediump_vec2_xy_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002850, VkglTestCase_002850_1, VkglTestCase_002850_2);

#define VkglTestCase_002851_1 "dEQP-GLES3.functional.shaders.swizzles."
#define VkglTestCase_002851_2 "vector_swizzles.mediump_vec2_xy_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002851, VkglTestCase_002851_1, VkglTestCase_002851_2);

#define VkglTestCase_002852_1 "dEQP-GLES3.functional.shaders.swizzles"
#define VkglTestCase_002852_2 ".vector_swizzles.mediump_vec2_yx_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002852, VkglTestCase_002852_1, VkglTestCase_002852_2);

#define VkglTestCase_002853_1 "dEQP-GLES3.functional.shaders.swizzles."
#define VkglTestCase_002853_2 "vector_swizzles.mediump_vec2_yx_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002853, VkglTestCase_002853_1, VkglTestCase_002853_2);

#define VkglTestCase_002854_1 "dEQP-GLES3.functional.shaders.swizzles."
#define VkglTestCase_002854_2 "vector_swizzles.mediump_vec2_yxy_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002854, VkglTestCase_002854_1, VkglTestCase_002854_2);

#define VkglTestCase_002855_1 "dEQP-GLES3.functional.shaders.swizzles.v"
#define VkglTestCase_002855_2 "ector_swizzles.mediump_vec2_yxy_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002855, VkglTestCase_002855_1, VkglTestCase_002855_2);

#define VkglTestCase_002856_1 "dEQP-GLES3.functional.shaders.swizzles."
#define VkglTestCase_002856_2 "vector_swizzles.mediump_vec2_xyxx_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002856, VkglTestCase_002856_1, VkglTestCase_002856_2);

#define VkglTestCase_002857_1 "dEQP-GLES3.functional.shaders.swizzles.v"
#define VkglTestCase_002857_2 "ector_swizzles.mediump_vec2_xyxx_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002857, VkglTestCase_002857_1, VkglTestCase_002857_2);

#define VkglTestCase_002858_1 "dEQP-GLES3.functional.shaders.swizzles."
#define VkglTestCase_002858_2 "vector_swizzles.mediump_vec2_yyyy_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002858, VkglTestCase_002858_1, VkglTestCase_002858_2);

#define VkglTestCase_002859_1 "dEQP-GLES3.functional.shaders.swizzles.v"
#define VkglTestCase_002859_2 "ector_swizzles.mediump_vec2_yyyy_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002859, VkglTestCase_002859_1, VkglTestCase_002859_2);

#define VkglTestCase_002860_1 "dEQP-GLES3.functional.shaders.swizzles"
#define VkglTestCase_002860_2 ".vector_swizzles.mediump_vec2_s_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002860, VkglTestCase_002860_1, VkglTestCase_002860_2);

#define VkglTestCase_002861_1 "dEQP-GLES3.functional.shaders.swizzles."
#define VkglTestCase_002861_2 "vector_swizzles.mediump_vec2_s_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002861, VkglTestCase_002861_1, VkglTestCase_002861_2);

#define VkglTestCase_002862_1 "dEQP-GLES3.functional.shaders.swizzles"
#define VkglTestCase_002862_2 ".vector_swizzles.mediump_vec2_ss_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002862, VkglTestCase_002862_1, VkglTestCase_002862_2);

#define VkglTestCase_002863_1 "dEQP-GLES3.functional.shaders.swizzles."
#define VkglTestCase_002863_2 "vector_swizzles.mediump_vec2_ss_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002863, VkglTestCase_002863_1, VkglTestCase_002863_2);

#define VkglTestCase_002864_1 "dEQP-GLES3.functional.shaders.swizzles"
#define VkglTestCase_002864_2 ".vector_swizzles.mediump_vec2_st_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002864, VkglTestCase_002864_1, VkglTestCase_002864_2);

#define VkglTestCase_002865_1 "dEQP-GLES3.functional.shaders.swizzles."
#define VkglTestCase_002865_2 "vector_swizzles.mediump_vec2_st_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002865, VkglTestCase_002865_1, VkglTestCase_002865_2);

#define VkglTestCase_002866_1 "dEQP-GLES3.functional.shaders.swizzles"
#define VkglTestCase_002866_2 ".vector_swizzles.mediump_vec2_ts_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002866, VkglTestCase_002866_1, VkglTestCase_002866_2);

#define VkglTestCase_002867_1 "dEQP-GLES3.functional.shaders.swizzles."
#define VkglTestCase_002867_2 "vector_swizzles.mediump_vec2_ts_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002867, VkglTestCase_002867_1, VkglTestCase_002867_2);

#define VkglTestCase_002868_1 "dEQP-GLES3.functional.shaders.swizzles."
#define VkglTestCase_002868_2 "vector_swizzles.mediump_vec2_tst_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002868, VkglTestCase_002868_1, VkglTestCase_002868_2);

#define VkglTestCase_002869_1 "dEQP-GLES3.functional.shaders.swizzles.v"
#define VkglTestCase_002869_2 "ector_swizzles.mediump_vec2_tst_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002869, VkglTestCase_002869_1, VkglTestCase_002869_2);

#define VkglTestCase_002870_1 "dEQP-GLES3.functional.shaders.swizzles."
#define VkglTestCase_002870_2 "vector_swizzles.mediump_vec2_stss_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002870, VkglTestCase_002870_1, VkglTestCase_002870_2);

#define VkglTestCase_002871_1 "dEQP-GLES3.functional.shaders.swizzles.v"
#define VkglTestCase_002871_2 "ector_swizzles.mediump_vec2_stss_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002871, VkglTestCase_002871_1, VkglTestCase_002871_2);

#define VkglTestCase_002872_1 "dEQP-GLES3.functional.shaders.swizzles."
#define VkglTestCase_002872_2 "vector_swizzles.mediump_vec2_tttt_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002872, VkglTestCase_002872_1, VkglTestCase_002872_2);

#define VkglTestCase_002873_1 "dEQP-GLES3.functional.shaders.swizzles.v"
#define VkglTestCase_002873_2 "ector_swizzles.mediump_vec2_tttt_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002873, VkglTestCase_002873_1, VkglTestCase_002873_2);

#define VkglTestCase_002874_1 "dEQP-GLES3.functional.shaders.swizzles"
#define VkglTestCase_002874_2 ".vector_swizzles.mediump_vec2_r_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002874, VkglTestCase_002874_1, VkglTestCase_002874_2);

#define VkglTestCase_002875_1 "dEQP-GLES3.functional.shaders.swizzles."
#define VkglTestCase_002875_2 "vector_swizzles.mediump_vec2_r_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002875, VkglTestCase_002875_1, VkglTestCase_002875_2);

#define VkglTestCase_002876_1 "dEQP-GLES3.functional.shaders.swizzles"
#define VkglTestCase_002876_2 ".vector_swizzles.mediump_vec2_rr_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002876, VkglTestCase_002876_1, VkglTestCase_002876_2);

#define VkglTestCase_002877_1 "dEQP-GLES3.functional.shaders.swizzles."
#define VkglTestCase_002877_2 "vector_swizzles.mediump_vec2_rr_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002877, VkglTestCase_002877_1, VkglTestCase_002877_2);

#define VkglTestCase_002878_1 "dEQP-GLES3.functional.shaders.swizzles"
#define VkglTestCase_002878_2 ".vector_swizzles.mediump_vec2_rg_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002878, VkglTestCase_002878_1, VkglTestCase_002878_2);

#define VkglTestCase_002879_1 "dEQP-GLES3.functional.shaders.swizzles."
#define VkglTestCase_002879_2 "vector_swizzles.mediump_vec2_rg_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002879, VkglTestCase_002879_1, VkglTestCase_002879_2);

#define VkglTestCase_002880_1 "dEQP-GLES3.functional.shaders.swizzles"
#define VkglTestCase_002880_2 ".vector_swizzles.mediump_vec2_gr_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002880, VkglTestCase_002880_1, VkglTestCase_002880_2);

#define VkglTestCase_002881_1 "dEQP-GLES3.functional.shaders.swizzles."
#define VkglTestCase_002881_2 "vector_swizzles.mediump_vec2_gr_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002881, VkglTestCase_002881_1, VkglTestCase_002881_2);

#define VkglTestCase_002882_1 "dEQP-GLES3.functional.shaders.swizzles."
#define VkglTestCase_002882_2 "vector_swizzles.mediump_vec2_grg_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002882, VkglTestCase_002882_1, VkglTestCase_002882_2);

#define VkglTestCase_002883_1 "dEQP-GLES3.functional.shaders.swizzles.v"
#define VkglTestCase_002883_2 "ector_swizzles.mediump_vec2_grg_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002883, VkglTestCase_002883_1, VkglTestCase_002883_2);

#define VkglTestCase_002884_1 "dEQP-GLES3.functional.shaders.swizzles."
#define VkglTestCase_002884_2 "vector_swizzles.mediump_vec2_rgrr_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002884, VkglTestCase_002884_1, VkglTestCase_002884_2);

#define VkglTestCase_002885_1 "dEQP-GLES3.functional.shaders.swizzles.v"
#define VkglTestCase_002885_2 "ector_swizzles.mediump_vec2_rgrr_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002885, VkglTestCase_002885_1, VkglTestCase_002885_2);

#define VkglTestCase_002886_1 "dEQP-GLES3.functional.shaders.swizzles."
#define VkglTestCase_002886_2 "vector_swizzles.mediump_vec2_gggg_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002886, VkglTestCase_002886_1, VkglTestCase_002886_2);

#define VkglTestCase_002887_1 "dEQP-GLES3.functional.shaders.swizzles.v"
#define VkglTestCase_002887_2 "ector_swizzles.mediump_vec2_gggg_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002887, VkglTestCase_002887_1, VkglTestCase_002887_2);

#define VkglTestCase_002888_1 "dEQP-GLES3.functional.shaders.swizzles"
#define VkglTestCase_002888_2 ".vector_swizzles.mediump_vec3_x_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002888, VkglTestCase_002888_1, VkglTestCase_002888_2);

#define VkglTestCase_002889_1 "dEQP-GLES3.functional.shaders.swizzles."
#define VkglTestCase_002889_2 "vector_swizzles.mediump_vec3_x_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002889, VkglTestCase_002889_1, VkglTestCase_002889_2);

#define VkglTestCase_002890_1 "dEQP-GLES3.functional.shaders.swizzles"
#define VkglTestCase_002890_2 ".vector_swizzles.mediump_vec3_z_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002890, VkglTestCase_002890_1, VkglTestCase_002890_2);

#define VkglTestCase_002891_1 "dEQP-GLES3.functional.shaders.swizzles."
#define VkglTestCase_002891_2 "vector_swizzles.mediump_vec3_z_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002891, VkglTestCase_002891_1, VkglTestCase_002891_2);

#define VkglTestCase_002892_1 "dEQP-GLES3.functional.shaders.swizzles"
#define VkglTestCase_002892_2 ".vector_swizzles.mediump_vec3_xz_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002892, VkglTestCase_002892_1, VkglTestCase_002892_2);

#define VkglTestCase_002893_1 "dEQP-GLES3.functional.shaders.swizzles."
#define VkglTestCase_002893_2 "vector_swizzles.mediump_vec3_xz_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002893, VkglTestCase_002893_1, VkglTestCase_002893_2);

#define VkglTestCase_002894_1 "dEQP-GLES3.functional.shaders.swizzles"
#define VkglTestCase_002894_2 ".vector_swizzles.mediump_vec3_zz_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002894, VkglTestCase_002894_1, VkglTestCase_002894_2);

#define VkglTestCase_002895_1 "dEQP-GLES3.functional.shaders.swizzles."
#define VkglTestCase_002895_2 "vector_swizzles.mediump_vec3_zz_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002895, VkglTestCase_002895_1, VkglTestCase_002895_2);

#define VkglTestCase_002896_1 "dEQP-GLES3.functional.shaders.swizzles."
#define VkglTestCase_002896_2 "vector_swizzles.mediump_vec3_xyz_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002896, VkglTestCase_002896_1, VkglTestCase_002896_2);

#define VkglTestCase_002897_1 "dEQP-GLES3.functional.shaders.swizzles.v"
#define VkglTestCase_002897_2 "ector_swizzles.mediump_vec3_xyz_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002897, VkglTestCase_002897_1, VkglTestCase_002897_2);

#define VkglTestCase_002898_1 "dEQP-GLES3.functional.shaders.swizzles."
#define VkglTestCase_002898_2 "vector_swizzles.mediump_vec3_zyx_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002898, VkglTestCase_002898_1, VkglTestCase_002898_2);

#define VkglTestCase_002899_1 "dEQP-GLES3.functional.shaders.swizzles.v"
#define VkglTestCase_002899_2 "ector_swizzles.mediump_vec3_zyx_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002899, VkglTestCase_002899_1, VkglTestCase_002899_2);

#define VkglTestCase_002900_1 "dEQP-GLES3.functional.shaders.swizzles."
#define VkglTestCase_002900_2 "vector_swizzles.mediump_vec3_xxx_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002900, VkglTestCase_002900_1, VkglTestCase_002900_2);

#define VkglTestCase_002901_1 "dEQP-GLES3.functional.shaders.swizzles.v"
#define VkglTestCase_002901_2 "ector_swizzles.mediump_vec3_xxx_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002901, VkglTestCase_002901_1, VkglTestCase_002901_2);

#define VkglTestCase_002902_1 "dEQP-GLES3.functional.shaders.swizzles."
#define VkglTestCase_002902_2 "vector_swizzles.mediump_vec3_zzz_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002902, VkglTestCase_002902_1, VkglTestCase_002902_2);

#define VkglTestCase_002903_1 "dEQP-GLES3.functional.shaders.swizzles.v"
#define VkglTestCase_002903_2 "ector_swizzles.mediump_vec3_zzz_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002903, VkglTestCase_002903_1, VkglTestCase_002903_2);

#define VkglTestCase_002904_1 "dEQP-GLES3.functional.shaders.swizzles."
#define VkglTestCase_002904_2 "vector_swizzles.mediump_vec3_zzy_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002904, VkglTestCase_002904_1, VkglTestCase_002904_2);

#define VkglTestCase_002905_1 "dEQP-GLES3.functional.shaders.swizzles.v"
#define VkglTestCase_002905_2 "ector_swizzles.mediump_vec3_zzy_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002905, VkglTestCase_002905_1, VkglTestCase_002905_2);

#define VkglTestCase_002906_1 "dEQP-GLES3.functional.shaders.swizzles."
#define VkglTestCase_002906_2 "vector_swizzles.mediump_vec3_yxy_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002906, VkglTestCase_002906_1, VkglTestCase_002906_2);

#define VkglTestCase_002907_1 "dEQP-GLES3.functional.shaders.swizzles.v"
#define VkglTestCase_002907_2 "ector_swizzles.mediump_vec3_yxy_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002907, VkglTestCase_002907_1, VkglTestCase_002907_2);

#define VkglTestCase_002908_1 "dEQP-GLES3.functional.shaders.swizzles."
#define VkglTestCase_002908_2 "vector_swizzles.mediump_vec3_xzx_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002908, VkglTestCase_002908_1, VkglTestCase_002908_2);

#define VkglTestCase_002909_1 "dEQP-GLES3.functional.shaders.swizzles.v"
#define VkglTestCase_002909_2 "ector_swizzles.mediump_vec3_xzx_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002909, VkglTestCase_002909_1, VkglTestCase_002909_2);

#define VkglTestCase_002910_1 "dEQP-GLES3.functional.shaders.swizzles."
#define VkglTestCase_002910_2 "vector_swizzles.mediump_vec3_xyyx_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002910, VkglTestCase_002910_1, VkglTestCase_002910_2);

#define VkglTestCase_002911_1 "dEQP-GLES3.functional.shaders.swizzles.v"
#define VkglTestCase_002911_2 "ector_swizzles.mediump_vec3_xyyx_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002911, VkglTestCase_002911_1, VkglTestCase_002911_2);

#define VkglTestCase_002912_1 "dEQP-GLES3.functional.shaders.swizzles."
#define VkglTestCase_002912_2 "vector_swizzles.mediump_vec3_zzzz_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002912, VkglTestCase_002912_1, VkglTestCase_002912_2);

#define VkglTestCase_002913_1 "dEQP-GLES3.functional.shaders.swizzles.v"
#define VkglTestCase_002913_2 "ector_swizzles.mediump_vec3_zzzz_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002913, VkglTestCase_002913_1, VkglTestCase_002913_2);

#define VkglTestCase_002914_1 "dEQP-GLES3.functional.shaders.swizzles"
#define VkglTestCase_002914_2 ".vector_swizzles.mediump_vec3_s_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002914, VkglTestCase_002914_1, VkglTestCase_002914_2);

#define VkglTestCase_002915_1 "dEQP-GLES3.functional.shaders.swizzles."
#define VkglTestCase_002915_2 "vector_swizzles.mediump_vec3_s_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002915, VkglTestCase_002915_1, VkglTestCase_002915_2);

#define VkglTestCase_002916_1 "dEQP-GLES3.functional.shaders.swizzles"
#define VkglTestCase_002916_2 ".vector_swizzles.mediump_vec3_p_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002916, VkglTestCase_002916_1, VkglTestCase_002916_2);

#define VkglTestCase_002917_1 "dEQP-GLES3.functional.shaders.swizzles."
#define VkglTestCase_002917_2 "vector_swizzles.mediump_vec3_p_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002917, VkglTestCase_002917_1, VkglTestCase_002917_2);

#define VkglTestCase_002918_1 "dEQP-GLES3.functional.shaders.swizzles"
#define VkglTestCase_002918_2 ".vector_swizzles.mediump_vec3_sp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002918, VkglTestCase_002918_1, VkglTestCase_002918_2);

#define VkglTestCase_002919_1 "dEQP-GLES3.functional.shaders.swizzles."
#define VkglTestCase_002919_2 "vector_swizzles.mediump_vec3_sp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002919, VkglTestCase_002919_1, VkglTestCase_002919_2);

#define VkglTestCase_002920_1 "dEQP-GLES3.functional.shaders.swizzles"
#define VkglTestCase_002920_2 ".vector_swizzles.mediump_vec3_pp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002920, VkglTestCase_002920_1, VkglTestCase_002920_2);

#define VkglTestCase_002921_1 "dEQP-GLES3.functional.shaders.swizzles."
#define VkglTestCase_002921_2 "vector_swizzles.mediump_vec3_pp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002921, VkglTestCase_002921_1, VkglTestCase_002921_2);

#define VkglTestCase_002922_1 "dEQP-GLES3.functional.shaders.swizzles."
#define VkglTestCase_002922_2 "vector_swizzles.mediump_vec3_stp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002922, VkglTestCase_002922_1, VkglTestCase_002922_2);

#define VkglTestCase_002923_1 "dEQP-GLES3.functional.shaders.swizzles.v"
#define VkglTestCase_002923_2 "ector_swizzles.mediump_vec3_stp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002923, VkglTestCase_002923_1, VkglTestCase_002923_2);

#define VkglTestCase_002924_1 "dEQP-GLES3.functional.shaders.swizzles."
#define VkglTestCase_002924_2 "vector_swizzles.mediump_vec3_pts_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002924, VkglTestCase_002924_1, VkglTestCase_002924_2);

#define VkglTestCase_002925_1 "dEQP-GLES3.functional.shaders.swizzles.v"
#define VkglTestCase_002925_2 "ector_swizzles.mediump_vec3_pts_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002925, VkglTestCase_002925_1, VkglTestCase_002925_2);

#define VkglTestCase_002926_1 "dEQP-GLES3.functional.shaders.swizzles."
#define VkglTestCase_002926_2 "vector_swizzles.mediump_vec3_sss_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002926, VkglTestCase_002926_1, VkglTestCase_002926_2);

#define VkglTestCase_002927_1 "dEQP-GLES3.functional.shaders.swizzles.v"
#define VkglTestCase_002927_2 "ector_swizzles.mediump_vec3_sss_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002927, VkglTestCase_002927_1, VkglTestCase_002927_2);

#define VkglTestCase_002928_1 "dEQP-GLES3.functional.shaders.swizzles."
#define VkglTestCase_002928_2 "vector_swizzles.mediump_vec3_ppp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002928, VkglTestCase_002928_1, VkglTestCase_002928_2);

#define VkglTestCase_002929_1 "dEQP-GLES3.functional.shaders.swizzles.v"
#define VkglTestCase_002929_2 "ector_swizzles.mediump_vec3_ppp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002929, VkglTestCase_002929_1, VkglTestCase_002929_2);

#define VkglTestCase_002930_1 "dEQP-GLES3.functional.shaders.swizzles."
#define VkglTestCase_002930_2 "vector_swizzles.mediump_vec3_ppt_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002930, VkglTestCase_002930_1, VkglTestCase_002930_2);

#define VkglTestCase_002931_1 "dEQP-GLES3.functional.shaders.swizzles.v"
#define VkglTestCase_002931_2 "ector_swizzles.mediump_vec3_ppt_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002931, VkglTestCase_002931_1, VkglTestCase_002931_2);

#define VkglTestCase_002932_1 "dEQP-GLES3.functional.shaders.swizzles."
#define VkglTestCase_002932_2 "vector_swizzles.mediump_vec3_tst_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002932, VkglTestCase_002932_1, VkglTestCase_002932_2);

#define VkglTestCase_002933_1 "dEQP-GLES3.functional.shaders.swizzles.v"
#define VkglTestCase_002933_2 "ector_swizzles.mediump_vec3_tst_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002933, VkglTestCase_002933_1, VkglTestCase_002933_2);

#define VkglTestCase_002934_1 "dEQP-GLES3.functional.shaders.swizzles."
#define VkglTestCase_002934_2 "vector_swizzles.mediump_vec3_sps_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002934, VkglTestCase_002934_1, VkglTestCase_002934_2);

#define VkglTestCase_002935_1 "dEQP-GLES3.functional.shaders.swizzles.v"
#define VkglTestCase_002935_2 "ector_swizzles.mediump_vec3_sps_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002935, VkglTestCase_002935_1, VkglTestCase_002935_2);

#define VkglTestCase_002936_1 "dEQP-GLES3.functional.shaders.swizzles."
#define VkglTestCase_002936_2 "vector_swizzles.mediump_vec3_stts_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002936, VkglTestCase_002936_1, VkglTestCase_002936_2);

#define VkglTestCase_002937_1 "dEQP-GLES3.functional.shaders.swizzles.v"
#define VkglTestCase_002937_2 "ector_swizzles.mediump_vec3_stts_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002937, VkglTestCase_002937_1, VkglTestCase_002937_2);

#define VkglTestCase_002938_1 "dEQP-GLES3.functional.shaders.swizzles."
#define VkglTestCase_002938_2 "vector_swizzles.mediump_vec3_pppp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002938, VkglTestCase_002938_1, VkglTestCase_002938_2);

#define VkglTestCase_002939_1 "dEQP-GLES3.functional.shaders.swizzles.v"
#define VkglTestCase_002939_2 "ector_swizzles.mediump_vec3_pppp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002939, VkglTestCase_002939_1, VkglTestCase_002939_2);

#define VkglTestCase_002940_1 "dEQP-GLES3.functional.shaders.swizzles"
#define VkglTestCase_002940_2 ".vector_swizzles.mediump_vec3_r_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002940, VkglTestCase_002940_1, VkglTestCase_002940_2);

#define VkglTestCase_002941_1 "dEQP-GLES3.functional.shaders.swizzles."
#define VkglTestCase_002941_2 "vector_swizzles.mediump_vec3_r_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002941, VkglTestCase_002941_1, VkglTestCase_002941_2);

#define VkglTestCase_002942_1 "dEQP-GLES3.functional.shaders.swizzles"
#define VkglTestCase_002942_2 ".vector_swizzles.mediump_vec3_b_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002942, VkglTestCase_002942_1, VkglTestCase_002942_2);

#define VkglTestCase_002943_1 "dEQP-GLES3.functional.shaders.swizzles."
#define VkglTestCase_002943_2 "vector_swizzles.mediump_vec3_b_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002943, VkglTestCase_002943_1, VkglTestCase_002943_2);

#define VkglTestCase_002944_1 "dEQP-GLES3.functional.shaders.swizzles"
#define VkglTestCase_002944_2 ".vector_swizzles.mediump_vec3_rb_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002944, VkglTestCase_002944_1, VkglTestCase_002944_2);

#define VkglTestCase_002945_1 "dEQP-GLES3.functional.shaders.swizzles."
#define VkglTestCase_002945_2 "vector_swizzles.mediump_vec3_rb_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002945, VkglTestCase_002945_1, VkglTestCase_002945_2);

#define VkglTestCase_002946_1 "dEQP-GLES3.functional.shaders.swizzles"
#define VkglTestCase_002946_2 ".vector_swizzles.mediump_vec3_bb_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002946, VkglTestCase_002946_1, VkglTestCase_002946_2);

#define VkglTestCase_002947_1 "dEQP-GLES3.functional.shaders.swizzles."
#define VkglTestCase_002947_2 "vector_swizzles.mediump_vec3_bb_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002947, VkglTestCase_002947_1, VkglTestCase_002947_2);

#define VkglTestCase_002948_1 "dEQP-GLES3.functional.shaders.swizzles."
#define VkglTestCase_002948_2 "vector_swizzles.mediump_vec3_rgb_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002948, VkglTestCase_002948_1, VkglTestCase_002948_2);

#define VkglTestCase_002949_1 "dEQP-GLES3.functional.shaders.swizzles.v"
#define VkglTestCase_002949_2 "ector_swizzles.mediump_vec3_rgb_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002949, VkglTestCase_002949_1, VkglTestCase_002949_2);

#define VkglTestCase_002950_1 "dEQP-GLES3.functional.shaders.swizzles."
#define VkglTestCase_002950_2 "vector_swizzles.mediump_vec3_bgr_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002950, VkglTestCase_002950_1, VkglTestCase_002950_2);

#define VkglTestCase_002951_1 "dEQP-GLES3.functional.shaders.swizzles.v"
#define VkglTestCase_002951_2 "ector_swizzles.mediump_vec3_bgr_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002951, VkglTestCase_002951_1, VkglTestCase_002951_2);

#define VkglTestCase_002952_1 "dEQP-GLES3.functional.shaders.swizzles."
#define VkglTestCase_002952_2 "vector_swizzles.mediump_vec3_rrr_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002952, VkglTestCase_002952_1, VkglTestCase_002952_2);

#define VkglTestCase_002953_1 "dEQP-GLES3.functional.shaders.swizzles.v"
#define VkglTestCase_002953_2 "ector_swizzles.mediump_vec3_rrr_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002953, VkglTestCase_002953_1, VkglTestCase_002953_2);

#define VkglTestCase_002954_1 "dEQP-GLES3.functional.shaders.swizzles."
#define VkglTestCase_002954_2 "vector_swizzles.mediump_vec3_bbb_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002954, VkglTestCase_002954_1, VkglTestCase_002954_2);

#define VkglTestCase_002955_1 "dEQP-GLES3.functional.shaders.swizzles.v"
#define VkglTestCase_002955_2 "ector_swizzles.mediump_vec3_bbb_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002955, VkglTestCase_002955_1, VkglTestCase_002955_2);

#define VkglTestCase_002956_1 "dEQP-GLES3.functional.shaders.swizzles."
#define VkglTestCase_002956_2 "vector_swizzles.mediump_vec3_bbg_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002956, VkglTestCase_002956_1, VkglTestCase_002956_2);

#define VkglTestCase_002957_1 "dEQP-GLES3.functional.shaders.swizzles.v"
#define VkglTestCase_002957_2 "ector_swizzles.mediump_vec3_bbg_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002957, VkglTestCase_002957_1, VkglTestCase_002957_2);

#define VkglTestCase_002958_1 "dEQP-GLES3.functional.shaders.swizzles."
#define VkglTestCase_002958_2 "vector_swizzles.mediump_vec3_grg_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002958, VkglTestCase_002958_1, VkglTestCase_002958_2);

#define VkglTestCase_002959_1 "dEQP-GLES3.functional.shaders.swizzles.v"
#define VkglTestCase_002959_2 "ector_swizzles.mediump_vec3_grg_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002959, VkglTestCase_002959_1, VkglTestCase_002959_2);

#define VkglTestCase_002960_1 "dEQP-GLES3.functional.shaders.swizzles."
#define VkglTestCase_002960_2 "vector_swizzles.mediump_vec3_rbr_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002960, VkglTestCase_002960_1, VkglTestCase_002960_2);

#define VkglTestCase_002961_1 "dEQP-GLES3.functional.shaders.swizzles.v"
#define VkglTestCase_002961_2 "ector_swizzles.mediump_vec3_rbr_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002961, VkglTestCase_002961_1, VkglTestCase_002961_2);

#define VkglTestCase_002962_1 "dEQP-GLES3.functional.shaders.swizzles."
#define VkglTestCase_002962_2 "vector_swizzles.mediump_vec3_rggr_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002962, VkglTestCase_002962_1, VkglTestCase_002962_2);

#define VkglTestCase_002963_1 "dEQP-GLES3.functional.shaders.swizzles.v"
#define VkglTestCase_002963_2 "ector_swizzles.mediump_vec3_rggr_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002963, VkglTestCase_002963_1, VkglTestCase_002963_2);

#define VkglTestCase_002964_1 "dEQP-GLES3.functional.shaders.swizzles."
#define VkglTestCase_002964_2 "vector_swizzles.mediump_vec3_bbbb_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002964, VkglTestCase_002964_1, VkglTestCase_002964_2);

#define VkglTestCase_002965_1 "dEQP-GLES3.functional.shaders.swizzles.v"
#define VkglTestCase_002965_2 "ector_swizzles.mediump_vec3_bbbb_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002965, VkglTestCase_002965_1, VkglTestCase_002965_2);

#define VkglTestCase_002966_1 "dEQP-GLES3.functional.shaders.swizzles"
#define VkglTestCase_002966_2 ".vector_swizzles.mediump_vec4_x_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002966, VkglTestCase_002966_1, VkglTestCase_002966_2);

#define VkglTestCase_002967_1 "dEQP-GLES3.functional.shaders.swizzles."
#define VkglTestCase_002967_2 "vector_swizzles.mediump_vec4_x_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002967, VkglTestCase_002967_1, VkglTestCase_002967_2);

#define VkglTestCase_002968_1 "dEQP-GLES3.functional.shaders.swizzles"
#define VkglTestCase_002968_2 ".vector_swizzles.mediump_vec4_w_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002968, VkglTestCase_002968_1, VkglTestCase_002968_2);

#define VkglTestCase_002969_1 "dEQP-GLES3.functional.shaders.swizzles."
#define VkglTestCase_002969_2 "vector_swizzles.mediump_vec4_w_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002969, VkglTestCase_002969_1, VkglTestCase_002969_2);

#define VkglTestCase_002970_1 "dEQP-GLES3.functional.shaders.swizzles"
#define VkglTestCase_002970_2 ".vector_swizzles.mediump_vec4_wx_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002970, VkglTestCase_002970_1, VkglTestCase_002970_2);

#define VkglTestCase_002971_1 "dEQP-GLES3.functional.shaders.swizzles."
#define VkglTestCase_002971_2 "vector_swizzles.mediump_vec4_wx_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002971, VkglTestCase_002971_1, VkglTestCase_002971_2);

#define VkglTestCase_002972_1 "dEQP-GLES3.functional.shaders.swizzles"
#define VkglTestCase_002972_2 ".vector_swizzles.mediump_vec4_wz_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002972, VkglTestCase_002972_1, VkglTestCase_002972_2);

#define VkglTestCase_002973_1 "dEQP-GLES3.functional.shaders.swizzles."
#define VkglTestCase_002973_2 "vector_swizzles.mediump_vec4_wz_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002973, VkglTestCase_002973_1, VkglTestCase_002973_2);

#define VkglTestCase_002974_1 "dEQP-GLES3.functional.shaders.swizzles."
#define VkglTestCase_002974_2 "vector_swizzles.mediump_vec4_www_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002974, VkglTestCase_002974_1, VkglTestCase_002974_2);

#define VkglTestCase_002975_1 "dEQP-GLES3.functional.shaders.swizzles.v"
#define VkglTestCase_002975_2 "ector_swizzles.mediump_vec4_www_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002975, VkglTestCase_002975_1, VkglTestCase_002975_2);

#define VkglTestCase_002976_1 "dEQP-GLES3.functional.shaders.swizzles."
#define VkglTestCase_002976_2 "vector_swizzles.mediump_vec4_yyw_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002976, VkglTestCase_002976_1, VkglTestCase_002976_2);

#define VkglTestCase_002977_1 "dEQP-GLES3.functional.shaders.swizzles.v"
#define VkglTestCase_002977_2 "ector_swizzles.mediump_vec4_yyw_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002977, VkglTestCase_002977_1, VkglTestCase_002977_2);

#define VkglTestCase_002978_1 "dEQP-GLES3.functional.shaders.swizzles."
#define VkglTestCase_002978_2 "vector_swizzles.mediump_vec4_wzy_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002978, VkglTestCase_002978_1, VkglTestCase_002978_2);

#define VkglTestCase_002979_1 "dEQP-GLES3.functional.shaders.swizzles.v"
#define VkglTestCase_002979_2 "ector_swizzles.mediump_vec4_wzy_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002979, VkglTestCase_002979_1, VkglTestCase_002979_2);

#define VkglTestCase_002980_1 "dEQP-GLES3.functional.shaders.swizzles."
#define VkglTestCase_002980_2 "vector_swizzles.mediump_vec4_xyzw_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002980, VkglTestCase_002980_1, VkglTestCase_002980_2);

#define VkglTestCase_002981_1 "dEQP-GLES3.functional.shaders.swizzles.v"
#define VkglTestCase_002981_2 "ector_swizzles.mediump_vec4_xyzw_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002981, VkglTestCase_002981_1, VkglTestCase_002981_2);

#define VkglTestCase_002982_1 "dEQP-GLES3.functional.shaders.swizzles."
#define VkglTestCase_002982_2 "vector_swizzles.mediump_vec4_wzyx_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002982, VkglTestCase_002982_1, VkglTestCase_002982_2);

#define VkglTestCase_002983_1 "dEQP-GLES3.functional.shaders.swizzles.v"
#define VkglTestCase_002983_2 "ector_swizzles.mediump_vec4_wzyx_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002983, VkglTestCase_002983_1, VkglTestCase_002983_2);

#define VkglTestCase_002984_1 "dEQP-GLES3.functional.shaders.swizzles."
#define VkglTestCase_002984_2 "vector_swizzles.mediump_vec4_xxxx_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002984, VkglTestCase_002984_1, VkglTestCase_002984_2);

#define VkglTestCase_002985_1 "dEQP-GLES3.functional.shaders.swizzles.v"
#define VkglTestCase_002985_2 "ector_swizzles.mediump_vec4_xxxx_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002985, VkglTestCase_002985_1, VkglTestCase_002985_2);

#define VkglTestCase_002986_1 "dEQP-GLES3.functional.shaders.swizzles."
#define VkglTestCase_002986_2 "vector_swizzles.mediump_vec4_yyyy_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002986, VkglTestCase_002986_1, VkglTestCase_002986_2);

#define VkglTestCase_002987_1 "dEQP-GLES3.functional.shaders.swizzles.v"
#define VkglTestCase_002987_2 "ector_swizzles.mediump_vec4_yyyy_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002987, VkglTestCase_002987_1, VkglTestCase_002987_2);

#define VkglTestCase_002988_1 "dEQP-GLES3.functional.shaders.swizzles."
#define VkglTestCase_002988_2 "vector_swizzles.mediump_vec4_wwww_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002988, VkglTestCase_002988_1, VkglTestCase_002988_2);

#define VkglTestCase_002989_1 "dEQP-GLES3.functional.shaders.swizzles.v"
#define VkglTestCase_002989_2 "ector_swizzles.mediump_vec4_wwww_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002989, VkglTestCase_002989_1, VkglTestCase_002989_2);

#define VkglTestCase_002990_1 "dEQP-GLES3.functional.shaders.swizzles."
#define VkglTestCase_002990_2 "vector_swizzles.mediump_vec4_wzzw_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002990, VkglTestCase_002990_1, VkglTestCase_002990_2);

#define VkglTestCase_002991_1 "dEQP-GLES3.functional.shaders.swizzles.v"
#define VkglTestCase_002991_2 "ector_swizzles.mediump_vec4_wzzw_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002991, VkglTestCase_002991_1, VkglTestCase_002991_2);

#define VkglTestCase_002992_1 "dEQP-GLES3.functional.shaders.swizzles."
#define VkglTestCase_002992_2 "vector_swizzles.mediump_vec4_wwwy_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002992, VkglTestCase_002992_1, VkglTestCase_002992_2);

#define VkglTestCase_002993_1 "dEQP-GLES3.functional.shaders.swizzles.v"
#define VkglTestCase_002993_2 "ector_swizzles.mediump_vec4_wwwy_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002993, VkglTestCase_002993_1, VkglTestCase_002993_2);

#define VkglTestCase_002994_1 "dEQP-GLES3.functional.shaders.swizzles."
#define VkglTestCase_002994_2 "vector_swizzles.mediump_vec4_xyxx_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002994, VkglTestCase_002994_1, VkglTestCase_002994_2);

#define VkglTestCase_002995_1 "dEQP-GLES3.functional.shaders.swizzles.v"
#define VkglTestCase_002995_2 "ector_swizzles.mediump_vec4_xyxx_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002995, VkglTestCase_002995_1, VkglTestCase_002995_2);

#define VkglTestCase_002996_1 "dEQP-GLES3.functional.shaders.swizzles."
#define VkglTestCase_002996_2 "vector_swizzles.mediump_vec4_zzwz_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002996, VkglTestCase_002996_1, VkglTestCase_002996_2);

#define VkglTestCase_002997_1 "dEQP-GLES3.functional.shaders.swizzles.v"
#define VkglTestCase_002997_2 "ector_swizzles.mediump_vec4_zzwz_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002997, VkglTestCase_002997_1, VkglTestCase_002997_2);

#define VkglTestCase_002998_1 "dEQP-GLES3.functional.shaders.swizzles"
#define VkglTestCase_002998_2 ".vector_swizzles.mediump_vec4_s_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002998, VkglTestCase_002998_1, VkglTestCase_002998_2);

#define VkglTestCase_002999_1 "dEQP-GLES3.functional.shaders.swizzles."
#define VkglTestCase_002999_2 "vector_swizzles.mediump_vec4_s_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002999, VkglTestCase_002999_1, VkglTestCase_002999_2);

#define VkglTestCase_003000_1 "dEQP-GLES3.functional.shaders.swizzles"
#define VkglTestCase_003000_2 ".vector_swizzles.mediump_vec4_q_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003000, VkglTestCase_003000_1, VkglTestCase_003000_2);

#define VkglTestCase_003001_1 "dEQP-GLES3.functional.shaders.swizzles."
#define VkglTestCase_003001_2 "vector_swizzles.mediump_vec4_q_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003001, VkglTestCase_003001_1, VkglTestCase_003001_2);

#define VkglTestCase_003002_1 "dEQP-GLES3.functional.shaders.swizzles"
#define VkglTestCase_003002_2 ".vector_swizzles.mediump_vec4_qs_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003002, VkglTestCase_003002_1, VkglTestCase_003002_2);

#define VkglTestCase_003003_1 "dEQP-GLES3.functional.shaders.swizzles."
#define VkglTestCase_003003_2 "vector_swizzles.mediump_vec4_qs_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003003, VkglTestCase_003003_1, VkglTestCase_003003_2);

#define VkglTestCase_003004_1 "dEQP-GLES3.functional.shaders.swizzles"
#define VkglTestCase_003004_2 ".vector_swizzles.mediump_vec4_qp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003004, VkglTestCase_003004_1, VkglTestCase_003004_2);

#define VkglTestCase_003005_1 "dEQP-GLES3.functional.shaders.swizzles."
#define VkglTestCase_003005_2 "vector_swizzles.mediump_vec4_qp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003005, VkglTestCase_003005_1, VkglTestCase_003005_2);

#define VkglTestCase_003006_1 "dEQP-GLES3.functional.shaders.swizzles."
#define VkglTestCase_003006_2 "vector_swizzles.mediump_vec4_qqq_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003006, VkglTestCase_003006_1, VkglTestCase_003006_2);

#define VkglTestCase_003007_1 "dEQP-GLES3.functional.shaders.swizzles.v"
#define VkglTestCase_003007_2 "ector_swizzles.mediump_vec4_qqq_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003007, VkglTestCase_003007_1, VkglTestCase_003007_2);

#define VkglTestCase_003008_1 "dEQP-GLES3.functional.shaders.swizzles."
#define VkglTestCase_003008_2 "vector_swizzles.mediump_vec4_ttq_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003008, VkglTestCase_003008_1, VkglTestCase_003008_2);

#define VkglTestCase_003009_1 "dEQP-GLES3.functional.shaders.swizzles.v"
#define VkglTestCase_003009_2 "ector_swizzles.mediump_vec4_ttq_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003009, VkglTestCase_003009_1, VkglTestCase_003009_2);

#define VkglTestCase_003010_1 "dEQP-GLES3.functional.shaders.swizzles."
#define VkglTestCase_003010_2 "vector_swizzles.mediump_vec4_qpt_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003010, VkglTestCase_003010_1, VkglTestCase_003010_2);

#define VkglTestCase_003011_1 "dEQP-GLES3.functional.shaders.swizzles.v"
#define VkglTestCase_003011_2 "ector_swizzles.mediump_vec4_qpt_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003011, VkglTestCase_003011_1, VkglTestCase_003011_2);

#define VkglTestCase_003012_1 "dEQP-GLES3.functional.shaders.swizzles."
#define VkglTestCase_003012_2 "vector_swizzles.mediump_vec4_stpq_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003012, VkglTestCase_003012_1, VkglTestCase_003012_2);

#define VkglTestCase_003013_1 "dEQP-GLES3.functional.shaders.swizzles.v"
#define VkglTestCase_003013_2 "ector_swizzles.mediump_vec4_stpq_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003013, VkglTestCase_003013_1, VkglTestCase_003013_2);

#define VkglTestCase_003014_1 "dEQP-GLES3.functional.shaders.swizzles."
#define VkglTestCase_003014_2 "vector_swizzles.mediump_vec4_qpts_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003014, VkglTestCase_003014_1, VkglTestCase_003014_2);

#define VkglTestCase_003015_1 "dEQP-GLES3.functional.shaders.swizzles.v"
#define VkglTestCase_003015_2 "ector_swizzles.mediump_vec4_qpts_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003015, VkglTestCase_003015_1, VkglTestCase_003015_2);

#define VkglTestCase_003016_1 "dEQP-GLES3.functional.shaders.swizzles."
#define VkglTestCase_003016_2 "vector_swizzles.mediump_vec4_ssss_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003016, VkglTestCase_003016_1, VkglTestCase_003016_2);

#define VkglTestCase_003017_1 "dEQP-GLES3.functional.shaders.swizzles.v"
#define VkglTestCase_003017_2 "ector_swizzles.mediump_vec4_ssss_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003017, VkglTestCase_003017_1, VkglTestCase_003017_2);

#define VkglTestCase_003018_1 "dEQP-GLES3.functional.shaders.swizzles."
#define VkglTestCase_003018_2 "vector_swizzles.mediump_vec4_tttt_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003018, VkglTestCase_003018_1, VkglTestCase_003018_2);

#define VkglTestCase_003019_1 "dEQP-GLES3.functional.shaders.swizzles.v"
#define VkglTestCase_003019_2 "ector_swizzles.mediump_vec4_tttt_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003019, VkglTestCase_003019_1, VkglTestCase_003019_2);

#define VkglTestCase_003020_1 "dEQP-GLES3.functional.shaders.swizzles."
#define VkglTestCase_003020_2 "vector_swizzles.mediump_vec4_qqqq_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003020, VkglTestCase_003020_1, VkglTestCase_003020_2);

#define VkglTestCase_003021_1 "dEQP-GLES3.functional.shaders.swizzles.v"
#define VkglTestCase_003021_2 "ector_swizzles.mediump_vec4_qqqq_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003021, VkglTestCase_003021_1, VkglTestCase_003021_2);

#define VkglTestCase_003022_1 "dEQP-GLES3.functional.shaders.swizzles."
#define VkglTestCase_003022_2 "vector_swizzles.mediump_vec4_qppq_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003022, VkglTestCase_003022_1, VkglTestCase_003022_2);

#define VkglTestCase_003023_1 "dEQP-GLES3.functional.shaders.swizzles.v"
#define VkglTestCase_003023_2 "ector_swizzles.mediump_vec4_qppq_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003023, VkglTestCase_003023_1, VkglTestCase_003023_2);

#define VkglTestCase_003024_1 "dEQP-GLES3.functional.shaders.swizzles."
#define VkglTestCase_003024_2 "vector_swizzles.mediump_vec4_qqqt_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003024, VkglTestCase_003024_1, VkglTestCase_003024_2);

#define VkglTestCase_003025_1 "dEQP-GLES3.functional.shaders.swizzles.v"
#define VkglTestCase_003025_2 "ector_swizzles.mediump_vec4_qqqt_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003025, VkglTestCase_003025_1, VkglTestCase_003025_2);

#define VkglTestCase_003026_1 "dEQP-GLES3.functional.shaders.swizzles."
#define VkglTestCase_003026_2 "vector_swizzles.mediump_vec4_stss_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003026, VkglTestCase_003026_1, VkglTestCase_003026_2);

#define VkglTestCase_003027_1 "dEQP-GLES3.functional.shaders.swizzles.v"
#define VkglTestCase_003027_2 "ector_swizzles.mediump_vec4_stss_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003027, VkglTestCase_003027_1, VkglTestCase_003027_2);

#define VkglTestCase_003028_1 "dEQP-GLES3.functional.shaders.swizzles."
#define VkglTestCase_003028_2 "vector_swizzles.mediump_vec4_ppqp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003028, VkglTestCase_003028_1, VkglTestCase_003028_2);

#define VkglTestCase_003029_1 "dEQP-GLES3.functional.shaders.swizzles.v"
#define VkglTestCase_003029_2 "ector_swizzles.mediump_vec4_ppqp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003029, VkglTestCase_003029_1, VkglTestCase_003029_2);

#define VkglTestCase_003030_1 "dEQP-GLES3.functional.shaders.swizzles"
#define VkglTestCase_003030_2 ".vector_swizzles.mediump_vec4_r_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003030, VkglTestCase_003030_1, VkglTestCase_003030_2);

#define VkglTestCase_003031_1 "dEQP-GLES3.functional.shaders.swizzles."
#define VkglTestCase_003031_2 "vector_swizzles.mediump_vec4_r_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003031, VkglTestCase_003031_1, VkglTestCase_003031_2);

#define VkglTestCase_003032_1 "dEQP-GLES3.functional.shaders.swizzles"
#define VkglTestCase_003032_2 ".vector_swizzles.mediump_vec4_a_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003032, VkglTestCase_003032_1, VkglTestCase_003032_2);

#define VkglTestCase_003033_1 "dEQP-GLES3.functional.shaders.swizzles."
#define VkglTestCase_003033_2 "vector_swizzles.mediump_vec4_a_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003033, VkglTestCase_003033_1, VkglTestCase_003033_2);

#define VkglTestCase_003034_1 "dEQP-GLES3.functional.shaders.swizzles"
#define VkglTestCase_003034_2 ".vector_swizzles.mediump_vec4_ar_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003034, VkglTestCase_003034_1, VkglTestCase_003034_2);

#define VkglTestCase_003035_1 "dEQP-GLES3.functional.shaders.swizzles."
#define VkglTestCase_003035_2 "vector_swizzles.mediump_vec4_ar_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003035, VkglTestCase_003035_1, VkglTestCase_003035_2);

#define VkglTestCase_003036_1 "dEQP-GLES3.functional.shaders.swizzles"
#define VkglTestCase_003036_2 ".vector_swizzles.mediump_vec4_ab_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003036, VkglTestCase_003036_1, VkglTestCase_003036_2);

#define VkglTestCase_003037_1 "dEQP-GLES3.functional.shaders.swizzles."
#define VkglTestCase_003037_2 "vector_swizzles.mediump_vec4_ab_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003037, VkglTestCase_003037_1, VkglTestCase_003037_2);

#define VkglTestCase_003038_1 "dEQP-GLES3.functional.shaders.swizzles."
#define VkglTestCase_003038_2 "vector_swizzles.mediump_vec4_aaa_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003038, VkglTestCase_003038_1, VkglTestCase_003038_2);

#define VkglTestCase_003039_1 "dEQP-GLES3.functional.shaders.swizzles.v"
#define VkglTestCase_003039_2 "ector_swizzles.mediump_vec4_aaa_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003039, VkglTestCase_003039_1, VkglTestCase_003039_2);

#define VkglTestCase_003040_1 "dEQP-GLES3.functional.shaders.swizzles."
#define VkglTestCase_003040_2 "vector_swizzles.mediump_vec4_gga_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003040, VkglTestCase_003040_1, VkglTestCase_003040_2);

#define VkglTestCase_003041_1 "dEQP-GLES3.functional.shaders.swizzles.v"
#define VkglTestCase_003041_2 "ector_swizzles.mediump_vec4_gga_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003041, VkglTestCase_003041_1, VkglTestCase_003041_2);

#define VkglTestCase_003042_1 "dEQP-GLES3.functional.shaders.swizzles."
#define VkglTestCase_003042_2 "vector_swizzles.mediump_vec4_abg_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003042, VkglTestCase_003042_1, VkglTestCase_003042_2);

#define VkglTestCase_003043_1 "dEQP-GLES3.functional.shaders.swizzles.v"
#define VkglTestCase_003043_2 "ector_swizzles.mediump_vec4_abg_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003043, VkglTestCase_003043_1, VkglTestCase_003043_2);

#define VkglTestCase_003044_1 "dEQP-GLES3.functional.shaders.swizzles."
#define VkglTestCase_003044_2 "vector_swizzles.mediump_vec4_rgba_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003044, VkglTestCase_003044_1, VkglTestCase_003044_2);

#define VkglTestCase_003045_1 "dEQP-GLES3.functional.shaders.swizzles.v"
#define VkglTestCase_003045_2 "ector_swizzles.mediump_vec4_rgba_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003045, VkglTestCase_003045_1, VkglTestCase_003045_2);

#define VkglTestCase_003046_1 "dEQP-GLES3.functional.shaders.swizzles."
#define VkglTestCase_003046_2 "vector_swizzles.mediump_vec4_abgr_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003046, VkglTestCase_003046_1, VkglTestCase_003046_2);

#define VkglTestCase_003047_1 "dEQP-GLES3.functional.shaders.swizzles.v"
#define VkglTestCase_003047_2 "ector_swizzles.mediump_vec4_abgr_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003047, VkglTestCase_003047_1, VkglTestCase_003047_2);

#define VkglTestCase_003048_1 "dEQP-GLES3.functional.shaders.swizzles."
#define VkglTestCase_003048_2 "vector_swizzles.mediump_vec4_rrrr_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003048, VkglTestCase_003048_1, VkglTestCase_003048_2);

#define VkglTestCase_003049_1 "dEQP-GLES3.functional.shaders.swizzles.v"
#define VkglTestCase_003049_2 "ector_swizzles.mediump_vec4_rrrr_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003049, VkglTestCase_003049_1, VkglTestCase_003049_2);

#define VkglTestCase_003050_1 "dEQP-GLES3.functional.shaders.swizzles."
#define VkglTestCase_003050_2 "vector_swizzles.mediump_vec4_gggg_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003050, VkglTestCase_003050_1, VkglTestCase_003050_2);

#define VkglTestCase_003051_1 "dEQP-GLES3.functional.shaders.swizzles.v"
#define VkglTestCase_003051_2 "ector_swizzles.mediump_vec4_gggg_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003051, VkglTestCase_003051_1, VkglTestCase_003051_2);

#define VkglTestCase_003052_1 "dEQP-GLES3.functional.shaders.swizzles."
#define VkglTestCase_003052_2 "vector_swizzles.mediump_vec4_aaaa_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003052, VkglTestCase_003052_1, VkglTestCase_003052_2);

#define VkglTestCase_003053_1 "dEQP-GLES3.functional.shaders.swizzles.v"
#define VkglTestCase_003053_2 "ector_swizzles.mediump_vec4_aaaa_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003053, VkglTestCase_003053_1, VkglTestCase_003053_2);

#define VkglTestCase_003054_1 "dEQP-GLES3.functional.shaders.swizzles."
#define VkglTestCase_003054_2 "vector_swizzles.mediump_vec4_abba_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003054, VkglTestCase_003054_1, VkglTestCase_003054_2);

#define VkglTestCase_003055_1 "dEQP-GLES3.functional.shaders.swizzles.v"
#define VkglTestCase_003055_2 "ector_swizzles.mediump_vec4_abba_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003055, VkglTestCase_003055_1, VkglTestCase_003055_2);

#define VkglTestCase_003056_1 "dEQP-GLES3.functional.shaders.swizzles."
#define VkglTestCase_003056_2 "vector_swizzles.mediump_vec4_aaag_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003056, VkglTestCase_003056_1, VkglTestCase_003056_2);

#define VkglTestCase_003057_1 "dEQP-GLES3.functional.shaders.swizzles.v"
#define VkglTestCase_003057_2 "ector_swizzles.mediump_vec4_aaag_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003057, VkglTestCase_003057_1, VkglTestCase_003057_2);

#define VkglTestCase_003058_1 "dEQP-GLES3.functional.shaders.swizzles."
#define VkglTestCase_003058_2 "vector_swizzles.mediump_vec4_rgrr_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003058, VkglTestCase_003058_1, VkglTestCase_003058_2);

#define VkglTestCase_003059_1 "dEQP-GLES3.functional.shaders.swizzles.v"
#define VkglTestCase_003059_2 "ector_swizzles.mediump_vec4_rgrr_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003059, VkglTestCase_003059_1, VkglTestCase_003059_2);

#define VkglTestCase_003060_1 "dEQP-GLES3.functional.shaders.swizzles."
#define VkglTestCase_003060_2 "vector_swizzles.mediump_vec4_bbab_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003060, VkglTestCase_003060_1, VkglTestCase_003060_2);

#define VkglTestCase_003061_1 "dEQP-GLES3.functional.shaders.swizzles.v"
#define VkglTestCase_003061_2 "ector_swizzles.mediump_vec4_bbab_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003061, VkglTestCase_003061_1, VkglTestCase_003061_2);

#define VkglTestCase_003062_1 "dEQP-GLES3.functional.shaders.swizzles"
#define VkglTestCase_003062_2 ".vector_swizzles.mediump_ivec2_x_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003062, VkglTestCase_003062_1, VkglTestCase_003062_2);

#define VkglTestCase_003063_1 "dEQP-GLES3.functional.shaders.swizzles."
#define VkglTestCase_003063_2 "vector_swizzles.mediump_ivec2_x_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003063, VkglTestCase_003063_1, VkglTestCase_003063_2);

#define VkglTestCase_003064_1 "dEQP-GLES3.functional.shaders.swizzles."
#define VkglTestCase_003064_2 "vector_swizzles.mediump_ivec2_xx_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003064, VkglTestCase_003064_1, VkglTestCase_003064_2);

#define VkglTestCase_003065_1 "dEQP-GLES3.functional.shaders.swizzles.v"
#define VkglTestCase_003065_2 "ector_swizzles.mediump_ivec2_xx_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003065, VkglTestCase_003065_1, VkglTestCase_003065_2);

#define VkglTestCase_003066_1 "dEQP-GLES3.functional.shaders.swizzles."
#define VkglTestCase_003066_2 "vector_swizzles.mediump_ivec2_xy_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003066, VkglTestCase_003066_1, VkglTestCase_003066_2);

#define VkglTestCase_003067_1 "dEQP-GLES3.functional.shaders.swizzles.v"
#define VkglTestCase_003067_2 "ector_swizzles.mediump_ivec2_xy_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003067, VkglTestCase_003067_1, VkglTestCase_003067_2);

#define VkglTestCase_003068_1 "dEQP-GLES3.functional.shaders.swizzles."
#define VkglTestCase_003068_2 "vector_swizzles.mediump_ivec2_yx_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003068, VkglTestCase_003068_1, VkglTestCase_003068_2);

#define VkglTestCase_003069_1 "dEQP-GLES3.functional.shaders.swizzles.v"
#define VkglTestCase_003069_2 "ector_swizzles.mediump_ivec2_yx_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003069, VkglTestCase_003069_1, VkglTestCase_003069_2);

#define VkglTestCase_003070_1 "dEQP-GLES3.functional.shaders.swizzles."
#define VkglTestCase_003070_2 "vector_swizzles.mediump_ivec2_yxy_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003070, VkglTestCase_003070_1, VkglTestCase_003070_2);

#define VkglTestCase_003071_1 "dEQP-GLES3.functional.shaders.swizzles.v"
#define VkglTestCase_003071_2 "ector_swizzles.mediump_ivec2_yxy_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003071, VkglTestCase_003071_1, VkglTestCase_003071_2);

#define VkglTestCase_003072_1 "dEQP-GLES3.functional.shaders.swizzles.v"
#define VkglTestCase_003072_2 "ector_swizzles.mediump_ivec2_xyxx_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003072, VkglTestCase_003072_1, VkglTestCase_003072_2);

#define VkglTestCase_003073_1 "dEQP-GLES3.functional.shaders.swizzles.ve"
#define VkglTestCase_003073_2 "ctor_swizzles.mediump_ivec2_xyxx_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003073, VkglTestCase_003073_1, VkglTestCase_003073_2);

#define VkglTestCase_003074_1 "dEQP-GLES3.functional.shaders.swizzles.v"
#define VkglTestCase_003074_2 "ector_swizzles.mediump_ivec2_yyyy_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003074, VkglTestCase_003074_1, VkglTestCase_003074_2);

#define VkglTestCase_003075_1 "dEQP-GLES3.functional.shaders.swizzles.ve"
#define VkglTestCase_003075_2 "ctor_swizzles.mediump_ivec2_yyyy_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003075, VkglTestCase_003075_1, VkglTestCase_003075_2);

#define VkglTestCase_003076_1 "dEQP-GLES3.functional.shaders.swizzles"
#define VkglTestCase_003076_2 ".vector_swizzles.mediump_ivec2_s_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003076, VkglTestCase_003076_1, VkglTestCase_003076_2);

#define VkglTestCase_003077_1 "dEQP-GLES3.functional.shaders.swizzles."
#define VkglTestCase_003077_2 "vector_swizzles.mediump_ivec2_s_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003077, VkglTestCase_003077_1, VkglTestCase_003077_2);

#define VkglTestCase_003078_1 "dEQP-GLES3.functional.shaders.swizzles."
#define VkglTestCase_003078_2 "vector_swizzles.mediump_ivec2_ss_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003078, VkglTestCase_003078_1, VkglTestCase_003078_2);

#define VkglTestCase_003079_1 "dEQP-GLES3.functional.shaders.swizzles.v"
#define VkglTestCase_003079_2 "ector_swizzles.mediump_ivec2_ss_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003079, VkglTestCase_003079_1, VkglTestCase_003079_2);

#define VkglTestCase_003080_1 "dEQP-GLES3.functional.shaders.swizzles."
#define VkglTestCase_003080_2 "vector_swizzles.mediump_ivec2_st_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003080, VkglTestCase_003080_1, VkglTestCase_003080_2);

#define VkglTestCase_003081_1 "dEQP-GLES3.functional.shaders.swizzles.v"
#define VkglTestCase_003081_2 "ector_swizzles.mediump_ivec2_st_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003081, VkglTestCase_003081_1, VkglTestCase_003081_2);

#define VkglTestCase_003082_1 "dEQP-GLES3.functional.shaders.swizzles."
#define VkglTestCase_003082_2 "vector_swizzles.mediump_ivec2_ts_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003082, VkglTestCase_003082_1, VkglTestCase_003082_2);

#define VkglTestCase_003083_1 "dEQP-GLES3.functional.shaders.swizzles.v"
#define VkglTestCase_003083_2 "ector_swizzles.mediump_ivec2_ts_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003083, VkglTestCase_003083_1, VkglTestCase_003083_2);

#define VkglTestCase_003084_1 "dEQP-GLES3.functional.shaders.swizzles."
#define VkglTestCase_003084_2 "vector_swizzles.mediump_ivec2_tst_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003084, VkglTestCase_003084_1, VkglTestCase_003084_2);

#define VkglTestCase_003085_1 "dEQP-GLES3.functional.shaders.swizzles.v"
#define VkglTestCase_003085_2 "ector_swizzles.mediump_ivec2_tst_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003085, VkglTestCase_003085_1, VkglTestCase_003085_2);

#define VkglTestCase_003086_1 "dEQP-GLES3.functional.shaders.swizzles.v"
#define VkglTestCase_003086_2 "ector_swizzles.mediump_ivec2_stss_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003086, VkglTestCase_003086_1, VkglTestCase_003086_2);

#define VkglTestCase_003087_1 "dEQP-GLES3.functional.shaders.swizzles.ve"
#define VkglTestCase_003087_2 "ctor_swizzles.mediump_ivec2_stss_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003087, VkglTestCase_003087_1, VkglTestCase_003087_2);

#define VkglTestCase_003088_1 "dEQP-GLES3.functional.shaders.swizzles.v"
#define VkglTestCase_003088_2 "ector_swizzles.mediump_ivec2_tttt_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003088, VkglTestCase_003088_1, VkglTestCase_003088_2);

#define VkglTestCase_003089_1 "dEQP-GLES3.functional.shaders.swizzles.ve"
#define VkglTestCase_003089_2 "ctor_swizzles.mediump_ivec2_tttt_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003089, VkglTestCase_003089_1, VkglTestCase_003089_2);

#define VkglTestCase_003090_1 "dEQP-GLES3.functional.shaders.swizzles"
#define VkglTestCase_003090_2 ".vector_swizzles.mediump_ivec2_r_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003090, VkglTestCase_003090_1, VkglTestCase_003090_2);

#define VkglTestCase_003091_1 "dEQP-GLES3.functional.shaders.swizzles."
#define VkglTestCase_003091_2 "vector_swizzles.mediump_ivec2_r_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003091, VkglTestCase_003091_1, VkglTestCase_003091_2);

#define VkglTestCase_003092_1 "dEQP-GLES3.functional.shaders.swizzles."
#define VkglTestCase_003092_2 "vector_swizzles.mediump_ivec2_rr_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003092, VkglTestCase_003092_1, VkglTestCase_003092_2);

#define VkglTestCase_003093_1 "dEQP-GLES3.functional.shaders.swizzles.v"
#define VkglTestCase_003093_2 "ector_swizzles.mediump_ivec2_rr_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003093, VkglTestCase_003093_1, VkglTestCase_003093_2);

#define VkglTestCase_003094_1 "dEQP-GLES3.functional.shaders.swizzles."
#define VkglTestCase_003094_2 "vector_swizzles.mediump_ivec2_rg_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003094, VkglTestCase_003094_1, VkglTestCase_003094_2);

#define VkglTestCase_003095_1 "dEQP-GLES3.functional.shaders.swizzles.v"
#define VkglTestCase_003095_2 "ector_swizzles.mediump_ivec2_rg_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003095, VkglTestCase_003095_1, VkglTestCase_003095_2);

#define VkglTestCase_003096_1 "dEQP-GLES3.functional.shaders.swizzles."
#define VkglTestCase_003096_2 "vector_swizzles.mediump_ivec2_gr_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003096, VkglTestCase_003096_1, VkglTestCase_003096_2);

#define VkglTestCase_003097_1 "dEQP-GLES3.functional.shaders.swizzles.v"
#define VkglTestCase_003097_2 "ector_swizzles.mediump_ivec2_gr_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003097, VkglTestCase_003097_1, VkglTestCase_003097_2);

#define VkglTestCase_003098_1 "dEQP-GLES3.functional.shaders.swizzles."
#define VkglTestCase_003098_2 "vector_swizzles.mediump_ivec2_grg_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003098, VkglTestCase_003098_1, VkglTestCase_003098_2);

#define VkglTestCase_003099_1 "dEQP-GLES3.functional.shaders.swizzles.v"
#define VkglTestCase_003099_2 "ector_swizzles.mediump_ivec2_grg_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003099, VkglTestCase_003099_1, VkglTestCase_003099_2);

#define VkglTestCase_003100_1 "dEQP-GLES3.functional.shaders.swizzles.v"
#define VkglTestCase_003100_2 "ector_swizzles.mediump_ivec2_rgrr_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003100, VkglTestCase_003100_1, VkglTestCase_003100_2);

#define VkglTestCase_003101_1 "dEQP-GLES3.functional.shaders.swizzles.ve"
#define VkglTestCase_003101_2 "ctor_swizzles.mediump_ivec2_rgrr_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003101, VkglTestCase_003101_1, VkglTestCase_003101_2);

#define VkglTestCase_003102_1 "dEQP-GLES3.functional.shaders.swizzles.v"
#define VkglTestCase_003102_2 "ector_swizzles.mediump_ivec2_gggg_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003102, VkglTestCase_003102_1, VkglTestCase_003102_2);

#define VkglTestCase_003103_1 "dEQP-GLES3.functional.shaders.swizzles.ve"
#define VkglTestCase_003103_2 "ctor_swizzles.mediump_ivec2_gggg_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003103, VkglTestCase_003103_1, VkglTestCase_003103_2);

#define VkglTestCase_003104_1 "dEQP-GLES3.functional.shaders.swizzles"
#define VkglTestCase_003104_2 ".vector_swizzles.mediump_ivec3_x_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003104, VkglTestCase_003104_1, VkglTestCase_003104_2);

#define VkglTestCase_003105_1 "dEQP-GLES3.functional.shaders.swizzles."
#define VkglTestCase_003105_2 "vector_swizzles.mediump_ivec3_x_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003105, VkglTestCase_003105_1, VkglTestCase_003105_2);

#define VkglTestCase_003106_1 "dEQP-GLES3.functional.shaders.swizzles"
#define VkglTestCase_003106_2 ".vector_swizzles.mediump_ivec3_z_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003106, VkglTestCase_003106_1, VkglTestCase_003106_2);

#define VkglTestCase_003107_1 "dEQP-GLES3.functional.shaders.swizzles."
#define VkglTestCase_003107_2 "vector_swizzles.mediump_ivec3_z_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003107, VkglTestCase_003107_1, VkglTestCase_003107_2);

#define VkglTestCase_003108_1 "dEQP-GLES3.functional.shaders.swizzles."
#define VkglTestCase_003108_2 "vector_swizzles.mediump_ivec3_xz_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003108, VkglTestCase_003108_1, VkglTestCase_003108_2);

#define VkglTestCase_003109_1 "dEQP-GLES3.functional.shaders.swizzles.v"
#define VkglTestCase_003109_2 "ector_swizzles.mediump_ivec3_xz_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003109, VkglTestCase_003109_1, VkglTestCase_003109_2);

#define VkglTestCase_003110_1 "dEQP-GLES3.functional.shaders.swizzles."
#define VkglTestCase_003110_2 "vector_swizzles.mediump_ivec3_zz_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003110, VkglTestCase_003110_1, VkglTestCase_003110_2);

#define VkglTestCase_003111_1 "dEQP-GLES3.functional.shaders.swizzles.v"
#define VkglTestCase_003111_2 "ector_swizzles.mediump_ivec3_zz_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003111, VkglTestCase_003111_1, VkglTestCase_003111_2);

#define VkglTestCase_003112_1 "dEQP-GLES3.functional.shaders.swizzles."
#define VkglTestCase_003112_2 "vector_swizzles.mediump_ivec3_xyz_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003112, VkglTestCase_003112_1, VkglTestCase_003112_2);

#define VkglTestCase_003113_1 "dEQP-GLES3.functional.shaders.swizzles.v"
#define VkglTestCase_003113_2 "ector_swizzles.mediump_ivec3_xyz_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003113, VkglTestCase_003113_1, VkglTestCase_003113_2);

#define VkglTestCase_003114_1 "dEQP-GLES3.functional.shaders.swizzles."
#define VkglTestCase_003114_2 "vector_swizzles.mediump_ivec3_zyx_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003114, VkglTestCase_003114_1, VkglTestCase_003114_2);

#define VkglTestCase_003115_1 "dEQP-GLES3.functional.shaders.swizzles.v"
#define VkglTestCase_003115_2 "ector_swizzles.mediump_ivec3_zyx_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003115, VkglTestCase_003115_1, VkglTestCase_003115_2);

#define VkglTestCase_003116_1 "dEQP-GLES3.functional.shaders.swizzles."
#define VkglTestCase_003116_2 "vector_swizzles.mediump_ivec3_xxx_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003116, VkglTestCase_003116_1, VkglTestCase_003116_2);

#define VkglTestCase_003117_1 "dEQP-GLES3.functional.shaders.swizzles.v"
#define VkglTestCase_003117_2 "ector_swizzles.mediump_ivec3_xxx_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003117, VkglTestCase_003117_1, VkglTestCase_003117_2);

#define VkglTestCase_003118_1 "dEQP-GLES3.functional.shaders.swizzles."
#define VkglTestCase_003118_2 "vector_swizzles.mediump_ivec3_zzz_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003118, VkglTestCase_003118_1, VkglTestCase_003118_2);

#define VkglTestCase_003119_1 "dEQP-GLES3.functional.shaders.swizzles.v"
#define VkglTestCase_003119_2 "ector_swizzles.mediump_ivec3_zzz_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003119, VkglTestCase_003119_1, VkglTestCase_003119_2);

#define VkglTestCase_003120_1 "dEQP-GLES3.functional.shaders.swizzles."
#define VkglTestCase_003120_2 "vector_swizzles.mediump_ivec3_zzy_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003120, VkglTestCase_003120_1, VkglTestCase_003120_2);

#define VkglTestCase_003121_1 "dEQP-GLES3.functional.shaders.swizzles.v"
#define VkglTestCase_003121_2 "ector_swizzles.mediump_ivec3_zzy_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003121, VkglTestCase_003121_1, VkglTestCase_003121_2);

#define VkglTestCase_003122_1 "dEQP-GLES3.functional.shaders.swizzles."
#define VkglTestCase_003122_2 "vector_swizzles.mediump_ivec3_yxy_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003122, VkglTestCase_003122_1, VkglTestCase_003122_2);

#define VkglTestCase_003123_1 "dEQP-GLES3.functional.shaders.swizzles.v"
#define VkglTestCase_003123_2 "ector_swizzles.mediump_ivec3_yxy_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003123, VkglTestCase_003123_1, VkglTestCase_003123_2);

#define VkglTestCase_003124_1 "dEQP-GLES3.functional.shaders.swizzles."
#define VkglTestCase_003124_2 "vector_swizzles.mediump_ivec3_xzx_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003124, VkglTestCase_003124_1, VkglTestCase_003124_2);

#define VkglTestCase_003125_1 "dEQP-GLES3.functional.shaders.swizzles.v"
#define VkglTestCase_003125_2 "ector_swizzles.mediump_ivec3_xzx_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003125, VkglTestCase_003125_1, VkglTestCase_003125_2);

#define VkglTestCase_003126_1 "dEQP-GLES3.functional.shaders.swizzles.v"
#define VkglTestCase_003126_2 "ector_swizzles.mediump_ivec3_xyyx_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003126, VkglTestCase_003126_1, VkglTestCase_003126_2);

#define VkglTestCase_003127_1 "dEQP-GLES3.functional.shaders.swizzles.ve"
#define VkglTestCase_003127_2 "ctor_swizzles.mediump_ivec3_xyyx_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003127, VkglTestCase_003127_1, VkglTestCase_003127_2);

#define VkglTestCase_003128_1 "dEQP-GLES3.functional.shaders.swizzles.v"
#define VkglTestCase_003128_2 "ector_swizzles.mediump_ivec3_zzzz_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003128, VkglTestCase_003128_1, VkglTestCase_003128_2);

#define VkglTestCase_003129_1 "dEQP-GLES3.functional.shaders.swizzles.ve"
#define VkglTestCase_003129_2 "ctor_swizzles.mediump_ivec3_zzzz_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003129, VkglTestCase_003129_1, VkglTestCase_003129_2);

#define VkglTestCase_003130_1 "dEQP-GLES3.functional.shaders.swizzles"
#define VkglTestCase_003130_2 ".vector_swizzles.mediump_ivec3_s_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003130, VkglTestCase_003130_1, VkglTestCase_003130_2);

#define VkglTestCase_003131_1 "dEQP-GLES3.functional.shaders.swizzles."
#define VkglTestCase_003131_2 "vector_swizzles.mediump_ivec3_s_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003131, VkglTestCase_003131_1, VkglTestCase_003131_2);

#define VkglTestCase_003132_1 "dEQP-GLES3.functional.shaders.swizzles"
#define VkglTestCase_003132_2 ".vector_swizzles.mediump_ivec3_p_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003132, VkglTestCase_003132_1, VkglTestCase_003132_2);

#define VkglTestCase_003133_1 "dEQP-GLES3.functional.shaders.swizzles."
#define VkglTestCase_003133_2 "vector_swizzles.mediump_ivec3_p_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003133, VkglTestCase_003133_1, VkglTestCase_003133_2);

#define VkglTestCase_003134_1 "dEQP-GLES3.functional.shaders.swizzles."
#define VkglTestCase_003134_2 "vector_swizzles.mediump_ivec3_sp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003134, VkglTestCase_003134_1, VkglTestCase_003134_2);

#define VkglTestCase_003135_1 "dEQP-GLES3.functional.shaders.swizzles.v"
#define VkglTestCase_003135_2 "ector_swizzles.mediump_ivec3_sp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003135, VkglTestCase_003135_1, VkglTestCase_003135_2);

#define VkglTestCase_003136_1 "dEQP-GLES3.functional.shaders.swizzles."
#define VkglTestCase_003136_2 "vector_swizzles.mediump_ivec3_pp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003136, VkglTestCase_003136_1, VkglTestCase_003136_2);

#define VkglTestCase_003137_1 "dEQP-GLES3.functional.shaders.swizzles.v"
#define VkglTestCase_003137_2 "ector_swizzles.mediump_ivec3_pp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003137, VkglTestCase_003137_1, VkglTestCase_003137_2);

#define VkglTestCase_003138_1 "dEQP-GLES3.functional.shaders.swizzles."
#define VkglTestCase_003138_2 "vector_swizzles.mediump_ivec3_stp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003138, VkglTestCase_003138_1, VkglTestCase_003138_2);

#define VkglTestCase_003139_1 "dEQP-GLES3.functional.shaders.swizzles.v"
#define VkglTestCase_003139_2 "ector_swizzles.mediump_ivec3_stp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003139, VkglTestCase_003139_1, VkglTestCase_003139_2);

#define VkglTestCase_003140_1 "dEQP-GLES3.functional.shaders.swizzles."
#define VkglTestCase_003140_2 "vector_swizzles.mediump_ivec3_pts_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003140, VkglTestCase_003140_1, VkglTestCase_003140_2);

#define VkglTestCase_003141_1 "dEQP-GLES3.functional.shaders.swizzles.v"
#define VkglTestCase_003141_2 "ector_swizzles.mediump_ivec3_pts_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003141, VkglTestCase_003141_1, VkglTestCase_003141_2);

#define VkglTestCase_003142_1 "dEQP-GLES3.functional.shaders.swizzles."
#define VkglTestCase_003142_2 "vector_swizzles.mediump_ivec3_sss_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003142, VkglTestCase_003142_1, VkglTestCase_003142_2);

#define VkglTestCase_003143_1 "dEQP-GLES3.functional.shaders.swizzles.v"
#define VkglTestCase_003143_2 "ector_swizzles.mediump_ivec3_sss_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003143, VkglTestCase_003143_1, VkglTestCase_003143_2);

#define VkglTestCase_003144_1 "dEQP-GLES3.functional.shaders.swizzles."
#define VkglTestCase_003144_2 "vector_swizzles.mediump_ivec3_ppp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003144, VkglTestCase_003144_1, VkglTestCase_003144_2);

#define VkglTestCase_003145_1 "dEQP-GLES3.functional.shaders.swizzles.v"
#define VkglTestCase_003145_2 "ector_swizzles.mediump_ivec3_ppp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003145, VkglTestCase_003145_1, VkglTestCase_003145_2);

#define VkglTestCase_003146_1 "dEQP-GLES3.functional.shaders.swizzles."
#define VkglTestCase_003146_2 "vector_swizzles.mediump_ivec3_ppt_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003146, VkglTestCase_003146_1, VkglTestCase_003146_2);

#define VkglTestCase_003147_1 "dEQP-GLES3.functional.shaders.swizzles.v"
#define VkglTestCase_003147_2 "ector_swizzles.mediump_ivec3_ppt_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003147, VkglTestCase_003147_1, VkglTestCase_003147_2);

#define VkglTestCase_003148_1 "dEQP-GLES3.functional.shaders.swizzles."
#define VkglTestCase_003148_2 "vector_swizzles.mediump_ivec3_tst_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003148, VkglTestCase_003148_1, VkglTestCase_003148_2);

#define VkglTestCase_003149_1 "dEQP-GLES3.functional.shaders.swizzles.v"
#define VkglTestCase_003149_2 "ector_swizzles.mediump_ivec3_tst_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003149, VkglTestCase_003149_1, VkglTestCase_003149_2);

#define VkglTestCase_003150_1 "dEQP-GLES3.functional.shaders.swizzles."
#define VkglTestCase_003150_2 "vector_swizzles.mediump_ivec3_sps_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003150, VkglTestCase_003150_1, VkglTestCase_003150_2);

#define VkglTestCase_003151_1 "dEQP-GLES3.functional.shaders.swizzles.v"
#define VkglTestCase_003151_2 "ector_swizzles.mediump_ivec3_sps_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003151, VkglTestCase_003151_1, VkglTestCase_003151_2);

#define VkglTestCase_003152_1 "dEQP-GLES3.functional.shaders.swizzles.v"
#define VkglTestCase_003152_2 "ector_swizzles.mediump_ivec3_stts_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003152, VkglTestCase_003152_1, VkglTestCase_003152_2);

#define VkglTestCase_003153_1 "dEQP-GLES3.functional.shaders.swizzles.ve"
#define VkglTestCase_003153_2 "ctor_swizzles.mediump_ivec3_stts_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003153, VkglTestCase_003153_1, VkglTestCase_003153_2);

#define VkglTestCase_003154_1 "dEQP-GLES3.functional.shaders.swizzles.v"
#define VkglTestCase_003154_2 "ector_swizzles.mediump_ivec3_pppp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003154, VkglTestCase_003154_1, VkglTestCase_003154_2);

#define VkglTestCase_003155_1 "dEQP-GLES3.functional.shaders.swizzles.ve"
#define VkglTestCase_003155_2 "ctor_swizzles.mediump_ivec3_pppp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003155, VkglTestCase_003155_1, VkglTestCase_003155_2);

#define VkglTestCase_003156_1 "dEQP-GLES3.functional.shaders.swizzles"
#define VkglTestCase_003156_2 ".vector_swizzles.mediump_ivec3_r_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003156, VkglTestCase_003156_1, VkglTestCase_003156_2);

#define VkglTestCase_003157_1 "dEQP-GLES3.functional.shaders.swizzles."
#define VkglTestCase_003157_2 "vector_swizzles.mediump_ivec3_r_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003157, VkglTestCase_003157_1, VkglTestCase_003157_2);

#define VkglTestCase_003158_1 "dEQP-GLES3.functional.shaders.swizzles"
#define VkglTestCase_003158_2 ".vector_swizzles.mediump_ivec3_b_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003158, VkglTestCase_003158_1, VkglTestCase_003158_2);

#define VkglTestCase_003159_1 "dEQP-GLES3.functional.shaders.swizzles."
#define VkglTestCase_003159_2 "vector_swizzles.mediump_ivec3_b_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003159, VkglTestCase_003159_1, VkglTestCase_003159_2);

#define VkglTestCase_003160_1 "dEQP-GLES3.functional.shaders.swizzles."
#define VkglTestCase_003160_2 "vector_swizzles.mediump_ivec3_rb_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003160, VkglTestCase_003160_1, VkglTestCase_003160_2);

#define VkglTestCase_003161_1 "dEQP-GLES3.functional.shaders.swizzles.v"
#define VkglTestCase_003161_2 "ector_swizzles.mediump_ivec3_rb_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003161, VkglTestCase_003161_1, VkglTestCase_003161_2);

#define VkglTestCase_003162_1 "dEQP-GLES3.functional.shaders.swizzles."
#define VkglTestCase_003162_2 "vector_swizzles.mediump_ivec3_bb_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003162, VkglTestCase_003162_1, VkglTestCase_003162_2);

#define VkglTestCase_003163_1 "dEQP-GLES3.functional.shaders.swizzles.v"
#define VkglTestCase_003163_2 "ector_swizzles.mediump_ivec3_bb_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003163, VkglTestCase_003163_1, VkglTestCase_003163_2);

#define VkglTestCase_003164_1 "dEQP-GLES3.functional.shaders.swizzles."
#define VkglTestCase_003164_2 "vector_swizzles.mediump_ivec3_rgb_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003164, VkglTestCase_003164_1, VkglTestCase_003164_2);

#define VkglTestCase_003165_1 "dEQP-GLES3.functional.shaders.swizzles.v"
#define VkglTestCase_003165_2 "ector_swizzles.mediump_ivec3_rgb_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003165, VkglTestCase_003165_1, VkglTestCase_003165_2);

#define VkglTestCase_003166_1 "dEQP-GLES3.functional.shaders.swizzles."
#define VkglTestCase_003166_2 "vector_swizzles.mediump_ivec3_bgr_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003166, VkglTestCase_003166_1, VkglTestCase_003166_2);

#define VkglTestCase_003167_1 "dEQP-GLES3.functional.shaders.swizzles.v"
#define VkglTestCase_003167_2 "ector_swizzles.mediump_ivec3_bgr_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003167, VkglTestCase_003167_1, VkglTestCase_003167_2);

#define VkglTestCase_003168_1 "dEQP-GLES3.functional.shaders.swizzles."
#define VkglTestCase_003168_2 "vector_swizzles.mediump_ivec3_rrr_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003168, VkglTestCase_003168_1, VkglTestCase_003168_2);

#define VkglTestCase_003169_1 "dEQP-GLES3.functional.shaders.swizzles.v"
#define VkglTestCase_003169_2 "ector_swizzles.mediump_ivec3_rrr_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003169, VkglTestCase_003169_1, VkglTestCase_003169_2);

#define VkglTestCase_003170_1 "dEQP-GLES3.functional.shaders.swizzles."
#define VkglTestCase_003170_2 "vector_swizzles.mediump_ivec3_bbb_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003170, VkglTestCase_003170_1, VkglTestCase_003170_2);

#define VkglTestCase_003171_1 "dEQP-GLES3.functional.shaders.swizzles.v"
#define VkglTestCase_003171_2 "ector_swizzles.mediump_ivec3_bbb_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003171, VkglTestCase_003171_1, VkglTestCase_003171_2);

#define VkglTestCase_003172_1 "dEQP-GLES3.functional.shaders.swizzles."
#define VkglTestCase_003172_2 "vector_swizzles.mediump_ivec3_bbg_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003172, VkglTestCase_003172_1, VkglTestCase_003172_2);

#define VkglTestCase_003173_1 "dEQP-GLES3.functional.shaders.swizzles.v"
#define VkglTestCase_003173_2 "ector_swizzles.mediump_ivec3_bbg_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003173, VkglTestCase_003173_1, VkglTestCase_003173_2);

#define VkglTestCase_003174_1 "dEQP-GLES3.functional.shaders.swizzles."
#define VkglTestCase_003174_2 "vector_swizzles.mediump_ivec3_grg_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003174, VkglTestCase_003174_1, VkglTestCase_003174_2);

#define VkglTestCase_003175_1 "dEQP-GLES3.functional.shaders.swizzles.v"
#define VkglTestCase_003175_2 "ector_swizzles.mediump_ivec3_grg_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003175, VkglTestCase_003175_1, VkglTestCase_003175_2);

#define VkglTestCase_003176_1 "dEQP-GLES3.functional.shaders.swizzles."
#define VkglTestCase_003176_2 "vector_swizzles.mediump_ivec3_rbr_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003176, VkglTestCase_003176_1, VkglTestCase_003176_2);

#define VkglTestCase_003177_1 "dEQP-GLES3.functional.shaders.swizzles.v"
#define VkglTestCase_003177_2 "ector_swizzles.mediump_ivec3_rbr_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003177, VkglTestCase_003177_1, VkglTestCase_003177_2);

#define VkglTestCase_003178_1 "dEQP-GLES3.functional.shaders.swizzles.v"
#define VkglTestCase_003178_2 "ector_swizzles.mediump_ivec3_rggr_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003178, VkglTestCase_003178_1, VkglTestCase_003178_2);

#define VkglTestCase_003179_1 "dEQP-GLES3.functional.shaders.swizzles.ve"
#define VkglTestCase_003179_2 "ctor_swizzles.mediump_ivec3_rggr_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003179, VkglTestCase_003179_1, VkglTestCase_003179_2);

#define VkglTestCase_003180_1 "dEQP-GLES3.functional.shaders.swizzles.v"
#define VkglTestCase_003180_2 "ector_swizzles.mediump_ivec3_bbbb_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003180, VkglTestCase_003180_1, VkglTestCase_003180_2);

#define VkglTestCase_003181_1 "dEQP-GLES3.functional.shaders.swizzles.ve"
#define VkglTestCase_003181_2 "ctor_swizzles.mediump_ivec3_bbbb_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003181, VkglTestCase_003181_1, VkglTestCase_003181_2);

#define VkglTestCase_003182_1 "dEQP-GLES3.functional.shaders.swizzles"
#define VkglTestCase_003182_2 ".vector_swizzles.mediump_ivec4_x_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003182, VkglTestCase_003182_1, VkglTestCase_003182_2);

#define VkglTestCase_003183_1 "dEQP-GLES3.functional.shaders.swizzles."
#define VkglTestCase_003183_2 "vector_swizzles.mediump_ivec4_x_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003183, VkglTestCase_003183_1, VkglTestCase_003183_2);

#define VkglTestCase_003184_1 "dEQP-GLES3.functional.shaders.swizzles"
#define VkglTestCase_003184_2 ".vector_swizzles.mediump_ivec4_w_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003184, VkglTestCase_003184_1, VkglTestCase_003184_2);

#define VkglTestCase_003185_1 "dEQP-GLES3.functional.shaders.swizzles."
#define VkglTestCase_003185_2 "vector_swizzles.mediump_ivec4_w_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003185, VkglTestCase_003185_1, VkglTestCase_003185_2);

#define VkglTestCase_003186_1 "dEQP-GLES3.functional.shaders.swizzles."
#define VkglTestCase_003186_2 "vector_swizzles.mediump_ivec4_wx_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003186, VkglTestCase_003186_1, VkglTestCase_003186_2);

#define VkglTestCase_003187_1 "dEQP-GLES3.functional.shaders.swizzles.v"
#define VkglTestCase_003187_2 "ector_swizzles.mediump_ivec4_wx_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003187, VkglTestCase_003187_1, VkglTestCase_003187_2);

#define VkglTestCase_003188_1 "dEQP-GLES3.functional.shaders.swizzles."
#define VkglTestCase_003188_2 "vector_swizzles.mediump_ivec4_wz_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003188, VkglTestCase_003188_1, VkglTestCase_003188_2);

#define VkglTestCase_003189_1 "dEQP-GLES3.functional.shaders.swizzles.v"
#define VkglTestCase_003189_2 "ector_swizzles.mediump_ivec4_wz_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003189, VkglTestCase_003189_1, VkglTestCase_003189_2);

#define VkglTestCase_003190_1 "dEQP-GLES3.functional.shaders.swizzles."
#define VkglTestCase_003190_2 "vector_swizzles.mediump_ivec4_www_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003190, VkglTestCase_003190_1, VkglTestCase_003190_2);

#define VkglTestCase_003191_1 "dEQP-GLES3.functional.shaders.swizzles.v"
#define VkglTestCase_003191_2 "ector_swizzles.mediump_ivec4_www_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003191, VkglTestCase_003191_1, VkglTestCase_003191_2);

#define VkglTestCase_003192_1 "dEQP-GLES3.functional.shaders.swizzles."
#define VkglTestCase_003192_2 "vector_swizzles.mediump_ivec4_yyw_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003192, VkglTestCase_003192_1, VkglTestCase_003192_2);

#define VkglTestCase_003193_1 "dEQP-GLES3.functional.shaders.swizzles.v"
#define VkglTestCase_003193_2 "ector_swizzles.mediump_ivec4_yyw_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003193, VkglTestCase_003193_1, VkglTestCase_003193_2);

#define VkglTestCase_003194_1 "dEQP-GLES3.functional.shaders.swizzles."
#define VkglTestCase_003194_2 "vector_swizzles.mediump_ivec4_wzy_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003194, VkglTestCase_003194_1, VkglTestCase_003194_2);

#define VkglTestCase_003195_1 "dEQP-GLES3.functional.shaders.swizzles.v"
#define VkglTestCase_003195_2 "ector_swizzles.mediump_ivec4_wzy_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003195, VkglTestCase_003195_1, VkglTestCase_003195_2);

#define VkglTestCase_003196_1 "dEQP-GLES3.functional.shaders.swizzles.v"
#define VkglTestCase_003196_2 "ector_swizzles.mediump_ivec4_xyzw_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003196, VkglTestCase_003196_1, VkglTestCase_003196_2);

#define VkglTestCase_003197_1 "dEQP-GLES3.functional.shaders.swizzles.ve"
#define VkglTestCase_003197_2 "ctor_swizzles.mediump_ivec4_xyzw_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003197, VkglTestCase_003197_1, VkglTestCase_003197_2);

#define VkglTestCase_003198_1 "dEQP-GLES3.functional.shaders.swizzles.v"
#define VkglTestCase_003198_2 "ector_swizzles.mediump_ivec4_wzyx_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003198, VkglTestCase_003198_1, VkglTestCase_003198_2);

#define VkglTestCase_003199_1 "dEQP-GLES3.functional.shaders.swizzles.ve"
#define VkglTestCase_003199_2 "ctor_swizzles.mediump_ivec4_wzyx_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003199, VkglTestCase_003199_1, VkglTestCase_003199_2);

#define VkglTestCase_003200_1 "dEQP-GLES3.functional.shaders.swizzles.v"
#define VkglTestCase_003200_2 "ector_swizzles.mediump_ivec4_xxxx_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003200, VkglTestCase_003200_1, VkglTestCase_003200_2);

#define VkglTestCase_003201_1 "dEQP-GLES3.functional.shaders.swizzles.ve"
#define VkglTestCase_003201_2 "ctor_swizzles.mediump_ivec4_xxxx_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003201, VkglTestCase_003201_1, VkglTestCase_003201_2);

#define VkglTestCase_003202_1 "dEQP-GLES3.functional.shaders.swizzles.v"
#define VkglTestCase_003202_2 "ector_swizzles.mediump_ivec4_yyyy_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003202, VkglTestCase_003202_1, VkglTestCase_003202_2);

#define VkglTestCase_003203_1 "dEQP-GLES3.functional.shaders.swizzles.ve"
#define VkglTestCase_003203_2 "ctor_swizzles.mediump_ivec4_yyyy_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003203, VkglTestCase_003203_1, VkglTestCase_003203_2);

#define VkglTestCase_003204_1 "dEQP-GLES3.functional.shaders.swizzles.v"
#define VkglTestCase_003204_2 "ector_swizzles.mediump_ivec4_wwww_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003204, VkglTestCase_003204_1, VkglTestCase_003204_2);

#define VkglTestCase_003205_1 "dEQP-GLES3.functional.shaders.swizzles.ve"
#define VkglTestCase_003205_2 "ctor_swizzles.mediump_ivec4_wwww_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003205, VkglTestCase_003205_1, VkglTestCase_003205_2);

#define VkglTestCase_003206_1 "dEQP-GLES3.functional.shaders.swizzles.v"
#define VkglTestCase_003206_2 "ector_swizzles.mediump_ivec4_wzzw_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003206, VkglTestCase_003206_1, VkglTestCase_003206_2);

#define VkglTestCase_003207_1 "dEQP-GLES3.functional.shaders.swizzles.ve"
#define VkglTestCase_003207_2 "ctor_swizzles.mediump_ivec4_wzzw_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003207, VkglTestCase_003207_1, VkglTestCase_003207_2);

#define VkglTestCase_003208_1 "dEQP-GLES3.functional.shaders.swizzles.v"
#define VkglTestCase_003208_2 "ector_swizzles.mediump_ivec4_wwwy_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003208, VkglTestCase_003208_1, VkglTestCase_003208_2);

#define VkglTestCase_003209_1 "dEQP-GLES3.functional.shaders.swizzles.ve"
#define VkglTestCase_003209_2 "ctor_swizzles.mediump_ivec4_wwwy_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003209, VkglTestCase_003209_1, VkglTestCase_003209_2);

#define VkglTestCase_003210_1 "dEQP-GLES3.functional.shaders.swizzles.v"
#define VkglTestCase_003210_2 "ector_swizzles.mediump_ivec4_xyxx_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003210, VkglTestCase_003210_1, VkglTestCase_003210_2);

#define VkglTestCase_003211_1 "dEQP-GLES3.functional.shaders.swizzles.ve"
#define VkglTestCase_003211_2 "ctor_swizzles.mediump_ivec4_xyxx_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003211, VkglTestCase_003211_1, VkglTestCase_003211_2);

#define VkglTestCase_003212_1 "dEQP-GLES3.functional.shaders.swizzles.v"
#define VkglTestCase_003212_2 "ector_swizzles.mediump_ivec4_zzwz_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003212, VkglTestCase_003212_1, VkglTestCase_003212_2);

#define VkglTestCase_003213_1 "dEQP-GLES3.functional.shaders.swizzles.ve"
#define VkglTestCase_003213_2 "ctor_swizzles.mediump_ivec4_zzwz_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003213, VkglTestCase_003213_1, VkglTestCase_003213_2);

#define VkglTestCase_003214_1 "dEQP-GLES3.functional.shaders.swizzles"
#define VkglTestCase_003214_2 ".vector_swizzles.mediump_ivec4_s_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003214, VkglTestCase_003214_1, VkglTestCase_003214_2);

#define VkglTestCase_003215_1 "dEQP-GLES3.functional.shaders.swizzles."
#define VkglTestCase_003215_2 "vector_swizzles.mediump_ivec4_s_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003215, VkglTestCase_003215_1, VkglTestCase_003215_2);

#define VkglTestCase_003216_1 "dEQP-GLES3.functional.shaders.swizzles"
#define VkglTestCase_003216_2 ".vector_swizzles.mediump_ivec4_q_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003216, VkglTestCase_003216_1, VkglTestCase_003216_2);

#define VkglTestCase_003217_1 "dEQP-GLES3.functional.shaders.swizzles."
#define VkglTestCase_003217_2 "vector_swizzles.mediump_ivec4_q_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003217, VkglTestCase_003217_1, VkglTestCase_003217_2);

#define VkglTestCase_003218_1 "dEQP-GLES3.functional.shaders.swizzles."
#define VkglTestCase_003218_2 "vector_swizzles.mediump_ivec4_qs_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003218, VkglTestCase_003218_1, VkglTestCase_003218_2);

#define VkglTestCase_003219_1 "dEQP-GLES3.functional.shaders.swizzles.v"
#define VkglTestCase_003219_2 "ector_swizzles.mediump_ivec4_qs_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003219, VkglTestCase_003219_1, VkglTestCase_003219_2);

#define VkglTestCase_003220_1 "dEQP-GLES3.functional.shaders.swizzles."
#define VkglTestCase_003220_2 "vector_swizzles.mediump_ivec4_qp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003220, VkglTestCase_003220_1, VkglTestCase_003220_2);

#define VkglTestCase_003221_1 "dEQP-GLES3.functional.shaders.swizzles.v"
#define VkglTestCase_003221_2 "ector_swizzles.mediump_ivec4_qp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003221, VkglTestCase_003221_1, VkglTestCase_003221_2);

#define VkglTestCase_003222_1 "dEQP-GLES3.functional.shaders.swizzles."
#define VkglTestCase_003222_2 "vector_swizzles.mediump_ivec4_qqq_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003222, VkglTestCase_003222_1, VkglTestCase_003222_2);

#define VkglTestCase_003223_1 "dEQP-GLES3.functional.shaders.swizzles.v"
#define VkglTestCase_003223_2 "ector_swizzles.mediump_ivec4_qqq_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003223, VkglTestCase_003223_1, VkglTestCase_003223_2);

#define VkglTestCase_003224_1 "dEQP-GLES3.functional.shaders.swizzles."
#define VkglTestCase_003224_2 "vector_swizzles.mediump_ivec4_ttq_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003224, VkglTestCase_003224_1, VkglTestCase_003224_2);

#define VkglTestCase_003225_1 "dEQP-GLES3.functional.shaders.swizzles.v"
#define VkglTestCase_003225_2 "ector_swizzles.mediump_ivec4_ttq_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003225, VkglTestCase_003225_1, VkglTestCase_003225_2);

#define VkglTestCase_003226_1 "dEQP-GLES3.functional.shaders.swizzles."
#define VkglTestCase_003226_2 "vector_swizzles.mediump_ivec4_qpt_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003226, VkglTestCase_003226_1, VkglTestCase_003226_2);

#define VkglTestCase_003227_1 "dEQP-GLES3.functional.shaders.swizzles.v"
#define VkglTestCase_003227_2 "ector_swizzles.mediump_ivec4_qpt_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003227, VkglTestCase_003227_1, VkglTestCase_003227_2);

#define VkglTestCase_003228_1 "dEQP-GLES3.functional.shaders.swizzles.v"
#define VkglTestCase_003228_2 "ector_swizzles.mediump_ivec4_stpq_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003228, VkglTestCase_003228_1, VkglTestCase_003228_2);

#define VkglTestCase_003229_1 "dEQP-GLES3.functional.shaders.swizzles.ve"
#define VkglTestCase_003229_2 "ctor_swizzles.mediump_ivec4_stpq_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003229, VkglTestCase_003229_1, VkglTestCase_003229_2);

#define VkglTestCase_003230_1 "dEQP-GLES3.functional.shaders.swizzles.v"
#define VkglTestCase_003230_2 "ector_swizzles.mediump_ivec4_qpts_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003230, VkglTestCase_003230_1, VkglTestCase_003230_2);

#define VkglTestCase_003231_1 "dEQP-GLES3.functional.shaders.swizzles.ve"
#define VkglTestCase_003231_2 "ctor_swizzles.mediump_ivec4_qpts_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003231, VkglTestCase_003231_1, VkglTestCase_003231_2);

#define VkglTestCase_003232_1 "dEQP-GLES3.functional.shaders.swizzles.v"
#define VkglTestCase_003232_2 "ector_swizzles.mediump_ivec4_ssss_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003232, VkglTestCase_003232_1, VkglTestCase_003232_2);

#define VkglTestCase_003233_1 "dEQP-GLES3.functional.shaders.swizzles.ve"
#define VkglTestCase_003233_2 "ctor_swizzles.mediump_ivec4_ssss_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003233, VkglTestCase_003233_1, VkglTestCase_003233_2);

#define VkglTestCase_003234_1 "dEQP-GLES3.functional.shaders.swizzles.v"
#define VkglTestCase_003234_2 "ector_swizzles.mediump_ivec4_tttt_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003234, VkglTestCase_003234_1, VkglTestCase_003234_2);

#define VkglTestCase_003235_1 "dEQP-GLES3.functional.shaders.swizzles.ve"
#define VkglTestCase_003235_2 "ctor_swizzles.mediump_ivec4_tttt_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003235, VkglTestCase_003235_1, VkglTestCase_003235_2);

#define VkglTestCase_003236_1 "dEQP-GLES3.functional.shaders.swizzles.v"
#define VkglTestCase_003236_2 "ector_swizzles.mediump_ivec4_qqqq_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003236, VkglTestCase_003236_1, VkglTestCase_003236_2);

#define VkglTestCase_003237_1 "dEQP-GLES3.functional.shaders.swizzles.ve"
#define VkglTestCase_003237_2 "ctor_swizzles.mediump_ivec4_qqqq_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003237, VkglTestCase_003237_1, VkglTestCase_003237_2);

#define VkglTestCase_003238_1 "dEQP-GLES3.functional.shaders.swizzles.v"
#define VkglTestCase_003238_2 "ector_swizzles.mediump_ivec4_qppq_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003238, VkglTestCase_003238_1, VkglTestCase_003238_2);

#define VkglTestCase_003239_1 "dEQP-GLES3.functional.shaders.swizzles.ve"
#define VkglTestCase_003239_2 "ctor_swizzles.mediump_ivec4_qppq_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003239, VkglTestCase_003239_1, VkglTestCase_003239_2);

#define VkglTestCase_003240_1 "dEQP-GLES3.functional.shaders.swizzles.v"
#define VkglTestCase_003240_2 "ector_swizzles.mediump_ivec4_qqqt_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003240, VkglTestCase_003240_1, VkglTestCase_003240_2);

#define VkglTestCase_003241_1 "dEQP-GLES3.functional.shaders.swizzles.ve"
#define VkglTestCase_003241_2 "ctor_swizzles.mediump_ivec4_qqqt_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003241, VkglTestCase_003241_1, VkglTestCase_003241_2);

#define VkglTestCase_003242_1 "dEQP-GLES3.functional.shaders.swizzles.v"
#define VkglTestCase_003242_2 "ector_swizzles.mediump_ivec4_stss_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003242, VkglTestCase_003242_1, VkglTestCase_003242_2);

#define VkglTestCase_003243_1 "dEQP-GLES3.functional.shaders.swizzles.ve"
#define VkglTestCase_003243_2 "ctor_swizzles.mediump_ivec4_stss_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003243, VkglTestCase_003243_1, VkglTestCase_003243_2);

#define VkglTestCase_003244_1 "dEQP-GLES3.functional.shaders.swizzles.v"
#define VkglTestCase_003244_2 "ector_swizzles.mediump_ivec4_ppqp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003244, VkglTestCase_003244_1, VkglTestCase_003244_2);

#define VkglTestCase_003245_1 "dEQP-GLES3.functional.shaders.swizzles.ve"
#define VkglTestCase_003245_2 "ctor_swizzles.mediump_ivec4_ppqp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003245, VkglTestCase_003245_1, VkglTestCase_003245_2);

#define VkglTestCase_003246_1 "dEQP-GLES3.functional.shaders.swizzles"
#define VkglTestCase_003246_2 ".vector_swizzles.mediump_ivec4_r_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003246, VkglTestCase_003246_1, VkglTestCase_003246_2);

#define VkglTestCase_003247_1 "dEQP-GLES3.functional.shaders.swizzles."
#define VkglTestCase_003247_2 "vector_swizzles.mediump_ivec4_r_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003247, VkglTestCase_003247_1, VkglTestCase_003247_2);

#define VkglTestCase_003248_1 "dEQP-GLES3.functional.shaders.swizzles"
#define VkglTestCase_003248_2 ".vector_swizzles.mediump_ivec4_a_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003248, VkglTestCase_003248_1, VkglTestCase_003248_2);

#define VkglTestCase_003249_1 "dEQP-GLES3.functional.shaders.swizzles."
#define VkglTestCase_003249_2 "vector_swizzles.mediump_ivec4_a_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003249, VkglTestCase_003249_1, VkglTestCase_003249_2);

#define VkglTestCase_003250_1 "dEQP-GLES3.functional.shaders.swizzles."
#define VkglTestCase_003250_2 "vector_swizzles.mediump_ivec4_ar_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003250, VkglTestCase_003250_1, VkglTestCase_003250_2);

#define VkglTestCase_003251_1 "dEQP-GLES3.functional.shaders.swizzles.v"
#define VkglTestCase_003251_2 "ector_swizzles.mediump_ivec4_ar_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003251, VkglTestCase_003251_1, VkglTestCase_003251_2);

#define VkglTestCase_003252_1 "dEQP-GLES3.functional.shaders.swizzles."
#define VkglTestCase_003252_2 "vector_swizzles.mediump_ivec4_ab_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003252, VkglTestCase_003252_1, VkglTestCase_003252_2);

#define VkglTestCase_003253_1 "dEQP-GLES3.functional.shaders.swizzles.v"
#define VkglTestCase_003253_2 "ector_swizzles.mediump_ivec4_ab_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003253, VkglTestCase_003253_1, VkglTestCase_003253_2);

#define VkglTestCase_003254_1 "dEQP-GLES3.functional.shaders.swizzles."
#define VkglTestCase_003254_2 "vector_swizzles.mediump_ivec4_aaa_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003254, VkglTestCase_003254_1, VkglTestCase_003254_2);

#define VkglTestCase_003255_1 "dEQP-GLES3.functional.shaders.swizzles.v"
#define VkglTestCase_003255_2 "ector_swizzles.mediump_ivec4_aaa_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003255, VkglTestCase_003255_1, VkglTestCase_003255_2);

#define VkglTestCase_003256_1 "dEQP-GLES3.functional.shaders.swizzles."
#define VkglTestCase_003256_2 "vector_swizzles.mediump_ivec4_gga_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003256, VkglTestCase_003256_1, VkglTestCase_003256_2);

#define VkglTestCase_003257_1 "dEQP-GLES3.functional.shaders.swizzles.v"
#define VkglTestCase_003257_2 "ector_swizzles.mediump_ivec4_gga_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003257, VkglTestCase_003257_1, VkglTestCase_003257_2);

#define VkglTestCase_003258_1 "dEQP-GLES3.functional.shaders.swizzles."
#define VkglTestCase_003258_2 "vector_swizzles.mediump_ivec4_abg_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003258, VkglTestCase_003258_1, VkglTestCase_003258_2);

#define VkglTestCase_003259_1 "dEQP-GLES3.functional.shaders.swizzles.v"
#define VkglTestCase_003259_2 "ector_swizzles.mediump_ivec4_abg_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003259, VkglTestCase_003259_1, VkglTestCase_003259_2);

#define VkglTestCase_003260_1 "dEQP-GLES3.functional.shaders.swizzles.v"
#define VkglTestCase_003260_2 "ector_swizzles.mediump_ivec4_rgba_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003260, VkglTestCase_003260_1, VkglTestCase_003260_2);

#define VkglTestCase_003261_1 "dEQP-GLES3.functional.shaders.swizzles.ve"
#define VkglTestCase_003261_2 "ctor_swizzles.mediump_ivec4_rgba_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003261, VkglTestCase_003261_1, VkglTestCase_003261_2);

#define VkglTestCase_003262_1 "dEQP-GLES3.functional.shaders.swizzles.v"
#define VkglTestCase_003262_2 "ector_swizzles.mediump_ivec4_abgr_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003262, VkglTestCase_003262_1, VkglTestCase_003262_2);

#define VkglTestCase_003263_1 "dEQP-GLES3.functional.shaders.swizzles.ve"
#define VkglTestCase_003263_2 "ctor_swizzles.mediump_ivec4_abgr_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003263, VkglTestCase_003263_1, VkglTestCase_003263_2);

#define VkglTestCase_003264_1 "dEQP-GLES3.functional.shaders.swizzles.v"
#define VkglTestCase_003264_2 "ector_swizzles.mediump_ivec4_rrrr_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003264, VkglTestCase_003264_1, VkglTestCase_003264_2);

#define VkglTestCase_003265_1 "dEQP-GLES3.functional.shaders.swizzles.ve"
#define VkglTestCase_003265_2 "ctor_swizzles.mediump_ivec4_rrrr_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003265, VkglTestCase_003265_1, VkglTestCase_003265_2);

#define VkglTestCase_003266_1 "dEQP-GLES3.functional.shaders.swizzles.v"
#define VkglTestCase_003266_2 "ector_swizzles.mediump_ivec4_gggg_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003266, VkglTestCase_003266_1, VkglTestCase_003266_2);

#define VkglTestCase_003267_1 "dEQP-GLES3.functional.shaders.swizzles.ve"
#define VkglTestCase_003267_2 "ctor_swizzles.mediump_ivec4_gggg_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003267, VkglTestCase_003267_1, VkglTestCase_003267_2);

#define VkglTestCase_003268_1 "dEQP-GLES3.functional.shaders.swizzles.v"
#define VkglTestCase_003268_2 "ector_swizzles.mediump_ivec4_aaaa_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003268, VkglTestCase_003268_1, VkglTestCase_003268_2);

#define VkglTestCase_003269_1 "dEQP-GLES3.functional.shaders.swizzles.ve"
#define VkglTestCase_003269_2 "ctor_swizzles.mediump_ivec4_aaaa_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003269, VkglTestCase_003269_1, VkglTestCase_003269_2);

#define VkglTestCase_003270_1 "dEQP-GLES3.functional.shaders.swizzles.v"
#define VkglTestCase_003270_2 "ector_swizzles.mediump_ivec4_abba_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003270, VkglTestCase_003270_1, VkglTestCase_003270_2);

#define VkglTestCase_003271_1 "dEQP-GLES3.functional.shaders.swizzles.ve"
#define VkglTestCase_003271_2 "ctor_swizzles.mediump_ivec4_abba_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003271, VkglTestCase_003271_1, VkglTestCase_003271_2);

#define VkglTestCase_003272_1 "dEQP-GLES3.functional.shaders.swizzles.v"
#define VkglTestCase_003272_2 "ector_swizzles.mediump_ivec4_aaag_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003272, VkglTestCase_003272_1, VkglTestCase_003272_2);

#define VkglTestCase_003273_1 "dEQP-GLES3.functional.shaders.swizzles.ve"
#define VkglTestCase_003273_2 "ctor_swizzles.mediump_ivec4_aaag_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003273, VkglTestCase_003273_1, VkglTestCase_003273_2);

#define VkglTestCase_003274_1 "dEQP-GLES3.functional.shaders.swizzles.v"
#define VkglTestCase_003274_2 "ector_swizzles.mediump_ivec4_rgrr_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003274, VkglTestCase_003274_1, VkglTestCase_003274_2);

#define VkglTestCase_003275_1 "dEQP-GLES3.functional.shaders.swizzles.ve"
#define VkglTestCase_003275_2 "ctor_swizzles.mediump_ivec4_rgrr_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003275, VkglTestCase_003275_1, VkglTestCase_003275_2);

#define VkglTestCase_003276_1 "dEQP-GLES3.functional.shaders.swizzles.v"
#define VkglTestCase_003276_2 "ector_swizzles.mediump_ivec4_bbab_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003276, VkglTestCase_003276_1, VkglTestCase_003276_2);

#define VkglTestCase_003277_1 "dEQP-GLES3.functional.shaders.swizzles.ve"
#define VkglTestCase_003277_2 "ctor_swizzles.mediump_ivec4_bbab_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003277, VkglTestCase_003277_1, VkglTestCase_003277_2);

#define VkglTestCase_003278_1 "dEQP-GLES3.functional.shaders.swizzles"
#define VkglTestCase_003278_2 ".vector_swizzles.mediump_bvec2_x_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003278, VkglTestCase_003278_1, VkglTestCase_003278_2);

#define VkglTestCase_003279_1 "dEQP-GLES3.functional.shaders.swizzles."
#define VkglTestCase_003279_2 "vector_swizzles.mediump_bvec2_x_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003279, VkglTestCase_003279_1, VkglTestCase_003279_2);

#define VkglTestCase_003280_1 "dEQP-GLES3.functional.shaders.swizzles."
#define VkglTestCase_003280_2 "vector_swizzles.mediump_bvec2_xx_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003280, VkglTestCase_003280_1, VkglTestCase_003280_2);

#define VkglTestCase_003281_1 "dEQP-GLES3.functional.shaders.swizzles.v"
#define VkglTestCase_003281_2 "ector_swizzles.mediump_bvec2_xx_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003281, VkglTestCase_003281_1, VkglTestCase_003281_2);

#define VkglTestCase_003282_1 "dEQP-GLES3.functional.shaders.swizzles."
#define VkglTestCase_003282_2 "vector_swizzles.mediump_bvec2_xy_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003282, VkglTestCase_003282_1, VkglTestCase_003282_2);

#define VkglTestCase_003283_1 "dEQP-GLES3.functional.shaders.swizzles.v"
#define VkglTestCase_003283_2 "ector_swizzles.mediump_bvec2_xy_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003283, VkglTestCase_003283_1, VkglTestCase_003283_2);

#define VkglTestCase_003284_1 "dEQP-GLES3.functional.shaders.swizzles."
#define VkglTestCase_003284_2 "vector_swizzles.mediump_bvec2_yx_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003284, VkglTestCase_003284_1, VkglTestCase_003284_2);

#define VkglTestCase_003285_1 "dEQP-GLES3.functional.shaders.swizzles.v"
#define VkglTestCase_003285_2 "ector_swizzles.mediump_bvec2_yx_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003285, VkglTestCase_003285_1, VkglTestCase_003285_2);

#define VkglTestCase_003286_1 "dEQP-GLES3.functional.shaders.swizzles."
#define VkglTestCase_003286_2 "vector_swizzles.mediump_bvec2_yxy_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003286, VkglTestCase_003286_1, VkglTestCase_003286_2);

#define VkglTestCase_003287_1 "dEQP-GLES3.functional.shaders.swizzles.v"
#define VkglTestCase_003287_2 "ector_swizzles.mediump_bvec2_yxy_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003287, VkglTestCase_003287_1, VkglTestCase_003287_2);

#define VkglTestCase_003288_1 "dEQP-GLES3.functional.shaders.swizzles.v"
#define VkglTestCase_003288_2 "ector_swizzles.mediump_bvec2_xyxx_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003288, VkglTestCase_003288_1, VkglTestCase_003288_2);

#define VkglTestCase_003289_1 "dEQP-GLES3.functional.shaders.swizzles.ve"
#define VkglTestCase_003289_2 "ctor_swizzles.mediump_bvec2_xyxx_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003289, VkglTestCase_003289_1, VkglTestCase_003289_2);

#define VkglTestCase_003290_1 "dEQP-GLES3.functional.shaders.swizzles.v"
#define VkglTestCase_003290_2 "ector_swizzles.mediump_bvec2_yyyy_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003290, VkglTestCase_003290_1, VkglTestCase_003290_2);

#define VkglTestCase_003291_1 "dEQP-GLES3.functional.shaders.swizzles.ve"
#define VkglTestCase_003291_2 "ctor_swizzles.mediump_bvec2_yyyy_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003291, VkglTestCase_003291_1, VkglTestCase_003291_2);

#define VkglTestCase_003292_1 "dEQP-GLES3.functional.shaders.swizzles"
#define VkglTestCase_003292_2 ".vector_swizzles.mediump_bvec2_s_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003292, VkglTestCase_003292_1, VkglTestCase_003292_2);

#define VkglTestCase_003293_1 "dEQP-GLES3.functional.shaders.swizzles."
#define VkglTestCase_003293_2 "vector_swizzles.mediump_bvec2_s_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003293, VkglTestCase_003293_1, VkglTestCase_003293_2);

#define VkglTestCase_003294_1 "dEQP-GLES3.functional.shaders.swizzles."
#define VkglTestCase_003294_2 "vector_swizzles.mediump_bvec2_ss_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003294, VkglTestCase_003294_1, VkglTestCase_003294_2);

#define VkglTestCase_003295_1 "dEQP-GLES3.functional.shaders.swizzles.v"
#define VkglTestCase_003295_2 "ector_swizzles.mediump_bvec2_ss_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003295, VkglTestCase_003295_1, VkglTestCase_003295_2);

#define VkglTestCase_003296_1 "dEQP-GLES3.functional.shaders.swizzles."
#define VkglTestCase_003296_2 "vector_swizzles.mediump_bvec2_st_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003296, VkglTestCase_003296_1, VkglTestCase_003296_2);

#define VkglTestCase_003297_1 "dEQP-GLES3.functional.shaders.swizzles.v"
#define VkglTestCase_003297_2 "ector_swizzles.mediump_bvec2_st_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003297, VkglTestCase_003297_1, VkglTestCase_003297_2);

#define VkglTestCase_003298_1 "dEQP-GLES3.functional.shaders.swizzles."
#define VkglTestCase_003298_2 "vector_swizzles.mediump_bvec2_ts_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003298, VkglTestCase_003298_1, VkglTestCase_003298_2);

#define VkglTestCase_003299_1 "dEQP-GLES3.functional.shaders.swizzles.v"
#define VkglTestCase_003299_2 "ector_swizzles.mediump_bvec2_ts_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003299, VkglTestCase_003299_1, VkglTestCase_003299_2);

#define VkglTestCase_003300_1 "dEQP-GLES3.functional.shaders.swizzles."
#define VkglTestCase_003300_2 "vector_swizzles.mediump_bvec2_tst_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003300, VkglTestCase_003300_1, VkglTestCase_003300_2);

#define VkglTestCase_003301_1 "dEQP-GLES3.functional.shaders.swizzles.v"
#define VkglTestCase_003301_2 "ector_swizzles.mediump_bvec2_tst_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003301, VkglTestCase_003301_1, VkglTestCase_003301_2);

#define VkglTestCase_003302_1 "dEQP-GLES3.functional.shaders.swizzles.v"
#define VkglTestCase_003302_2 "ector_swizzles.mediump_bvec2_stss_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003302, VkglTestCase_003302_1, VkglTestCase_003302_2);

#define VkglTestCase_003303_1 "dEQP-GLES3.functional.shaders.swizzles.ve"
#define VkglTestCase_003303_2 "ctor_swizzles.mediump_bvec2_stss_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003303, VkglTestCase_003303_1, VkglTestCase_003303_2);

#define VkglTestCase_003304_1 "dEQP-GLES3.functional.shaders.swizzles.v"
#define VkglTestCase_003304_2 "ector_swizzles.mediump_bvec2_tttt_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003304, VkglTestCase_003304_1, VkglTestCase_003304_2);

#define VkglTestCase_003305_1 "dEQP-GLES3.functional.shaders.swizzles.ve"
#define VkglTestCase_003305_2 "ctor_swizzles.mediump_bvec2_tttt_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003305, VkglTestCase_003305_1, VkglTestCase_003305_2);

#define VkglTestCase_003306_1 "dEQP-GLES3.functional.shaders.swizzles"
#define VkglTestCase_003306_2 ".vector_swizzles.mediump_bvec2_r_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003306, VkglTestCase_003306_1, VkglTestCase_003306_2);

#define VkglTestCase_003307_1 "dEQP-GLES3.functional.shaders.swizzles."
#define VkglTestCase_003307_2 "vector_swizzles.mediump_bvec2_r_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003307, VkglTestCase_003307_1, VkglTestCase_003307_2);

#define VkglTestCase_003308_1 "dEQP-GLES3.functional.shaders.swizzles."
#define VkglTestCase_003308_2 "vector_swizzles.mediump_bvec2_rr_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003308, VkglTestCase_003308_1, VkglTestCase_003308_2);

#define VkglTestCase_003309_1 "dEQP-GLES3.functional.shaders.swizzles.v"
#define VkglTestCase_003309_2 "ector_swizzles.mediump_bvec2_rr_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003309, VkglTestCase_003309_1, VkglTestCase_003309_2);

#define VkglTestCase_003310_1 "dEQP-GLES3.functional.shaders.swizzles."
#define VkglTestCase_003310_2 "vector_swizzles.mediump_bvec2_rg_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003310, VkglTestCase_003310_1, VkglTestCase_003310_2);

#define VkglTestCase_003311_1 "dEQP-GLES3.functional.shaders.swizzles.v"
#define VkglTestCase_003311_2 "ector_swizzles.mediump_bvec2_rg_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003311, VkglTestCase_003311_1, VkglTestCase_003311_2);

#define VkglTestCase_003312_1 "dEQP-GLES3.functional.shaders.swizzles."
#define VkglTestCase_003312_2 "vector_swizzles.mediump_bvec2_gr_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003312, VkglTestCase_003312_1, VkglTestCase_003312_2);

#define VkglTestCase_003313_1 "dEQP-GLES3.functional.shaders.swizzles.v"
#define VkglTestCase_003313_2 "ector_swizzles.mediump_bvec2_gr_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003313, VkglTestCase_003313_1, VkglTestCase_003313_2);

#define VkglTestCase_003314_1 "dEQP-GLES3.functional.shaders.swizzles."
#define VkglTestCase_003314_2 "vector_swizzles.mediump_bvec2_grg_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003314, VkglTestCase_003314_1, VkglTestCase_003314_2);

#define VkglTestCase_003315_1 "dEQP-GLES3.functional.shaders.swizzles.v"
#define VkglTestCase_003315_2 "ector_swizzles.mediump_bvec2_grg_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003315, VkglTestCase_003315_1, VkglTestCase_003315_2);

#define VkglTestCase_003316_1 "dEQP-GLES3.functional.shaders.swizzles.v"
#define VkglTestCase_003316_2 "ector_swizzles.mediump_bvec2_rgrr_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003316, VkglTestCase_003316_1, VkglTestCase_003316_2);

#define VkglTestCase_003317_1 "dEQP-GLES3.functional.shaders.swizzles.ve"
#define VkglTestCase_003317_2 "ctor_swizzles.mediump_bvec2_rgrr_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003317, VkglTestCase_003317_1, VkglTestCase_003317_2);

#define VkglTestCase_003318_1 "dEQP-GLES3.functional.shaders.swizzles.v"
#define VkglTestCase_003318_2 "ector_swizzles.mediump_bvec2_gggg_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003318, VkglTestCase_003318_1, VkglTestCase_003318_2);

#define VkglTestCase_003319_1 "dEQP-GLES3.functional.shaders.swizzles.ve"
#define VkglTestCase_003319_2 "ctor_swizzles.mediump_bvec2_gggg_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003319, VkglTestCase_003319_1, VkglTestCase_003319_2);

#define VkglTestCase_003320_1 "dEQP-GLES3.functional.shaders.swizzles"
#define VkglTestCase_003320_2 ".vector_swizzles.mediump_bvec3_x_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003320, VkglTestCase_003320_1, VkglTestCase_003320_2);

#define VkglTestCase_003321_1 "dEQP-GLES3.functional.shaders.swizzles."
#define VkglTestCase_003321_2 "vector_swizzles.mediump_bvec3_x_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003321, VkglTestCase_003321_1, VkglTestCase_003321_2);

#define VkglTestCase_003322_1 "dEQP-GLES3.functional.shaders.swizzles"
#define VkglTestCase_003322_2 ".vector_swizzles.mediump_bvec3_z_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003322, VkglTestCase_003322_1, VkglTestCase_003322_2);

#define VkglTestCase_003323_1 "dEQP-GLES3.functional.shaders.swizzles."
#define VkglTestCase_003323_2 "vector_swizzles.mediump_bvec3_z_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003323, VkglTestCase_003323_1, VkglTestCase_003323_2);

#define VkglTestCase_003324_1 "dEQP-GLES3.functional.shaders.swizzles."
#define VkglTestCase_003324_2 "vector_swizzles.mediump_bvec3_xz_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003324, VkglTestCase_003324_1, VkglTestCase_003324_2);

#define VkglTestCase_003325_1 "dEQP-GLES3.functional.shaders.swizzles.v"
#define VkglTestCase_003325_2 "ector_swizzles.mediump_bvec3_xz_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003325, VkglTestCase_003325_1, VkglTestCase_003325_2);

#define VkglTestCase_003326_1 "dEQP-GLES3.functional.shaders.swizzles."
#define VkglTestCase_003326_2 "vector_swizzles.mediump_bvec3_zz_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003326, VkglTestCase_003326_1, VkglTestCase_003326_2);

#define VkglTestCase_003327_1 "dEQP-GLES3.functional.shaders.swizzles.v"
#define VkglTestCase_003327_2 "ector_swizzles.mediump_bvec3_zz_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003327, VkglTestCase_003327_1, VkglTestCase_003327_2);

#define VkglTestCase_003328_1 "dEQP-GLES3.functional.shaders.swizzles."
#define VkglTestCase_003328_2 "vector_swizzles.mediump_bvec3_xyz_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003328, VkglTestCase_003328_1, VkglTestCase_003328_2);

#define VkglTestCase_003329_1 "dEQP-GLES3.functional.shaders.swizzles.v"
#define VkglTestCase_003329_2 "ector_swizzles.mediump_bvec3_xyz_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003329, VkglTestCase_003329_1, VkglTestCase_003329_2);

#define VkglTestCase_003330_1 "dEQP-GLES3.functional.shaders.swizzles."
#define VkglTestCase_003330_2 "vector_swizzles.mediump_bvec3_zyx_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003330, VkglTestCase_003330_1, VkglTestCase_003330_2);

#define VkglTestCase_003331_1 "dEQP-GLES3.functional.shaders.swizzles.v"
#define VkglTestCase_003331_2 "ector_swizzles.mediump_bvec3_zyx_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003331, VkglTestCase_003331_1, VkglTestCase_003331_2);

#define VkglTestCase_003332_1 "dEQP-GLES3.functional.shaders.swizzles."
#define VkglTestCase_003332_2 "vector_swizzles.mediump_bvec3_xxx_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003332, VkglTestCase_003332_1, VkglTestCase_003332_2);

#define VkglTestCase_003333_1 "dEQP-GLES3.functional.shaders.swizzles.v"
#define VkglTestCase_003333_2 "ector_swizzles.mediump_bvec3_xxx_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003333, VkglTestCase_003333_1, VkglTestCase_003333_2);

#define VkglTestCase_003334_1 "dEQP-GLES3.functional.shaders.swizzles."
#define VkglTestCase_003334_2 "vector_swizzles.mediump_bvec3_zzz_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003334, VkglTestCase_003334_1, VkglTestCase_003334_2);

#define VkglTestCase_003335_1 "dEQP-GLES3.functional.shaders.swizzles.v"
#define VkglTestCase_003335_2 "ector_swizzles.mediump_bvec3_zzz_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003335, VkglTestCase_003335_1, VkglTestCase_003335_2);

#define VkglTestCase_003336_1 "dEQP-GLES3.functional.shaders.swizzles."
#define VkglTestCase_003336_2 "vector_swizzles.mediump_bvec3_zzy_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003336, VkglTestCase_003336_1, VkglTestCase_003336_2);

#define VkglTestCase_003337_1 "dEQP-GLES3.functional.shaders.swizzles.v"
#define VkglTestCase_003337_2 "ector_swizzles.mediump_bvec3_zzy_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003337, VkglTestCase_003337_1, VkglTestCase_003337_2);

#define VkglTestCase_003338_1 "dEQP-GLES3.functional.shaders.swizzles."
#define VkglTestCase_003338_2 "vector_swizzles.mediump_bvec3_yxy_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003338, VkglTestCase_003338_1, VkglTestCase_003338_2);

#define VkglTestCase_003339_1 "dEQP-GLES3.functional.shaders.swizzles.v"
#define VkglTestCase_003339_2 "ector_swizzles.mediump_bvec3_yxy_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003339, VkglTestCase_003339_1, VkglTestCase_003339_2);

#define VkglTestCase_003340_1 "dEQP-GLES3.functional.shaders.swizzles."
#define VkglTestCase_003340_2 "vector_swizzles.mediump_bvec3_xzx_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003340, VkglTestCase_003340_1, VkglTestCase_003340_2);

#define VkglTestCase_003341_1 "dEQP-GLES3.functional.shaders.swizzles.v"
#define VkglTestCase_003341_2 "ector_swizzles.mediump_bvec3_xzx_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003341, VkglTestCase_003341_1, VkglTestCase_003341_2);

#define VkglTestCase_003342_1 "dEQP-GLES3.functional.shaders.swizzles.v"
#define VkglTestCase_003342_2 "ector_swizzles.mediump_bvec3_xyyx_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003342, VkglTestCase_003342_1, VkglTestCase_003342_2);

#define VkglTestCase_003343_1 "dEQP-GLES3.functional.shaders.swizzles.ve"
#define VkglTestCase_003343_2 "ctor_swizzles.mediump_bvec3_xyyx_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003343, VkglTestCase_003343_1, VkglTestCase_003343_2);

#define VkglTestCase_003344_1 "dEQP-GLES3.functional.shaders.swizzles.v"
#define VkglTestCase_003344_2 "ector_swizzles.mediump_bvec3_zzzz_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003344, VkglTestCase_003344_1, VkglTestCase_003344_2);

#define VkglTestCase_003345_1 "dEQP-GLES3.functional.shaders.swizzles.ve"
#define VkglTestCase_003345_2 "ctor_swizzles.mediump_bvec3_zzzz_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003345, VkglTestCase_003345_1, VkglTestCase_003345_2);

#define VkglTestCase_003346_1 "dEQP-GLES3.functional.shaders.swizzles"
#define VkglTestCase_003346_2 ".vector_swizzles.mediump_bvec3_s_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003346, VkglTestCase_003346_1, VkglTestCase_003346_2);

#define VkglTestCase_003347_1 "dEQP-GLES3.functional.shaders.swizzles."
#define VkglTestCase_003347_2 "vector_swizzles.mediump_bvec3_s_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003347, VkglTestCase_003347_1, VkglTestCase_003347_2);

#define VkglTestCase_003348_1 "dEQP-GLES3.functional.shaders.swizzles"
#define VkglTestCase_003348_2 ".vector_swizzles.mediump_bvec3_p_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003348, VkglTestCase_003348_1, VkglTestCase_003348_2);

#define VkglTestCase_003349_1 "dEQP-GLES3.functional.shaders.swizzles."
#define VkglTestCase_003349_2 "vector_swizzles.mediump_bvec3_p_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003349, VkglTestCase_003349_1, VkglTestCase_003349_2);

#define VkglTestCase_003350_1 "dEQP-GLES3.functional.shaders.swizzles."
#define VkglTestCase_003350_2 "vector_swizzles.mediump_bvec3_sp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003350, VkglTestCase_003350_1, VkglTestCase_003350_2);

#define VkglTestCase_003351_1 "dEQP-GLES3.functional.shaders.swizzles.v"
#define VkglTestCase_003351_2 "ector_swizzles.mediump_bvec3_sp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003351, VkglTestCase_003351_1, VkglTestCase_003351_2);

#define VkglTestCase_003352_1 "dEQP-GLES3.functional.shaders.swizzles."
#define VkglTestCase_003352_2 "vector_swizzles.mediump_bvec3_pp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003352, VkglTestCase_003352_1, VkglTestCase_003352_2);

#define VkglTestCase_003353_1 "dEQP-GLES3.functional.shaders.swizzles.v"
#define VkglTestCase_003353_2 "ector_swizzles.mediump_bvec3_pp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003353, VkglTestCase_003353_1, VkglTestCase_003353_2);

#define VkglTestCase_003354_1 "dEQP-GLES3.functional.shaders.swizzles."
#define VkglTestCase_003354_2 "vector_swizzles.mediump_bvec3_stp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003354, VkglTestCase_003354_1, VkglTestCase_003354_2);

#define VkglTestCase_003355_1 "dEQP-GLES3.functional.shaders.swizzles.v"
#define VkglTestCase_003355_2 "ector_swizzles.mediump_bvec3_stp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003355, VkglTestCase_003355_1, VkglTestCase_003355_2);

#define VkglTestCase_003356_1 "dEQP-GLES3.functional.shaders.swizzles."
#define VkglTestCase_003356_2 "vector_swizzles.mediump_bvec3_pts_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003356, VkglTestCase_003356_1, VkglTestCase_003356_2);

#define VkglTestCase_003357_1 "dEQP-GLES3.functional.shaders.swizzles.v"
#define VkglTestCase_003357_2 "ector_swizzles.mediump_bvec3_pts_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003357, VkglTestCase_003357_1, VkglTestCase_003357_2);

#define VkglTestCase_003358_1 "dEQP-GLES3.functional.shaders.swizzles."
#define VkglTestCase_003358_2 "vector_swizzles.mediump_bvec3_sss_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003358, VkglTestCase_003358_1, VkglTestCase_003358_2);

#define VkglTestCase_003359_1 "dEQP-GLES3.functional.shaders.swizzles.v"
#define VkglTestCase_003359_2 "ector_swizzles.mediump_bvec3_sss_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003359, VkglTestCase_003359_1, VkglTestCase_003359_2);

#define VkglTestCase_003360_1 "dEQP-GLES3.functional.shaders.swizzles."
#define VkglTestCase_003360_2 "vector_swizzles.mediump_bvec3_ppp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003360, VkglTestCase_003360_1, VkglTestCase_003360_2);

#define VkglTestCase_003361_1 "dEQP-GLES3.functional.shaders.swizzles.v"
#define VkglTestCase_003361_2 "ector_swizzles.mediump_bvec3_ppp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003361, VkglTestCase_003361_1, VkglTestCase_003361_2);

#define VkglTestCase_003362_1 "dEQP-GLES3.functional.shaders.swizzles."
#define VkglTestCase_003362_2 "vector_swizzles.mediump_bvec3_ppt_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003362, VkglTestCase_003362_1, VkglTestCase_003362_2);

#define VkglTestCase_003363_1 "dEQP-GLES3.functional.shaders.swizzles.v"
#define VkglTestCase_003363_2 "ector_swizzles.mediump_bvec3_ppt_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003363, VkglTestCase_003363_1, VkglTestCase_003363_2);

#define VkglTestCase_003364_1 "dEQP-GLES3.functional.shaders.swizzles."
#define VkglTestCase_003364_2 "vector_swizzles.mediump_bvec3_tst_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003364, VkglTestCase_003364_1, VkglTestCase_003364_2);

#define VkglTestCase_003365_1 "dEQP-GLES3.functional.shaders.swizzles.v"
#define VkglTestCase_003365_2 "ector_swizzles.mediump_bvec3_tst_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003365, VkglTestCase_003365_1, VkglTestCase_003365_2);

#define VkglTestCase_003366_1 "dEQP-GLES3.functional.shaders.swizzles."
#define VkglTestCase_003366_2 "vector_swizzles.mediump_bvec3_sps_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003366, VkglTestCase_003366_1, VkglTestCase_003366_2);

#define VkglTestCase_003367_1 "dEQP-GLES3.functional.shaders.swizzles.v"
#define VkglTestCase_003367_2 "ector_swizzles.mediump_bvec3_sps_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003367, VkglTestCase_003367_1, VkglTestCase_003367_2);

#define VkglTestCase_003368_1 "dEQP-GLES3.functional.shaders.swizzles.v"
#define VkglTestCase_003368_2 "ector_swizzles.mediump_bvec3_stts_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003368, VkglTestCase_003368_1, VkglTestCase_003368_2);

#define VkglTestCase_003369_1 "dEQP-GLES3.functional.shaders.swizzles.ve"
#define VkglTestCase_003369_2 "ctor_swizzles.mediump_bvec3_stts_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003369, VkglTestCase_003369_1, VkglTestCase_003369_2);

#define VkglTestCase_003370_1 "dEQP-GLES3.functional.shaders.swizzles.v"
#define VkglTestCase_003370_2 "ector_swizzles.mediump_bvec3_pppp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003370, VkglTestCase_003370_1, VkglTestCase_003370_2);

#define VkglTestCase_003371_1 "dEQP-GLES3.functional.shaders.swizzles.ve"
#define VkglTestCase_003371_2 "ctor_swizzles.mediump_bvec3_pppp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003371, VkglTestCase_003371_1, VkglTestCase_003371_2);

#define VkglTestCase_003372_1 "dEQP-GLES3.functional.shaders.swizzles"
#define VkglTestCase_003372_2 ".vector_swizzles.mediump_bvec3_r_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003372, VkglTestCase_003372_1, VkglTestCase_003372_2);

#define VkglTestCase_003373_1 "dEQP-GLES3.functional.shaders.swizzles."
#define VkglTestCase_003373_2 "vector_swizzles.mediump_bvec3_r_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003373, VkglTestCase_003373_1, VkglTestCase_003373_2);

#define VkglTestCase_003374_1 "dEQP-GLES3.functional.shaders.swizzles"
#define VkglTestCase_003374_2 ".vector_swizzles.mediump_bvec3_b_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003374, VkglTestCase_003374_1, VkglTestCase_003374_2);

#define VkglTestCase_003375_1 "dEQP-GLES3.functional.shaders.swizzles."
#define VkglTestCase_003375_2 "vector_swizzles.mediump_bvec3_b_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003375, VkglTestCase_003375_1, VkglTestCase_003375_2);

#define VkglTestCase_003376_1 "dEQP-GLES3.functional.shaders.swizzles."
#define VkglTestCase_003376_2 "vector_swizzles.mediump_bvec3_rb_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003376, VkglTestCase_003376_1, VkglTestCase_003376_2);

#define VkglTestCase_003377_1 "dEQP-GLES3.functional.shaders.swizzles.v"
#define VkglTestCase_003377_2 "ector_swizzles.mediump_bvec3_rb_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003377, VkglTestCase_003377_1, VkglTestCase_003377_2);

#define VkglTestCase_003378_1 "dEQP-GLES3.functional.shaders.swizzles."
#define VkglTestCase_003378_2 "vector_swizzles.mediump_bvec3_bb_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003378, VkglTestCase_003378_1, VkglTestCase_003378_2);

#define VkglTestCase_003379_1 "dEQP-GLES3.functional.shaders.swizzles.v"
#define VkglTestCase_003379_2 "ector_swizzles.mediump_bvec3_bb_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003379, VkglTestCase_003379_1, VkglTestCase_003379_2);

#define VkglTestCase_003380_1 "dEQP-GLES3.functional.shaders.swizzles."
#define VkglTestCase_003380_2 "vector_swizzles.mediump_bvec3_rgb_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003380, VkglTestCase_003380_1, VkglTestCase_003380_2);

#define VkglTestCase_003381_1 "dEQP-GLES3.functional.shaders.swizzles.v"
#define VkglTestCase_003381_2 "ector_swizzles.mediump_bvec3_rgb_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003381, VkglTestCase_003381_1, VkglTestCase_003381_2);

#define VkglTestCase_003382_1 "dEQP-GLES3.functional.shaders.swizzles."
#define VkglTestCase_003382_2 "vector_swizzles.mediump_bvec3_bgr_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003382, VkglTestCase_003382_1, VkglTestCase_003382_2);

#define VkglTestCase_003383_1 "dEQP-GLES3.functional.shaders.swizzles.v"
#define VkglTestCase_003383_2 "ector_swizzles.mediump_bvec3_bgr_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003383, VkglTestCase_003383_1, VkglTestCase_003383_2);

#define VkglTestCase_003384_1 "dEQP-GLES3.functional.shaders.swizzles."
#define VkglTestCase_003384_2 "vector_swizzles.mediump_bvec3_rrr_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003384, VkglTestCase_003384_1, VkglTestCase_003384_2);

#define VkglTestCase_003385_1 "dEQP-GLES3.functional.shaders.swizzles.v"
#define VkglTestCase_003385_2 "ector_swizzles.mediump_bvec3_rrr_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003385, VkglTestCase_003385_1, VkglTestCase_003385_2);

#define VkglTestCase_003386_1 "dEQP-GLES3.functional.shaders.swizzles."
#define VkglTestCase_003386_2 "vector_swizzles.mediump_bvec3_bbb_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003386, VkglTestCase_003386_1, VkglTestCase_003386_2);

#define VkglTestCase_003387_1 "dEQP-GLES3.functional.shaders.swizzles.v"
#define VkglTestCase_003387_2 "ector_swizzles.mediump_bvec3_bbb_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003387, VkglTestCase_003387_1, VkglTestCase_003387_2);

#define VkglTestCase_003388_1 "dEQP-GLES3.functional.shaders.swizzles."
#define VkglTestCase_003388_2 "vector_swizzles.mediump_bvec3_bbg_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003388, VkglTestCase_003388_1, VkglTestCase_003388_2);

#define VkglTestCase_003389_1 "dEQP-GLES3.functional.shaders.swizzles.v"
#define VkglTestCase_003389_2 "ector_swizzles.mediump_bvec3_bbg_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003389, VkglTestCase_003389_1, VkglTestCase_003389_2);

#define VkglTestCase_003390_1 "dEQP-GLES3.functional.shaders.swizzles."
#define VkglTestCase_003390_2 "vector_swizzles.mediump_bvec3_grg_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003390, VkglTestCase_003390_1, VkglTestCase_003390_2);

#define VkglTestCase_003391_1 "dEQP-GLES3.functional.shaders.swizzles.v"
#define VkglTestCase_003391_2 "ector_swizzles.mediump_bvec3_grg_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003391, VkglTestCase_003391_1, VkglTestCase_003391_2);

#define VkglTestCase_003392_1 "dEQP-GLES3.functional.shaders.swizzles."
#define VkglTestCase_003392_2 "vector_swizzles.mediump_bvec3_rbr_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003392, VkglTestCase_003392_1, VkglTestCase_003392_2);

#define VkglTestCase_003393_1 "dEQP-GLES3.functional.shaders.swizzles.v"
#define VkglTestCase_003393_2 "ector_swizzles.mediump_bvec3_rbr_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003393, VkglTestCase_003393_1, VkglTestCase_003393_2);

#define VkglTestCase_003394_1 "dEQP-GLES3.functional.shaders.swizzles.v"
#define VkglTestCase_003394_2 "ector_swizzles.mediump_bvec3_rggr_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003394, VkglTestCase_003394_1, VkglTestCase_003394_2);

#define VkglTestCase_003395_1 "dEQP-GLES3.functional.shaders.swizzles.ve"
#define VkglTestCase_003395_2 "ctor_swizzles.mediump_bvec3_rggr_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003395, VkglTestCase_003395_1, VkglTestCase_003395_2);

#define VkglTestCase_003396_1 "dEQP-GLES3.functional.shaders.swizzles.v"
#define VkglTestCase_003396_2 "ector_swizzles.mediump_bvec3_bbbb_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003396, VkglTestCase_003396_1, VkglTestCase_003396_2);

#define VkglTestCase_003397_1 "dEQP-GLES3.functional.shaders.swizzles.ve"
#define VkglTestCase_003397_2 "ctor_swizzles.mediump_bvec3_bbbb_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003397, VkglTestCase_003397_1, VkglTestCase_003397_2);

#define VkglTestCase_003398_1 "dEQP-GLES3.functional.shaders.swizzles"
#define VkglTestCase_003398_2 ".vector_swizzles.mediump_bvec4_x_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003398, VkglTestCase_003398_1, VkglTestCase_003398_2);

#define VkglTestCase_003399_1 "dEQP-GLES3.functional.shaders.swizzles."
#define VkglTestCase_003399_2 "vector_swizzles.mediump_bvec4_x_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003399, VkglTestCase_003399_1, VkglTestCase_003399_2);

#define VkglTestCase_003400_1 "dEQP-GLES3.functional.shaders.swizzles"
#define VkglTestCase_003400_2 ".vector_swizzles.mediump_bvec4_w_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003400, VkglTestCase_003400_1, VkglTestCase_003400_2);

#define VkglTestCase_003401_1 "dEQP-GLES3.functional.shaders.swizzles."
#define VkglTestCase_003401_2 "vector_swizzles.mediump_bvec4_w_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003401, VkglTestCase_003401_1, VkglTestCase_003401_2);

#define VkglTestCase_003402_1 "dEQP-GLES3.functional.shaders.swizzles."
#define VkglTestCase_003402_2 "vector_swizzles.mediump_bvec4_wx_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003402, VkglTestCase_003402_1, VkglTestCase_003402_2);

#define VkglTestCase_003403_1 "dEQP-GLES3.functional.shaders.swizzles.v"
#define VkglTestCase_003403_2 "ector_swizzles.mediump_bvec4_wx_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003403, VkglTestCase_003403_1, VkglTestCase_003403_2);

#define VkglTestCase_003404_1 "dEQP-GLES3.functional.shaders.swizzles."
#define VkglTestCase_003404_2 "vector_swizzles.mediump_bvec4_wz_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003404, VkglTestCase_003404_1, VkglTestCase_003404_2);

#define VkglTestCase_003405_1 "dEQP-GLES3.functional.shaders.swizzles.v"
#define VkglTestCase_003405_2 "ector_swizzles.mediump_bvec4_wz_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003405, VkglTestCase_003405_1, VkglTestCase_003405_2);

#define VkglTestCase_003406_1 "dEQP-GLES3.functional.shaders.swizzles."
#define VkglTestCase_003406_2 "vector_swizzles.mediump_bvec4_www_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003406, VkglTestCase_003406_1, VkglTestCase_003406_2);

#define VkglTestCase_003407_1 "dEQP-GLES3.functional.shaders.swizzles.v"
#define VkglTestCase_003407_2 "ector_swizzles.mediump_bvec4_www_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003407, VkglTestCase_003407_1, VkglTestCase_003407_2);

#define VkglTestCase_003408_1 "dEQP-GLES3.functional.shaders.swizzles."
#define VkglTestCase_003408_2 "vector_swizzles.mediump_bvec4_yyw_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003408, VkglTestCase_003408_1, VkglTestCase_003408_2);

#define VkglTestCase_003409_1 "dEQP-GLES3.functional.shaders.swizzles.v"
#define VkglTestCase_003409_2 "ector_swizzles.mediump_bvec4_yyw_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003409, VkglTestCase_003409_1, VkglTestCase_003409_2);

#define VkglTestCase_003410_1 "dEQP-GLES3.functional.shaders.swizzles."
#define VkglTestCase_003410_2 "vector_swizzles.mediump_bvec4_wzy_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003410, VkglTestCase_003410_1, VkglTestCase_003410_2);

#define VkglTestCase_003411_1 "dEQP-GLES3.functional.shaders.swizzles.v"
#define VkglTestCase_003411_2 "ector_swizzles.mediump_bvec4_wzy_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003411, VkglTestCase_003411_1, VkglTestCase_003411_2);

#define VkglTestCase_003412_1 "dEQP-GLES3.functional.shaders.swizzles.v"
#define VkglTestCase_003412_2 "ector_swizzles.mediump_bvec4_xyzw_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003412, VkglTestCase_003412_1, VkglTestCase_003412_2);

#define VkglTestCase_003413_1 "dEQP-GLES3.functional.shaders.swizzles.ve"
#define VkglTestCase_003413_2 "ctor_swizzles.mediump_bvec4_xyzw_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003413, VkglTestCase_003413_1, VkglTestCase_003413_2);

#define VkglTestCase_003414_1 "dEQP-GLES3.functional.shaders.swizzles.v"
#define VkglTestCase_003414_2 "ector_swizzles.mediump_bvec4_wzyx_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003414, VkglTestCase_003414_1, VkglTestCase_003414_2);

#define VkglTestCase_003415_1 "dEQP-GLES3.functional.shaders.swizzles.ve"
#define VkglTestCase_003415_2 "ctor_swizzles.mediump_bvec4_wzyx_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003415, VkglTestCase_003415_1, VkglTestCase_003415_2);

#define VkglTestCase_003416_1 "dEQP-GLES3.functional.shaders.swizzles.v"
#define VkglTestCase_003416_2 "ector_swizzles.mediump_bvec4_xxxx_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003416, VkglTestCase_003416_1, VkglTestCase_003416_2);

#define VkglTestCase_003417_1 "dEQP-GLES3.functional.shaders.swizzles.ve"
#define VkglTestCase_003417_2 "ctor_swizzles.mediump_bvec4_xxxx_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003417, VkglTestCase_003417_1, VkglTestCase_003417_2);

#define VkglTestCase_003418_1 "dEQP-GLES3.functional.shaders.swizzles.v"
#define VkglTestCase_003418_2 "ector_swizzles.mediump_bvec4_yyyy_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003418, VkglTestCase_003418_1, VkglTestCase_003418_2);

#define VkglTestCase_003419_1 "dEQP-GLES3.functional.shaders.swizzles.ve"
#define VkglTestCase_003419_2 "ctor_swizzles.mediump_bvec4_yyyy_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003419, VkglTestCase_003419_1, VkglTestCase_003419_2);

#define VkglTestCase_003420_1 "dEQP-GLES3.functional.shaders.swizzles.v"
#define VkglTestCase_003420_2 "ector_swizzles.mediump_bvec4_wwww_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003420, VkglTestCase_003420_1, VkglTestCase_003420_2);

#define VkglTestCase_003421_1 "dEQP-GLES3.functional.shaders.swizzles.ve"
#define VkglTestCase_003421_2 "ctor_swizzles.mediump_bvec4_wwww_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003421, VkglTestCase_003421_1, VkglTestCase_003421_2);

#define VkglTestCase_003422_1 "dEQP-GLES3.functional.shaders.swizzles.v"
#define VkglTestCase_003422_2 "ector_swizzles.mediump_bvec4_wzzw_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003422, VkglTestCase_003422_1, VkglTestCase_003422_2);

#define VkglTestCase_003423_1 "dEQP-GLES3.functional.shaders.swizzles.ve"
#define VkglTestCase_003423_2 "ctor_swizzles.mediump_bvec4_wzzw_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003423, VkglTestCase_003423_1, VkglTestCase_003423_2);

#define VkglTestCase_003424_1 "dEQP-GLES3.functional.shaders.swizzles.v"
#define VkglTestCase_003424_2 "ector_swizzles.mediump_bvec4_wwwy_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003424, VkglTestCase_003424_1, VkglTestCase_003424_2);

#define VkglTestCase_003425_1 "dEQP-GLES3.functional.shaders.swizzles.ve"
#define VkglTestCase_003425_2 "ctor_swizzles.mediump_bvec4_wwwy_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003425, VkglTestCase_003425_1, VkglTestCase_003425_2);

#define VkglTestCase_003426_1 "dEQP-GLES3.functional.shaders.swizzles.v"
#define VkglTestCase_003426_2 "ector_swizzles.mediump_bvec4_xyxx_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003426, VkglTestCase_003426_1, VkglTestCase_003426_2);

#define VkglTestCase_003427_1 "dEQP-GLES3.functional.shaders.swizzles.ve"
#define VkglTestCase_003427_2 "ctor_swizzles.mediump_bvec4_xyxx_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003427, VkglTestCase_003427_1, VkglTestCase_003427_2);

#define VkglTestCase_003428_1 "dEQP-GLES3.functional.shaders.swizzles.v"
#define VkglTestCase_003428_2 "ector_swizzles.mediump_bvec4_zzwz_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003428, VkglTestCase_003428_1, VkglTestCase_003428_2);

#define VkglTestCase_003429_1 "dEQP-GLES3.functional.shaders.swizzles.ve"
#define VkglTestCase_003429_2 "ctor_swizzles.mediump_bvec4_zzwz_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003429, VkglTestCase_003429_1, VkglTestCase_003429_2);

#define VkglTestCase_003430_1 "dEQP-GLES3.functional.shaders.swizzles"
#define VkglTestCase_003430_2 ".vector_swizzles.mediump_bvec4_s_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003430, VkglTestCase_003430_1, VkglTestCase_003430_2);

#define VkglTestCase_003431_1 "dEQP-GLES3.functional.shaders.swizzles."
#define VkglTestCase_003431_2 "vector_swizzles.mediump_bvec4_s_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003431, VkglTestCase_003431_1, VkglTestCase_003431_2);

#define VkglTestCase_003432_1 "dEQP-GLES3.functional.shaders.swizzles"
#define VkglTestCase_003432_2 ".vector_swizzles.mediump_bvec4_q_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003432, VkglTestCase_003432_1, VkglTestCase_003432_2);

#define VkglTestCase_003433_1 "dEQP-GLES3.functional.shaders.swizzles."
#define VkglTestCase_003433_2 "vector_swizzles.mediump_bvec4_q_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003433, VkglTestCase_003433_1, VkglTestCase_003433_2);

#define VkglTestCase_003434_1 "dEQP-GLES3.functional.shaders.swizzles."
#define VkglTestCase_003434_2 "vector_swizzles.mediump_bvec4_qs_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003434, VkglTestCase_003434_1, VkglTestCase_003434_2);

#define VkglTestCase_003435_1 "dEQP-GLES3.functional.shaders.swizzles.v"
#define VkglTestCase_003435_2 "ector_swizzles.mediump_bvec4_qs_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003435, VkglTestCase_003435_1, VkglTestCase_003435_2);

#define VkglTestCase_003436_1 "dEQP-GLES3.functional.shaders.swizzles."
#define VkglTestCase_003436_2 "vector_swizzles.mediump_bvec4_qp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003436, VkglTestCase_003436_1, VkglTestCase_003436_2);

#define VkglTestCase_003437_1 "dEQP-GLES3.functional.shaders.swizzles.v"
#define VkglTestCase_003437_2 "ector_swizzles.mediump_bvec4_qp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003437, VkglTestCase_003437_1, VkglTestCase_003437_2);

#define VkglTestCase_003438_1 "dEQP-GLES3.functional.shaders.swizzles."
#define VkglTestCase_003438_2 "vector_swizzles.mediump_bvec4_qqq_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003438, VkglTestCase_003438_1, VkglTestCase_003438_2);

#define VkglTestCase_003439_1 "dEQP-GLES3.functional.shaders.swizzles.v"
#define VkglTestCase_003439_2 "ector_swizzles.mediump_bvec4_qqq_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003439, VkglTestCase_003439_1, VkglTestCase_003439_2);

#define VkglTestCase_003440_1 "dEQP-GLES3.functional.shaders.swizzles."
#define VkglTestCase_003440_2 "vector_swizzles.mediump_bvec4_ttq_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003440, VkglTestCase_003440_1, VkglTestCase_003440_2);

#define VkglTestCase_003441_1 "dEQP-GLES3.functional.shaders.swizzles.v"
#define VkglTestCase_003441_2 "ector_swizzles.mediump_bvec4_ttq_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003441, VkglTestCase_003441_1, VkglTestCase_003441_2);

#define VkglTestCase_003442_1 "dEQP-GLES3.functional.shaders.swizzles."
#define VkglTestCase_003442_2 "vector_swizzles.mediump_bvec4_qpt_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003442, VkglTestCase_003442_1, VkglTestCase_003442_2);

#define VkglTestCase_003443_1 "dEQP-GLES3.functional.shaders.swizzles.v"
#define VkglTestCase_003443_2 "ector_swizzles.mediump_bvec4_qpt_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003443, VkglTestCase_003443_1, VkglTestCase_003443_2);

#define VkglTestCase_003444_1 "dEQP-GLES3.functional.shaders.swizzles.v"
#define VkglTestCase_003444_2 "ector_swizzles.mediump_bvec4_stpq_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003444, VkglTestCase_003444_1, VkglTestCase_003444_2);

#define VkglTestCase_003445_1 "dEQP-GLES3.functional.shaders.swizzles.ve"
#define VkglTestCase_003445_2 "ctor_swizzles.mediump_bvec4_stpq_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003445, VkglTestCase_003445_1, VkglTestCase_003445_2);

#define VkglTestCase_003446_1 "dEQP-GLES3.functional.shaders.swizzles.v"
#define VkglTestCase_003446_2 "ector_swizzles.mediump_bvec4_qpts_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003446, VkglTestCase_003446_1, VkglTestCase_003446_2);

#define VkglTestCase_003447_1 "dEQP-GLES3.functional.shaders.swizzles.ve"
#define VkglTestCase_003447_2 "ctor_swizzles.mediump_bvec4_qpts_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003447, VkglTestCase_003447_1, VkglTestCase_003447_2);

#define VkglTestCase_003448_1 "dEQP-GLES3.functional.shaders.swizzles.v"
#define VkglTestCase_003448_2 "ector_swizzles.mediump_bvec4_ssss_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003448, VkglTestCase_003448_1, VkglTestCase_003448_2);

#define VkglTestCase_003449_1 "dEQP-GLES3.functional.shaders.swizzles.ve"
#define VkglTestCase_003449_2 "ctor_swizzles.mediump_bvec4_ssss_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003449, VkglTestCase_003449_1, VkglTestCase_003449_2);

#define VkglTestCase_003450_1 "dEQP-GLES3.functional.shaders.swizzles.v"
#define VkglTestCase_003450_2 "ector_swizzles.mediump_bvec4_tttt_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003450, VkglTestCase_003450_1, VkglTestCase_003450_2);

#define VkglTestCase_003451_1 "dEQP-GLES3.functional.shaders.swizzles.ve"
#define VkglTestCase_003451_2 "ctor_swizzles.mediump_bvec4_tttt_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003451, VkglTestCase_003451_1, VkglTestCase_003451_2);

#define VkglTestCase_003452_1 "dEQP-GLES3.functional.shaders.swizzles.v"
#define VkglTestCase_003452_2 "ector_swizzles.mediump_bvec4_qqqq_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003452, VkglTestCase_003452_1, VkglTestCase_003452_2);

#define VkglTestCase_003453_1 "dEQP-GLES3.functional.shaders.swizzles.ve"
#define VkglTestCase_003453_2 "ctor_swizzles.mediump_bvec4_qqqq_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003453, VkglTestCase_003453_1, VkglTestCase_003453_2);

#define VkglTestCase_003454_1 "dEQP-GLES3.functional.shaders.swizzles.v"
#define VkglTestCase_003454_2 "ector_swizzles.mediump_bvec4_qppq_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003454, VkglTestCase_003454_1, VkglTestCase_003454_2);

#define VkglTestCase_003455_1 "dEQP-GLES3.functional.shaders.swizzles.ve"
#define VkglTestCase_003455_2 "ctor_swizzles.mediump_bvec4_qppq_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003455, VkglTestCase_003455_1, VkglTestCase_003455_2);

#define VkglTestCase_003456_1 "dEQP-GLES3.functional.shaders.swizzles.v"
#define VkglTestCase_003456_2 "ector_swizzles.mediump_bvec4_qqqt_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003456, VkglTestCase_003456_1, VkglTestCase_003456_2);

#define VkglTestCase_003457_1 "dEQP-GLES3.functional.shaders.swizzles.ve"
#define VkglTestCase_003457_2 "ctor_swizzles.mediump_bvec4_qqqt_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003457, VkglTestCase_003457_1, VkglTestCase_003457_2);

#define VkglTestCase_003458_1 "dEQP-GLES3.functional.shaders.swizzles.v"
#define VkglTestCase_003458_2 "ector_swizzles.mediump_bvec4_stss_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003458, VkglTestCase_003458_1, VkglTestCase_003458_2);

#define VkglTestCase_003459_1 "dEQP-GLES3.functional.shaders.swizzles.ve"
#define VkglTestCase_003459_2 "ctor_swizzles.mediump_bvec4_stss_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003459, VkglTestCase_003459_1, VkglTestCase_003459_2);

#define VkglTestCase_003460_1 "dEQP-GLES3.functional.shaders.swizzles.v"
#define VkglTestCase_003460_2 "ector_swizzles.mediump_bvec4_ppqp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003460, VkglTestCase_003460_1, VkglTestCase_003460_2);

#define VkglTestCase_003461_1 "dEQP-GLES3.functional.shaders.swizzles.ve"
#define VkglTestCase_003461_2 "ctor_swizzles.mediump_bvec4_ppqp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003461, VkglTestCase_003461_1, VkglTestCase_003461_2);

#define VkglTestCase_003462_1 "dEQP-GLES3.functional.shaders.swizzles"
#define VkglTestCase_003462_2 ".vector_swizzles.mediump_bvec4_r_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003462, VkglTestCase_003462_1, VkglTestCase_003462_2);

#define VkglTestCase_003463_1 "dEQP-GLES3.functional.shaders.swizzles."
#define VkglTestCase_003463_2 "vector_swizzles.mediump_bvec4_r_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003463, VkglTestCase_003463_1, VkglTestCase_003463_2);

#define VkglTestCase_003464_1 "dEQP-GLES3.functional.shaders.swizzles"
#define VkglTestCase_003464_2 ".vector_swizzles.mediump_bvec4_a_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003464, VkglTestCase_003464_1, VkglTestCase_003464_2);

#define VkglTestCase_003465_1 "dEQP-GLES3.functional.shaders.swizzles."
#define VkglTestCase_003465_2 "vector_swizzles.mediump_bvec4_a_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003465, VkglTestCase_003465_1, VkglTestCase_003465_2);

#define VkglTestCase_003466_1 "dEQP-GLES3.functional.shaders.swizzles."
#define VkglTestCase_003466_2 "vector_swizzles.mediump_bvec4_ar_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003466, VkglTestCase_003466_1, VkglTestCase_003466_2);

#define VkglTestCase_003467_1 "dEQP-GLES3.functional.shaders.swizzles.v"
#define VkglTestCase_003467_2 "ector_swizzles.mediump_bvec4_ar_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003467, VkglTestCase_003467_1, VkglTestCase_003467_2);

#define VkglTestCase_003468_1 "dEQP-GLES3.functional.shaders.swizzles."
#define VkglTestCase_003468_2 "vector_swizzles.mediump_bvec4_ab_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003468, VkglTestCase_003468_1, VkglTestCase_003468_2);

#define VkglTestCase_003469_1 "dEQP-GLES3.functional.shaders.swizzles.v"
#define VkglTestCase_003469_2 "ector_swizzles.mediump_bvec4_ab_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003469, VkglTestCase_003469_1, VkglTestCase_003469_2);

#define VkglTestCase_003470_1 "dEQP-GLES3.functional.shaders.swizzles."
#define VkglTestCase_003470_2 "vector_swizzles.mediump_bvec4_aaa_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003470, VkglTestCase_003470_1, VkglTestCase_003470_2);

#define VkglTestCase_003471_1 "dEQP-GLES3.functional.shaders.swizzles.v"
#define VkglTestCase_003471_2 "ector_swizzles.mediump_bvec4_aaa_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003471, VkglTestCase_003471_1, VkglTestCase_003471_2);

#define VkglTestCase_003472_1 "dEQP-GLES3.functional.shaders.swizzles."
#define VkglTestCase_003472_2 "vector_swizzles.mediump_bvec4_gga_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003472, VkglTestCase_003472_1, VkglTestCase_003472_2);

#define VkglTestCase_003473_1 "dEQP-GLES3.functional.shaders.swizzles.v"
#define VkglTestCase_003473_2 "ector_swizzles.mediump_bvec4_gga_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003473, VkglTestCase_003473_1, VkglTestCase_003473_2);

#define VkglTestCase_003474_1 "dEQP-GLES3.functional.shaders.swizzles."
#define VkglTestCase_003474_2 "vector_swizzles.mediump_bvec4_abg_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003474, VkglTestCase_003474_1, VkglTestCase_003474_2);

#define VkglTestCase_003475_1 "dEQP-GLES3.functional.shaders.swizzles.v"
#define VkglTestCase_003475_2 "ector_swizzles.mediump_bvec4_abg_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003475, VkglTestCase_003475_1, VkglTestCase_003475_2);

#define VkglTestCase_003476_1 "dEQP-GLES3.functional.shaders.swizzles.v"
#define VkglTestCase_003476_2 "ector_swizzles.mediump_bvec4_rgba_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003476, VkglTestCase_003476_1, VkglTestCase_003476_2);

#define VkglTestCase_003477_1 "dEQP-GLES3.functional.shaders.swizzles.ve"
#define VkglTestCase_003477_2 "ctor_swizzles.mediump_bvec4_rgba_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003477, VkglTestCase_003477_1, VkglTestCase_003477_2);

#define VkglTestCase_003478_1 "dEQP-GLES3.functional.shaders.swizzles.v"
#define VkglTestCase_003478_2 "ector_swizzles.mediump_bvec4_abgr_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003478, VkglTestCase_003478_1, VkglTestCase_003478_2);

#define VkglTestCase_003479_1 "dEQP-GLES3.functional.shaders.swizzles.ve"
#define VkglTestCase_003479_2 "ctor_swizzles.mediump_bvec4_abgr_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003479, VkglTestCase_003479_1, VkglTestCase_003479_2);

#define VkglTestCase_003480_1 "dEQP-GLES3.functional.shaders.swizzles.v"
#define VkglTestCase_003480_2 "ector_swizzles.mediump_bvec4_rrrr_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003480, VkglTestCase_003480_1, VkglTestCase_003480_2);

#define VkglTestCase_003481_1 "dEQP-GLES3.functional.shaders.swizzles.ve"
#define VkglTestCase_003481_2 "ctor_swizzles.mediump_bvec4_rrrr_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003481, VkglTestCase_003481_1, VkglTestCase_003481_2);

#define VkglTestCase_003482_1 "dEQP-GLES3.functional.shaders.swizzles.v"
#define VkglTestCase_003482_2 "ector_swizzles.mediump_bvec4_gggg_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003482, VkglTestCase_003482_1, VkglTestCase_003482_2);

#define VkglTestCase_003483_1 "dEQP-GLES3.functional.shaders.swizzles.ve"
#define VkglTestCase_003483_2 "ctor_swizzles.mediump_bvec4_gggg_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003483, VkglTestCase_003483_1, VkglTestCase_003483_2);

#define VkglTestCase_003484_1 "dEQP-GLES3.functional.shaders.swizzles.v"
#define VkglTestCase_003484_2 "ector_swizzles.mediump_bvec4_aaaa_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003484, VkglTestCase_003484_1, VkglTestCase_003484_2);

#define VkglTestCase_003485_1 "dEQP-GLES3.functional.shaders.swizzles.ve"
#define VkglTestCase_003485_2 "ctor_swizzles.mediump_bvec4_aaaa_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003485, VkglTestCase_003485_1, VkglTestCase_003485_2);

#define VkglTestCase_003486_1 "dEQP-GLES3.functional.shaders.swizzles.v"
#define VkglTestCase_003486_2 "ector_swizzles.mediump_bvec4_abba_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003486, VkglTestCase_003486_1, VkglTestCase_003486_2);

#define VkglTestCase_003487_1 "dEQP-GLES3.functional.shaders.swizzles.ve"
#define VkglTestCase_003487_2 "ctor_swizzles.mediump_bvec4_abba_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003487, VkglTestCase_003487_1, VkglTestCase_003487_2);

#define VkglTestCase_003488_1 "dEQP-GLES3.functional.shaders.swizzles.v"
#define VkglTestCase_003488_2 "ector_swizzles.mediump_bvec4_aaag_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003488, VkglTestCase_003488_1, VkglTestCase_003488_2);

#define VkglTestCase_003489_1 "dEQP-GLES3.functional.shaders.swizzles.ve"
#define VkglTestCase_003489_2 "ctor_swizzles.mediump_bvec4_aaag_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003489, VkglTestCase_003489_1, VkglTestCase_003489_2);

#define VkglTestCase_003490_1 "dEQP-GLES3.functional.shaders.swizzles.v"
#define VkglTestCase_003490_2 "ector_swizzles.mediump_bvec4_rgrr_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003490, VkglTestCase_003490_1, VkglTestCase_003490_2);

#define VkglTestCase_003491_1 "dEQP-GLES3.functional.shaders.swizzles.ve"
#define VkglTestCase_003491_2 "ctor_swizzles.mediump_bvec4_rgrr_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003491, VkglTestCase_003491_1, VkglTestCase_003491_2);

#define VkglTestCase_003492_1 "dEQP-GLES3.functional.shaders.swizzles.v"
#define VkglTestCase_003492_2 "ector_swizzles.mediump_bvec4_bbab_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003492, VkglTestCase_003492_1, VkglTestCase_003492_2);

#define VkglTestCase_003493_1 "dEQP-GLES3.functional.shaders.swizzles.ve"
#define VkglTestCase_003493_2 "ctor_swizzles.mediump_bvec4_bbab_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_003493, VkglTestCase_003493_1, VkglTestCase_003493_2);
=======
static HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002846, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002846 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzles"
        ".vector_swizzles.mediump_vec2_x_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30003TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30003TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30003TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30003TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30003TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002846 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002846 end";
}

static HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002847, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002847 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzles."
        "vector_swizzles.mediump_vec2_x_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30003TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30003TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30003TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30003TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30003TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002847 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002847 end";
}

static HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002848, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002848 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzles"
        ".vector_swizzles.mediump_vec2_xx_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30003TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30003TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30003TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30003TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30003TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002848 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002848 end";
}

static HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002849, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002849 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzles."
        "vector_swizzles.mediump_vec2_xx_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30003TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30003TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30003TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30003TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30003TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002849 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002849 end";
}

static HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002850, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002850 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzles"
        ".vector_swizzles.mediump_vec2_xy_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30003TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30003TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30003TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30003TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30003TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002850 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002850 end";
}

static HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002851, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002851 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzles."
        "vector_swizzles.mediump_vec2_xy_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30003TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30003TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30003TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30003TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30003TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002851 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002851 end";
}

static HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002852, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002852 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzles"
        ".vector_swizzles.mediump_vec2_yx_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30003TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30003TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30003TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30003TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30003TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002852 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002852 end";
}

static HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002853, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002853 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzles."
        "vector_swizzles.mediump_vec2_yx_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30003TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30003TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30003TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30003TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30003TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002853 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002853 end";
}

static HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002854, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002854 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzles."
        "vector_swizzles.mediump_vec2_yxy_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30003TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30003TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30003TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30003TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30003TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002854 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002854 end";
}

static HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002855, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002855 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzles.v"
        "ector_swizzles.mediump_vec2_yxy_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30003TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30003TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30003TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30003TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30003TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002855 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002855 end";
}

static HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002856, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002856 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzles."
        "vector_swizzles.mediump_vec2_xyxx_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30003TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30003TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30003TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30003TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30003TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002856 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002856 end";
}

static HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002857, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002857 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzles.v"
        "ector_swizzles.mediump_vec2_xyxx_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30003TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30003TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30003TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30003TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30003TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002857 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002857 end";
}

static HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002858, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002858 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzles."
        "vector_swizzles.mediump_vec2_yyyy_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30003TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30003TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30003TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30003TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30003TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002858 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002858 end";
}

static HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002859, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002859 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzles.v"
        "ector_swizzles.mediump_vec2_yyyy_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30003TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30003TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30003TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30003TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30003TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002859 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002859 end";
}

static HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002860, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002860 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzles"
        ".vector_swizzles.mediump_vec2_s_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30003TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30003TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30003TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30003TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30003TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002860 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002860 end";
}

static HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002861, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002861 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzles."
        "vector_swizzles.mediump_vec2_s_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30003TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30003TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30003TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30003TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30003TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002861 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002861 end";
}

static HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002862, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002862 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzles"
        ".vector_swizzles.mediump_vec2_ss_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30003TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30003TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30003TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30003TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30003TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002862 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002862 end";
}

static HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002863, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002863 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzles."
        "vector_swizzles.mediump_vec2_ss_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30003TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30003TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30003TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30003TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30003TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002863 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002863 end";
}

static HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002864, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002864 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzles"
        ".vector_swizzles.mediump_vec2_st_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30003TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30003TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30003TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30003TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30003TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002864 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002864 end";
}

static HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002865, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002865 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzles."
        "vector_swizzles.mediump_vec2_st_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30003TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30003TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30003TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30003TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30003TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002865 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002865 end";
}

static HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002866, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002866 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzles"
        ".vector_swizzles.mediump_vec2_ts_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30003TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30003TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30003TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30003TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30003TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002866 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002866 end";
}

static HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002867, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002867 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzles."
        "vector_swizzles.mediump_vec2_ts_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30003TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30003TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30003TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30003TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30003TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002867 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002867 end";
}

static HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002868, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002868 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzles."
        "vector_swizzles.mediump_vec2_tst_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30003TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30003TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30003TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30003TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30003TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002868 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002868 end";
}

static HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002869, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002869 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzles.v"
        "ector_swizzles.mediump_vec2_tst_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30003TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30003TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30003TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30003TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30003TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002869 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002869 end";
}

static HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002870, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002870 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzles."
        "vector_swizzles.mediump_vec2_stss_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30003TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30003TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30003TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30003TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30003TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002870 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002870 end";
}

static HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002871, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002871 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzles.v"
        "ector_swizzles.mediump_vec2_stss_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30003TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30003TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30003TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30003TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30003TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002871 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002871 end";
}

static HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002872, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002872 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzles."
        "vector_swizzles.mediump_vec2_tttt_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30003TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30003TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30003TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30003TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30003TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002872 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002872 end";
}

static HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002873, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002873 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzles.v"
        "ector_swizzles.mediump_vec2_tttt_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30003TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30003TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30003TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30003TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30003TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002873 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002873 end";
}

static HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002874, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002874 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzles"
        ".vector_swizzles.mediump_vec2_r_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30003TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30003TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30003TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30003TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30003TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002874 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002874 end";
}

static HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002875, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002875 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzles."
        "vector_swizzles.mediump_vec2_r_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30003TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30003TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30003TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30003TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30003TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002875 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002875 end";
}

static HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002876, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002876 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzles"
        ".vector_swizzles.mediump_vec2_rr_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30003TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30003TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30003TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30003TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30003TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002876 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002876 end";
}

static HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002877, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002877 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzles."
        "vector_swizzles.mediump_vec2_rr_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30003TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30003TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30003TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30003TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30003TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002877 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002877 end";
}

static HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002878, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002878 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzles"
        ".vector_swizzles.mediump_vec2_rg_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30003TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30003TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30003TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30003TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30003TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002878 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002878 end";
}

static HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002879, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002879 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzles."
        "vector_swizzles.mediump_vec2_rg_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30003TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30003TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30003TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30003TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30003TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002879 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002879 end";
}

static HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002880, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002880 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzles"
        ".vector_swizzles.mediump_vec2_gr_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30003TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30003TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30003TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30003TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30003TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002880 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002880 end";
}

static HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002881, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002881 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzles."
        "vector_swizzles.mediump_vec2_gr_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30003TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30003TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30003TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30003TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30003TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002881 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002881 end";
}

static HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002882, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002882 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzles."
        "vector_swizzles.mediump_vec2_grg_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30003TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30003TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30003TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30003TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30003TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002882 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002882 end";
}

static HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002883, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002883 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzles.v"
        "ector_swizzles.mediump_vec2_grg_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30003TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30003TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30003TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30003TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30003TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002883 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002883 end";
}

static HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002884, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002884 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzles."
        "vector_swizzles.mediump_vec2_rgrr_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30003TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30003TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30003TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30003TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30003TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002884 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002884 end";
}

static HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002885, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002885 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzles.v"
        "ector_swizzles.mediump_vec2_rgrr_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30003TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30003TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30003TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30003TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30003TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002885 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002885 end";
}

static HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002886, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002886 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzles."
        "vector_swizzles.mediump_vec2_gggg_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30003TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30003TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30003TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30003TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30003TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002886 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002886 end";
}

static HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002887, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002887 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzles.v"
        "ector_swizzles.mediump_vec2_gggg_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30003TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30003TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30003TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30003TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30003TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002887 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002887 end";
}

static HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002888, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002888 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzles"
        ".vector_swizzles.mediump_vec3_x_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30003TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30003TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30003TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30003TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30003TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002888 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002888 end";
}

static HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002889, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002889 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzles."
        "vector_swizzles.mediump_vec3_x_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30003TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30003TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30003TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30003TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30003TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002889 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002889 end";
}

static HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002890, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002890 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzles"
        ".vector_swizzles.mediump_vec3_z_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30003TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30003TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30003TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30003TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30003TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002890 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002890 end";
}

static HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002891, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002891 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzles."
        "vector_swizzles.mediump_vec3_z_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30003TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30003TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30003TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30003TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30003TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002891 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002891 end";
}

static HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002892, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002892 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzles"
        ".vector_swizzles.mediump_vec3_xz_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30003TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30003TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30003TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30003TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30003TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002892 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002892 end";
}

static HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002893, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002893 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzles."
        "vector_swizzles.mediump_vec3_xz_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30003TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30003TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30003TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30003TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30003TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002893 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002893 end";
}

static HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002894, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002894 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzles"
        ".vector_swizzles.mediump_vec3_zz_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30003TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30003TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30003TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30003TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30003TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002894 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002894 end";
}

static HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002895, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002895 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzles."
        "vector_swizzles.mediump_vec3_zz_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30003TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30003TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30003TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30003TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30003TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002895 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002895 end";
}

static HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002896, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002896 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzles."
        "vector_swizzles.mediump_vec3_xyz_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30003TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30003TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30003TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30003TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30003TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002896 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002896 end";
}

static HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002897, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002897 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzles.v"
        "ector_swizzles.mediump_vec3_xyz_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30003TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30003TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30003TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30003TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30003TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002897 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002897 end";
}

static HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002898, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002898 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzles."
        "vector_swizzles.mediump_vec3_zyx_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30003TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30003TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30003TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30003TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30003TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002898 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002898 end";
}

static HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002899, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002899 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzles.v"
        "ector_swizzles.mediump_vec3_zyx_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30003TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30003TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30003TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30003TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30003TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002899 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002899 end";
}

static HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002900, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002900 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzles."
        "vector_swizzles.mediump_vec3_xxx_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30003TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30003TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30003TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30003TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30003TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002900 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002900 end";
}

static HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002901, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002901 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzles.v"
        "ector_swizzles.mediump_vec3_xxx_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30003TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30003TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30003TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30003TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30003TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002901 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002901 end";
}

static HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002902, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002902 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzles."
        "vector_swizzles.mediump_vec3_zzz_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30003TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30003TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30003TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30003TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30003TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002902 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002902 end";
}

static HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002903, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002903 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzles.v"
        "ector_swizzles.mediump_vec3_zzz_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30003TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30003TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30003TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30003TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30003TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002903 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002903 end";
}

static HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002904, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002904 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzles."
        "vector_swizzles.mediump_vec3_zzy_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30003TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30003TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30003TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30003TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30003TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002904 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002904 end";
}

static HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002905, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002905 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzles.v"
        "ector_swizzles.mediump_vec3_zzy_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30003TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30003TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30003TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30003TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30003TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002905 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002905 end";
}

static HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002906, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002906 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzles."
        "vector_swizzles.mediump_vec3_yxy_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30003TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30003TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30003TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30003TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30003TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002906 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002906 end";
}

static HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002907, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002907 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzles.v"
        "ector_swizzles.mediump_vec3_yxy_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30003TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30003TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30003TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30003TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30003TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002907 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002907 end";
}

static HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002908, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002908 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzles."
        "vector_swizzles.mediump_vec3_xzx_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30003TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30003TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30003TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30003TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30003TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002908 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002908 end";
}

static HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002909, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002909 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzles.v"
        "ector_swizzles.mediump_vec3_xzx_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30003TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30003TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30003TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30003TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30003TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002909 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002909 end";
}

static HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002910, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002910 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzles."
        "vector_swizzles.mediump_vec3_xyyx_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30003TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30003TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30003TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30003TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30003TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002910 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002910 end";
}

static HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002911, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002911 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzles.v"
        "ector_swizzles.mediump_vec3_xyyx_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30003TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30003TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30003TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30003TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30003TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002911 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002911 end";
}

static HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002912, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002912 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzles."
        "vector_swizzles.mediump_vec3_zzzz_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30003TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30003TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30003TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30003TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30003TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002912 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002912 end";
}

static HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002913, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002913 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzles.v"
        "ector_swizzles.mediump_vec3_zzzz_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30003TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30003TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30003TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30003TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30003TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002913 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002913 end";
}

static HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002914, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002914 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzles"
        ".vector_swizzles.mediump_vec3_s_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30003TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30003TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30003TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30003TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30003TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002914 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002914 end";
}

static HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002915, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002915 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzles."
        "vector_swizzles.mediump_vec3_s_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30003TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30003TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30003TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30003TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30003TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002915 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002915 end";
}

static HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002916, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002916 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzles"
        ".vector_swizzles.mediump_vec3_p_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30003TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30003TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30003TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30003TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30003TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002916 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002916 end";
}

static HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002917, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002917 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzles."
        "vector_swizzles.mediump_vec3_p_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30003TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30003TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30003TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30003TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30003TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002917 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002917 end";
}

static HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002918, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002918 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.swizzles"
        ".vector_swizzles.mediump_vec3_sp_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30003TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30003TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30003TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30003TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30003TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002918 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002918 end";
}
>>>>>>> 119876a9a4cc1abc142c2cbcacfd0e9275690a87
