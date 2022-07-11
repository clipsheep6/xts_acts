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
#include "../ActsDeqpgles20002TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_001101_1 "dEQP-GLES2.functional.shaders.conversion"
#define VkglTestCase_001101_2 "s.vector_combine.vec2_vec2_to_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001101, VkglTestCase_001101_1, VkglTestCase_001101_2);

#define VkglTestCase_001102_1 "dEQP-GLES2.functional.shaders.conversions"
#define VkglTestCase_001102_2 ".vector_combine.vec2_vec2_to_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001102, VkglTestCase_001102_1, VkglTestCase_001102_2);

#define VkglTestCase_001103_1 "dEQP-GLES2.functional.shaders.conversions"
#define VkglTestCase_001103_2 ".vector_combine.vec2_vec2_to_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001103, VkglTestCase_001103_1, VkglTestCase_001103_2);

#define VkglTestCase_001104_1 "dEQP-GLES2.functional.shaders.conversions."
#define VkglTestCase_001104_2 "vector_combine.vec2_vec2_to_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001104, VkglTestCase_001104_1, VkglTestCase_001104_2);

#define VkglTestCase_001105_1 "dEQP-GLES2.functional.shaders.conversions"
#define VkglTestCase_001105_2 ".vector_combine.vec2_vec2_to_bvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001105, VkglTestCase_001105_1, VkglTestCase_001105_2);

#define VkglTestCase_001106_1 "dEQP-GLES2.functional.shaders.conversions."
#define VkglTestCase_001106_2 "vector_combine.vec2_vec2_to_bvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001106, VkglTestCase_001106_1, VkglTestCase_001106_2);

#define VkglTestCase_001107_1 "dEQP-GLES2.functional.shaders.conversions"
#define VkglTestCase_001107_2 ".vector_combine.bvec2_bvec2_to_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001107, VkglTestCase_001107_1, VkglTestCase_001107_2);

#define VkglTestCase_001108_1 "dEQP-GLES2.functional.shaders.conversions."
#define VkglTestCase_001108_2 "vector_combine.bvec2_bvec2_to_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001108, VkglTestCase_001108_1, VkglTestCase_001108_2);

#define VkglTestCase_001109_1 "dEQP-GLES2.functional.shaders.conversions."
#define VkglTestCase_001109_2 "vector_combine.bvec2_bvec2_to_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001109, VkglTestCase_001109_1, VkglTestCase_001109_2);

#define VkglTestCase_001110_1 "dEQP-GLES2.functional.shaders.conversions.v"
#define VkglTestCase_001110_2 "ector_combine.bvec2_bvec2_to_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001110, VkglTestCase_001110_1, VkglTestCase_001110_2);

#define VkglTestCase_001111_1 "dEQP-GLES2.functional.shaders.conversions."
#define VkglTestCase_001111_2 "vector_combine.bvec2_bvec2_to_bvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001111, VkglTestCase_001111_1, VkglTestCase_001111_2);

#define VkglTestCase_001112_1 "dEQP-GLES2.functional.shaders.conversions.v"
#define VkglTestCase_001112_2 "ector_combine.bvec2_bvec2_to_bvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001112, VkglTestCase_001112_1, VkglTestCase_001112_2);

#define VkglTestCase_001113_1 "dEQP-GLES2.functional.shaders.conversions.vecto"
#define VkglTestCase_001113_2 "r_combine.float_float_float_float_to_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001113, VkglTestCase_001113_1, VkglTestCase_001113_2);

#define VkglTestCase_001114_1 "dEQP-GLES2.functional.shaders.conversions.vector"
#define VkglTestCase_001114_2 "_combine.float_float_float_float_to_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001114, VkglTestCase_001114_1, VkglTestCase_001114_2);

#define VkglTestCase_001115_1 "dEQP-GLES2.functional.shaders.conversions.vector"
#define VkglTestCase_001115_2 "_combine.float_float_float_float_to_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001115, VkglTestCase_001115_1, VkglTestCase_001115_2);

#define VkglTestCase_001116_1 "dEQP-GLES2.functional.shaders.conversions.vector_"
#define VkglTestCase_001116_2 "combine.float_float_float_float_to_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001116, VkglTestCase_001116_1, VkglTestCase_001116_2);

#define VkglTestCase_001117_1 "dEQP-GLES2.functional.shaders.conversions.vector"
#define VkglTestCase_001117_2 "_combine.float_float_float_float_to_bvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001117, VkglTestCase_001117_1, VkglTestCase_001117_2);

#define VkglTestCase_001118_1 "dEQP-GLES2.functional.shaders.conversions.vector_"
#define VkglTestCase_001118_2 "combine.float_float_float_float_to_bvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001118, VkglTestCase_001118_1, VkglTestCase_001118_2);

#define VkglTestCase_001119_1 "dEQP-GLES2.functional.shaders.conversions.v"
#define VkglTestCase_001119_2 "ector_combine.int_int_int_int_to_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001119, VkglTestCase_001119_1, VkglTestCase_001119_2);

