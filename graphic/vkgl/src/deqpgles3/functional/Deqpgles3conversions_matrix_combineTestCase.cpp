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
#include "../ActsDeqpgles30003TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_002613_1 "dEQP-GLES3.functional.shaders.conversion"
#define VkglTestCase_002613_2 "s.matrix_combine.vec2_vec2_to_mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002613, VkglTestCase_002613_1, VkglTestCase_002613_2);

#define VkglTestCase_002614_1 "dEQP-GLES3.functional.shaders.conversions"
#define VkglTestCase_002614_2 ".matrix_combine.vec2_vec2_to_mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002614, VkglTestCase_002614_1, VkglTestCase_002614_2);

#define VkglTestCase_002615_1 "dEQP-GLES3.functional.shaders.conversions"
#define VkglTestCase_002615_2 ".matrix_combine.bvec2_bvec2_to_mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002615, VkglTestCase_002615_1, VkglTestCase_002615_2);

#define VkglTestCase_002616_1 "dEQP-GLES3.functional.shaders.conversions."
#define VkglTestCase_002616_2 "matrix_combine.bvec2_bvec2_to_mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002616, VkglTestCase_002616_1, VkglTestCase_002616_2);

#define VkglTestCase_002617_1 "dEQP-GLES3.functional.shaders.conversions.matri"
#define VkglTestCase_002617_2 "x_combine.float_float_float_float_to_mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002617, VkglTestCase_002617_1, VkglTestCase_002617_2);

#define VkglTestCase_002618_1 "dEQP-GLES3.functional.shaders.conversions.matrix"
#define VkglTestCase_002618_2 "_combine.float_float_float_float_to_mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002618, VkglTestCase_002618_1, VkglTestCase_002618_2);

#define VkglTestCase_002619_1 "dEQP-GLES3.functional.shaders.conversions.m"
#define VkglTestCase_002619_2 "atrix_combine.int_int_int_int_to_mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002619, VkglTestCase_002619_1, VkglTestCase_002619_2);

#define VkglTestCase_002620_1 "dEQP-GLES3.functional.shaders.conversions.ma"
#define VkglTestCase_002620_2 "trix_combine.int_int_int_int_to_mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002620, VkglTestCase_002620_1, VkglTestCase_002620_2);

#define VkglTestCase_002621_1 "dEQP-GLES3.functional.shaders.conversions.mat"
#define VkglTestCase_002621_2 "rix_combine.uint_uint_uint_uint_to_mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002621, VkglTestCase_002621_1, VkglTestCase_002621_2);

#define VkglTestCase_002622_1 "dEQP-GLES3.functional.shaders.conversions.matr"
#define VkglTestCase_002622_2 "ix_combine.uint_uint_uint_uint_to_mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002622, VkglTestCase_002622_1, VkglTestCase_002622_2);

#define VkglTestCase_002623_1 "dEQP-GLES3.functional.shaders.conversions.mat"
#define VkglTestCase_002623_2 "rix_combine.bool_bool_bool_bool_to_mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002623, VkglTestCase_002623_1, VkglTestCase_002623_2);

#define VkglTestCase_002624_1 "dEQP-GLES3.functional.shaders.conversions.matr"
#define VkglTestCase_002624_2 "ix_combine.bool_bool_bool_bool_to_mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002624, VkglTestCase_002624_1, VkglTestCase_002624_2);

#define VkglTestCase_002625_1 "dEQP-GLES3.functional.shaders.conversions.mat"
#define VkglTestCase_002625_2 "rix_combine.bool_float_int_bool_to_mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002625, VkglTestCase_002625_1, VkglTestCase_002625_2);

#define VkglTestCase_002626_1 "dEQP-GLES3.functional.shaders.conversions.matr"
#define VkglTestCase_002626_2 "ix_combine.bool_float_int_bool_to_mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002626, VkglTestCase_002626_1, VkglTestCase_002626_2);

#define VkglTestCase_002627_1 "dEQP-GLES3.functional.shaders.conversions"
#define VkglTestCase_002627_2 ".matrix_combine.vec2_ivec2_to_mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002627, VkglTestCase_002627_1, VkglTestCase_002627_2);

#define VkglTestCase_002628_1 "dEQP-GLES3.functional.shaders.conversions."
#define VkglTestCase_002628_2 "matrix_combine.vec2_ivec2_to_mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002628, VkglTestCase_002628_1, VkglTestCase_002628_2);

#define VkglTestCase_002629_1 "dEQP-GLES3.functional.shaders.conversions"
#define VkglTestCase_002629_2 ".matrix_combine.vec2_bvec2_to_mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002629, VkglTestCase_002629_1, VkglTestCase_002629_2);

#define VkglTestCase_002630_1 "dEQP-GLES3.functional.shaders.conversions."
#define VkglTestCase_002630_2 "matrix_combine.vec2_bvec2_to_mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002630, VkglTestCase_002630_1, VkglTestCase_002630_2);

