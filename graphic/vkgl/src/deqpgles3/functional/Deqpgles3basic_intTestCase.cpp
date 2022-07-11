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

#define VkglTestCase_038912_1 "dEQP-GLES3.functional.fragment"
#define VkglTestCase_038912_2 "_out.basic.int.rgba32i_lowp_int"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038912, VkglTestCase_038912_1, VkglTestCase_038912_2);

#define VkglTestCase_038913_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_038913_2 "out.basic.int.rgba32i_lowp_ivec2"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038913, VkglTestCase_038913_1, VkglTestCase_038913_2);

#define VkglTestCase_038914_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_038914_2 "out.basic.int.rgba32i_lowp_ivec3"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038914, VkglTestCase_038914_1, VkglTestCase_038914_2);

#define VkglTestCase_038915_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_038915_2 "out.basic.int.rgba32i_lowp_ivec4"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038915, VkglTestCase_038915_1, VkglTestCase_038915_2);

#define VkglTestCase_038916_1 "dEQP-GLES3.functional.fragment_o"
#define VkglTestCase_038916_2 "ut.basic.int.rgba32i_mediump_int"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038916, VkglTestCase_038916_1, VkglTestCase_038916_2);

#define VkglTestCase_038917_1 "dEQP-GLES3.functional.fragment_ou"
#define VkglTestCase_038917_2 "t.basic.int.rgba32i_mediump_ivec2"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038917, VkglTestCase_038917_1, VkglTestCase_038917_2);

#define VkglTestCase_038918_1 "dEQP-GLES3.functional.fragment_ou"
#define VkglTestCase_038918_2 "t.basic.int.rgba32i_mediump_ivec3"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038918, VkglTestCase_038918_1, VkglTestCase_038918_2);

#define VkglTestCase_038919_1 "dEQP-GLES3.functional.fragment_ou"
#define VkglTestCase_038919_2 "t.basic.int.rgba32i_mediump_ivec4"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038919, VkglTestCase_038919_1, VkglTestCase_038919_2);

#define VkglTestCase_038920_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_038920_2 "out.basic.int.rgba32i_highp_int"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038920, VkglTestCase_038920_1, VkglTestCase_038920_2);

#define VkglTestCase_038921_1 "dEQP-GLES3.functional.fragment_o"
#define VkglTestCase_038921_2 "ut.basic.int.rgba32i_highp_ivec2"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038921, VkglTestCase_038921_1, VkglTestCase_038921_2);

#define VkglTestCase_038922_1 "dEQP-GLES3.functional.fragment_o"
#define VkglTestCase_038922_2 "ut.basic.int.rgba32i_highp_ivec3"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038922, VkglTestCase_038922_1, VkglTestCase_038922_2);

#define VkglTestCase_038923_1 "dEQP-GLES3.functional.fragment_o"
#define VkglTestCase_038923_2 "ut.basic.int.rgba32i_highp_ivec4"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038923, VkglTestCase_038923_1, VkglTestCase_038923_2);

#define VkglTestCase_038924_1 "dEQP-GLES3.functional.fragment"
#define VkglTestCase_038924_2 "_out.basic.int.rgba16i_lowp_int"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038924, VkglTestCase_038924_1, VkglTestCase_038924_2);

#define VkglTestCase_038925_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_038925_2 "out.basic.int.rgba16i_lowp_ivec2"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038925, VkglTestCase_038925_1, VkglTestCase_038925_2);

#define VkglTestCase_038926_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_038926_2 "out.basic.int.rgba16i_lowp_ivec3"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038926, VkglTestCase_038926_1, VkglTestCase_038926_2);

#define VkglTestCase_038927_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_038927_2 "out.basic.int.rgba16i_lowp_ivec4"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038927, VkglTestCase_038927_1, VkglTestCase_038927_2);

#define VkglTestCase_038928_1 "dEQP-GLES3.functional.fragment_o"
#define VkglTestCase_038928_2 "ut.basic.int.rgba16i_mediump_int"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038928, VkglTestCase_038928_1, VkglTestCase_038928_2);

#define VkglTestCase_038929_1 "dEQP-GLES3.functional.fragment_ou"
#define VkglTestCase_038929_2 "t.basic.int.rgba16i_mediump_ivec2"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038929, VkglTestCase_038929_1, VkglTestCase_038929_2);

