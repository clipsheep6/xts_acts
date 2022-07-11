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
#include "../ActsDeqpgles30012TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_011984_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_011984_2 "binary_operator.equal.lowp_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011984, VkglTestCase_011984_1, VkglTestCase_011984_2);

#define VkglTestCase_011985_1 "dEQP-GLES3.functional.shaders.operator.b"
#define VkglTestCase_011985_2 "inary_operator.equal.lowp_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011985, VkglTestCase_011985_1, VkglTestCase_011985_2);

#define VkglTestCase_011986_1 "dEQP-GLES3.functional.shaders.operator.b"
#define VkglTestCase_011986_2 "inary_operator.equal.mediump_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011986, VkglTestCase_011986_1, VkglTestCase_011986_2);

#define VkglTestCase_011987_1 "dEQP-GLES3.functional.shaders.operator.bi"
#define VkglTestCase_011987_2 "nary_operator.equal.mediump_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011987, VkglTestCase_011987_1, VkglTestCase_011987_2);

#define VkglTestCase_011988_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_011988_2 "binary_operator.equal.highp_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011988, VkglTestCase_011988_1, VkglTestCase_011988_2);

#define VkglTestCase_011989_1 "dEQP-GLES3.functional.shaders.operator.b"
#define VkglTestCase_011989_2 "inary_operator.equal.highp_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011989, VkglTestCase_011989_1, VkglTestCase_011989_2);

#define VkglTestCase_011990_1 "dEQP-GLES3.functional.shaders.operator"
#define VkglTestCase_011990_2 ".binary_operator.equal.lowp_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011990, VkglTestCase_011990_1, VkglTestCase_011990_2);

#define VkglTestCase_011991_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_011991_2 "binary_operator.equal.lowp_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011991, VkglTestCase_011991_1, VkglTestCase_011991_2);

#define VkglTestCase_011992_1 "dEQP-GLES3.functional.shaders.operator.b"
#define VkglTestCase_011992_2 "inary_operator.equal.mediump_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011992, VkglTestCase_011992_1, VkglTestCase_011992_2);

#define VkglTestCase_011993_1 "dEQP-GLES3.functional.shaders.operator.bi"
#define VkglTestCase_011993_2 "nary_operator.equal.mediump_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011993, VkglTestCase_011993_1, VkglTestCase_011993_2);

#define VkglTestCase_011994_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_011994_2 "binary_operator.equal.highp_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011994, VkglTestCase_011994_1, VkglTestCase_011994_2);

#define VkglTestCase_011995_1 "dEQP-GLES3.functional.shaders.operator.b"
#define VkglTestCase_011995_2 "inary_operator.equal.highp_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011995, VkglTestCase_011995_1, VkglTestCase_011995_2);

#define VkglTestCase_011996_1 "dEQP-GLES3.functional.shaders.operator"
#define VkglTestCase_011996_2 ".binary_operator.equal.lowp_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011996, VkglTestCase_011996_1, VkglTestCase_011996_2);

#define VkglTestCase_011997_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_011997_2 "binary_operator.equal.lowp_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011997, VkglTestCase_011997_1, VkglTestCase_011997_2);

#define VkglTestCase_011998_1 "dEQP-GLES3.functional.shaders.operator.b"
#define VkglTestCase_011998_2 "inary_operator.equal.mediump_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011998, VkglTestCase_011998_1, VkglTestCase_011998_2);

#define VkglTestCase_011999_1 "dEQP-GLES3.functional.shaders.operator.bi"
#define VkglTestCase_011999_2 "nary_operator.equal.mediump_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011999, VkglTestCase_011999_1, VkglTestCase_011999_2);

#define VkglTestCase_012000_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_012000_2 "binary_operator.equal.highp_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_012000, VkglTestCase_012000_1, VkglTestCase_012000_2);

#define VkglTestCase_012001_1 "dEQP-GLES3.functional.shaders.operator.b"
#define VkglTestCase_012001_2 "inary_operator.equal.highp_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_012001, VkglTestCase_012001_1, VkglTestCase_012001_2);

#define VkglTestCase_012002_1 "dEQP-GLES3.functional.shaders.operator"
#define VkglTestCase_012002_2 ".binary_operator.equal.lowp_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_012002, VkglTestCase_012002_1, VkglTestCase_012002_2);

#define VkglTestCase_012003_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_012003_2 "binary_operator.equal.lowp_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_012003, VkglTestCase_012003_1, VkglTestCase_012003_2);

