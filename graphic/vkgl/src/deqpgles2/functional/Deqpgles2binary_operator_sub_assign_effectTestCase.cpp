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
#include "../ActsDeqpgles20005TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_004978_1 "dEQP-GLES2.functional.shaders.operator.binary"
#define VkglTestCase_004978_2 "_operator.sub_assign_effect.lowp_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004978, VkglTestCase_004978_1, VkglTestCase_004978_2);

#define VkglTestCase_004979_1 "dEQP-GLES2.functional.shaders.operator.binary_"
#define VkglTestCase_004979_2 "operator.sub_assign_effect.lowp_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004979, VkglTestCase_004979_1, VkglTestCase_004979_2);

#define VkglTestCase_004980_1 "dEQP-GLES2.functional.shaders.operator.binary_"
#define VkglTestCase_004980_2 "operator.sub_assign_effect.mediump_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004980, VkglTestCase_004980_1, VkglTestCase_004980_2);

#define VkglTestCase_004981_1 "dEQP-GLES2.functional.shaders.operator.binary_o"
#define VkglTestCase_004981_2 "perator.sub_assign_effect.mediump_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004981, VkglTestCase_004981_1, VkglTestCase_004981_2);

#define VkglTestCase_004982_1 "dEQP-GLES2.functional.shaders.operator.binary"
#define VkglTestCase_004982_2 "_operator.sub_assign_effect.highp_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004982, VkglTestCase_004982_1, VkglTestCase_004982_2);

#define VkglTestCase_004983_1 "dEQP-GLES2.functional.shaders.operator.binary_"
#define VkglTestCase_004983_2 "operator.sub_assign_effect.highp_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004983, VkglTestCase_004983_1, VkglTestCase_004983_2);

#define VkglTestCase_004984_1 "dEQP-GLES2.functional.shaders.operator.binar"
#define VkglTestCase_004984_2 "y_operator.sub_assign_effect.lowp_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004984, VkglTestCase_004984_1, VkglTestCase_004984_2);

#define VkglTestCase_004985_1 "dEQP-GLES2.functional.shaders.operator.binary"
#define VkglTestCase_004985_2 "_operator.sub_assign_effect.lowp_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004985, VkglTestCase_004985_1, VkglTestCase_004985_2);

#define VkglTestCase_004986_1 "dEQP-GLES2.functional.shaders.operator.binary_"
#define VkglTestCase_004986_2 "operator.sub_assign_effect.mediump_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004986, VkglTestCase_004986_1, VkglTestCase_004986_2);

#define VkglTestCase_004987_1 "dEQP-GLES2.functional.shaders.operator.binary_o"
#define VkglTestCase_004987_2 "perator.sub_assign_effect.mediump_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004987, VkglTestCase_004987_1, VkglTestCase_004987_2);

#define VkglTestCase_004988_1 "dEQP-GLES2.functional.shaders.operator.binary"
#define VkglTestCase_004988_2 "_operator.sub_assign_effect.highp_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004988, VkglTestCase_004988_1, VkglTestCase_004988_2);

#define VkglTestCase_004989_1 "dEQP-GLES2.functional.shaders.operator.binary_"
#define VkglTestCase_004989_2 "operator.sub_assign_effect.highp_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004989, VkglTestCase_004989_1, VkglTestCase_004989_2);

#define VkglTestCase_004990_1 "dEQP-GLES2.functional.shaders.operator.binar"
#define VkglTestCase_004990_2 "y_operator.sub_assign_effect.lowp_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004990, VkglTestCase_004990_1, VkglTestCase_004990_2);

#define VkglTestCase_004991_1 "dEQP-GLES2.functional.shaders.operator.binary"
#define VkglTestCase_004991_2 "_operator.sub_assign_effect.lowp_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004991, VkglTestCase_004991_1, VkglTestCase_004991_2);

#define VkglTestCase_004992_1 "dEQP-GLES2.functional.shaders.operator.binary_"
#define VkglTestCase_004992_2 "operator.sub_assign_effect.mediump_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004992, VkglTestCase_004992_1, VkglTestCase_004992_2);

#define VkglTestCase_004993_1 "dEQP-GLES2.functional.shaders.operator.binary_o"
#define VkglTestCase_004993_2 "perator.sub_assign_effect.mediump_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004993, VkglTestCase_004993_1, VkglTestCase_004993_2);

#define VkglTestCase_004994_1 "dEQP-GLES2.functional.shaders.operator.binary"
#define VkglTestCase_004994_2 "_operator.sub_assign_effect.highp_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004994, VkglTestCase_004994_1, VkglTestCase_004994_2);

