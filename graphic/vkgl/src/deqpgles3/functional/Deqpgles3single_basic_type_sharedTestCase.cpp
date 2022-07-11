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
#include "../ActsDeqpgles30034TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_033884_1 "dEQP-GLES3.functional.ubo.single_b"
#define VkglTestCase_033884_2 "asic_type.shared.lowp_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033884, VkglTestCase_033884_1, VkglTestCase_033884_2);

#define VkglTestCase_033885_1 "dEQP-GLES3.functional.ubo.single_ba"
#define VkglTestCase_033885_2 "sic_type.shared.lowp_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033885, VkglTestCase_033885_1, VkglTestCase_033885_2);

#define VkglTestCase_033886_1 "dEQP-GLES3.functional.ubo.single_"
#define VkglTestCase_033886_2 "basic_type.shared.lowp_float_both"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033886, VkglTestCase_033886_1, VkglTestCase_033886_2);

#define VkglTestCase_033887_1 "dEQP-GLES3.functional.ubo.single_ba"
#define VkglTestCase_033887_2 "sic_type.shared.mediump_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033887, VkglTestCase_033887_1, VkglTestCase_033887_2);

#define VkglTestCase_033888_1 "dEQP-GLES3.functional.ubo.single_bas"
#define VkglTestCase_033888_2 "ic_type.shared.mediump_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033888, VkglTestCase_033888_1, VkglTestCase_033888_2);

#define VkglTestCase_033889_1 "dEQP-GLES3.functional.ubo.single_b"
#define VkglTestCase_033889_2 "asic_type.shared.mediump_float_both"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033889, VkglTestCase_033889_1, VkglTestCase_033889_2);

#define VkglTestCase_033890_1 "dEQP-GLES3.functional.ubo.single_b"
#define VkglTestCase_033890_2 "asic_type.shared.highp_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033890, VkglTestCase_033890_1, VkglTestCase_033890_2);

#define VkglTestCase_033891_1 "dEQP-GLES3.functional.ubo.single_ba"
#define VkglTestCase_033891_2 "sic_type.shared.highp_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033891, VkglTestCase_033891_1, VkglTestCase_033891_2);

#define VkglTestCase_033892_1 "dEQP-GLES3.functional.ubo.single_"
#define VkglTestCase_033892_2 "basic_type.shared.highp_float_both"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033892, VkglTestCase_033892_1, VkglTestCase_033892_2);

#define VkglTestCase_033893_1 "dEQP-GLES3.functional.ubo.single_"
#define VkglTestCase_033893_2 "basic_type.shared.lowp_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033893, VkglTestCase_033893_1, VkglTestCase_033893_2);

#define VkglTestCase_033894_1 "dEQP-GLES3.functional.ubo.single_b"
#define VkglTestCase_033894_2 "asic_type.shared.lowp_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033894, VkglTestCase_033894_1, VkglTestCase_033894_2);

#define VkglTestCase_033895_1 "dEQP-GLES3.functional.ubo.single"
#define VkglTestCase_033895_2 "_basic_type.shared.lowp_vec2_both"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033895, VkglTestCase_033895_1, VkglTestCase_033895_2);

#define VkglTestCase_033896_1 "dEQP-GLES3.functional.ubo.single_ba"
#define VkglTestCase_033896_2 "sic_type.shared.mediump_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033896, VkglTestCase_033896_1, VkglTestCase_033896_2);

#define VkglTestCase_033897_1 "dEQP-GLES3.functional.ubo.single_bas"
#define VkglTestCase_033897_2 "ic_type.shared.mediump_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033897, VkglTestCase_033897_1, VkglTestCase_033897_2);

#define VkglTestCase_033898_1 "dEQP-GLES3.functional.ubo.single_b"
#define VkglTestCase_033898_2 "asic_type.shared.mediump_vec2_both"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033898, VkglTestCase_033898_1, VkglTestCase_033898_2);

#define VkglTestCase_033899_1 "dEQP-GLES3.functional.ubo.single_b"
#define VkglTestCase_033899_2 "asic_type.shared.highp_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033899, VkglTestCase_033899_1, VkglTestCase_033899_2);

#define VkglTestCase_033900_1 "dEQP-GLES3.functional.ubo.single_ba"
#define VkglTestCase_033900_2 "sic_type.shared.highp_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033900, VkglTestCase_033900_1, VkglTestCase_033900_2);

#define VkglTestCase_033901_1 "dEQP-GLES3.functional.ubo.single_"
#define VkglTestCase_033901_2 "basic_type.shared.highp_vec2_both"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033901, VkglTestCase_033901_1, VkglTestCase_033901_2);

#define VkglTestCase_033902_1 "dEQP-GLES3.functional.ubo.single_"
#define VkglTestCase_033902_2 "basic_type.shared.lowp_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033902, VkglTestCase_033902_1, VkglTestCase_033902_2);

#define VkglTestCase_033903_1 "dEQP-GLES3.functional.ubo.single_b"
#define VkglTestCase_033903_2 "asic_type.shared.lowp_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033903, VkglTestCase_033903_1, VkglTestCase_033903_2);

#define VkglTestCase_033904_1 "dEQP-GLES3.functional.ubo.single"
#define VkglTestCase_033904_2 "_basic_type.shared.lowp_vec3_both"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033904, VkglTestCase_033904_1, VkglTestCase_033904_2);

#define VkglTestCase_033905_1 "dEQP-GLES3.functional.ubo.single_ba"
#define VkglTestCase_033905_2 "sic_type.shared.mediump_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033905, VkglTestCase_033905_1, VkglTestCase_033905_2);

#define VkglTestCase_033906_1 "dEQP-GLES3.functional.ubo.single_bas"
#define VkglTestCase_033906_2 "ic_type.shared.mediump_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033906, VkglTestCase_033906_1, VkglTestCase_033906_2);

#define VkglTestCase_033907_1 "dEQP-GLES3.functional.ubo.single_b"
#define VkglTestCase_033907_2 "asic_type.shared.mediump_vec3_both"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033907, VkglTestCase_033907_1, VkglTestCase_033907_2);

#define VkglTestCase_033908_1 "dEQP-GLES3.functional.ubo.single_b"
#define VkglTestCase_033908_2 "asic_type.shared.highp_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033908, VkglTestCase_033908_1, VkglTestCase_033908_2);

#define VkglTestCase_033909_1 "dEQP-GLES3.functional.ubo.single_ba"
#define VkglTestCase_033909_2 "sic_type.shared.highp_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033909, VkglTestCase_033909_1, VkglTestCase_033909_2);

#define VkglTestCase_033910_1 "dEQP-GLES3.functional.ubo.single_"
#define VkglTestCase_033910_2 "basic_type.shared.highp_vec3_both"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033910, VkglTestCase_033910_1, VkglTestCase_033910_2);

#define VkglTestCase_033911_1 "dEQP-GLES3.functional.ubo.single_"
#define VkglTestCase_033911_2 "basic_type.shared.lowp_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033911, VkglTestCase_033911_1, VkglTestCase_033911_2);

#define VkglTestCase_033912_1 "dEQP-GLES3.functional.ubo.single_b"
#define VkglTestCase_033912_2 "asic_type.shared.lowp_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033912, VkglTestCase_033912_1, VkglTestCase_033912_2);

#define VkglTestCase_033913_1 "dEQP-GLES3.functional.ubo.single"
#define VkglTestCase_033913_2 "_basic_type.shared.lowp_vec4_both"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033913, VkglTestCase_033913_1, VkglTestCase_033913_2);

#define VkglTestCase_033914_1 "dEQP-GLES3.functional.ubo.single_ba"
#define VkglTestCase_033914_2 "sic_type.shared.mediump_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033914, VkglTestCase_033914_1, VkglTestCase_033914_2);

#define VkglTestCase_033915_1 "dEQP-GLES3.functional.ubo.single_bas"
#define VkglTestCase_033915_2 "ic_type.shared.mediump_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033915, VkglTestCase_033915_1, VkglTestCase_033915_2);

#define VkglTestCase_033916_1 "dEQP-GLES3.functional.ubo.single_b"
#define VkglTestCase_033916_2 "asic_type.shared.mediump_vec4_both"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033916, VkglTestCase_033916_1, VkglTestCase_033916_2);

#define VkglTestCase_033917_1 "dEQP-GLES3.functional.ubo.single_b"
#define VkglTestCase_033917_2 "asic_type.shared.highp_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033917, VkglTestCase_033917_1, VkglTestCase_033917_2);

#define VkglTestCase_033918_1 "dEQP-GLES3.functional.ubo.single_ba"
#define VkglTestCase_033918_2 "sic_type.shared.highp_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033918, VkglTestCase_033918_1, VkglTestCase_033918_2);

#define VkglTestCase_033919_1 "dEQP-GLES3.functional.ubo.single_"
#define VkglTestCase_033919_2 "basic_type.shared.highp_vec4_both"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033919, VkglTestCase_033919_1, VkglTestCase_033919_2);

#define VkglTestCase_033920_1 "dEQP-GLES3.functional.ubo.single_"
#define VkglTestCase_033920_2 "basic_type.shared.lowp_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033920, VkglTestCase_033920_1, VkglTestCase_033920_2);

#define VkglTestCase_033921_1 "dEQP-GLES3.functional.ubo.single_b"
#define VkglTestCase_033921_2 "asic_type.shared.lowp_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033921, VkglTestCase_033921_1, VkglTestCase_033921_2);

#define VkglTestCase_033922_1 "dEQP-GLES3.functional.ubo.single"
#define VkglTestCase_033922_2 "_basic_type.shared.lowp_int_both"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033922, VkglTestCase_033922_1, VkglTestCase_033922_2);

#define VkglTestCase_033923_1 "dEQP-GLES3.functional.ubo.single_b"
#define VkglTestCase_033923_2 "asic_type.shared.mediump_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033923, VkglTestCase_033923_1, VkglTestCase_033923_2);

#define VkglTestCase_033924_1 "dEQP-GLES3.functional.ubo.single_ba"
#define VkglTestCase_033924_2 "sic_type.shared.mediump_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033924, VkglTestCase_033924_1, VkglTestCase_033924_2);

#define VkglTestCase_033925_1 "dEQP-GLES3.functional.ubo.single_"
#define VkglTestCase_033925_2 "basic_type.shared.mediump_int_both"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033925, VkglTestCase_033925_1, VkglTestCase_033925_2);

#define VkglTestCase_033926_1 "dEQP-GLES3.functional.ubo.single_"
#define VkglTestCase_033926_2 "basic_type.shared.highp_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033926, VkglTestCase_033926_1, VkglTestCase_033926_2);

#define VkglTestCase_033927_1 "dEQP-GLES3.functional.ubo.single_b"
#define VkglTestCase_033927_2 "asic_type.shared.highp_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033927, VkglTestCase_033927_1, VkglTestCase_033927_2);

#define VkglTestCase_033928_1 "dEQP-GLES3.functional.ubo.single"
#define VkglTestCase_033928_2 "_basic_type.shared.highp_int_both"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033928, VkglTestCase_033928_1, VkglTestCase_033928_2);

#define VkglTestCase_033929_1 "dEQP-GLES3.functional.ubo.single_b"
#define VkglTestCase_033929_2 "asic_type.shared.lowp_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033929, VkglTestCase_033929_1, VkglTestCase_033929_2);

#define VkglTestCase_033930_1 "dEQP-GLES3.functional.ubo.single_ba"
#define VkglTestCase_033930_2 "sic_type.shared.lowp_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033930, VkglTestCase_033930_1, VkglTestCase_033930_2);

