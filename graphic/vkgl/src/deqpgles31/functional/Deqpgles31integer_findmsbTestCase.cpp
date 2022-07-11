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

#define VkglTestCase_001953_1 "dEQP-GLES31.functional.shaders.builtin_f"
#define VkglTestCase_001953_2 "unctions.integer.findmsb.int_lowp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001953, VkglTestCase_001953_1, VkglTestCase_001953_2);

#define VkglTestCase_001954_1 "dEQP-GLES31.functional.shaders.builtin_fu"
#define VkglTestCase_001954_2 "nctions.integer.findmsb.int_lowp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001954, VkglTestCase_001954_1, VkglTestCase_001954_2);

#define VkglTestCase_001955_1 "dEQP-GLES31.functional.shaders.builtin_fu"
#define VkglTestCase_001955_2 "nctions.integer.findmsb.int_lowp_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001955, VkglTestCase_001955_1, VkglTestCase_001955_2);

#define VkglTestCase_001956_1 "dEQP-GLES31.functional.shaders.builtin_func"
#define VkglTestCase_001956_2 "tions.integer.findmsb.int_lowp_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001956, VkglTestCase_001956_1, VkglTestCase_001956_2);

#define VkglTestCase_001957_1 "dEQP-GLES31.functional.shaders.builtin_fu"
#define VkglTestCase_001957_2 "nctions.integer.findmsb.int_lowp_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001957, VkglTestCase_001957_1, VkglTestCase_001957_2);

#define VkglTestCase_001958_1 "dEQP-GLES31.functional.shaders.builtin_f"
#define VkglTestCase_001958_2 "unctions.integer.findmsb.int_lowp_compute"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001958, VkglTestCase_001958_1, VkglTestCase_001958_2);

#define VkglTestCase_001959_1 "dEQP-GLES31.functional.shaders.builtin_fu"
#define VkglTestCase_001959_2 "nctions.integer.findmsb.int_mediump_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001959, VkglTestCase_001959_1, VkglTestCase_001959_2);

#define VkglTestCase_001960_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_001960_2 "ctions.integer.findmsb.int_mediump_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001960, VkglTestCase_001960_1, VkglTestCase_001960_2);

#define VkglTestCase_001961_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_001961_2 "ctions.integer.findmsb.int_mediump_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001961, VkglTestCase_001961_1, VkglTestCase_001961_2);

#define VkglTestCase_001962_1 "dEQP-GLES31.functional.shaders.builtin_funct"
#define VkglTestCase_001962_2 "ions.integer.findmsb.int_mediump_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001962, VkglTestCase_001962_1, VkglTestCase_001962_2);

#define VkglTestCase_001963_1 "dEQP-GLES31.functional.shaders.builtin_func"
#define VkglTestCase_001963_2 "tions.integer.findmsb.int_mediump_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001963, VkglTestCase_001963_1, VkglTestCase_001963_2);

#define VkglTestCase_001964_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_001964_2 "ctions.integer.findmsb.int_mediump_compute"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001964, VkglTestCase_001964_1, VkglTestCase_001964_2);

#define VkglTestCase_001965_1 "dEQP-GLES31.functional.shaders.builtin_f"
#define VkglTestCase_001965_2 "unctions.integer.findmsb.int_highp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001965, VkglTestCase_001965_1, VkglTestCase_001965_2);

#define VkglTestCase_001966_1 "dEQP-GLES31.functional.shaders.builtin_fu"
#define VkglTestCase_001966_2 "nctions.integer.findmsb.int_highp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001966, VkglTestCase_001966_1, VkglTestCase_001966_2);

#define VkglTestCase_001967_1 "dEQP-GLES31.functional.shaders.builtin_fu"
#define VkglTestCase_001967_2 "nctions.integer.findmsb.int_highp_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001967, VkglTestCase_001967_1, VkglTestCase_001967_2);

#define VkglTestCase_001968_1 "dEQP-GLES31.functional.shaders.builtin_func"
#define VkglTestCase_001968_2 "tions.integer.findmsb.int_highp_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001968, VkglTestCase_001968_1, VkglTestCase_001968_2);

#define VkglTestCase_001969_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_001969_2 "ctions.integer.findmsb.int_highp_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001969, VkglTestCase_001969_1, VkglTestCase_001969_2);