#define VkglTestCase_002631_1 "dEQP-GLES3.functional.shaders.conversions"
#define VkglTestCase_002631_2 ".matrix_combine.bvec3_float_to_mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002631, VkglTestCase_002631_1, VkglTestCase_002631_2);

#define VkglTestCase_002632_1 "dEQP-GLES3.functional.shaders.conversions."
#define VkglTestCase_002632_2 "matrix_combine.bvec3_float_to_mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002632, VkglTestCase_002632_1, VkglTestCase_002632_2);

#define VkglTestCase_002633_1 "dEQP-GLES3.functional.shaders.conversions"
#define VkglTestCase_002633_2 ".matrix_combine.vec3_float_to_mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002633, VkglTestCase_002633_1, VkglTestCase_002633_2);

#define VkglTestCase_002634_1 "dEQP-GLES3.functional.shaders.conversions."
#define VkglTestCase_002634_2 "matrix_combine.vec3_float_to_mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002634, VkglTestCase_002634_1, VkglTestCase_002634_2);

#define VkglTestCase_002635_1 "dEQP-GLES3.functional.shaders.conversions."
#define VkglTestCase_002635_2 "matrix_combine.int_ivec2_int_to_mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002635, VkglTestCase_002635_1, VkglTestCase_002635_2);

#define VkglTestCase_002636_1 "dEQP-GLES3.functional.shaders.conversions.m"
#define VkglTestCase_002636_2 "atrix_combine.int_ivec2_int_to_mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002636, VkglTestCase_002636_1, VkglTestCase_002636_2);

#define VkglTestCase_002637_1 "dEQP-GLES3.functional.shaders.conversions.ma"
#define VkglTestCase_002637_2 "trix_combine.bool_float_ivec2_to_mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002637, VkglTestCase_002637_1, VkglTestCase_002637_2);

#define VkglTestCase_002638_1 "dEQP-GLES3.functional.shaders.conversions.mat"
#define VkglTestCase_002638_2 "rix_combine.bool_float_ivec2_to_mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002638, VkglTestCase_002638_1, VkglTestCase_002638_2);

#define VkglTestCase_002639_1 "dEQP-GLES3.functional.shaders.conversions"
#define VkglTestCase_002639_2 ".matrix_combine.float_uvec3_to_mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002639, VkglTestCase_002639_1, VkglTestCase_002639_2);

#define VkglTestCase_002640_1 "dEQP-GLES3.functional.shaders.conversions."
#define VkglTestCase_002640_2 "matrix_combine.float_uvec3_to_mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002640, VkglTestCase_002640_1, VkglTestCase_002640_2);

#define VkglTestCase_002641_1 "dEQP-GLES3.functional.shaders.conversions.m"
#define VkglTestCase_002641_2 "atrix_combine.int_uvec2_bool_to_mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002641, VkglTestCase_002641_1, VkglTestCase_002641_2);

#define VkglTestCase_002642_1 "dEQP-GLES3.functional.shaders.conversions.ma"
#define VkglTestCase_002642_2 "trix_combine.int_uvec2_bool_to_mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002642, VkglTestCase_002642_1, VkglTestCase_002642_2);

#define VkglTestCase_002643_1 "dEQP-GLES3.functional.shaders.conversions"
#define VkglTestCase_002643_2 ".matrix_combine.vec3_vec3_to_mat2x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002643, VkglTestCase_002643_1, VkglTestCase_002643_2);

#define VkglTestCase_002644_1 "dEQP-GLES3.functional.shaders.conversions."
#define VkglTestCase_002644_2 "matrix_combine.vec3_vec3_to_mat2x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002644, VkglTestCase_002644_1, VkglTestCase_002644_2);

#define VkglTestCase_002645_1 "dEQP-GLES3.functional.shaders.conversions."
#define VkglTestCase_002645_2 "matrix_combine.bvec3_bvec3_to_mat2x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002645, VkglTestCase_002645_1, VkglTestCase_002645_2);

#define VkglTestCase_002646_1 "dEQP-GLES3.functional.shaders.conversions.m"
#define VkglTestCase_002646_2 "atrix_combine.bvec3_bvec3_to_mat2x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002646, VkglTestCase_002646_1, VkglTestCase_002646_2);

#define VkglTestCase_002647_1 "dEQP-GLES3.functional.shaders.conversions.matrix_combi"
#define VkglTestCase_002647_2 "ne.float_float_float_float_float_float_to_mat2x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002647, VkglTestCase_002647_1, VkglTestCase_002647_2);

#define VkglTestCase_002648_1 "dEQP-GLES3.functional.shaders.conversions.matrix_combin"
#define VkglTestCase_002648_2 "e.float_float_float_float_float_float_to_mat2x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002648, VkglTestCase_002648_1, VkglTestCase_002648_2);