#define VkglTestCase_033931_1 "dEQP-GLES3.functional.ubo.single_"
#define VkglTestCase_033931_2 "basic_type.shared.lowp_ivec2_both"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033931, VkglTestCase_033931_1, VkglTestCase_033931_2);

#define VkglTestCase_033932_1 "dEQP-GLES3.functional.ubo.single_ba"
#define VkglTestCase_033932_2 "sic_type.shared.mediump_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033932, VkglTestCase_033932_1, VkglTestCase_033932_2);

#define VkglTestCase_033933_1 "dEQP-GLES3.functional.ubo.single_bas"
#define VkglTestCase_033933_2 "ic_type.shared.mediump_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033933, VkglTestCase_033933_1, VkglTestCase_033933_2);

#define VkglTestCase_033934_1 "dEQP-GLES3.functional.ubo.single_b"
#define VkglTestCase_033934_2 "asic_type.shared.mediump_ivec2_both"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033934, VkglTestCase_033934_1, VkglTestCase_033934_2);

#define VkglTestCase_033935_1 "dEQP-GLES3.functional.ubo.single_b"
#define VkglTestCase_033935_2 "asic_type.shared.highp_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033935, VkglTestCase_033935_1, VkglTestCase_033935_2);

#define VkglTestCase_033936_1 "dEQP-GLES3.functional.ubo.single_ba"
#define VkglTestCase_033936_2 "sic_type.shared.highp_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033936, VkglTestCase_033936_1, VkglTestCase_033936_2);

#define VkglTestCase_033937_1 "dEQP-GLES3.functional.ubo.single_"
#define VkglTestCase_033937_2 "basic_type.shared.highp_ivec2_both"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033937, VkglTestCase_033937_1, VkglTestCase_033937_2);

#define VkglTestCase_033938_1 "dEQP-GLES3.functional.ubo.single_b"
#define VkglTestCase_033938_2 "asic_type.shared.lowp_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033938, VkglTestCase_033938_1, VkglTestCase_033938_2);

#define VkglTestCase_033939_1 "dEQP-GLES3.functional.ubo.single_ba"
#define VkglTestCase_033939_2 "sic_type.shared.lowp_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033939, VkglTestCase_033939_1, VkglTestCase_033939_2);

#define VkglTestCase_033940_1 "dEQP-GLES3.functional.ubo.single_"
#define VkglTestCase_033940_2 "basic_type.shared.lowp_ivec3_both"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033940, VkglTestCase_033940_1, VkglTestCase_033940_2);

#define VkglTestCase_033941_1 "dEQP-GLES3.functional.ubo.single_ba"
#define VkglTestCase_033941_2 "sic_type.shared.mediump_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033941, VkglTestCase_033941_1, VkglTestCase_033941_2);

#define VkglTestCase_033942_1 "dEQP-GLES3.functional.ubo.single_bas"
#define VkglTestCase_033942_2 "ic_type.shared.mediump_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033942, VkglTestCase_033942_1, VkglTestCase_033942_2);

#define VkglTestCase_033943_1 "dEQP-GLES3.functional.ubo.single_b"
#define VkglTestCase_033943_2 "asic_type.shared.mediump_ivec3_both"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033943, VkglTestCase_033943_1, VkglTestCase_033943_2);

#define VkglTestCase_033944_1 "dEQP-GLES3.functional.ubo.single_b"
#define VkglTestCase_033944_2 "asic_type.shared.highp_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033944, VkglTestCase_033944_1, VkglTestCase_033944_2);

#define VkglTestCase_033945_1 "dEQP-GLES3.functional.ubo.single_ba"
#define VkglTestCase_033945_2 "sic_type.shared.highp_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033945, VkglTestCase_033945_1, VkglTestCase_033945_2);

#define VkglTestCase_033946_1 "dEQP-GLES3.functional.ubo.single_"
#define VkglTestCase_033946_2 "basic_type.shared.highp_ivec3_both"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033946, VkglTestCase_033946_1, VkglTestCase_033946_2);

#define VkglTestCase_033947_1 "dEQP-GLES3.functional.ubo.single_b"
#define VkglTestCase_033947_2 "asic_type.shared.lowp_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033947, VkglTestCase_033947_1, VkglTestCase_033947_2);

#define VkglTestCase_033948_1 "dEQP-GLES3.functional.ubo.single_ba"
#define VkglTestCase_033948_2 "sic_type.shared.lowp_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033948, VkglTestCase_033948_1, VkglTestCase_033948_2);

#define VkglTestCase_033949_1 "dEQP-GLES3.functional.ubo.single_"
#define VkglTestCase_033949_2 "basic_type.shared.lowp_ivec4_both"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033949, VkglTestCase_033949_1, VkglTestCase_033949_2);

#define VkglTestCase_033950_1 "dEQP-GLES3.functional.ubo.single_ba"
#define VkglTestCase_033950_2 "sic_type.shared.mediump_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033950, VkglTestCase_033950_1, VkglTestCase_033950_2);

#define VkglTestCase_033951_1 "dEQP-GLES3.functional.ubo.single_bas"
#define VkglTestCase_033951_2 "ic_type.shared.mediump_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033951, VkglTestCase_033951_1, VkglTestCase_033951_2);

#define VkglTestCase_033952_1 "dEQP-GLES3.functional.ubo.single_b"
#define VkglTestCase_033952_2 "asic_type.shared.mediump_ivec4_both"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033952, VkglTestCase_033952_1, VkglTestCase_033952_2);

#define VkglTestCase_033953_1 "dEQP-GLES3.functional.ubo.single_b"
#define VkglTestCase_033953_2 "asic_type.shared.highp_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033953, VkglTestCase_033953_1, VkglTestCase_033953_2);

#define VkglTestCase_033954_1 "dEQP-GLES3.functional.ubo.single_ba"
#define VkglTestCase_033954_2 "sic_type.shared.highp_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033954, VkglTestCase_033954_1, VkglTestCase_033954_2);

#define VkglTestCase_033955_1 "dEQP-GLES3.functional.ubo.single_"
#define VkglTestCase_033955_2 "basic_type.shared.highp_ivec4_both"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033955, VkglTestCase_033955_1, VkglTestCase_033955_2);

#define VkglTestCase_033956_1 "dEQP-GLES3.functional.ubo.single_"
#define VkglTestCase_033956_2 "basic_type.shared.lowp_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033956, VkglTestCase_033956_1, VkglTestCase_033956_2);

#define VkglTestCase_033957_1 "dEQP-GLES3.functional.ubo.single_b"
#define VkglTestCase_033957_2 "asic_type.shared.lowp_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033957, VkglTestCase_033957_1, VkglTestCase_033957_2);

#define VkglTestCase_033958_1 "dEQP-GLES3.functional.ubo.single"
#define VkglTestCase_033958_2 "_basic_type.shared.lowp_uint_both"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033958, VkglTestCase_033958_1, VkglTestCase_033958_2);

#define VkglTestCase_033959_1 "dEQP-GLES3.functional.ubo.single_ba"
#define VkglTestCase_033959_2 "sic_type.shared.mediump_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033959, VkglTestCase_033959_1, VkglTestCase_033959_2);

#define VkglTestCase_033960_1 "dEQP-GLES3.functional.ubo.single_bas"
#define VkglTestCase_033960_2 "ic_type.shared.mediump_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033960, VkglTestCase_033960_1, VkglTestCase_033960_2);

#define VkglTestCase_033961_1 "dEQP-GLES3.functional.ubo.single_b"
#define VkglTestCase_033961_2 "asic_type.shared.mediump_uint_both"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033961, VkglTestCase_033961_1, VkglTestCase_033961_2);

#define VkglTestCase_033962_1 "dEQP-GLES3.functional.ubo.single_b"
#define VkglTestCase_033962_2 "asic_type.shared.highp_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033962, VkglTestCase_033962_1, VkglTestCase_033962_2);

#define VkglTestCase_033963_1 "dEQP-GLES3.functional.ubo.single_ba"
#define VkglTestCase_033963_2 "sic_type.shared.highp_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033963, VkglTestCase_033963_1, VkglTestCase_033963_2);

#define VkglTestCase_033964_1 "dEQP-GLES3.functional.ubo.single_"
#define VkglTestCase_033964_2 "basic_type.shared.highp_uint_both"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033964, VkglTestCase_033964_1, VkglTestCase_033964_2);

#define VkglTestCase_033965_1 "dEQP-GLES3.functional.ubo.single_b"
#define VkglTestCase_033965_2 "asic_type.shared.lowp_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033965, VkglTestCase_033965_1, VkglTestCase_033965_2);

#define VkglTestCase_033966_1 "dEQP-GLES3.functional.ubo.single_ba"
#define VkglTestCase_033966_2 "sic_type.shared.lowp_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033966, VkglTestCase_033966_1, VkglTestCase_033966_2);

#define VkglTestCase_033967_1 "dEQP-GLES3.functional.ubo.single_"
#define VkglTestCase_033967_2 "basic_type.shared.lowp_uvec2_both"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033967, VkglTestCase_033967_1, VkglTestCase_033967_2);

#define VkglTestCase_033968_1 "dEQP-GLES3.functional.ubo.single_ba"
#define VkglTestCase_033968_2 "sic_type.shared.mediump_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033968, VkglTestCase_033968_1, VkglTestCase_033968_2);

#define VkglTestCase_033969_1 "dEQP-GLES3.functional.ubo.single_bas"
#define VkglTestCase_033969_2 "ic_type.shared.mediump_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033969, VkglTestCase_033969_1, VkglTestCase_033969_2);

#define VkglTestCase_033970_1 "dEQP-GLES3.functional.ubo.single_b"
#define VkglTestCase_033970_2 "asic_type.shared.mediump_uvec2_both"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033970, VkglTestCase_033970_1, VkglTestCase_033970_2);

#define VkglTestCase_033971_1 "dEQP-GLES3.functional.ubo.single_b"
#define VkglTestCase_033971_2 "asic_type.shared.highp_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033971, VkglTestCase_033971_1, VkglTestCase_033971_2);

#define VkglTestCase_033972_1 "dEQP-GLES3.functional.ubo.single_ba"
#define VkglTestCase_033972_2 "sic_type.shared.highp_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033972, VkglTestCase_033972_1, VkglTestCase_033972_2);

#define VkglTestCase_033973_1 "dEQP-GLES3.functional.ubo.single_"
#define VkglTestCase_033973_2 "basic_type.shared.highp_uvec2_both"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033973, VkglTestCase_033973_1, VkglTestCase_033973_2);

#define VkglTestCase_033974_1 "dEQP-GLES3.functional.ubo.single_b"
#define VkglTestCase_033974_2 "asic_type.shared.lowp_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033974, VkglTestCase_033974_1, VkglTestCase_033974_2);

#define VkglTestCase_033975_1 "dEQP-GLES3.functional.ubo.single_ba"
#define VkglTestCase_033975_2 "sic_type.shared.lowp_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033975, VkglTestCase_033975_1, VkglTestCase_033975_2);

#define VkglTestCase_033976_1 "dEQP-GLES3.functional.ubo.single_"
#define VkglTestCase_033976_2 "basic_type.shared.lowp_uvec3_both"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033976, VkglTestCase_033976_1, VkglTestCase_033976_2);

#define VkglTestCase_033977_1 "dEQP-GLES3.functional.ubo.single_ba"
#define VkglTestCase_033977_2 "sic_type.shared.mediump_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033977, VkglTestCase_033977_1, VkglTestCase_033977_2);

