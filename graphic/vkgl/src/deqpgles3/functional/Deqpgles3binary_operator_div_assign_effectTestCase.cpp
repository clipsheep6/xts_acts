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
#include "../ActsDeqpgles30010TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_009938_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_009938_2 "_operator.div_assign_effect.lowp_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009938, VkglTestCase_009938_1, VkglTestCase_009938_2);

#define VkglTestCase_009939_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_009939_2 "operator.div_assign_effect.lowp_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009939, VkglTestCase_009939_1, VkglTestCase_009939_2);

#define VkglTestCase_009940_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_009940_2 "operator.div_assign_effect.mediump_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009940, VkglTestCase_009940_1, VkglTestCase_009940_2);

#define VkglTestCase_009941_1 "dEQP-GLES3.functional.shaders.operator.binary_o"
#define VkglTestCase_009941_2 "perator.div_assign_effect.mediump_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009941, VkglTestCase_009941_1, VkglTestCase_009941_2);

#define VkglTestCase_009942_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_009942_2 "_operator.div_assign_effect.highp_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009942, VkglTestCase_009942_1, VkglTestCase_009942_2);

#define VkglTestCase_009943_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_009943_2 "operator.div_assign_effect.highp_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009943, VkglTestCase_009943_1, VkglTestCase_009943_2);

#define VkglTestCase_009944_1 "dEQP-GLES3.functional.shaders.operator.binar"
#define VkglTestCase_009944_2 "y_operator.div_assign_effect.lowp_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009944, VkglTestCase_009944_1, VkglTestCase_009944_2);

#define VkglTestCase_009945_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_009945_2 "_operator.div_assign_effect.lowp_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009945, VkglTestCase_009945_1, VkglTestCase_009945_2);

#define VkglTestCase_009946_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_009946_2 "operator.div_assign_effect.mediump_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009946, VkglTestCase_009946_1, VkglTestCase_009946_2);

#define VkglTestCase_009947_1 "dEQP-GLES3.functional.shaders.operator.binary_o"
#define VkglTestCase_009947_2 "perator.div_assign_effect.mediump_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009947, VkglTestCase_009947_1, VkglTestCase_009947_2);

#define VkglTestCase_009948_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_009948_2 "_operator.div_assign_effect.highp_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009948, VkglTestCase_009948_1, VkglTestCase_009948_2);

#define VkglTestCase_009949_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_009949_2 "operator.div_assign_effect.highp_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009949, VkglTestCase_009949_1, VkglTestCase_009949_2);

#define VkglTestCase_009950_1 "dEQP-GLES3.functional.shaders.operator.binar"
#define VkglTestCase_009950_2 "y_operator.div_assign_effect.lowp_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009950, VkglTestCase_009950_1, VkglTestCase_009950_2);

#define VkglTestCase_009951_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_009951_2 "_operator.div_assign_effect.lowp_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009951, VkglTestCase_009951_1, VkglTestCase_009951_2);

#define VkglTestCase_009952_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_009952_2 "operator.div_assign_effect.mediump_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009952, VkglTestCase_009952_1, VkglTestCase_009952_2);

#define VkglTestCase_009953_1 "dEQP-GLES3.functional.shaders.operator.binary_o"
#define VkglTestCase_009953_2 "perator.div_assign_effect.mediump_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009953, VkglTestCase_009953_1, VkglTestCase_009953_2);

#define VkglTestCase_009954_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_009954_2 "_operator.div_assign_effect.highp_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009954, VkglTestCase_009954_1, VkglTestCase_009954_2);

#define VkglTestCase_009955_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_009955_2 "operator.div_assign_effect.highp_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009955, VkglTestCase_009955_1, VkglTestCase_009955_2);

#define VkglTestCase_009956_1 "dEQP-GLES3.functional.shaders.operator.binar"
#define VkglTestCase_009956_2 "y_operator.div_assign_effect.lowp_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009956, VkglTestCase_009956_1, VkglTestCase_009956_2);

#define VkglTestCase_009957_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_009957_2 "_operator.div_assign_effect.lowp_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009957, VkglTestCase_009957_1, VkglTestCase_009957_2);