#define VkglTestCase_001970_1 "dEQP-GLES31.functional.shaders.builtin_fu"
#define VkglTestCase_001970_2 "nctions.integer.findmsb.int_highp_compute"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001970, VkglTestCase_001970_1, VkglTestCase_001970_2);

#define VkglTestCase_001971_1 "dEQP-GLES31.functional.shaders.builtin_fu"
#define VkglTestCase_001971_2 "nctions.integer.findmsb.ivec2_lowp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001971, VkglTestCase_001971_1, VkglTestCase_001971_2);

#define VkglTestCase_001972_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_001972_2 "ctions.integer.findmsb.ivec2_lowp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001972, VkglTestCase_001972_1, VkglTestCase_001972_2);

#define VkglTestCase_001973_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_001973_2 "ctions.integer.findmsb.ivec2_lowp_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001973, VkglTestCase_001973_1, VkglTestCase_001973_2);

#define VkglTestCase_001974_1 "dEQP-GLES31.functional.shaders.builtin_funct"
#define VkglTestCase_001974_2 "ions.integer.findmsb.ivec2_lowp_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001974, VkglTestCase_001974_1, VkglTestCase_001974_2);

#define VkglTestCase_001975_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_001975_2 "ctions.integer.findmsb.ivec2_lowp_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001975, VkglTestCase_001975_1, VkglTestCase_001975_2);

#define VkglTestCase_001976_1 "dEQP-GLES31.functional.shaders.builtin_fu"
#define VkglTestCase_001976_2 "nctions.integer.findmsb.ivec2_lowp_compute"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001976, VkglTestCase_001976_1, VkglTestCase_001976_2);

#define VkglTestCase_001977_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_001977_2 "ctions.integer.findmsb.ivec2_mediump_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001977, VkglTestCase_001977_1, VkglTestCase_001977_2);

#define VkglTestCase_001978_1 "dEQP-GLES31.functional.shaders.builtin_func"
#define VkglTestCase_001978_2 "tions.integer.findmsb.ivec2_mediump_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001978, VkglTestCase_001978_1, VkglTestCase_001978_2);

#define VkglTestCase_001979_1 "dEQP-GLES31.functional.shaders.builtin_func"
#define VkglTestCase_001979_2 "tions.integer.findmsb.ivec2_mediump_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001979, VkglTestCase_001979_1, VkglTestCase_001979_2);

#define VkglTestCase_001980_1 "dEQP-GLES31.functional.shaders.builtin_functi"
#define VkglTestCase_001980_2 "ons.integer.findmsb.ivec2_mediump_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001980, VkglTestCase_001980_1, VkglTestCase_001980_2);

#define VkglTestCase_001981_1 "dEQP-GLES31.functional.shaders.builtin_funct"
#define VkglTestCase_001981_2 "ions.integer.findmsb.ivec2_mediump_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001981, VkglTestCase_001981_1, VkglTestCase_001981_2);

#define VkglTestCase_001982_1 "dEQP-GLES31.functional.shaders.builtin_func"
#define VkglTestCase_001982_2 "tions.integer.findmsb.ivec2_mediump_compute"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001982, VkglTestCase_001982_1, VkglTestCase_001982_2);

#define VkglTestCase_001983_1 "dEQP-GLES31.functional.shaders.builtin_fu"
#define VkglTestCase_001983_2 "nctions.integer.findmsb.ivec2_highp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001983, VkglTestCase_001983_1, VkglTestCase_001983_2);

#define VkglTestCase_001984_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_001984_2 "ctions.integer.findmsb.ivec2_highp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001984, VkglTestCase_001984_1, VkglTestCase_001984_2);

#define VkglTestCase_001985_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_001985_2 "ctions.integer.findmsb.ivec2_highp_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001985, VkglTestCase_001985_1, VkglTestCase_001985_2);

#define VkglTestCase_001986_1 "dEQP-GLES31.functional.shaders.builtin_funct"
#define VkglTestCase_001986_2 "ions.integer.findmsb.ivec2_highp_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001986, VkglTestCase_001986_1, VkglTestCase_001986_2);

#define VkglTestCase_001987_1 "dEQP-GLES31.functional.shaders.builtin_func"
#define VkglTestCase_001987_2 "tions.integer.findmsb.ivec2_highp_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001987, VkglTestCase_001987_1, VkglTestCase_001987_2);

