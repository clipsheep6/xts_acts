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
#include "../ActsDeqpgles30008TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_007952_1 "dEQP-GLES3.functional.shaders.operator.unary_o"
#define VkglTestCase_007952_2 "perator.post_decrement_result.lowp_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007952, VkglTestCase_007952_1, VkglTestCase_007952_2);

#define VkglTestCase_007953_1 "dEQP-GLES3.functional.shaders.operator.unary_op"
#define VkglTestCase_007953_2 "erator.post_decrement_result.lowp_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007953, VkglTestCase_007953_1, VkglTestCase_007953_2);

#define VkglTestCase_007954_1 "dEQP-GLES3.functional.shaders.operator.unary_ope"
#define VkglTestCase_007954_2 "rator.post_decrement_result.mediump_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007954, VkglTestCase_007954_1, VkglTestCase_007954_2);

#define VkglTestCase_007955_1 "dEQP-GLES3.functional.shaders.operator.unary_oper"
#define VkglTestCase_007955_2 "ator.post_decrement_result.mediump_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007955, VkglTestCase_007955_1, VkglTestCase_007955_2);

#define VkglTestCase_007956_1 "dEQP-GLES3.functional.shaders.operator.unary_op"
#define VkglTestCase_007956_2 "erator.post_decrement_result.highp_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007956, VkglTestCase_007956_1, VkglTestCase_007956_2);

#define VkglTestCase_007957_1 "dEQP-GLES3.functional.shaders.operator.unary_ope"
#define VkglTestCase_007957_2 "rator.post_decrement_result.highp_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007957, VkglTestCase_007957_1, VkglTestCase_007957_2);

#define VkglTestCase_007958_1 "dEQP-GLES3.functional.shaders.operator.unary_o"
#define VkglTestCase_007958_2 "perator.post_decrement_result.lowp_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007958, VkglTestCase_007958_1, VkglTestCase_007958_2);

#define VkglTestCase_007959_1 "dEQP-GLES3.functional.shaders.operator.unary_op"
#define VkglTestCase_007959_2 "erator.post_decrement_result.lowp_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007959, VkglTestCase_007959_1, VkglTestCase_007959_2);

#define VkglTestCase_007960_1 "dEQP-GLES3.functional.shaders.operator.unary_op"
#define VkglTestCase_007960_2 "erator.post_decrement_result.mediump_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007960, VkglTestCase_007960_1, VkglTestCase_007960_2);

#define VkglTestCase_007961_1 "dEQP-GLES3.functional.shaders.operator.unary_ope"
#define VkglTestCase_007961_2 "rator.post_decrement_result.mediump_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007961, VkglTestCase_007961_1, VkglTestCase_007961_2);

#define VkglTestCase_007962_1 "dEQP-GLES3.functional.shaders.operator.unary_o"
#define VkglTestCase_007962_2 "perator.post_decrement_result.highp_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007962, VkglTestCase_007962_1, VkglTestCase_007962_2);

#define VkglTestCase_007963_1 "dEQP-GLES3.functional.shaders.operator.unary_op"
#define VkglTestCase_007963_2 "erator.post_decrement_result.highp_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007963, VkglTestCase_007963_1, VkglTestCase_007963_2);

#define VkglTestCase_007964_1 "dEQP-GLES3.functional.shaders.operator.unary_o"
#define VkglTestCase_007964_2 "perator.post_decrement_result.lowp_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007964, VkglTestCase_007964_1, VkglTestCase_007964_2);

#define VkglTestCase_007965_1 "dEQP-GLES3.functional.shaders.operator.unary_op"
#define VkglTestCase_007965_2 "erator.post_decrement_result.lowp_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007965, VkglTestCase_007965_1, VkglTestCase_007965_2);

#define VkglTestCase_007966_1 "dEQP-GLES3.functional.shaders.operator.unary_op"
#define VkglTestCase_007966_2 "erator.post_decrement_result.mediump_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007966, VkglTestCase_007966_1, VkglTestCase_007966_2);

#define VkglTestCase_007967_1 "dEQP-GLES3.functional.shaders.operator.unary_ope"
#define VkglTestCase_007967_2 "rator.post_decrement_result.mediump_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007967, VkglTestCase_007967_1, VkglTestCase_007967_2);

#define VkglTestCase_007968_1 "dEQP-GLES3.functional.shaders.operator.unary_o"
#define VkglTestCase_007968_2 "perator.post_decrement_result.highp_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007968, VkglTestCase_007968_1, VkglTestCase_007968_2);

#define VkglTestCase_007969_1 "dEQP-GLES3.functional.shaders.operator.unary_op"
#define VkglTestCase_007969_2 "erator.post_decrement_result.highp_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007969, VkglTestCase_007969_1, VkglTestCase_007969_2);