#define VkglTestCase_004995_1 "dEQP-GLES2.functional.shaders.operator.binary_"
#define VkglTestCase_004995_2 "operator.sub_assign_effect.highp_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004995, VkglTestCase_004995_1, VkglTestCase_004995_2);

#define VkglTestCase_004996_1 "dEQP-GLES2.functional.shaders.operator.binar"
#define VkglTestCase_004996_2 "y_operator.sub_assign_effect.lowp_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004996, VkglTestCase_004996_1, VkglTestCase_004996_2);

#define VkglTestCase_004997_1 "dEQP-GLES2.functional.shaders.operator.binary"
#define VkglTestCase_004997_2 "_operator.sub_assign_effect.lowp_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004997, VkglTestCase_004997_1, VkglTestCase_004997_2);

#define VkglTestCase_004998_1 "dEQP-GLES2.functional.shaders.operator.binary_"
#define VkglTestCase_004998_2 "operator.sub_assign_effect.mediump_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004998, VkglTestCase_004998_1, VkglTestCase_004998_2);

#define VkglTestCase_004999_1 "dEQP-GLES2.functional.shaders.operator.binary_o"
#define VkglTestCase_004999_2 "perator.sub_assign_effect.mediump_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004999, VkglTestCase_004999_1, VkglTestCase_004999_2);

#define VkglTestCase_005000_1 "dEQP-GLES2.functional.shaders.operator.binary"
#define VkglTestCase_005000_2 "_operator.sub_assign_effect.highp_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_005000, VkglTestCase_005000_1, VkglTestCase_005000_2);

#define VkglTestCase_005001_1 "dEQP-GLES2.functional.shaders.operator.binary_"
#define VkglTestCase_005001_2 "operator.sub_assign_effect.highp_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_005001, VkglTestCase_005001_1, VkglTestCase_005001_2);

#define VkglTestCase_005002_1 "dEQP-GLES2.functional.shaders.operator.binar"
#define VkglTestCase_005002_2 "y_operator.sub_assign_effect.lowp_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_005002, VkglTestCase_005002_1, VkglTestCase_005002_2);

#define VkglTestCase_005003_1 "dEQP-GLES2.functional.shaders.operator.binary"
#define VkglTestCase_005003_2 "_operator.sub_assign_effect.lowp_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_005003, VkglTestCase_005003_1, VkglTestCase_005003_2);

#define VkglTestCase_005004_1 "dEQP-GLES2.functional.shaders.operator.binary"
#define VkglTestCase_005004_2 "_operator.sub_assign_effect.mediump_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_005004, VkglTestCase_005004_1, VkglTestCase_005004_2);

#define VkglTestCase_005005_1 "dEQP-GLES2.functional.shaders.operator.binary_"
#define VkglTestCase_005005_2 "operator.sub_assign_effect.mediump_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_005005, VkglTestCase_005005_1, VkglTestCase_005005_2);

#define VkglTestCase_005006_1 "dEQP-GLES2.functional.shaders.operator.binar"
#define VkglTestCase_005006_2 "y_operator.sub_assign_effect.highp_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_005006, VkglTestCase_005006_1, VkglTestCase_005006_2);

#define VkglTestCase_005007_1 "dEQP-GLES2.functional.shaders.operator.binary"
#define VkglTestCase_005007_2 "_operator.sub_assign_effect.highp_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_005007, VkglTestCase_005007_1, VkglTestCase_005007_2);

#define VkglTestCase_005008_1 "dEQP-GLES2.functional.shaders.operator.binary"
#define VkglTestCase_005008_2 "_operator.sub_assign_effect.lowp_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_005008, VkglTestCase_005008_1, VkglTestCase_005008_2);

#define VkglTestCase_005009_1 "dEQP-GLES2.functional.shaders.operator.binary_"
#define VkglTestCase_005009_2 "operator.sub_assign_effect.lowp_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_005009, VkglTestCase_005009_1, VkglTestCase_005009_2);

#define VkglTestCase_005010_1 "dEQP-GLES2.functional.shaders.operator.binary_"
#define VkglTestCase_005010_2 "operator.sub_assign_effect.mediump_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_005010, VkglTestCase_005010_1, VkglTestCase_005010_2);

#define VkglTestCase_005011_1 "dEQP-GLES2.functional.shaders.operator.binary_o"
#define VkglTestCase_005011_2 "perator.sub_assign_effect.mediump_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_005011, VkglTestCase_005011_1, VkglTestCase_005011_2);