#define VkglTestCase_033978_1 "dEQP-GLES3.functional.ubo.single_bas"
#define VkglTestCase_033978_2 "ic_type.shared.mediump_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033978, VkglTestCase_033978_1, VkglTestCase_033978_2);

#define VkglTestCase_033979_1 "dEQP-GLES3.functional.ubo.single_b"
#define VkglTestCase_033979_2 "asic_type.shared.mediump_uvec3_both"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033979, VkglTestCase_033979_1, VkglTestCase_033979_2);

#define VkglTestCase_033980_1 "dEQP-GLES3.functional.ubo.single_b"
#define VkglTestCase_033980_2 "asic_type.shared.highp_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033980, VkglTestCase_033980_1, VkglTestCase_033980_2);

#define VkglTestCase_033981_1 "dEQP-GLES3.functional.ubo.single_ba"
#define VkglTestCase_033981_2 "sic_type.shared.highp_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033981, VkglTestCase_033981_1, VkglTestCase_033981_2);

#define VkglTestCase_033982_1 "dEQP-GLES3.functional.ubo.single_"
#define VkglTestCase_033982_2 "basic_type.shared.highp_uvec3_both"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033982, VkglTestCase_033982_1, VkglTestCase_033982_2);

#define VkglTestCase_033983_1 "dEQP-GLES3.functional.ubo.single_b"
#define VkglTestCase_033983_2 "asic_type.shared.lowp_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033983, VkglTestCase_033983_1, VkglTestCase_033983_2);

#define VkglTestCase_033984_1 "dEQP-GLES3.functional.ubo.single_ba"
#define VkglTestCase_033984_2 "sic_type.shared.lowp_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033984, VkglTestCase_033984_1, VkglTestCase_033984_2);

#define VkglTestCase_033985_1 "dEQP-GLES3.functional.ubo.single_"
#define VkglTestCase_033985_2 "basic_type.shared.lowp_uvec4_both"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033985, VkglTestCase_033985_1, VkglTestCase_033985_2);

#define VkglTestCase_033986_1 "dEQP-GLES3.functional.ubo.single_ba"
#define VkglTestCase_033986_2 "sic_type.shared.mediump_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033986, VkglTestCase_033986_1, VkglTestCase_033986_2);

#define VkglTestCase_033987_1 "dEQP-GLES3.functional.ubo.single_bas"
#define VkglTestCase_033987_2 "ic_type.shared.mediump_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033987, VkglTestCase_033987_1, VkglTestCase_033987_2);

#define VkglTestCase_033988_1 "dEQP-GLES3.functional.ubo.single_b"
#define VkglTestCase_033988_2 "asic_type.shared.mediump_uvec4_both"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033988, VkglTestCase_033988_1, VkglTestCase_033988_2);

#define VkglTestCase_033989_1 "dEQP-GLES3.functional.ubo.single_b"
#define VkglTestCase_033989_2 "asic_type.shared.highp_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033989, VkglTestCase_033989_1, VkglTestCase_033989_2);

#define VkglTestCase_033990_1 "dEQP-GLES3.functional.ubo.single_ba"
#define VkglTestCase_033990_2 "sic_type.shared.highp_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033990, VkglTestCase_033990_1, VkglTestCase_033990_2);

#define VkglTestCase_033991_1 "dEQP-GLES3.functional.ubo.single_"
#define VkglTestCase_033991_2 "basic_type.shared.highp_uvec4_both"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033991, VkglTestCase_033991_1, VkglTestCase_033991_2);

#define VkglTestCase_033992_1 "dEQP-GLES3.functional.ubo.singl"
#define VkglTestCase_033992_2 "e_basic_type.shared.bool_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033992, VkglTestCase_033992_1, VkglTestCase_033992_2);

#define VkglTestCase_033993_1 "dEQP-GLES3.functional.ubo.single"
#define VkglTestCase_033993_2 "_basic_type.shared.bool_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033993, VkglTestCase_033993_1, VkglTestCase_033993_2);

#define VkglTestCase_033994_1 "dEQP-GLES3.functional.ubo.sing"
#define VkglTestCase_033994_2 "le_basic_type.shared.bool_both"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033994, VkglTestCase_033994_1, VkglTestCase_033994_2);

#define VkglTestCase_033995_1 "dEQP-GLES3.functional.ubo.singl"
#define VkglTestCase_033995_2 "e_basic_type.shared.bvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033995, VkglTestCase_033995_1, VkglTestCase_033995_2);

#define VkglTestCase_033996_1 "dEQP-GLES3.functional.ubo.single"
#define VkglTestCase_033996_2 "_basic_type.shared.bvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033996, VkglTestCase_033996_1, VkglTestCase_033996_2);

#define VkglTestCase_033997_1 "dEQP-GLES3.functional.ubo.sing"
#define VkglTestCase_033997_2 "le_basic_type.shared.bvec2_both"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033997, VkglTestCase_033997_1, VkglTestCase_033997_2);

#define VkglTestCase_033998_1 "dEQP-GLES3.functional.ubo.singl"
#define VkglTestCase_033998_2 "e_basic_type.shared.bvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033998, VkglTestCase_033998_1, VkglTestCase_033998_2);

#define VkglTestCase_033999_1 "dEQP-GLES3.functional.ubo.single"
#define VkglTestCase_033999_2 "_basic_type.shared.bvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033999, VkglTestCase_033999_1, VkglTestCase_033999_2);

#define VkglTestCase_034000_1 "dEQP-GLES3.functional.ubo.sing"
#define VkglTestCase_034000_2 "le_basic_type.shared.bvec3_both"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_034000, VkglTestCase_034000_1, VkglTestCase_034000_2);

#define VkglTestCase_034001_1 "dEQP-GLES3.functional.ubo.singl"
#define VkglTestCase_034001_2 "e_basic_type.shared.bvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_034001, VkglTestCase_034001_1, VkglTestCase_034001_2);

#define VkglTestCase_034002_1 "dEQP-GLES3.functional.ubo.single"
#define VkglTestCase_034002_2 "_basic_type.shared.bvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_034002, VkglTestCase_034002_1, VkglTestCase_034002_2);

#define VkglTestCase_034003_1 "dEQP-GLES3.functional.ubo.sing"
#define VkglTestCase_034003_2 "le_basic_type.shared.bvec4_both"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_034003, VkglTestCase_034003_1, VkglTestCase_034003_2);

#define VkglTestCase_034004_1 "dEQP-GLES3.functional.ubo.single_"
#define VkglTestCase_034004_2 "basic_type.shared.lowp_mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_034004, VkglTestCase_034004_1, VkglTestCase_034004_2);

#define VkglTestCase_034005_1 "dEQP-GLES3.functional.ubo.single_b"
#define VkglTestCase_034005_2 "asic_type.shared.lowp_mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_034005, VkglTestCase_034005_1, VkglTestCase_034005_2);

#define VkglTestCase_034006_1 "dEQP-GLES3.functional.ubo.single"
#define VkglTestCase_034006_2 "_basic_type.shared.lowp_mat2_both"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_034006, VkglTestCase_034006_1, VkglTestCase_034006_2);

#define VkglTestCase_034007_1 "dEQP-GLES3.functional.ubo.single_ba"
#define VkglTestCase_034007_2 "sic_type.shared.mediump_mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_034007, VkglTestCase_034007_1, VkglTestCase_034007_2);

#define VkglTestCase_034008_1 "dEQP-GLES3.functional.ubo.single_bas"
#define VkglTestCase_034008_2 "ic_type.shared.mediump_mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_034008, VkglTestCase_034008_1, VkglTestCase_034008_2);

#define VkglTestCase_034009_1 "dEQP-GLES3.functional.ubo.single_b"
#define VkglTestCase_034009_2 "asic_type.shared.mediump_mat2_both"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_034009, VkglTestCase_034009_1, VkglTestCase_034009_2);

#define VkglTestCase_034010_1 "dEQP-GLES3.functional.ubo.single_b"
#define VkglTestCase_034010_2 "asic_type.shared.highp_mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_034010, VkglTestCase_034010_1, VkglTestCase_034010_2);

#define VkglTestCase_034011_1 "dEQP-GLES3.functional.ubo.single_ba"
#define VkglTestCase_034011_2 "sic_type.shared.highp_mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_034011, VkglTestCase_034011_1, VkglTestCase_034011_2);

#define VkglTestCase_034012_1 "dEQP-GLES3.functional.ubo.single_"
#define VkglTestCase_034012_2 "basic_type.shared.highp_mat2_both"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_034012, VkglTestCase_034012_1, VkglTestCase_034012_2);

#define VkglTestCase_034013_1 "dEQP-GLES3.functional.ubo.single_basic"
#define VkglTestCase_034013_2 "_type.shared.row_major_lowp_mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_034013, VkglTestCase_034013_1, VkglTestCase_034013_2);

#define VkglTestCase_034014_1 "dEQP-GLES3.functional.ubo.single_basic_"
#define VkglTestCase_034014_2 "type.shared.row_major_lowp_mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_034014, VkglTestCase_034014_1, VkglTestCase_034014_2);

#define VkglTestCase_034015_1 "dEQP-GLES3.functional.ubo.single_basi"
#define VkglTestCase_034015_2 "c_type.shared.row_major_lowp_mat2_both"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_034015, VkglTestCase_034015_1, VkglTestCase_034015_2);

#define VkglTestCase_034016_1 "dEQP-GLES3.functional.ubo.single_basic_t"
#define VkglTestCase_034016_2 "ype.shared.row_major_mediump_mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_034016, VkglTestCase_034016_1, VkglTestCase_034016_2);

#define VkglTestCase_034017_1 "dEQP-GLES3.functional.ubo.single_basic_ty"
#define VkglTestCase_034017_2 "pe.shared.row_major_mediump_mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_034017, VkglTestCase_034017_1, VkglTestCase_034017_2);

#define VkglTestCase_034018_1 "dEQP-GLES3.functional.ubo.single_basic_"
#define VkglTestCase_034018_2 "type.shared.row_major_mediump_mat2_both"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_034018, VkglTestCase_034018_1, VkglTestCase_034018_2);

#define VkglTestCase_034019_1 "dEQP-GLES3.functional.ubo.single_basic_"
#define VkglTestCase_034019_2 "type.shared.row_major_highp_mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_034019, VkglTestCase_034019_1, VkglTestCase_034019_2);

#define VkglTestCase_034020_1 "dEQP-GLES3.functional.ubo.single_basic_t"
#define VkglTestCase_034020_2 "ype.shared.row_major_highp_mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_034020, VkglTestCase_034020_1, VkglTestCase_034020_2);

#define VkglTestCase_034021_1 "dEQP-GLES3.functional.ubo.single_basic"
#define VkglTestCase_034021_2 "_type.shared.row_major_highp_mat2_both"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_034021, VkglTestCase_034021_1, VkglTestCase_034021_2);

#define VkglTestCase_034022_1 "dEQP-GLES3.functional.ubo.single_basic_t"
#define VkglTestCase_034022_2 "ype.shared.column_major_lowp_mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_034022, VkglTestCase_034022_1, VkglTestCase_034022_2);

#define VkglTestCase_034023_1 "dEQP-GLES3.functional.ubo.single_basic_ty"
#define VkglTestCase_034023_2 "pe.shared.column_major_lowp_mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_034023, VkglTestCase_034023_1, VkglTestCase_034023_2);

#define VkglTestCase_034024_1 "dEQP-GLES3.functional.ubo.single_basic_"
#define VkglTestCase_034024_2 "type.shared.column_major_lowp_mat2_both"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_034024, VkglTestCase_034024_1, VkglTestCase_034024_2);