#define VkglTestCase_012004_1 "dEQP-GLES3.functional.shaders.operator.b"
#define VkglTestCase_012004_2 "inary_operator.equal.mediump_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_012004, VkglTestCase_012004_1, VkglTestCase_012004_2);

#define VkglTestCase_012005_1 "dEQP-GLES3.functional.shaders.operator.bi"
#define VkglTestCase_012005_2 "nary_operator.equal.mediump_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_012005, VkglTestCase_012005_1, VkglTestCase_012005_2);

#define VkglTestCase_012006_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_012006_2 "binary_operator.equal.highp_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_012006, VkglTestCase_012006_1, VkglTestCase_012006_2);

#define VkglTestCase_012007_1 "dEQP-GLES3.functional.shaders.operator.b"
#define VkglTestCase_012007_2 "inary_operator.equal.highp_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_012007, VkglTestCase_012007_1, VkglTestCase_012007_2);

#define VkglTestCase_012008_1 "dEQP-GLES3.functional.shaders.operator"
#define VkglTestCase_012008_2 ".binary_operator.equal.lowp_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_012008, VkglTestCase_012008_1, VkglTestCase_012008_2);

#define VkglTestCase_012009_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_012009_2 "binary_operator.equal.lowp_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_012009, VkglTestCase_012009_1, VkglTestCase_012009_2);

#define VkglTestCase_012010_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_012010_2 "binary_operator.equal.mediump_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_012010, VkglTestCase_012010_1, VkglTestCase_012010_2);

#define VkglTestCase_012011_1 "dEQP-GLES3.functional.shaders.operator.b"
#define VkglTestCase_012011_2 "inary_operator.equal.mediump_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_012011, VkglTestCase_012011_1, VkglTestCase_012011_2);

#define VkglTestCase_012012_1 "dEQP-GLES3.functional.shaders.operator"
#define VkglTestCase_012012_2 ".binary_operator.equal.highp_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_012012, VkglTestCase_012012_1, VkglTestCase_012012_2);

#define VkglTestCase_012013_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_012013_2 "binary_operator.equal.highp_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_012013, VkglTestCase_012013_1, VkglTestCase_012013_2);

#define VkglTestCase_012014_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_012014_2 "binary_operator.equal.lowp_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_012014, VkglTestCase_012014_1, VkglTestCase_012014_2);

#define VkglTestCase_012015_1 "dEQP-GLES3.functional.shaders.operator.b"
#define VkglTestCase_012015_2 "inary_operator.equal.lowp_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_012015, VkglTestCase_012015_1, VkglTestCase_012015_2);

#define VkglTestCase_012016_1 "dEQP-GLES3.functional.shaders.operator.b"
#define VkglTestCase_012016_2 "inary_operator.equal.mediump_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_012016, VkglTestCase_012016_1, VkglTestCase_012016_2);

#define VkglTestCase_012017_1 "dEQP-GLES3.functional.shaders.operator.bi"
#define VkglTestCase_012017_2 "nary_operator.equal.mediump_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_012017, VkglTestCase_012017_1, VkglTestCase_012017_2);

#define VkglTestCase_012018_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_012018_2 "binary_operator.equal.highp_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_012018, VkglTestCase_012018_1, VkglTestCase_012018_2);

#define VkglTestCase_012019_1 "dEQP-GLES3.functional.shaders.operator.b"
#define VkglTestCase_012019_2 "inary_operator.equal.highp_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_012019, VkglTestCase_012019_1, VkglTestCase_012019_2);

#define VkglTestCase_012020_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_012020_2 "binary_operator.equal.lowp_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_012020, VkglTestCase_012020_1, VkglTestCase_012020_2);

#define VkglTestCase_012021_1 "dEQP-GLES3.functional.shaders.operator.b"
#define VkglTestCase_012021_2 "inary_operator.equal.lowp_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_012021, VkglTestCase_012021_1, VkglTestCase_012021_2);

#define VkglTestCase_012022_1 "dEQP-GLES3.functional.shaders.operator.b"
#define VkglTestCase_012022_2 "inary_operator.equal.mediump_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_012022, VkglTestCase_012022_1, VkglTestCase_012022_2);

#define VkglTestCase_012023_1 "dEQP-GLES3.functional.shaders.operator.bi"
#define VkglTestCase_012023_2 "nary_operator.equal.mediump_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_012023, VkglTestCase_012023_1, VkglTestCase_012023_2);

#define VkglTestCase_012024_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_012024_2 "binary_operator.equal.highp_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_012024, VkglTestCase_012024_1, VkglTestCase_012024_2);