#define VkglTestCase_002649_1 "dEQP-GLES3.functional.shaders.conversions.matrix"
#define VkglTestCase_002649_2 "_combine.int_int_int_int_int_int_to_mat2x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002649, VkglTestCase_002649_1, VkglTestCase_002649_2);

#define VkglTestCase_002650_1 "dEQP-GLES3.functional.shaders.conversions.matrix_"
#define VkglTestCase_002650_2 "combine.int_int_int_int_int_int_to_mat2x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002650, VkglTestCase_002650_1, VkglTestCase_002650_2);

#define VkglTestCase_002651_1 "dEQP-GLES3.functional.shaders.conversions.matrix_co"
#define VkglTestCase_002651_2 "mbine.bool_bool_bool_bool_bool_bool_to_mat2x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002651, VkglTestCase_002651_1, VkglTestCase_002651_2);

#define VkglTestCase_002652_1 "dEQP-GLES3.functional.shaders.conversions.matrix_com"
#define VkglTestCase_002652_2 "bine.bool_bool_bool_bool_bool_bool_to_mat2x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002652, VkglTestCase_002652_1, VkglTestCase_002652_2);

#define VkglTestCase_002653_1 "dEQP-GLES3.functional.shaders.conversions.matrix_co"
#define VkglTestCase_002653_2 "mbine.bool_float_int_bool_float_int_to_mat2x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002653, VkglTestCase_002653_1, VkglTestCase_002653_2);

#define VkglTestCase_002654_1 "dEQP-GLES3.functional.shaders.conversions.matrix_com"
#define VkglTestCase_002654_2 "bine.bool_float_int_bool_float_int_to_mat2x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002654, VkglTestCase_002654_1, VkglTestCase_002654_2);

#define VkglTestCase_002655_1 "dEQP-GLES3.functional.shaders.conversions."
#define VkglTestCase_002655_2 "matrix_combine.vec3_ivec3_to_mat2x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002655, VkglTestCase_002655_1, VkglTestCase_002655_2);

#define VkglTestCase_002656_1 "dEQP-GLES3.functional.shaders.conversions.m"
#define VkglTestCase_002656_2 "atrix_combine.vec3_ivec3_to_mat2x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002656, VkglTestCase_002656_1, VkglTestCase_002656_2);

#define VkglTestCase_002657_1 "dEQP-GLES3.functional.shaders.conversions."
#define VkglTestCase_002657_2 "matrix_combine.vec2_bvec4_to_mat2x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002657, VkglTestCase_002657_1, VkglTestCase_002657_2);

#define VkglTestCase_002658_1 "dEQP-GLES3.functional.shaders.conversions.m"
#define VkglTestCase_002658_2 "atrix_combine.vec2_bvec4_to_mat2x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002658, VkglTestCase_002658_1, VkglTestCase_002658_2);

#define VkglTestCase_002659_1 "dEQP-GLES3.functional.shaders.conversions.mat"
#define VkglTestCase_002659_2 "rix_combine.bvec3_float_ivec2_to_mat2x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002659, VkglTestCase_002659_1, VkglTestCase_002659_2);

#define VkglTestCase_002660_1 "dEQP-GLES3.functional.shaders.conversions.matr"
#define VkglTestCase_002660_2 "ix_combine.bvec3_float_ivec2_to_mat2x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002660, VkglTestCase_002660_1, VkglTestCase_002660_2);

#define VkglTestCase_002661_1 "dEQP-GLES3.functional.shaders.conversions.mat"
#define VkglTestCase_002661_2 "rix_combine.vec3_float_bvec2_to_mat2x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002661, VkglTestCase_002661_1, VkglTestCase_002661_2);

#define VkglTestCase_002662_1 "dEQP-GLES3.functional.shaders.conversions.matr"
#define VkglTestCase_002662_2 "ix_combine.vec3_float_bvec2_to_mat2x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002662, VkglTestCase_002662_1, VkglTestCase_002662_2);

#define VkglTestCase_002663_1 "dEQP-GLES3.functional.shaders.conversions.ma"
#define VkglTestCase_002663_2 "trix_combine.vec3_vec3_vec2_to_mat2x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002663, VkglTestCase_002663_1, VkglTestCase_002663_2);

#define VkglTestCase_002664_1 "dEQP-GLES3.functional.shaders.conversions.mat"
#define VkglTestCase_002664_2 "rix_combine.vec3_vec3_vec2_to_mat2x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002664, VkglTestCase_002664_1, VkglTestCase_002664_2);

#define VkglTestCase_002665_1 "dEQP-GLES3.functional.shaders.conversions.mat"
#define VkglTestCase_002665_2 "rix_combine.ivec3_ivec3_ivec2_to_mat2x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002665, VkglTestCase_002665_1, VkglTestCase_002665_2);

#define VkglTestCase_002666_1 "dEQP-GLES3.functional.shaders.conversions.matr"
#define VkglTestCase_002666_2 "ix_combine.ivec3_ivec3_ivec2_to_mat2x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002666, VkglTestCase_002666_1, VkglTestCase_002666_2);