#define VkglTestCase_009958_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_009958_2 "operator.div_assign_effect.mediump_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009958, VkglTestCase_009958_1, VkglTestCase_009958_2);

#define VkglTestCase_009959_1 "dEQP-GLES3.functional.shaders.operator.binary_o"
#define VkglTestCase_009959_2 "perator.div_assign_effect.mediump_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009959, VkglTestCase_009959_1, VkglTestCase_009959_2);

#define VkglTestCase_009960_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_009960_2 "_operator.div_assign_effect.highp_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009960, VkglTestCase_009960_1, VkglTestCase_009960_2);

#define VkglTestCase_009961_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_009961_2 "operator.div_assign_effect.highp_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009961, VkglTestCase_009961_1, VkglTestCase_009961_2);

#define VkglTestCase_009962_1 "dEQP-GLES3.functional.shaders.operator.binar"
#define VkglTestCase_009962_2 "y_operator.div_assign_effect.lowp_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009962, VkglTestCase_009962_1, VkglTestCase_009962_2);

#define VkglTestCase_009963_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_009963_2 "_operator.div_assign_effect.lowp_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009963, VkglTestCase_009963_1, VkglTestCase_009963_2);

#define VkglTestCase_009964_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_009964_2 "_operator.div_assign_effect.mediump_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009964, VkglTestCase_009964_1, VkglTestCase_009964_2);

#define VkglTestCase_009965_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_009965_2 "operator.div_assign_effect.mediump_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009965, VkglTestCase_009965_1, VkglTestCase_009965_2);

#define VkglTestCase_009966_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_009966_2 "_operator.div_assign_effect.lowp_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009966, VkglTestCase_009966_1, VkglTestCase_009966_2);

#define VkglTestCase_009967_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_009967_2 "operator.div_assign_effect.lowp_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009967, VkglTestCase_009967_1, VkglTestCase_009967_2);

#define VkglTestCase_009968_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_009968_2 "operator.div_assign_effect.mediump_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009968, VkglTestCase_009968_1, VkglTestCase_009968_2);

#define VkglTestCase_009969_1 "dEQP-GLES3.functional.shaders.operator.binary_o"
#define VkglTestCase_009969_2 "perator.div_assign_effect.mediump_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009969, VkglTestCase_009969_1, VkglTestCase_009969_2);

#define VkglTestCase_009970_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_009970_2 "_operator.div_assign_effect.lowp_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009970, VkglTestCase_009970_1, VkglTestCase_009970_2);

#define VkglTestCase_009971_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_009971_2 "operator.div_assign_effect.lowp_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009971, VkglTestCase_009971_1, VkglTestCase_009971_2);

#define VkglTestCase_009972_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_009972_2 "operator.div_assign_effect.mediump_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009972, VkglTestCase_009972_1, VkglTestCase_009972_2);

#define VkglTestCase_009973_1 "dEQP-GLES3.functional.shaders.operator.binary_o"
#define VkglTestCase_009973_2 "perator.div_assign_effect.mediump_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009973, VkglTestCase_009973_1, VkglTestCase_009973_2);

#define VkglTestCase_009974_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_009974_2 "_operator.div_assign_effect.lowp_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009974, VkglTestCase_009974_1, VkglTestCase_009974_2);

#define VkglTestCase_009975_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_009975_2 "operator.div_assign_effect.lowp_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009975, VkglTestCase_009975_1, VkglTestCase_009975_2);

#define VkglTestCase_009976_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_009976_2 "operator.div_assign_effect.mediump_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009976, VkglTestCase_009976_1, VkglTestCase_009976_2);

#define VkglTestCase_009977_1 "dEQP-GLES3.functional.shaders.operator.binary_o"
#define VkglTestCase_009977_2 "perator.div_assign_effect.mediump_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009977, VkglTestCase_009977_1, VkglTestCase_009977_2);

#define VkglTestCase_009978_1 "dEQP-GLES3.functional.shaders.operator.binar"
#define VkglTestCase_009978_2 "y_operator.div_assign_effect.highp_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009978, VkglTestCase_009978_1, VkglTestCase_009978_2);