#define VkglTestCase_034025_1 "dEQP-GLES3.functional.ubo.single_basic_ty"
#define VkglTestCase_034025_2 "pe.shared.column_major_mediump_mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_034025, VkglTestCase_034025_1, VkglTestCase_034025_2);

#define VkglTestCase_034026_1 "dEQP-GLES3.functional.ubo.single_basic_typ"
#define VkglTestCase_034026_2 "e.shared.column_major_mediump_mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_034026, VkglTestCase_034026_1, VkglTestCase_034026_2);

#define VkglTestCase_034027_1 "dEQP-GLES3.functional.ubo.single_basic_t"
#define VkglTestCase_034027_2 "ype.shared.column_major_mediump_mat2_both"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_034027, VkglTestCase_034027_1, VkglTestCase_034027_2);

#define VkglTestCase_034028_1 "dEQP-GLES3.functional.ubo.single_basic_t"
#define VkglTestCase_034028_2 "ype.shared.column_major_highp_mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_034028, VkglTestCase_034028_1, VkglTestCase_034028_2);

#define VkglTestCase_034029_1 "dEQP-GLES3.functional.ubo.single_basic_ty"
#define VkglTestCase_034029_2 "pe.shared.column_major_highp_mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_034029, VkglTestCase_034029_1, VkglTestCase_034029_2);

#define VkglTestCase_034030_1 "dEQP-GLES3.functional.ubo.single_basic_"
#define VkglTestCase_034030_2 "type.shared.column_major_highp_mat2_both"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_034030, VkglTestCase_034030_1, VkglTestCase_034030_2);

#define VkglTestCase_034031_1 "dEQP-GLES3.functional.ubo.single_"
#define VkglTestCase_034031_2 "basic_type.shared.lowp_mat3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_034031, VkglTestCase_034031_1, VkglTestCase_034031_2);

#define VkglTestCase_034032_1 "dEQP-GLES3.functional.ubo.single_b"
#define VkglTestCase_034032_2 "asic_type.shared.lowp_mat3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_034032, VkglTestCase_034032_1, VkglTestCase_034032_2);

#define VkglTestCase_034033_1 "dEQP-GLES3.functional.ubo.single"
#define VkglTestCase_034033_2 "_basic_type.shared.lowp_mat3_both"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_034033, VkglTestCase_034033_1, VkglTestCase_034033_2);

#define VkglTestCase_034034_1 "dEQP-GLES3.functional.ubo.single_ba"
#define VkglTestCase_034034_2 "sic_type.shared.mediump_mat3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_034034, VkglTestCase_034034_1, VkglTestCase_034034_2);

#define VkglTestCase_034035_1 "dEQP-GLES3.functional.ubo.single_bas"
#define VkglTestCase_034035_2 "ic_type.shared.mediump_mat3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_034035, VkglTestCase_034035_1, VkglTestCase_034035_2);

#define VkglTestCase_034036_1 "dEQP-GLES3.functional.ubo.single_b"
#define VkglTestCase_034036_2 "asic_type.shared.mediump_mat3_both"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_034036, VkglTestCase_034036_1, VkglTestCase_034036_2);

#define VkglTestCase_034037_1 "dEQP-GLES3.functional.ubo.single_b"
#define VkglTestCase_034037_2 "asic_type.shared.highp_mat3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_034037, VkglTestCase_034037_1, VkglTestCase_034037_2);

#define VkglTestCase_034038_1 "dEQP-GLES3.functional.ubo.single_ba"
#define VkglTestCase_034038_2 "sic_type.shared.highp_mat3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_034038, VkglTestCase_034038_1, VkglTestCase_034038_2);

#define VkglTestCase_034039_1 "dEQP-GLES3.functional.ubo.single_"
#define VkglTestCase_034039_2 "basic_type.shared.highp_mat3_both"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_034039, VkglTestCase_034039_1, VkglTestCase_034039_2);

#define VkglTestCase_034040_1 "dEQP-GLES3.functional.ubo.single_basic"
#define VkglTestCase_034040_2 "_type.shared.row_major_lowp_mat3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_034040, VkglTestCase_034040_1, VkglTestCase_034040_2);

#define VkglTestCase_034041_1 "dEQP-GLES3.functional.ubo.single_basic_"
#define VkglTestCase_034041_2 "type.shared.row_major_lowp_mat3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_034041, VkglTestCase_034041_1, VkglTestCase_034041_2);

#define VkglTestCase_034042_1 "dEQP-GLES3.functional.ubo.single_basi"
#define VkglTestCase_034042_2 "c_type.shared.row_major_lowp_mat3_both"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_034042, VkglTestCase_034042_1, VkglTestCase_034042_2);

#define VkglTestCase_034043_1 "dEQP-GLES3.functional.ubo.single_basic_t"
#define VkglTestCase_034043_2 "ype.shared.row_major_mediump_mat3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_034043, VkglTestCase_034043_1, VkglTestCase_034043_2);

#define VkglTestCase_034044_1 "dEQP-GLES3.functional.ubo.single_basic_ty"
#define VkglTestCase_034044_2 "pe.shared.row_major_mediump_mat3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_034044, VkglTestCase_034044_1, VkglTestCase_034044_2);

#define VkglTestCase_034045_1 "dEQP-GLES3.functional.ubo.single_basic_"
#define VkglTestCase_034045_2 "type.shared.row_major_mediump_mat3_both"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_034045, VkglTestCase_034045_1, VkglTestCase_034045_2);

#define VkglTestCase_034046_1 "dEQP-GLES3.functional.ubo.single_basic_"
#define VkglTestCase_034046_2 "type.shared.row_major_highp_mat3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_034046, VkglTestCase_034046_1, VkglTestCase_034046_2);

#define VkglTestCase_034047_1 "dEQP-GLES3.functional.ubo.single_basic_t"
#define VkglTestCase_034047_2 "ype.shared.row_major_highp_mat3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_034047, VkglTestCase_034047_1, VkglTestCase_034047_2);

#define VkglTestCase_034048_1 "dEQP-GLES3.functional.ubo.single_basic"
#define VkglTestCase_034048_2 "_type.shared.row_major_highp_mat3_both"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_034048, VkglTestCase_034048_1, VkglTestCase_034048_2);

#define VkglTestCase_034049_1 "dEQP-GLES3.functional.ubo.single_basic_t"
#define VkglTestCase_034049_2 "ype.shared.column_major_lowp_mat3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_034049, VkglTestCase_034049_1, VkglTestCase_034049_2);

#define VkglTestCase_034050_1 "dEQP-GLES3.functional.ubo.single_basic_ty"
#define VkglTestCase_034050_2 "pe.shared.column_major_lowp_mat3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_034050, VkglTestCase_034050_1, VkglTestCase_034050_2);

#define VkglTestCase_034051_1 "dEQP-GLES3.functional.ubo.single_basic_"
#define VkglTestCase_034051_2 "type.shared.column_major_lowp_mat3_both"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_034051, VkglTestCase_034051_1, VkglTestCase_034051_2);

#define VkglTestCase_034052_1 "dEQP-GLES3.functional.ubo.single_basic_ty"
#define VkglTestCase_034052_2 "pe.shared.column_major_mediump_mat3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_034052, VkglTestCase_034052_1, VkglTestCase_034052_2);

#define VkglTestCase_034053_1 "dEQP-GLES3.functional.ubo.single_basic_typ"
#define VkglTestCase_034053_2 "e.shared.column_major_mediump_mat3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_034053, VkglTestCase_034053_1, VkglTestCase_034053_2);

#define VkglTestCase_034054_1 "dEQP-GLES3.functional.ubo.single_basic_t"
#define VkglTestCase_034054_2 "ype.shared.column_major_mediump_mat3_both"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_034054, VkglTestCase_034054_1, VkglTestCase_034054_2);

#define VkglTestCase_034055_1 "dEQP-GLES3.functional.ubo.single_basic_t"
#define VkglTestCase_034055_2 "ype.shared.column_major_highp_mat3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_034055, VkglTestCase_034055_1, VkglTestCase_034055_2);

#define VkglTestCase_034056_1 "dEQP-GLES3.functional.ubo.single_basic_ty"
#define VkglTestCase_034056_2 "pe.shared.column_major_highp_mat3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_034056, VkglTestCase_034056_1, VkglTestCase_034056_2);

#define VkglTestCase_034057_1 "dEQP-GLES3.functional.ubo.single_basic_"
#define VkglTestCase_034057_2 "type.shared.column_major_highp_mat3_both"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_034057, VkglTestCase_034057_1, VkglTestCase_034057_2);

#define VkglTestCase_034058_1 "dEQP-GLES3.functional.ubo.single_"
#define VkglTestCase_034058_2 "basic_type.shared.lowp_mat4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_034058, VkglTestCase_034058_1, VkglTestCase_034058_2);

#define VkglTestCase_034059_1 "dEQP-GLES3.functional.ubo.single_b"
#define VkglTestCase_034059_2 "asic_type.shared.lowp_mat4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_034059, VkglTestCase_034059_1, VkglTestCase_034059_2);

#define VkglTestCase_034060_1 "dEQP-GLES3.functional.ubo.single"
#define VkglTestCase_034060_2 "_basic_type.shared.lowp_mat4_both"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_034060, VkglTestCase_034060_1, VkglTestCase_034060_2);

#define VkglTestCase_034061_1 "dEQP-GLES3.functional.ubo.single_ba"
#define VkglTestCase_034061_2 "sic_type.shared.mediump_mat4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_034061, VkglTestCase_034061_1, VkglTestCase_034061_2);

#define VkglTestCase_034062_1 "dEQP-GLES3.functional.ubo.single_bas"
#define VkglTestCase_034062_2 "ic_type.shared.mediump_mat4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_034062, VkglTestCase_034062_1, VkglTestCase_034062_2);

#define VkglTestCase_034063_1 "dEQP-GLES3.functional.ubo.single_b"
#define VkglTestCase_034063_2 "asic_type.shared.mediump_mat4_both"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_034063, VkglTestCase_034063_1, VkglTestCase_034063_2);

#define VkglTestCase_034064_1 "dEQP-GLES3.functional.ubo.single_b"
#define VkglTestCase_034064_2 "asic_type.shared.highp_mat4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_034064, VkglTestCase_034064_1, VkglTestCase_034064_2);

#define VkglTestCase_034065_1 "dEQP-GLES3.functional.ubo.single_ba"
#define VkglTestCase_034065_2 "sic_type.shared.highp_mat4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_034065, VkglTestCase_034065_1, VkglTestCase_034065_2);

#define VkglTestCase_034066_1 "dEQP-GLES3.functional.ubo.single_"
#define VkglTestCase_034066_2 "basic_type.shared.highp_mat4_both"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_034066, VkglTestCase_034066_1, VkglTestCase_034066_2);

#define VkglTestCase_034067_1 "dEQP-GLES3.functional.ubo.single_basic"
#define VkglTestCase_034067_2 "_type.shared.row_major_lowp_mat4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_034067, VkglTestCase_034067_1, VkglTestCase_034067_2);

#define VkglTestCase_034068_1 "dEQP-GLES3.functional.ubo.single_basic_"
#define VkglTestCase_034068_2 "type.shared.row_major_lowp_mat4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_034068, VkglTestCase_034068_1, VkglTestCase_034068_2);

#define VkglTestCase_034069_1 "dEQP-GLES3.functional.ubo.single_basi"
#define VkglTestCase_034069_2 "c_type.shared.row_major_lowp_mat4_both"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_034069, VkglTestCase_034069_1, VkglTestCase_034069_2);