#define VkglTestCase_001120_1 "dEQP-GLES2.functional.shaders.conversions.ve"
#define VkglTestCase_001120_2 "ctor_combine.int_int_int_int_to_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001120, VkglTestCase_001120_1, VkglTestCase_001120_2);

#define VkglTestCase_001121_1 "dEQP-GLES2.functional.shaders.conversions.ve"
#define VkglTestCase_001121_2 "ctor_combine.int_int_int_int_to_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001121, VkglTestCase_001121_1, VkglTestCase_001121_2);

#define VkglTestCase_001122_1 "dEQP-GLES2.functional.shaders.conversions.vec"
#define VkglTestCase_001122_2 "tor_combine.int_int_int_int_to_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001122, VkglTestCase_001122_1, VkglTestCase_001122_2);

#define VkglTestCase_001123_1 "dEQP-GLES2.functional.shaders.conversions.ve"
#define VkglTestCase_001123_2 "ctor_combine.int_int_int_int_to_bvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001123, VkglTestCase_001123_1, VkglTestCase_001123_2);

#define VkglTestCase_001124_1 "dEQP-GLES2.functional.shaders.conversions.vec"
#define VkglTestCase_001124_2 "tor_combine.int_int_int_int_to_bvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001124, VkglTestCase_001124_1, VkglTestCase_001124_2);

#define VkglTestCase_001125_1 "dEQP-GLES2.functional.shaders.conversions.vec"
#define VkglTestCase_001125_2 "tor_combine.bool_bool_bool_bool_to_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001125, VkglTestCase_001125_1, VkglTestCase_001125_2);

#define VkglTestCase_001126_1 "dEQP-GLES2.functional.shaders.conversions.vect"
#define VkglTestCase_001126_2 "or_combine.bool_bool_bool_bool_to_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001126, VkglTestCase_001126_1, VkglTestCase_001126_2);

#define VkglTestCase_001127_1 "dEQP-GLES2.functional.shaders.conversions.vect"
#define VkglTestCase_001127_2 "or_combine.bool_bool_bool_bool_to_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001127, VkglTestCase_001127_1, VkglTestCase_001127_2);

#define VkglTestCase_001128_1 "dEQP-GLES2.functional.shaders.conversions.vecto"
#define VkglTestCase_001128_2 "r_combine.bool_bool_bool_bool_to_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001128, VkglTestCase_001128_1, VkglTestCase_001128_2);

#define VkglTestCase_001129_1 "dEQP-GLES2.functional.shaders.conversions.vect"
#define VkglTestCase_001129_2 "or_combine.bool_bool_bool_bool_to_bvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001129, VkglTestCase_001129_1, VkglTestCase_001129_2);

#define VkglTestCase_001130_1 "dEQP-GLES2.functional.shaders.conversions.vecto"
#define VkglTestCase_001130_2 "r_combine.bool_bool_bool_bool_to_bvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001130, VkglTestCase_001130_1, VkglTestCase_001130_2);

#define VkglTestCase_001131_1 "dEQP-GLES2.functional.shaders.conversions.vec"
#define VkglTestCase_001131_2 "tor_combine.bool_float_int_bool_to_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001131, VkglTestCase_001131_1, VkglTestCase_001131_2);

#define VkglTestCase_001132_1 "dEQP-GLES2.functional.shaders.conversions.vect"
#define VkglTestCase_001132_2 "or_combine.bool_float_int_bool_to_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001132, VkglTestCase_001132_1, VkglTestCase_001132_2);

#define VkglTestCase_001133_1 "dEQP-GLES2.functional.shaders.conversions.vect"
#define VkglTestCase_001133_2 "or_combine.bool_float_int_bool_to_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001133, VkglTestCase_001133_1, VkglTestCase_001133_2);

#define VkglTestCase_001134_1 "dEQP-GLES2.functional.shaders.conversions.vecto"
#define VkglTestCase_001134_2 "r_combine.bool_float_int_bool_to_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001134, VkglTestCase_001134_1, VkglTestCase_001134_2);

#define VkglTestCase_001135_1 "dEQP-GLES2.functional.shaders.conversions.vect"
#define VkglTestCase_001135_2 "or_combine.bool_float_int_bool_to_bvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001135, VkglTestCase_001135_1, VkglTestCase_001135_2);

#define VkglTestCase_001136_1 "dEQP-GLES2.functional.shaders.conversions.vecto"
#define VkglTestCase_001136_2 "r_combine.bool_float_int_bool_to_bvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001136, VkglTestCase_001136_1, VkglTestCase_001136_2);

#define VkglTestCase_001137_1 "dEQP-GLES2.functional.shaders.conversions"
#define VkglTestCase_001137_2 ".vector_combine.vec2_ivec2_to_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001137, VkglTestCase_001137_1, VkglTestCase_001137_2);

#define VkglTestCase_001138_1 "dEQP-GLES2.functional.shaders.conversions."
#define VkglTestCase_001138_2 "vector_combine.vec2_ivec2_to_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001138, VkglTestCase_001138_1, VkglTestCase_001138_2);