#define VkglTestCase_009979_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_009979_2 "_operator.div_assign_effect.highp_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009979, VkglTestCase_009979_1, VkglTestCase_009979_2);

#define VkglTestCase_009980_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_009980_2 "_operator.div_assign_effect.highp_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009980, VkglTestCase_009980_1, VkglTestCase_009980_2);

#define VkglTestCase_009981_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_009981_2 "operator.div_assign_effect.highp_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009981, VkglTestCase_009981_1, VkglTestCase_009981_2);

#define VkglTestCase_009982_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_009982_2 "_operator.div_assign_effect.highp_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009982, VkglTestCase_009982_1, VkglTestCase_009982_2);

#define VkglTestCase_009983_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_009983_2 "operator.div_assign_effect.highp_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009983, VkglTestCase_009983_1, VkglTestCase_009983_2);

#define VkglTestCase_009984_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_009984_2 "_operator.div_assign_effect.highp_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009984, VkglTestCase_009984_1, VkglTestCase_009984_2);

#define VkglTestCase_009985_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_009985_2 "operator.div_assign_effect.highp_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009985, VkglTestCase_009985_1, VkglTestCase_009985_2);

#define VkglTestCase_009986_1 "dEQP-GLES3.functional.shaders.operator.binar"
#define VkglTestCase_009986_2 "y_operator.div_assign_effect.lowp_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009986, VkglTestCase_009986_1, VkglTestCase_009986_2);

#define VkglTestCase_009987_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_009987_2 "_operator.div_assign_effect.lowp_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009987, VkglTestCase_009987_1, VkglTestCase_009987_2);

#define VkglTestCase_009988_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_009988_2 "operator.div_assign_effect.mediump_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009988, VkglTestCase_009988_1, VkglTestCase_009988_2);

#define VkglTestCase_009989_1 "dEQP-GLES3.functional.shaders.operator.binary_o"
#define VkglTestCase_009989_2 "perator.div_assign_effect.mediump_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009989, VkglTestCase_009989_1, VkglTestCase_009989_2);

#define VkglTestCase_009990_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_009990_2 "_operator.div_assign_effect.lowp_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009990, VkglTestCase_009990_1, VkglTestCase_009990_2);

#define VkglTestCase_009991_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_009991_2 "operator.div_assign_effect.lowp_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009991, VkglTestCase_009991_1, VkglTestCase_009991_2);

#define VkglTestCase_009992_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_009992_2 "operator.div_assign_effect.mediump_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009992, VkglTestCase_009992_1, VkglTestCase_009992_2);

#define VkglTestCase_009993_1 "dEQP-GLES3.functional.shaders.operator.binary_o"
#define VkglTestCase_009993_2 "perator.div_assign_effect.mediump_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009993, VkglTestCase_009993_1, VkglTestCase_009993_2);

#define VkglTestCase_009994_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_009994_2 "_operator.div_assign_effect.lowp_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009994, VkglTestCase_009994_1, VkglTestCase_009994_2);

#define VkglTestCase_009995_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_009995_2 "operator.div_assign_effect.lowp_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009995, VkglTestCase_009995_1, VkglTestCase_009995_2);

#define VkglTestCase_009996_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_009996_2 "operator.div_assign_effect.mediump_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009996, VkglTestCase_009996_1, VkglTestCase_009996_2);

#define VkglTestCase_009997_1 "dEQP-GLES3.functional.shaders.operator.binary_o"
#define VkglTestCase_009997_2 "perator.div_assign_effect.mediump_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009997, VkglTestCase_009997_1, VkglTestCase_009997_2);

#define VkglTestCase_009998_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_009998_2 "_operator.div_assign_effect.lowp_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009998, VkglTestCase_009998_1, VkglTestCase_009998_2);

#define VkglTestCase_009999_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_009999_2 "operator.div_assign_effect.lowp_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009999, VkglTestCase_009999_1, VkglTestCase_009999_2);

#define VkglTestCase_010000_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_010000_2 "operator.div_assign_effect.mediump_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_010000, VkglTestCase_010000_1, VkglTestCase_010000_2);