#define VkglTestCase_034070_1 "dEQP-GLES3.functional.ubo.single_basic_t"
#define VkglTestCase_034070_2 "ype.shared.row_major_mediump_mat4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_034070, VkglTestCase_034070_1, VkglTestCase_034070_2);

#define VkglTestCase_034071_1 "dEQP-GLES3.functional.ubo.single_basic_ty"
#define VkglTestCase_034071_2 "pe.shared.row_major_mediump_mat4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_034071, VkglTestCase_034071_1, VkglTestCase_034071_2);

#define VkglTestCase_034072_1 "dEQP-GLES3.functional.ubo.single_basic_"
#define VkglTestCase_034072_2 "type.shared.row_major_mediump_mat4_both"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_034072, VkglTestCase_034072_1, VkglTestCase_034072_2);

#define VkglTestCase_034073_1 "dEQP-GLES3.functional.ubo.single_basic_"
#define VkglTestCase_034073_2 "type.shared.row_major_highp_mat4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_034073, VkglTestCase_034073_1, VkglTestCase_034073_2);

#define VkglTestCase_034074_1 "dEQP-GLES3.functional.ubo.single_basic_t"
#define VkglTestCase_034074_2 "ype.shared.row_major_highp_mat4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_034074, VkglTestCase_034074_1, VkglTestCase_034074_2);

#define VkglTestCase_034075_1 "dEQP-GLES3.functional.ubo.single_basic"
#define VkglTestCase_034075_2 "_type.shared.row_major_highp_mat4_both"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_034075, VkglTestCase_034075_1, VkglTestCase_034075_2);

#define VkglTestCase_034076_1 "dEQP-GLES3.functional.ubo.single_basic_t"
#define VkglTestCase_034076_2 "ype.shared.column_major_lowp_mat4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_034076, VkglTestCase_034076_1, VkglTestCase_034076_2);

#define VkglTestCase_034077_1 "dEQP-GLES3.functional.ubo.single_basic_ty"
#define VkglTestCase_034077_2 "pe.shared.column_major_lowp_mat4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_034077, VkglTestCase_034077_1, VkglTestCase_034077_2);

#define VkglTestCase_034078_1 "dEQP-GLES3.functional.ubo.single_basic_"
#define VkglTestCase_034078_2 "type.shared.column_major_lowp_mat4_both"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_034078, VkglTestCase_034078_1, VkglTestCase_034078_2);

#define VkglTestCase_034079_1 "dEQP-GLES3.functional.ubo.single_basic_ty"
#define VkglTestCase_034079_2 "pe.shared.column_major_mediump_mat4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_034079, VkglTestCase_034079_1, VkglTestCase_034079_2);

#define VkglTestCase_034080_1 "dEQP-GLES3.functional.ubo.single_basic_typ"
#define VkglTestCase_034080_2 "e.shared.column_major_mediump_mat4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_034080, VkglTestCase_034080_1, VkglTestCase_034080_2);

#define VkglTestCase_034081_1 "dEQP-GLES3.functional.ubo.single_basic_t"
#define VkglTestCase_034081_2 "ype.shared.column_major_mediump_mat4_both"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_034081, VkglTestCase_034081_1, VkglTestCase_034081_2);

#define VkglTestCase_034082_1 "dEQP-GLES3.functional.ubo.single_basic_t"
#define VkglTestCase_034082_2 "ype.shared.column_major_highp_mat4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_034082, VkglTestCase_034082_1, VkglTestCase_034082_2);

#define VkglTestCase_034083_1 "dEQP-GLES3.functional.ubo.single_basic_ty"
#define VkglTestCase_034083_2 "pe.shared.column_major_highp_mat4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_034083, VkglTestCase_034083_1, VkglTestCase_034083_2);

#define VkglTestCase_034084_1 "dEQP-GLES3.functional.ubo.single_basic_"
#define VkglTestCase_034084_2 "type.shared.column_major_highp_mat4_both"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_034084, VkglTestCase_034084_1, VkglTestCase_034084_2);

#define VkglTestCase_034085_1 "dEQP-GLES3.functional.ubo.single_b"
#define VkglTestCase_034085_2 "asic_type.shared.lowp_mat2x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_034085, VkglTestCase_034085_1, VkglTestCase_034085_2);

#define VkglTestCase_034086_1 "dEQP-GLES3.functional.ubo.single_ba"
#define VkglTestCase_034086_2 "sic_type.shared.lowp_mat2x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_034086, VkglTestCase_034086_1, VkglTestCase_034086_2);

#define VkglTestCase_034087_1 "dEQP-GLES3.functional.ubo.single_"
#define VkglTestCase_034087_2 "basic_type.shared.lowp_mat2x3_both"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_034087, VkglTestCase_034087_1, VkglTestCase_034087_2);

#define VkglTestCase_034088_1 "dEQP-GLES3.functional.ubo.single_bas"
#define VkglTestCase_034088_2 "ic_type.shared.mediump_mat2x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_034088, VkglTestCase_034088_1, VkglTestCase_034088_2);

#define VkglTestCase_034089_1 "dEQP-GLES3.functional.ubo.single_basi"
#define VkglTestCase_034089_2 "c_type.shared.mediump_mat2x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_034089, VkglTestCase_034089_1, VkglTestCase_034089_2);

#define VkglTestCase_034090_1 "dEQP-GLES3.functional.ubo.single_ba"
#define VkglTestCase_034090_2 "sic_type.shared.mediump_mat2x3_both"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_034090, VkglTestCase_034090_1, VkglTestCase_034090_2);

#define VkglTestCase_034091_1 "dEQP-GLES3.functional.ubo.single_ba"
#define VkglTestCase_034091_2 "sic_type.shared.highp_mat2x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_034091, VkglTestCase_034091_1, VkglTestCase_034091_2);

#define VkglTestCase_034092_1 "dEQP-GLES3.functional.ubo.single_bas"
#define VkglTestCase_034092_2 "ic_type.shared.highp_mat2x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_034092, VkglTestCase_034092_1, VkglTestCase_034092_2);

#define VkglTestCase_034093_1 "dEQP-GLES3.functional.ubo.single_b"
#define VkglTestCase_034093_2 "asic_type.shared.highp_mat2x3_both"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_034093, VkglTestCase_034093_1, VkglTestCase_034093_2);

#define VkglTestCase_034094_1 "dEQP-GLES3.functional.ubo.single_basic_"
#define VkglTestCase_034094_2 "type.shared.row_major_lowp_mat2x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_034094, VkglTestCase_034094_1, VkglTestCase_034094_2);

#define VkglTestCase_034095_1 "dEQP-GLES3.functional.ubo.single_basic_t"
#define VkglTestCase_034095_2 "ype.shared.row_major_lowp_mat2x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_034095, VkglTestCase_034095_1, VkglTestCase_034095_2);

#define VkglTestCase_034096_1 "dEQP-GLES3.functional.ubo.single_basic"
#define VkglTestCase_034096_2 "_type.shared.row_major_lowp_mat2x3_both"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_034096, VkglTestCase_034096_1, VkglTestCase_034096_2);

#define VkglTestCase_034097_1 "dEQP-GLES3.functional.ubo.single_basic_ty"
#define VkglTestCase_034097_2 "pe.shared.row_major_mediump_mat2x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_034097, VkglTestCase_034097_1, VkglTestCase_034097_2);

#define VkglTestCase_034098_1 "dEQP-GLES3.functional.ubo.single_basic_typ"
#define VkglTestCase_034098_2 "e.shared.row_major_mediump_mat2x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_034098, VkglTestCase_034098_1, VkglTestCase_034098_2);

#define VkglTestCase_034099_1 "dEQP-GLES3.functional.ubo.single_basic_t"
#define VkglTestCase_034099_2 "ype.shared.row_major_mediump_mat2x3_both"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_034099, VkglTestCase_034099_1, VkglTestCase_034099_2);

#define VkglTestCase_034100_1 "dEQP-GLES3.functional.ubo.single_basic_t"
#define VkglTestCase_034100_2 "ype.shared.row_major_highp_mat2x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_034100, VkglTestCase_034100_1, VkglTestCase_034100_2);

#define VkglTestCase_034101_1 "dEQP-GLES3.functional.ubo.single_basic_ty"
#define VkglTestCase_034101_2 "pe.shared.row_major_highp_mat2x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_034101, VkglTestCase_034101_1, VkglTestCase_034101_2);

#define VkglTestCase_034102_1 "dEQP-GLES3.functional.ubo.single_basic_"
#define VkglTestCase_034102_2 "type.shared.row_major_highp_mat2x3_both"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_034102, VkglTestCase_034102_1, VkglTestCase_034102_2);

#define VkglTestCase_034103_1 "dEQP-GLES3.functional.ubo.single_basic_ty"
#define VkglTestCase_034103_2 "pe.shared.column_major_lowp_mat2x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_034103, VkglTestCase_034103_1, VkglTestCase_034103_2);

#define VkglTestCase_034104_1 "dEQP-GLES3.functional.ubo.single_basic_typ"
#define VkglTestCase_034104_2 "e.shared.column_major_lowp_mat2x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_034104, VkglTestCase_034104_1, VkglTestCase_034104_2);

#define VkglTestCase_034105_1 "dEQP-GLES3.functional.ubo.single_basic_t"
#define VkglTestCase_034105_2 "ype.shared.column_major_lowp_mat2x3_both"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_034105, VkglTestCase_034105_1, VkglTestCase_034105_2);

#define VkglTestCase_034106_1 "dEQP-GLES3.functional.ubo.single_basic_typ"
#define VkglTestCase_034106_2 "e.shared.column_major_mediump_mat2x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_034106, VkglTestCase_034106_1, VkglTestCase_034106_2);

#define VkglTestCase_034107_1 "dEQP-GLES3.functional.ubo.single_basic_type"
#define VkglTestCase_034107_2 ".shared.column_major_mediump_mat2x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_034107, VkglTestCase_034107_1, VkglTestCase_034107_2);

#define VkglTestCase_034108_1 "dEQP-GLES3.functional.ubo.single_basic_ty"
#define VkglTestCase_034108_2 "pe.shared.column_major_mediump_mat2x3_both"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_034108, VkglTestCase_034108_1, VkglTestCase_034108_2);

#define VkglTestCase_034109_1 "dEQP-GLES3.functional.ubo.single_basic_ty"
#define VkglTestCase_034109_2 "pe.shared.column_major_highp_mat2x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_034109, VkglTestCase_034109_1, VkglTestCase_034109_2);

#define VkglTestCase_034110_1 "dEQP-GLES3.functional.ubo.single_basic_typ"
#define VkglTestCase_034110_2 "e.shared.column_major_highp_mat2x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_034110, VkglTestCase_034110_1, VkglTestCase_034110_2);

#define VkglTestCase_034111_1 "dEQP-GLES3.functional.ubo.single_basic_t"
#define VkglTestCase_034111_2 "ype.shared.column_major_highp_mat2x3_both"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_034111, VkglTestCase_034111_1, VkglTestCase_034111_2);

#define VkglTestCase_034112_1 "dEQP-GLES3.functional.ubo.single_b"
#define VkglTestCase_034112_2 "asic_type.shared.lowp_mat2x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_034112, VkglTestCase_034112_1, VkglTestCase_034112_2);

#define VkglTestCase_034113_1 "dEQP-GLES3.functional.ubo.single_ba"
#define VkglTestCase_034113_2 "sic_type.shared.lowp_mat2x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_034113, VkglTestCase_034113_1, VkglTestCase_034113_2);

#define VkglTestCase_034114_1 "dEQP-GLES3.functional.ubo.single_"
#define VkglTestCase_034114_2 "basic_type.shared.lowp_mat2x4_both"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_034114, VkglTestCase_034114_1, VkglTestCase_034114_2);