#define VkglTestCase_001139_1 "dEQP-GLES2.functional.shaders.conversions"
#define VkglTestCase_001139_2 ".vector_combine.vec2_ivec2_to_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001139, VkglTestCase_001139_1, VkglTestCase_001139_2);

#define VkglTestCase_001140_1 "dEQP-GLES2.functional.shaders.conversions."
#define VkglTestCase_001140_2 "vector_combine.vec2_ivec2_to_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001140, VkglTestCase_001140_1, VkglTestCase_001140_2);

#define VkglTestCase_001141_1 "dEQP-GLES2.functional.shaders.conversions"
#define VkglTestCase_001141_2 ".vector_combine.vec2_ivec2_to_bvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001141, VkglTestCase_001141_1, VkglTestCase_001141_2);

#define VkglTestCase_001142_1 "dEQP-GLES2.functional.shaders.conversions."
#define VkglTestCase_001142_2 "vector_combine.vec2_ivec2_to_bvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001142, VkglTestCase_001142_1, VkglTestCase_001142_2);

#define VkglTestCase_001143_1 "dEQP-GLES2.functional.shaders.conversions"
#define VkglTestCase_001143_2 ".vector_combine.vec2_bvec2_to_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001143, VkglTestCase_001143_1, VkglTestCase_001143_2);

#define VkglTestCase_001144_1 "dEQP-GLES2.functional.shaders.conversions."
#define VkglTestCase_001144_2 "vector_combine.vec2_bvec2_to_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001144, VkglTestCase_001144_1, VkglTestCase_001144_2);

#define VkglTestCase_001145_1 "dEQP-GLES2.functional.shaders.conversions"
#define VkglTestCase_001145_2 ".vector_combine.vec2_bvec2_to_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001145, VkglTestCase_001145_1, VkglTestCase_001145_2);

#define VkglTestCase_001146_1 "dEQP-GLES2.functional.shaders.conversions."
#define VkglTestCase_001146_2 "vector_combine.vec2_bvec2_to_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001146, VkglTestCase_001146_1, VkglTestCase_001146_2);

#define VkglTestCase_001147_1 "dEQP-GLES2.functional.shaders.conversions"
#define VkglTestCase_001147_2 ".vector_combine.vec2_bvec2_to_bvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001147, VkglTestCase_001147_1, VkglTestCase_001147_2);

#define VkglTestCase_001148_1 "dEQP-GLES2.functional.shaders.conversions."
#define VkglTestCase_001148_2 "vector_combine.vec2_bvec2_to_bvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001148, VkglTestCase_001148_1, VkglTestCase_001148_2);

#define VkglTestCase_001149_1 "dEQP-GLES2.functional.shaders.conversions"
#define VkglTestCase_001149_2 ".vector_combine.bvec3_float_to_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001149, VkglTestCase_001149_1, VkglTestCase_001149_2);

#define VkglTestCase_001150_1 "dEQP-GLES2.functional.shaders.conversions."
#define VkglTestCase_001150_2 "vector_combine.bvec3_float_to_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001150, VkglTestCase_001150_1, VkglTestCase_001150_2);

#define VkglTestCase_001151_1 "dEQP-GLES2.functional.shaders.conversions."
#define VkglTestCase_001151_2 "vector_combine.bvec3_float_to_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001151, VkglTestCase_001151_1, VkglTestCase_001151_2);

#define VkglTestCase_001152_1 "dEQP-GLES2.functional.shaders.conversions.v"
#define VkglTestCase_001152_2 "ector_combine.bvec3_float_to_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001152, VkglTestCase_001152_1, VkglTestCase_001152_2);

#define VkglTestCase_001153_1 "dEQP-GLES2.functional.shaders.conversions."
#define VkglTestCase_001153_2 "vector_combine.bvec3_float_to_bvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001153, VkglTestCase_001153_1, VkglTestCase_001153_2);

#define VkglTestCase_001154_1 "dEQP-GLES2.functional.shaders.conversions.v"
#define VkglTestCase_001154_2 "ector_combine.bvec3_float_to_bvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001154, VkglTestCase_001154_1, VkglTestCase_001154_2);

#define VkglTestCase_001155_1 "dEQP-GLES2.functional.shaders.conversions"
#define VkglTestCase_001155_2 ".vector_combine.vec3_float_to_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001155, VkglTestCase_001155_1, VkglTestCase_001155_2);

#define VkglTestCase_001156_1 "dEQP-GLES2.functional.shaders.conversions."
#define VkglTestCase_001156_2 "vector_combine.vec3_float_to_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001156, VkglTestCase_001156_1, VkglTestCase_001156_2);

#define VkglTestCase_001157_1 "dEQP-GLES2.functional.shaders.conversions"
#define VkglTestCase_001157_2 ".vector_combine.vec3_float_to_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001157, VkglTestCase_001157_1, VkglTestCase_001157_2);

#define VkglTestCase_001158_1 "dEQP-GLES2.functional.shaders.conversions."
#define VkglTestCase_001158_2 "vector_combine.vec3_float_to_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001158, VkglTestCase_001158_1, VkglTestCase_001158_2);