#define VkglTestCase_010001_1 "dEQP-GLES3.functional.shaders.operator.binary_o"
#define VkglTestCase_010001_2 "perator.div_assign_effect.mediump_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_010001, VkglTestCase_010001_1, VkglTestCase_010001_2);

#define VkglTestCase_010002_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_010002_2 "_operator.div_assign_effect.highp_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_010002, VkglTestCase_010002_1, VkglTestCase_010002_2);

#define VkglTestCase_010003_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_010003_2 "operator.div_assign_effect.highp_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_010003, VkglTestCase_010003_1, VkglTestCase_010003_2);

#define VkglTestCase_010004_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_010004_2 "_operator.div_assign_effect.highp_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_010004, VkglTestCase_010004_1, VkglTestCase_010004_2);

#define VkglTestCase_010005_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_010005_2 "operator.div_assign_effect.highp_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_010005, VkglTestCase_010005_1, VkglTestCase_010005_2);

#define VkglTestCase_010006_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_010006_2 "_operator.div_assign_effect.highp_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_010006, VkglTestCase_010006_1, VkglTestCase_010006_2);

#define VkglTestCase_010007_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_010007_2 "operator.div_assign_effect.highp_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_010007, VkglTestCase_010007_1, VkglTestCase_010007_2);

#define VkglTestCase_010008_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_010008_2 "_operator.div_assign_effect.highp_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_010008, VkglTestCase_010008_1, VkglTestCase_010008_2);

#define VkglTestCase_010009_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_010009_2 "operator.div_assign_effect.highp_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_010009, VkglTestCase_010009_1, VkglTestCase_010009_2);

#define VkglTestCase_010010_1 "dEQP-GLES3.functional.shaders.operator.binary_o"
#define VkglTestCase_010010_2 "perator.div_assign_effect.lowp_vec2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_010010, VkglTestCase_010010_1, VkglTestCase_010010_2);

#define VkglTestCase_010011_1 "dEQP-GLES3.functional.shaders.operator.binary_op"
#define VkglTestCase_010011_2 "erator.div_assign_effect.lowp_vec2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_010011, VkglTestCase_010011_1, VkglTestCase_010011_2);

#define VkglTestCase_010012_1 "dEQP-GLES3.functional.shaders.operator.binary_ope"
#define VkglTestCase_010012_2 "rator.div_assign_effect.mediump_vec2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_010012, VkglTestCase_010012_1, VkglTestCase_010012_2);

#define VkglTestCase_010013_1 "dEQP-GLES3.functional.shaders.operator.binary_oper"
#define VkglTestCase_010013_2 "ator.div_assign_effect.mediump_vec2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_010013, VkglTestCase_010013_1, VkglTestCase_010013_2);

#define VkglTestCase_010014_1 "dEQP-GLES3.functional.shaders.operator.binary_op"
#define VkglTestCase_010014_2 "erator.div_assign_effect.highp_vec2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_010014, VkglTestCase_010014_1, VkglTestCase_010014_2);

#define VkglTestCase_010015_1 "dEQP-GLES3.functional.shaders.operator.binary_ope"
#define VkglTestCase_010015_2 "rator.div_assign_effect.highp_vec2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_010015, VkglTestCase_010015_1, VkglTestCase_010015_2);

#define VkglTestCase_010016_1 "dEQP-GLES3.functional.shaders.operator.binary_o"
#define VkglTestCase_010016_2 "perator.div_assign_effect.lowp_vec3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_010016, VkglTestCase_010016_1, VkglTestCase_010016_2);

#define VkglTestCase_010017_1 "dEQP-GLES3.functional.shaders.operator.binary_op"
#define VkglTestCase_010017_2 "erator.div_assign_effect.lowp_vec3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_010017, VkglTestCase_010017_1, VkglTestCase_010017_2);

#define VkglTestCase_010018_1 "dEQP-GLES3.functional.shaders.operator.binary_ope"
#define VkglTestCase_010018_2 "rator.div_assign_effect.mediump_vec3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_010018, VkglTestCase_010018_1, VkglTestCase_010018_2);