#define VkglTestCase_001988_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_001988_2 "ctions.integer.findmsb.ivec2_highp_compute"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001988, VkglTestCase_001988_1, VkglTestCase_001988_2);

#define VkglTestCase_001989_1 "dEQP-GLES31.functional.shaders.builtin_fu"
#define VkglTestCase_001989_2 "nctions.integer.findmsb.ivec3_lowp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001989, VkglTestCase_001989_1, VkglTestCase_001989_2);

#define VkglTestCase_001990_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_001990_2 "ctions.integer.findmsb.ivec3_lowp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001990, VkglTestCase_001990_1, VkglTestCase_001990_2);

#define VkglTestCase_001991_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_001991_2 "ctions.integer.findmsb.ivec3_lowp_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001991, VkglTestCase_001991_1, VkglTestCase_001991_2);

#define VkglTestCase_001992_1 "dEQP-GLES31.functional.shaders.builtin_funct"
#define VkglTestCase_001992_2 "ions.integer.findmsb.ivec3_lowp_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001992, VkglTestCase_001992_1, VkglTestCase_001992_2);

#define VkglTestCase_001993_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_001993_2 "ctions.integer.findmsb.ivec3_lowp_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001993, VkglTestCase_001993_1, VkglTestCase_001993_2);

#define VkglTestCase_001994_1 "dEQP-GLES31.functional.shaders.builtin_fu"
#define VkglTestCase_001994_2 "nctions.integer.findmsb.ivec3_lowp_compute"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001994, VkglTestCase_001994_1, VkglTestCase_001994_2);

#define VkglTestCase_001995_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_001995_2 "ctions.integer.findmsb.ivec3_mediump_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001995, VkglTestCase_001995_1, VkglTestCase_001995_2);

#define VkglTestCase_001996_1 "dEQP-GLES31.functional.shaders.builtin_func"
#define VkglTestCase_001996_2 "tions.integer.findmsb.ivec3_mediump_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001996, VkglTestCase_001996_1, VkglTestCase_001996_2);

#define VkglTestCase_001997_1 "dEQP-GLES31.functional.shaders.builtin_func"
#define VkglTestCase_001997_2 "tions.integer.findmsb.ivec3_mediump_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001997, VkglTestCase_001997_1, VkglTestCase_001997_2);

#define VkglTestCase_001998_1 "dEQP-GLES31.functional.shaders.builtin_functi"
#define VkglTestCase_001998_2 "ons.integer.findmsb.ivec3_mediump_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001998, VkglTestCase_001998_1, VkglTestCase_001998_2);

#define VkglTestCase_001999_1 "dEQP-GLES31.functional.shaders.builtin_funct"
#define VkglTestCase_001999_2 "ions.integer.findmsb.ivec3_mediump_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001999, VkglTestCase_001999_1, VkglTestCase_001999_2);

#define VkglTestCase_002000_1 "dEQP-GLES31.functional.shaders.builtin_func"
#define VkglTestCase_002000_2 "tions.integer.findmsb.ivec3_mediump_compute"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_002000, VkglTestCase_002000_1, VkglTestCase_002000_2);

#define VkglTestCase_002001_1 "dEQP-GLES31.functional.shaders.builtin_fu"
#define VkglTestCase_002001_2 "nctions.integer.findmsb.ivec3_highp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_002001, VkglTestCase_002001_1, VkglTestCase_002001_2);

#define VkglTestCase_002002_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_002002_2 "ctions.integer.findmsb.ivec3_highp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_002002, VkglTestCase_002002_1, VkglTestCase_002002_2);

#define VkglTestCase_002003_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_002003_2 "ctions.integer.findmsb.ivec3_highp_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_002003, VkglTestCase_002003_1, VkglTestCase_002003_2);

#define VkglTestCase_002004_1 "dEQP-GLES31.functional.shaders.builtin_funct"
#define VkglTestCase_002004_2 "ions.integer.findmsb.ivec3_highp_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_002004, VkglTestCase_002004_1, VkglTestCase_002004_2);

#define VkglTestCase_002005_1 "dEQP-GLES31.functional.shaders.builtin_func"
#define VkglTestCase_002005_2 "tions.integer.findmsb.ivec3_highp_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_002005, VkglTestCase_002005_1, VkglTestCase_002005_2);