#define VkglTestCase_002667_1 "dEQP-GLES3.functional.shaders.conversions.matrix_com"
#define VkglTestCase_002667_2 "bine.vec2_ivec2_float_float_int_bool_to_mat2x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002667, VkglTestCase_002667_1, VkglTestCase_002667_2);

#define VkglTestCase_002668_1 "dEQP-GLES3.functional.shaders.conversions.matrix_comb"
#define VkglTestCase_002668_2 "ine.vec2_ivec2_float_float_int_bool_to_mat2x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002668, VkglTestCase_002668_1, VkglTestCase_002668_2);

#define VkglTestCase_002669_1 "dEQP-GLES3.functional.shaders.conversions.matrix_com"
#define VkglTestCase_002669_2 "bine.bool_float_int_vec2_bool_bvec2_to_mat2x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002669, VkglTestCase_002669_1, VkglTestCase_002669_2);

#define VkglTestCase_002670_1 "dEQP-GLES3.functional.shaders.conversions.matrix_comb"
#define VkglTestCase_002670_2 "ine.bool_float_int_vec2_bool_bvec2_to_mat2x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002670, VkglTestCase_002670_1, VkglTestCase_002670_2);

#define VkglTestCase_002671_1 "dEQP-GLES3.functional.shaders.conversions.matr"
#define VkglTestCase_002671_2 "ix_combine.bool_bvec2_int_vec4_to_mat2x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002671, VkglTestCase_002671_1, VkglTestCase_002671_2);

#define VkglTestCase_002672_1 "dEQP-GLES3.functional.shaders.conversions.matri"
#define VkglTestCase_002672_2 "x_combine.bool_bvec2_int_vec4_to_mat2x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002672, VkglTestCase_002672_1, VkglTestCase_002672_2);

#define VkglTestCase_002673_1 "dEQP-GLES3.functional.shaders.conversions.matrix"
#define VkglTestCase_002673_2 "_combine.float_bvec4_ivec2_bool_to_mat2x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002673, VkglTestCase_002673_1, VkglTestCase_002673_2);

#define VkglTestCase_002674_1 "dEQP-GLES3.functional.shaders.conversions.matrix_"
#define VkglTestCase_002674_2 "combine.float_bvec4_ivec2_bool_to_mat2x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002674, VkglTestCase_002674_1, VkglTestCase_002674_2);

#define VkglTestCase_002675_1 "dEQP-GLES3.functional.shaders.conversions"
#define VkglTestCase_002675_2 ".matrix_combine.vec3_vec3_to_mat3x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002675, VkglTestCase_002675_1, VkglTestCase_002675_2);

#define VkglTestCase_002676_1 "dEQP-GLES3.functional.shaders.conversions."
#define VkglTestCase_002676_2 "matrix_combine.vec3_vec3_to_mat3x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002676, VkglTestCase_002676_1, VkglTestCase_002676_2);

#define VkglTestCase_002677_1 "dEQP-GLES3.functional.shaders.conversions."
#define VkglTestCase_002677_2 "matrix_combine.bvec3_bvec3_to_mat3x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002677, VkglTestCase_002677_1, VkglTestCase_002677_2);

#define VkglTestCase_002678_1 "dEQP-GLES3.functional.shaders.conversions.m"
#define VkglTestCase_002678_2 "atrix_combine.bvec3_bvec3_to_mat3x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002678, VkglTestCase_002678_1, VkglTestCase_002678_2);

#define VkglTestCase_002679_1 "dEQP-GLES3.functional.shaders.conversions.matrix_combi"
#define VkglTestCase_002679_2 "ne.float_float_float_float_float_float_to_mat3x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002679, VkglTestCase_002679_1, VkglTestCase_002679_2);

#define VkglTestCase_002680_1 "dEQP-GLES3.functional.shaders.conversions.matrix_combin"
#define VkglTestCase_002680_2 "e.float_float_float_float_float_float_to_mat3x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002680, VkglTestCase_002680_1, VkglTestCase_002680_2);

#define VkglTestCase_002681_1 "dEQP-GLES3.functional.shaders.conversions.matrix"
#define VkglTestCase_002681_2 "_combine.int_int_int_int_int_int_to_mat3x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002681, VkglTestCase_002681_1, VkglTestCase_002681_2);

#define VkglTestCase_002682_1 "dEQP-GLES3.functional.shaders.conversions.matrix_"
#define VkglTestCase_002682_2 "combine.int_int_int_int_int_int_to_mat3x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002682, VkglTestCase_002682_1, VkglTestCase_002682_2);

#define VkglTestCase_002683_1 "dEQP-GLES3.functional.shaders.conversions.matrix_co"
#define VkglTestCase_002683_2 "mbine.bool_bool_bool_bool_bool_bool_to_mat3x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002683, VkglTestCase_002683_1, VkglTestCase_002683_2);