#define VkglTestCase_038930_1 "dEQP-GLES3.functional.fragment_ou"
#define VkglTestCase_038930_2 "t.basic.int.rgba16i_mediump_ivec3"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038930, VkglTestCase_038930_1, VkglTestCase_038930_2);

#define VkglTestCase_038931_1 "dEQP-GLES3.functional.fragment_ou"
#define VkglTestCase_038931_2 "t.basic.int.rgba16i_mediump_ivec4"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038931, VkglTestCase_038931_1, VkglTestCase_038931_2);

#define VkglTestCase_038932_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_038932_2 "out.basic.int.rgba16i_highp_int"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038932, VkglTestCase_038932_1, VkglTestCase_038932_2);

#define VkglTestCase_038933_1 "dEQP-GLES3.functional.fragment_o"
#define VkglTestCase_038933_2 "ut.basic.int.rgba16i_highp_ivec2"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038933, VkglTestCase_038933_1, VkglTestCase_038933_2);

#define VkglTestCase_038934_1 "dEQP-GLES3.functional.fragment_o"
#define VkglTestCase_038934_2 "ut.basic.int.rgba16i_highp_ivec3"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038934, VkglTestCase_038934_1, VkglTestCase_038934_2);

#define VkglTestCase_038935_1 "dEQP-GLES3.functional.fragment_o"
#define VkglTestCase_038935_2 "ut.basic.int.rgba16i_highp_ivec4"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038935, VkglTestCase_038935_1, VkglTestCase_038935_2);

#define VkglTestCase_038936_1 "dEQP-GLES3.functional.fragment"
#define VkglTestCase_038936_2 "_out.basic.int.rgba8i_lowp_int"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038936, VkglTestCase_038936_1, VkglTestCase_038936_2);

#define VkglTestCase_038937_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_038937_2 "out.basic.int.rgba8i_lowp_ivec2"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038937, VkglTestCase_038937_1, VkglTestCase_038937_2);

#define VkglTestCase_038938_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_038938_2 "out.basic.int.rgba8i_lowp_ivec3"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038938, VkglTestCase_038938_1, VkglTestCase_038938_2);

#define VkglTestCase_038939_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_038939_2 "out.basic.int.rgba8i_lowp_ivec4"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038939, VkglTestCase_038939_1, VkglTestCase_038939_2);

#define VkglTestCase_038940_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_038940_2 "out.basic.int.rgba8i_mediump_int"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038940, VkglTestCase_038940_1, VkglTestCase_038940_2);

#define VkglTestCase_038941_1 "dEQP-GLES3.functional.fragment_o"
#define VkglTestCase_038941_2 "ut.basic.int.rgba8i_mediump_ivec2"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038941, VkglTestCase_038941_1, VkglTestCase_038941_2);

#define VkglTestCase_038942_1 "dEQP-GLES3.functional.fragment_o"
#define VkglTestCase_038942_2 "ut.basic.int.rgba8i_mediump_ivec3"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038942, VkglTestCase_038942_1, VkglTestCase_038942_2);

#define VkglTestCase_038943_1 "dEQP-GLES3.functional.fragment_o"
#define VkglTestCase_038943_2 "ut.basic.int.rgba8i_mediump_ivec4"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038943, VkglTestCase_038943_1, VkglTestCase_038943_2);

#define VkglTestCase_038944_1 "dEQP-GLES3.functional.fragment"
#define VkglTestCase_038944_2 "_out.basic.int.rgba8i_highp_int"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038944, VkglTestCase_038944_1, VkglTestCase_038944_2);

#define VkglTestCase_038945_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_038945_2 "out.basic.int.rgba8i_highp_ivec2"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038945, VkglTestCase_038945_1, VkglTestCase_038945_2);

#define VkglTestCase_038946_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_038946_2 "out.basic.int.rgba8i_highp_ivec3"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038946, VkglTestCase_038946_1, VkglTestCase_038946_2);

#define VkglTestCase_038947_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_038947_2 "out.basic.int.rgba8i_highp_ivec4"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038947, VkglTestCase_038947_1, VkglTestCase_038947_2);