#define VkglTestCase_002006_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_002006_2 "ctions.integer.findmsb.ivec3_highp_compute"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_002006, VkglTestCase_002006_1, VkglTestCase_002006_2);

#define VkglTestCase_002007_1 "dEQP-GLES31.functional.shaders.builtin_fu"
#define VkglTestCase_002007_2 "nctions.integer.findmsb.ivec4_lowp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_002007, VkglTestCase_002007_1, VkglTestCase_002007_2);

#define VkglTestCase_002008_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_002008_2 "ctions.integer.findmsb.ivec4_lowp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_002008, VkglTestCase_002008_1, VkglTestCase_002008_2);

#define VkglTestCase_002009_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_002009_2 "ctions.integer.findmsb.ivec4_lowp_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_002009, VkglTestCase_002009_1, VkglTestCase_002009_2);

#define VkglTestCase_002010_1 "dEQP-GLES31.functional.shaders.builtin_funct"
#define VkglTestCase_002010_2 "ions.integer.findmsb.ivec4_lowp_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_002010, VkglTestCase_002010_1, VkglTestCase_002010_2);

#define VkglTestCase_002011_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_002011_2 "ctions.integer.findmsb.ivec4_lowp_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_002011, VkglTestCase_002011_1, VkglTestCase_002011_2);

#define VkglTestCase_002012_1 "dEQP-GLES31.functional.shaders.builtin_fu"
#define VkglTestCase_002012_2 "nctions.integer.findmsb.ivec4_lowp_compute"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_002012, VkglTestCase_002012_1, VkglTestCase_002012_2);

#define VkglTestCase_002013_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_002013_2 "ctions.integer.findmsb.ivec4_mediump_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_002013, VkglTestCase_002013_1, VkglTestCase_002013_2);

#define VkglTestCase_002014_1 "dEQP-GLES31.functional.shaders.builtin_func"
#define VkglTestCase_002014_2 "tions.integer.findmsb.ivec4_mediump_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_002014, VkglTestCase_002014_1, VkglTestCase_002014_2);

#define VkglTestCase_002015_1 "dEQP-GLES31.functional.shaders.builtin_func"
#define VkglTestCase_002015_2 "tions.integer.findmsb.ivec4_mediump_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_002015, VkglTestCase_002015_1, VkglTestCase_002015_2);

#define VkglTestCase_002016_1 "dEQP-GLES31.functional.shaders.builtin_functi"
#define VkglTestCase_002016_2 "ons.integer.findmsb.ivec4_mediump_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_002016, VkglTestCase_002016_1, VkglTestCase_002016_2);

#define VkglTestCase_002017_1 "dEQP-GLES31.functional.shaders.builtin_funct"
#define VkglTestCase_002017_2 "ions.integer.findmsb.ivec4_mediump_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_002017, VkglTestCase_002017_1, VkglTestCase_002017_2);

#define VkglTestCase_002018_1 "dEQP-GLES31.functional.shaders.builtin_func"
#define VkglTestCase_002018_2 "tions.integer.findmsb.ivec4_mediump_compute"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_002018, VkglTestCase_002018_1, VkglTestCase_002018_2);

#define VkglTestCase_002019_1 "dEQP-GLES31.functional.shaders.builtin_fu"
#define VkglTestCase_002019_2 "nctions.integer.findmsb.ivec4_highp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_002019, VkglTestCase_002019_1, VkglTestCase_002019_2);

#define VkglTestCase_002020_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_002020_2 "ctions.integer.findmsb.ivec4_highp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_002020, VkglTestCase_002020_1, VkglTestCase_002020_2);

#define VkglTestCase_002021_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_002021_2 "ctions.integer.findmsb.ivec4_highp_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_002021, VkglTestCase_002021_1, VkglTestCase_002021_2);

#define VkglTestCase_002022_1 "dEQP-GLES31.functional.shaders.builtin_funct"
#define VkglTestCase_002022_2 "ions.integer.findmsb.ivec4_highp_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_002022, VkglTestCase_002022_1, VkglTestCase_002022_2);

#define VkglTestCase_002023_1 "dEQP-GLES31.functional.shaders.builtin_func"
#define VkglTestCase_002023_2 "tions.integer.findmsb.ivec4_highp_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_002023, VkglTestCase_002023_1, VkglTestCase_002023_2);

#define VkglTestCase_002024_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_002024_2 "ctions.integer.findmsb.ivec4_highp_compute"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_002024, VkglTestCase_002024_1, VkglTestCase_002024_2);