#define VkglTestCase_002684_1 "dEQP-GLES3.functional.shaders.conversions.matrix_com"
#define VkglTestCase_002684_2 "bine.bool_bool_bool_bool_bool_bool_to_mat3x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002684, VkglTestCase_002684_1, VkglTestCase_002684_2);

#define VkglTestCase_002685_1 "dEQP-GLES3.functional.shaders.conversions.matrix_co"
#define VkglTestCase_002685_2 "mbine.bool_float_int_bool_float_int_to_mat3x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002685, VkglTestCase_002685_1, VkglTestCase_002685_2);

#define VkglTestCase_002686_1 "dEQP-GLES3.functional.shaders.conversions.matrix_com"
#define VkglTestCase_002686_2 "bine.bool_float_int_bool_float_int_to_mat3x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002686, VkglTestCase_002686_1, VkglTestCase_002686_2);

#define VkglTestCase_002687_1 "dEQP-GLES3.functional.shaders.conversions."
#define VkglTestCase_002687_2 "matrix_combine.vec3_ivec3_to_mat3x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002687, VkglTestCase_002687_1, VkglTestCase_002687_2);

#define VkglTestCase_002688_1 "dEQP-GLES3.functional.shaders.conversions.m"
#define VkglTestCase_002688_2 "atrix_combine.vec3_ivec3_to_mat3x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002688, VkglTestCase_002688_1, VkglTestCase_002688_2);

#define VkglTestCase_002689_1 "dEQP-GLES3.functional.shaders.conversions."
#define VkglTestCase_002689_2 "matrix_combine.vec2_bvec4_to_mat3x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002689, VkglTestCase_002689_1, VkglTestCase_002689_2);

#define VkglTestCase_002690_1 "dEQP-GLES3.functional.shaders.conversions.m"
#define VkglTestCase_002690_2 "atrix_combine.vec2_bvec4_to_mat3x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002690, VkglTestCase_002690_1, VkglTestCase_002690_2);

#define VkglTestCase_002691_1 "dEQP-GLES3.functional.shaders.conversions.mat"
#define VkglTestCase_002691_2 "rix_combine.bvec3_float_ivec2_to_mat3x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002691, VkglTestCase_002691_1, VkglTestCase_002691_2);

#define VkglTestCase_002692_1 "dEQP-GLES3.functional.shaders.conversions.matr"
#define VkglTestCase_002692_2 "ix_combine.bvec3_float_ivec2_to_mat3x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002692, VkglTestCase_002692_1, VkglTestCase_002692_2);

#define VkglTestCase_002693_1 "dEQP-GLES3.functional.shaders.conversions.mat"
#define VkglTestCase_002693_2 "rix_combine.vec3_float_bvec2_to_mat3x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002693, VkglTestCase_002693_1, VkglTestCase_002693_2);

#define VkglTestCase_002694_1 "dEQP-GLES3.functional.shaders.conversions.matr"
#define VkglTestCase_002694_2 "ix_combine.vec3_float_bvec2_to_mat3x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002694, VkglTestCase_002694_1, VkglTestCase_002694_2);

#define VkglTestCase_002695_1 "dEQP-GLES3.functional.shaders.conversions.m"
#define VkglTestCase_002695_2 "atrix_combine.vec3_vec3_vec3_to_mat3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002695, VkglTestCase_002695_1, VkglTestCase_002695_2);

#define VkglTestCase_002696_1 "dEQP-GLES3.functional.shaders.conversions.ma"
#define VkglTestCase_002696_2 "trix_combine.vec3_vec3_vec3_to_mat3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002696, VkglTestCase_002696_1, VkglTestCase_002696_2);

#define VkglTestCase_002697_1 "dEQP-GLES3.functional.shaders.conversions.ma"
#define VkglTestCase_002697_2 "trix_combine.ivec3_ivec3_ivec3_to_mat3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002697, VkglTestCase_002697_1, VkglTestCase_002697_2);

#define VkglTestCase_002698_1 "dEQP-GLES3.functional.shaders.conversions.mat"
#define VkglTestCase_002698_2 "rix_combine.ivec3_ivec3_ivec3_to_mat3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002698, VkglTestCase_002698_1, VkglTestCase_002698_2);

#define VkglTestCase_002699_1 "dEQP-GLES3.functional.shaders.conversions.matrix_combi"
#define VkglTestCase_002699_2 "ne.vec2_ivec2_float_float_int_bool_bool_to_mat3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002699, VkglTestCase_002699_1, VkglTestCase_002699_2);

#define VkglTestCase_002700_1 "dEQP-GLES3.functional.shaders.conversions.matrix_combin"
#define VkglTestCase_002700_2 "e.vec2_ivec2_float_float_int_bool_bool_to_mat3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002700, VkglTestCase_002700_1, VkglTestCase_002700_2);