#define VkglTestCase_001159_1 "dEQP-GLES2.functional.shaders.conversions"
#define VkglTestCase_001159_2 ".vector_combine.vec3_float_to_bvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001159, VkglTestCase_001159_1, VkglTestCase_001159_2);

#define VkglTestCase_001160_1 "dEQP-GLES2.functional.shaders.conversions."
#define VkglTestCase_001160_2 "vector_combine.vec3_float_to_bvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001160, VkglTestCase_001160_1, VkglTestCase_001160_2);

#define VkglTestCase_001161_1 "dEQP-GLES2.functional.shaders.conversions."
#define VkglTestCase_001161_2 "vector_combine.int_ivec2_int_to_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001161, VkglTestCase_001161_1, VkglTestCase_001161_2);

#define VkglTestCase_001162_1 "dEQP-GLES2.functional.shaders.conversions.v"
#define VkglTestCase_001162_2 "ector_combine.int_ivec2_int_to_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001162, VkglTestCase_001162_1, VkglTestCase_001162_2);

#define VkglTestCase_001163_1 "dEQP-GLES2.functional.shaders.conversions.v"
#define VkglTestCase_001163_2 "ector_combine.int_ivec2_int_to_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001163, VkglTestCase_001163_1, VkglTestCase_001163_2);

#define VkglTestCase_001164_1 "dEQP-GLES2.functional.shaders.conversions.ve"
#define VkglTestCase_001164_2 "ctor_combine.int_ivec2_int_to_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001164, VkglTestCase_001164_1, VkglTestCase_001164_2);

#define VkglTestCase_001165_1 "dEQP-GLES2.functional.shaders.conversions.v"
#define VkglTestCase_001165_2 "ector_combine.int_ivec2_int_to_bvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001165, VkglTestCase_001165_1, VkglTestCase_001165_2);

#define VkglTestCase_001166_1 "dEQP-GLES2.functional.shaders.conversions.ve"
#define VkglTestCase_001166_2 "ctor_combine.int_ivec2_int_to_bvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001166, VkglTestCase_001166_1, VkglTestCase_001166_2);

#define VkglTestCase_001167_1 "dEQP-GLES2.functional.shaders.conversions.ve"
#define VkglTestCase_001167_2 "ctor_combine.bool_float_ivec2_to_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001167, VkglTestCase_001167_1, VkglTestCase_001167_2);

#define VkglTestCase_001168_1 "dEQP-GLES2.functional.shaders.conversions.vec"
#define VkglTestCase_001168_2 "tor_combine.bool_float_ivec2_to_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001168, VkglTestCase_001168_1, VkglTestCase_001168_2);

#define VkglTestCase_001169_1 "dEQP-GLES2.functional.shaders.conversions.ve"
#define VkglTestCase_001169_2 "ctor_combine.bool_float_ivec2_to_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001169, VkglTestCase_001169_1, VkglTestCase_001169_2);

#define VkglTestCase_001170_1 "dEQP-GLES2.functional.shaders.conversions.vec"
#define VkglTestCase_001170_2 "tor_combine.bool_float_ivec2_to_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001170, VkglTestCase_001170_1, VkglTestCase_001170_2);

#define VkglTestCase_001171_1 "dEQP-GLES2.functional.shaders.conversions.ve"
#define VkglTestCase_001171_2 "ctor_combine.bool_float_ivec2_to_bvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001171, VkglTestCase_001171_1, VkglTestCase_001171_2);

#define VkglTestCase_001172_1 "dEQP-GLES2.functional.shaders.conversions.vec"
#define VkglTestCase_001172_2 "tor_combine.bool_float_ivec2_to_bvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001172, VkglTestCase_001172_1, VkglTestCase_001172_2);

#define VkglTestCase_001173_1 "dEQP-GLES2.functional.shaders.conversions.ve"
#define VkglTestCase_001173_2 "ctor_combine.float_float_float_to_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001173, VkglTestCase_001173_1, VkglTestCase_001173_2);

#define VkglTestCase_001174_1 "dEQP-GLES2.functional.shaders.conversions.vec"
#define VkglTestCase_001174_2 "tor_combine.float_float_float_to_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001174, VkglTestCase_001174_1, VkglTestCase_001174_2);

#define VkglTestCase_001175_1 "dEQP-GLES2.functional.shaders.conversions.vec"
#define VkglTestCase_001175_2 "tor_combine.float_float_float_to_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001175, VkglTestCase_001175_1, VkglTestCase_001175_2);

#define VkglTestCase_001176_1 "dEQP-GLES2.functional.shaders.conversions.vect"
#define VkglTestCase_001176_2 "or_combine.float_float_float_to_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001176, VkglTestCase_001176_1, VkglTestCase_001176_2);

#define VkglTestCase_001177_1 "dEQP-GLES2.functional.shaders.conversions.vec"
#define VkglTestCase_001177_2 "tor_combine.float_float_float_to_bvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001177, VkglTestCase_001177_1, VkglTestCase_001177_2);