#define VkglTestCase_002025_1 "dEQP-GLES31.functional.shaders.builtin_f"
#define VkglTestCase_002025_2 "unctions.integer.findmsb.uint_lowp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_002025, VkglTestCase_002025_1, VkglTestCase_002025_2);

#define VkglTestCase_002026_1 "dEQP-GLES31.functional.shaders.builtin_fu"
#define VkglTestCase_002026_2 "nctions.integer.findmsb.uint_lowp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_002026, VkglTestCase_002026_1, VkglTestCase_002026_2);

#define VkglTestCase_002027_1 "dEQP-GLES31.functional.shaders.builtin_fu"
#define VkglTestCase_002027_2 "nctions.integer.findmsb.uint_lowp_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_002027, VkglTestCase_002027_1, VkglTestCase_002027_2);

#define VkglTestCase_002028_1 "dEQP-GLES31.functional.shaders.builtin_func"
#define VkglTestCase_002028_2 "tions.integer.findmsb.uint_lowp_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_002028, VkglTestCase_002028_1, VkglTestCase_002028_2);

#define VkglTestCase_002029_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_002029_2 "ctions.integer.findmsb.uint_lowp_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_002029, VkglTestCase_002029_1, VkglTestCase_002029_2);

#define VkglTestCase_002030_1 "dEQP-GLES31.functional.shaders.builtin_fu"
#define VkglTestCase_002030_2 "nctions.integer.findmsb.uint_lowp_compute"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_002030, VkglTestCase_002030_1, VkglTestCase_002030_2);

#define VkglTestCase_002031_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_002031_2 "ctions.integer.findmsb.uint_mediump_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_002031, VkglTestCase_002031_1, VkglTestCase_002031_2);

#define VkglTestCase_002032_1 "dEQP-GLES31.functional.shaders.builtin_func"
#define VkglTestCase_002032_2 "tions.integer.findmsb.uint_mediump_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_002032, VkglTestCase_002032_1, VkglTestCase_002032_2);

#define VkglTestCase_002033_1 "dEQP-GLES31.functional.shaders.builtin_func"
#define VkglTestCase_002033_2 "tions.integer.findmsb.uint_mediump_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_002033, VkglTestCase_002033_1, VkglTestCase_002033_2);

#define VkglTestCase_002034_1 "dEQP-GLES31.functional.shaders.builtin_functi"
#define VkglTestCase_002034_2 "ons.integer.findmsb.uint_mediump_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_002034, VkglTestCase_002034_1, VkglTestCase_002034_2);

#define VkglTestCase_002035_1 "dEQP-GLES31.functional.shaders.builtin_func"
#define VkglTestCase_002035_2 "tions.integer.findmsb.uint_mediump_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_002035, VkglTestCase_002035_1, VkglTestCase_002035_2);

#define VkglTestCase_002036_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_002036_2 "ctions.integer.findmsb.uint_mediump_compute"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_002036, VkglTestCase_002036_1, VkglTestCase_002036_2);

#define VkglTestCase_002037_1 "dEQP-GLES31.functional.shaders.builtin_fu"
#define VkglTestCase_002037_2 "nctions.integer.findmsb.uint_highp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_002037, VkglTestCase_002037_1, VkglTestCase_002037_2);

#define VkglTestCase_002038_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_002038_2 "ctions.integer.findmsb.uint_highp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_002038, VkglTestCase_002038_1, VkglTestCase_002038_2);

#define VkglTestCase_002039_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_002039_2 "ctions.integer.findmsb.uint_highp_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_002039, VkglTestCase_002039_1, VkglTestCase_002039_2);

#define VkglTestCase_002040_1 "dEQP-GLES31.functional.shaders.builtin_funct"
#define VkglTestCase_002040_2 "ions.integer.findmsb.uint_highp_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_002040, VkglTestCase_002040_1, VkglTestCase_002040_2);

#define VkglTestCase_002041_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_002041_2 "ctions.integer.findmsb.uint_highp_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_002041, VkglTestCase_002041_1, VkglTestCase_002041_2);

#define VkglTestCase_002042_1 "dEQP-GLES31.functional.shaders.builtin_fu"
#define VkglTestCase_002042_2 "nctions.integer.findmsb.uint_highp_compute"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_002042, VkglTestCase_002042_1, VkglTestCase_002042_2);