#define VkglTestCase_012025_1 "dEQP-GLES3.functional.shaders.operator.b"
#define VkglTestCase_012025_2 "inary_operator.equal.highp_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_012025, VkglTestCase_012025_1, VkglTestCase_012025_2);

#define VkglTestCase_012026_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_012026_2 "binary_operator.equal.lowp_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_012026, VkglTestCase_012026_1, VkglTestCase_012026_2);

#define VkglTestCase_012027_1 "dEQP-GLES3.functional.shaders.operator.b"
#define VkglTestCase_012027_2 "inary_operator.equal.lowp_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_012027, VkglTestCase_012027_1, VkglTestCase_012027_2);

#define VkglTestCase_012028_1 "dEQP-GLES3.functional.shaders.operator.b"
#define VkglTestCase_012028_2 "inary_operator.equal.mediump_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_012028, VkglTestCase_012028_1, VkglTestCase_012028_2);

#define VkglTestCase_012029_1 "dEQP-GLES3.functional.shaders.operator.bi"
#define VkglTestCase_012029_2 "nary_operator.equal.mediump_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_012029, VkglTestCase_012029_1, VkglTestCase_012029_2);

#define VkglTestCase_012030_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_012030_2 "binary_operator.equal.highp_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_012030, VkglTestCase_012030_1, VkglTestCase_012030_2);

#define VkglTestCase_012031_1 "dEQP-GLES3.functional.shaders.operator.b"
#define VkglTestCase_012031_2 "inary_operator.equal.highp_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_012031, VkglTestCase_012031_1, VkglTestCase_012031_2);

#define VkglTestCase_012032_1 "dEQP-GLES3.functional.shaders.operator"
#define VkglTestCase_012032_2 ".binary_operator.equal.lowp_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_012032, VkglTestCase_012032_1, VkglTestCase_012032_2);

#define VkglTestCase_012033_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_012033_2 "binary_operator.equal.lowp_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_012033, VkglTestCase_012033_1, VkglTestCase_012033_2);

#define VkglTestCase_012034_1 "dEQP-GLES3.functional.shaders.operator.b"
#define VkglTestCase_012034_2 "inary_operator.equal.mediump_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_012034, VkglTestCase_012034_1, VkglTestCase_012034_2);

#define VkglTestCase_012035_1 "dEQP-GLES3.functional.shaders.operator.bi"
#define VkglTestCase_012035_2 "nary_operator.equal.mediump_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_012035, VkglTestCase_012035_1, VkglTestCase_012035_2);

#define VkglTestCase_012036_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_012036_2 "binary_operator.equal.highp_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_012036, VkglTestCase_012036_1, VkglTestCase_012036_2);

#define VkglTestCase_012037_1 "dEQP-GLES3.functional.shaders.operator.b"
#define VkglTestCase_012037_2 "inary_operator.equal.highp_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_012037, VkglTestCase_012037_1, VkglTestCase_012037_2);

#define VkglTestCase_012038_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_012038_2 "binary_operator.equal.lowp_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_012038, VkglTestCase_012038_1, VkglTestCase_012038_2);

#define VkglTestCase_012039_1 "dEQP-GLES3.functional.shaders.operator.b"
#define VkglTestCase_012039_2 "inary_operator.equal.lowp_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_012039, VkglTestCase_012039_1, VkglTestCase_012039_2);

#define VkglTestCase_012040_1 "dEQP-GLES3.functional.shaders.operator.b"
#define VkglTestCase_012040_2 "inary_operator.equal.mediump_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_012040, VkglTestCase_012040_1, VkglTestCase_012040_2);

#define VkglTestCase_012041_1 "dEQP-GLES3.functional.shaders.operator.bi"
#define VkglTestCase_012041_2 "nary_operator.equal.mediump_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_012041, VkglTestCase_012041_1, VkglTestCase_012041_2);

#define VkglTestCase_012042_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_012042_2 "binary_operator.equal.highp_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_012042, VkglTestCase_012042_1, VkglTestCase_012042_2);

#define VkglTestCase_012043_1 "dEQP-GLES3.functional.shaders.operator.b"
#define VkglTestCase_012043_2 "inary_operator.equal.highp_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_012043, VkglTestCase_012043_1, VkglTestCase_012043_2);

#define VkglTestCase_012044_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_012044_2 "binary_operator.equal.lowp_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_012044, VkglTestCase_012044_1, VkglTestCase_012044_2);