#define VkglTestCase_001178_1 "dEQP-GLES2.functional.shaders.conversions.vect"
#define VkglTestCase_001178_2 "or_combine.float_float_float_to_bvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001178, VkglTestCase_001178_1, VkglTestCase_001178_2);

#define VkglTestCase_001179_1 "dEQP-GLES2.functional.shaders.conversions"
#define VkglTestCase_001179_2 ".vector_combine.int_int_int_to_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001179, VkglTestCase_001179_1, VkglTestCase_001179_2);

#define VkglTestCase_001180_1 "dEQP-GLES2.functional.shaders.conversions."
#define VkglTestCase_001180_2 "vector_combine.int_int_int_to_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001180, VkglTestCase_001180_1, VkglTestCase_001180_2);

#define VkglTestCase_001181_1 "dEQP-GLES2.functional.shaders.conversions."
#define VkglTestCase_001181_2 "vector_combine.int_int_int_to_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001181, VkglTestCase_001181_1, VkglTestCase_001181_2);

#define VkglTestCase_001182_1 "dEQP-GLES2.functional.shaders.conversions.v"
#define VkglTestCase_001182_2 "ector_combine.int_int_int_to_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001182, VkglTestCase_001182_1, VkglTestCase_001182_2);

#define VkglTestCase_001183_1 "dEQP-GLES2.functional.shaders.conversions."
#define VkglTestCase_001183_2 "vector_combine.int_int_int_to_bvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001183, VkglTestCase_001183_1, VkglTestCase_001183_2);

#define VkglTestCase_001184_1 "dEQP-GLES2.functional.shaders.conversions.v"
#define VkglTestCase_001184_2 "ector_combine.int_int_int_to_bvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001184, VkglTestCase_001184_1, VkglTestCase_001184_2);

#define VkglTestCase_001185_1 "dEQP-GLES2.functional.shaders.conversions.v"
#define VkglTestCase_001185_2 "ector_combine.bool_bool_bool_to_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001185, VkglTestCase_001185_1, VkglTestCase_001185_2);

#define VkglTestCase_001186_1 "dEQP-GLES2.functional.shaders.conversions.ve"
#define VkglTestCase_001186_2 "ctor_combine.bool_bool_bool_to_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001186, VkglTestCase_001186_1, VkglTestCase_001186_2);

#define VkglTestCase_001187_1 "dEQP-GLES2.functional.shaders.conversions.v"
#define VkglTestCase_001187_2 "ector_combine.bool_bool_bool_to_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001187, VkglTestCase_001187_1, VkglTestCase_001187_2);

#define VkglTestCase_001188_1 "dEQP-GLES2.functional.shaders.conversions.ve"
#define VkglTestCase_001188_2 "ctor_combine.bool_bool_bool_to_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001188, VkglTestCase_001188_1, VkglTestCase_001188_2);

#define VkglTestCase_001189_1 "dEQP-GLES2.functional.shaders.conversions.v"
#define VkglTestCase_001189_2 "ector_combine.bool_bool_bool_to_bvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001189, VkglTestCase_001189_1, VkglTestCase_001189_2);

#define VkglTestCase_001190_1 "dEQP-GLES2.functional.shaders.conversions.ve"
#define VkglTestCase_001190_2 "ctor_combine.bool_bool_bool_to_bvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001190, VkglTestCase_001190_1, VkglTestCase_001190_2);

#define VkglTestCase_001191_1 "dEQP-GLES2.functional.shaders.conversions.v"
#define VkglTestCase_001191_2 "ector_combine.bool_float_int_to_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001191, VkglTestCase_001191_1, VkglTestCase_001191_2);

#define VkglTestCase_001192_1 "dEQP-GLES2.functional.shaders.conversions.ve"
#define VkglTestCase_001192_2 "ctor_combine.bool_float_int_to_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001192, VkglTestCase_001192_1, VkglTestCase_001192_2);

#define VkglTestCase_001193_1 "dEQP-GLES2.functional.shaders.conversions.v"
#define VkglTestCase_001193_2 "ector_combine.bool_float_int_to_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001193, VkglTestCase_001193_1, VkglTestCase_001193_2);

#define VkglTestCase_001194_1 "dEQP-GLES2.functional.shaders.conversions.ve"
#define VkglTestCase_001194_2 "ctor_combine.bool_float_int_to_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001194, VkglTestCase_001194_1, VkglTestCase_001194_2);

#define VkglTestCase_001195_1 "dEQP-GLES2.functional.shaders.conversions.v"
#define VkglTestCase_001195_2 "ector_combine.bool_float_int_to_bvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001195, VkglTestCase_001195_1, VkglTestCase_001195_2);

#define VkglTestCase_001196_1 "dEQP-GLES2.functional.shaders.conversions.ve"
#define VkglTestCase_001196_2 "ctor_combine.bool_float_int_to_bvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001196, VkglTestCase_001196_1, VkglTestCase_001196_2);