#define VkglTestCase_002701_1 "dEQP-GLES3.functional.shaders.conversions.matrix_combi"
#define VkglTestCase_002701_2 "ne.bool_float_int_vec2_bool_bvec2_float_to_mat3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002701, VkglTestCase_002701_1, VkglTestCase_002701_2);

#define VkglTestCase_002702_1 "dEQP-GLES3.functional.shaders.conversions.matrix_combin"
#define VkglTestCase_002702_2 "e.bool_float_int_vec2_bool_bvec2_float_to_mat3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002702, VkglTestCase_002702_1, VkglTestCase_002702_2);

#define VkglTestCase_002703_1 "dEQP-GLES3.functional.shaders.conversions.matrix"
#define VkglTestCase_002703_2 "_combine.bool_bvec2_int_vec4_bool_to_mat3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002703, VkglTestCase_002703_1, VkglTestCase_002703_2);

#define VkglTestCase_002704_1 "dEQP-GLES3.functional.shaders.conversions.matrix_"
#define VkglTestCase_002704_2 "combine.bool_bvec2_int_vec4_bool_to_mat3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002704, VkglTestCase_002704_1, VkglTestCase_002704_2);

#define VkglTestCase_002705_1 "dEQP-GLES3.functional.shaders.conversions.matrix_"
#define VkglTestCase_002705_2 "combine.float_bvec4_ivec2_bool_bool_to_mat3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002705, VkglTestCase_002705_1, VkglTestCase_002705_2);

#define VkglTestCase_002706_1 "dEQP-GLES3.functional.shaders.conversions.matrix_c"
#define VkglTestCase_002706_2 "ombine.float_bvec4_ivec2_bool_bool_to_mat3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002706, VkglTestCase_002706_1, VkglTestCase_002706_2);

#define VkglTestCase_002707_1 "dEQP-GLES3.functional.shaders.conversions.ma"
#define VkglTestCase_002707_2 "trix_combine.vec4_vec4_vec4_to_mat3x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002707, VkglTestCase_002707_1, VkglTestCase_002707_2);

#define VkglTestCase_002708_1 "dEQP-GLES3.functional.shaders.conversions.mat"
#define VkglTestCase_002708_2 "rix_combine.vec4_vec4_vec4_to_mat3x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002708, VkglTestCase_002708_1, VkglTestCase_002708_2);

#define VkglTestCase_002709_1 "dEQP-GLES3.functional.shaders.conversions.mat"
#define VkglTestCase_002709_2 "rix_combine.ivec4_ivec4_ivec4_to_mat3x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002709, VkglTestCase_002709_1, VkglTestCase_002709_2);

#define VkglTestCase_002710_1 "dEQP-GLES3.functional.shaders.conversions.matr"
#define VkglTestCase_002710_2 "ix_combine.ivec4_ivec4_ivec4_to_mat3x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002710, VkglTestCase_002710_1, VkglTestCase_002710_2);

#define VkglTestCase_002711_1 "dEQP-GLES3.functional.shaders.conversions.matrix_combine.vec2_"
#define VkglTestCase_002711_2 "ivec2_float_float_float_int_int_bool_bool_bool_to_mat3x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002711, VkglTestCase_002711_1, VkglTestCase_002711_2);

#define VkglTestCase_002712_1 "dEQP-GLES3.functional.shaders.conversions.matrix_combine.vec2_i"
#define VkglTestCase_002712_2 "vec2_float_float_float_int_int_bool_bool_bool_to_mat3x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002712, VkglTestCase_002712_1, VkglTestCase_002712_2);

#define VkglTestCase_002713_1 "dEQP-GLES3.functional.shaders.conversions.matrix_combine."
#define VkglTestCase_002713_2 "bool_float_int_vec3_bool_bvec3_float_bool_to_mat3x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002713, VkglTestCase_002713_1, VkglTestCase_002713_2);

#define VkglTestCase_002714_1 "dEQP-GLES3.functional.shaders.conversions.matrix_combine.b"
#define VkglTestCase_002714_2 "ool_float_int_vec3_bool_bvec3_float_bool_to_mat3x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002714, VkglTestCase_002714_1, VkglTestCase_002714_2);

#define VkglTestCase_002715_1 "dEQP-GLES3.functional.shaders.conversions.matrix_com"
#define VkglTestCase_002715_2 "bine.bool_bvec4_int_vec4_bool_float_to_mat3x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002715, VkglTestCase_002715_1, VkglTestCase_002715_2);

#define VkglTestCase_002716_1 "dEQP-GLES3.functional.shaders.conversions.matrix_comb"
#define VkglTestCase_002716_2 "ine.bool_bvec4_int_vec4_bool_float_to_mat3x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002716, VkglTestCase_002716_1, VkglTestCase_002716_2);

#define VkglTestCase_002717_1 "dEQP-GLES3.functional.shaders.conversions.matrix_com"
#define VkglTestCase_002717_2 "bine.float_bvec4_ivec4_bool_bool_int_to_mat3x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002717, VkglTestCase_002717_1, VkglTestCase_002717_2);