#define VkglTestCase_038948_1 "dEQP-GLES3.functional.fragmen"
#define VkglTestCase_038948_2 "t_out.basic.int.rg32i_lowp_int"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038948, VkglTestCase_038948_1, VkglTestCase_038948_2);

#define VkglTestCase_038949_1 "dEQP-GLES3.functional.fragment"
#define VkglTestCase_038949_2 "_out.basic.int.rg32i_lowp_ivec2"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038949, VkglTestCase_038949_1, VkglTestCase_038949_2);

#define VkglTestCase_038950_1 "dEQP-GLES3.functional.fragment"
#define VkglTestCase_038950_2 "_out.basic.int.rg32i_lowp_ivec3"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038950, VkglTestCase_038950_1, VkglTestCase_038950_2);

#define VkglTestCase_038951_1 "dEQP-GLES3.functional.fragment"
#define VkglTestCase_038951_2 "_out.basic.int.rg32i_lowp_ivec4"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038951, VkglTestCase_038951_1, VkglTestCase_038951_2);

#define VkglTestCase_038952_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_038952_2 "out.basic.int.rg32i_mediump_int"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038952, VkglTestCase_038952_1, VkglTestCase_038952_2);

#define VkglTestCase_038953_1 "dEQP-GLES3.functional.fragment_o"
#define VkglTestCase_038953_2 "ut.basic.int.rg32i_mediump_ivec2"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038953, VkglTestCase_038953_1, VkglTestCase_038953_2);

#define VkglTestCase_038954_1 "dEQP-GLES3.functional.fragment_o"
#define VkglTestCase_038954_2 "ut.basic.int.rg32i_mediump_ivec3"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038954, VkglTestCase_038954_1, VkglTestCase_038954_2);

#define VkglTestCase_038955_1 "dEQP-GLES3.functional.fragment_o"
#define VkglTestCase_038955_2 "ut.basic.int.rg32i_mediump_ivec4"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038955, VkglTestCase_038955_1, VkglTestCase_038955_2);

#define VkglTestCase_038956_1 "dEQP-GLES3.functional.fragment"
#define VkglTestCase_038956_2 "_out.basic.int.rg32i_highp_int"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038956, VkglTestCase_038956_1, VkglTestCase_038956_2);

#define VkglTestCase_038957_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_038957_2 "out.basic.int.rg32i_highp_ivec2"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038957, VkglTestCase_038957_1, VkglTestCase_038957_2);

#define VkglTestCase_038958_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_038958_2 "out.basic.int.rg32i_highp_ivec3"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038958, VkglTestCase_038958_1, VkglTestCase_038958_2);

#define VkglTestCase_038959_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_038959_2 "out.basic.int.rg32i_highp_ivec4"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038959, VkglTestCase_038959_1, VkglTestCase_038959_2);

#define VkglTestCase_038960_1 "dEQP-GLES3.functional.fragmen"
#define VkglTestCase_038960_2 "t_out.basic.int.rg16i_lowp_int"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038960, VkglTestCase_038960_1, VkglTestCase_038960_2);

#define VkglTestCase_038961_1 "dEQP-GLES3.functional.fragment"
#define VkglTestCase_038961_2 "_out.basic.int.rg16i_lowp_ivec2"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038961, VkglTestCase_038961_1, VkglTestCase_038961_2);

#define VkglTestCase_038962_1 "dEQP-GLES3.functional.fragment"
#define VkglTestCase_038962_2 "_out.basic.int.rg16i_lowp_ivec3"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038962, VkglTestCase_038962_1, VkglTestCase_038962_2);

#define VkglTestCase_038963_1 "dEQP-GLES3.functional.fragment"
#define VkglTestCase_038963_2 "_out.basic.int.rg16i_lowp_ivec4"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038963, VkglTestCase_038963_1, VkglTestCase_038963_2);

#define VkglTestCase_038964_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_038964_2 "out.basic.int.rg16i_mediump_int"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038964, VkglTestCase_038964_1, VkglTestCase_038964_2);

#define VkglTestCase_038965_1 "dEQP-GLES3.functional.fragment_o"
#define VkglTestCase_038965_2 "ut.basic.int.rg16i_mediump_ivec2"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038965, VkglTestCase_038965_1, VkglTestCase_038965_2);