#define VkglTestCase_034115_1 "dEQP-GLES3.functional.ubo.single_bas"
#define VkglTestCase_034115_2 "ic_type.shared.mediump_mat2x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_034115, VkglTestCase_034115_1, VkglTestCase_034115_2);

#define VkglTestCase_034116_1 "dEQP-GLES3.functional.ubo.single_basi"
#define VkglTestCase_034116_2 "c_type.shared.mediump_mat2x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_034116, VkglTestCase_034116_1, VkglTestCase_034116_2);

#define VkglTestCase_034117_1 "dEQP-GLES3.functional.ubo.single_ba"
#define VkglTestCase_034117_2 "sic_type.shared.mediump_mat2x4_both"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_034117, VkglTestCase_034117_1, VkglTestCase_034117_2);

#define VkglTestCase_034118_1 "dEQP-GLES3.functional.ubo.single_ba"
#define VkglTestCase_034118_2 "sic_type.shared.highp_mat2x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_034118, VkglTestCase_034118_1, VkglTestCase_034118_2);

#define VkglTestCase_034119_1 "dEQP-GLES3.functional.ubo.single_bas"
#define VkglTestCase_034119_2 "ic_type.shared.highp_mat2x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_034119, VkglTestCase_034119_1, VkglTestCase_034119_2);

#define VkglTestCase_034120_1 "dEQP-GLES3.functional.ubo.single_b"
#define VkglTestCase_034120_2 "asic_type.shared.highp_mat2x4_both"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_034120, VkglTestCase_034120_1, VkglTestCase_034120_2);

#define VkglTestCase_034121_1 "dEQP-GLES3.functional.ubo.single_basic_"
#define VkglTestCase_034121_2 "type.shared.row_major_lowp_mat2x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_034121, VkglTestCase_034121_1, VkglTestCase_034121_2);

#define VkglTestCase_034122_1 "dEQP-GLES3.functional.ubo.single_basic_t"
#define VkglTestCase_034122_2 "ype.shared.row_major_lowp_mat2x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_034122, VkglTestCase_034122_1, VkglTestCase_034122_2);

#define VkglTestCase_034123_1 "dEQP-GLES3.functional.ubo.single_basic"
#define VkglTestCase_034123_2 "_type.shared.row_major_lowp_mat2x4_both"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_034123, VkglTestCase_034123_1, VkglTestCase_034123_2);

#define VkglTestCase_034124_1 "dEQP-GLES3.functional.ubo.single_basic_ty"
#define VkglTestCase_034124_2 "pe.shared.row_major_mediump_mat2x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_034124, VkglTestCase_034124_1, VkglTestCase_034124_2);

#define VkglTestCase_034125_1 "dEQP-GLES3.functional.ubo.single_basic_typ"
#define VkglTestCase_034125_2 "e.shared.row_major_mediump_mat2x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_034125, VkglTestCase_034125_1, VkglTestCase_034125_2);

#define VkglTestCase_034126_1 "dEQP-GLES3.functional.ubo.single_basic_t"
#define VkglTestCase_034126_2 "ype.shared.row_major_mediump_mat2x4_both"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_034126, VkglTestCase_034126_1, VkglTestCase_034126_2);

#define VkglTestCase_034127_1 "dEQP-GLES3.functional.ubo.single_basic_t"
#define VkglTestCase_034127_2 "ype.shared.row_major_highp_mat2x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_034127, VkglTestCase_034127_1, VkglTestCase_034127_2);

#define VkglTestCase_034128_1 "dEQP-GLES3.functional.ubo.single_basic_ty"
#define VkglTestCase_034128_2 "pe.shared.row_major_highp_mat2x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_034128, VkglTestCase_034128_1, VkglTestCase_034128_2);

#define VkglTestCase_034129_1 "dEQP-GLES3.functional.ubo.single_basic_"
#define VkglTestCase_034129_2 "type.shared.row_major_highp_mat2x4_both"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_034129, VkglTestCase_034129_1, VkglTestCase_034129_2);

#define VkglTestCase_034130_1 "dEQP-GLES3.functional.ubo.single_basic_ty"
#define VkglTestCase_034130_2 "pe.shared.column_major_lowp_mat2x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_034130, VkglTestCase_034130_1, VkglTestCase_034130_2);

#define VkglTestCase_034131_1 "dEQP-GLES3.functional.ubo.single_basic_typ"
#define VkglTestCase_034131_2 "e.shared.column_major_lowp_mat2x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_034131, VkglTestCase_034131_1, VkglTestCase_034131_2);

#define VkglTestCase_034132_1 "dEQP-GLES3.functional.ubo.single_basic_t"
#define VkglTestCase_034132_2 "ype.shared.column_major_lowp_mat2x4_both"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_034132, VkglTestCase_034132_1, VkglTestCase_034132_2);

#define VkglTestCase_034133_1 "dEQP-GLES3.functional.ubo.single_basic_typ"
#define VkglTestCase_034133_2 "e.shared.column_major_mediump_mat2x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_034133, VkglTestCase_034133_1, VkglTestCase_034133_2);

#define VkglTestCase_034134_1 "dEQP-GLES3.functional.ubo.single_basic_type"
#define VkglTestCase_034134_2 ".shared.column_major_mediump_mat2x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_034134, VkglTestCase_034134_1, VkglTestCase_034134_2);

#define VkglTestCase_034135_1 "dEQP-GLES3.functional.ubo.single_basic_ty"
#define VkglTestCase_034135_2 "pe.shared.column_major_mediump_mat2x4_both"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_034135, VkglTestCase_034135_1, VkglTestCase_034135_2);

#define VkglTestCase_034136_1 "dEQP-GLES3.functional.ubo.single_basic_ty"
#define VkglTestCase_034136_2 "pe.shared.column_major_highp_mat2x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_034136, VkglTestCase_034136_1, VkglTestCase_034136_2);

#define VkglTestCase_034137_1 "dEQP-GLES3.functional.ubo.single_basic_typ"
#define VkglTestCase_034137_2 "e.shared.column_major_highp_mat2x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_034137, VkglTestCase_034137_1, VkglTestCase_034137_2);

#define VkglTestCase_034138_1 "dEQP-GLES3.functional.ubo.single_basic_t"
#define VkglTestCase_034138_2 "ype.shared.column_major_highp_mat2x4_both"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_034138, VkglTestCase_034138_1, VkglTestCase_034138_2);

#define VkglTestCase_034139_1 "dEQP-GLES3.functional.ubo.single_b"
#define VkglTestCase_034139_2 "asic_type.shared.lowp_mat3x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_034139, VkglTestCase_034139_1, VkglTestCase_034139_2);

#define VkglTestCase_034140_1 "dEQP-GLES3.functional.ubo.single_ba"
#define VkglTestCase_034140_2 "sic_type.shared.lowp_mat3x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_034140, VkglTestCase_034140_1, VkglTestCase_034140_2);

#define VkglTestCase_034141_1 "dEQP-GLES3.functional.ubo.single_"
#define VkglTestCase_034141_2 "basic_type.shared.lowp_mat3x2_both"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_034141, VkglTestCase_034141_1, VkglTestCase_034141_2);

#define VkglTestCase_034142_1 "dEQP-GLES3.functional.ubo.single_bas"
#define VkglTestCase_034142_2 "ic_type.shared.mediump_mat3x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_034142, VkglTestCase_034142_1, VkglTestCase_034142_2);

#define VkglTestCase_034143_1 "dEQP-GLES3.functional.ubo.single_basi"
#define VkglTestCase_034143_2 "c_type.shared.mediump_mat3x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_034143, VkglTestCase_034143_1, VkglTestCase_034143_2);

#define VkglTestCase_034144_1 "dEQP-GLES3.functional.ubo.single_ba"
#define VkglTestCase_034144_2 "sic_type.shared.mediump_mat3x2_both"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_034144, VkglTestCase_034144_1, VkglTestCase_034144_2);

#define VkglTestCase_034145_1 "dEQP-GLES3.functional.ubo.single_ba"
#define VkglTestCase_034145_2 "sic_type.shared.highp_mat3x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_034145, VkglTestCase_034145_1, VkglTestCase_034145_2);

#define VkglTestCase_034146_1 "dEQP-GLES3.functional.ubo.single_bas"
#define VkglTestCase_034146_2 "ic_type.shared.highp_mat3x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_034146, VkglTestCase_034146_1, VkglTestCase_034146_2);

#define VkglTestCase_034147_1 "dEQP-GLES3.functional.ubo.single_b"
#define VkglTestCase_034147_2 "asic_type.shared.highp_mat3x2_both"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_034147, VkglTestCase_034147_1, VkglTestCase_034147_2);

#define VkglTestCase_034148_1 "dEQP-GLES3.functional.ubo.single_basic_"
#define VkglTestCase_034148_2 "type.shared.row_major_lowp_mat3x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_034148, VkglTestCase_034148_1, VkglTestCase_034148_2);

#define VkglTestCase_034149_1 "dEQP-GLES3.functional.ubo.single_basic_t"
#define VkglTestCase_034149_2 "ype.shared.row_major_lowp_mat3x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_034149, VkglTestCase_034149_1, VkglTestCase_034149_2);

#define VkglTestCase_034150_1 "dEQP-GLES3.functional.ubo.single_basic"
#define VkglTestCase_034150_2 "_type.shared.row_major_lowp_mat3x2_both"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_034150, VkglTestCase_034150_1, VkglTestCase_034150_2);

#define VkglTestCase_034151_1 "dEQP-GLES3.functional.ubo.single_basic_ty"
#define VkglTestCase_034151_2 "pe.shared.row_major_mediump_mat3x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_034151, VkglTestCase_034151_1, VkglTestCase_034151_2);

#define VkglTestCase_034152_1 "dEQP-GLES3.functional.ubo.single_basic_typ"
#define VkglTestCase_034152_2 "e.shared.row_major_mediump_mat3x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_034152, VkglTestCase_034152_1, VkglTestCase_034152_2);

#define VkglTestCase_034153_1 "dEQP-GLES3.functional.ubo.single_basic_t"
#define VkglTestCase_034153_2 "ype.shared.row_major_mediump_mat3x2_both"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_034153, VkglTestCase_034153_1, VkglTestCase_034153_2);

#define VkglTestCase_034154_1 "dEQP-GLES3.functional.ubo.single_basic_t"
#define VkglTestCase_034154_2 "ype.shared.row_major_highp_mat3x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_034154, VkglTestCase_034154_1, VkglTestCase_034154_2);

#define VkglTestCase_034155_1 "dEQP-GLES3.functional.ubo.single_basic_ty"
#define VkglTestCase_034155_2 "pe.shared.row_major_highp_mat3x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_034155, VkglTestCase_034155_1, VkglTestCase_034155_2);

#define VkglTestCase_034156_1 "dEQP-GLES3.functional.ubo.single_basic_"
#define VkglTestCase_034156_2 "type.shared.row_major_highp_mat3x2_both"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_034156, VkglTestCase_034156_1, VkglTestCase_034156_2);

#define VkglTestCase_034157_1 "dEQP-GLES3.functional.ubo.single_basic_ty"
#define VkglTestCase_034157_2 "pe.shared.column_major_lowp_mat3x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_034157, VkglTestCase_034157_1, VkglTestCase_034157_2);

#define VkglTestCase_034158_1 "dEQP-GLES3.functional.ubo.single_basic_typ"
#define VkglTestCase_034158_2 "e.shared.column_major_lowp_mat3x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_034158, VkglTestCase_034158_1, VkglTestCase_034158_2);