#define VkglTestCase_010019_1 "dEQP-GLES3.functional.shaders.operator.binary_oper"
#define VkglTestCase_010019_2 "ator.div_assign_effect.mediump_vec3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_010019, VkglTestCase_010019_1, VkglTestCase_010019_2);

#define VkglTestCase_010020_1 "dEQP-GLES3.functional.shaders.operator.binary_op"
#define VkglTestCase_010020_2 "erator.div_assign_effect.highp_vec3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_010020, VkglTestCase_010020_1, VkglTestCase_010020_2);

#define VkglTestCase_010021_1 "dEQP-GLES3.functional.shaders.operator.binary_ope"
#define VkglTestCase_010021_2 "rator.div_assign_effect.highp_vec3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_010021, VkglTestCase_010021_1, VkglTestCase_010021_2);

#define VkglTestCase_010022_1 "dEQP-GLES3.functional.shaders.operator.binary_o"
#define VkglTestCase_010022_2 "perator.div_assign_effect.lowp_vec4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_010022, VkglTestCase_010022_1, VkglTestCase_010022_2);

#define VkglTestCase_010023_1 "dEQP-GLES3.functional.shaders.operator.binary_op"
#define VkglTestCase_010023_2 "erator.div_assign_effect.lowp_vec4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_010023, VkglTestCase_010023_1, VkglTestCase_010023_2);

#define VkglTestCase_010024_1 "dEQP-GLES3.functional.shaders.operator.binary_ope"
#define VkglTestCase_010024_2 "rator.div_assign_effect.mediump_vec4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_010024, VkglTestCase_010024_1, VkglTestCase_010024_2);

#define VkglTestCase_010025_1 "dEQP-GLES3.functional.shaders.operator.binary_oper"
#define VkglTestCase_010025_2 "ator.div_assign_effect.mediump_vec4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_010025, VkglTestCase_010025_1, VkglTestCase_010025_2);

#define VkglTestCase_010026_1 "dEQP-GLES3.functional.shaders.operator.binary_op"
#define VkglTestCase_010026_2 "erator.div_assign_effect.highp_vec4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_010026, VkglTestCase_010026_1, VkglTestCase_010026_2);

#define VkglTestCase_010027_1 "dEQP-GLES3.functional.shaders.operator.binary_ope"
#define VkglTestCase_010027_2 "rator.div_assign_effect.highp_vec4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_010027, VkglTestCase_010027_1, VkglTestCase_010027_2);

#define VkglTestCase_010028_1 "dEQP-GLES3.functional.shaders.operator.binary_o"
#define VkglTestCase_010028_2 "perator.div_assign_effect.lowp_ivec2_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_010028, VkglTestCase_010028_1, VkglTestCase_010028_2);

#define VkglTestCase_010029_1 "dEQP-GLES3.functional.shaders.operator.binary_op"
#define VkglTestCase_010029_2 "erator.div_assign_effect.lowp_ivec2_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_010029, VkglTestCase_010029_1, VkglTestCase_010029_2);

#define VkglTestCase_010030_1 "dEQP-GLES3.functional.shaders.operator.binary_op"
#define VkglTestCase_010030_2 "erator.div_assign_effect.mediump_ivec2_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_010030, VkglTestCase_010030_1, VkglTestCase_010030_2);

#define VkglTestCase_010031_1 "dEQP-GLES3.functional.shaders.operator.binary_ope"
#define VkglTestCase_010031_2 "rator.div_assign_effect.mediump_ivec2_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_010031, VkglTestCase_010031_1, VkglTestCase_010031_2);

#define VkglTestCase_010032_1 "dEQP-GLES3.functional.shaders.operator.binary_o"
#define VkglTestCase_010032_2 "perator.div_assign_effect.lowp_ivec3_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_010032, VkglTestCase_010032_1, VkglTestCase_010032_2);

#define VkglTestCase_010033_1 "dEQP-GLES3.functional.shaders.operator.binary_op"
#define VkglTestCase_010033_2 "erator.div_assign_effect.lowp_ivec3_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_010033, VkglTestCase_010033_1, VkglTestCase_010033_2);