#define VkglTestCase_001197_1 "dEQP-GLES2.functional.shaders.conversion"
#define VkglTestCase_001197_2 "s.vector_combine.vec2_bool_to_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001197, VkglTestCase_001197_1, VkglTestCase_001197_2);

#define VkglTestCase_001198_1 "dEQP-GLES2.functional.shaders.conversions"
#define VkglTestCase_001198_2 ".vector_combine.vec2_bool_to_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001198, VkglTestCase_001198_1, VkglTestCase_001198_2);

#define VkglTestCase_001199_1 "dEQP-GLES2.functional.shaders.conversions"
#define VkglTestCase_001199_2 ".vector_combine.vec2_bool_to_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001199, VkglTestCase_001199_1, VkglTestCase_001199_2);

#define VkglTestCase_001200_1 "dEQP-GLES2.functional.shaders.conversions."
#define VkglTestCase_001200_2 "vector_combine.vec2_bool_to_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001200, VkglTestCase_001200_1, VkglTestCase_001200_2);

#define VkglTestCase_001201_1 "dEQP-GLES2.functional.shaders.conversions"
#define VkglTestCase_001201_2 ".vector_combine.vec2_bool_to_bvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001201, VkglTestCase_001201_1, VkglTestCase_001201_2);

#define VkglTestCase_001202_1 "dEQP-GLES2.functional.shaders.conversions."
#define VkglTestCase_001202_2 "vector_combine.vec2_bool_to_bvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001202, VkglTestCase_001202_1, VkglTestCase_001202_2);

#define VkglTestCase_001203_1 "dEQP-GLES2.functional.shaders.conversions"
#define VkglTestCase_001203_2 ".vector_combine.bvec2_float_to_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001203, VkglTestCase_001203_1, VkglTestCase_001203_2);

#define VkglTestCase_001204_1 "dEQP-GLES2.functional.shaders.conversions."
#define VkglTestCase_001204_2 "vector_combine.bvec2_float_to_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001204, VkglTestCase_001204_1, VkglTestCase_001204_2);

#define VkglTestCase_001205_1 "dEQP-GLES2.functional.shaders.conversions."
#define VkglTestCase_001205_2 "vector_combine.bvec2_float_to_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001205, VkglTestCase_001205_1, VkglTestCase_001205_2);

#define VkglTestCase_001206_1 "dEQP-GLES2.functional.shaders.conversions.v"
#define VkglTestCase_001206_2 "ector_combine.bvec2_float_to_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001206, VkglTestCase_001206_1, VkglTestCase_001206_2);

#define VkglTestCase_001207_1 "dEQP-GLES2.functional.shaders.conversions."
#define VkglTestCase_001207_2 "vector_combine.bvec2_float_to_bvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001207, VkglTestCase_001207_1, VkglTestCase_001207_2);

#define VkglTestCase_001208_1 "dEQP-GLES2.functional.shaders.conversions.v"
#define VkglTestCase_001208_2 "ector_combine.bvec2_float_to_bvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001208, VkglTestCase_001208_1, VkglTestCase_001208_2);

#define VkglTestCase_001209_1 "dEQP-GLES2.functional.shaders.conversion"
#define VkglTestCase_001209_2 "s.vector_combine.bvec2_int_to_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001209, VkglTestCase_001209_1, VkglTestCase_001209_2);

#define VkglTestCase_001210_1 "dEQP-GLES2.functional.shaders.conversions"
#define VkglTestCase_001210_2 ".vector_combine.bvec2_int_to_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001210, VkglTestCase_001210_1, VkglTestCase_001210_2);

#define VkglTestCase_001211_1 "dEQP-GLES2.functional.shaders.conversions"
#define VkglTestCase_001211_2 ".vector_combine.bvec2_int_to_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001211, VkglTestCase_001211_1, VkglTestCase_001211_2);

#define VkglTestCase_001212_1 "dEQP-GLES2.functional.shaders.conversions."
#define VkglTestCase_001212_2 "vector_combine.bvec2_int_to_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001212, VkglTestCase_001212_1, VkglTestCase_001212_2);

#define VkglTestCase_001213_1 "dEQP-GLES2.functional.shaders.conversions"
#define VkglTestCase_001213_2 ".vector_combine.bvec2_int_to_bvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001213, VkglTestCase_001213_1, VkglTestCase_001213_2);

#define VkglTestCase_001214_1 "dEQP-GLES2.functional.shaders.conversions."
#define VkglTestCase_001214_2 "vector_combine.bvec2_int_to_bvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001214, VkglTestCase_001214_1, VkglTestCase_001214_2);

#define VkglTestCase_001215_1 "dEQP-GLES2.functional.shaders.conversions"
#define VkglTestCase_001215_2 ".vector_combine.bool_ivec2_to_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001215, VkglTestCase_001215_1, VkglTestCase_001215_2);

#define VkglTestCase_001216_1 "dEQP-GLES2.functional.shaders.conversions."
#define VkglTestCase_001216_2 "vector_combine.bool_ivec2_to_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001216, VkglTestCase_001216_1, VkglTestCase_001216_2);