#define VkglTestCase_034159_1 "dEQP-GLES3.functional.ubo.single_basic_t"
#define VkglTestCase_034159_2 "ype.shared.column_major_lowp_mat3x2_both"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_034159, VkglTestCase_034159_1, VkglTestCase_034159_2);

#define VkglTestCase_034160_1 "dEQP-GLES3.functional.ubo.single_basic_typ"
#define VkglTestCase_034160_2 "e.shared.column_major_mediump_mat3x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_034160, VkglTestCase_034160_1, VkglTestCase_034160_2);

#define VkglTestCase_034161_1 "dEQP-GLES3.functional.ubo.single_basic_type"
#define VkglTestCase_034161_2 ".shared.column_major_mediump_mat3x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_034161, VkglTestCase_034161_1, VkglTestCase_034161_2);

#define VkglTestCase_034162_1 "dEQP-GLES3.functional.ubo.single_basic_ty"
#define VkglTestCase_034162_2 "pe.shared.column_major_mediump_mat3x2_both"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_034162, VkglTestCase_034162_1, VkglTestCase_034162_2);

#define VkglTestCase_034163_1 "dEQP-GLES3.functional.ubo.single_basic_ty"
#define VkglTestCase_034163_2 "pe.shared.column_major_highp_mat3x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_034163, VkglTestCase_034163_1, VkglTestCase_034163_2);

#define VkglTestCase_034164_1 "dEQP-GLES3.functional.ubo.single_basic_typ"
#define VkglTestCase_034164_2 "e.shared.column_major_highp_mat3x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_034164, VkglTestCase_034164_1, VkglTestCase_034164_2);

#define VkglTestCase_034165_1 "dEQP-GLES3.functional.ubo.single_basic_t"
#define VkglTestCase_034165_2 "ype.shared.column_major_highp_mat3x2_both"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_034165, VkglTestCase_034165_1, VkglTestCase_034165_2);

#define VkglTestCase_034166_1 "dEQP-GLES3.functional.ubo.single_b"
#define VkglTestCase_034166_2 "asic_type.shared.lowp_mat3x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_034166, VkglTestCase_034166_1, VkglTestCase_034166_2);

#define VkglTestCase_034167_1 "dEQP-GLES3.functional.ubo.single_ba"
#define VkglTestCase_034167_2 "sic_type.shared.lowp_mat3x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_034167, VkglTestCase_034167_1, VkglTestCase_034167_2);

#define VkglTestCase_034168_1 "dEQP-GLES3.functional.ubo.single_"
#define VkglTestCase_034168_2 "basic_type.shared.lowp_mat3x4_both"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_034168, VkglTestCase_034168_1, VkglTestCase_034168_2);

#define VkglTestCase_034169_1 "dEQP-GLES3.functional.ubo.single_bas"
#define VkglTestCase_034169_2 "ic_type.shared.mediump_mat3x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_034169, VkglTestCase_034169_1, VkglTestCase_034169_2);

#define VkglTestCase_034170_1 "dEQP-GLES3.functional.ubo.single_basi"
#define VkglTestCase_034170_2 "c_type.shared.mediump_mat3x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_034170, VkglTestCase_034170_1, VkglTestCase_034170_2);

#define VkglTestCase_034171_1 "dEQP-GLES3.functional.ubo.single_ba"
#define VkglTestCase_034171_2 "sic_type.shared.mediump_mat3x4_both"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_034171, VkglTestCase_034171_1, VkglTestCase_034171_2);

#define VkglTestCase_034172_1 "dEQP-GLES3.functional.ubo.single_ba"
#define VkglTestCase_034172_2 "sic_type.shared.highp_mat3x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_034172, VkglTestCase_034172_1, VkglTestCase_034172_2);

#define VkglTestCase_034173_1 "dEQP-GLES3.functional.ubo.single_bas"
#define VkglTestCase_034173_2 "ic_type.shared.highp_mat3x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_034173, VkglTestCase_034173_1, VkglTestCase_034173_2);

#define VkglTestCase_034174_1 "dEQP-GLES3.functional.ubo.single_b"
#define VkglTestCase_034174_2 "asic_type.shared.highp_mat3x4_both"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_034174, VkglTestCase_034174_1, VkglTestCase_034174_2);

#define VkglTestCase_034175_1 "dEQP-GLES3.functional.ubo.single_basic_"
#define VkglTestCase_034175_2 "type.shared.row_major_lowp_mat3x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_034175, VkglTestCase_034175_1, VkglTestCase_034175_2);

#define VkglTestCase_034176_1 "dEQP-GLES3.functional.ubo.single_basic_t"
#define VkglTestCase_034176_2 "ype.shared.row_major_lowp_mat3x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_034176, VkglTestCase_034176_1, VkglTestCase_034176_2);

#define VkglTestCase_034177_1 "dEQP-GLES3.functional.ubo.single_basic"
#define VkglTestCase_034177_2 "_type.shared.row_major_lowp_mat3x4_both"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_034177, VkglTestCase_034177_1, VkglTestCase_034177_2);

#define VkglTestCase_034178_1 "dEQP-GLES3.functional.ubo.single_basic_ty"
#define VkglTestCase_034178_2 "pe.shared.row_major_mediump_mat3x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_034178, VkglTestCase_034178_1, VkglTestCase_034178_2);

#define VkglTestCase_034179_1 "dEQP-GLES3.functional.ubo.single_basic_typ"
#define VkglTestCase_034179_2 "e.shared.row_major_mediump_mat3x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_034179, VkglTestCase_034179_1, VkglTestCase_034179_2);

#define VkglTestCase_034180_1 "dEQP-GLES3.functional.ubo.single_basic_t"
#define VkglTestCase_034180_2 "ype.shared.row_major_mediump_mat3x4_both"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_034180, VkglTestCase_034180_1, VkglTestCase_034180_2);

#define VkglTestCase_034181_1 "dEQP-GLES3.functional.ubo.single_basic_t"
#define VkglTestCase_034181_2 "ype.shared.row_major_highp_mat3x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_034181, VkglTestCase_034181_1, VkglTestCase_034181_2);

#define VkglTestCase_034182_1 "dEQP-GLES3.functional.ubo.single_basic_ty"
#define VkglTestCase_034182_2 "pe.shared.row_major_highp_mat3x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_034182, VkglTestCase_034182_1, VkglTestCase_034182_2);

#define VkglTestCase_034183_1 "dEQP-GLES3.functional.ubo.single_basic_"
#define VkglTestCase_034183_2 "type.shared.row_major_highp_mat3x4_both"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_034183, VkglTestCase_034183_1, VkglTestCase_034183_2);

#define VkglTestCase_034184_1 "dEQP-GLES3.functional.ubo.single_basic_ty"
#define VkglTestCase_034184_2 "pe.shared.column_major_lowp_mat3x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_034184, VkglTestCase_034184_1, VkglTestCase_034184_2);

#define VkglTestCase_034185_1 "dEQP-GLES3.functional.ubo.single_basic_typ"
#define VkglTestCase_034185_2 "e.shared.column_major_lowp_mat3x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_034185, VkglTestCase_034185_1, VkglTestCase_034185_2);

#define VkglTestCase_034186_1 "dEQP-GLES3.functional.ubo.single_basic_t"
#define VkglTestCase_034186_2 "ype.shared.column_major_lowp_mat3x4_both"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_034186, VkglTestCase_034186_1, VkglTestCase_034186_2);

#define VkglTestCase_034187_1 "dEQP-GLES3.functional.ubo.single_basic_typ"
#define VkglTestCase_034187_2 "e.shared.column_major_mediump_mat3x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_034187, VkglTestCase_034187_1, VkglTestCase_034187_2);

#define VkglTestCase_034188_1 "dEQP-GLES3.functional.ubo.single_basic_type"
#define VkglTestCase_034188_2 ".shared.column_major_mediump_mat3x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_034188, VkglTestCase_034188_1, VkglTestCase_034188_2);

#define VkglTestCase_034189_1 "dEQP-GLES3.functional.ubo.single_basic_ty"
#define VkglTestCase_034189_2 "pe.shared.column_major_mediump_mat3x4_both"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_034189, VkglTestCase_034189_1, VkglTestCase_034189_2);

#define VkglTestCase_034190_1 "dEQP-GLES3.functional.ubo.single_basic_ty"
#define VkglTestCase_034190_2 "pe.shared.column_major_highp_mat3x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_034190, VkglTestCase_034190_1, VkglTestCase_034190_2);

#define VkglTestCase_034191_1 "dEQP-GLES3.functional.ubo.single_basic_typ"
#define VkglTestCase_034191_2 "e.shared.column_major_highp_mat3x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_034191, VkglTestCase_034191_1, VkglTestCase_034191_2);

#define VkglTestCase_034192_1 "dEQP-GLES3.functional.ubo.single_basic_t"
#define VkglTestCase_034192_2 "ype.shared.column_major_highp_mat3x4_both"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_034192, VkglTestCase_034192_1, VkglTestCase_034192_2);

#define VkglTestCase_034193_1 "dEQP-GLES3.functional.ubo.single_b"
#define VkglTestCase_034193_2 "asic_type.shared.lowp_mat4x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_034193, VkglTestCase_034193_1, VkglTestCase_034193_2);

#define VkglTestCase_034194_1 "dEQP-GLES3.functional.ubo.single_ba"
#define VkglTestCase_034194_2 "sic_type.shared.lowp_mat4x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_034194, VkglTestCase_034194_1, VkglTestCase_034194_2);

#define VkglTestCase_034195_1 "dEQP-GLES3.functional.ubo.single_"
#define VkglTestCase_034195_2 "basic_type.shared.lowp_mat4x2_both"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_034195, VkglTestCase_034195_1, VkglTestCase_034195_2);

#define VkglTestCase_034196_1 "dEQP-GLES3.functional.ubo.single_bas"
#define VkglTestCase_034196_2 "ic_type.shared.mediump_mat4x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_034196, VkglTestCase_034196_1, VkglTestCase_034196_2);

#define VkglTestCase_034197_1 "dEQP-GLES3.functional.ubo.single_basi"
#define VkglTestCase_034197_2 "c_type.shared.mediump_mat4x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_034197, VkglTestCase_034197_1, VkglTestCase_034197_2);

#define VkglTestCase_034198_1 "dEQP-GLES3.functional.ubo.single_ba"
#define VkglTestCase_034198_2 "sic_type.shared.mediump_mat4x2_both"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_034198, VkglTestCase_034198_1, VkglTestCase_034198_2);

#define VkglTestCase_034199_1 "dEQP-GLES3.functional.ubo.single_ba"
#define VkglTestCase_034199_2 "sic_type.shared.highp_mat4x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_034199, VkglTestCase_034199_1, VkglTestCase_034199_2);

#define VkglTestCase_034200_1 "dEQP-GLES3.functional.ubo.single_bas"
#define VkglTestCase_034200_2 "ic_type.shared.highp_mat4x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_034200, VkglTestCase_034200_1, VkglTestCase_034200_2);

#define VkglTestCase_034201_1 "dEQP-GLES3.functional.ubo.single_b"
#define VkglTestCase_034201_2 "asic_type.shared.highp_mat4x2_both"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_034201, VkglTestCase_034201_1, VkglTestCase_034201_2);

#define VkglTestCase_034202_1 "dEQP-GLES3.functional.ubo.single_basic_"
#define VkglTestCase_034202_2 "type.shared.row_major_lowp_mat4x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_034202, VkglTestCase_034202_1, VkglTestCase_034202_2);