#define VkglTestCase_038966_1 "dEQP-GLES3.functional.fragment_o"
#define VkglTestCase_038966_2 "ut.basic.int.rg16i_mediump_ivec3"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038966, VkglTestCase_038966_1, VkglTestCase_038966_2);

#define VkglTestCase_038967_1 "dEQP-GLES3.functional.fragment_o"
#define VkglTestCase_038967_2 "ut.basic.int.rg16i_mediump_ivec4"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038967, VkglTestCase_038967_1, VkglTestCase_038967_2);

#define VkglTestCase_038968_1 "dEQP-GLES3.functional.fragment"
#define VkglTestCase_038968_2 "_out.basic.int.rg16i_highp_int"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038968, VkglTestCase_038968_1, VkglTestCase_038968_2);

#define VkglTestCase_038969_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_038969_2 "out.basic.int.rg16i_highp_ivec2"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038969, VkglTestCase_038969_1, VkglTestCase_038969_2);

#define VkglTestCase_038970_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_038970_2 "out.basic.int.rg16i_highp_ivec3"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038970, VkglTestCase_038970_1, VkglTestCase_038970_2);

#define VkglTestCase_038971_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_038971_2 "out.basic.int.rg16i_highp_ivec4"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038971, VkglTestCase_038971_1, VkglTestCase_038971_2);

#define VkglTestCase_038972_1 "dEQP-GLES3.functional.fragmen"
#define VkglTestCase_038972_2 "t_out.basic.int.rg8i_lowp_int"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038972, VkglTestCase_038972_1, VkglTestCase_038972_2);

#define VkglTestCase_038973_1 "dEQP-GLES3.functional.fragment"
#define VkglTestCase_038973_2 "_out.basic.int.rg8i_lowp_ivec2"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038973, VkglTestCase_038973_1, VkglTestCase_038973_2);

#define VkglTestCase_038974_1 "dEQP-GLES3.functional.fragment"
#define VkglTestCase_038974_2 "_out.basic.int.rg8i_lowp_ivec3"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038974, VkglTestCase_038974_1, VkglTestCase_038974_2);

#define VkglTestCase_038975_1 "dEQP-GLES3.functional.fragment"
#define VkglTestCase_038975_2 "_out.basic.int.rg8i_lowp_ivec4"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038975, VkglTestCase_038975_1, VkglTestCase_038975_2);

#define VkglTestCase_038976_1 "dEQP-GLES3.functional.fragment"
#define VkglTestCase_038976_2 "_out.basic.int.rg8i_mediump_int"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038976, VkglTestCase_038976_1, VkglTestCase_038976_2);

#define VkglTestCase_038977_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_038977_2 "out.basic.int.rg8i_mediump_ivec2"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038977, VkglTestCase_038977_1, VkglTestCase_038977_2);

#define VkglTestCase_038978_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_038978_2 "out.basic.int.rg8i_mediump_ivec3"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038978, VkglTestCase_038978_1, VkglTestCase_038978_2);

#define VkglTestCase_038979_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_038979_2 "out.basic.int.rg8i_mediump_ivec4"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038979, VkglTestCase_038979_1, VkglTestCase_038979_2);

#define VkglTestCase_038980_1 "dEQP-GLES3.functional.fragmen"
#define VkglTestCase_038980_2 "t_out.basic.int.rg8i_highp_int"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038980, VkglTestCase_038980_1, VkglTestCase_038980_2);

#define VkglTestCase_038981_1 "dEQP-GLES3.functional.fragment"
#define VkglTestCase_038981_2 "_out.basic.int.rg8i_highp_ivec2"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038981, VkglTestCase_038981_1, VkglTestCase_038981_2);

#define VkglTestCase_038982_1 "dEQP-GLES3.functional.fragment"
#define VkglTestCase_038982_2 "_out.basic.int.rg8i_highp_ivec3"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038982, VkglTestCase_038982_1, VkglTestCase_038982_2);

#define VkglTestCase_038983_1 "dEQP-GLES3.functional.fragment"
#define VkglTestCase_038983_2 "_out.basic.int.rg8i_highp_ivec4"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038983, VkglTestCase_038983_1, VkglTestCase_038983_2);

#define VkglTestCase_038984_1 "dEQP-GLES3.functional.fragmen"
#define VkglTestCase_038984_2 "t_out.basic.int.r32i_lowp_int"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038984, VkglTestCase_038984_1, VkglTestCase_038984_2);