#define VkglTestCase_010034_1 "dEQP-GLES3.functional.shaders.operator.binary_op"
#define VkglTestCase_010034_2 "erator.div_assign_effect.mediump_ivec3_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_010034, VkglTestCase_010034_1, VkglTestCase_010034_2);

#define VkglTestCase_010035_1 "dEQP-GLES3.functional.shaders.operator.binary_ope"
#define VkglTestCase_010035_2 "rator.div_assign_effect.mediump_ivec3_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_010035, VkglTestCase_010035_1, VkglTestCase_010035_2);

#define VkglTestCase_010036_1 "dEQP-GLES3.functional.shaders.operator.binary_o"
#define VkglTestCase_010036_2 "perator.div_assign_effect.lowp_ivec4_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_010036, VkglTestCase_010036_1, VkglTestCase_010036_2);

#define VkglTestCase_010037_1 "dEQP-GLES3.functional.shaders.operator.binary_op"
#define VkglTestCase_010037_2 "erator.div_assign_effect.lowp_ivec4_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_010037, VkglTestCase_010037_1, VkglTestCase_010037_2);

#define VkglTestCase_010038_1 "dEQP-GLES3.functional.shaders.operator.binary_op"
#define VkglTestCase_010038_2 "erator.div_assign_effect.mediump_ivec4_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_010038, VkglTestCase_010038_1, VkglTestCase_010038_2);

#define VkglTestCase_010039_1 "dEQP-GLES3.functional.shaders.operator.binary_ope"
#define VkglTestCase_010039_2 "rator.div_assign_effect.mediump_ivec4_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_010039, VkglTestCase_010039_1, VkglTestCase_010039_2);

#define VkglTestCase_010040_1 "dEQP-GLES3.functional.shaders.operator.binary_o"
#define VkglTestCase_010040_2 "perator.div_assign_effect.highp_ivec2_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_010040, VkglTestCase_010040_1, VkglTestCase_010040_2);

#define VkglTestCase_010041_1 "dEQP-GLES3.functional.shaders.operator.binary_op"
#define VkglTestCase_010041_2 "erator.div_assign_effect.highp_ivec2_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_010041, VkglTestCase_010041_1, VkglTestCase_010041_2);

#define VkglTestCase_010042_1 "dEQP-GLES3.functional.shaders.operator.binary_o"
#define VkglTestCase_010042_2 "perator.div_assign_effect.highp_ivec3_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_010042, VkglTestCase_010042_1, VkglTestCase_010042_2);

#define VkglTestCase_010043_1 "dEQP-GLES3.functional.shaders.operator.binary_op"
#define VkglTestCase_010043_2 "erator.div_assign_effect.highp_ivec3_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_010043, VkglTestCase_010043_1, VkglTestCase_010043_2);

#define VkglTestCase_010044_1 "dEQP-GLES3.functional.shaders.operator.binary_o"
#define VkglTestCase_010044_2 "perator.div_assign_effect.highp_ivec4_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_010044, VkglTestCase_010044_1, VkglTestCase_010044_2);

#define VkglTestCase_010045_1 "dEQP-GLES3.functional.shaders.operator.binary_op"
#define VkglTestCase_010045_2 "erator.div_assign_effect.highp_ivec4_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_010045, VkglTestCase_010045_1, VkglTestCase_010045_2);

#define VkglTestCase_010046_1 "dEQP-GLES3.functional.shaders.operator.binary_o"
#define VkglTestCase_010046_2 "perator.div_assign_effect.lowp_uvec2_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_010046, VkglTestCase_010046_1, VkglTestCase_010046_2);

#define VkglTestCase_010047_1 "dEQP-GLES3.functional.shaders.operator.binary_op"
#define VkglTestCase_010047_2 "erator.div_assign_effect.lowp_uvec2_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_010047, VkglTestCase_010047_1, VkglTestCase_010047_2);

#define VkglTestCase_010048_1 "dEQP-GLES3.functional.shaders.operator.binary_ope"
#define VkglTestCase_010048_2 "rator.div_assign_effect.mediump_uvec2_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_010048, VkglTestCase_010048_1, VkglTestCase_010048_2);