#define VkglTestCase_007970_1 "dEQP-GLES3.functional.shaders.operator.unary_o"
#define VkglTestCase_007970_2 "perator.post_decrement_result.lowp_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007970, VkglTestCase_007970_1, VkglTestCase_007970_2);

#define VkglTestCase_007971_1 "dEQP-GLES3.functional.shaders.operator.unary_op"
#define VkglTestCase_007971_2 "erator.post_decrement_result.lowp_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007971, VkglTestCase_007971_1, VkglTestCase_007971_2);

#define VkglTestCase_007972_1 "dEQP-GLES3.functional.shaders.operator.unary_op"
#define VkglTestCase_007972_2 "erator.post_decrement_result.mediump_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007972, VkglTestCase_007972_1, VkglTestCase_007972_2);

#define VkglTestCase_007973_1 "dEQP-GLES3.functional.shaders.operator.unary_ope"
#define VkglTestCase_007973_2 "rator.post_decrement_result.mediump_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007973, VkglTestCase_007973_1, VkglTestCase_007973_2);

#define VkglTestCase_007974_1 "dEQP-GLES3.functional.shaders.operator.unary_o"
#define VkglTestCase_007974_2 "perator.post_decrement_result.highp_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007974, VkglTestCase_007974_1, VkglTestCase_007974_2);

#define VkglTestCase_007975_1 "dEQP-GLES3.functional.shaders.operator.unary_op"
#define VkglTestCase_007975_2 "erator.post_decrement_result.highp_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007975, VkglTestCase_007975_1, VkglTestCase_007975_2);

#define VkglTestCase_007976_1 "dEQP-GLES3.functional.shaders.operator.unary_"
#define VkglTestCase_007976_2 "operator.post_decrement_result.lowp_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007976, VkglTestCase_007976_1, VkglTestCase_007976_2);

#define VkglTestCase_007977_1 "dEQP-GLES3.functional.shaders.operator.unary_o"
#define VkglTestCase_007977_2 "perator.post_decrement_result.lowp_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007977, VkglTestCase_007977_1, VkglTestCase_007977_2);

#define VkglTestCase_007978_1 "dEQP-GLES3.functional.shaders.operator.unary_op"
#define VkglTestCase_007978_2 "erator.post_decrement_result.mediump_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007978, VkglTestCase_007978_1, VkglTestCase_007978_2);

#define VkglTestCase_007979_1 "dEQP-GLES3.functional.shaders.operator.unary_ope"
#define VkglTestCase_007979_2 "rator.post_decrement_result.mediump_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007979, VkglTestCase_007979_1, VkglTestCase_007979_2);

#define VkglTestCase_007980_1 "dEQP-GLES3.functional.shaders.operator.unary_o"
#define VkglTestCase_007980_2 "perator.post_decrement_result.highp_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007980, VkglTestCase_007980_1, VkglTestCase_007980_2);

#define VkglTestCase_007981_1 "dEQP-GLES3.functional.shaders.operator.unary_op"
#define VkglTestCase_007981_2 "erator.post_decrement_result.highp_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007981, VkglTestCase_007981_1, VkglTestCase_007981_2);

#define VkglTestCase_007982_1 "dEQP-GLES3.functional.shaders.operator.unary_o"
#define VkglTestCase_007982_2 "perator.post_decrement_result.lowp_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007982, VkglTestCase_007982_1, VkglTestCase_007982_2);

#define VkglTestCase_007983_1 "dEQP-GLES3.functional.shaders.operator.unary_op"
#define VkglTestCase_007983_2 "erator.post_decrement_result.lowp_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007983, VkglTestCase_007983_1, VkglTestCase_007983_2);

#define VkglTestCase_007984_1 "dEQP-GLES3.functional.shaders.operator.unary_ope"
#define VkglTestCase_007984_2 "rator.post_decrement_result.mediump_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007984, VkglTestCase_007984_1, VkglTestCase_007984_2);

#define VkglTestCase_007985_1 "dEQP-GLES3.functional.shaders.operator.unary_oper"
#define VkglTestCase_007985_2 "ator.post_decrement_result.mediump_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007985, VkglTestCase_007985_1, VkglTestCase_007985_2);

#define VkglTestCase_007986_1 "dEQP-GLES3.functional.shaders.operator.unary_op"
#define VkglTestCase_007986_2 "erator.post_decrement_result.highp_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007986, VkglTestCase_007986_1, VkglTestCase_007986_2);

#define VkglTestCase_007987_1 "dEQP-GLES3.functional.shaders.operator.unary_ope"
#define VkglTestCase_007987_2 "rator.post_decrement_result.highp_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007987, VkglTestCase_007987_1, VkglTestCase_007987_2);