#define VkglTestCase_034203_1 "dEQP-GLES3.functional.ubo.single_basic_t"
#define VkglTestCase_034203_2 "ype.shared.row_major_lowp_mat4x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_034203, VkglTestCase_034203_1, VkglTestCase_034203_2);

#define VkglTestCase_034204_1 "dEQP-GLES3.functional.ubo.single_basic"
#define VkglTestCase_034204_2 "_type.shared.row_major_lowp_mat4x2_both"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_034204, VkglTestCase_034204_1, VkglTestCase_034204_2);

#define VkglTestCase_034205_1 "dEQP-GLES3.functional.ubo.single_basic_ty"
#define VkglTestCase_034205_2 "pe.shared.row_major_mediump_mat4x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_034205, VkglTestCase_034205_1, VkglTestCase_034205_2);

#define VkglTestCase_034206_1 "dEQP-GLES3.functional.ubo.single_basic_typ"
#define VkglTestCase_034206_2 "e.shared.row_major_mediump_mat4x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_034206, VkglTestCase_034206_1, VkglTestCase_034206_2);

#define VkglTestCase_034207_1 "dEQP-GLES3.functional.ubo.single_basic_t"
#define VkglTestCase_034207_2 "ype.shared.row_major_mediump_mat4x2_both"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_034207, VkglTestCase_034207_1, VkglTestCase_034207_2);

#define VkglTestCase_034208_1 "dEQP-GLES3.functional.ubo.single_basic_t"
#define VkglTestCase_034208_2 "ype.shared.row_major_highp_mat4x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_034208, VkglTestCase_034208_1, VkglTestCase_034208_2);

#define VkglTestCase_034209_1 "dEQP-GLES3.functional.ubo.single_basic_ty"
#define VkglTestCase_034209_2 "pe.shared.row_major_highp_mat4x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_034209, VkglTestCase_034209_1, VkglTestCase_034209_2);

#define VkglTestCase_034210_1 "dEQP-GLES3.functional.ubo.single_basic_"
#define VkglTestCase_034210_2 "type.shared.row_major_highp_mat4x2_both"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_034210, VkglTestCase_034210_1, VkglTestCase_034210_2);

#define VkglTestCase_034211_1 "dEQP-GLES3.functional.ubo.single_basic_ty"
#define VkglTestCase_034211_2 "pe.shared.column_major_lowp_mat4x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_034211, VkglTestCase_034211_1, VkglTestCase_034211_2);

#define VkglTestCase_034212_1 "dEQP-GLES3.functional.ubo.single_basic_typ"
#define VkglTestCase_034212_2 "e.shared.column_major_lowp_mat4x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_034212, VkglTestCase_034212_1, VkglTestCase_034212_2);

#define VkglTestCase_034213_1 "dEQP-GLES3.functional.ubo.single_basic_t"
#define VkglTestCase_034213_2 "ype.shared.column_major_lowp_mat4x2_both"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_034213, VkglTestCase_034213_1, VkglTestCase_034213_2);

#define VkglTestCase_034214_1 "dEQP-GLES3.functional.ubo.single_basic_typ"
#define VkglTestCase_034214_2 "e.shared.column_major_mediump_mat4x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_034214, VkglTestCase_034214_1, VkglTestCase_034214_2);

#define VkglTestCase_034215_1 "dEQP-GLES3.functional.ubo.single_basic_type"
#define VkglTestCase_034215_2 ".shared.column_major_mediump_mat4x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_034215, VkglTestCase_034215_1, VkglTestCase_034215_2);

#define VkglTestCase_034216_1 "dEQP-GLES3.functional.ubo.single_basic_ty"
#define VkglTestCase_034216_2 "pe.shared.column_major_mediump_mat4x2_both"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_034216, VkglTestCase_034216_1, VkglTestCase_034216_2);

#define VkglTestCase_034217_1 "dEQP-GLES3.functional.ubo.single_basic_ty"
#define VkglTestCase_034217_2 "pe.shared.column_major_highp_mat4x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_034217, VkglTestCase_034217_1, VkglTestCase_034217_2);

#define VkglTestCase_034218_1 "dEQP-GLES3.functional.ubo.single_basic_typ"
#define VkglTestCase_034218_2 "e.shared.column_major_highp_mat4x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_034218, VkglTestCase_034218_1, VkglTestCase_034218_2);

#define VkglTestCase_034219_1 "dEQP-GLES3.functional.ubo.single_basic_t"
#define VkglTestCase_034219_2 "ype.shared.column_major_highp_mat4x2_both"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_034219, VkglTestCase_034219_1, VkglTestCase_034219_2);

#define VkglTestCase_034220_1 "dEQP-GLES3.functional.ubo.single_b"
#define VkglTestCase_034220_2 "asic_type.shared.lowp_mat4x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_034220, VkglTestCase_034220_1, VkglTestCase_034220_2);

#define VkglTestCase_034221_1 "dEQP-GLES3.functional.ubo.single_ba"
#define VkglTestCase_034221_2 "sic_type.shared.lowp_mat4x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_034221, VkglTestCase_034221_1, VkglTestCase_034221_2);

#define VkglTestCase_034222_1 "dEQP-GLES3.functional.ubo.single_"
#define VkglTestCase_034222_2 "basic_type.shared.lowp_mat4x3_both"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_034222, VkglTestCase_034222_1, VkglTestCase_034222_2);

#define VkglTestCase_034223_1 "dEQP-GLES3.functional.ubo.single_bas"
#define VkglTestCase_034223_2 "ic_type.shared.mediump_mat4x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_034223, VkglTestCase_034223_1, VkglTestCase_034223_2);

#define VkglTestCase_034224_1 "dEQP-GLES3.functional.ubo.single_basi"
#define VkglTestCase_034224_2 "c_type.shared.mediump_mat4x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_034224, VkglTestCase_034224_1, VkglTestCase_034224_2);

#define VkglTestCase_034225_1 "dEQP-GLES3.functional.ubo.single_ba"
#define VkglTestCase_034225_2 "sic_type.shared.mediump_mat4x3_both"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_034225, VkglTestCase_034225_1, VkglTestCase_034225_2);

#define VkglTestCase_034226_1 "dEQP-GLES3.functional.ubo.single_ba"
#define VkglTestCase_034226_2 "sic_type.shared.highp_mat4x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_034226, VkglTestCase_034226_1, VkglTestCase_034226_2);

#define VkglTestCase_034227_1 "dEQP-GLES3.functional.ubo.single_bas"
#define VkglTestCase_034227_2 "ic_type.shared.highp_mat4x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_034227, VkglTestCase_034227_1, VkglTestCase_034227_2);

#define VkglTestCase_034228_1 "dEQP-GLES3.functional.ubo.single_b"
#define VkglTestCase_034228_2 "asic_type.shared.highp_mat4x3_both"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_034228, VkglTestCase_034228_1, VkglTestCase_034228_2);

#define VkglTestCase_034229_1 "dEQP-GLES3.functional.ubo.single_basic_"
#define VkglTestCase_034229_2 "type.shared.row_major_lowp_mat4x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_034229, VkglTestCase_034229_1, VkglTestCase_034229_2);

#define VkglTestCase_034230_1 "dEQP-GLES3.functional.ubo.single_basic_t"
#define VkglTestCase_034230_2 "ype.shared.row_major_lowp_mat4x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_034230, VkglTestCase_034230_1, VkglTestCase_034230_2);

#define VkglTestCase_034231_1 "dEQP-GLES3.functional.ubo.single_basic"
#define VkglTestCase_034231_2 "_type.shared.row_major_lowp_mat4x3_both"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_034231, VkglTestCase_034231_1, VkglTestCase_034231_2);

#define VkglTestCase_034232_1 "dEQP-GLES3.functional.ubo.single_basic_ty"
#define VkglTestCase_034232_2 "pe.shared.row_major_mediump_mat4x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_034232, VkglTestCase_034232_1, VkglTestCase_034232_2);

#define VkglTestCase_034233_1 "dEQP-GLES3.functional.ubo.single_basic_typ"
#define VkglTestCase_034233_2 "e.shared.row_major_mediump_mat4x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_034233, VkglTestCase_034233_1, VkglTestCase_034233_2);

#define VkglTestCase_034234_1 "dEQP-GLES3.functional.ubo.single_basic_t"
#define VkglTestCase_034234_2 "ype.shared.row_major_mediump_mat4x3_both"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_034234, VkglTestCase_034234_1, VkglTestCase_034234_2);

#define VkglTestCase_034235_1 "dEQP-GLES3.functional.ubo.single_basic_t"
#define VkglTestCase_034235_2 "ype.shared.row_major_highp_mat4x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_034235, VkglTestCase_034235_1, VkglTestCase_034235_2);

#define VkglTestCase_034236_1 "dEQP-GLES3.functional.ubo.single_basic_ty"
#define VkglTestCase_034236_2 "pe.shared.row_major_highp_mat4x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_034236, VkglTestCase_034236_1, VkglTestCase_034236_2);

#define VkglTestCase_034237_1 "dEQP-GLES3.functional.ubo.single_basic_"
#define VkglTestCase_034237_2 "type.shared.row_major_highp_mat4x3_both"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_034237, VkglTestCase_034237_1, VkglTestCase_034237_2);

#define VkglTestCase_034238_1 "dEQP-GLES3.functional.ubo.single_basic_ty"
#define VkglTestCase_034238_2 "pe.shared.column_major_lowp_mat4x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_034238, VkglTestCase_034238_1, VkglTestCase_034238_2);

#define VkglTestCase_034239_1 "dEQP-GLES3.functional.ubo.single_basic_typ"
#define VkglTestCase_034239_2 "e.shared.column_major_lowp_mat4x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_034239, VkglTestCase_034239_1, VkglTestCase_034239_2);

#define VkglTestCase_034240_1 "dEQP-GLES3.functional.ubo.single_basic_t"
#define VkglTestCase_034240_2 "ype.shared.column_major_lowp_mat4x3_both"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_034240, VkglTestCase_034240_1, VkglTestCase_034240_2);

#define VkglTestCase_034241_1 "dEQP-GLES3.functional.ubo.single_basic_typ"
#define VkglTestCase_034241_2 "e.shared.column_major_mediump_mat4x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_034241, VkglTestCase_034241_1, VkglTestCase_034241_2);

#define VkglTestCase_034242_1 "dEQP-GLES3.functional.ubo.single_basic_type"
#define VkglTestCase_034242_2 ".shared.column_major_mediump_mat4x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_034242, VkglTestCase_034242_1, VkglTestCase_034242_2);

#define VkglTestCase_034243_1 "dEQP-GLES3.functional.ubo.single_basic_ty"
#define VkglTestCase_034243_2 "pe.shared.column_major_mediump_mat4x3_both"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_034243, VkglTestCase_034243_1, VkglTestCase_034243_2);

#define VkglTestCase_034244_1 "dEQP-GLES3.functional.ubo.single_basic_ty"
#define VkglTestCase_034244_2 "pe.shared.column_major_highp_mat4x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_034244, VkglTestCase_034244_1, VkglTestCase_034244_2);

#define VkglTestCase_034245_1 "dEQP-GLES3.functional.ubo.single_basic_typ"
#define VkglTestCase_034245_2 "e.shared.column_major_highp_mat4x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_034245, VkglTestCase_034245_1, VkglTestCase_034245_2);

#define VkglTestCase_034246_1 "dEQP-GLES3.functional.ubo.single_basic_t"
#define VkglTestCase_034246_2 "ype.shared.column_major_highp_mat4x3_both"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_034246, VkglTestCase_034246_1, VkglTestCase_034246_2);