#define VkglTestCase_002718_1 "dEQP-GLES3.functional.shaders.conversions.matrix_comb"
#define VkglTestCase_002718_2 "ine.float_bvec4_ivec4_bool_bool_int_to_mat3x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002718, VkglTestCase_002718_1, VkglTestCase_002718_2);

#define VkglTestCase_002719_1 "dEQP-GLES3.functional.shaders.conversions.ma"
#define VkglTestCase_002719_2 "trix_combine.vec3_vec3_vec2_to_mat4x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002719, VkglTestCase_002719_1, VkglTestCase_002719_2);

#define VkglTestCase_002720_1 "dEQP-GLES3.functional.shaders.conversions.mat"
#define VkglTestCase_002720_2 "rix_combine.vec3_vec3_vec2_to_mat4x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002720, VkglTestCase_002720_1, VkglTestCase_002720_2);

#define VkglTestCase_002721_1 "dEQP-GLES3.functional.shaders.conversions.mat"
#define VkglTestCase_002721_2 "rix_combine.ivec3_ivec3_ivec2_to_mat4x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002721, VkglTestCase_002721_1, VkglTestCase_002721_2);

#define VkglTestCase_002722_1 "dEQP-GLES3.functional.shaders.conversions.matr"
#define VkglTestCase_002722_2 "ix_combine.ivec3_ivec3_ivec2_to_mat4x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002722, VkglTestCase_002722_1, VkglTestCase_002722_2);

#define VkglTestCase_002723_1 "dEQP-GLES3.functional.shaders.conversions.matrix_com"
#define VkglTestCase_002723_2 "bine.vec2_ivec2_float_float_int_bool_to_mat4x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002723, VkglTestCase_002723_1, VkglTestCase_002723_2);

#define VkglTestCase_002724_1 "dEQP-GLES3.functional.shaders.conversions.matrix_comb"
#define VkglTestCase_002724_2 "ine.vec2_ivec2_float_float_int_bool_to_mat4x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002724, VkglTestCase_002724_1, VkglTestCase_002724_2);

#define VkglTestCase_002725_1 "dEQP-GLES3.functional.shaders.conversions.matrix_com"
#define VkglTestCase_002725_2 "bine.bool_float_int_vec2_bool_bvec2_to_mat4x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002725, VkglTestCase_002725_1, VkglTestCase_002725_2);

#define VkglTestCase_002726_1 "dEQP-GLES3.functional.shaders.conversions.matrix_comb"
#define VkglTestCase_002726_2 "ine.bool_float_int_vec2_bool_bvec2_to_mat4x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002726, VkglTestCase_002726_1, VkglTestCase_002726_2);

#define VkglTestCase_002727_1 "dEQP-GLES3.functional.shaders.conversions.matr"
#define VkglTestCase_002727_2 "ix_combine.bool_bvec2_int_vec4_to_mat4x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002727, VkglTestCase_002727_1, VkglTestCase_002727_2);

#define VkglTestCase_002728_1 "dEQP-GLES3.functional.shaders.conversions.matri"
#define VkglTestCase_002728_2 "x_combine.bool_bvec2_int_vec4_to_mat4x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002728, VkglTestCase_002728_1, VkglTestCase_002728_2);

#define VkglTestCase_002729_1 "dEQP-GLES3.functional.shaders.conversions.matrix"
#define VkglTestCase_002729_2 "_combine.float_bvec4_ivec2_bool_to_mat4x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002729, VkglTestCase_002729_1, VkglTestCase_002729_2);

#define VkglTestCase_002730_1 "dEQP-GLES3.functional.shaders.conversions.matrix_"
#define VkglTestCase_002730_2 "combine.float_bvec4_ivec2_bool_to_mat4x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002730, VkglTestCase_002730_1, VkglTestCase_002730_2);

#define VkglTestCase_002731_1 "dEQP-GLES3.functional.shaders.conversions.ma"
#define VkglTestCase_002731_2 "trix_combine.vec4_vec4_vec4_to_mat4x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002731, VkglTestCase_002731_1, VkglTestCase_002731_2);

#define VkglTestCase_002732_1 "dEQP-GLES3.functional.shaders.conversions.mat"
#define VkglTestCase_002732_2 "rix_combine.vec4_vec4_vec4_to_mat4x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002732, VkglTestCase_002732_1, VkglTestCase_002732_2);

#define VkglTestCase_002733_1 "dEQP-GLES3.functional.shaders.conversions.mat"
#define VkglTestCase_002733_2 "rix_combine.ivec4_ivec4_ivec4_to_mat4x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002733, VkglTestCase_002733_1, VkglTestCase_002733_2);

#define VkglTestCase_002734_1 "dEQP-GLES3.functional.shaders.conversions.matr"
#define VkglTestCase_002734_2 "ix_combine.ivec4_ivec4_ivec4_to_mat4x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002734, VkglTestCase_002734_1, VkglTestCase_002734_2);