#define VkglTestCase_002043_1 "dEQP-GLES31.functional.shaders.builtin_fu"
#define VkglTestCase_002043_2 "nctions.integer.findmsb.uvec2_lowp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_002043, VkglTestCase_002043_1, VkglTestCase_002043_2);

#define VkglTestCase_002044_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_002044_2 "ctions.integer.findmsb.uvec2_lowp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_002044, VkglTestCase_002044_1, VkglTestCase_002044_2);

#define VkglTestCase_002045_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_002045_2 "ctions.integer.findmsb.uvec2_lowp_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_002045, VkglTestCase_002045_1, VkglTestCase_002045_2);

#define VkglTestCase_002046_1 "dEQP-GLES31.functional.shaders.builtin_funct"
#define VkglTestCase_002046_2 "ions.integer.findmsb.uvec2_lowp_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_002046, VkglTestCase_002046_1, VkglTestCase_002046_2);

#define VkglTestCase_002047_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_002047_2 "ctions.integer.findmsb.uvec2_lowp_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_002047, VkglTestCase_002047_1, VkglTestCase_002047_2);

#define VkglTestCase_002048_1 "dEQP-GLES31.functional.shaders.builtin_fu"
#define VkglTestCase_002048_2 "nctions.integer.findmsb.uvec2_lowp_compute"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_002048, VkglTestCase_002048_1, VkglTestCase_002048_2);

#define VkglTestCase_002049_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_002049_2 "ctions.integer.findmsb.uvec2_mediump_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_002049, VkglTestCase_002049_1, VkglTestCase_002049_2);

#define VkglTestCase_002050_1 "dEQP-GLES31.functional.shaders.builtin_func"
#define VkglTestCase_002050_2 "tions.integer.findmsb.uvec2_mediump_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_002050, VkglTestCase_002050_1, VkglTestCase_002050_2);

#define VkglTestCase_002051_1 "dEQP-GLES31.functional.shaders.builtin_func"
#define VkglTestCase_002051_2 "tions.integer.findmsb.uvec2_mediump_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_002051, VkglTestCase_002051_1, VkglTestCase_002051_2);

#define VkglTestCase_002052_1 "dEQP-GLES31.functional.shaders.builtin_functi"
#define VkglTestCase_002052_2 "ons.integer.findmsb.uvec2_mediump_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_002052, VkglTestCase_002052_1, VkglTestCase_002052_2);

#define VkglTestCase_002053_1 "dEQP-GLES31.functional.shaders.builtin_funct"
#define VkglTestCase_002053_2 "ions.integer.findmsb.uvec2_mediump_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_002053, VkglTestCase_002053_1, VkglTestCase_002053_2);

#define VkglTestCase_002054_1 "dEQP-GLES31.functional.shaders.builtin_func"
#define VkglTestCase_002054_2 "tions.integer.findmsb.uvec2_mediump_compute"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_002054, VkglTestCase_002054_1, VkglTestCase_002054_2);

#define VkglTestCase_002055_1 "dEQP-GLES31.functional.shaders.builtin_fu"
#define VkglTestCase_002055_2 "nctions.integer.findmsb.uvec2_highp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_002055, VkglTestCase_002055_1, VkglTestCase_002055_2);

#define VkglTestCase_002056_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_002056_2 "ctions.integer.findmsb.uvec2_highp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_002056, VkglTestCase_002056_1, VkglTestCase_002056_2);

#define VkglTestCase_002057_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_002057_2 "ctions.integer.findmsb.uvec2_highp_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_002057, VkglTestCase_002057_1, VkglTestCase_002057_2);

#define VkglTestCase_002058_1 "dEQP-GLES31.functional.shaders.builtin_funct"
#define VkglTestCase_002058_2 "ions.integer.findmsb.uvec2_highp_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_002058, VkglTestCase_002058_1, VkglTestCase_002058_2);

#define VkglTestCase_002059_1 "dEQP-GLES31.functional.shaders.builtin_func"
#define VkglTestCase_002059_2 "tions.integer.findmsb.uvec2_highp_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_002059, VkglTestCase_002059_1, VkglTestCase_002059_2);

#define VkglTestCase_002060_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_002060_2 "ctions.integer.findmsb.uvec2_highp_compute"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_002060, VkglTestCase_002060_1, VkglTestCase_002060_2);