#define VkglTestCase_010049_1 "dEQP-GLES3.functional.shaders.operator.binary_oper"
#define VkglTestCase_010049_2 "ator.div_assign_effect.mediump_uvec2_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_010049, VkglTestCase_010049_1, VkglTestCase_010049_2);

#define VkglTestCase_010050_1 "dEQP-GLES3.functional.shaders.operator.binary_o"
#define VkglTestCase_010050_2 "perator.div_assign_effect.lowp_uvec3_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_010050, VkglTestCase_010050_1, VkglTestCase_010050_2);

#define VkglTestCase_010051_1 "dEQP-GLES3.functional.shaders.operator.binary_op"
#define VkglTestCase_010051_2 "erator.div_assign_effect.lowp_uvec3_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_010051, VkglTestCase_010051_1, VkglTestCase_010051_2);

#define VkglTestCase_010052_1 "dEQP-GLES3.functional.shaders.operator.binary_ope"
#define VkglTestCase_010052_2 "rator.div_assign_effect.mediump_uvec3_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_010052, VkglTestCase_010052_1, VkglTestCase_010052_2);

#define VkglTestCase_010053_1 "dEQP-GLES3.functional.shaders.operator.binary_oper"
#define VkglTestCase_010053_2 "ator.div_assign_effect.mediump_uvec3_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_010053, VkglTestCase_010053_1, VkglTestCase_010053_2);

#define VkglTestCase_010054_1 "dEQP-GLES3.functional.shaders.operator.binary_o"
#define VkglTestCase_010054_2 "perator.div_assign_effect.lowp_uvec4_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_010054, VkglTestCase_010054_1, VkglTestCase_010054_2);

#define VkglTestCase_010055_1 "dEQP-GLES3.functional.shaders.operator.binary_op"
#define VkglTestCase_010055_2 "erator.div_assign_effect.lowp_uvec4_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_010055, VkglTestCase_010055_1, VkglTestCase_010055_2);

#define VkglTestCase_010056_1 "dEQP-GLES3.functional.shaders.operator.binary_ope"
#define VkglTestCase_010056_2 "rator.div_assign_effect.mediump_uvec4_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_010056, VkglTestCase_010056_1, VkglTestCase_010056_2);

#define VkglTestCase_010057_1 "dEQP-GLES3.functional.shaders.operator.binary_oper"
#define VkglTestCase_010057_2 "ator.div_assign_effect.mediump_uvec4_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_010057, VkglTestCase_010057_1, VkglTestCase_010057_2);

#define VkglTestCase_010058_1 "dEQP-GLES3.functional.shaders.operator.binary_op"
#define VkglTestCase_010058_2 "erator.div_assign_effect.highp_uvec2_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_010058, VkglTestCase_010058_1, VkglTestCase_010058_2);

#define VkglTestCase_010059_1 "dEQP-GLES3.functional.shaders.operator.binary_ope"
#define VkglTestCase_010059_2 "rator.div_assign_effect.highp_uvec2_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_010059, VkglTestCase_010059_1, VkglTestCase_010059_2);

#define VkglTestCase_010060_1 "dEQP-GLES3.functional.shaders.operator.binary_op"
#define VkglTestCase_010060_2 "erator.div_assign_effect.highp_uvec3_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_010060, VkglTestCase_010060_1, VkglTestCase_010060_2);

#define VkglTestCase_010061_1 "dEQP-GLES3.functional.shaders.operator.binary_ope"
#define VkglTestCase_010061_2 "rator.div_assign_effect.highp_uvec3_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_010061, VkglTestCase_010061_1, VkglTestCase_010061_2);

#define VkglTestCase_010062_1 "dEQP-GLES3.functional.shaders.operator.binary_op"
#define VkglTestCase_010062_2 "erator.div_assign_effect.highp_uvec4_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_010062, VkglTestCase_010062_1, VkglTestCase_010062_2);

#define VkglTestCase_010063_1 "dEQP-GLES3.functional.shaders.operator.binary_ope"
#define VkglTestCase_010063_2 "rator.div_assign_effect.highp_uvec4_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_010063, VkglTestCase_010063_1, VkglTestCase_010063_2);