#define VkglTestCase_005012_1 "dEQP-GLES2.functional.shaders.operator.binary"
#define VkglTestCase_005012_2 "_operator.sub_assign_effect.highp_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_005012, VkglTestCase_005012_1, VkglTestCase_005012_2);

#define VkglTestCase_005013_1 "dEQP-GLES2.functional.shaders.operator.binary_"
#define VkglTestCase_005013_2 "operator.sub_assign_effect.highp_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_005013, VkglTestCase_005013_1, VkglTestCase_005013_2);

#define VkglTestCase_005014_1 "dEQP-GLES2.functional.shaders.operator.binary"
#define VkglTestCase_005014_2 "_operator.sub_assign_effect.lowp_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_005014, VkglTestCase_005014_1, VkglTestCase_005014_2);

#define VkglTestCase_005015_1 "dEQP-GLES2.functional.shaders.operator.binary_"
#define VkglTestCase_005015_2 "operator.sub_assign_effect.lowp_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_005015, VkglTestCase_005015_1, VkglTestCase_005015_2);

#define VkglTestCase_005016_1 "dEQP-GLES2.functional.shaders.operator.binary_"
#define VkglTestCase_005016_2 "operator.sub_assign_effect.mediump_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_005016, VkglTestCase_005016_1, VkglTestCase_005016_2);

#define VkglTestCase_005017_1 "dEQP-GLES2.functional.shaders.operator.binary_o"
#define VkglTestCase_005017_2 "perator.sub_assign_effect.mediump_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_005017, VkglTestCase_005017_1, VkglTestCase_005017_2);

#define VkglTestCase_005018_1 "dEQP-GLES2.functional.shaders.operator.binary"
#define VkglTestCase_005018_2 "_operator.sub_assign_effect.highp_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_005018, VkglTestCase_005018_1, VkglTestCase_005018_2);

#define VkglTestCase_005019_1 "dEQP-GLES2.functional.shaders.operator.binary_"
#define VkglTestCase_005019_2 "operator.sub_assign_effect.highp_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_005019, VkglTestCase_005019_1, VkglTestCase_005019_2);

#define VkglTestCase_005020_1 "dEQP-GLES2.functional.shaders.operator.binary"
#define VkglTestCase_005020_2 "_operator.sub_assign_effect.lowp_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_005020, VkglTestCase_005020_1, VkglTestCase_005020_2);

#define VkglTestCase_005021_1 "dEQP-GLES2.functional.shaders.operator.binary_"
#define VkglTestCase_005021_2 "operator.sub_assign_effect.lowp_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_005021, VkglTestCase_005021_1, VkglTestCase_005021_2);

#define VkglTestCase_005022_1 "dEQP-GLES2.functional.shaders.operator.binary_"
#define VkglTestCase_005022_2 "operator.sub_assign_effect.mediump_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_005022, VkglTestCase_005022_1, VkglTestCase_005022_2);

#define VkglTestCase_005023_1 "dEQP-GLES2.functional.shaders.operator.binary_o"
#define VkglTestCase_005023_2 "perator.sub_assign_effect.mediump_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_005023, VkglTestCase_005023_1, VkglTestCase_005023_2);

#define VkglTestCase_005024_1 "dEQP-GLES2.functional.shaders.operator.binary"
#define VkglTestCase_005024_2 "_operator.sub_assign_effect.highp_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_005024, VkglTestCase_005024_1, VkglTestCase_005024_2);

#define VkglTestCase_005025_1 "dEQP-GLES2.functional.shaders.operator.binary_"
#define VkglTestCase_005025_2 "operator.sub_assign_effect.highp_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_005025, VkglTestCase_005025_1, VkglTestCase_005025_2);

#define VkglTestCase_005026_1 "dEQP-GLES2.functional.shaders.operator.binary_o"
#define VkglTestCase_005026_2 "perator.sub_assign_effect.lowp_vec2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_005026, VkglTestCase_005026_1, VkglTestCase_005026_2);

#define VkglTestCase_005027_1 "dEQP-GLES2.functional.shaders.operator.binary_op"
#define VkglTestCase_005027_2 "erator.sub_assign_effect.lowp_vec2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_005027, VkglTestCase_005027_1, VkglTestCase_005027_2);

#define VkglTestCase_005028_1 "dEQP-GLES2.functional.shaders.operator.binary_ope"
#define VkglTestCase_005028_2 "rator.sub_assign_effect.mediump_vec2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_005028, VkglTestCase_005028_1, VkglTestCase_005028_2);