#define VkglTestCase_002061_1 "dEQP-GLES31.functional.shaders.builtin_fu"
#define VkglTestCase_002061_2 "nctions.integer.findmsb.uvec3_lowp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_002061, VkglTestCase_002061_1, VkglTestCase_002061_2);

#define VkglTestCase_002062_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_002062_2 "ctions.integer.findmsb.uvec3_lowp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_002062, VkglTestCase_002062_1, VkglTestCase_002062_2);

#define VkglTestCase_002063_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_002063_2 "ctions.integer.findmsb.uvec3_lowp_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_002063, VkglTestCase_002063_1, VkglTestCase_002063_2);

#define VkglTestCase_002064_1 "dEQP-GLES31.functional.shaders.builtin_funct"
#define VkglTestCase_002064_2 "ions.integer.findmsb.uvec3_lowp_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_002064, VkglTestCase_002064_1, VkglTestCase_002064_2);

#define VkglTestCase_002065_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_002065_2 "ctions.integer.findmsb.uvec3_lowp_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_002065, VkglTestCase_002065_1, VkglTestCase_002065_2);

#define VkglTestCase_002066_1 "dEQP-GLES31.functional.shaders.builtin_fu"
#define VkglTestCase_002066_2 "nctions.integer.findmsb.uvec3_lowp_compute"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_002066, VkglTestCase_002066_1, VkglTestCase_002066_2);

#define VkglTestCase_002067_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_002067_2 "ctions.integer.findmsb.uvec3_mediump_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_002067, VkglTestCase_002067_1, VkglTestCase_002067_2);

#define VkglTestCase_002068_1 "dEQP-GLES31.functional.shaders.builtin_func"
#define VkglTestCase_002068_2 "tions.integer.findmsb.uvec3_mediump_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_002068, VkglTestCase_002068_1, VkglTestCase_002068_2);

#define VkglTestCase_002069_1 "dEQP-GLES31.functional.shaders.builtin_func"
#define VkglTestCase_002069_2 "tions.integer.findmsb.uvec3_mediump_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_002069, VkglTestCase_002069_1, VkglTestCase_002069_2);

#define VkglTestCase_002070_1 "dEQP-GLES31.functional.shaders.builtin_functi"
#define VkglTestCase_002070_2 "ons.integer.findmsb.uvec3_mediump_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_002070, VkglTestCase_002070_1, VkglTestCase_002070_2);

#define VkglTestCase_002071_1 "dEQP-GLES31.functional.shaders.builtin_funct"
#define VkglTestCase_002071_2 "ions.integer.findmsb.uvec3_mediump_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_002071, VkglTestCase_002071_1, VkglTestCase_002071_2);

#define VkglTestCase_002072_1 "dEQP-GLES31.functional.shaders.builtin_func"
#define VkglTestCase_002072_2 "tions.integer.findmsb.uvec3_mediump_compute"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_002072, VkglTestCase_002072_1, VkglTestCase_002072_2);

#define VkglTestCase_002073_1 "dEQP-GLES31.functional.shaders.builtin_fu"
#define VkglTestCase_002073_2 "nctions.integer.findmsb.uvec3_highp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_002073, VkglTestCase_002073_1, VkglTestCase_002073_2);

#define VkglTestCase_002074_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_002074_2 "ctions.integer.findmsb.uvec3_highp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_002074, VkglTestCase_002074_1, VkglTestCase_002074_2);

#define VkglTestCase_002075_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_002075_2 "ctions.integer.findmsb.uvec3_highp_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_002075, VkglTestCase_002075_1, VkglTestCase_002075_2);

#define VkglTestCase_002076_1 "dEQP-GLES31.functional.shaders.builtin_funct"
#define VkglTestCase_002076_2 "ions.integer.findmsb.uvec3_highp_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_002076, VkglTestCase_002076_1, VkglTestCase_002076_2);

#define VkglTestCase_002077_1 "dEQP-GLES31.functional.shaders.builtin_func"
#define VkglTestCase_002077_2 "tions.integer.findmsb.uvec3_highp_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_002077, VkglTestCase_002077_1, VkglTestCase_002077_2);

#define VkglTestCase_002078_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_002078_2 "ctions.integer.findmsb.uvec3_highp_compute"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_002078, VkglTestCase_002078_1, VkglTestCase_002078_2);