#define VkglTestCase_038985_1 "dEQP-GLES3.functional.fragment"
#define VkglTestCase_038985_2 "_out.basic.int.r32i_lowp_ivec2"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038985, VkglTestCase_038985_1, VkglTestCase_038985_2);

#define VkglTestCase_038986_1 "dEQP-GLES3.functional.fragment"
#define VkglTestCase_038986_2 "_out.basic.int.r32i_lowp_ivec3"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038986, VkglTestCase_038986_1, VkglTestCase_038986_2);

#define VkglTestCase_038987_1 "dEQP-GLES3.functional.fragment"
#define VkglTestCase_038987_2 "_out.basic.int.r32i_lowp_ivec4"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038987, VkglTestCase_038987_1, VkglTestCase_038987_2);

#define VkglTestCase_038988_1 "dEQP-GLES3.functional.fragment"
#define VkglTestCase_038988_2 "_out.basic.int.r32i_mediump_int"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038988, VkglTestCase_038988_1, VkglTestCase_038988_2);

#define VkglTestCase_038989_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_038989_2 "out.basic.int.r32i_mediump_ivec2"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038989, VkglTestCase_038989_1, VkglTestCase_038989_2);

#define VkglTestCase_038990_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_038990_2 "out.basic.int.r32i_mediump_ivec3"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038990, VkglTestCase_038990_1, VkglTestCase_038990_2);

#define VkglTestCase_038991_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_038991_2 "out.basic.int.r32i_mediump_ivec4"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038991, VkglTestCase_038991_1, VkglTestCase_038991_2);

#define VkglTestCase_038992_1 "dEQP-GLES3.functional.fragmen"
#define VkglTestCase_038992_2 "t_out.basic.int.r32i_highp_int"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038992, VkglTestCase_038992_1, VkglTestCase_038992_2);

#define VkglTestCase_038993_1 "dEQP-GLES3.functional.fragment"
#define VkglTestCase_038993_2 "_out.basic.int.r32i_highp_ivec2"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038993, VkglTestCase_038993_1, VkglTestCase_038993_2);

#define VkglTestCase_038994_1 "dEQP-GLES3.functional.fragment"
#define VkglTestCase_038994_2 "_out.basic.int.r32i_highp_ivec3"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038994, VkglTestCase_038994_1, VkglTestCase_038994_2);

#define VkglTestCase_038995_1 "dEQP-GLES3.functional.fragment"
#define VkglTestCase_038995_2 "_out.basic.int.r32i_highp_ivec4"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038995, VkglTestCase_038995_1, VkglTestCase_038995_2);

#define VkglTestCase_038996_1 "dEQP-GLES3.functional.fragmen"
#define VkglTestCase_038996_2 "t_out.basic.int.r16i_lowp_int"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038996, VkglTestCase_038996_1, VkglTestCase_038996_2);

#define VkglTestCase_038997_1 "dEQP-GLES3.functional.fragment"
#define VkglTestCase_038997_2 "_out.basic.int.r16i_lowp_ivec2"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038997, VkglTestCase_038997_1, VkglTestCase_038997_2);

#define VkglTestCase_038998_1 "dEQP-GLES3.functional.fragment"
#define VkglTestCase_038998_2 "_out.basic.int.r16i_lowp_ivec3"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038998, VkglTestCase_038998_1, VkglTestCase_038998_2);

#define VkglTestCase_038999_1 "dEQP-GLES3.functional.fragment"
#define VkglTestCase_038999_2 "_out.basic.int.r16i_lowp_ivec4"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038999, VkglTestCase_038999_1, VkglTestCase_038999_2);

#define VkglTestCase_039000_1 "dEQP-GLES3.functional.fragment"
#define VkglTestCase_039000_2 "_out.basic.int.r16i_mediump_int"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_039000, VkglTestCase_039000_1, VkglTestCase_039000_2);

#define VkglTestCase_039001_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_039001_2 "out.basic.int.r16i_mediump_ivec2"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_039001, VkglTestCase_039001_1, VkglTestCase_039001_2);

#define VkglTestCase_039002_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_039002_2 "out.basic.int.r16i_mediump_ivec3"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_039002, VkglTestCase_039002_1, VkglTestCase_039002_2);