#define VkglTestCase_005029_1 "dEQP-GLES2.functional.shaders.operator.binary_oper"
#define VkglTestCase_005029_2 "ator.sub_assign_effect.mediump_vec2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_005029, VkglTestCase_005029_1, VkglTestCase_005029_2);

#define VkglTestCase_005030_1 "dEQP-GLES2.functional.shaders.operator.binary_op"
#define VkglTestCase_005030_2 "erator.sub_assign_effect.highp_vec2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_005030, VkglTestCase_005030_1, VkglTestCase_005030_2);

#define VkglTestCase_005031_1 "dEQP-GLES2.functional.shaders.operator.binary_ope"
#define VkglTestCase_005031_2 "rator.sub_assign_effect.highp_vec2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_005031, VkglTestCase_005031_1, VkglTestCase_005031_2);

#define VkglTestCase_005032_1 "dEQP-GLES2.functional.shaders.operator.binary_o"
#define VkglTestCase_005032_2 "perator.sub_assign_effect.lowp_vec3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_005032, VkglTestCase_005032_1, VkglTestCase_005032_2);

#define VkglTestCase_005033_1 "dEQP-GLES2.functional.shaders.operator.binary_op"
#define VkglTestCase_005033_2 "erator.sub_assign_effect.lowp_vec3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_005033, VkglTestCase_005033_1, VkglTestCase_005033_2);

#define VkglTestCase_005034_1 "dEQP-GLES2.functional.shaders.operator.binary_ope"
#define VkglTestCase_005034_2 "rator.sub_assign_effect.mediump_vec3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_005034, VkglTestCase_005034_1, VkglTestCase_005034_2);

#define VkglTestCase_005035_1 "dEQP-GLES2.functional.shaders.operator.binary_oper"
#define VkglTestCase_005035_2 "ator.sub_assign_effect.mediump_vec3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_005035, VkglTestCase_005035_1, VkglTestCase_005035_2);

#define VkglTestCase_005036_1 "dEQP-GLES2.functional.shaders.operator.binary_op"
#define VkglTestCase_005036_2 "erator.sub_assign_effect.highp_vec3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_005036, VkglTestCase_005036_1, VkglTestCase_005036_2);

#define VkglTestCase_005037_1 "dEQP-GLES2.functional.shaders.operator.binary_ope"
#define VkglTestCase_005037_2 "rator.sub_assign_effect.highp_vec3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_005037, VkglTestCase_005037_1, VkglTestCase_005037_2);

#define VkglTestCase_005038_1 "dEQP-GLES2.functional.shaders.operator.binary_o"
#define VkglTestCase_005038_2 "perator.sub_assign_effect.lowp_vec4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_005038, VkglTestCase_005038_1, VkglTestCase_005038_2);

#define VkglTestCase_005039_1 "dEQP-GLES2.functional.shaders.operator.binary_op"
#define VkglTestCase_005039_2 "erator.sub_assign_effect.lowp_vec4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_005039, VkglTestCase_005039_1, VkglTestCase_005039_2);

#define VkglTestCase_005040_1 "dEQP-GLES2.functional.shaders.operator.binary_ope"
#define VkglTestCase_005040_2 "rator.sub_assign_effect.mediump_vec4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_005040, VkglTestCase_005040_1, VkglTestCase_005040_2);

#define VkglTestCase_005041_1 "dEQP-GLES2.functional.shaders.operator.binary_oper"
#define VkglTestCase_005041_2 "ator.sub_assign_effect.mediump_vec4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_005041, VkglTestCase_005041_1, VkglTestCase_005041_2);

#define VkglTestCase_005042_1 "dEQP-GLES2.functional.shaders.operator.binary_op"
#define VkglTestCase_005042_2 "erator.sub_assign_effect.highp_vec4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_005042, VkglTestCase_005042_1, VkglTestCase_005042_2);

#define VkglTestCase_005043_1 "dEQP-GLES2.functional.shaders.operator.binary_ope"
#define VkglTestCase_005043_2 "rator.sub_assign_effect.highp_vec4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_005043, VkglTestCase_005043_1, VkglTestCase_005043_2);

#define VkglTestCase_005044_1 "dEQP-GLES2.functional.shaders.operator.binary_o"
#define VkglTestCase_005044_2 "perator.sub_assign_effect.lowp_ivec2_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_005044, VkglTestCase_005044_1, VkglTestCase_005044_2);

#define VkglTestCase_005045_1 "dEQP-GLES2.functional.shaders.operator.binary_op"
#define VkglTestCase_005045_2 "erator.sub_assign_effect.lowp_ivec2_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_005045, VkglTestCase_005045_1, VkglTestCase_005045_2);