#define VkglTestCase_012045_1 "dEQP-GLES3.functional.shaders.operator.b"
#define VkglTestCase_012045_2 "inary_operator.equal.lowp_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_012045, VkglTestCase_012045_1, VkglTestCase_012045_2);

#define VkglTestCase_012046_1 "dEQP-GLES3.functional.shaders.operator.b"
#define VkglTestCase_012046_2 "inary_operator.equal.mediump_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_012046, VkglTestCase_012046_1, VkglTestCase_012046_2);

#define VkglTestCase_012047_1 "dEQP-GLES3.functional.shaders.operator.bi"
#define VkglTestCase_012047_2 "nary_operator.equal.mediump_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_012047, VkglTestCase_012047_1, VkglTestCase_012047_2);

#define VkglTestCase_012048_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_012048_2 "binary_operator.equal.highp_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_012048, VkglTestCase_012048_1, VkglTestCase_012048_2);

#define VkglTestCase_012049_1 "dEQP-GLES3.functional.shaders.operator.b"
#define VkglTestCase_012049_2 "inary_operator.equal.highp_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_012049, VkglTestCase_012049_1, VkglTestCase_012049_2);

#define VkglTestCase_012050_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_012050_2 "binary_operator.equal.lowp_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_012050, VkglTestCase_012050_1, VkglTestCase_012050_2);

#define VkglTestCase_012051_1 "dEQP-GLES3.functional.shaders.operator.b"
#define VkglTestCase_012051_2 "inary_operator.equal.lowp_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_012051, VkglTestCase_012051_1, VkglTestCase_012051_2);

#define VkglTestCase_012052_1 "dEQP-GLES3.functional.shaders.operator.b"
#define VkglTestCase_012052_2 "inary_operator.equal.mediump_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_012052, VkglTestCase_012052_1, VkglTestCase_012052_2);

#define VkglTestCase_012053_1 "dEQP-GLES3.functional.shaders.operator.bi"
#define VkglTestCase_012053_2 "nary_operator.equal.mediump_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_012053, VkglTestCase_012053_1, VkglTestCase_012053_2);

#define VkglTestCase_012054_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_012054_2 "binary_operator.equal.highp_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_012054, VkglTestCase_012054_1, VkglTestCase_012054_2);

#define VkglTestCase_012055_1 "dEQP-GLES3.functional.shaders.operator.b"
#define VkglTestCase_012055_2 "inary_operator.equal.highp_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_012055, VkglTestCase_012055_1, VkglTestCase_012055_2);

#define VkglTestCase_012056_1 "dEQP-GLES3.functional.shaders.operat"
#define VkglTestCase_012056_2 "or.binary_operator.equal.bool_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_012056, VkglTestCase_012056_1, VkglTestCase_012056_2);

#define VkglTestCase_012057_1 "dEQP-GLES3.functional.shaders.operato"
#define VkglTestCase_012057_2 "r.binary_operator.equal.bool_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_012057, VkglTestCase_012057_1, VkglTestCase_012057_2);

#define VkglTestCase_012058_1 "dEQP-GLES3.functional.shaders.operat"
#define VkglTestCase_012058_2 "or.binary_operator.equal.bvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_012058, VkglTestCase_012058_1, VkglTestCase_012058_2);

#define VkglTestCase_012059_1 "dEQP-GLES3.functional.shaders.operato"
#define VkglTestCase_012059_2 "r.binary_operator.equal.bvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_012059, VkglTestCase_012059_1, VkglTestCase_012059_2);

#define VkglTestCase_012060_1 "dEQP-GLES3.functional.shaders.operat"
#define VkglTestCase_012060_2 "or.binary_operator.equal.bvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_012060, VkglTestCase_012060_1, VkglTestCase_012060_2);

#define VkglTestCase_012061_1 "dEQP-GLES3.functional.shaders.operato"
#define VkglTestCase_012061_2 "r.binary_operator.equal.bvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_012061, VkglTestCase_012061_1, VkglTestCase_012061_2);

#define VkglTestCase_012062_1 "dEQP-GLES3.functional.shaders.operat"
#define VkglTestCase_012062_2 "or.binary_operator.equal.bvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_012062, VkglTestCase_012062_1, VkglTestCase_012062_2);

#define VkglTestCase_012063_1 "dEQP-GLES3.functional.shaders.operato"
#define VkglTestCase_012063_2 "r.binary_operator.equal.bvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_012063, VkglTestCase_012063_1, VkglTestCase_012063_2);