#define VkglTestCase_001217_1 "dEQP-GLES2.functional.shaders.conversions"
#define VkglTestCase_001217_2 ".vector_combine.bool_ivec2_to_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001217, VkglTestCase_001217_1, VkglTestCase_001217_2);

#define VkglTestCase_001218_1 "dEQP-GLES2.functional.shaders.conversions."
#define VkglTestCase_001218_2 "vector_combine.bool_ivec2_to_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001218, VkglTestCase_001218_1, VkglTestCase_001218_2);

#define VkglTestCase_001219_1 "dEQP-GLES2.functional.shaders.conversions"
#define VkglTestCase_001219_2 ".vector_combine.bool_ivec2_to_bvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001219, VkglTestCase_001219_1, VkglTestCase_001219_2);

#define VkglTestCase_001220_1 "dEQP-GLES2.functional.shaders.conversions."
#define VkglTestCase_001220_2 "vector_combine.bool_ivec2_to_bvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001220, VkglTestCase_001220_1, VkglTestCase_001220_2);

#define VkglTestCase_001221_1 "dEQP-GLES2.functional.shaders.conversions"
#define VkglTestCase_001221_2 ".vector_combine.float_float_to_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001221, VkglTestCase_001221_1, VkglTestCase_001221_2);

#define VkglTestCase_001222_1 "dEQP-GLES2.functional.shaders.conversions."
#define VkglTestCase_001222_2 "vector_combine.float_float_to_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001222, VkglTestCase_001222_1, VkglTestCase_001222_2);

#define VkglTestCase_001223_1 "dEQP-GLES2.functional.shaders.conversions."
#define VkglTestCase_001223_2 "vector_combine.float_float_to_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001223, VkglTestCase_001223_1, VkglTestCase_001223_2);

#define VkglTestCase_001224_1 "dEQP-GLES2.functional.shaders.conversions.v"
#define VkglTestCase_001224_2 "ector_combine.float_float_to_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001224, VkglTestCase_001224_1, VkglTestCase_001224_2);

#define VkglTestCase_001225_1 "dEQP-GLES2.functional.shaders.conversions."
#define VkglTestCase_001225_2 "vector_combine.float_float_to_bvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001225, VkglTestCase_001225_1, VkglTestCase_001225_2);

#define VkglTestCase_001226_1 "dEQP-GLES2.functional.shaders.conversions.v"
#define VkglTestCase_001226_2 "ector_combine.float_float_to_bvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001226, VkglTestCase_001226_1, VkglTestCase_001226_2);

#define VkglTestCase_001227_1 "dEQP-GLES2.functional.shaders.conversio"
#define VkglTestCase_001227_2 "ns.vector_combine.int_int_to_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001227, VkglTestCase_001227_1, VkglTestCase_001227_2);

#define VkglTestCase_001228_1 "dEQP-GLES2.functional.shaders.conversion"
#define VkglTestCase_001228_2 "s.vector_combine.int_int_to_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001228, VkglTestCase_001228_1, VkglTestCase_001228_2);

#define VkglTestCase_001229_1 "dEQP-GLES2.functional.shaders.conversion"
#define VkglTestCase_001229_2 "s.vector_combine.int_int_to_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001229, VkglTestCase_001229_1, VkglTestCase_001229_2);

#define VkglTestCase_001230_1 "dEQP-GLES2.functional.shaders.conversions"
#define VkglTestCase_001230_2 ".vector_combine.int_int_to_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001230, VkglTestCase_001230_1, VkglTestCase_001230_2);

#define VkglTestCase_001231_1 "dEQP-GLES2.functional.shaders.conversion"
#define VkglTestCase_001231_2 "s.vector_combine.int_int_to_bvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001231, VkglTestCase_001231_1, VkglTestCase_001231_2);

#define VkglTestCase_001232_1 "dEQP-GLES2.functional.shaders.conversions"
#define VkglTestCase_001232_2 ".vector_combine.int_int_to_bvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001232, VkglTestCase_001232_1, VkglTestCase_001232_2);

#define VkglTestCase_001233_1 "dEQP-GLES2.functional.shaders.conversion"
#define VkglTestCase_001233_2 "s.vector_combine.bool_bool_to_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001233, VkglTestCase_001233_1, VkglTestCase_001233_2);

#define VkglTestCase_001234_1 "dEQP-GLES2.functional.shaders.conversions"
#define VkglTestCase_001234_2 ".vector_combine.bool_bool_to_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001234, VkglTestCase_001234_1, VkglTestCase_001234_2);

#define VkglTestCase_001235_1 "dEQP-GLES2.functional.shaders.conversions"
#define VkglTestCase_001235_2 ".vector_combine.bool_bool_to_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001235, VkglTestCase_001235_1, VkglTestCase_001235_2);

#define VkglTestCase_001236_1 "dEQP-GLES2.functional.shaders.conversions."
#define VkglTestCase_001236_2 "vector_combine.bool_bool_to_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001236, VkglTestCase_001236_1, VkglTestCase_001236_2);