#define VkglTestCase_007988_1 "dEQP-GLES3.functional.shaders.operator.unary_o"
#define VkglTestCase_007988_2 "perator.post_decrement_result.lowp_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007988, VkglTestCase_007988_1, VkglTestCase_007988_2);

#define VkglTestCase_007989_1 "dEQP-GLES3.functional.shaders.operator.unary_op"
#define VkglTestCase_007989_2 "erator.post_decrement_result.lowp_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007989, VkglTestCase_007989_1, VkglTestCase_007989_2);

#define VkglTestCase_007990_1 "dEQP-GLES3.functional.shaders.operator.unary_ope"
#define VkglTestCase_007990_2 "rator.post_decrement_result.mediump_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007990, VkglTestCase_007990_1, VkglTestCase_007990_2);

#define VkglTestCase_007991_1 "dEQP-GLES3.functional.shaders.operator.unary_oper"
#define VkglTestCase_007991_2 "ator.post_decrement_result.mediump_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007991, VkglTestCase_007991_1, VkglTestCase_007991_2);

#define VkglTestCase_007992_1 "dEQP-GLES3.functional.shaders.operator.unary_op"
#define VkglTestCase_007992_2 "erator.post_decrement_result.highp_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007992, VkglTestCase_007992_1, VkglTestCase_007992_2);

#define VkglTestCase_007993_1 "dEQP-GLES3.functional.shaders.operator.unary_ope"
#define VkglTestCase_007993_2 "rator.post_decrement_result.highp_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007993, VkglTestCase_007993_1, VkglTestCase_007993_2);

#define VkglTestCase_007994_1 "dEQP-GLES3.functional.shaders.operator.unary_o"
#define VkglTestCase_007994_2 "perator.post_decrement_result.lowp_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007994, VkglTestCase_007994_1, VkglTestCase_007994_2);

#define VkglTestCase_007995_1 "dEQP-GLES3.functional.shaders.operator.unary_op"
#define VkglTestCase_007995_2 "erator.post_decrement_result.lowp_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007995, VkglTestCase_007995_1, VkglTestCase_007995_2);

#define VkglTestCase_007996_1 "dEQP-GLES3.functional.shaders.operator.unary_ope"
#define VkglTestCase_007996_2 "rator.post_decrement_result.mediump_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007996, VkglTestCase_007996_1, VkglTestCase_007996_2);

#define VkglTestCase_007997_1 "dEQP-GLES3.functional.shaders.operator.unary_oper"
#define VkglTestCase_007997_2 "ator.post_decrement_result.mediump_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007997, VkglTestCase_007997_1, VkglTestCase_007997_2);

#define VkglTestCase_007998_1 "dEQP-GLES3.functional.shaders.operator.unary_op"
#define VkglTestCase_007998_2 "erator.post_decrement_result.highp_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007998, VkglTestCase_007998_1, VkglTestCase_007998_2);

#define VkglTestCase_007999_1 "dEQP-GLES3.functional.shaders.operator.unary_ope"
#define VkglTestCase_007999_2 "rator.post_decrement_result.highp_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007999, VkglTestCase_007999_1, VkglTestCase_007999_2);

#define VkglTestCase_008000_1 "dEQP-GLES3.functional.shaders.operator.unary_o"
#define VkglTestCase_008000_2 "perator.post_decrement_result.lowp_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_008000, VkglTestCase_008000_1, VkglTestCase_008000_2);

#define VkglTestCase_008001_1 "dEQP-GLES3.functional.shaders.operator.unary_op"
#define VkglTestCase_008001_2 "erator.post_decrement_result.lowp_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_008001, VkglTestCase_008001_1, VkglTestCase_008001_2);

#define VkglTestCase_008002_1 "dEQP-GLES3.functional.shaders.operator.unary_op"
#define VkglTestCase_008002_2 "erator.post_decrement_result.mediump_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_008002, VkglTestCase_008002_1, VkglTestCase_008002_2);

#define VkglTestCase_008003_1 "dEQP-GLES3.functional.shaders.operator.unary_ope"
#define VkglTestCase_008003_2 "rator.post_decrement_result.mediump_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_008003, VkglTestCase_008003_1, VkglTestCase_008003_2);

#define VkglTestCase_008004_1 "dEQP-GLES3.functional.shaders.operator.unary_o"
#define VkglTestCase_008004_2 "perator.post_decrement_result.highp_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_008004, VkglTestCase_008004_1, VkglTestCase_008004_2);

#define VkglTestCase_008005_1 "dEQP-GLES3.functional.shaders.operator.unary_op"
#define VkglTestCase_008005_2 "erator.post_decrement_result.highp_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_008005, VkglTestCase_008005_1, VkglTestCase_008005_2);