#define VkglTestCase_002735_1 "dEQP-GLES3.functional.shaders.conversions.matrix_combine.vec2_"
#define VkglTestCase_002735_2 "ivec2_float_float_float_int_int_bool_bool_bool_to_mat4x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002735, VkglTestCase_002735_1, VkglTestCase_002735_2);

#define VkglTestCase_002736_1 "dEQP-GLES3.functional.shaders.conversions.matrix_combine.vec2_i"
#define VkglTestCase_002736_2 "vec2_float_float_float_int_int_bool_bool_bool_to_mat4x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002736, VkglTestCase_002736_1, VkglTestCase_002736_2);

#define VkglTestCase_002737_1 "dEQP-GLES3.functional.shaders.conversions.matrix_combine."
#define VkglTestCase_002737_2 "bool_float_int_vec3_bool_bvec3_float_bool_to_mat4x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002737, VkglTestCase_002737_1, VkglTestCase_002737_2);

#define VkglTestCase_002738_1 "dEQP-GLES3.functional.shaders.conversions.matrix_combine.b"
#define VkglTestCase_002738_2 "ool_float_int_vec3_bool_bvec3_float_bool_to_mat4x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002738, VkglTestCase_002738_1, VkglTestCase_002738_2);

#define VkglTestCase_002739_1 "dEQP-GLES3.functional.shaders.conversions.matrix_com"
#define VkglTestCase_002739_2 "bine.bool_bvec4_int_vec4_bool_float_to_mat4x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002739, VkglTestCase_002739_1, VkglTestCase_002739_2);

#define VkglTestCase_002740_1 "dEQP-GLES3.functional.shaders.conversions.matrix_comb"
#define VkglTestCase_002740_2 "ine.bool_bvec4_int_vec4_bool_float_to_mat4x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002740, VkglTestCase_002740_1, VkglTestCase_002740_2);

#define VkglTestCase_002741_1 "dEQP-GLES3.functional.shaders.conversions.matrix_com"
#define VkglTestCase_002741_2 "bine.float_bvec4_ivec4_bool_bool_int_to_mat4x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002741, VkglTestCase_002741_1, VkglTestCase_002741_2);

#define VkglTestCase_002742_1 "dEQP-GLES3.functional.shaders.conversions.matrix_comb"
#define VkglTestCase_002742_2 "ine.float_bvec4_ivec4_bool_bool_int_to_mat4x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002742, VkglTestCase_002742_1, VkglTestCase_002742_2);

#define VkglTestCase_002743_1 "dEQP-GLES3.functional.shaders.conversions.mat"
#define VkglTestCase_002743_2 "rix_combine.vec4_vec4_vec4_vec4_to_mat4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002743, VkglTestCase_002743_1, VkglTestCase_002743_2);

#define VkglTestCase_002744_1 "dEQP-GLES3.functional.shaders.conversions.matr"
#define VkglTestCase_002744_2 "ix_combine.vec4_vec4_vec4_vec4_to_mat4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002744, VkglTestCase_002744_1, VkglTestCase_002744_2);

#define VkglTestCase_002745_1 "dEQP-GLES3.functional.shaders.conversions.matri"
#define VkglTestCase_002745_2 "x_combine.ivec4_ivec4_ivec4_ivec4_to_mat4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002745, VkglTestCase_002745_1, VkglTestCase_002745_2);

#define VkglTestCase_002746_1 "dEQP-GLES3.functional.shaders.conversions.matrix"
#define VkglTestCase_002746_2 "_combine.ivec4_ivec4_ivec4_ivec4_to_mat4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002746, VkglTestCase_002746_1, VkglTestCase_002746_2);

#define VkglTestCase_002747_1 "dEQP-GLES3.functional.shaders.conversions.matri"
#define VkglTestCase_002747_2 "x_combine.bvec4_bvec4_bvec4_bvec4_to_mat4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002747, VkglTestCase_002747_1, VkglTestCase_002747_2);

#define VkglTestCase_002748_1 "dEQP-GLES3.functional.shaders.conversions.matrix"
#define VkglTestCase_002748_2 "_combine.bvec4_bvec4_bvec4_bvec4_to_mat4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002748, VkglTestCase_002748_1, VkglTestCase_002748_2);

#define VkglTestCase_002749_1 "dEQP-GLES3.functional.shaders.conversions.matrix_combin"
#define VkglTestCase_002749_2 "e.float_ivec3_bvec3_vec4_ivec2_float_vec2_to_mat4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002749, VkglTestCase_002749_1, VkglTestCase_002749_2);

#define VkglTestCase_002750_1 "dEQP-GLES3.functional.shaders.conversions.matrix_combine"
#define VkglTestCase_002750_2 ".float_ivec3_bvec3_vec4_ivec2_float_vec2_to_mat4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002750, VkglTestCase_002750_1, VkglTestCase_002750_2);