#define VkglTestCase_005046_1 "dEQP-GLES2.functional.shaders.operator.binary_op"
#define VkglTestCase_005046_2 "erator.sub_assign_effect.mediump_ivec2_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_005046, VkglTestCase_005046_1, VkglTestCase_005046_2);

#define VkglTestCase_005047_1 "dEQP-GLES2.functional.shaders.operator.binary_ope"
#define VkglTestCase_005047_2 "rator.sub_assign_effect.mediump_ivec2_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_005047, VkglTestCase_005047_1, VkglTestCase_005047_2);

#define VkglTestCase_005048_1 "dEQP-GLES2.functional.shaders.operator.binary_o"
#define VkglTestCase_005048_2 "perator.sub_assign_effect.highp_ivec2_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_005048, VkglTestCase_005048_1, VkglTestCase_005048_2);

#define VkglTestCase_005049_1 "dEQP-GLES2.functional.shaders.operator.binary_op"
#define VkglTestCase_005049_2 "erator.sub_assign_effect.highp_ivec2_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_005049, VkglTestCase_005049_1, VkglTestCase_005049_2);

#define VkglTestCase_005050_1 "dEQP-GLES2.functional.shaders.operator.binary_o"
#define VkglTestCase_005050_2 "perator.sub_assign_effect.lowp_ivec3_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_005050, VkglTestCase_005050_1, VkglTestCase_005050_2);

#define VkglTestCase_005051_1 "dEQP-GLES2.functional.shaders.operator.binary_op"
#define VkglTestCase_005051_2 "erator.sub_assign_effect.lowp_ivec3_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_005051, VkglTestCase_005051_1, VkglTestCase_005051_2);

#define VkglTestCase_005052_1 "dEQP-GLES2.functional.shaders.operator.binary_op"
#define VkglTestCase_005052_2 "erator.sub_assign_effect.mediump_ivec3_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_005052, VkglTestCase_005052_1, VkglTestCase_005052_2);

#define VkglTestCase_005053_1 "dEQP-GLES2.functional.shaders.operator.binary_ope"
#define VkglTestCase_005053_2 "rator.sub_assign_effect.mediump_ivec3_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_005053, VkglTestCase_005053_1, VkglTestCase_005053_2);

#define VkglTestCase_005054_1 "dEQP-GLES2.functional.shaders.operator.binary_o"
#define VkglTestCase_005054_2 "perator.sub_assign_effect.highp_ivec3_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_005054, VkglTestCase_005054_1, VkglTestCase_005054_2);

#define VkglTestCase_005055_1 "dEQP-GLES2.functional.shaders.operator.binary_op"
#define VkglTestCase_005055_2 "erator.sub_assign_effect.highp_ivec3_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_005055, VkglTestCase_005055_1, VkglTestCase_005055_2);

#define VkglTestCase_005056_1 "dEQP-GLES2.functional.shaders.operator.binary_o"
#define VkglTestCase_005056_2 "perator.sub_assign_effect.lowp_ivec4_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_005056, VkglTestCase_005056_1, VkglTestCase_005056_2);

#define VkglTestCase_005057_1 "dEQP-GLES2.functional.shaders.operator.binary_op"
#define VkglTestCase_005057_2 "erator.sub_assign_effect.lowp_ivec4_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_005057, VkglTestCase_005057_1, VkglTestCase_005057_2);

#define VkglTestCase_005058_1 "dEQP-GLES2.functional.shaders.operator.binary_op"
#define VkglTestCase_005058_2 "erator.sub_assign_effect.mediump_ivec4_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_005058, VkglTestCase_005058_1, VkglTestCase_005058_2);

#define VkglTestCase_005059_1 "dEQP-GLES2.functional.shaders.operator.binary_ope"
#define VkglTestCase_005059_2 "rator.sub_assign_effect.mediump_ivec4_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_005059, VkglTestCase_005059_1, VkglTestCase_005059_2);

#define VkglTestCase_005060_1 "dEQP-GLES2.functional.shaders.operator.binary_o"
#define VkglTestCase_005060_2 "perator.sub_assign_effect.highp_ivec4_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_005060, VkglTestCase_005060_1, VkglTestCase_005060_2);

#define VkglTestCase_005061_1 "dEQP-GLES2.functional.shaders.operator.binary_op"
#define VkglTestCase_005061_2 "erator.sub_assign_effect.highp_ivec4_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_005061, VkglTestCase_005061_1, VkglTestCase_005061_2);