#define VkglTestCase_039003_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_039003_2 "out.basic.int.r16i_mediump_ivec4"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_039003, VkglTestCase_039003_1, VkglTestCase_039003_2);

#define VkglTestCase_039004_1 "dEQP-GLES3.functional.fragmen"
#define VkglTestCase_039004_2 "t_out.basic.int.r16i_highp_int"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_039004, VkglTestCase_039004_1, VkglTestCase_039004_2);

#define VkglTestCase_039005_1 "dEQP-GLES3.functional.fragment"
#define VkglTestCase_039005_2 "_out.basic.int.r16i_highp_ivec2"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_039005, VkglTestCase_039005_1, VkglTestCase_039005_2);

#define VkglTestCase_039006_1 "dEQP-GLES3.functional.fragment"
#define VkglTestCase_039006_2 "_out.basic.int.r16i_highp_ivec3"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_039006, VkglTestCase_039006_1, VkglTestCase_039006_2);

#define VkglTestCase_039007_1 "dEQP-GLES3.functional.fragment"
#define VkglTestCase_039007_2 "_out.basic.int.r16i_highp_ivec4"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_039007, VkglTestCase_039007_1, VkglTestCase_039007_2);

#define VkglTestCase_039008_1 "dEQP-GLES3.functional.fragme"
#define VkglTestCase_039008_2 "nt_out.basic.int.r8i_lowp_int"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_039008, VkglTestCase_039008_1, VkglTestCase_039008_2);

#define VkglTestCase_039009_1 "dEQP-GLES3.functional.fragmen"
#define VkglTestCase_039009_2 "t_out.basic.int.r8i_lowp_ivec2"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_039009, VkglTestCase_039009_1, VkglTestCase_039009_2);

#define VkglTestCase_039010_1 "dEQP-GLES3.functional.fragmen"
#define VkglTestCase_039010_2 "t_out.basic.int.r8i_lowp_ivec3"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_039010, VkglTestCase_039010_1, VkglTestCase_039010_2);

#define VkglTestCase_039011_1 "dEQP-GLES3.functional.fragmen"
#define VkglTestCase_039011_2 "t_out.basic.int.r8i_lowp_ivec4"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_039011, VkglTestCase_039011_1, VkglTestCase_039011_2);

#define VkglTestCase_039012_1 "dEQP-GLES3.functional.fragment"
#define VkglTestCase_039012_2 "_out.basic.int.r8i_mediump_int"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_039012, VkglTestCase_039012_1, VkglTestCase_039012_2);

#define VkglTestCase_039013_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_039013_2 "out.basic.int.r8i_mediump_ivec2"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_039013, VkglTestCase_039013_1, VkglTestCase_039013_2);

#define VkglTestCase_039014_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_039014_2 "out.basic.int.r8i_mediump_ivec3"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_039014, VkglTestCase_039014_1, VkglTestCase_039014_2);

#define VkglTestCase_039015_1 "dEQP-GLES3.functional.fragment_"
#define VkglTestCase_039015_2 "out.basic.int.r8i_mediump_ivec4"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_039015, VkglTestCase_039015_1, VkglTestCase_039015_2);

#define VkglTestCase_039016_1 "dEQP-GLES3.functional.fragmen"
#define VkglTestCase_039016_2 "t_out.basic.int.r8i_highp_int"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_039016, VkglTestCase_039016_1, VkglTestCase_039016_2);

#define VkglTestCase_039017_1 "dEQP-GLES3.functional.fragment"
#define VkglTestCase_039017_2 "_out.basic.int.r8i_highp_ivec2"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_039017, VkglTestCase_039017_1, VkglTestCase_039017_2);

#define VkglTestCase_039018_1 "dEQP-GLES3.functional.fragment"
#define VkglTestCase_039018_2 "_out.basic.int.r8i_highp_ivec3"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_039018, VkglTestCase_039018_1, VkglTestCase_039018_2);

#define VkglTestCase_039019_1 "dEQP-GLES3.functional.fragment"
#define VkglTestCase_039019_2 "_out.basic.int.r8i_highp_ivec4"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_039019, VkglTestCase_039019_1, VkglTestCase_039019_2);