#define VkglTestCase_001237_1 "dEQP-GLES2.functional.shaders.conversions"
#define VkglTestCase_001237_2 ".vector_combine.bool_bool_to_bvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001237, VkglTestCase_001237_1, VkglTestCase_001237_2);

#define VkglTestCase_001238_1 "dEQP-GLES2.functional.shaders.conversions."
#define VkglTestCase_001238_2 "vector_combine.bool_bool_to_bvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001238, VkglTestCase_001238_1, VkglTestCase_001238_2);

#define VkglTestCase_001239_1 "dEQP-GLES2.functional.shaders.conversion"
#define VkglTestCase_001239_2 "s.vector_combine.float_int_to_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001239, VkglTestCase_001239_1, VkglTestCase_001239_2);

#define VkglTestCase_001240_1 "dEQP-GLES2.functional.shaders.conversions"
#define VkglTestCase_001240_2 ".vector_combine.float_int_to_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001240, VkglTestCase_001240_1, VkglTestCase_001240_2);

#define VkglTestCase_001241_1 "dEQP-GLES2.functional.shaders.conversions"
#define VkglTestCase_001241_2 ".vector_combine.float_int_to_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001241, VkglTestCase_001241_1, VkglTestCase_001241_2);

#define VkglTestCase_001242_1 "dEQP-GLES2.functional.shaders.conversions."
#define VkglTestCase_001242_2 "vector_combine.float_int_to_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001242, VkglTestCase_001242_1, VkglTestCase_001242_2);

#define VkglTestCase_001243_1 "dEQP-GLES2.functional.shaders.conversions"
#define VkglTestCase_001243_2 ".vector_combine.float_int_to_bvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001243, VkglTestCase_001243_1, VkglTestCase_001243_2);

#define VkglTestCase_001244_1 "dEQP-GLES2.functional.shaders.conversions."
#define VkglTestCase_001244_2 "vector_combine.float_int_to_bvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001244, VkglTestCase_001244_1, VkglTestCase_001244_2);

#define VkglTestCase_001245_1 "dEQP-GLES2.functional.shaders.conversions"
#define VkglTestCase_001245_2 ".vector_combine.float_bool_to_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001245, VkglTestCase_001245_1, VkglTestCase_001245_2);

#define VkglTestCase_001246_1 "dEQP-GLES2.functional.shaders.conversions."
#define VkglTestCase_001246_2 "vector_combine.float_bool_to_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001246, VkglTestCase_001246_1, VkglTestCase_001246_2);

#define VkglTestCase_001247_1 "dEQP-GLES2.functional.shaders.conversions"
#define VkglTestCase_001247_2 ".vector_combine.float_bool_to_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001247, VkglTestCase_001247_1, VkglTestCase_001247_2);

#define VkglTestCase_001248_1 "dEQP-GLES2.functional.shaders.conversions."
#define VkglTestCase_001248_2 "vector_combine.float_bool_to_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001248, VkglTestCase_001248_1, VkglTestCase_001248_2);

#define VkglTestCase_001249_1 "dEQP-GLES2.functional.shaders.conversions"
#define VkglTestCase_001249_2 ".vector_combine.float_bool_to_bvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001249, VkglTestCase_001249_1, VkglTestCase_001249_2);

#define VkglTestCase_001250_1 "dEQP-GLES2.functional.shaders.conversions."
#define VkglTestCase_001250_2 "vector_combine.float_bool_to_bvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001250, VkglTestCase_001250_1, VkglTestCase_001250_2);

#define VkglTestCase_001251_1 "dEQP-GLES2.functional.shaders.conversion"
#define VkglTestCase_001251_2 "s.vector_combine.int_bool_to_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001251, VkglTestCase_001251_1, VkglTestCase_001251_2);

#define VkglTestCase_001252_1 "dEQP-GLES2.functional.shaders.conversions"
#define VkglTestCase_001252_2 ".vector_combine.int_bool_to_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001252, VkglTestCase_001252_1, VkglTestCase_001252_2);

#define VkglTestCase_001253_1 "dEQP-GLES2.functional.shaders.conversion"
#define VkglTestCase_001253_2 "s.vector_combine.int_bool_to_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001253, VkglTestCase_001253_1, VkglTestCase_001253_2);

#define VkglTestCase_001254_1 "dEQP-GLES2.functional.shaders.conversions"
#define VkglTestCase_001254_2 ".vector_combine.int_bool_to_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001254, VkglTestCase_001254_1, VkglTestCase_001254_2);

#define VkglTestCase_001255_1 "dEQP-GLES2.functional.shaders.conversion"
#define VkglTestCase_001255_2 "s.vector_combine.int_bool_to_bvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001255, VkglTestCase_001255_1, VkglTestCase_001255_2);

#define VkglTestCase_001256_1 "dEQP-GLES2.functional.shaders.conversions"
#define VkglTestCase_001256_2 ".vector_combine.int_bool_to_bvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001256, VkglTestCase_001256_1, VkglTestCase_001256_2);