#define VkglTestCase_008006_1 "dEQP-GLES3.functional.shaders.operator.unary_o"
#define VkglTestCase_008006_2 "perator.post_decrement_result.lowp_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_008006, VkglTestCase_008006_1, VkglTestCase_008006_2);

#define VkglTestCase_008007_1 "dEQP-GLES3.functional.shaders.operator.unary_op"
#define VkglTestCase_008007_2 "erator.post_decrement_result.lowp_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_008007, VkglTestCase_008007_1, VkglTestCase_008007_2);

#define VkglTestCase_008008_1 "dEQP-GLES3.functional.shaders.operator.unary_ope"
#define VkglTestCase_008008_2 "rator.post_decrement_result.mediump_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_008008, VkglTestCase_008008_1, VkglTestCase_008008_2);

#define VkglTestCase_008009_1 "dEQP-GLES3.functional.shaders.operator.unary_oper"
#define VkglTestCase_008009_2 "ator.post_decrement_result.mediump_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_008009, VkglTestCase_008009_1, VkglTestCase_008009_2);

#define VkglTestCase_008010_1 "dEQP-GLES3.functional.shaders.operator.unary_op"
#define VkglTestCase_008010_2 "erator.post_decrement_result.highp_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_008010, VkglTestCase_008010_1, VkglTestCase_008010_2);

#define VkglTestCase_008011_1 "dEQP-GLES3.functional.shaders.operator.unary_ope"
#define VkglTestCase_008011_2 "rator.post_decrement_result.highp_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_008011, VkglTestCase_008011_1, VkglTestCase_008011_2);

#define VkglTestCase_008012_1 "dEQP-GLES3.functional.shaders.operator.unary_o"
#define VkglTestCase_008012_2 "perator.post_decrement_result.lowp_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_008012, VkglTestCase_008012_1, VkglTestCase_008012_2);

#define VkglTestCase_008013_1 "dEQP-GLES3.functional.shaders.operator.unary_op"
#define VkglTestCase_008013_2 "erator.post_decrement_result.lowp_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_008013, VkglTestCase_008013_1, VkglTestCase_008013_2);

#define VkglTestCase_008014_1 "dEQP-GLES3.functional.shaders.operator.unary_ope"
#define VkglTestCase_008014_2 "rator.post_decrement_result.mediump_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_008014, VkglTestCase_008014_1, VkglTestCase_008014_2);

#define VkglTestCase_008015_1 "dEQP-GLES3.functional.shaders.operator.unary_oper"
#define VkglTestCase_008015_2 "ator.post_decrement_result.mediump_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_008015, VkglTestCase_008015_1, VkglTestCase_008015_2);

#define VkglTestCase_008016_1 "dEQP-GLES3.functional.shaders.operator.unary_op"
#define VkglTestCase_008016_2 "erator.post_decrement_result.highp_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_008016, VkglTestCase_008016_1, VkglTestCase_008016_2);

#define VkglTestCase_008017_1 "dEQP-GLES3.functional.shaders.operator.unary_ope"
#define VkglTestCase_008017_2 "rator.post_decrement_result.highp_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_008017, VkglTestCase_008017_1, VkglTestCase_008017_2);

#define VkglTestCase_008018_1 "dEQP-GLES3.functional.shaders.operator.unary_o"
#define VkglTestCase_008018_2 "perator.post_decrement_result.lowp_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_008018, VkglTestCase_008018_1, VkglTestCase_008018_2);

#define VkglTestCase_008019_1 "dEQP-GLES3.functional.shaders.operator.unary_op"
#define VkglTestCase_008019_2 "erator.post_decrement_result.lowp_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_008019, VkglTestCase_008019_1, VkglTestCase_008019_2);

#define VkglTestCase_008020_1 "dEQP-GLES3.functional.shaders.operator.unary_ope"
#define VkglTestCase_008020_2 "rator.post_decrement_result.mediump_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_008020, VkglTestCase_008020_1, VkglTestCase_008020_2);

#define VkglTestCase_008021_1 "dEQP-GLES3.functional.shaders.operator.unary_oper"
#define VkglTestCase_008021_2 "ator.post_decrement_result.mediump_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_008021, VkglTestCase_008021_1, VkglTestCase_008021_2);

#define VkglTestCase_008022_1 "dEQP-GLES3.functional.shaders.operator.unary_op"
#define VkglTestCase_008022_2 "erator.post_decrement_result.highp_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_008022, VkglTestCase_008022_1, VkglTestCase_008022_2);

#define VkglTestCase_008023_1 "dEQP-GLES3.functional.shaders.operator.unary_ope"
#define VkglTestCase_008023_2 "rator.post_decrement_result.highp_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_008023, VkglTestCase_008023_1, VkglTestCase_008023_2);