#define VkglTestCase_002079_1 "dEQP-GLES31.functional.shaders.builtin_fu"
#define VkglTestCase_002079_2 "nctions.integer.findmsb.uvec4_lowp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_002079, VkglTestCase_002079_1, VkglTestCase_002079_2);

#define VkglTestCase_002080_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_002080_2 "ctions.integer.findmsb.uvec4_lowp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_002080, VkglTestCase_002080_1, VkglTestCase_002080_2);

#define VkglTestCase_002081_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_002081_2 "ctions.integer.findmsb.uvec4_lowp_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_002081, VkglTestCase_002081_1, VkglTestCase_002081_2);

#define VkglTestCase_002082_1 "dEQP-GLES31.functional.shaders.builtin_funct"
#define VkglTestCase_002082_2 "ions.integer.findmsb.uvec4_lowp_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_002082, VkglTestCase_002082_1, VkglTestCase_002082_2);

#define VkglTestCase_002083_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_002083_2 "ctions.integer.findmsb.uvec4_lowp_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_002083, VkglTestCase_002083_1, VkglTestCase_002083_2);

#define VkglTestCase_002084_1 "dEQP-GLES31.functional.shaders.builtin_fu"
#define VkglTestCase_002084_2 "nctions.integer.findmsb.uvec4_lowp_compute"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_002084, VkglTestCase_002084_1, VkglTestCase_002084_2);

#define VkglTestCase_002085_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_002085_2 "ctions.integer.findmsb.uvec4_mediump_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_002085, VkglTestCase_002085_1, VkglTestCase_002085_2);

#define VkglTestCase_002086_1 "dEQP-GLES31.functional.shaders.builtin_func"
#define VkglTestCase_002086_2 "tions.integer.findmsb.uvec4_mediump_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_002086, VkglTestCase_002086_1, VkglTestCase_002086_2);

#define VkglTestCase_002087_1 "dEQP-GLES31.functional.shaders.builtin_func"
#define VkglTestCase_002087_2 "tions.integer.findmsb.uvec4_mediump_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_002087, VkglTestCase_002087_1, VkglTestCase_002087_2);

#define VkglTestCase_002088_1 "dEQP-GLES31.functional.shaders.builtin_functi"
#define VkglTestCase_002088_2 "ons.integer.findmsb.uvec4_mediump_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_002088, VkglTestCase_002088_1, VkglTestCase_002088_2);

#define VkglTestCase_002089_1 "dEQP-GLES31.functional.shaders.builtin_funct"
#define VkglTestCase_002089_2 "ions.integer.findmsb.uvec4_mediump_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_002089, VkglTestCase_002089_1, VkglTestCase_002089_2);

#define VkglTestCase_002090_1 "dEQP-GLES31.functional.shaders.builtin_func"
#define VkglTestCase_002090_2 "tions.integer.findmsb.uvec4_mediump_compute"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_002090, VkglTestCase_002090_1, VkglTestCase_002090_2);

#define VkglTestCase_002091_1 "dEQP-GLES31.functional.shaders.builtin_fu"
#define VkglTestCase_002091_2 "nctions.integer.findmsb.uvec4_highp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_002091, VkglTestCase_002091_1, VkglTestCase_002091_2);

#define VkglTestCase_002092_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_002092_2 "ctions.integer.findmsb.uvec4_highp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_002092, VkglTestCase_002092_1, VkglTestCase_002092_2);

#define VkglTestCase_002093_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_002093_2 "ctions.integer.findmsb.uvec4_highp_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_002093, VkglTestCase_002093_1, VkglTestCase_002093_2);

#define VkglTestCase_002094_1 "dEQP-GLES31.functional.shaders.builtin_funct"
#define VkglTestCase_002094_2 "ions.integer.findmsb.uvec4_highp_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_002094, VkglTestCase_002094_1, VkglTestCase_002094_2);

#define VkglTestCase_002095_1 "dEQP-GLES31.functional.shaders.builtin_func"
#define VkglTestCase_002095_2 "tions.integer.findmsb.uvec4_highp_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_002095, VkglTestCase_002095_1, VkglTestCase_002095_2);

#define VkglTestCase_002096_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_002096_2 "ctions.integer.findmsb.uvec4_highp_compute"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_002096, VkglTestCase_002096_1, VkglTestCase_002096_2);
